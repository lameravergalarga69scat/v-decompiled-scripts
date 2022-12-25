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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	bool bLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	bool bLocal_70 = 0;
	bool bLocal_71 = 0;
	bool bLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	bool bLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	bool bLocal_90 = 0;
	bool bLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
	bool bLocal_104 = 0;
	bool bLocal_105 = 0;
	var uLocal_106 = 0;
	bool bLocal_107 = 0;
	int iLocal_108 = 0;
	bool bLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	bool bLocal_112 = 0;
	bool bLocal_113 = 0;
	bool bLocal_114 = 0;
	bool bLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	bool bLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131[4] = { 0, 0, 0, 0 };
	int iLocal_132[140] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_133 = 0f;
	float fLocal_134 = 0f;
	float fLocal_135 = 0f;
	float fLocal_136 = 0f;
	float fLocal_137 = 0f;
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151[4] = { 0, 0, 0, 0 };
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	char* sLocal_205 = NULL;
	char* sLocal_206 = NULL;
	char[] cLocal_207[8] = 0;
	char* sLocal_208 = NULL;
	char* sLocal_209 = NULL;
	char* sLocal_210 = NULL;
	char* sLocal_211 = NULL;
	char* sLocal_212 = NULL;
	char* sLocal_213 = NULL;
	char* sLocal_214 = NULL;
	char* sLocal_215 = NULL;
	char* sLocal_216 = NULL;
	char* sLocal_217 = NULL;
	struct<3> Local_218 = { 0, 0, 0 } ;
	struct<3> Local_219 = { 0, 0, 0 } ;
	struct<3> Local_220 = { 0, 0, 0 } ;
	struct<3> Local_221 = { 0, 0, 0 } ;
	struct<3> Local_222 = { 0, 0, 0 } ;
	struct<3> Local_223 = { 0, 0, 0 } ;
	struct<3> Local_224 = { 0, 0, 0 } ;
	struct<3> Local_225 = { 0, 0, 0 } ;
	struct<3> Local_226 = { 0, 0, 0 } ;
	struct<3> Local_227 = { 0, 0, 0 } ;
	struct<3> Local_228 = { 0, 0, 0 } ;
	struct<3> Local_229 = { 0, 0, 0 } ;
	struct<3> Local_230 = { 0, 0, 0 } ;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_236 = 0;
	struct<9> Local_237[15];
	struct<9> Local_238[19];
	struct<2> Local_239[4];
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int* iLocal_243 = NULL;
	int* iLocal_244 = NULL;
	int iLocal_245[2] = { 0, 0 };
	int* iLocal_246 = NULL;
	int iLocal_247[4] = { 0, 0, 0, 0 };
	int iLocal_248[4] = { 0, 0, 0, 0 };
	int* iLocal_249 = NULL;
	int iLocal_250 = 0;
	int* iLocal_251 = NULL;
	int* iLocal_252 = NULL;
	int* iLocal_253 = NULL;
	int* iLocal_254 = NULL;
	int iLocal_255 = 0;
	int iLocal_256[2] = { 0, 0 };
	int iLocal_257 = 0;
	int iLocal_258[2] = { 0, 0 };
	int iLocal_259[4] = { 0, 0, 0, 0 };
	int* iLocal_260 = NULL;
	int* iLocal_261 = NULL;
	int* iLocal_262 = NULL;
	int* iLocal_263 = NULL;
	int* iLocal_264 = NULL;
	int* iLocal_265 = NULL;
	int* iLocal_266 = NULL;
	int iLocal_267[2] = { 0, 0 };
	int* iLocal_268 = NULL;
	int iLocal_269[2] = { 0, 0 };
	int* iLocal_270 = NULL;
	int iLocal_271 = 0;
	int* iLocal_272 = NULL;
	int iLocal_273 = 0;
	struct<13> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<13> Local_275 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_276 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 3;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	struct<10> Local_288[16];
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
	var uLocal_300 = 21;
	var uLocal_301 = 6;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	struct<25> Local_305[2];
	struct<25> Local_306[2];
	struct<25> Local_307[3];
	struct<25> Local_308[5];
	struct<25> Local_309[4];
	struct<25> Local_310[5];
	struct<25> Local_311[6];
	struct<25> Local_312[2];
	struct<25> Local_313[1];
	struct<25> Local_314[3];
	struct<25> Local_315[1];
	struct<25> Local_316[2];
	struct<25> Local_317[2];
	struct<25> Local_318[2];
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349[3] = { 0, 0, 0 };
	int iLocal_350 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
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
	iLocal_60 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_61 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	fLocal_133 = 1f;
	fLocal_134 = 1f;
	fLocal_135 = 0f;
	fLocal_136 = 301.9804f;
	fLocal_137 = 69.4093f;
	fLocal_138 = 2.6f;
	fLocal_139 = 0f;
	iLocal_201 = 613961892;
	iLocal_202 = 84471659;
	iLocal_203 = -2106541084;
	sLocal_205 = "misslamar1swat_rappel";
	sLocal_206 = "misslamar1ig_1";
	cLocal_207 = "LEM1AUD";
	sLocal_208 = "mattlemar";
	sLocal_209 = "lamar_1_int";
	sLocal_210 = "misstimelapse@franklinold_home";
	sLocal_211 = "scr_lamar1_door_breach";
	sLocal_212 = "lamar1_interior";
	sLocal_213 = "lamar1_carjack";
	sLocal_214 = "lamar1_01";
	sLocal_215 = "";
	sLocal_216 = "oddjobs@assassinate@vice@hooker";
	sLocal_217 = "misslamar1dead_body";
	Local_218 = { -617.2782f, -1618.6831f, 32.0105f };
	Local_219 = { -25.0062f, -1435.922f, 29.6542f };
	Local_220 = { 28.9547f, -1110.9738f, 28.2798f };
	Local_221 = { 18.4291f, -1113.362f, 28.797f };
	Local_222 = { 22.3429f, -1109.2799f, 28.797f };
	Local_223 = { 17.8331f, -1111.8099f, 28.797f };
	Local_224 = { -614.4f, -1620.3f, 33.2f };
	Local_225 = { -614.1f, -1617.7f, 33.2f };
	Local_226 = { -566.3f, -1630.5f, 33.2f };
	Local_227 = { -566.1f, -1627.9f, 33.2f };
	Local_228 = { -591.5f, -1621.4f, 33.2f };
	Local_229 = { -588.9f, -1621.6f, 33.2f };
	Local_230 = { 22.1f, -1106.6f, 29.8f };
	iLocal_325 = joaat("S_M_Y_Swat_01");
	iLocal_326 = joaat("G_M_Y_BallaEast_01");
	iLocal_327 = joaat("G_M_Y_BallaSout_01");
	iLocal_328 = joaat("polmav");
	iLocal_329 = joaat("v_ilev_rc_doorel_l");
	iLocal_330 = joaat("v_ilev_rc_doorel_r");
	iLocal_331 = joaat("v_ilev_rc_door1");
	iLocal_332 = joaat("v_ilev_rc_door1");
	iLocal_333 = joaat("jackal");
	iLocal_334 = joaat("cavalcade2");
	iLocal_335 = joaat("v_ilev_rc_door1_st");
	iLocal_336 = joaat("S_M_Y_Cop_01");
	iLocal_337 = joaat("police");
	iLocal_338 = joaat("A_M_M_GenFat_01");
	iLocal_339 = joaat("S_F_Y_Hooker_02");
	iLocal_340 = joaat("prop_gascyl_01a");
	iLocal_341 = joaat("IG_BallasOG");
	iLocal_342 = joaat("prop_recycle_light");
	iLocal_343 = joaat("prop_recycle_light");
	iLocal_344 = joaat("emperor2");
	iLocal_345 = joaat("v_ilev_fa_frontdoor");
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_741();
		iLocal_62 = 0;
		Global_95467 = 3;
		func_733();
		BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE("chop");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_724();
	if (__LIB_0__::func_323())
	{
		iVar0 = __LIB_0__::func_344();
		if (Global_94618)
		{
			if (iVar0 == 1)
			{
				iLocal_97 = 1;
			}
			iVar0++;
		}
		if (iVar0 == 0)
		{
			func_721(1, 0);
		}
		else if (iVar0 == 1)
		{
			func_721(3, 0);
		}
		else if (iVar0 == 2)
		{
			func_721(4, 0);
		}
		else if (iVar0 == 3)
		{
			func_721(6, 0);
		}
		else if (iVar0 == 4)
		{
			func_721(7, 0);
		}
		else if (iVar0 == 5)
		{
			func_721(8, 0);
		}
		else if (iVar0 > 5)
		{
			func_721(9, 0);
		}
		if (iLocal_319 <= 1)
		{
			func_704(PLAYER::PLAYER_PED_ID(), 12, 20, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		bLocal_81 = true;
	}
	else
	{
		__LIB_16__::func_309(1, 0);
		func_663(0, "GO_TO_GUN_SHOP", 0, 0, 0, 1);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_TheLongStretch", 0);
		if (iLocal_204 > MISC::GET_GAME_TIMER())
		{
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		}
		if (bLocal_81)
		{
			if (iLocal_320 == 1)
			{
				bLocal_81 = false;
			}
		}
		if (!iLocal_83)
		{
			if (iLocal_319 < 4)
			{
				__LIB_37__::func_213(28, 1);
				iLocal_83 = 1;
			}
		}
		if (iLocal_319 < 4)
		{
			if (__LIB_3__::func_200(29))
			{
				func_660(0);
			}
		}
		else if (iLocal_319 > 4)
		{
			if (!__LIB_3__::func_200(29))
			{
				func_660(1);
			}
		}
		else if (iLocal_320 == 1)
		{
			if (!__LIB_3__::func_200(29))
			{
				func_660(1);
			}
		}
		if (iLocal_320 == 1 && !iLocal_75)
		{
			if (iLocal_319 != 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_274.f_0))
				{
					if (PED::IS_PED_INJURED(Local_274.f_0))
					{
						if (PED::IS_PED_INJURED(Local_275.f_0))
						{
							func_648(8);
						}
						else
						{
							func_648(1);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_275.f_0))
				{
					if (PED::IS_PED_INJURED(Local_275.f_0))
					{
						if (PED::IS_PED_INJURED(Local_274.f_0))
						{
							func_648(8);
						}
						else
						{
							func_648(2);
						}
					}
				}
			}
			if (iLocal_319 == 1 || iLocal_319 == 3)
			{
				if (__LIB_14__::func_479(28))
				{
					func_648(9);
				}
			}
		}
		if (iLocal_320 == 1)
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
				{
					fVar2 = ENTITY::GET_ENTITY_SPEED(iVar1);
					if (fVar2 > fLocal_139)
					{
						fLocal_139 = fVar2;
						__LIB_0__::func_497(377, SYSTEM::ROUND(fLocal_139), 1);
					}
					if ((!ENTITY::DOES_ENTITY_EXIST(Global_63167) || !ENTITY::IS_ENTITY_A_VEHICLE(Global_63167)) || (ENTITY::IS_ENTITY_A_VEHICLE(Global_63167) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Global_63167) != iVar1))
					{
						__LIB_0__::func_377(iVar1, 376);
					}
				}
			}
			else if ((!ENTITY::DOES_ENTITY_EXIST(Global_63167) || !ENTITY::IS_ENTITY_A_PED(Global_63167)) || (ENTITY::IS_ENTITY_A_PED(Global_63167) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_63167) != PLAYER::PLAYER_PED_ID()))
			{
				__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), 374);
			}
		}
		if (iLocal_319 == 3 || iLocal_319 == 4)
		{
			iVar3 = PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID());
			if (iVar3 > iLocal_178)
			{
				__LIB_0__::func_630(382);
				iLocal_178 = iVar3;
			}
		}
		switch (iLocal_319)
		{
			case 0:
				func_603();
				break;
			case 1:
				func_579();
				break;
			case 2:
				func_557();
				break;
			case 3:
				func_427();
				break;
			case 4:
				func_366();
				break;
			case 5:
				func_325();
				break;
			case 6:
			case 7:
				func_273();
				break;
			case 8:
				func_152();
				break;
			case 9:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x647
{
	int iVar0;
	if (iLocal_320 == 0)
	{
		if (iLocal_62)
		{
			if (iLocal_140 != 99)
			{
				if (bLocal_81)
				{
					__LIB_0__::func_427(Local_219, 0f, 0, 0);
				}
				iLocal_140 = 99;
			}
			else if ((func_130(0, Local_219 + Vector(0f, 2f, 0f), 0, 0) && func_130(1, Local_219 + Vector(0f, 3f, 0f), 0, 0)) && func_130(5, 0f, 0f, 0f, 0, 0))
			{
				__LIB_0__::func_433(0, -1, 0);
				SYSTEM::SETTIMERB(0);
				while (SYSTEM::TIMERB() < 10000)
				{
					if (((!PED::IS_PED_INJURED(Local_274.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_274.f_0)) && (!PED::IS_PED_INJURED(Local_275.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_275.f_0))) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
					{
						SYSTEM::SETTIMERB(100000);
					}
					SYSTEM::WAIT(0);
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_219, true, false, false, true);
				iLocal_62 = 0;
			}
		}
		else
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
			}
			if (!PED::IS_PED_INJURED(Local_274.f_0) && !PED::IS_PED_INJURED(Local_275.f_0))
			{
				CUTSCENE::REQUEST_CUTSCENE("LAM_1_MCS_2", 8);
				STREAMING::REQUEST_MODEL(joaat("jackal"));
				func_36("LAM_1_MCS_2");
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_274.f_0, -1, 2048, 2);
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_274.f_0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(Local_274.f_0, 800, 0);
					TASK::TASK_LOOK_AT_ENTITY(Local_274.f_0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				}
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_275.f_0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(Local_275.f_0, 1100, 0);
					TASK::TASK_LOOK_AT_ENTITY(Local_275.f_0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				}
				if (SYSTEM::TIMERA() > 1550)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
				if (((CUTSCENE::HAS_CUTSCENE_LOADED() && STREAMING::HAS_MODEL_LOADED(joaat("jackal"))) && SYSTEM::TIMERA() > 1500) && (!__LIB_13__::func_755(&Local_276, 0) || SYSTEM::TIMERA() > 5000))
				{
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(true);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
					__LIB_37__::func_204(Local_274.f_0);
					__LIB_37__::func_204(Local_275.f_0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_274.f_0, "Lamar", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_275.f_0, "Stretch" /* GXT: Stretch */, 0, 0, 0);
					func_30();
					__LIB_0__::func_429();
					if (!__LIB_0__::func_2(0))
					{
						Global_95467 = 1;
					}
					__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::REPLAY_START_EVENT(4);
					iLocal_140 = 0;
					iLocal_63 = 0;
					iLocal_320 = 1;
				}
			}
		}
	}
	if (iLocal_320 == 1)
	{
		if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
			iLocal_63 = 1;
			iLocal_320 = 3;
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_320 = 2;
		}
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		switch (iLocal_140)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					iLocal_271 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_271, false))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_271, true, true);
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_271, Local_219, 20f, 20f, 10f, false, true, 0) && ENTITY::GET_ENTITY_MODEL(iLocal_271) != __LIB_15__::func_221(1, 1))
						{
							if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_271, -1, false))
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_271, -1, false);
							}
							if (iVar0 == 0 || iVar0 == PLAYER::PLAYER_PED_ID())
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_271, true, false);
								ENTITY::SET_ENTITY_COORDS(iLocal_271, Local_219, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iLocal_271, 359.9619f);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_271, 5f);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_271, true);
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_271, false, false, false);
								VEHICLE::SET_VEHICLE_LIGHTS(iLocal_271, 1);
							}
						}
					}
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
					MISC::CLEAR_AREA(-17.8292f, -1458.0117f, 29.4598f, 200f, true, true, false, false);
					iLocal_273 = VEHICLE::CREATE_VEHICLE(joaat("jackal"), -38.2037f, -1459.5112f, 30.3994f, 93.9805f, true, true, false);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_273, 5f);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jackal"));
					__LIB_16__::func_11();
					iLocal_140++;
				}
				break;
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
		{
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), false, 1, false);
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		}
	}
	if (iLocal_320 == 2)
	{
		if (!PED::IS_PED_INJURED(Local_274.f_0))
		{
			TASK::TASK_CLEAR_LOOK_AT(Local_274.f_0);
			if (PED::IS_PED_GROUP_MEMBER(Local_274.f_0, __LIB_0__::func_495()))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_274.f_0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_273, false))
			{
				PED::SET_PED_INTO_VEHICLE(Local_274.f_0, iLocal_273, -1);
			}
			PED::SET_PED_COMPONENT_VARIATION(Local_274.f_0, 1, 1, 0, 0);
		}
		if (!PED::IS_PED_INJURED(Local_275.f_0))
		{
			TASK::TASK_CLEAR_LOOK_AT(Local_275.f_0);
			if (PED::IS_PED_GROUP_MEMBER(Local_275.f_0, __LIB_0__::func_495()))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_275.f_0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_273, false))
			{
				PED::SET_PED_INTO_VEHICLE(Local_275.f_0, iLocal_273, 0);
			}
		}
		func_7(Local_274.f_0);
		func_7(Local_275.f_0);
		if (iLocal_63)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -24.5866f, -1452.8698f, 29.7865f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 2.6628f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			SYSTEM::WAIT(250);
			__LIB_16__::func_11();
		}
		RECORDING::REPLAY_STOP_EVENT();
		__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
		func_2(0);
	}
	if (iLocal_320 == 3)
	{
		CUTSCENE::STOP_CUTSCENE(false);
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
		iLocal_63 = 1;
		iLocal_320 = 1;
	}
}

void func_2(bool bParam0)//Position - 0xB6D
{
	if (bParam0)
	{
		if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
		{
			CUTSCENE::STOP_CUTSCENE(false);
		}
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
		__LIB_16__::func_11();
	}
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	__LIB_13__::func_782(6, 0, 0);
	__LIB_0__::func_526(0, 0);
	iLocal_99 = 1;
	func_733();
}

int func_7(int iParam0)//Position - 0xD87
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_8(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_100162))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_100163))
		{
			return 0;
		}
		Global_95447[iVar0] = 140;
		Global_100163 = iParam0;
		return 1;
	}
	Global_95447[iVar0] = 140;
	Global_95463 = 137;
	Global_100162 = iParam0;
	return 1;
}

int func_8(int iParam0)//Position - 0xDEA
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar0 == __LIB_0__::func_493(14))
	{
		return 0;
	}
	if (iVar0 == __LIB_0__::func_493(15))
	{
		return 1;
	}
	if (iVar0 == __LIB_0__::func_493(17))
	{
		return 2;
	}
	if (iVar0 == joaat("S_F_M_Maid_01"))
	{
		return 3;
	}
	if (iVar0 == joaat("S_M_M_Gardener_01"))
	{
		return 4;
	}
	if (iVar0 == joaat("IG_Denise"))
	{
		return 5;
	}
	if (iVar0 == __LIB_0__::func_493(19))
	{
		return 6;
	}
	if (iVar0 == __LIB_0__::func_493(37))
	{
		return 7;
	}
	if (iVar0 == __LIB_17__::func_706(0))
	{
		return 8;
	}
	if (iVar0 == __LIB_17__::func_706(2))
	{
		return 9;
	}
	if (iVar0 == __LIB_0__::func_493(20))
	{
		return 10;
	}
	if (iVar0 == __LIB_0__::func_493(40))
	{
		return 11;
	}
	if (iVar0 == joaat("S_F_M_Maid_01"))
	{
		return 12;
	}
	if (iVar0 == __LIB_0__::func_493(32))
	{
		return 13;
	}
	if (iVar0 == __LIB_0__::func_493(24))
	{
		return 14;
	}
	return 16;
}

void func_30()//Position - 0x1566
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_GO_TO_AMMUNATION"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_GO_TO_AMMUNATION");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_AMMUNATION_INTRO_CUTSCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_AMMUNATION_INTRO_CUTSCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_GO_TO_RECYCLING_CENTRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_GO_TO_RECYCLING_CENTRE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_GO_TO_MEETING"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_GO_TO_MEETING");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_START"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_START");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_COVER_LAMAR"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_COVER_LAMAR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_SAVE_LAMAR"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_SAVE_LAMAR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_STAIRWELL"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_STAIRWELL");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_WAREHOUSE"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_WAREHOUSE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_GET_OUTSIDE"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_GET_OUTSIDE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_ESCAPE_FIGHT_HELI"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_ESCAPE_FIGHT_HELI");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_ESCAPE_THE_JUNKYARD"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_ESCAPE_THE_JUNKYARD");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_STEAL_CAR"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_STEAL_CAR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_LOSE_COPS"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_LOSE_COPS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_DRIVE_HOME"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_DRIVE_HOME");
	}
}

void func_36(char* sParam0)//Position - 0x1764
{
	int iVar0;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (iVar0 == joaat("lamar_1_int"))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise", 0, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise", 3, 0, 1, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise", 10, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise", 4, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise_Friend", 0, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise_Friend", 3, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise_Friend", 4, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise_Friend", 2, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise_Friend", 5, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise_Friend^1", 0, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise_Friend^1", 3, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise_Friend^1", 4, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise_Friend^1", 2, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise_Friend^1", 5, 0, 1, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 2, 2, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 3, 2, 2, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 4, 5, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 5, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 1, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Stretch" /* GXT: Stretch */, 0, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Stretch" /* GXT: Stretch */, 8, 1, 0, 0);
		}
		else if (iVar0 == joaat("lam_1_mcs_1_concat"))
		{
			func_37("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
			if (!PED::IS_PED_INJURED(Local_274.f_0))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lamar", Local_274.f_0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 1, 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_275.f_0))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Stretch" /* GXT: Stretch */, Local_275.f_0, 0);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Stretch" /* GXT: Stretch */, 0, 0, 0, 0);
			}
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Ballas_OG", 3, 0, 1, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Ballas_OG", 4, 0, 1, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Ballas_OG", 10, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Ballas_OG", 0, 1, 0, 0);
		}
		else if (iVar0 == joaat("lam_1_mcs_2"))
		{
			func_37("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
			if (!PED::IS_PED_INJURED(Local_274.f_0) && !PED::IS_PED_INJURED(Local_275.f_0))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lamar", Local_274.f_0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 1, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Stretch" /* GXT: Stretch */, Local_275.f_0, 0);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Stretch" /* GXT: Stretch */, 0, 0, 0, 0);
			}
		}
		else if (iVar0 == joaat("lam_1_mcs_3"))
		{
			func_37("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
			if (!PED::IS_PED_INJURED(Local_274.f_0))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lamar", Local_274.f_0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 1, 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_275.f_0))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Stretch" /* GXT: Stretch */, Local_275.f_0, 0);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Stretch" /* GXT: Stretch */, 0, 0, 0, 0);
			}
		}
	}
}

void func_37(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x19F3
{
	struct<50> Var0;
	int iVar1;
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_38(iParam1, &Var0, iParam3);
	iVar1 = 0;
	while (iVar1 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, iVar1, Var0.f_13[iVar1], Var0[iVar1], iParam2);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (Var0.f_39[iVar1] == -1 || Var0.f_39[iVar1] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar1, -1, 0, iParam2);
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar1, Var0.f_39[iVar1], Var0.f_49[iVar1], iParam2);
		}
		iVar1++;
	}
}

void func_38(int iParam0, var uParam1, int iParam2)//Position - 0x1AAE
{
	int iVar0;
	int iVar1;
	struct<50> Var2;
	struct<14> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	Var2 = 12;
	Var2.f_13 = 12;
	Var2.f_26 = 12;
	Var2.f_39 = 9;
	Var2.f_49 = 9;
	iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_37__::func_219(iParam0, &Var2, 0, -1);
	__LIB_37__::func_219(iParam0, uParam1, iParam2, -1);
	iVar5 = 0;
	iVar6 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (uParam1->f_13[iVar0] != Var2.f_13[iVar0] || (*uParam1)[iVar0] != Var2[iVar0])
		{
			if (__LIB_0__::func_230(iVar4, __LIB_0__::func_33(iVar0), __LIB_0__::func_206(iParam0, Var2.f_13[iVar0], Var2[iVar0], __LIB_0__::func_33(iVar0)), &iVar1))
			{
				Var3 = { __LIB_12__::func_14(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (__LIB_0__::func_231(iVar4, __LIB_0__::func_33(iVar0), __LIB_0__::func_206(iParam0, Var2.f_13[iVar0], Var2[iVar0], __LIB_0__::func_33(iVar0)), &iVar1))
			{
				Var3 = { __LIB_12__::func_14(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam1->f_39[iVar0] != Var2.f_39[iVar0] || uParam1->f_49[iVar0] != Var2.f_49[iVar0])
		{
			if (__LIB_0__::func_230(iVar4, 14, __LIB_0__::func_349(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var3 = { __LIB_12__::func_14(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (__LIB_0__::func_231(iVar4, 14, __LIB_0__::func_349(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var3 = { __LIB_12__::func_14(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	if (iVar6 || iVar5)
	{
		iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar8 = __LIB_0__::func_206(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar9 = __LIB_0__::func_24(iVar4, iVar8, iVar7);
		if (iVar9 != -99)
		{
			Var3 = { __LIB_12__::func_14(iVar4, 0, iVar9, -1) };
			uParam1->f_13[0] = Var3.f_3;
			(*uParam1)[0] = Var3.f_4;
		}
	}
}

int func_130(int iParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x1A60E
{
	switch (iParam0)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_274.f_0))
			{
				__LIB_17__::func_721(19);
				if (__LIB_17__::func_720(19))
				{
					if (bParam3)
					{
						return 1;
					}
					else if (__LIB_0__::func_648(&Local_274, 19, Param1, fParam2, 1))
					{
						PED::SET_PED_CAN_BE_TARGETTED(Local_274.f_0, false);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_274.f_0, joaat("PLAYER"));
						PED::SET_PED_CONFIG_FLAG(Local_274.f_0, 182, true);
						Local_274.f_3 = 0;
						__LIB_0__::func_222(&Local_288, 5, Local_274.f_0, "LAMAR", 0, 1);
						PED::SET_PED_COMPONENT_VARIATION(Local_274.f_0, 2, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_274.f_0, 3, 2, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_274.f_0, 4, 5, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_274.f_0, 6, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_274.f_0, 5, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_274.f_0, 9, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_274.f_0, 8, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_274.f_0, 1, 1, 0, 0);
						WEAPON::GIVE_WEAPON_TO_PED(Local_274.f_0, joaat("WEAPON_PISTOL"), -1, false, true);
						WEAPON::GIVE_WEAPON_TO_PED(Local_274.f_0, joaat("WEAPON_PUMPSHOTGUN"), -1, false, true);
						return 1;
					}
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(Local_274.f_0))
				{
					PED::SET_PED_CAN_BE_TARGETTED(Local_274.f_0, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_274.f_0, joaat("PLAYER"));
					PED::SET_PED_CONFIG_FLAG(Local_274.f_0, 182, true);
					Local_274.f_3 = 0;
					if (Local_288[5 /*10*/] != Local_274.f_0)
					{
						__LIB_0__::func_222(&Local_288, 5, Local_274.f_0, "LAMAR", 0, 1);
					}
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_274.f_0, joaat("WEAPON_PISTOL"), false))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_274.f_0, joaat("WEAPON_PISTOL"), -1, false, true);
					}
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_274.f_0, joaat("WEAPON_PUMPSHOTGUN"), false))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_274.f_0, joaat("WEAPON_PUMPSHOTGUN"), -1, false, true);
					}
				}
				return 1;
			}
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_275.f_0))
			{
				__LIB_17__::func_721(37);
				if (__LIB_17__::func_720(37))
				{
					if (bParam3)
					{
						return 1;
					}
					else if (__LIB_0__::func_648(&Local_275, 37, Param1, fParam2, 1))
					{
						PED::SET_PED_CAN_BE_TARGETTED(Local_275.f_0, false);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_275.f_0, joaat("PLAYER"));
						PED::SET_PED_CONFIG_FLAG(Local_275.f_0, 182, true);
						Local_275.f_3 = 0;
						__LIB_0__::func_222(&Local_288, 7, Local_275.f_0, "STRETCH" /* GXT: Stretch */, 0, 1);
						PED::SET_PED_PROP_INDEX(Local_275.f_0, 0, 0, 0, false);
						PED::SET_PED_COMPONENT_VARIATION(Local_275.f_0, 8, 0, 0, 0);
						WEAPON::GIVE_WEAPON_TO_PED(Local_275.f_0, joaat("WEAPON_PISTOL"), -1, false, true);
						return 1;
					}
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(Local_275.f_0))
				{
					PED::SET_PED_CAN_BE_TARGETTED(Local_275.f_0, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_275.f_0, joaat("PLAYER"));
					PED::SET_PED_CONFIG_FLAG(Local_275.f_0, 182, true);
					Local_275.f_3 = 0;
					if (Local_288[7 /*10*/] != Local_274.f_0)
					{
						__LIB_0__::func_222(&Local_288, 7, Local_275.f_0, "STRETCH" /* GXT: Stretch */, 0, 1);
					}
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_275.f_0, joaat("WEAPON_PISTOL"), false))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_275.f_0, joaat("WEAPON_PISTOL"), -1, false, true);
					}
				}
				return 1;
			}
			break;
		case 4:
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("Lemar1");
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("Lemar2");
			return 1;
			break;
		case 5:
			__LIB_12__::func_761(28, 1, 0);
			return 1;
			break;
		case 6:
			if (iLocal_241 == 0)
			{
				iLocal_241 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(20.3f, -1109.7f, 30.5f, "v_gun");
			}
			else if (INTERIOR::IS_INTERIOR_READY(iLocal_241))
			{
				return 1;
			}
			else
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_241);
			}
			break;
		case 7:
			if (iLocal_240 == 0)
			{
				iLocal_240 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-624.2677f, -1619.1552f, 34.0105f, "v_recycle");
			}
			if (INTERIOR::IS_INTERIOR_READY(iLocal_240))
			{
				return 1;
			}
			else
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_240);
			}
			break;
		case 8:
			if (!PED::IS_PED_INJURED(Local_274.f_0))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_274.f_0);
				WEAPON::GIVE_WEAPON_TO_PED(Local_274.f_0, joaat("WEAPON_PISTOL"), -1, false, true);
				WEAPON::GIVE_WEAPON_TO_PED(Local_274.f_0, joaat("WEAPON_PUMPSHOTGUN"), -1, true, true);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_274.f_0, 733);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_274.f_0, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, true);
				ENTITY::SET_ENTITY_PROOFS(Local_274.f_0, false, true, false, false, false, false, false, false);
				PED::SET_PED_ALLOWED_TO_DUCK(Local_274.f_0, false);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_274.f_0, false);
				PED::SET_PED_MAX_HEALTH(Local_274.f_0, 1800);
				ENTITY::SET_ENTITY_HEALTH(Local_274.f_0, 1800, 0);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_274.f_0, false);
				PED::SET_PED_CONFIG_FLAG(Local_274.f_0, 118, false);
				PED::SET_PED_CONFIG_FLAG(Local_274.f_0, 208, true);
				PED::SET_PED_CONFIG_FLAG(Local_274.f_0, 185, true);
				PED::SET_PED_CONFIG_FLAG(Local_274.f_0, 188, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_274.f_0, 29, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_274.f_0, 35, true);
				PED::SET_PED_CAN_COWER_IN_COVER(Local_274.f_0, false);
				PED::SET_PED_ENABLE_WEAPON_BLOCKING(Local_274.f_0, true);
				WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_274.f_0, 0.5f, 0.8f);
				if (!HUD::DOES_BLIP_EXIST(Local_274.f_1))
				{
					Local_274.f_1 = __LIB_0__::func_666(Local_274.f_0, 0, 145);
				}
				Local_274.f_3 = 0;
				Local_274.f_4 = 0;
				Local_274.f_6 = -1;
				func_131(&Local_274, 2, 1, 2, 1, 0, 0f, 0f, 0f, 0);
			}
			if (!PED::IS_PED_INJURED(Local_275.f_0))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_275.f_0);
				WEAPON::GIVE_WEAPON_TO_PED(Local_275.f_0, joaat("WEAPON_PISTOL"), -1, true, true);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_275.f_0, 733);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_275.f_0, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_275.f_0, true);
				ENTITY::SET_ENTITY_PROOFS(Local_275.f_0, false, true, false, false, false, false, false, false);
				PED::SET_PED_ALLOWED_TO_DUCK(Local_275.f_0, false);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_275.f_0, false);
				PED::SET_PED_MAX_HEALTH(Local_275.f_0, 1800);
				ENTITY::SET_ENTITY_HEALTH(Local_275.f_0, 1800, 0);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_275.f_0, false);
				PED::SET_PED_CONFIG_FLAG(Local_275.f_0, 118, false);
				PED::SET_PED_CONFIG_FLAG(Local_275.f_0, 208, true);
				PED::SET_PED_CONFIG_FLAG(Local_275.f_0, 185, true);
				PED::SET_PED_CONFIG_FLAG(Local_275.f_0, 188, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_275.f_0, 29, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_275.f_0, 35, true);
				PED::SET_PED_CAN_COWER_IN_COVER(Local_275.f_0, false);
				PED::SET_PED_ENABLE_WEAPON_BLOCKING(Local_275.f_0, true);
				WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_275.f_0, 0.5f, 0.8f);
				if (!HUD::DOES_BLIP_EXIST(Local_275.f_1))
				{
					Local_275.f_1 = __LIB_0__::func_666(Local_275.f_0, 0, 145);
				}
				Local_275.f_3 = 0;
				Local_275.f_4 = 0;
				Local_275.f_6 = -1;
				func_131(&Local_275, 2, 1, 2, 1, 0, 0f, 0f, 0f, 0);
			}
			return 1;
			break;
		case 9:
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
			PED::SET_CREATE_RANDOM_COPS(false);
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(1, false);
			MISC::ENABLE_DISPATCH_SERVICE(8, false);
			MISC::ENABLE_DISPATCH_SERVICE(2, false);
			MISC::ENABLE_DISPATCH_SERVICE(6, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			return 1;
			break;
		case 10:
			AUDIO::DISTANT_COP_CAR_SIRENS(true);
			return 1;
			break;
	}
	return 0;
}

void func_131(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, struct<3> Param6, float fParam7)//Position - 0x1AC20
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		PED::SET_PED_COMBAT_MOVEMENT(*uParam0, iParam2);
		PED::SET_PED_COMBAT_ABILITY(*uParam0, iParam3);
		PED::SET_PED_COMBAT_RANGE(*uParam0, iParam4);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 2, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 14, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, iParam5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 29, true);
		PED::SET_PED_ACCURACY(*uParam0, iParam1);
		if (fParam7 != 0f)
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, Param6, fParam7, false, false);
		}
	}
}

void func_152()//Position - 0x1B922
{
	int iVar0[10];
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	struct<2> Var6;
	bool bVar7;
	int iVar8;
	var uVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	if (iLocal_320 == 0)
	{
		if (iLocal_62)
		{
			if (bLocal_81)
			{
				__LIB_0__::func_427(-604.4547f, -1700.7247f, 22.9864f, 153.9423f, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -604.4547f, -1700.7247f, 22.9864f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 153.9423f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
			while (!ENTITY::DOES_ENTITY_EXIST(Local_274.f_0) || !ENTITY::DOES_ENTITY_EXIST(Local_275.f_0))
			{
				func_130(0, -607.1035f, -1701.2744f, 23.0408f, 280.0961f, 0);
				func_130(1, -601.7869f, -1701.0348f, 22.9121f, 160.0113f, 0);
				SYSTEM::WAIT(0);
			}
			func_130(9, 0f, 0f, 0f, 0, 0);
			func_130(8, 0f, 0f, 0f, 0, 0);
			func_272(10);
			iLocal_166 = 0;
			iLocal_169 = 0;
			while (iLocal_166 < 100)
			{
				func_271();
				func_270();
				SYSTEM::WAIT(0);
			}
			__LIB_0__::func_433(0, -1, 0);
			SYSTEM::SETTIMERB(0);
			while (SYSTEM::TIMERB() < 10000)
			{
				if (((!PED::IS_PED_INJURED(Local_274.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_274.f_0)) && (!PED::IS_PED_INJURED(Local_275.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_275.f_0))) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
				{
					SYSTEM::SETTIMERB(100000);
				}
				SYSTEM::WAIT(0);
			}
			SYSTEM::WAIT(500);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			iLocal_140 = 99;
			iLocal_66 = 1;
			bLocal_103 = false;
			iLocal_62 = 0;
			iLocal_118 = 1;
		}
		else
		{
			MISC::SET_FAKE_WANTED_LEVEL(0);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
			PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			PLAYER::SET_POLICE_RADAR_BLIPS(true);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
			MISC::ENABLE_DISPATCH_SERVICE(3, true);
			MISC::ENABLE_DISPATCH_SERVICE(1, true);
			MISC::ENABLE_DISPATCH_SERVICE(8, true);
			MISC::ENABLE_DISPATCH_SERVICE(2, true);
			MISC::ENABLE_DISPATCH_SERVICE(6, true);
			MISC::ENABLE_DISPATCH_SERVICE(5, true);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), joaat("COP"));
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
			PED::SET_CREATE_RANDOM_COPS(false);
			if (!PED::IS_PED_INJURED(Local_274.f_0) && !PED::IS_PED_INJURED(Local_275.f_0))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_274.f_0, 0);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_274.f_0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, false);
				ENTITY::SET_ENTITY_PROOFS(Local_274.f_0, false, false, false, false, false, false, false, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_274.f_0, 2, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_274.f_0, 81, true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_274.f_0, false);
				PED::SET_PED_ALLOWED_TO_DUCK(Local_274.f_0, true);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_274.f_0, true);
				PED::SET_PED_CONFIG_FLAG(Local_274.f_0, 174, true);
				PED::SET_PED_CONFIG_FLAG(Local_274.f_0, 185, false);
				PED::SET_PED_CONFIG_FLAG(Local_274.f_0, 118, true);
				PED::SET_PED_CONFIG_FLAG(Local_274.f_0, 208, false);
				PED::SET_PED_CONFIG_FLAG(Local_274.f_0, 188, false);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_275.f_0, 0);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_275.f_0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_275.f_0, false);
				ENTITY::SET_ENTITY_PROOFS(Local_275.f_0, false, false, false, false, false, false, false, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_275.f_0, 2, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_275.f_0, 81, true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_275.f_0, false);
				PED::SET_PED_ALLOWED_TO_DUCK(Local_275.f_0, true);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_275.f_0, true);
				PED::SET_PED_CONFIG_FLAG(Local_275.f_0, 174, true);
				PED::SET_PED_CONFIG_FLAG(Local_275.f_0, 185, false);
				PED::SET_PED_CONFIG_FLAG(Local_275.f_0, 118, true);
				PED::SET_PED_CONFIG_FLAG(Local_275.f_0, 208, false);
				PED::SET_PED_CONFIG_FLAG(Local_275.f_0, 188, false);
			}
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
			if (!iLocal_125)
			{
				iLocal_125 = 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_262, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_262))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_262);
				}
			}
			if (!PED::IS_PED_INJURED(Local_315[0 /*25*/]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_315[0 /*25*/], false);
				TASK::CLEAR_PED_TASKS(Local_315[0 /*25*/]);
			}
			if (HUD::DOES_BLIP_EXIST(Local_315[0 /*25*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_315[0 /*25*/].f_1));
			}
			func_269(&(Local_315[0 /*25*/]), 0);
			__LIB_37__::func_206(&iLocal_262, 0);
			func_30();
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_STEAL_CAR"))
			{
				AUDIO::START_AUDIO_SCENE("LAMAR_1_STEAL_CAR");
			}
			AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", false);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_266();
				AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_CLIMB_LADDER_RESTART");
				iLocal_96 = 1;
			}
			else
			{
				iLocal_96 = 0;
			}
			__LIB_42__::func_534(103, 1);
			__LIB_42__::func_534(104, 1);
			__LIB_42__::func_534(101, 1);
			__LIB_42__::func_534(102, 1);
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				while (!CAM::IS_SCREEN_FADED_IN())
				{
					func_271();
					func_270();
					SYSTEM::WAIT(0);
				}
			}
			__LIB_16__::func_11();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_82 = 0;
			iLocal_86 = 0;
			iLocal_92 = 0;
			bLocal_95 = false;
			iLocal_126 = 0;
			iLocal_165 = 0;
			iLocal_140 = 0;
			iLocal_179 = 0;
			iLocal_180 = 0;
			iLocal_196 = 0;
			__LIB_0__::func_499(381, 0);
			func_663(5, "LOSE_COPS", 1, 0, 0, 1);
			iLocal_132[93] = 0;
			bLocal_95 = true;
			__LIB_0__::func_424(1);
			__LIB_12__::func_849(9, 0);
			__LIB_12__::func_849(8, 0);
			SYSTEM::SETTIMERA(0);
			iLocal_320 = 1;
		}
	}
	if (iLocal_320 == 1)
	{
		iVar1 = 0;
		__LIB_37__::func_205(Local_274.f_0, 1);
		__LIB_37__::func_205(Local_275.f_0, 1);
		func_236();
		bVar2 = false;
		iVar3 = 0;
		if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			SYSTEM::SETTIMERA(0);
			if (iLocal_92)
			{
				PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
				iLocal_92 = 0;
			}
			if (!iLocal_132[41])
			{
				iLocal_132[41] = 1;
			}
			if (iLocal_82)
			{
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), joaat("COP"));
				iLocal_82 = 0;
				if (!PED::IS_PED_INJURED(Local_274.f_0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_DRIVE_BY")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_COMBAT")) == 1)
					{
						TASK::CLEAR_PED_TASKS(Local_274.f_0);
					}
				}
				if (!PED::IS_PED_INJURED(Local_275.f_0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_275.f_0, joaat("SCRIPT_TASK_DRIVE_BY")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(Local_275.f_0, joaat("SCRIPT_TASK_COMBAT")) == 1)
					{
						TASK::CLEAR_PED_TASKS(Local_275.f_0);
					}
				}
			}
			AUDIO::DISTANT_COP_CAR_SIRENS(false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_336);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_337);
			if (!__LIB_13__::func_755(&Local_276, 1))
			{
				if (!iLocal_132[107])
				{
					if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_COPS4", 7, 0, 0, 0))
					{
						iLocal_132[107] = 1;
						iVar3 = 1;
					}
				}
				else if (!iLocal_132[108])
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_HOUSE", 7, 0, 0, 0))
						{
							iLocal_132[108] = 1;
							iVar3 = 1;
						}
					}
					else
					{
						iLocal_132[108] = 1;
					}
				}
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_LOSE_COPS"))
			{
				AUDIO::STOP_AUDIO_SCENE("LAMAR_1_LOSE_COPS");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_DRIVE_HOME"))
			{
				AUDIO::START_AUDIO_SCENE("LAMAR_1_DRIVE_HOME");
			}
		}
		else
		{
			if (!iLocal_92)
			{
				if (((((((SYSTEM::TIMERA() > 60000 && !__LIB_0__::func_875(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1, 0, 0)) && !__LIB_0__::func_875(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2, 0, 0)) && !__LIB_0__::func_875(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3, 0, 0)) && !__LIB_0__::func_875(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 4, 0, 0)) && !__LIB_0__::func_875(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 5, 0, 0)) && !__LIB_0__::func_875(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 6, 0, 0)) && !__LIB_0__::func_875(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 7, 0, 0))
				{
					PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
					iLocal_92 = 1;
				}
			}
			if (!iLocal_132[109])
			{
				if (SYSTEM::TIMERA() < 7000)
				{
					PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
					PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				}
				if ((SYSTEM::TIMERA() > 7000 && __LIB_12__::func_94(PLAYER::PLAYER_PED_ID(), Local_274.f_0)) && __LIB_12__::func_94(PLAYER::PLAYER_PED_ID(), Local_275.f_0))
				{
					if (__LIB_0__::func_323())
					{
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
						{
							__LIB_0__::func_151("LEM1_SPECHELP_KM", -1);
						}
						else
						{
							__LIB_0__::func_151("LEM1_SPECHELP", -1);
						}
					}
					iLocal_132[109] = 1;
				}
			}
			else if (!iLocal_132[110])
			{
				bVar4 = false;
				if (MISC::IS_PC_VERSION())
				{
					if (__LIB_0__::func_1("LEM1_SPECHELP_KM"))
					{
						bVar4 = true;
					}
				}
				if (!iLocal_132[110])
				{
					if (((!__LIB_0__::func_1("LEM1_SPECHELP") && !bVar4) && __LIB_12__::func_94(PLAYER::PLAYER_PED_ID(), Local_274.f_0)) && __LIB_12__::func_94(PLAYER::PLAYER_PED_ID(), Local_275.f_0))
					{
						__LIB_0__::func_151("LEM1_ALLEYHELP", -1);
						iLocal_132[110] = 1;
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_274.f_0))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true)) > 2500f)
				{
					if (PED::IS_PED_IN_COMBAT(Local_274.f_0, 0))
					{
						PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
						PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
						PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
						PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_275.f_0))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true)) > 2500f)
				{
					if (PED::IS_PED_IN_COMBAT(Local_275.f_0, 0))
					{
						PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
						PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
						PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
						PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
					}
				}
			}
			if (!iLocal_82)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), joaat("COP"));
				iLocal_82 = 1;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_LOSE_COPS"))
				{
					AUDIO::START_AUDIO_SCENE("LAMAR_1_LOSE_COPS");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_DRIVE_HOME"))
				{
					AUDIO::STOP_AUDIO_SCENE("LAMAR_1_DRIVE_HOME");
				}
			}
			if (!__LIB_13__::func_755(&Local_276, 1))
			{
				if (!iLocal_132[41])
				{
					if (bLocal_103)
					{
						if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_DEAD", 7, 0, 0, 0))
						{
							iLocal_132[41] = 1;
							bVar2 = true;
						}
					}
					else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
					{
						if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_COPS1", 7, 0, 0, 0))
						{
							iLocal_132[41] = 1;
							bVar2 = true;
						}
					}
					else if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_STRCOPS", 7, 0, 0, 0))
					{
						iLocal_132[41] = 1;
						bVar2 = true;
					}
				}
				else if (MISC::GET_GAME_TIMER() - iLocal_153) > (13000 + iLocal_179 * 500)
				{
					if ((__LIB_0__::func_570(PLAYER::PLAYER_PED_ID(), Local_274.f_0) && __LIB_0__::func_570(PLAYER::PLAYER_PED_ID(), Local_275.f_0)) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 8) == 0)
							{
								if (!iLocal_132[112])
								{
									iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
									{
										if (ENTITY::GET_ENTITY_SPEED(iVar5) > 10f)
										{
											if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_COPS2B", 7, 0, 0, 0))
											{
												iLocal_132[112] = 1;
												iLocal_153 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(-3000, 2000));
												bVar2 = true;
												iLocal_179++;
											}
										}
									}
								}
							}
							else if (iLocal_179 < 7)
							{
								if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_COPS2", 7, 0, 0, 0))
								{
									iLocal_153 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(-3000, 2000));
									bVar2 = true;
									iLocal_179++;
								}
							}
						}
						else if (iLocal_180 < 7)
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_COPS3", 7, 0, 0, 0))
							{
								iLocal_153 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(-3000, 2000));
								bVar2 = true;
								iLocal_180++;
							}
						}
					}
				}
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_274.f_1))
		{
			func_213();
		}
		func_271();
		func_270();
		if (iLocal_132[41] && !bVar2)
		{
			StringCopy(&Var6, "LEM1_GOFRANKLIN", 16);
			if (!iLocal_132[108] || iVar3)
			{
				StringCopy(&Var6, "", 16);
				MISC::CLEAR_BIT(&(Local_276.f_13), 2);
			}
			switch (iLocal_140)
			{
				case 0:
					if (iLocal_166 == 100)
					{
						if (!bLocal_95)
						{
							if (__LIB_0__::func_570(PLAYER::PLAYER_PED_ID(), Local_274.f_0) && __LIB_0__::func_570(PLAYER::PLAYER_PED_ID(), Local_275.f_0))
							{
								bLocal_95 = true;
							}
						}
						if (!iLocal_96)
						{
							PED::GET_PED_NEARBY_PEDS(Local_274.f_0, &iVar0, -1);
							iVar1 = 0;
							while (iVar1 < iVar0)
							{
								if (!PED::IS_PED_INJURED(iVar0[iVar1]))
								{
									if (ENTITY::GET_ENTITY_MODEL(iVar0[iVar1]) == joaat("S_M_Y_Cop_01") || ENTITY::GET_ENTITY_MODEL(iVar0[iVar1]) == joaat("S_M_Y_Swat_01"))
									{
										if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar0[iVar1], true), ENTITY::GET_ENTITY_COORDS(Local_274.f_0, false)) < 10000f)
										{
											iLocal_96 = 1;
										}
									}
								}
								iVar1++;
							}
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
							{
								iLocal_96 = 1;
							}
						}
						else if (bLocal_95)
						{
							if (func_211(&Local_276, Local_219, 0.001f, 0.001f, 2f, 1, Local_274.f_0, Local_275.f_0, 0, &Var6, "LEM1_LEFTLEMAR", "LEM1_LEFTSTRET", "", "LEM1_LEFTBOTH", 0, 1, 1, -1))
							{
							}
						}
						else if (func_173(&Local_276, Local_219, 0.001f, 0.001f, 2f, 1, Local_274.f_0, Local_275.f_0, 0, &Var6, "LEM1_LEFTLEMAR", "LEM1_LEFTSTRET", "", "LEM1_LEFTBOTH", "LEM1_FINDCAR", "LEM1_BACKVEH", 0, 1, 3, 1, -1))
						{
						}
						if (HUD::DOES_BLIP_EXIST(Local_276.f_5))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -23.994032f, -1431.219f, 29.655334f, -23.948074f, -1443.3763f, 32.4042f, 4.75f, false, true, 0))
							{
								__LIB_16__::func_318(&Local_276, 1, 0);
								if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
								{
									__LIB_0__::func_366(0);
								}
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 8f, 4);
								iLocal_140++;
							}
						}
						if ((HUD::DOES_BLIP_EXIST(Local_276.f_5) && __LIB_0__::func_570(PLAYER::PLAYER_PED_ID(), Local_274.f_0)) && __LIB_0__::func_570(PLAYER::PLAYER_PED_ID(), Local_275.f_0))
						{
							if (__LIB_0__::func_568())
							{
								__LIB_0__::func_620(0);
							}
							if (!iLocal_132[113])
							{
								if (!__LIB_13__::func_755(&Local_276, 1))
								{
									if (!iLocal_132[114])
									{
										if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_CHAT2", 7, 0, 0, 0))
										{
											iLocal_132[114] = 1;
										}
									}
								}
							}
						}
						else if (((iLocal_132[115] || iLocal_132[116]) || iLocal_132[117]) || iLocal_132[114])
						{
							if (!iLocal_132[113])
							{
								if (!__LIB_0__::func_568())
								{
									__LIB_0__::func_620(1);
								}
							}
						}
					}
					break;
				case 1:
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iVar8 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar8, false) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 27 /*INPUT_PHONE*/, true);
						if (__LIB_0__::func_213(iVar8, 1093140480, 5, 1056964608, 0, 1, 0))
						{
							if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
							}
							bVar7 = true;
						}
					}
					else
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
						}
						bVar7 = true;
					}
					if (!iLocal_132[113])
					{
						if (__LIB_0__::func_568())
						{
							__LIB_0__::func_620(0);
						}
						if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_BACK", 7, 0, 0, 0))
						{
							iLocal_132[113] = 1;
						}
						else
						{
							__LIB_0__::func_638();
						}
					}
					else if (bVar7)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
						iLocal_320 = 2;
					}
					break;
				}
		}
		if (!iLocal_132[113])
		{
			if (((HUD::DOES_BLIP_EXIST(Local_276.f_5) || iLocal_140 > 0) && !PED::IS_PED_INJURED(Local_274.f_0)) && !PED::IS_PED_INJURED(Local_275.f_0))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_219) < 1225f)
				{
					if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						MemCopy(&uVar9, {__LIB_0__::func_486()}, 4);
						if ((MISC::ARE_STRINGS_EQUAL(&uVar9, "LEM1_CHAT2") || MISC::ARE_STRINGS_EQUAL(&uVar9, "LEM1_CHAT1")) || MISC::ARE_STRINGS_EQUAL(&uVar9, "LEM1_HOME"))
						{
							__LIB_0__::func_638();
						}
					}
				}
			}
		}
		switch (iLocal_165)
		{
			case 0:
				if ((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(Local_274.f_0)) && !PED::IS_PED_INJURED(Local_275.f_0)) && PED::IS_PED_IN_ANY_VEHICLE(Local_274.f_0, false)) && PED::IS_PED_IN_ANY_VEHICLE(Local_275.f_0, false))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_ENTER_CAR");
					iLocal_165++;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					iLocal_165++;
				}
				break;
			case 1:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						AUDIO::PREPARE_MUSIC_EVENT("LM1_COPS_LOST_RADIO");
						if (iLocal_132[107])
						{
							AUDIO::SET_AUDIO_FLAG("SpeechDucksScore", true);
							AUDIO::TRIGGER_MUSIC_EVENT("LM1_COPS_LOST_RADIO");
							bVar10 = true;
						}
					}
					else
					{
						AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_LOST_ON_FOOT");
						bVar10 = true;
					}
				}
				if (bVar10)
				{
					__LIB_0__::func_498(0, -1);
					AUDIO::PLAY_POLICE_REPORT("LAMAR_1_POLICE_LOST", 0f);
					iLocal_165++;
				}
				break;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_STEAL_CAR"))
			{
				AUDIO::STOP_AUDIO_SCENE("LAMAR_1_STEAL_CAR");
			}
		}
		if (!iLocal_126)
		{
			if (iLocal_196 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar11 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (!ENTITY::IS_ENTITY_DEAD(iVar11, false))
					{
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iVar11, false);
						iLocal_196 = MISC::GET_GAME_TIMER();
						iLocal_126 = 1;
					}
				}
			}
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_196) > 30000)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar12 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (!ENTITY::IS_ENTITY_DEAD(iVar12, false))
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iVar12, true);
					iLocal_126 = 0;
				}
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_276.f_5))
		{
			if (!iLocal_86)
			{
				__LIB_16__::func_17(&(Local_276.f_5), -13.3369f, -1457.3818f, 29.4549f, 274.288f);
				iLocal_86 = 1;
			}
		}
		else
		{
			iLocal_86 = 0;
			func_155();
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_219) < (100f * 100f))
		{
			CUTSCENE::REQUEST_CUTSCENE("LAM_1_MCS_2", 8);
			func_36("LAM_1_MCS_2");
		}
		if (iLocal_98)
		{
			if ((PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && (!PED::IS_PED_INJURED(Local_274.f_0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_274.f_0))) && (!PED::IS_PED_INJURED(Local_274.f_0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_275.f_0)))
			{
				VEHICLE::REMOVE_VEHICLE_ASSET(iLocal_333);
				iLocal_98 = 0;
			}
		}
	}
	if (iLocal_320 == 2)
	{
		func_213();
		__LIB_16__::func_318(&Local_276, 1, 0);
		func_153(&Local_316, 0);
		func_153(&Local_317, 0);
		func_153(&Local_318, 0);
		func_269(&iLocal_251, 0);
		func_269(&iLocal_252, 0);
		func_269(&iLocal_253, 0);
		__LIB_37__::func_206(&iLocal_264, 0);
		__LIB_37__::func_206(&iLocal_265, 0);
		__LIB_37__::func_206(&iLocal_266, 0);
		__LIB_37__::func_206(&iLocal_272, 0);
		__LIB_37__::func_206(&iLocal_263, 0);
		STREAMING::REMOVE_ANIM_DICT(sLocal_216);
		AUDIO::DISTANT_COP_CAR_SIRENS(false);
		PED::SET_CREATE_RANDOM_COPS(true);
		__LIB_0__::func_424(0);
		SYSTEM::SETTIMERA(0);
		iLocal_320 = 0;
		iLocal_319 = 9;
	}
	if (iLocal_320 == 3)
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_219, true, false, false, true);
		if (!PED::IS_PED_INJURED(Local_274.f_0))
		{
			ENTITY::SET_ENTITY_COORDS(Local_274.f_0, Local_219 + Vector(0f, 1f, 0f), true, false, false, true);
		}
		if (!PED::IS_PED_INJURED(Local_275.f_0))
		{
			ENTITY::SET_ENTITY_COORDS(Local_275.f_0, Local_219 + Vector(0f, 0f, 1f), true, false, false, true);
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		iLocal_320 = 2;
	}
}

void func_153(int iParam0, bool bParam1)//Position - 0x1CB74
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (HUD::DOES_BLIP_EXIST((iParam0[iVar0 /*25*/])->f_1))
		{
			HUD::REMOVE_BLIP(&((iParam0[iVar0 /*25*/])->f_1));
		}
		__LIB_0__::func_621(&((iParam0[iVar0 /*25*/])->f_17));
		if ((iParam0[iVar0 /*25*/])->f_10 != 0)
		{
			PHYSICS::DELETE_ROPE(&((iParam0[iVar0 /*25*/])->f_10));
			(iParam0[iVar0 /*25*/])->f_10 = 0;
		}
		TASK::REMOVE_COVER_POINT((iParam0[iVar0 /*25*/])->f_4);
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*25*/]))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM((*iParam0)[iVar0 /*25*/], -8f, true);
			if (!PED::IS_PED_IN_ANY_VEHICLE((*iParam0)[iVar0 /*25*/], false) && PED::GET_PED_RELATIONSHIP_GROUP_HASH((*iParam0)[iVar0 /*25*/]) == iLocal_346)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_COMBAT_PED((*iParam0)[iVar0 /*25*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				else if (!PED::IS_PED_INJURED(Local_274.f_0))
				{
					TASK::TASK_COMBAT_PED((*iParam0)[iVar0 /*25*/], Local_274.f_0, 0, 16);
				}
				else if (!PED::IS_PED_INJURED(Local_275.f_0))
				{
					TASK::TASK_COMBAT_PED((*iParam0)[iVar0 /*25*/], Local_275.f_0, 0, 16);
				}
				PED::SET_PED_KEEP_TASK((*iParam0)[iVar0 /*25*/], true);
			}
		}
		func_269(iParam0[iVar0 /*25*/], bParam1);
		(iParam0[iVar0 /*25*/])->f_2 = 0;
		(iParam0[iVar0 /*25*/])->f_5 = 0;
		(iParam0[iVar0 /*25*/])->f_7 = 0;
		iVar0++;
	}
}

void func_155()//Position - 0x1CD25
{
	if (!PED::IS_PED_INJURED(Local_275.f_0))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true)) > 22500f)
		{
			if (!PED::IS_PED_INJURED(Local_274.f_0))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true)) > 10000f)
				{
					func_648(7);
				}
				else
				{
					func_648(6);
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(Local_274.f_0))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true)) > 22500f)
		{
			if (!PED::IS_PED_INJURED(Local_275.f_0))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true)) > 10000f)
				{
					func_648(7);
				}
				else
				{
					func_648(5);
				}
			}
		}
	}
}

bool func_173(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, bool bParam14, bool bParam15, int iParam16, bool bParam17, int iParam18)//Position - 0x1D49F
{
	return func_174(iParam0, Param1, Param2, __LIB_0__::func_613(), __LIB_0__::func_613(), bParam3, 5, iParam4, iParam5, iParam6, 0, sParam7, sParam8, sParam9, sParam10, sParam11, sParam12, bParam14, bParam15, sParam13, 0, iParam16, bParam17, iParam18, 0, 0, 0, 1, 1065353216);
}

int func_174(int* iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, char* sParam24, char* sParam25, char* sParam26, bool bParam27, float fParam28)//Position - 0x1D4E9
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	iParam0->f_17[0] = iParam7;
	iParam0->f_17[1] = iParam8;
	iParam0->f_17[2] = iParam9;
	iParam0->f_16 = iParam7;
	__LIB_0__::func_590(iParam0);
	__LIB_0__::func_589(iParam0);
	__LIB_0__::func_496();
	if (__LIB_17__::func_196(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, sParam24, sParam25, sParam26, iParam6, bParam18))
	{
		__LIB_0__::func_576(sParam12);
		__LIB_0__::func_576(sParam13);
		__LIB_0__::func_576(sParam14);
		__LIB_0__::func_576(sParam15);
		if (CAM::IS_SCREEN_FADED_IN())
		{
			bVar1 = false;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, false))
				{
					MISC::SET_BIT(&(iParam0->f_13), 3);
					if (!BitTest(iParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(iParam0->f_13), 4);
					}
					if (BitTest(iParam0->f_13, 23))
					{
						MISC::CLEAR_BIT(&(iParam0->f_13), 23);
					}
					MISC::SET_BIT(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (__LIB_16__::func_320(iParam0, iParam21))
				{
					MISC::SET_BIT(&(iParam0->f_13), 3);
					if (!BitTest(iParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(iParam0->f_13), 4);
					}
					MISC::SET_BIT(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				__LIB_0__::func_576(sParam16);
				__LIB_0__::func_576(sParam19);
				__LIB_0__::func_576("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */);
				if (bParam18 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_5));
						__LIB_0__::func_576(sParam11);
					}
					if (HUD::DOES_BLIP_EXIST(*iParam0))
					{
						HUD::REMOVE_BLIP(iParam0);
					}
					if ((!__LIB_13__::func_755(iParam0, 1) && !__LIB_0__::func_573(iParam0)) && !BitTest(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							__LIB_0__::func_572(iParam0, "LOSE_WANTED" /* GXT: Lose the Cops. */, 0);
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								__LIB_0__::func_640(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(iParam0->f_13), 0);
						MISC::CLEAR_BIT(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (BitTest(iParam0->f_13, 0))
					{
						__LIB_0__::func_576("LOSE_WANTED" /* GXT: Lose the Cops. */);
						MISC::CLEAR_BIT(&(iParam0->f_13), 0);
						MISC::SET_BIT(&(iParam0->f_13), 1);
					}
					if (BitTest(iParam0->f_13, 1))
					{
						if (!__LIB_13__::func_755(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								__LIB_0__::func_640(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(iParam0->f_13), 1);
						}
					}
					if (!HUD::DOES_BLIP_EXIST(iParam0->f_5))
					{
						if (HUD::DOES_BLIP_EXIST(*iParam0))
						{
							HUD::REMOVE_BLIP(iParam0);
						}
						iParam0->f_5 = __LIB_0__::func_488(Var3, 0);
						if (!iParam23 == -1)
						{
							HUD::SET_BLIP_SPRITE(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							__LIB_0__::func_571(iParam0->f_5, iParam0);
						}
					}
					else if (!__LIB_0__::func_490(Var3, HUD::GET_BLIP_COORDS(iParam0->f_5), 0.1f, 0))
					{
						HUD::SET_BLIP_COORDS(iParam0->f_5, Var3);
						if (bParam27)
						{
							__LIB_0__::func_571(iParam0->f_5, iParam0);
						}
					}
					if (!__LIB_13__::func_755(iParam0, 2))
					{
						if (!BitTest(iParam0->f_13, 2))
						{
							__LIB_0__::func_572(iParam0, sParam11, 0);
							MISC::SET_BIT(&(iParam0->f_13), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (BitTest(iParam0->f_13, 13))
						{
							bParam5 = false;
						}
					}
					bVar1 = false;
					bVar4 = false;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						bVar4 = true;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param2, bParam5, bVar4, iVar5);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Param3, Param4, fParam28, false, bVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param2, bParam5, bVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									if (!PED::IS_PED_IN_VEHICLE(iParam0->f_17[iVar2], iVar0, false))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!PED::IS_PED_IN_VEHICLE(iParam0->f_17[iVar2], iParam10, false))
									{
										bVar1 = false;
									}
								}
								else if (!PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar2], __LIB_0__::func_495()) || !__LIB_13__::func_742(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (__LIB_13__::func_754(iParam0))
							{
								__LIB_0__::func_576(sParam11);
								__LIB_0__::func_576(sParam16);
								__LIB_0__::func_576(sParam12);
								__LIB_0__::func_576(sParam13);
								__LIB_0__::func_576(sParam14);
								__LIB_0__::func_576(sParam15);
								__LIB_0__::func_576("LOSE_WANTED" /* GXT: Lose the Cops. */);
								__LIB_0__::func_576("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */);
								__LIB_0__::func_576(sParam19);
								__LIB_16__::func_318(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam10))
			{
				if ((bParam18 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && (!BitTest(iParam0->f_13, 9) && !BitTest(iParam0->f_13, 22)))
				{
					__LIB_0__::func_576(sParam16);
					__LIB_0__::func_576(sParam19);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_5) || HUD::DOES_BLIP_EXIST(*iParam0))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_5));
						HUD::REMOVE_BLIP(iParam0);
						__LIB_0__::func_576(sParam11);
					}
					if ((!__LIB_13__::func_755(iParam0, 1) && !__LIB_0__::func_573(iParam0)) && !BitTest(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							__LIB_0__::func_572(iParam0, "LOSE_WANTED" /* GXT: Lose the Cops. */, 0);
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								__LIB_0__::func_640(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(iParam0->f_13), 0);
						MISC::CLEAR_BIT(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (BitTest(iParam0->f_13, 0))
					{
						__LIB_0__::func_576("LOSE_WANTED" /* GXT: Lose the Cops. */);
						MISC::CLEAR_BIT(&(iParam0->f_13), 0);
						MISC::SET_BIT(&(iParam0->f_13), 1);
					}
					if (BitTest(iParam0->f_13, 1))
					{
						if (!__LIB_13__::func_755(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								__LIB_0__::func_640(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(iParam0->f_13), 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, false))
					{
						if (!HUD::DOES_BLIP_EXIST(*iParam0))
						{
							if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
							{
								HUD::REMOVE_BLIP(&(iParam0->f_5));
								__LIB_0__::func_576(sParam11);
							}
							*iParam0 = __LIB_0__::func_639(iParam10, 0, 0);
							HUD::SET_BLIP_DISPLAY(*iParam0, 2);
							if (!BitTest(iParam0->f_13, 4))
							{
								__LIB_0__::func_571(*iParam0, iParam0);
							}
						}
						if (!__LIB_13__::func_755(iParam0, 2))
						{
							if (!BitTest(iParam0->f_13, 3))
							{
								__LIB_0__::func_572(iParam0, sParam16, 0);
								MISC::SET_BIT(&(iParam0->f_13), 3);
								MISC::CLEAR_BIT(&(iParam0->f_13), 4);
							}
							else if (BitTest(iParam0->f_13, 9))
							{
								if (!MISC::IS_STRING_NULL(sParam19))
								{
									if (!BitTest(iParam0->f_13, 4))
									{
										__LIB_0__::func_572(iParam0, sParam19, 0);
										MISC::SET_BIT(&(iParam0->f_13), 4);
									}
								}
								else if (!BitTest(iParam0->f_13, 4))
								{
									__LIB_0__::func_572(iParam0, sParam16, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
								if (!BitTest(iParam0->f_13, 23))
								{
									if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
									{
										__LIB_0__::func_640(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									MISC::SET_BIT(&(iParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_5));
					__LIB_0__::func_576(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!__LIB_13__::func_755(iParam0, 2))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (!BitTest(iParam0->f_13, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!PED::IS_PED_INJURED(iParam0->f_17[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar6);
									if (!PED::IS_PED_INJURED(iParam0->f_17[iVar7]))
									{
										__LIB_0__::func_640(iParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									__LIB_0__::func_572(iParam0, "MORE_SEATS" /* GXT: A vehicle with more seats is needed. */, 0);
									MISC::SET_BIT(&(iParam0->f_13), 13);
								}
							}
							else if (!BitTest(iParam0->f_13, 3))
							{
								__LIB_0__::func_572(iParam0, sParam16, 0);
								MISC::SET_BIT(&(iParam0->f_13), 3);
								MISC::CLEAR_BIT(&(iParam0->f_13), 4);
							}
							else if (!BitTest(iParam0->f_13, 4))
							{
								if (BitTest(iParam0->f_13, 9))
								{
									__LIB_0__::func_572(iParam0, sParam19, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!__LIB_13__::func_755(iParam0, 2))
					{
						if (!BitTest(iParam0->f_13, 3))
						{
							__LIB_0__::func_572(iParam0, sParam16, 0);
							MISC::SET_BIT(&(iParam0->f_13), 3);
							MISC::CLEAR_BIT(&(iParam0->f_13), 4);
						}
						else if (BitTest(iParam0->f_13, 9))
						{
							if (!MISC::IS_STRING_NULL(sParam19))
							{
								if (!BitTest(iParam0->f_13, 4))
								{
									__LIB_0__::func_572(iParam0, sParam19, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
							}
							else if (!BitTest(iParam0->f_13, 4))
							{
								__LIB_0__::func_572(iParam0, sParam16, 0);
								MISC::SET_BIT(&(iParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (BitTest(iParam0->f_13, 0))
		{
			MISC::CLEAR_BIT(&(iParam0->f_13), 0);
		}
		__LIB_0__::func_576(sParam11);
		__LIB_0__::func_576(sParam16);
		__LIB_0__::func_576(sParam19);
		__LIB_0__::func_576(sParam16);
		__LIB_0__::func_576("LOSE_WANTED" /* GXT: Lose the Cops. */);
		if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_5));
		}
		if (HUD::DOES_BLIP_EXIST(*iParam0))
		{
			HUD::REMOVE_BLIP(iParam0);
		}
	}
	MISC::CLEAR_BIT(&(iParam0->f_13), 11);
	MISC::CLEAR_BIT(&(iParam0->f_13), 12);
	return 0;
}

bool func_211(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)//Position - 0x1FBBE
{
	return func_174(iParam0, Param1, Param2, __LIB_0__::func_613(), __LIB_0__::func_613(), bParam3, 1, iParam4, iParam5, iParam6, 0, sParam7, sParam8, sParam9, sParam10, sParam11, __LIB_0__::func_591(), bParam12, bParam13, __LIB_0__::func_591(), 0, 0, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

void func_213()//Position - 0x1FC15
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(iLocal_231))
	{
		HUD::REMOVE_BLIP(&iLocal_231);
	}
	if (HUD::DOES_BLIP_EXIST(Local_274.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_274.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_275.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_275.f_1));
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_239.f_0)
	{
		if (HUD::DOES_BLIP_EXIST(Local_239[iVar0 /*2*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_239[iVar0 /*2*/].f_1));
		}
		iVar0++;
	}
}

void func_236()//Position - 0x212CC
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	if (iLocal_66)
	{
		iVar0 = 0;
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if ((!Local_316[0 /*25*/].f_2 || !Local_317[0 /*25*/].f_2) || !Local_318[0 /*25*/].f_2)
			{
				STREAMING::REQUEST_MODEL(iLocal_336);
				STREAMING::REQUEST_MODEL(iLocal_337);
			}
		}
		if (!Local_316[0 /*25*/].f_2)
		{
			iLocal_197 = 0;
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_336) && STREAMING::HAS_MODEL_LOADED(iLocal_337))
				{
					if (Local_316[0 /*25*/].f_7 == 0)
					{
						Local_316[0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - Local_316[0 /*25*/].f_7) > 3000 || iLocal_118)
					{
						iLocal_264 = VEHICLE::CREATE_VEHICLE(iLocal_337, -477.9164f, -1776.6316f, 19.8944f, 89.4953f, true, true, false);
						Local_316[0 /*25*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_264, 6, iLocal_336, -1, true, true);
						Local_316[1 /*25*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_264, 6, iLocal_336, 0, true, true);
						iVar0 = 0;
						while (iVar0 < Local_316.f_0)
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_316[iVar0 /*25*/], joaat("WEAPON_PISTOL"), -1, true, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_316[iVar0 /*25*/], 58, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_316[iVar0 /*25*/], true);
							Local_316[iVar0 /*25*/].f_2 = 1;
							Local_316[iVar0 /*25*/].f_5 = 0;
							iVar0++;
						}
						iLocal_197 = MISC::GET_GAME_TIMER();
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_264, true, true, false);
						VEHICLE::SET_VEHICLE_LIGHTS(iLocal_264, 2);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_264, true);
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_316.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_316[iVar0 /*25*/]))
				{
					if (!PED::IS_PED_INJURED(Local_316[iVar0 /*25*/]))
					{
						if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							switch (Local_316[iVar0 /*25*/].f_5)
							{
								case 0:
									Local_316[iVar0 /*25*/].f_14 = { -579.4522f, -1728.0026f, 21.714f };
									if (iVar0 == 0)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_264, false))
										{
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_316[iVar0 /*25*/], iLocal_264, Local_316[iVar0 /*25*/].f_14, 20f, 0, iLocal_337, 786469, 4f, 5f);
										}
									}
									Local_316[iVar0 /*25*/].f_7 = 0;
									Local_316[iVar0 /*25*/].f_5++;
									break;
								case 1:
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_316[iVar0 /*25*/], true), Local_316[iVar0 /*25*/].f_14) < 25f || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_316[iVar0 /*25*/], true), Var2) < 100f)
									{
										if (iVar0 == 0)
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_264, false))
											{
												TASK::TASK_VEHICLE_TEMP_ACTION(Local_316[iVar0 /*25*/], iLocal_264, 20, 1000);
											}
										}
										Local_316[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
										Local_316[iVar0 /*25*/].f_5++;
									}
									break;
								case 2:
									if ((MISC::GET_GAME_TIMER() - Local_316[iVar0 /*25*/].f_7) > 2000)
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar1);
										TASK::TASK_LEAVE_ANY_VEHICLE(0, iVar0 * 200, 256);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
										TASK::CLOSE_SEQUENCE_TASK(iVar1);
										TASK::TASK_PERFORM_SEQUENCE(Local_316[iVar0 /*25*/], iVar1);
										TASK::CLEAR_SEQUENCE_TASK(&iVar1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_316[iVar0 /*25*/], false);
										Local_316[iVar0 /*25*/].f_7 = 0;
										Local_316[iVar0 /*25*/].f_5++;
									}
									break;
								case 3:
									if (PED::IS_PED_IN_COMBAT(Local_316[iVar0 /*25*/], 0))
									{
										func_237(&(Local_316[iVar0 /*25*/]), 0);
									}
									break;
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_316[iVar0 /*25*/]);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_316[iVar0 /*25*/], false);
							func_237(&(Local_316[iVar0 /*25*/]), 0);
						}
					}
					else
					{
						func_237(&(Local_316[iVar0 /*25*/]), 0);
					}
				}
				else
				{
					__LIB_37__::func_206(&iLocal_264, 0);
				}
				iVar0++;
			}
		}
		if (!Local_317[0 /*25*/].f_2)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_336) && STREAMING::HAS_MODEL_LOADED(iLocal_337))
				{
					if (Local_317[0 /*25*/].f_7 == 0)
					{
						Local_317[0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - Local_317[0 /*25*/].f_7) > 3000 || iLocal_118)
					{
						iLocal_265 = VEHICLE::CREATE_VEHICLE(iLocal_337, -471.361f, -1782.5648f, 19.886f, 94.4439f, true, true, false);
						Local_317[0 /*25*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_265, 6, iLocal_336, -1, true, true);
						Local_317[1 /*25*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_265, 6, iLocal_336, 0, true, true);
						iVar0 = 0;
						while (iVar0 < Local_317.f_0)
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_317[iVar0 /*25*/], joaat("WEAPON_PISTOL"), -1, true, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_317[iVar0 /*25*/], 58, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_317[iVar0 /*25*/], true);
							Local_317[iVar0 /*25*/].f_2 = 1;
							Local_317[iVar0 /*25*/].f_5 = 0;
							iVar0++;
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_265, true, true, false);
						VEHICLE::SET_VEHICLE_LIGHTS(iLocal_265, 2);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_265, true);
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_317.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_317[iVar0 /*25*/]))
				{
					if (!PED::IS_PED_INJURED(Local_317[iVar0 /*25*/]))
					{
						if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							switch (Local_317[iVar0 /*25*/].f_5)
							{
								case 0:
									Local_317[iVar0 /*25*/].f_14 = { -569.6553f, -1740.9001f, 21.358f };
									if (iVar0 == 0)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_265, false))
										{
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_317[iVar0 /*25*/], iLocal_265, Local_317[iVar0 /*25*/].f_14, 20f, 0, iLocal_337, 786469, 4f, 5f);
										}
									}
									Local_317[iVar0 /*25*/].f_7 = 0;
									Local_317[iVar0 /*25*/].f_5++;
									break;
								case 1:
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_317[iVar0 /*25*/], true), Local_317[iVar0 /*25*/].f_14) < 25f || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_317[iVar0 /*25*/], true), Var2) < 100f)
									{
										if (iVar0 == 0)
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_265, false))
											{
												TASK::TASK_VEHICLE_TEMP_ACTION(Local_317[iVar0 /*25*/], iLocal_265, 20, 1000);
											}
										}
										Local_317[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
										Local_317[iVar0 /*25*/].f_5++;
									}
									break;
								case 2:
									if ((MISC::GET_GAME_TIMER() - Local_317[iVar0 /*25*/].f_7) > 2000)
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar1);
										TASK::TASK_LEAVE_ANY_VEHICLE(0, iVar0 * 200, 256);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
										TASK::CLOSE_SEQUENCE_TASK(iVar1);
										TASK::TASK_PERFORM_SEQUENCE(Local_317[iVar0 /*25*/], iVar1);
										TASK::CLEAR_SEQUENCE_TASK(&iVar1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_317[iVar0 /*25*/], false);
										Local_317[iVar0 /*25*/].f_7 = 0;
										Local_317[iVar0 /*25*/].f_5++;
									}
									break;
								case 3:
									if (PED::IS_PED_IN_COMBAT(Local_317[iVar0 /*25*/], 0))
									{
										func_237(&(Local_317[iVar0 /*25*/]), 0);
									}
									break;
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_317[iVar0 /*25*/]);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_317[iVar0 /*25*/], false);
							func_237(&(Local_317[iVar0 /*25*/]), 0);
						}
					}
					else
					{
						func_237(&(Local_317[iVar0 /*25*/]), 0);
					}
				}
				else
				{
					__LIB_37__::func_206(&iLocal_265, 0);
				}
				iVar0++;
			}
		}
		if (!Local_318[0 /*25*/].f_2)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (((STREAMING::HAS_MODEL_LOADED(iLocal_336) && STREAMING::HAS_MODEL_LOADED(iLocal_337)) && Local_316[0 /*25*/].f_2) && Local_317[0 /*25*/].f_2)
				{
					if (Local_318[0 /*25*/].f_7 == 0)
					{
						Local_318[0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - Local_318[0 /*25*/].f_7) > 3000 || iLocal_118)
					{
						iLocal_266 = VEHICLE::CREATE_VEHICLE(iLocal_337, -649.9347f, -1632.2976f, 23.9329f, 153.8572f, true, true, false);
						Local_318[0 /*25*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_266, 6, iLocal_336, -1, true, true);
						Local_318[1 /*25*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_266, 6, iLocal_336, 0, true, true);
						iVar0 = 0;
						while (iVar0 < Local_318.f_0)
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_318[iVar0 /*25*/], joaat("WEAPON_PISTOL"), -1, true, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_318[iVar0 /*25*/], 58, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_318[iVar0 /*25*/], true);
							Local_318[iVar0 /*25*/].f_2 = 1;
							Local_318[iVar0 /*25*/].f_5 = 0;
							iVar0++;
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_266, true, true, false);
						VEHICLE::SET_VEHICLE_LIGHTS(iLocal_266, 2);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_266, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_336);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_337);
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_318.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_318[iVar0 /*25*/]))
				{
					if (!PED::IS_PED_INJURED(Local_318[iVar0 /*25*/]))
					{
						if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							switch (Local_318[iVar0 /*25*/].f_5)
							{
								case 0:
									Local_318[iVar0 /*25*/].f_14 = { -626.8539f, -1699.0125f, 23.4229f };
									if (iVar0 == 0)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_266, false))
										{
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_318[iVar0 /*25*/], iLocal_266, Local_318[iVar0 /*25*/].f_14, 20f, 0, iLocal_337, 786469, 4f, 5f);
										}
									}
									Local_318[iVar0 /*25*/].f_7 = 0;
									Local_318[iVar0 /*25*/].f_5++;
									break;
								case 1:
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_318[iVar0 /*25*/], true), Local_318[iVar0 /*25*/].f_14) < 25f || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_318[iVar0 /*25*/], true), Var2) < 100f)
									{
										if (iVar0 == 0)
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_266, false))
											{
												TASK::TASK_VEHICLE_TEMP_ACTION(Local_318[iVar0 /*25*/], iLocal_266, 20, 1000);
											}
										}
										Local_318[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
										Local_318[iVar0 /*25*/].f_5++;
									}
									break;
								case 2:
									if ((MISC::GET_GAME_TIMER() - Local_318[iVar0 /*25*/].f_7) > 2000)
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar1);
										TASK::TASK_LEAVE_ANY_VEHICLE(0, iVar0 * 200, 256);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
										TASK::CLOSE_SEQUENCE_TASK(iVar1);
										TASK::TASK_PERFORM_SEQUENCE(Local_318[iVar0 /*25*/], iVar1);
										TASK::CLEAR_SEQUENCE_TASK(&iVar1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_318[iVar0 /*25*/], false);
										Local_318[iVar0 /*25*/].f_7 = 0;
										Local_318[iVar0 /*25*/].f_5++;
									}
									break;
								case 3:
									if (PED::IS_PED_IN_COMBAT(Local_318[iVar0 /*25*/], 0))
									{
										func_237(&(Local_318[iVar0 /*25*/]), 0);
									}
									break;
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_318[iVar0 /*25*/]);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_318[iVar0 /*25*/], false);
							func_237(&(Local_318[iVar0 /*25*/]), 0);
						}
					}
					else
					{
						func_237(&(Local_318[iVar0 /*25*/]), 0);
					}
				}
				else
				{
					__LIB_37__::func_206(&iLocal_266, 0);
				}
				iVar0++;
			}
		}
	}
}

void func_237(int* iParam0, bool bParam1)//Position - 0x21D68
{
	int iVar0;
	int iVar1;
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
	}
	__LIB_0__::func_621(&(iParam0->f_17));
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, true);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iVar0 = PED::GET_PED_SOURCE_OF_DEATH(*iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == PLAYER::PLAYER_PED_ID())
			{
				iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(*iParam0);
				if (iVar1 == iLocal_346 || iVar1 == joaat("COP"))
				{
					__LIB_0__::func_497(379, 1, 0);
				}
			}
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	TASK::REMOVE_COVER_POINT(iParam0->f_4);
	if (bParam1)
	{
		iParam0->f_2 = 0;
		iParam0->f_3 = 0;
		iParam0->f_5 = 0;
		iParam0->f_6 = 0;
		iParam0->f_7 = 0;
		iParam0->f_8 = -1;
	}
}

void func_266()//Position - 0x261C3
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_16__::func_306(1);
	if (((iVar0 == 0 || iVar0 == joaat("WEAPON_UNARMED")) || !bLocal_81) || !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, false))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), false) && WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN")) > 0)
		{
			iVar0 = joaat("WEAPON_PUMPSHOTGUN");
		}
		else
		{
			iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	if (iVar0 != 0 && iVar0 != joaat("WEAPON_UNARMED"))
	{
		iVar1 = WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iVar0, true);
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0) < iVar1 || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0) == 0)
		{
			if (iVar1 != 0)
			{
				WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), iVar0, iVar1 * 2);
				WEAPON::SET_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iVar0, iVar1);
			}
			else
			{
				WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), iVar0, 1);
			}
		}
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, true);
	}
}

void func_269(int* iParam0, bool bParam1)//Position - 0x26336
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, true);
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(*iParam0))
			{
				if ((ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(*iParam0) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0)) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(*iParam0))
				{
					ENTITY::DETACH_ENTITY(*iParam0, true, true);
				}
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
			{
				ENTITY::SET_ENTITY_COLLISION(*iParam0, true, false);
			}
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PED::SET_PED_KEEP_TASK(*iParam0, true);
			}
		}
		if (bParam1)
		{
			PED::DELETE_PED(iParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_270()//Position - 0x263EC
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	switch (iLocal_169)
	{
		case 0:
			STREAMING::REQUEST_MODEL(iLocal_334);
			STREAMING::REQUEST_MODEL(iLocal_339);
			STREAMING::REQUEST_MODEL(iLocal_338);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_334) && STREAMING::HAS_MODEL_LOADED(iLocal_339)) && STREAMING::HAS_MODEL_LOADED(iLocal_338))
			{
				iLocal_263 = VEHICLE::CREATE_VEHICLE(iLocal_334, -634.4861f, -1696.895f, 23.4894f, 228.7563f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_263, 4, 4);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_263, 111, 156);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_263, "34MTA729");
				VEHICLE::SET_VEHICLE_STRONG(iLocal_263, true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_263, 5f);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_263, true, true, false);
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_263, 2);
				AUDIO::SET_VEH_RADIO_STATION(iLocal_263, "RADIO_01_CLASS_ROCK" /* GXT: Los Santos Rock Radio */);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_263, true);
				iLocal_253 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_263, 26, iLocal_338, -1, true, true);
				iLocal_252 = PED::CREATE_PED(26, iLocal_339, -633.0969f, -1695.2395f, 23.5702f, 135.734f, true, true);
				TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_252, "WORLD_HUMAN_PROSTITUTE_LOW_CLASS", 0, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_252, true);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_252, true);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_253, iLocal_252, -1, 2048, 2);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_253, true);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_253, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_334);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_339);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_338);
				iLocal_169++;
			}
			break;
		case 1:
			if (iLocal_66)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_263, false) };
				if ((((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0) < 225f || (!PED::IS_PED_INJURED(iLocal_253) && (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_253) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_253)))) || (!PED::IS_PED_INJURED(iLocal_252) && (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_252) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_252)))) || MISC::IS_BULLET_IN_AREA(Var0, 20f, false)) || (!ENTITY::IS_ENTITY_DEAD(iLocal_266, false) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_266, true), Var0) < 400f))
				{
					if (!PED::IS_PED_INJURED(iLocal_253))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 320);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_253, 128, true);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_253, 2, false);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_253, iVar1);
						TASK::TASK_CLEAR_LOOK_AT(iLocal_253);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_253, false);
						PED::SET_PED_KEEP_TASK(iLocal_253, true);
					}
					if (!PED::IS_PED_INJURED(iLocal_252))
					{
						PED::TRIGGER_PED_SCENARIO_PANICEXITTOFLEE(iLocal_252, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_252, 128, true);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_252, 2, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_252, false);
						PED::SET_PED_KEEP_TASK(iLocal_252, true);
					}
					iLocal_170 = MISC::GET_GAME_TIMER();
					iLocal_169 = 99;
				}
			}
			break;
		case 99:
			iVar2 = 0;
			if (!PED::IS_PED_INJURED(iLocal_253))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_253, false))
				{
					iVar2 = 1;
				}
			}
			else
			{
				iVar2 = 1;
			}
			if (iVar2 || (MISC::GET_GAME_TIMER() - iLocal_170) > 20000)
			{
				if (!PED::IS_PED_INJURED(iLocal_253))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_253);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_263, false))
				{
					VEHICLE::SET_VEHICLE_LIGHTS(iLocal_263, 0);
				}
				func_269(&iLocal_252, 0);
				func_269(&iLocal_253, 0);
				__LIB_37__::func_206(&iLocal_263, 0);
				STREAMING::REMOVE_ANIM_DICT(sLocal_216);
				iLocal_169++;
			}
			break;
	}
}

void func_271()//Position - 0x26757
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	switch (iLocal_166)
	{
		case 0:
			STREAMING::REQUEST_MODEL(iLocal_333);
			VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_333, 2);
			STREAMING::REQUEST_MODEL(iLocal_338);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_213);
			if (((STREAMING::HAS_MODEL_LOADED(iLocal_333) && STREAMING::HAS_MODEL_LOADED(iLocal_338)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(iLocal_333)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_213))
			{
				if (iLocal_319 == 8)
				{
					iLocal_272 = VEHICLE::CREATE_VEHICLE(iLocal_333, -607.0482f, -1707.6165f, 22.8813f, 42.694f, true, true, false);
					iLocal_251 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_272, 26, iLocal_338, -1, true, true);
					ENTITY::SET_ENTITY_HEALTH(iLocal_251, 0, 0);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_272, 0, false, false);
					bLocal_103 = false;
					iLocal_166 = 100;
				}
				else
				{
					bVar1 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -626.8754f, -1679.4888f, 24.420506f, -625.31683f, -1677.4683f, 49.420506f, 19.25f, false, true, 0);
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -601.6466f, -1696.2968f, 24.135693f, -600.00085f, -1693.8063f, 27.227722f, 6.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -609.1152f, -1690.9603f, 20.590954f, -604.61725f, -1693.8875f, 24.212742f, 4.75f, false, true, 0)) || bVar1)
					{
						if (bLocal_68 && bLocal_69)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_272))
							{
								iLocal_272 = VEHICLE::CREATE_VEHICLE(iLocal_333, -607.0482f, -1707.6165f, 22.8813f, 42.694f, true, true, false);
								iLocal_251 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_272, 26, iLocal_338, -1, true, true);
								ENTITY::SET_ENTITY_HEALTH(iLocal_251, 0, 0);
								VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_272, 0, false, false);
								bLocal_103 = true;
							}
							iLocal_166 = 100;
						}
						else if (!bVar1)
						{
							iLocal_272 = VEHICLE::CREATE_VEHICLE(iLocal_333, -537.2055f, -1757.0132f, 20.5996f, 53.6758f, true, true, false);
							iLocal_251 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_272, 26, iLocal_338, -1, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_251, true);
							bLocal_103 = false;
							iLocal_166++;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_272, false))
				{
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_272, 0, 0);
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_272, 0, 0);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_272, true);
					VEHICLE::SET_VEHICLE_LIGHTS(iLocal_272, 2);
					AUDIO::SET_VEH_RADIO_STATION(iLocal_272, "RADIO_01_CLASS_ROCK" /* GXT: Los Santos Rock Radio */);
				}
				if (iLocal_166 != 0)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_333);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_338);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_333, true);
				}
				iLocal_98 = 1;
				iLocal_167 = 0;
			}
			break;
		case 1:
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_213);
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_272, false) && !PED::IS_PED_INJURED(iLocal_251)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_213))
			{
				if (iLocal_66 || (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -605.8986f, -1696.711f, 24.816715f, -600.3635f, -1700.7915f, 28.066715f, 2.5f, false, true, 0)))
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_251, iLocal_272, sLocal_213, 786603, 0, 8, -1, -1f, false, 2f);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_251, true);
					Local_274.f_11 = 1;
					Local_275.f_11 = 1;
					iLocal_167 = 0;
					iLocal_166++;
				}
			}
			if (!PED::IS_PED_INJURED(Local_274.f_0))
			{
			}
			if (!PED::IS_PED_INJURED(Local_275.f_0))
			{
			}
			break;
		case 2:
			if ((!PED::IS_PED_INJURED(iLocal_251) && !PED::IS_PED_INJURED(Local_274.f_0)) && !PED::IS_PED_INJURED(Local_275.f_0))
			{
				Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_251, true) };
				bVar2 = TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == true;
				bVar3 = TASK::GET_SCRIPT_TASK_STATUS(Local_275.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == true;
				if ((bLocal_68 || iLocal_319 == 8) && (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) > 0.99f)))
				{
					if (((iLocal_66 && Local_316[0 /*25*/].f_2) && iLocal_197 != 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!PED::IS_PED_GROUP_MEMBER(Local_274.f_0, __LIB_0__::func_495()))
						{
							TASK::CLEAR_PED_TASKS(Local_274.f_0);
							PED::SET_PED_AS_GROUP_MEMBER(Local_274.f_0, __LIB_0__::func_495());
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, false);
						}
					}
					else if (!bVar2 || Local_274.f_11)
					{
						if (PED::IS_PED_GROUP_MEMBER(Local_274.f_0, __LIB_0__::func_495()))
						{
							PED::REMOVE_PED_FROM_GROUP(Local_274.f_0);
						}
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -607.9194f, -1703.6476f, 22.8549f, iLocal_251, 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_251, -1, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_274.f_0, iVar0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, true);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						Local_274.f_6 = -1;
						Local_274.f_11 = 0;
					}
				}
				if ((bLocal_69 || iLocal_319 == 8) && (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_275.f_6) > 0.99f)))
				{
					if (((iLocal_66 && Local_316[0 /*25*/].f_2) && iLocal_197 != 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!PED::IS_PED_GROUP_MEMBER(Local_275.f_0, __LIB_0__::func_495()))
						{
							TASK::CLEAR_PED_TASKS(Local_275.f_0);
							PED::SET_PED_AS_GROUP_MEMBER(Local_275.f_0, __LIB_0__::func_495());
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_275.f_0, false);
						}
					}
					else if (!bVar3 || Local_275.f_11)
					{
						if (PED::IS_PED_GROUP_MEMBER(Local_275.f_0, __LIB_0__::func_495()))
						{
							PED::REMOVE_PED_FROM_GROUP(Local_275.f_0);
						}
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -611.5765f, -1705.5597f, 23.0669f, iLocal_251, 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_251, -1, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_275.f_0, iVar0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_275.f_0, true);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						Local_275.f_6 = -1;
						Local_275.f_11 = 0;
					}
				}
				if (iLocal_167 == 0)
				{
					if ((((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_251) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_251)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var4) < 100f) || (bVar2 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true), Var4) < 100f)) || (bVar3 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true), Var4) < 100f))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 320);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_251, 128, true);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_251, 2, false);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_251, iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						PED::SET_PED_KEEP_TASK(iLocal_251, true);
						iLocal_167 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_251, false))
					{
						if (!iLocal_132[40])
						{
							__LIB_0__::func_640(iLocal_251, "GENERIC_FRIGHTENED_HIGH", 3);
							iLocal_132[40] = 1;
						}
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_167) > 2500)
					{
						iLocal_166 = 99;
					}
				}
				if (iLocal_197 != 0 && (MISC::GET_GAME_TIMER() - iLocal_197) > 6500)
				{
					iVar5 = 1;
				}
				if (bVar2 && bVar3)
				{
					if ((!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || (iLocal_66 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -603.3f, -1699.8f, 23.3f) > (35f * 35f))) || (iLocal_66 && iVar5))
					{
						iLocal_166 = 99;
					}
				}
				if (iLocal_132[41] && !__LIB_13__::func_755(&Local_276, 1))
				{
					if (!iLocal_132[42])
					{
						if ((!PED::IS_PED_INJURED(iLocal_251) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_251, false)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true), Var4) < 400f)
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_JACK", 7, 0, 0, 0))
							{
								iLocal_132[42] = 1;
							}
						}
					}
					else if (!iLocal_132[43])
					{
						if (!PED::IS_PED_INJURED(iLocal_251) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true), Var4) < 400f)
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_JAC2", 7, 0, 0, 0))
							{
								iLocal_132[43] = 1;
							}
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_166 = 99;
				}
			}
			else
			{
				iLocal_166 = 99;
			}
			break;
		case 99:
			if (iLocal_319 == 8)
			{
				TASK::CLEAR_PED_TASKS(Local_274.f_0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, false);
				if (!PED::IS_PED_GROUP_MEMBER(Local_274.f_0, __LIB_0__::func_495()))
				{
					PED::SET_PED_AS_GROUP_MEMBER(Local_274.f_0, __LIB_0__::func_495());
				}
				TASK::CLEAR_PED_TASKS(Local_275.f_0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_275.f_0, false);
				if (!PED::IS_PED_GROUP_MEMBER(Local_275.f_0, __LIB_0__::func_495()))
				{
					PED::SET_PED_AS_GROUP_MEMBER(Local_275.f_0, __LIB_0__::func_495());
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_272, false))
				{
					VEHICLE::SET_VEHICLE_LIGHTS(iLocal_272, 0);
				}
				__LIB_37__::func_206(&iLocal_272, 0);
				func_269(&iLocal_251, 0);
				iLocal_167 = 0;
				iLocal_166 = 100;
			}
			break;
		case 100:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_272, false))
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_272, 0);
				__LIB_37__::func_206(&iLocal_272, 0);
				func_269(&iLocal_251, 0);
			}
			if (!iLocal_132[44])
			{
				if ((iLocal_132[41] && (BitTest(Local_276.f_13, 3) || BitTest(Local_276.f_13, 0))) && !__LIB_13__::func_755(&Local_276, 1))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_DRIVE", 7, 0, 0, 0))
						{
							iLocal_132[44] = 1;
						}
					}
					else
					{
						iLocal_132[44] = 1;
					}
				}
			}
			break;
	}
}

bool func_272(int iParam0)//Position - 0x270D5
{
	return func_130(iParam0, 0f, 0f, 0f, 0, 0);
}

void func_273()//Position - 0x270E8
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	iVar0 = 0;
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (iLocal_320 == 0)
	{
		if (iLocal_62)
		{
			if (iLocal_140 != 99)
			{
				if (bLocal_81)
				{
					if (iLocal_319 == 6)
					{
						__LIB_0__::func_427(-624.0677f, -1621.1552f, 32.0105f, 179.3006f, 0, 0);
					}
					else
					{
						__LIB_0__::func_427(-571.7395f, -1601.8956f, 26.0108f, 100.1658f, 0, 0);
					}
					iLocal_140 = 99;
				}
				else
				{
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					}
					if (iLocal_319 == 6)
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -624.0677f, -1621.1552f, 32.0105f, true, false, false, true);
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -571.7395f, -1601.8956f, 26.0108f, true, false, false, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					if (func_272(7))
					{
						if (iLocal_319 == 6)
						{
							STREAMING::LOAD_SCENE(-624.0677f, -1621.1552f, 33.0105f);
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -624.0677f, -1621.1552f, 32.0105f, true, false, false, true);
						}
						else
						{
							STREAMING::LOAD_SCENE(-571.7395f, -1601.8956f, 26.0108f);
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -571.7395f, -1601.8956f, 26.0108f, true, false, false, true);
						}
						iLocal_140 = 99;
					}
				}
			}
			else if (((((((func_272(7) && func_130(0, -622.6625f, -1624.3663f, 32.0105f, 80.6249f, 0)) && func_130(1, -622.458f, -1623.38f, 32.0105f, 175.0071f, 0)) && func_323(0, 0, 0)) && func_130(5, 0f, 0f, 0f, 0, 0)) && func_130(8, 0f, 0f, 0f, 0, 0)) && func_130(4, 0f, 0f, 0f, 0, 0)) && func_322())
			{
				iLocal_187 = 0;
				iLocal_129 = 0;
				if (iLocal_319 == 6)
				{
					__LIB_0__::func_433(0, -1, 0);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -624.0677f, -1621.1552f, 32.0105f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 179.3006f);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					iLocal_108 = 0;
					iLocal_62 = 0;
				}
				else
				{
					WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PUMPSHOTGUN"), 31, 0);
					WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_ASSAULTRIFLE"), 31, 0);
					WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PISTOL"), 31, 0);
					STREAMING::REQUEST_ANIM_DICT("misslamar1ig_2_p1");
					if ((((WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_PISTOL")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_PUMPSHOTGUN"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_ASSAULTRIFLE"))) && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_2_p1")) && func_130(9, 0f, 0f, 0f, 0, 0))
					{
						if (!PED::IS_PED_INJURED(Local_274.f_0))
						{
							ENTITY::SET_ENTITY_COORDS(Local_274.f_0, -573.7945f, -1611.4336f, 26.011f, false, false, false, true);
							ENTITY::SET_ENTITY_HEADING(Local_274.f_0, 93.6465f);
						}
						if (!PED::IS_PED_INJURED(Local_275.f_0))
						{
							ENTITY::SET_ENTITY_COORDS(Local_275.f_0, -572.0372f, -1600.0889f, 26.011f, false, false, false, true);
							ENTITY::SET_ENTITY_HEADING(Local_275.f_0, 89.2657f);
						}
						func_321(&Local_306);
						func_321(&Local_309);
						func_321(&Local_307);
						func_321(&Local_313);
						func_321(&Local_305);
						Local_274.f_3 = 50;
						Local_275.f_3 = 50;
						while ((((!ENTITY::DOES_ENTITY_EXIST(Local_311[0 /*25*/]) || !ENTITY::DOES_ENTITY_EXIST(Local_310[0 /*25*/])) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID())) || (!PED::IS_PED_INJURED(Local_274.f_0) && !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_274.f_0))) || (!PED::IS_PED_INJURED(Local_275.f_0) && !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_275.f_0)))
						{
							func_310(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
							func_307(0);
							func_295(0);
							SYSTEM::WAIT(0);
						}
						__LIB_0__::func_433(0, -1, 0);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -571.7395f, -1601.8956f, 26.0108f, false, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 100.1658f);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
						MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 200f, true, true, false, false);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((90f - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						iLocal_62 = 0;
					}
				}
			}
		}
		else
		{
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PUMPSHOTGUN"), 31, 0);
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_ASSAULTRIFLE"), 31, 0);
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PISTOL"), 31, 0);
			if ((WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_PISTOL")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_PUMPSHOTGUN"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_ASSAULTRIFLE")))
			{
				iLocal_66 = 0;
				bLocal_68 = false;
				bLocal_69 = false;
				bLocal_71 = false;
				bLocal_70 = false;
				bLocal_72 = false;
				iLocal_74 = 0;
				bLocal_90 = false;
				iLocal_76 = 0;
				iLocal_77 = 0;
				iLocal_78 = 0;
				bLocal_91 = false;
				iLocal_116 = 0;
				iLocal_118 = 0;
				iLocal_120 = 0;
				iLocal_121 = 0;
				iLocal_122 = 0;
				bLocal_127 = false;
				iLocal_93 = 0;
				iLocal_123 = 0;
				iLocal_67 = 0;
				iLocal_131[0] = 0;
				iLocal_131[1] = 0;
				iLocal_131[2] = 0;
				iLocal_131[3] = 0;
				iLocal_152 = 0;
				iLocal_144 = 0;
				iLocal_166 = 0;
				iLocal_169 = 0;
				iLocal_176 = 0;
				iLocal_184 = 0;
				iLocal_183 = 0;
				iLocal_189 = 0;
				iLocal_190 = 0;
				iLocal_200 = 0;
				iLocal_132[45] = 0;
				func_266();
				__LIB_0__::func_429();
				func_272(9);
				func_294();
				func_293();
				__LIB_12__::func_849(9, 1);
				__LIB_12__::func_849(8, 1);
				if (!PED::IS_PED_INJURED(iLocal_254))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_254, true, false);
					if (!iLocal_108)
					{
						iLocal_108 = 1;
					}
					PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_254, 1, 0.534f, 0.556f, 16.352f, 1f, 1, 0f, "BulletLarge");
					PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_254, 1, 0.534f, 0.556f, 16.352f, 1f, 1, 0f, "BulletLarge");
					PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_254, 1, 0.556f, 0.53f, 23.682f, 1f, 5, 0f, "BulletLarge");
					PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_254, 1, 0.504f, 0.576f, 6.12f, 1f, 0, 0f, "ShotgunLarge");
					PED::SET_PED_TO_RAGDOLL(iLocal_254, 2000, 5000, 0, true, true, false);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						SYSTEM::WAIT(500);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_254))
				{
					if (iLocal_236 == 0)
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_254, true) };
						iLocal_236 = GRAPHICS::ADD_DECAL(1110, Var1.f_0, Var1.f_1, 32.1f, 0f, 0f, -1f, __LIB_0__::func_79(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
					}
					ENTITY::SET_ENTITY_HEALTH(iLocal_254, 0, 0);
				}
				PLAYER::SET_POLICE_RADAR_BLIPS(false);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
				ENTITY::CREATE_MODEL_HIDE(-614.7736f, -1633.7233f, 32.4919f, 2f, joaat("prop_crate_05a"), true);
				OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(iLocal_331, Local_224, true, 0f, 0f, 0f);
				OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(iLocal_332, Local_225, true, 0f, 0f, 0f);
				__LIB_42__::func_534(103, 1);
				__LIB_42__::func_534(104, 1);
				__LIB_42__::func_534(101, 1);
				__LIB_42__::func_534(102, 1);
				OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(iLocal_331, Local_226, true, 0f, 0f, 1f);
				OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(iLocal_332, Local_227, true, 0f, 0f, -1f);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CLOCK::SET_CLOCK_TIME(0, 0, 0);
					if (iLocal_319 == 6)
					{
						if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-623f, -1624.7f, 33.2f, 2f, joaat("v_ilev_rc_door1"), false))
						{
							OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_rc_door1"), -623f, -1624.7f, 33.2f, true, 0f, false);
							OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_rc_door1"), -623f, -1624.7f, 33.2f, false, 0f, false);
						}
						if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-623f, -1624.7f, 33.2f, 2f, joaat("v_ilev_rc_door1"), false))
						{
							OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_rc_door1"), -625.6f, -1624.5f, 33.2f, true, 0f, false);
							OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_rc_door1"), -625.6f, -1624.5f, 33.2f, false, 0f, false);
						}
						if (!PED::IS_PED_INJURED(Local_274.f_0) && Local_274.f_3 == 0)
						{
							TASK::REMOVE_COVER_POINT(Local_274.f_2);
							Local_274.f_2 = TASK::ADD_COVER_POINT(-622.6625f, -1624.3663f, 32.0105f, 170f, 0, 2, 3, false);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_274.f_0, -622.6625f, -1624.3663f, 32.0105f, -1, false, 0f, true, false, Local_274.f_2, false);
						}
						if (!PED::IS_PED_INJURED(Local_275.f_0) && Local_275.f_3 == 0)
						{
							TASK::TASK_AIM_GUN_AT_COORD(Local_275.f_0, -625.3885f, -1626.4886f, 33.2392f, -1, false, false);
						}
						SYSTEM::WAIT(1000);
						AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_GAMEPLAY_BEGINS_RESTART");
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					}
					else
					{
						SYSTEM::SETTIMERB(0);
						Local_274.f_11 = 1;
						Local_275.f_11 = 1;
						while (!func_290())
						{
							SYSTEM::WAIT(0);
						}
						while (SYSTEM::TIMERB() < 1000)
						{
							func_310(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
							func_307(0);
							func_295(0);
							SYSTEM::WAIT(0);
						}
						AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_ENTER_WAREHOUSE_RESTART");
					}
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_GAMEPLAY_BEGINS");
				}
				if (iLocal_234 == 0)
				{
					iLocal_234 = TASK::ADD_COVER_POINT(-603.3557f, -1619.3582f, 32.0105f, 275.431f, 1, 2, 4, true);
				}
				func_289(1);
				if (OBJECT::DOES_PICKUP_EXIST(iLocal_256[0]))
				{
					Var2 = { OBJECT::GET_PICKUP_COORDS(iLocal_256[0]) };
					OBJECT::REMOVE_PICKUP(iLocal_256[0]);
					MISC::CLEAR_AREA(Var2, 2f, true, false, false, false);
				}
				if (OBJECT::DOES_PICKUP_EXIST(iLocal_256[1]))
				{
					Var2 = { OBJECT::GET_PICKUP_COORDS(iLocal_256[1]) };
					OBJECT::REMOVE_PICKUP(iLocal_256[1]);
					MISC::CLEAR_AREA(Var2, 2f, true, false, false, false);
				}
				iVar3 = 0;
				MISC::SET_BIT(&iVar3, 1);
				MISC::SET_BIT(&iVar3, 5);
				iLocal_256[0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), -602.3171f, -1612.258f, 26.8207f, 0f, 0f, -3.96f, iVar3, -1, 2, true, 0);
				iLocal_256[1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), -595.63f, -1620.18f, 32.11f, 0f, 0f, 25.2f, iVar3, -1, 2, true, 0);
				MISC::SET_INSTANCE_PRIORITY_HINT(1);
				if (iLocal_319 == 6)
				{
					iLocal_186 = 0;
					func_663(3, "ESCAPE_PRE_WAREHOUSE", 0, 0, 0, 1);
					func_288();
				}
				else if (iLocal_319 == 7)
				{
					iLocal_186 = 50;
					func_663(4, "ESCAPE_FROM_WAREHOUSE", 0, 0, 0, 1);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (iLocal_319 == 7)
					{
						iLocal_233 = TASK::ADD_COVER_POINT(-571.7395f, -1601.8956f, 26.0108f, 100.1658f, 1, 0, 4, false);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), -571.7395f, -1601.8956f, 26.0108f, -1, false, 0f, true, true, iLocal_233, false);
						SYSTEM::WAIT(500);
					}
					SYSTEM::SETTIMERB(0);
					while (SYSTEM::TIMERB() < 400)
					{
						CLOCK::PAUSE_CLOCK(true);
						func_310(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
						func_307(1);
						func_295(1);
						SYSTEM::WAIT(0);
					}
					CAM::DO_SCREEN_FADE_IN(800);
					while (!CAM::IS_SCREEN_FADED_IN())
					{
						CLOCK::PAUSE_CLOCK(true);
						func_310(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
						func_307(1);
						func_295(1);
						SYSTEM::WAIT(0);
					}
				}
				SYSTEM::SETTIMERA(0);
				SYSTEM::SETTIMERB(0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				PLAYER::SET_PLAYER_SPRINT(PLAYER::PLAYER_ID(), false);
				iLocal_188 = 0;
				iLocal_187 = MISC::GET_GAME_TIMER();
				iLocal_177 = 0;
				iLocal_171 = 0;
				iLocal_191 = 0;
				iLocal_143 = 0;
				iLocal_172 = 0;
				iLocal_193 = 0;
				iLocal_194 = 0;
				iLocal_164 = 0;
				iLocal_140 = 0;
				iLocal_320 = 1;
			}
		}
	}
	if (iLocal_320 == 1)
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (!PED::IS_PED_INJURED(Local_274.f_0))
		{
			Var5 = { ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true) };
		}
		if (!PED::IS_PED_INJURED(Local_275.f_0))
		{
			Var6 = { ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true) };
		}
		fVar9 = SYSTEM::VDIST2(Var5, Var4);
		fVar10 = SYSTEM::VDIST2(Var6, Var4);
		fVar7 = MISC::ABSF((Var4.f_2 - Var5.f_2));
		fVar8 = MISC::ABSF((Var4.f_2 - Var6.f_2));
		func_310(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		func_307(0);
		func_295(0);
		func_286(&Local_237, &iLocal_193, 0);
		func_286(&Local_238, &iLocal_194, 1);
		func_290();
		PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
		PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), Var4);
		PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
		CLOCK::PAUSE_CLOCK(true);
		switch (iLocal_172)
		{
			case 0:
				if (iLocal_319 == 6)
				{
					if (func_285(&Local_306))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -588.1853f, -1619.1538f, 32.0105f, -592.52057f, -1618.9945f, 34.7605f, 4.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -566.4107f, -1627.2906f, 32.056114f, -592.11206f, -1624.9486f, 34.760475f, 7.25f, false, true, 0))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_ENTERED_ROOM");
							iLocal_172++;
						}
					}
				}
				else
				{
					iLocal_172++;
				}
				break;
			case 1:
				if (iLocal_319 == 6)
				{
					if (func_285(&Local_306))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -565.4863f, -1631.9694f, 32.09035f, -565.017f, -1627.8171f, 34.7774f, 1.75f, false, true, 0))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_CLUMSY_ASS");
							iLocal_172++;
						}
					}
				}
				else
				{
					iLocal_172++;
				}
				break;
			case 2:
				if (iLocal_319 == 6)
				{
					if (func_285(&Local_309))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_SMOKE");
						iLocal_172++;
					}
				}
				else
				{
					iLocal_172++;
				}
				break;
			case 3:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -605.4152f, -1604.123f, 26.010815f, -568.35205f, -1606.9407f, 31.550049f, 16f, false, true, 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_ENTER_WAREHOUSE");
					iLocal_172++;
				}
				break;
			case 4:
				if (func_284(&Local_311) + func_284(&Local_310)) <= ((Local_311.f_0 + Local_310.f_0) / 2)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_HALF_WAREHOUSE");
					iLocal_172++;
				}
				break;
			case 5:
				if (func_285(&Local_311) && func_285(&Local_310))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_ALL_WAREHOUSE");
					iLocal_172++;
				}
				break;
			case 6:
				if (Local_312[0 /*25*/].f_2)
				{
					AUDIO::PREPARE_MUSIC_EVENT("LM1_TERMINADOR_2ND_DOOR_EXPLODES");
					if (Local_312[0 /*25*/].f_5 > 0 || func_285(&Local_312))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_2ND_DOOR_EXPLODES");
						iLocal_171 = 0;
						iLocal_172++;
					}
				}
				break;
			case 7:
				if (iLocal_171 == 0)
				{
					if (!AUDIO::IS_MUSIC_ONESHOT_PLAYING())
					{
						iLocal_171 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					AUDIO::PREPARE_MUSIC_EVENT("LM1_TERMINADOR_EXIT_WAREHOUSE");
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -592.51f, -1631.69f, 25.98f, -592.32f, -1629.18f, 28.23f, 1f, false, true, 1) || bLocal_91)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_EXIT_WAREHOUSE");
						iLocal_172++;
					}
				}
				break;
			case 8:
				if (bLocal_90 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -591.03906f, -1639.4982f, 18.962502f, -593.21906f, -1642.997f, 26.02014f, 3.5f, false, true, 0))
				{
					if (!AUDIO::IS_MUSIC_ONESHOT_PLAYING())
					{
						AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_CLIMB_LADDER");
						iLocal_172++;
					}
				}
				break;
			case 9:
				if (iLocal_66)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_LANDED");
					iLocal_172 = 100;
				}
				break;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_246))
		{
			iLocal_246 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-610.31f, -1631.93f, 32.01f, 2f, joaat("prop_box_wood01a"), true, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_246))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_246, true);
			}
		}
		if (!PED::IS_PED_INJURED(Local_274.f_0) && !PED::IS_PED_INJURED(Local_275.f_0))
		{
			if (fVar9 > 40000f)
			{
				ENTITY::SET_ENTITY_HEALTH(Local_274.f_0, 0, 0);
				if (fVar10 > 10000f)
				{
					ENTITY::SET_ENTITY_HEALTH(Local_275.f_0, 0, 0);
				}
			}
			else if (fVar10 > 40000f)
			{
				ENTITY::SET_ENTITY_HEALTH(Local_275.f_0, 0, 0);
				if (fVar9 > 10000f)
				{
					ENTITY::SET_ENTITY_HEALTH(Local_274.f_0, 0, 0);
				}
			}
			if (!bLocal_65)
			{
				if (iLocal_143 == 0)
				{
					bLocal_114 = false;
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -614.23f, -1607.38f, 25.75f, -616.93f, -1640.62f, 38.11f, 23.25f, false, true, 0))
					{
						bLocal_114 = true;
					}
					iLocal_143++;
				}
				else if (iLocal_143 == 1)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -582.29f, -1597.29f, 18.15f, -585.14f, -1632.1f, 37.29f, 50f, false, true, 0))
					{
						bLocal_114 = true;
					}
					iLocal_143++;
				}
				else if (iLocal_143 == 2)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -593.00446f, -1630.9423f, 26.010828f, -607.7571f, -1629.6963f, 28.260826f, 4f, false, true, 0))
					{
						bLocal_114 = true;
					}
					if (!bLocal_114)
					{
						if (!iLocal_132[45] && !__LIB_13__::func_755(&Local_276, 2))
						{
							__LIB_0__::func_229("LEM1_LEFTBOTH", 7500, 0);
							iLocal_132[45] = 1;
						}
						if (iLocal_144 == 0)
						{
							if ((Var4.f_2 < 27f || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::IS_ENTITY_OCCLUDED(Local_274.f_0))
							{
								iLocal_144 = MISC::GET_GAME_TIMER();
							}
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_144) > 3000)
						{
							ENTITY::SET_ENTITY_HEALTH(Local_274.f_0, 0, 0);
							ENTITY::SET_ENTITY_HEALTH(Local_275.f_0, 0, 0);
						}
					}
					else
					{
						iLocal_144 = 0;
					}
					iLocal_143++;
				}
				else if (iLocal_143 == 3)
				{
					if ((!PED::IS_PED_INJURED(Local_275.f_0) && !PED::IS_PED_INJURED(Local_274.f_0)) && (PED::IS_PED_IN_COMBAT(Local_274.f_0, 0) || PED::IS_PED_IN_COMBAT(Local_275.f_0, 0)))
					{
						if (fVar9 > 500f && ENTITY::IS_ENTITY_OCCLUDED(Local_274.f_0))
						{
							if (fVar10 > 225f && ENTITY::IS_ENTITY_OCCLUDED(Local_275.f_0))
							{
								if (!iLocal_132[45] && !__LIB_13__::func_755(&Local_276, 2))
								{
									__LIB_0__::func_229("LEM1_LEFTBOTH", 7500, 0);
									iLocal_132[45] = 1;
								}
							}
							if (fVar9 > 1250f)
							{
								if (iLocal_145 == 0)
								{
									iLocal_145 = MISC::GET_GAME_TIMER();
								}
								else if ((MISC::GET_GAME_TIMER() - iLocal_145) > 5000)
								{
									ENTITY::SET_ENTITY_HEALTH(Local_274.f_0, 0, 0);
									if (ENTITY::IS_ENTITY_OCCLUDED(Local_275.f_0))
									{
										ENTITY::SET_ENTITY_HEALTH(Local_275.f_0, 0, 0);
									}
								}
							}
						}
						else
						{
							iLocal_145 = 0;
						}
					}
					iLocal_143 = 0;
				}
			}
			else
			{
				if (!iLocal_132[45] && !__LIB_13__::func_755(&Local_276, 2))
				{
					if ((fVar9 > 2500f && fVar10 > 900f) || (fVar9 > 900f && fVar10 > 2500f))
					{
						__LIB_0__::func_229("LEM1_LEFTBOTH", 7500, 0);
						iLocal_132[45] = 1;
					}
				}
				func_155();
			}
		}
		if (iLocal_319 == 6)
		{
			if (!iLocal_116)
			{
				if (SYSTEM::TIMERB() > 500)
				{
					OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("v_ilev_rc_door1"), -603.8043f, -1620.3005f, 33.1606f, true, 0f, 0f, 1.1f);
					OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("v_ilev_rc_door1"), -606.3953f, -1620.0739f, 33.1606f, true, 0f, 0f, -1.1f);
					iLocal_116 = 1;
				}
			}
			if (iLocal_235[iLocal_195] != 0)
			{
				if (Local_308[0 /*25*/].f_5 > 0 && Var4.f_1 < -1622f)
				{
					TASK::REMOVE_COVER_POINT(iLocal_235[iLocal_195]);
					iLocal_235[iLocal_195] = 0;
				}
			}
			if (!iLocal_132[73])
			{
				if (!__LIB_13__::func_755(&Local_276, 1))
				{
					if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_DOOR", 7, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 8f, 4);
						iLocal_132[73] = 1;
					}
				}
			}
			else if (!iLocal_132[74])
			{
				if (!__LIB_13__::func_755(&Local_276, 2))
				{
					__LIB_0__::func_229("LEM1_KILLSWAT", 7500, 0);
					iLocal_132[74] = 1;
					iLocal_160 = MISC::GET_GAME_TIMER();
				}
			}
			else if (Local_307[0 /*25*/].f_5 == 0)
			{
				if (!iLocal_132[75])
				{
					if (!__LIB_13__::func_755(&Local_276, 1))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_160) > 8500)
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_GOGO", 7, 0, 0, 0))
							{
								iLocal_132[75] = 1;
								iLocal_160 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				else if (!iLocal_132[76])
				{
					if (!__LIB_13__::func_755(&Local_276, 1))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_160) > 8500)
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_DOOR", 7, 0, 0, 0))
							{
								iLocal_132[76] = 1;
								iLocal_160 = 0;
							}
						}
					}
				}
			}
			if (Local_307[0 /*25*/].f_5 > 0)
			{
				if (iLocal_176 == 0)
				{
					iLocal_176 = MISC::GET_GAME_TIMER();
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_176) > 500)
				{
					if (!iLocal_132[29])
					{
						iLocal_132[29] = 1;
					}
					else if (!iLocal_132[77])
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar11, true);
							if ((iVar11 != joaat("WEAPON_UNARMED") && WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iVar11, joaat("COMPONENT_AT_AR_FLSH"))) && !WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(PLAYER::PLAYER_PED_ID(), iVar11, joaat("COMPONENT_AT_AR_FLSH")))
							{
								__LIB_0__::func_190("LEM1_FLAHELP");
								iLocal_132[77] = 1;
							}
							else
							{
								iLocal_132[77] = 1;
							}
						}
					}
					else if (!iLocal_132[78])
					{
						if (__LIB_0__::func_1("LEM1_FLAHELP"))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -588.06854f, -1619.1289f, 32.033398f, -606.65735f, -1617.3682f, 34.510597f, 5.5f, false, true, 0))
							{
								HUD::CLEAR_HELP(true);
							}
							else
							{
								WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar12, true);
								if (iVar12 != joaat("WEAPON_UNARMED") && WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iVar12, joaat("COMPONENT_AT_AR_FLSH")))
								{
									if (WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(PLAYER::PLAYER_PED_ID(), iVar12, joaat("COMPONENT_AT_AR_FLSH")))
									{
										if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 54 /*INPUT_WEAPON_SPECIAL_TWO*/))
										{
											HUD::CLEAR_HELP(true);
										}
									}
								}
							}
						}
						else if (!__LIB_0__::func_178(1) || uLocal_106)
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && (MISC::GET_GAME_TIMER() - iLocal_176) > 4000)
							{
								iLocal_132[78] = 1;
							}
						}
						else
						{
							iLocal_132[78] = 1;
							iLocal_132[86] = 1;
							iLocal_132[87] = 1;
						}
					}
					else if (!iLocal_132[79])
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && (MISC::GET_GAME_TIMER() - iLocal_176) > 4000)
						{
							__LIB_0__::func_151("LEM1_ACCSTAT1", -1);
							iLocal_132[79] = 1;
						}
					}
					else if (!iLocal_132[80])
					{
						if (!Global_113386.f_19147[0 /*271*/].f_268)
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								__LIB_0__::func_151("LEM1_ACCSTAT2", -1);
								iLocal_132[80] = 1;
							}
						}
						else
						{
							iLocal_132[80] = 1;
						}
					}
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -568.24f, -1607.67f, 30.48f, -577.45f, -1606.81f, 25.76f, 16.75f, false, true, 0))
			{
				func_663(4, "ESCAPE_FROM_WAREHOUSE", 0, 0, 0, 1);
				iLocal_319 = 7;
			}
		}
		if (iLocal_319 == 7)
		{
			if (((!func_285(&Local_311) || !func_285(&Local_310)) && iLocal_132[81]) && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_GRENADE"), false))
			{
				if (!iLocal_132[82])
				{
					if (!PED::IS_PED_INJURED(Local_274.f_0))
					{
						if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true)) < 400f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -571.8954f, -1598.9431f, 25.497215f, -573.73303f, -1614.0182f, 31.410519f, 6.75f, false, true, 0)) && !__LIB_13__::func_755(&Local_276, 1))
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_RIOT", 7, 0, 0, 0))
							{
								iLocal_162 = MISC::GET_GAME_TIMER();
								iLocal_132[82] = 1;
							}
						}
					}
				}
				else
				{
					WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar13, true);
					if (iLocal_164 == 0)
					{
						if (iVar13 == joaat("WEAPON_GRENADE"))
						{
							iLocal_163 = 0;
							iLocal_164++;
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_162) > 2000)
						{
							__LIB_0__::func_151("LEM1_GRGUNHELP", 10000);
							iLocal_163 = 0;
							iLocal_164++;
						}
					}
					else if (iLocal_164 == 1)
					{
						if (__LIB_0__::func_1("LEM1_GRGUNHELP"))
						{
							if (iLocal_163 == 0)
							{
								if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
								{
									if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 58 /*INPUT_THROW_GRENADE*/))
									{
										if (WEAPON::GET_WEAPONTYPE_GROUP(iVar13) != joaat("GROUP_HEAVY") && WEAPON::GET_WEAPONTYPE_GROUP(iVar13) != joaat("GROUP_SNIPER"))
										{
											iLocal_163 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_163) > 1500)
							{
								HUD::CLEAR_HELP(true);
							}
						}
						else if (iVar13 == joaat("WEAPON_GRENADE"))
						{
							if (iLocal_163 == 0)
							{
								iLocal_163 = MISC::GET_GAME_TIMER();
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_163) > 1500)
							{
								iLocal_163 = 0;
								iLocal_164++;
							}
						}
						else
						{
							__LIB_0__::func_151("LEM1_GRENHELP1", 10000);
							iLocal_163 = 0;
							iLocal_164++;
						}
					}
					else if (iLocal_164 == 2)
					{
						if (iVar13 == joaat("WEAPON_GRENADE"))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_163) > 1500)
							{
								__LIB_0__::func_151("LEM1_GRENHELP2", 10000);
								iLocal_164++;
							}
						}
						else
						{
							iLocal_163 = MISC::GET_GAME_TIMER();
						}
					}
					else if (iLocal_164 == 3)
					{
						if (iVar13 == joaat("WEAPON_GRENADE") && __LIB_0__::func_1("LEM1_GRENHELP2"))
						{
							if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/))
							{
								HUD::CLEAR_HELP(true);
							}
						}
					}
				}
			}
			if (!bLocal_91)
			{
				bLocal_91 = (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -592.5679f, -1630.3676f, 28.238453f, -587.90656f, -1630.8245f, 23.511858f, 2.5f, false, true, 0) || iLocal_66);
			}
			else
			{
				func_271();
				func_270();
				func_281(Var4, Var5, Var6, &Local_274, &Local_275);
				if (!iLocal_132[86])
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (func_279(PLAYER::PLAYER_PED_ID()) > 1)
						{
							__LIB_0__::func_151("LEM1_WEAPHELP1", -1);
							iLocal_132[86] = 1;
						}
					}
				}
				else if (!iLocal_132[87])
				{
					if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/))
					{
						if (__LIB_0__::func_1("LEM1_WEAPHELP1"))
						{
							HUD::CLEAR_HELP(true);
						}
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							__LIB_0__::func_151("LEM1_WEAPHELP2", -1);
							iLocal_132[87] = 1;
						}
					}
				}
				if (!__LIB_0__::func_67(24))
				{
					if (SYSTEM::VDIST2(Var4, -592.4f, -1641.9f, 20f) < 16f)
					{
						__LIB_0__::func_592(24);
					}
				}
			}
			if (bLocal_65)
			{
				if (!iLocal_66)
				{
					iLocal_66 = (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -602.86847f, -1699.255f, 22.651754f, -607.1429f, -1705.0146f, 26.96269f, 11.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -630.7239f, -1678.8271f, 23.907534f, -625.27826f, -1683.3976f, 26.224281f, 3f, false, true, 0));
					if (iLocal_66)
					{
						PLAYER::SET_PLAYER_SPRINT(PLAYER::PLAYER_ID(), true);
					}
				}
				if (!bLocal_68)
				{
					bLocal_68 = (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_274.f_0, -608.42926f, -1697.4967f, 22.651754f, -599.1333f, -1704.504f, 26.06269f, 3.75f, false, true, 0) && !PED::IS_PED_RAGDOLL(Local_274.f_0));
				}
				if (!bLocal_69)
				{
					bLocal_69 = (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_275.f_0, -608.42926f, -1697.4967f, 22.651754f, -599.1333f, -1704.504f, 26.06269f, 3.75f, false, true, 0) && !PED::IS_PED_RAGDOLL(Local_275.f_0));
				}
				if (!bLocal_71)
				{
					bLocal_71 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -588.15674f, -1682.5193f, 18.001923f, -622.19354f, -1662.5298f, 27.975555f, 62.75f, false, true, 0);
				}
				if (!bLocal_70)
				{
					bLocal_70 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_274.f_0, -588.15674f, -1682.5193f, 18.001923f, -622.19354f, -1662.5298f, 27.975555f, 62.75f, false, true, 0);
				}
				if (!bLocal_72)
				{
					bLocal_72 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_275.f_0, -588.15674f, -1682.5193f, 18.001923f, -622.19354f, -1662.5298f, 27.975555f, 62.75f, false, true, 0);
				}
				if (iLocal_66)
				{
					func_236();
					if (func_284(&Local_314) >= 2)
					{
						if (iLocal_152 == 0)
						{
							iLocal_152 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_152) > 3000)
						{
							ENTITY::SET_ENTITY_HEALTH(Local_274.f_0, 0, 0);
						}
					}
				}
				if (!bLocal_90)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -592.36176f, -1642.9584f, 20.430986f, -593.5129f, -1642.2921f, 25.70805f, 1.25f, false, true, 0) || bLocal_71)
					{
						bLocal_90 = true;
					}
				}
			}
			if (bLocal_71 || iLocal_66)
			{
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			}
			if (bLocal_90 && !iLocal_66)
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 195, true);
			}
			if (!iLocal_132[88])
			{
				if (func_285(&Local_311) && func_285(&Local_310))
				{
					if (iLocal_177 == 0)
					{
						PLAYER::SET_MAX_WANTED_LEVEL(5);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						func_272(10);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "LAMAR1_FAKE_POLICE_SIREN2_MASTER", PLAYER::PLAYER_PED_ID(), 0, false, 0);
						AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", true);
						iLocal_177 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_177) > 4000)
					{
						if (fVar9 < 625f)
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
							{
								if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_COPSARR", 7, 0, 0, 0))
								{
									iLocal_132[88] = 1;
								}
							}
							else if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_SIREN", 7, 0, 0, 0))
							{
								iLocal_132[88] = 1;
							}
						}
					}
				}
			}
			if (!iLocal_93)
			{
				if (bLocal_90)
				{
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_LAMAR_1_01", 0f);
					iLocal_93 = 1;
				}
			}
		}
		switch (iLocal_140)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -607.4754f, -1626.9293f, 26.01083f, -604.2385f, -1627.289f, 28.51083f, 1.5f, false, true, 0))
				{
					MISC::CLEAR_AREA_OF_OBJECTS(-580.4233f, -1631.7578f, 18.6651f, 5f, 0);
					MISC::CLEAR_AREA(-592.8243f, -1642.2301f, 18.9575f, 8f, true, false, false, false);
					iLocal_140++;
				}
				break;
			case 1:
				if (func_284(&Local_314) < 2)
				{
					HUD::CLEAR_PRINTS();
					iLocal_140++;
				}
				break;
			case 2:
				if (!bLocal_71 && !iLocal_66)
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_231))
					{
						iLocal_231 = __LIB_0__::func_488(-593.2421f, -1643.4407f, 25.1788f, 0);
					}
					if (!__LIB_13__::func_755(&Local_276, 2))
					{
						if (!iLocal_132[34])
						{
							__LIB_0__::func_229("LEM1_GOLAD", 7500, 0);
							iLocal_132[34] = 1;
						}
					}
				}
				else
				{
					HUD::REMOVE_BLIP(&iLocal_231);
					HUD::CLEAR_PRINTS();
					iLocal_140++;
				}
				break;
			case 3:
				if (!iLocal_66)
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_231))
					{
						if (Var4.f_2 < 21.7459f)
						{
							iLocal_231 = __LIB_0__::func_488(-603.4348f, -1696.6965f, 25.0436f, 0);
						}
					}
					if (Var4.f_2 > 21.7459f)
					{
						if (!iLocal_132[90])
						{
							if (!__LIB_13__::func_755(&Local_276, 2) && (!bLocal_70 || (bLocal_70 && iLocal_132[91])))
							{
								iLocal_132[90] = 1;
							}
						}
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_231))
					{
						AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", false);
						HUD::REMOVE_BLIP(&iLocal_231);
					}
					if (bLocal_68)
					{
						if (bLocal_69)
						{
							if (iLocal_172 < 100)
							{
								AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_LANDED");
								iLocal_172 = 100;
							}
							iLocal_320 = 2;
						}
						else if (!iLocal_132[92])
						{
							__LIB_0__::func_229("LEM1_WAITSTRET", 7500, 0);
							iLocal_132[92] = 1;
						}
					}
					else if (bLocal_69)
					{
						if (!iLocal_132[93])
						{
							__LIB_0__::func_229("LEM1_WAITLEMAR", 7500, 0);
							iLocal_132[93] = 1;
						}
					}
					else if (!iLocal_132[94])
					{
						__LIB_0__::func_229("LEM1_WAITBOTH", 7500, 0);
						iLocal_132[94] = 1;
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_ESCAPE_THE_JUNKYARD"))
					{
						AUDIO::STOP_AUDIO_SCENE("LAMAR_1_ESCAPE_THE_JUNKYARD");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_STEAL_CAR"))
					{
						AUDIO::START_AUDIO_SCENE("LAMAR_1_STEAL_CAR");
					}
				}
				break;
		}
		if (iLocal_154 != 0 && (MISC::GET_GAME_TIMER() - iLocal_154) < 26000)
		{
			STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_12");
			if (func_285(&Local_309))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_274.f_0, -560.454f, -1600.0344f, 25.010954f, -560.7523f, -1604.4816f, 28.010954f, 3.75f, false, true, 0))
				{
					if ((!iLocal_132[95] && !__LIB_13__::func_755(&Local_276, 1)) && __LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_SMOKE2", 7, 0, 0, 0))
					{
						iLocal_132[95] = 1;
					}
					if ((!iLocal_76 && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_12")) && !PED::IS_PED_INJURED(Local_274.f_0))
					{
						if (TASK::IS_PED_RUNNING(Local_274.f_0))
						{
							TASK::TASK_PLAY_ANIM(Local_274.f_0, "misslamar1lam_1_ig_12", "run_lamar", 4f, -4f, -1, 48, 0f, false, false, false);
						}
						else if (TASK::IS_PED_WALKING(Local_274.f_0))
						{
							TASK::TASK_PLAY_ANIM(Local_274.f_0, "misslamar1lam_1_ig_12", "walk_lamar", 4f, -4f, -1, 48, 0f, false, false, false);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(Local_274.f_0, "misslamar1lam_1_ig_12", "idle_lamar", 4f, -4f, -1, 48, 0f, false, false, false);
						}
						iLocal_76 = 1;
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_275.f_0, -560.454f, -1600.0344f, 25.010954f, -560.7523f, -1604.4816f, 28.010954f, 3.75f, false, true, 0))
				{
					if ((!iLocal_132[95] && !__LIB_13__::func_755(&Local_276, 1)) && __LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_SMOKE3", 7, 0, 0, 0))
					{
						iLocal_132[95] = 1;
					}
					if ((!iLocal_77 && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_12")) && !PED::IS_PED_INJURED(Local_275.f_0))
					{
						if (TASK::IS_PED_RUNNING(Local_275.f_0))
						{
							TASK::TASK_PLAY_ANIM(Local_275.f_0, "misslamar1lam_1_ig_12", "run_stretch", 4f, -4f, -1, 48, 0f, false, false, false);
						}
						else if (TASK::IS_PED_WALKING(Local_275.f_0))
						{
							TASK::TASK_PLAY_ANIM(Local_275.f_0, "misslamar1lam_1_ig_12", "walk_stretch", 4f, -4f, -1, 48, 0f, false, false, false);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(Local_275.f_0, "misslamar1lam_1_ig_12", "idle_stretch", 4f, -4f, -1, 48, 0f, false, false, false);
						}
						iLocal_77 = 1;
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -560.454f, -1600.0344f, 25.010954f, -560.7523f, -1604.4816f, 28.010954f, 3.75f, false, true, 0))
				{
					if ((!iLocal_132[95] && !__LIB_13__::func_755(&Local_276, 1)) && __LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_SMOKE4", 7, 0, 0, 0))
					{
						iLocal_132[95] = 1;
					}
					if (!iLocal_78 && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_12"))
					{
						if (TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "misslamar1lam_1_ig_12", "run_franklin", 4f, -4f, -1, 48, 0f, false, false, false);
						}
						else if (TASK::IS_PED_WALKING(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "misslamar1lam_1_ig_12", "walk_franklin", 4f, -4f, -1, 48, 0f, false, false, false);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "misslamar1lam_1_ig_12", "idle_franklin", 4f, -4f, -1, 48, 0f, false, false, false);
						}
						iLocal_78 = 1;
					}
				}
			}
		}
		if (!__LIB_13__::func_755(&Local_276, 1))
		{
			if (iLocal_319 == 6)
			{
				if (!iLocal_132[4])
				{
					if (Local_307[0 /*25*/].f_5 > 0)
					{
						if (!iLocal_132[5])
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_FIGHT1", 7, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 5f, 4);
								iLocal_132[4] = 1;
							}
						}
						else
						{
							iLocal_132[5] = 1;
						}
					}
				}
				else
				{
					if (!iLocal_132[5])
					{
						if (!iLocal_132[13] && func_285(&Local_313))
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_WIN2", 7, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
								iLocal_132[13] = 1;
							}
						}
						if (!iLocal_132[96] && func_285(&Local_309))
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_GOGOS", 7, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
								iLocal_132[96] = 1;
							}
						}
					}
					if (!iLocal_132[97])
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -614.36664f, -1619.024f, 32.010616f, -615.1086f, -1618.9541f, 34.260616f, 2.5f, false, true, 0))
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_TRIES", 7, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
								iLocal_132[97] = 1;
							}
						}
					}
					if (!iLocal_132[98])
					{
						iVar14 = (func_284(&Local_307) + func_284(&Local_305));
						if (iVar14 == 1)
						{
							if (!PED::IS_PED_INJURED(Local_274.f_0))
							{
								if (fVar9 < 400f)
								{
									if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_1GUY", 7, 0, 0, 0))
									{
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
										iLocal_132[98] = 1;
									}
								}
							}
						}
						else if (iVar14 == 0)
						{
							iLocal_132[98] = 1;
						}
					}
					if (!iLocal_132[99])
					{
						if (func_285(&Local_307) && func_285(&Local_305))
						{
							if (!PED::IS_PED_INJURED(Local_275.f_0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_275.f_0, -613.5451f, -1628.705f, 32.010616f, -613.0481f, -1622.7063f, 34.268475f, 3f, false, true, 0))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -626.34814f, -1629.4357f, 32.01056f, -604.701f, -1630.9009f, 35.074707f, 8.25f, false, true, 0) && fVar10 < 400f)
								{
									if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_NOLIFT", 7, 0, 0, 0))
									{
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
										iLocal_132[99] = 1;
									}
								}
							}
							else
							{
								iLocal_132[99] = 1;
							}
						}
					}
				}
			}
			if (iLocal_319 == 7)
			{
				if ((((!iLocal_132[81] && Local_310[0 /*25*/].f_5 > 0) && fVar9 < 900f) && fVar7 < 5f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -571.8954f, -1598.9431f, 25.497215f, -573.73303f, -1614.0182f, 31.410519f, 6.75f, false, true, 0))
				{
					if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_WAIT1", 8, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
						iLocal_132[81] = 1;
					}
				}
				if (!iLocal_132[100])
				{
					if (iLocal_188 == 0)
					{
						if (Local_237[0 /*9*/].f_1 > 0.1f)
						{
							iLocal_188 = MISC::GET_GAME_TIMER();
						}
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_188) > 4000 && (MISC::GET_GAME_TIMER() - iLocal_188) < 15000)
					{
						if (fVar10 < 900f && fVar8 < 5f)
						{
							iVar15 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
							if (iVar15 == 0)
							{
								if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_FIRE", 8, 0, 0, 0))
								{
									iLocal_132[100] = 1;
								}
							}
							else if (iVar15 == 1)
							{
								if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_FIRE2", 8, 0, 0, 0))
								{
									iLocal_132[100] = 1;
								}
							}
							else if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_FIRE3", 8, 0, 0, 0))
							{
								iLocal_132[100] = 1;
							}
						}
					}
				}
				if (!iLocal_132[101])
				{
					iVar16 = (func_284(&Local_311) + func_284(&Local_310));
					if (iVar16 == 2)
					{
						if (iLocal_168 == 0)
						{
							iLocal_168 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_168) > 1000)
						{
							if (fVar9 < 400f && fVar7 < 5f)
							{
								if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_LGUY", 7, 0, 0, 0))
								{
									iLocal_132[101] = 1;
								}
							}
						}
					}
					else if (iVar16 < 2)
					{
						iLocal_132[101] = 1;
					}
					else
					{
						iLocal_168 = 0;
					}
				}
				if ((!iLocal_132[102] && iLocal_132[82]) && iLocal_74)
				{
					if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_RIOT2", 7, 0, 0, 0))
					{
						iLocal_132[102] = 1;
					}
				}
				if (!iLocal_132[22] && fVar9 < 900f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -593.00446f, -1630.9423f, 26.010828f, -607.7571f, -1629.6963f, 28.260826f, 4f, false, true, 0))
					{
						if (CAM::IS_SPHERE_VISIBLE(-593.0891f, -1630.25f, 27.3027f, 1f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -593.0774f, -1630.8318f, 26.010954f, -604.3877f, -1630.0079f, 28.510954f, 4f, false, true, 0))
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_EXIT", 7, 0, 0, 0))
							{
								iLocal_132[22] = 1;
							}
						}
					}
				}
				if (!iLocal_132[103])
				{
					if (Local_314[0 /*25*/].f_5 > 0 && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_261, false))
					{
						if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_261))
						{
							if (iLocal_191 == 0)
							{
								iLocal_191 = MISC::GET_GAME_TIMER();
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_191) > 800)
							{
								if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_EXITH", 7, 0, 0, 0))
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 8f, 4);
									iLocal_132[103] = 1;
								}
							}
						}
					}
				}
				else if (!iLocal_132[32])
				{
					if (func_284(&Local_314) >= 2)
					{
						if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_BRIDGE", 7, 0, 0, 0))
						{
							iLocal_132[32] = 1;
						}
					}
					else
					{
						iLocal_132[32] = 1;
					}
				}
				if (!bLocal_68 && !iLocal_66)
				{
					if (((!iLocal_132[91] && (bLocal_71 || Local_274.f_3 == 100)) && bLocal_70) && func_284(&Local_314) < 2)
					{
						if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_ROOF2", 7, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 8f, 4);
							iLocal_132[91] = 1;
						}
					}
					if ((!iLocal_132[104] && fVar9 < 400f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_274.f_0, -602.1941f, -1697.7925f, 24.043589f, -599.153f, -1692.3153f, 27.310705f, 7f, false, true, 0))
					{
						if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_ROOF3", 7, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 8f, 4);
							iLocal_132[104] = 1;
						}
					}
				}
				if ((bLocal_68 && bLocal_69) && !iLocal_66)
				{
					if (fVar9 < 625f)
					{
						if (!iLocal_132[105])
						{
							if (iLocal_184 < 4)
							{
								if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_KEEPUP", 7, 0, 0, 0))
								{
									iLocal_132[105] = 1;
									iLocal_184++;
								}
							}
							else
							{
								iLocal_132[105] = 1;
							}
						}
						else if (!iLocal_132[106])
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_KEEPUPS", 7, 0, 0, 0))
							{
								iLocal_132[106] = 1;
							}
						}
					}
					if (!bLocal_127)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_199) > 60000)
						{
							MISC::SET_FAKE_WANTED_LEVEL(0);
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
							PLAYER::SET_MAX_WANTED_LEVEL(5);
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
							PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							PLAYER::SET_POLICE_RADAR_BLIPS(true);
							PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
							MISC::ENABLE_DISPATCH_SERVICE(3, true);
							MISC::ENABLE_DISPATCH_SERVICE(1, true);
							MISC::ENABLE_DISPATCH_SERVICE(8, true);
							MISC::ENABLE_DISPATCH_SERVICE(2, true);
							MISC::ENABLE_DISPATCH_SERVICE(6, true);
							MISC::ENABLE_DISPATCH_SERVICE(5, true);
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), joaat("COP"));
							bLocal_127 = true;
						}
					}
					else
					{
						PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
						PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
						if (iLocal_166 == 100)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_199) > 90000)
							{
								if (!PED::IS_PED_INJURED(Local_274.f_0) && TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 1)
								{
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_274.f_0, 200f, 0);
								}
								if (!PED::IS_PED_INJURED(Local_275.f_0) && TASK::GET_SCRIPT_TASK_STATUS(Local_275.f_0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 1)
								{
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_275.f_0, 200f, 0);
								}
							}
						}
					}
				}
				else
				{
					iLocal_199 = MISC::GET_GAME_TIMER();
				}
			}
			if ((((((MISC::GET_GAME_TIMER() - iLocal_147) > 0 || (MISC::GET_GAME_TIMER() - iLocal_149) > 0) && iLocal_132[4]) && !PED::IS_PED_INJURED(Local_274.f_0)) && !PED::IS_PED_INJURED(Local_275.f_0)) && !bLocal_127)
			{
				if (!PED::IS_PED_RAGDOLL(Local_274.f_0) && (((PED::IS_PED_IN_COMBAT(Local_274.f_0, 0) || PED::IS_PED_SHOOTING(Local_274.f_0)) || PED::IS_PED_IN_COMBAT(Local_275.f_0, 0)) || PED::IS_PED_SHOOTING(Local_275.f_0)))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_150) > 0)
					{
						if (((MISC::GET_GAME_TIMER() - iLocal_147) > 0 && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) && fVar9 < 625f)
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_GENCOM", 7, 0, 0, 0))
							{
								iLocal_147 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 11000));
							}
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_148) > 0 && fVar9 < 625f)
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_FRAK", 7, 0, 0, 0))
							{
								iLocal_148 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(14000, 17000));
							}
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_149) > 0)
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
							{
								if (((PED::IS_PED_IN_COMBAT(Local_274.f_0, 0) || PED::IS_PED_SHOOTING(Local_274.f_0)) && fVar9 < 625f) && fVar7 < 5f)
								{
									if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_GENL2", 7, 0, 0, 0))
									{
										iLocal_149 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 11000));
									}
								}
							}
							else if (((PED::IS_PED_IN_COMBAT(Local_275.f_0, 0) || PED::IS_PED_SHOOTING(Local_275.f_0)) && fVar10 < 625f) && fVar8 < 5f)
							{
								if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_GENSTR", 7, 0, 0, 0))
								{
									iLocal_149 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 11000));
								}
							}
						}
						iLocal_150 = 0;
					}
				}
				else
				{
					iLocal_150 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		switch (iLocal_186)
		{
			case 0:
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_START"))
				{
					AUDIO::START_AUDIO_SCENE("LAMAR_1_SHOOTOUT_START");
				}
				iLocal_186++;
				break;
			case 1:
				if (func_285(&Local_306))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -565.4863f, -1631.9694f, 32.09035f, -565.017f, -1627.8171f, 34.7774f, 1.75f, false, true, 0))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_START"))
						{
							AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_START");
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_SAVE_LAMAR"))
						{
							AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_SAVE_LAMAR");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_STAIRWELL"))
						{
							AUDIO::START_AUDIO_SCENE("LAMAR_1_SHOOTOUT_STAIRWELL");
						}
						iLocal_186 = 50;
					}
				}
				break;
			case 50:
				if (iLocal_319 == 7)
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_STAIRWELL"))
					{
						AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_STAIRWELL");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_WAREHOUSE"))
					{
						AUDIO::START_AUDIO_SCENE("LAMAR_1_SHOOTOUT_WAREHOUSE");
					}
					iLocal_186++;
				}
				break;
			case 51:
				if (func_285(&Local_311) && func_285(&Local_310))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_WAREHOUSE"))
					{
						AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_WAREHOUSE");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_GET_OUTSIDE"))
					{
						AUDIO::START_AUDIO_SCENE("LAMAR_1_SHOOTOUT_GET_OUTSIDE");
					}
					iLocal_186++;
				}
				break;
			case 52:
				if (Local_314[0 /*25*/].f_5 > 0)
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_GET_OUTSIDE"))
					{
						AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_GET_OUTSIDE");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_ESCAPE_FIGHT_HELI"))
					{
						AUDIO::START_AUDIO_SCENE("LAMAR_1_ESCAPE_FIGHT_HELI");
					}
					iLocal_186++;
				}
				break;
			case 53:
				if (func_284(&Local_314) < 2)
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_ESCAPE_FIGHT_HELI"))
					{
						AUDIO::STOP_AUDIO_SCENE("LAMAR_1_ESCAPE_FIGHT_HELI");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_ESCAPE_THE_JUNKYARD"))
					{
						AUDIO::START_AUDIO_SCENE("LAMAR_1_ESCAPE_THE_JUNKYARD");
					}
					iLocal_186++;
				}
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_254))
		{
			if (SYSTEM::VDIST2(Var4, ENTITY::GET_ENTITY_COORDS(iLocal_254, false)) > 2500f)
			{
				func_269(&iLocal_254, 0);
			}
		}
	}
	if (iLocal_320 == 2)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		func_213();
		CLOCK::PAUSE_CLOCK(false);
		__LIB_16__::func_13(&iLocal_243, 0);
		__LIB_16__::func_13(&iLocal_244, 0);
		__LIB_16__::func_13(&iLocal_246, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_325);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_326);
		func_275();
		func_153(&Local_314, 0);
		__LIB_37__::func_206(&iLocal_261, 0);
		__LIB_0__::func_221(&Local_288, 3);
		__LIB_0__::func_221(&Local_288, 4);
		__LIB_0__::func_221(&Local_288, 8);
		func_289(0);
		if (iLocal_240 != 0)
		{
			if (INTERIOR::IS_INTERIOR_READY(iLocal_240))
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_240);
				iLocal_240 = 0;
			}
		}
		iVar0 = 0;
		while (iVar0 < Local_237.f_0)
		{
			if (Local_237[iVar0 /*9*/] != 0)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_237[iVar0 /*9*/], false);
				Local_237[iVar0 /*9*/] = 0;
			}
			Local_237[iVar0 /*9*/].f_1 = 0f;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_238.f_0)
		{
			if (Local_238[iVar0 /*9*/] != 0)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_238[iVar0 /*9*/], false);
				Local_238[iVar0 /*9*/] = 0;
			}
			Local_238[iVar0 /*9*/].f_1 = 0f;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_258)
		{
			if (iLocal_258[iVar0] != 0)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_258[iVar0], false);
				iLocal_258[iVar0] = 0;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_247)
		{
			__LIB_16__::func_13(&(iLocal_247[iVar0]), 1);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_248)
		{
			__LIB_16__::func_13(&(iLocal_248[iVar0]), 1);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_259)
		{
			if (iLocal_259[iVar0] != 0)
			{
				PHYSICS::DELETE_ROPE(&(iLocal_259[iVar0]));
				iLocal_259[iVar0] = 0;
			}
			iVar0++;
		}
		func_269(&iLocal_254, 0);
		STREAMING::REMOVE_PTFX_ASSET();
		WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_PUMPSHOTGUN"));
		WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_SMG"));
		TASK::REMOVE_COVER_POINT(Local_274.f_2);
		TASK::REMOVE_COVER_POINT(Local_275.f_2);
		TASK::REMOVE_COVER_POINT(iLocal_233);
		TASK::REMOVE_COVER_POINT(iLocal_234);
		TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Lemar1");
		TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Lemar2");
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
		iLocal_320 = 0;
		iLocal_319 = 8;
	}
	if (iLocal_320 == 3)
	{
		if (iLocal_319 == 6)
		{
			func_721(7, 0);
		}
		else
		{
			func_721(8, 0);
		}
	}
}

void func_275()//Position - 0x2A174
{
	if (!PED::IS_PED_INJURED(Local_274.f_0))
	{
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_274.f_0, -8f, true);
	}
	if (!PED::IS_PED_INJURED(Local_275.f_0))
	{
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_275.f_0, -8f, true);
	}
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_19");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_18");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_17");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_16");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_15");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_14");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_13");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_12");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_11");
	STREAMING::REMOVE_ANIM_DICT("misslamar1ig_9");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_23");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_23_b");
	STREAMING::REMOVE_ANIM_DICT("misslamar1ig_6");
	STREAMING::REMOVE_ANIM_DICT("misslamar1ig_5");
	STREAMING::REMOVE_ANIM_DICT("misslamar1ig_4");
	STREAMING::REMOVE_ANIM_DICT("misslamar1ig_2_p1");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_26_alt1");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_26");
	STREAMING::REMOVE_ANIM_DICT("misslamar1ig_20");
	STREAMING::REMOVE_CLIP_SET("move_ped_strafing");
}

int func_279(int iParam0)//Position - 0x2A309
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar1 = 0;
		while (iVar1 <= (44 - 1))
		{
			iVar2 = __LIB_0__::func_292(iVar1);
			if (iVar2 != 0)
			{
				if (WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, iVar2) != 0 && WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, iVar2) != joaat("WEAPON_UNARMED"))
				{
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_281(struct<3> Param0, struct<3> Param1, struct<3> Param2, int iParam3, int iParam4)//Position - 0x2A5DD
{
	if (!PED::IS_PED_INJURED(*iParam3) && !PED::IS_PED_INJURED(*iParam4))
	{
		if (SYSTEM::VDIST2(Param0, -593f, -1642.5f, 19.7f) < 25f && (SYSTEM::VDIST2(Param1, -593f, -1642.5f, 19.7f) < 25f || SYSTEM::VDIST2(Param2, -593f, -1642.5f, 19.7f) < 25f))
		{
			if (((Param1.f_2 < 22f && Param0.f_2 < Param1.f_2) && SYSTEM::VDIST2(Param1, -593f, -1642.5f, 21.5f) < SYSTEM::VDIST2(Param0, -593f, -1642.5f, 21.5f)) || ((Param2.f_2 < 22f && Param0.f_2 < Param2.f_2) && SYSTEM::VDIST2(Param2, -593f, -1642.5f, 21.5f) < SYSTEM::VDIST2(Param0, -593f, -1642.5f, 21.5f)))
			{
				TASK::SET_PED_PATH_CAN_USE_LADDERS(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 146, true);
			}
			else
			{
				TASK::SET_PED_PATH_CAN_USE_LADDERS(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 146, false);
			}
		}
		else
		{
			TASK::SET_PED_PATH_CAN_USE_LADDERS(PLAYER::PLAYER_PED_ID(), true);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 146, false);
		}
	}
}

int func_284(int iParam0)//Position - 0x2A787
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		if ((iParam0[iVar1 /*25*/])->f_2)
		{
			if (!PED::IS_PED_INJURED((*iParam0)[iVar1 /*25*/]))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_285(int iParam0)//Position - 0x2A7D3
{
	int iVar0;
	if ((iParam0[0 /*25*/])->f_2)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*25*/]))
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

void func_286(int iParam0, int iParam1, int iParam2)//Position - 0x2A816
{
	struct<3> Var0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	struct<3> Var9;
	float fVar10;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	bVar1 = FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID());
	bVar2 = PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID());
	bVar3 = TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID());
	STREAMING::REQUEST_PTFX_ASSET();
	if (STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		iVar4 = 0;
		iVar5 = *iParam0;
		iVar6 = 0;
		if (*iParam1 >= (iVar5 - 1))
		{
			*iParam1 = 0;
		}
		fVar7 = 0f;
		iVar4 = 0;
		while (iVar4 < *iParam0)
		{
			if (iVar4 >= *iParam1 && iVar6 < 4)
			{
				if ((iParam0[iVar4 /*9*/])->f_1 == 0f)
				{
					if ((iParam0[(iParam0[iVar4 /*9*/])->f_4 /*9*/])->f_1 > (iParam0[iVar4 /*9*/])->f_2)
					{
						if ((iParam0[iVar4 /*9*/])->f_8)
						{
							(iParam0[iVar4 /*9*/])->f_1 = 0.01f;
						}
						else
						{
							(iParam0[iVar4 /*9*/])->f_1 = 0.1f;
						}
					}
				}
				else if ((*iParam0)[iVar4 /*9*/] == 0)
				{
					if ((iParam0[iVar4 /*9*/])->f_8)
					{
						(*iParam0)[iVar4 /*9*/] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_lamar1_fire_spread1", (iParam0[iVar4 /*9*/])->f_5, 0f, 0f, 0f, (iParam0[iVar4 /*9*/])->f_1, false, false, false, false);
					}
					else
					{
						(*iParam0)[iVar4 /*9*/] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_lamar1_fire_spread", (iParam0[iVar4 /*9*/])->f_5, 0f, 0f, 0f, (iParam0[iVar4 /*9*/])->f_1, false, false, false, false);
					}
				}
				else
				{
					if ((iParam0[iVar4 /*9*/])->f_1 < 1.8f)
					{
						(iParam0[iVar4 /*9*/])->f_1 = __LIB_0__::func_331(((iParam0[iVar4 /*9*/])->f_1 + (0.9f * SYSTEM::TIMESTEP())), 0f, 1.8f);
						GRAPHICS::SET_PARTICLE_FX_LOOPED_SCALE((*iParam0)[iVar4 /*9*/], (iParam0[iVar4 /*9*/])->f_1);
					}
					if (((((iParam0[iVar4 /*9*/])->f_1 > 0.4f && ((SYSTEM::VDIST2((iParam0[iVar4 /*9*/])->f_5, Var0) < 2f && (iParam0[iVar4 /*9*/])->f_1 > 0.9f) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), (iParam0[iVar4 /*9*/])->f_5 + Vector(1f, 0f, 0f), 0.75f, 0.75f, 1f, false, true, 0))) && !bVar1) && !bVar2) && !bVar3)
					{
						FIRE::START_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
						iLocal_146 = MISC::GET_GAME_TIMER();
					}
				}
				*iParam1 = iVar4 + 1;
				iVar6++;
			}
			fVar7 = (fVar7 + (iParam0[iVar4 /*9*/])->f_1);
			iVar4++;
		}
		fVar8 = (fVar7 / (SYSTEM::TO_FLOAT(*iParam0) * 1.8f));
		Var9 = { -578.854f, -1601.3403f, 27.826f };
		if (iParam2 != 0)
		{
			Var9 = { -590.665f, -1603.005f, 27.95f };
		}
		if (iLocal_258[iParam2] == 0)
		{
			if (fVar8 > 0.25f)
			{
				iLocal_258[iParam2] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_env_agency3b_smoke", Var9, 0f, 0f, 0f, 1f, false, false, false, false);
			}
		}
		else
		{
			fVar10 = ((fVar8 - 0.25f) / (1f - 0.25f));
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_258[iParam2], "smoke", (1f - fVar10), false);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_258[iParam2], "cinder", (1f - fVar10), false);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_258[iParam2], "debris", (1f - fVar10), false);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_258[iParam2], "speed", 1f, false);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_258[iParam2], "smoke_strength", 1f, false);
		}
	}
	if (iLocal_146 != 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_146) > 2000 && bVar1)
		{
			FIRE::STOP_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
			iLocal_146 = 0;
		}
	}
}

void func_288()//Position - 0x2AB74
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_132)
	{
		iLocal_132[iVar0] = 0;
		iVar0++;
	}
}

void func_289(bool bParam0)//Position - 0x2AB99
{
	int iVar0;
	if (bParam0)
	{
		if (iLocal_235[0] == 0)
		{
			iLocal_235[0] = TASK::ADD_COVER_POINT(-611.5913f, -1628.093f, 32.0105f, 276.8619f, 2, 0, 1, true);
		}
		if (iLocal_235[1] == 0)
		{
			iLocal_235[1] = TASK::ADD_COVER_POINT(-613.2361f, -1633.8844f, 32.0105f, 276.5077f, 2, 0, 1, true);
		}
		if (iLocal_235[2] == 0)
		{
			iLocal_235[2] = TASK::ADD_COVER_POINT(-607.7554f, -1634.3656f, 32.0303f, 86.4219f, 2, 0, 1, true);
		}
		if (iLocal_235[3] == 0)
		{
			iLocal_235[3] = TASK::ADD_COVER_POINT(-573.81f, -1611.3314f, 26.0108f, 103.7234f, 2, 0, 1, true);
		}
		if (iLocal_235[4] == 0)
		{
			iLocal_235[4] = TASK::ADD_COVER_POINT(-589.1723f, -1621.6759f, 32.0106f, 262.9417f, 0, 2, 3, true);
			iLocal_195 = 4;
		}
		if (iLocal_235[5] == 0)
		{
			iLocal_235[5] = TASK::ADD_COVER_POINT(-602.7028f, -1607.0862f, 26.0108f, 268.2972f, 2, 0, 1, true);
		}
		if (iLocal_235[6] == 0)
		{
			iLocal_235[6] = TASK::ADD_COVER_POINT(-598.4998f, -1607.2037f, 26.0108f, 81.2509f, 2, 0, 1, true);
		}
		if (iLocal_235[7] == 0)
		{
			iLocal_235[7] = TASK::ADD_COVER_POINT(-607.9058f, -1627.806f, 32.0106f, 1.1009f, 0, 2, 3, true);
		}
		if (iLocal_235[8] == 0)
		{
			iLocal_235[8] = TASK::ADD_COVER_POINT(-575.5695f, -1599.4375f, 27.1608f, 83.5327f, 2, 0, 1, true);
		}
		if (iLocal_235[9] == 0)
		{
			iLocal_235[9] = TASK::ADD_COVER_POINT(-587.3282f, -1626.7545f, 32.0106f, 275.1829f, 2, 0, 1, true);
		}
		if (iLocal_235[10] == 0)
		{
			iLocal_235[10] = TASK::ADD_COVER_POINT(-587.3992f, -1625.9774f, 32.053f, 275.1821f, 2, 0, 1, true);
		}
		if (iLocal_235[11] == 0)
		{
			iLocal_235[11] = TASK::ADD_COVER_POINT(-576.1132f, -1603.0667f, 26.1021f, 99.7303f, 1, 0, 1, true);
		}
		if (iLocal_235[12] == 0)
		{
			iLocal_235[12] = TASK::ADD_COVER_POINT(-576.2527f, -1605.1746f, 26.0108f, 90.3217f, 1, 0, 1, true);
		}
		if (iLocal_235[13] == 0)
		{
			iLocal_235[13] = TASK::ADD_COVER_POINT(-562.7417f, -1616.3969f, 26.011f, 356.9735f, 0, 0, 1, true);
		}
		if (iLocal_235[14] == 0)
		{
			iLocal_235[14] = TASK::ADD_COVER_POINT(-560.3149f, -1611.988f, 26.011f, 356.9735f, 1, 0, 1, true);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iLocal_235)
		{
			if (iLocal_235[iVar0] != 0)
			{
				TASK::REMOVE_COVER_POINT(iLocal_235[iVar0]);
				iLocal_235[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_290()//Position - 0x2AE81
{
	int iVar0;
	struct<3> Var1[4];
	int iVar2;
	iVar0 = 0;
	Var1[0 /*3*/] = { -572.11914f, -1609.3818f, 32.894913f };
	Var1[1 /*3*/] = { -579.19617f, -1603.945f, 32.894913f };
	Var1[2 /*3*/] = { -594.8319f, -1607.3778f, 32.894913f };
	Var1[3 /*3*/] = { -602.40015f, -1609.9244f, 32.33266f };
	if (!PHYSICS::ROPE_ARE_TEXTURES_LOADED())
	{
		PHYSICS::ROPE_LOAD_TEXTURES();
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_247[0]))
	{
		STREAMING::REQUEST_MODEL(iLocal_342);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_342) && func_291(0))
		{
			iLocal_247[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_342, -572.11914f, -1609.3818f, 30.294912f, true, true, false);
			iLocal_247[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_342, -579.19617f, -1603.945f, 30.294912f, true, true, false);
			iLocal_247[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_342, -594.8319f, -1607.3778f, 30.294914f, true, true, false);
			iLocal_247[3] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_342, -602.40015f, -1609.9244f, 29.732662f, true, true, false);
			iLocal_248[0] = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Var1[0 /*3*/], true, true, false);
			iLocal_248[1] = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Var1[1 /*3*/], true, true, false);
			iLocal_248[2] = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Var1[2 /*3*/], true, true, false);
			iLocal_248[3] = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Var1[3 /*3*/], true, true, false);
			iVar0 = 0;
			while (iVar0 < iLocal_247)
			{
				OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(iLocal_247[iVar0], true);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_247[iVar0], false);
				ENTITY::SET_ENTITY_DYNAMIC(iLocal_247[iVar0], true);
				PHYSICS::ACTIVATE_PHYSICS(iLocal_247[iVar0]);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_247[iVar0], true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_248[iVar0], true);
				iLocal_131[iVar0] = 0;
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_342);
		}
	}
	else if (!PHYSICS::DOES_ROPE_EXIST(&(iLocal_259[0])))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_259)
		{
			iLocal_259[iVar0] = PHYSICS::ADD_ROPE(Var1[iVar0 /*3*/], 0f, 90f, 0f, fLocal_138, 3, fLocal_138, fLocal_138, 0.5f, false, false, true, 1f, false, 0);
			PHYSICS::PIN_ROPE_VERTEX(iLocal_259[iVar0], (PHYSICS::GET_ROPE_VERTEX_COUNT(iLocal_259[iVar0]) - 1), Var1[iVar0 /*3*/]);
			iLocal_131[iVar0] = 0;
			iVar0++;
		}
	}
	else
	{
		iVar2 = 0;
		iVar0 = 0;
		while (iVar0 < iLocal_247)
		{
			if (!iLocal_131[iVar0])
			{
				if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_247[iVar0]) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_248[iVar0]))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_247[iVar0], Var1[iVar0 /*3*/] + Vector(-fLocal_138, 0f, 0f), false, false, true);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_247[iVar0], false);
					PHYSICS::ATTACH_ENTITIES_TO_ROPE(iLocal_259[iVar0], iLocal_248[iVar0], iLocal_247[iVar0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_248[iVar0], 0f, 0f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_247[iVar0], 0f, 0f, -0.1f), fLocal_138, false, false, 0, 0);
					iLocal_131[iVar0] = 1;
				}
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_291(bool bParam0)//Position - 0x2B1AC
{
	if (bParam0)
	{
		ENTITY::REMOVE_MODEL_HIDE(-572.11914f, -1609.3818f, 30.294912f, 10f, iLocal_343, true);
		ENTITY::REMOVE_MODEL_HIDE(-579.19617f, -1603.945f, 30.294912f, 10f, iLocal_343, true);
		ENTITY::REMOVE_MODEL_HIDE(-594.8319f, -1607.3778f, 30.294914f, 10f, iLocal_343, true);
		ENTITY::REMOVE_MODEL_HIDE(-602.40015f, -1609.9244f, 29.732662f, 10f, iLocal_343, true);
		return 1;
	}
	else
	{
		ENTITY::CREATE_MODEL_HIDE(-572.11914f, -1609.3818f, 30.294912f, 10f, iLocal_343, true);
		ENTITY::CREATE_MODEL_HIDE(-579.19617f, -1603.945f, 30.294912f, 10f, iLocal_343, true);
		ENTITY::CREATE_MODEL_HIDE(-594.8319f, -1607.3778f, 30.294914f, 10f, iLocal_343, true);
		ENTITY::CREATE_MODEL_HIDE(-602.40015f, -1609.9244f, 29.732662f, 10f, iLocal_343, true);
		return 1;
	}
	return 0;
}

void func_293()//Position - 0x2B2E4
{
	int iVar0;
	Local_238[0 /*9*/].f_5 = { -583.4873f, -1601.0438f, 26.701f };
	Local_238[0 /*9*/].f_4 = 0;
	Local_238[0 /*9*/].f_2 = 0.1f;
	Local_238[0 /*9*/].f_8 = 1;
	Local_238[1 /*9*/].f_5 = { -581.7587f, -1601.2323f, 26.6951f };
	Local_238[1 /*9*/].f_4 = 0;
	Local_238[1 /*9*/].f_2 = 0.7f;
	Local_238[2 /*9*/].f_5 = { -582.0659f, -1602.4412f, 26.6555f };
	Local_238[2 /*9*/].f_4 = 1;
	Local_238[2 /*9*/].f_2 = 0.7f;
	Local_238[3 /*9*/].f_5 = { -581.7474f, -1600.0072f, 27.6408f };
	Local_238[3 /*9*/].f_4 = 1;
	Local_238[3 /*9*/].f_2 = 0.6f;
	Local_238[4 /*9*/].f_5 = { -581.9272f, -1604.2128f, 26.8116f };
	Local_238[4 /*9*/].f_4 = 2;
	Local_238[4 /*9*/].f_2 = 0.7f;
	Local_238[5 /*9*/].f_5 = { -581.5225f, -1598.9573f, 27.6963f };
	Local_238[5 /*9*/].f_4 = 3;
	Local_238[5 /*9*/].f_2 = 0.5f;
	Local_238[6 /*9*/].f_5 = { -580.6136f, -1604.2695f, 26.5611f };
	Local_238[6 /*9*/].f_4 = 4;
	Local_238[6 /*9*/].f_2 = 0.8f;
	Local_238[7 /*9*/].f_5 = { -579.8723f, -1600.1908f, 28.7132f };
	Local_238[7 /*9*/].f_4 = 3;
	Local_238[7 /*9*/].f_2 = 0.4f;
	Local_238[8 /*9*/].f_5 = { -579.7776f, -1599.275f, 29.8253f };
	Local_238[8 /*9*/].f_4 = 5;
	Local_238[8 /*9*/].f_2 = 0.4f;
	Local_238[9 /*9*/].f_5 = { -578.4561f, -1600.3146f, 27.7598f };
	Local_238[9 /*9*/].f_4 = 7;
	Local_238[9 /*9*/].f_2 = 0.5f;
	Local_238[10 /*9*/].f_5 = { -578.2825f, -1599.1992f, 28.8074f };
	Local_238[10 /*9*/].f_4 = 8;
	Local_238[10 /*9*/].f_2 = 0.4f;
	Local_238[11 /*9*/].f_5 = { -576.612f, -1600.441f, 26.6787f };
	Local_238[11 /*9*/].f_4 = 9;
	Local_238[11 /*9*/].f_2 = 0.7f;
	Local_238[11 /*9*/].f_8 = 1;
	Local_238[12 /*9*/].f_5 = { -576.6265f, -1599.3842f, 27.5946f };
	Local_238[12 /*9*/].f_4 = 10;
	Local_238[12 /*9*/].f_2 = 0.5f;
	Local_238[13 /*9*/].f_5 = { -576.6396f, -1601.5969f, 26.5078f };
	Local_238[13 /*9*/].f_4 = 11;
	Local_238[13 /*9*/].f_2 = 0.5f;
	Local_238[14 /*9*/].f_5 = { -575.087f, -1599.9966f, 26.6606f };
	Local_238[14 /*9*/].f_4 = 11;
	Local_238[14 /*9*/].f_2 = 0.6f;
	Local_238[15 /*9*/].f_5 = { -576.9461f, -1602.9968f, 26.4396f };
	Local_238[15 /*9*/].f_4 = 13;
	Local_238[15 /*9*/].f_2 = 0.7f;
	Local_238[16 /*9*/].f_5 = { -573.2653f, -1600.1333f, 26.6599f };
	Local_238[16 /*9*/].f_4 = 14;
	Local_238[16 /*9*/].f_2 = 0.7f;
	Local_238[17 /*9*/].f_5 = { -577.1041f, -1605.072f, 26.5755f };
	Local_238[17 /*9*/].f_4 = 15;
	Local_238[17 /*9*/].f_2 = 0.8f;
	Local_238[18 /*9*/].f_5 = { -572.7047f, -1601.7343f, 26.5865f };
	Local_238[18 /*9*/].f_4 = 16;
	Local_238[18 /*9*/].f_2 = 0.8f;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_238.f_0)
	{
		Local_238[iVar0 /*9*/].f_1 = 0f;
		Local_238[iVar0 /*9*/].f_3 = 0;
		iVar0++;
	}
}

void func_294()//Position - 0x2B6C8
{
	int iVar0;
	Local_237[0 /*9*/].f_5 = { -589.7524f, -1601.6586f, 26.7179f };
	Local_237[0 /*9*/].f_4 = 0;
	Local_237[0 /*9*/].f_2 = 0.1f;
	Local_237[0 /*9*/].f_8 = 1;
	Local_237[1 /*9*/].f_5 = { -589.6934f, -1600.4192f, 27.9798f };
	Local_237[1 /*9*/].f_4 = 0;
	Local_237[1 /*9*/].f_2 = 0.7f;
	Local_237[2 /*9*/].f_5 = { -591.6019f, -1601.3491f, 26.7896f };
	Local_237[2 /*9*/].f_4 = 1;
	Local_237[2 /*9*/].f_2 = 0.2f;
	Local_237[3 /*9*/].f_5 = { -591.2652f, -1600.3153f, 27.9268f };
	Local_237[3 /*9*/].f_4 = 2;
	Local_237[3 /*9*/].f_2 = 0.4f;
	Local_237[4 /*9*/].f_5 = { -591.699f, -1602.3751f, 26.757f };
	Local_237[4 /*9*/].f_4 = 3;
	Local_237[4 /*9*/].f_2 = 0.2f;
	Local_237[5 /*9*/].f_5 = { -589.5444f, -1599.3856f, 27.9523f };
	Local_237[5 /*9*/].f_4 = 4;
	Local_237[5 /*9*/].f_2 = 0.2f;
	Local_237[6 /*9*/].f_5 = { -591.2639f, -1603.7347f, 26.8366f };
	Local_237[6 /*9*/].f_4 = 5;
	Local_237[6 /*9*/].f_2 = 0.2f;
	Local_237[7 /*9*/].f_5 = { -591.1995f, -1599.2474f, 27.9672f };
	Local_237[7 /*9*/].f_4 = 6;
	Local_237[7 /*9*/].f_2 = 0.2f;
	Local_237[8 /*9*/].f_5 = { -589.4444f, -1598.2511f, 27.9685f };
	Local_237[8 /*9*/].f_4 = 7;
	Local_237[8 /*9*/].f_2 = 0.2f;
	Local_237[9 /*9*/].f_5 = { -591.0514f, -1598.0443f, 29.1302f };
	Local_237[9 /*9*/].f_4 = 8;
	Local_237[9 /*9*/].f_2 = 0.2f;
	Local_237[10 /*9*/].f_5 = { -594.8785f, -1603.1409f, 27.0172f };
	Local_237[10 /*9*/].f_4 = 7;
	Local_237[10 /*9*/].f_2 = 0.7f;
	Local_237[11 /*9*/].f_5 = { -596.2939f, -1604.3033f, 25.9614f };
	Local_237[11 /*9*/].f_4 = 10;
	Local_237[11 /*9*/].f_2 = 0.7f;
	Local_237[12 /*9*/].f_5 = { -596.6607f, -1602.7202f, 26.0841f };
	Local_237[12 /*9*/].f_4 = 11;
	Local_237[12 /*9*/].f_2 = 0.4f;
	Local_237[12 /*9*/].f_8 = 1;
	Local_237[13 /*9*/].f_5 = { -597.8643f, -1601.6106f, 26.0368f };
	Local_237[13 /*9*/].f_4 = 12;
	Local_237[13 /*9*/].f_2 = 0.4f;
	Local_237[14 /*9*/].f_5 = { -597.0824f, -1598.9607f, 25.8901f };
	Local_237[14 /*9*/].f_4 = 13;
	Local_237[14 /*9*/].f_2 = 0.7f;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_237.f_0)
	{
		Local_237[iVar0 /*9*/].f_1 = 0f;
		Local_237[iVar0 /*9*/].f_3 = 0;
		iVar0++;
	}
}

void func_295(int iParam0)//Position - 0x2B9E4
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	bool bVar11;
	int iVar12;
	float fVar13;
	bool bVar14;
	bool bVar15;
	struct<3> Var16;
	struct<3> Var17;
	struct<3> Var18;
	struct<3> Var19;
	struct<3> Var20;
	struct<3> Var21;
	struct<3> Var22;
	bool bVar23;
	struct<3> Var24;
	bool bVar25;
	if (!PED::IS_PED_INJURED(Local_275.f_0))
	{
		bVar2 = (PED::IS_PED_IN_COMBAT(Local_275.f_0, 0) || TASK::GET_SCRIPT_TASK_STATUS(Local_275.f_0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) == 1);
		Var4 = { ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true) };
		Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_212);
		PED::SET_PED_RESET_FLAG(Local_275.f_0, 227, true);
		switch (Local_275.f_3)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("misslamar1ig_2_p1");
				if (PED::IS_PED_RAGDOLL(Local_275.f_0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_275.f_0, false);
				}
				if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_2_p1"))
				{
					if (!CAM::IS_SCREEN_FADED_OUT() || iParam0)
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_275.f_0, false);
						Local_275.f_8 = { -617.8926f, -1628.9664f, 32.0106f };
						func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 253.2876f, 2f, 0, 0, 1, 1);
						Local_275.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-617.689f, -1629.484f, 32.038f, 0f, 0f, 175f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_275.f_0, Local_275.f_6, "misslamar1ig_2_p1", "ig_2_p1_stretch", 1.5f, -1.5f, 5, 153, 1.5f, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_275.f_0, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_275.f_0, 12, true);
						PED::SET_COMBAT_FLOAT(Local_275.f_0, 0, 1f);
						PED::SET_COMBAT_FLOAT(Local_275.f_0, 13, 0.5f);
						iLocal_117 = 0;
						Local_275.f_12 = 0;
						Local_275.f_11 = 0;
						Local_275.f_4 = 0;
						Local_275.f_3++;
					}
				}
				break;
			case 1:
				if (!Local_275.f_11)
				{
					if (__LIB_37__::func_207(Local_275.f_0, Local_275.f_8, 4f, 2f, 0, 0))
					{
						if (Local_275.f_12)
						{
							Local_275.f_8 = { -617.8926f, -1628.9664f, 32.0106f };
							func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 253.2876f, 2f, 0, 0, 1, 1);
							Local_275.f_12 = 0;
						}
						else
						{
							Local_275.f_8 = { -620.7198f, -1627.3146f, 32.0303f };
							func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 269.1433f, 2f, 0, 2, 1, 1);
							Local_275.f_12 = 1;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_275.f_0, -8f, true);
							Local_275.f_6 = -1;
							Local_275.f_11 = 1;
						}
						bVar0 = true;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var4, Local_275.f_8);
				if (func_285(&Local_307) && func_285(&Local_305))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
					{
						func_304(&Local_275, &(Local_275.f_6), Local_275.f_8, 1f, 0.5f, 1, 0, Local_275.f_2, -1056964608);
					}
					else
					{
						Local_275.f_8 = { -601.8096f, -1615.841f, 32.0102f };
						func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 267.2701f, 1f, 0, 2, 3, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_275.f_0, 12, false);
						PED::SET_COMBAT_FLOAT(Local_275.f_0, 0, 0.05f);
						PED::SET_COMBAT_FLOAT(Local_275.f_0, 13, 3f);
						Local_275.f_12 = 0;
						Local_275.f_11 = 1;
						Local_275.f_4 = MISC::GET_GAME_TIMER();
						Local_275.f_3++;
					}
				}
				else
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6) && !Local_275.f_11)
					{
						func_303(&Local_275, &(Local_275.f_6), &(Local_275.f_4), Local_275.f_8, 1f, 0.5f, 1, 0, Local_275.f_2, -1056964608);
					}
					else if (Local_275.f_11 || ((TASK::GET_SCRIPT_TASK_STATUS(Local_275.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6)) && (fVar3 > 4f || !bVar2)))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar6);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar6);
						TASK::TASK_PERFORM_SEQUENCE(Local_275.f_0, iVar6);
						TASK::CLEAR_SEQUENCE_TASK(&iVar6);
						Local_275.f_11 = 0;
					}
					if (!iLocal_121)
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
						{
							if (PED::IS_PED_SHOOTING(Local_275.f_0))
							{
								MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(-606.3475f, -1634.2522f, 33.663982f, -606.5612f, -1638.0245f, 33.714024f, 0, true, joaat("WEAPON_PUMPSHOTGUN"), PLAYER::PLAYER_PED_ID(), false, true, -1f);
								iLocal_121 = 1;
							}
						}
					}
				}
				break;
			case 2:
				STREAMING::REQUEST_ANIM_DICT("misslamar1ig_6");
				if (!Local_275.f_11)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -601.8096f, -1615.841f, 32.0102f) < 2f)
					{
						if (__LIB_0__::func_490(Local_275.f_8, -601.8954f, -1615.9567f, 32.0105f, 1056964608, 0))
						{
							if (SYSTEM::VDIST2(Var4, -601.8954f, -1615.9567f, 32.0105f) > 2f)
							{
								Local_275.f_8 = { -603.361f, -1619.3937f, 32.0105f };
								TASK::REMOVE_COVER_POINT(iLocal_234);
								func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 267.2701f, 2f, 1, 2, 0, 1);
								Local_275.f_11 = 1;
							}
						}
					}
					else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -603.361f, -1619.3937f, 32.0105f) < 2f)
					{
						if (__LIB_0__::func_490(Local_275.f_8, -603.361f, -1619.3937f, 32.0105f, 1056964608, 0))
						{
							if (SYSTEM::VDIST2(Var4, -603.361f, -1619.3937f, 32.0105f) > 2f)
							{
								Local_275.f_8 = { -601.8954f, -1615.9567f, 32.0105f };
								func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 267.2701f, 2f, 0, 2, 0, 1);
								Local_275.f_11 = 1;
							}
						}
					}
				}
				if (func_285(&Local_306))
				{
					if (Local_275.f_8 != -601.8096f)
					{
						Local_275.f_8 = { -601.8096f, -1615.841f, 32.0102f };
						func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 267.2701f, 2f, 0, 2, 3, 1);
					}
					iVar7 = func_302(&Local_275, &(Local_275.f_4), Local_275.f_8, -604.2f, -1603.5314f, 27.5187f, Local_275.f_2, 1, 1, 0.75f, 0, 0);
					if (iVar7 == 0)
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_6"))
						{
							Local_275.f_8 = { -589.083f, -1619.854f, 32.0105f };
							TASK::REMOVE_COVER_POINT(Local_275.f_2);
							Local_275.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-599.1f, -1619.598f, 32.001f, 0f, 0f, 175f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_275.f_0, Local_275.f_6, "misslamar1ig_6", "ig_6_stretch", 8f, -1.5f, 261, 153, 8f, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_275.f_0, false);
							Local_275.f_12 = 0;
							Local_275.f_11 = 0;
							Local_275.f_4 = 0;
							Local_275.f_3++;
						}
					}
					else if (iVar7 == 2)
					{
						Local_275.f_8 = { -589.083f, -1619.854f, 32.0105f };
						TASK::REMOVE_COVER_POINT(Local_275.f_2);
						Local_275.f_12 = 0;
						Local_275.f_11 = 1;
						Local_275.f_4 = 0;
						Local_275.f_3++;
					}
				}
				else
				{
					if (!iLocal_117)
					{
						if (Local_306[0 /*25*/].f_5 > 0)
						{
							Local_275.f_11 = 1;
							iLocal_117 = 1;
						}
					}
					if (Local_275.f_11 == 1 && (MISC::GET_GAME_TIMER() - Local_275.f_4) > 500)
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar6);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						if (SYSTEM::VDIST2(Var4, Local_275.f_8) > 4f)
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_275.f_8, -599f, -1618f, 33.5f, 2f, false, 1f, 4f, true, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						}
						if (Local_306[0 /*25*/].f_5 > 0)
						{
							if (!PED::IS_PED_IN_COVER(Local_275.f_0, false))
							{
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_275.f_8, 1000, false, 0.5f, false, false, Local_275.f_2, true);
							}
							TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
						}
						else
						{
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_275.f_8, -1, false, 0.5f, false, false, Local_275.f_2, true);
						}
						TASK::CLOSE_SEQUENCE_TASK(iVar6);
						TASK::TASK_PERFORM_SEQUENCE(Local_275.f_0, iVar6);
						TASK::CLEAR_SEQUENCE_TASK(&iVar6);
						Local_275.f_11 = 0;
					}
				}
				break;
			case 3:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_23");
				fVar3 = SYSTEM::VDIST2(Local_275.f_8, Var4);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
				{
					func_301(&Local_275, &(Local_275.f_6), -589.4374f, -1628.9316f, 33.7582f, 0.99f, 0, -1056964608);
					if (SYSTEM::VDIST(Var5, Var4) < 2f)
					{
						if (fVar3 > SYSTEM::VDIST2(Var5, Local_275.f_8))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_275.f_0, -1.5f, true);
							Local_275.f_6 = -1;
						}
					}
				}
				else if (fVar3 > 2f && TASK::GET_SCRIPT_TASK_STATUS(Local_275.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar6);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_275.f_8, -589.4374f, -1628.9316f, 33.7582f, 2f, false, 0.1f, 4f, true, 4096, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_COORD(0, -589.4374f, -1628.9316f, 33.7582f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar6);
					TASK::CLEAR_PED_TASKS(Local_275.f_0);
					TASK::TASK_PERFORM_SEQUENCE(Local_275.f_0, iVar6);
					TASK::CLEAR_SEQUENCE_TASK(&iVar6);
				}
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -588.1853f, -1619.1538f, 32.0105f, -592.52057f, -1618.9945f, 34.7605f, 4.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -566.4107f, -1627.2906f, 32.056114f, -592.11206f, -1624.9486f, 34.760475f, 7.25f, false, true, 0)) && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_23"))
				{
					if ((fVar3 < 2f && ENTITY::GET_ENTITY_SPEED(Local_275.f_0) < 0.3f) || (!ENTITY::IS_ENTITY_ON_SCREEN(Local_275.f_0) && !CAM::IS_SPHERE_VISIBLE(Local_275.f_8, 1f)))
					{
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_275.f_6) > 0.95f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
						{
							if (Local_275.f_4 == 0)
							{
								Local_275.f_4 = MISC::GET_GAME_TIMER();
							}
							else if ((MISC::GET_GAME_TIMER() - Local_275.f_4) > 500)
							{
								Local_275.f_8 = { -584.9334f, -1622.8121f, 32.0105f };
								func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 272.4262f, 2f, 0, 0, 1, 1);
								Local_275.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-589.083f, -1619.854f, 33.016f, 0f, 0f, 168f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_275.f_0, Local_275.f_6, "misslamar1lam_1_ig_23", "lam_1_ig_23", 1.5f, -1.5f, 261, 153, 1.5f, 0);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_275.f_6, 0f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_275.f_0, false);
								Local_275.f_12 = 0;
								Local_275.f_11 = 0;
								Local_275.f_4 = 0;
								Local_275.f_3++;
							}
						}
					}
				}
				break;
			case 4:
				if (!Local_275.f_11)
				{
					if (__LIB_37__::func_207(Local_275.f_0, Local_275.f_8, 5f, 2f, 0, 0))
					{
						if (Local_275.f_12)
						{
							Local_275.f_8 = { -584.9334f, -1622.8121f, 32.0105f };
							func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 272.4262f, 2f, 0, 0, 1, 1);
							Local_275.f_12 = 0;
						}
						else
						{
							Local_275.f_8 = { -587.5033f, -1625.958f, 32.053f };
							TASK::REMOVE_COVER_POINT(Local_275.f_2);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_275.f_0, Local_275.f_8, 2f, false, false);
							Local_275.f_12 = 1;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_275.f_0, -1.5f, true);
							Local_275.f_6 = -1;
						}
						bVar0 = true;
						Local_275.f_11 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var4, Local_275.f_8);
				if (func_285(&Local_308))
				{
					if (Local_275.f_4 == 0)
					{
						Local_275.f_4 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - Local_275.f_4) > 500)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_275.f_0, -1.5f, true);
							Local_275.f_6 = -1;
						}
						Local_275.f_8 = { -562.4127f, -1631.9725f, 32.0105f };
						func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 180.132f, 2f, 0, 2, 3, 1);
						TASK::OPEN_SEQUENCE_TASK(&iVar6);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -576.3644f, -1624.4769f, 32.0106f, -562f, -1627.9f, 33.6f, 2f, false, 0.5f, 4f, true, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_275.f_8, -562f, -1627.9f, 33.6f, 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, Local_275.f_2, -564.5787f, -1652.9934f, 34.1345f, -1, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar6);
						TASK::TASK_PERFORM_SEQUENCE(Local_275.f_0, iVar6);
						TASK::CLEAR_SEQUENCE_TASK(&iVar6);
						Local_275.f_12 = 0;
						Local_275.f_11 = 0;
						Local_275.f_4 = 0;
						Local_275.f_3++;
					}
				}
				else
				{
					if (Local_275.f_11 || ((TASK::GET_SCRIPT_TASK_STATUS(Local_275.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6)) && (fVar3 > 4f || !bVar2)))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar6);
						if (fVar3 > 4f)
						{
							TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_275.f_8, -583f, -1626.8f, 33.6f, 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						}
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar6);
						TASK::TASK_PERFORM_SEQUENCE(Local_275.f_0, iVar6);
						TASK::CLEAR_SEQUENCE_TASK(&iVar6);
						Local_275.f_11 = 0;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
					{
						func_303(&Local_275, &(Local_275.f_6), &(Local_275.f_4), Local_275.f_8, 0.99f, 0f, 1, 0, Local_275.f_2, -1.5f);
					}
				}
				break;
			case 5:
				fVar3 = SYSTEM::VDIST2(Var4, Local_275.f_8);
				if (Local_313[0 /*25*/].f_5 > 0 || PED::IS_PED_INJURED(Local_313[0 /*25*/]))
				{
					if (fVar3 < 100f)
					{
						Local_275.f_8 = { -561.5094f, -1623.1287f, 30.0093f };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_275.f_0, Local_275.f_8, 2f, false, false);
						if (!PED::IS_PED_INJURED(Local_313[0 /*25*/]))
						{
							TASK::TASK_COMBAT_PED(Local_275.f_0, Local_313[0 /*25*/], 0, 16);
						}
						Local_275.f_4 = 0;
						Local_275.f_3++;
					}
				}
				break;
			case 6:
				if (func_285(&Local_313))
				{
					if (Var5.f_2 < 29.1f || Local_309[0 /*25*/].f_5 > 0)
					{
						if (Local_275.f_4 == 0)
						{
							Local_275.f_4 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - Local_275.f_4) > 650)
						{
							Local_275.f_8 = { -564.3552f, -1626.5706f, 29.0099f };
							TASK::OPEN_SEQUENCE_TASK(&iVar6);
							TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_275.f_8, -561.7f, -1626.3f, 29.3f, 2f, false, 0.5f, 4f, true, 512, false, joaat("FIRING_PATTERN_FULL_AUTO"));
							TASK::TASK_AIM_GUN_AT_COORD(0, -561.7f, -1626.3f, 29.3f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iVar6);
							TASK::TASK_PERFORM_SEQUENCE(Local_275.f_0, iVar6);
							TASK::CLEAR_SEQUENCE_TASK(&iVar6);
							Local_275.f_11 = 0;
							Local_275.f_4 = 0;
							Local_275.f_3++;
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_275.f_0, joaat("SCRIPT_TASK_AIM_GUN_AT_COORD")) != 1)
					{
						TASK::TASK_AIM_GUN_AT_COORD(Local_275.f_0, -564.2987f, -1631.5826f, 30.0554f, -1, false, false);
					}
				}
				break;
			case 7:
				if (Var5.f_2 < 27.1f || Local_309[0 /*25*/].f_5 > 0)
				{
					if (Local_275.f_4 == 0)
					{
						Local_275.f_4 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - Local_275.f_4) > 650)
					{
						Local_275.f_8 = { -562.5714f, -1628.3652f, 28.0096f };
						TASK::OPEN_SEQUENCE_TASK(&iVar6);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_275.f_8, -560.4027f, -1602.1191f, 27.3222f, 2f, false, 0.5f, 4f, true, 512, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::TASK_AIM_GUN_AT_COORD(0, -560.4027f, -1602.1191f, 27.3222f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar6);
						TASK::TASK_PERFORM_SEQUENCE(Local_275.f_0, iVar6);
						TASK::CLEAR_SEQUENCE_TASK(&iVar6);
						Local_275.f_11 = 0;
						Local_275.f_4 = 0;
						Local_275.f_3++;
					}
				}
				break;
			case 8:
				if (Local_309[0 /*25*/].f_5 > 0 || (Local_309[0 /*25*/].f_2 && PED::IS_PED_INJURED(Local_309[0 /*25*/])))
				{
					Local_275.f_11 = 0;
					Local_275.f_4 = 0;
					Local_275.f_3++;
				}
				break;
			case 9:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_275.f_0))
				{
					TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_212, Var4, &iVar8);
					if (iVar8 > 55)
					{
						TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Local_275.f_0, -562.5f, -1626.1f, 28.4f, false);
					}
					else
					{
						TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Local_275.f_0, -565.7f, -1627.7f, 29.6f, false);
					}
				}
				if (func_285(&Local_309))
				{
					Local_275.f_8 = { -560.9681f, -1617.0406f, 26.011f };
					fVar3 = SYSTEM::VDIST2(Var4, Local_275.f_8);
					TASK::OPEN_SEQUENCE_TASK(&iVar6);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					if (fVar3 > 9f)
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_275.f_8, -562f, -1602.3f, 27.6f, 2f, false, 0.5f, 0.5f, true, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_AIM_GUN_AT_COORD(0, -562f, -1602.3f, 27.6f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar6);
					TASK::TASK_PERFORM_SEQUENCE(Local_275.f_0, iVar6);
					TASK::CLEAR_SEQUENCE_TASK(&iVar6);
					Local_275.f_11 = 0;
					Local_275.f_4 = 0;
					Local_275.f_3++;
				}
				else if (Local_309[0 /*25*/].f_5 > 0)
				{
					if (!PED::IS_PED_IN_COMBAT(Local_275.f_0, 0) && TASK::GET_SCRIPT_TASK_STATUS(Local_275.f_0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 1)
					{
						if (Local_275.f_4 == 0)
						{
							Local_275.f_4 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - Local_275.f_4) > 2000)
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_275.f_0, -560.9681f, -1617.0406f, 26.011f, 1.5f, true, false);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_275.f_0, 100f, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_275.f_0, false);
							Local_275.f_4 = 0;
						}
					}
				}
				break;
			case 10:
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -567.4567f, -1601.1743f, 26.010801f, -558.6825f, -1601.8743f, 29.510801f, 7f, false, true, 0) || Local_310[0 /*25*/].f_5 > 0) || PED::IS_PED_INJURED(Local_310[0 /*25*/]))
				{
					Local_275.f_8 = { -560.7259f, -1600.8618f, 26.0603f };
					TASK::OPEN_SEQUENCE_TASK(&iVar6);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_275.f_8, -566.3f, -1601.3f, 27.6159f, 2f, false, 0.5f, 0.5f, true, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_COORD(0, -566.3f, -1601.3f, 27.6159f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar6);
					TASK::TASK_PERFORM_SEQUENCE(Local_275.f_0, iVar6);
					TASK::CLEAR_SEQUENCE_TASK(&iVar6);
					Local_275.f_11 = 0;
					Local_275.f_4 = 0;
					Local_275.f_3++;
				}
				break;
			case 11:
				if (!iLocal_132[39])
				{
					if (Local_275.f_4 == 0)
					{
						if (!__LIB_13__::func_755(&Local_276, 1))
						{
							Local_275.f_4 = MISC::GET_GAME_TIMER();
						}
					}
					else if ((MISC::GET_GAME_TIMER() - Local_275.f_4) > 5000)
					{
						if (SYSTEM::VDIST2(Var4, Var5) < 625f)
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_GOGO2", 7, 0, 0, 0))
							{
								iLocal_132[39] = 1;
							}
						}
					}
				}
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_202))
				{
					OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_202, joaat("v_ilev_rc_door1"), -567.638f, -1602.4773f, 27.1608f, true, true, false);
				}
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_202))
				{
					OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_203, joaat("v_ilev_rc_door1"), -567.4113f, -1599.8862f, 27.1608f, true, true, false);
				}
				if (((Local_310[0 /*25*/].f_5 > 0 || PED::IS_PED_INJURED(Local_310[0 /*25*/])) || (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_202) && OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_202) != 0f)) || (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_203) && OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_203) != 0f))
				{
					MISC::SET_BIT(&iVar9, 2);
					MISC::SET_BIT(&iVar9, 1);
					MISC::SET_BIT(&iVar9, 4);
					MISC::SET_BIT(&iVar9, 3);
					iLocal_257 = OBJECT::CREATE_PICKUP(joaat("PICKUP_WEAPON_SMG"), -601.9845f, -1602.4429f, 29.6f, iVar9, -1, true, 0);
					INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_257, "v_recycle");
					Local_275.f_11 = 0;
					Local_275.f_4 = 0;
					Local_275.f_3 = 50;
				}
				break;
			case 50:
				if (func_285(&Local_309))
				{
					if (Local_275.f_4 == 0)
					{
						if (iLocal_319 == 7)
						{
							Local_275.f_4 = (MISC::GET_GAME_TIMER() - 10000);
						}
						else
						{
							Local_275.f_4 = MISC::GET_GAME_TIMER();
						}
					}
					else if ((MISC::GET_GAME_TIMER() - Local_275.f_4) > 500)
					{
						Local_275.f_8 = { -572.0428f, -1600.6907f, 26.0108f };
						func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 84.6418f, 1f, 2, 0, 1, 1);
						PED::SET_PED_CONFIG_FLAG(Local_275.f_0, 131, true);
						TASK::OPEN_SEQUENCE_TASK(&iVar6);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true), Local_275.f_8) > 9f)
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -564.2f, -1601.4f, 26.01f, -566.3f, -1601.3f, 27.6159f, 2f, false, 0.5f, 0.5f, true, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true), Local_275.f_8) > 2f)
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_275.f_8, -590.1738f, -1606.6678f, 27.6159f, 2f, false, 0.5f, 4f, true, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						}
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_275.f_8, 1000, false, 0.5f, true, true, Local_275.f_2, true);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar6);
						TASK::TASK_PERFORM_SEQUENCE(Local_275.f_0, iVar6);
						TASK::CLEAR_SEQUENCE_TASK(&iVar6);
						PED::SET_PED_ACCURACY(Local_275.f_0, 1);
						PED::SET_COMBAT_FLOAT(Local_275.f_0, 13, 3f);
						Local_275.f_4 = 0;
						Local_275.f_3++;
					}
				}
				break;
			case 51:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_14");
				if (!func_300(&Local_310, -582.35657f, -1606.783f, 26.010801f, -569.629f, -1607.289f, 30.270933f, 15.5f, 0) && !func_300(&Local_311, -582.35657f, -1606.783f, 26.010801f, -569.629f, -1607.289f, 30.270933f, 15.5f, 0))
				{
					iVar7 = func_302(&Local_275, &(Local_275.f_4), Local_275.f_8, -604.2f, -1603.5314f, 27.5187f, Local_275.f_2, 1, 1, 0.75f, 0, 0);
					if (iVar7 == 0)
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_14"))
						{
							Local_275.f_8 = { -580.3932f, -1608.8782f, 26.0108f };
							func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 90.292f, 2f, 0, 2, 0, 1);
							Local_275.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-576.169f, -1610.406f, 26.032f, 0f, 0f, -120f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_275.f_0, Local_275.f_6, "misslamar1lam_1_ig_14", "lam_1_ig_14_stretch", 1.5f, -1.5f, 5, 601, 1.5f, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_275.f_0, false);
							Local_275.f_4 = 0;
							Local_275.f_3++;
						}
					}
					else if (iVar7 == 2)
					{
						Local_275.f_8 = { -580.3932f, -1608.8782f, 26.0108f };
						func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 90.292f, 2f, 0, 2, 0, 1);
						Local_275.f_11 = 1;
						Local_275.f_4 = 0;
						Local_275.f_3++;
					}
				}
				break;
			case 52:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_15");
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
				{
					fVar10 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_275.f_6);
					if (fVar10 > 0.64f && fVar10 < 0.8f)
					{
						func_299(&Local_275);
						if (!(func_285(&Local_310) && func_285(&Local_311)))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_243))
							{
								PED::SET_PED_SHOOTS_AT_COORD(Local_275.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_243, 0f, 0f, 2f), false);
								if (fVar10 > 0.7f)
								{
									MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_243, 0.5f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(iLocal_243, true), 1, true, joaat("WEAPON_PUMPSHOTGUN"), PLAYER::PLAYER_PED_ID(), false, true, -1f);
								}
							}
							else
							{
								PED::SET_PED_SHOOTS_AT_COORD(Local_275.f_0, -594.93f, -1607.64f, 27.8f, false);
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_243))
				{
					if (!PED::IS_PED_IN_COMBAT(Local_275.f_0, 0))
					{
						fVar3 = SYSTEM::VDIST2(Var4, Local_275.f_8);
						if (fVar3 > 4f && fVar3 < 100f)
						{
							PED::SET_PED_SHOOTS_AT_COORD(Local_275.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_243, 0f, 0f, 2f), false);
							if (fVar3 < 49f && Local_237[0 /*9*/].f_1 == 0f)
							{
								MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_243, 0.5f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(iLocal_243, true), 1, true, joaat("WEAPON_PUMPSHOTGUN"), PLAYER::PLAYER_PED_ID(), false, true, -1f);
							}
						}
					}
				}
				bVar1 = (!func_300(&Local_310, -592.3627f, -1606.239f, 25.860518f, -569.629f, -1607.289f, 30.270933f, 15.5f, 0) && !func_300(&Local_311, -592.3627f, -1606.239f, 25.860518f, -569.629f, -1607.289f, 30.270933f, 15.5f, 0));
				if (!Local_275.f_11)
				{
					if (__LIB_37__::func_207(Local_275.f_0, Local_275.f_8, 5f, 1073741824, 0, 1))
					{
						if (Local_275.f_12)
						{
							Local_275.f_8 = { -580.3932f, -1608.8782f, 26.0108f };
							func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 90.292f, 2f, 0, 2, 0, 1);
							Local_275.f_12 = 0;
						}
						else
						{
							Local_275.f_8 = { -576.3989f, -1605.4574f, 26.0108f };
							func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 90.292f, 2f, 2, 0, 0, 1);
							Local_275.f_12 = 1;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_275.f_0, -8f, true);
							Local_275.f_6 = -1;
						}
						bVar0 = true;
						Local_275.f_11 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var4, Local_275.f_8);
				if (bVar1)
				{
					if (Local_275.f_8 != -580.3932f)
					{
						Local_275.f_8 = { -580.3932f, -1608.8782f, 26.0108f };
						func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 90.292f, 2f, 0, 2, 0, 1);
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
					{
						func_304(&Local_275, &(Local_275.f_6), Local_275.f_8, 1f, 0.5f, 1, 0, Local_275.f_2, -1056964608);
					}
					else
					{
						iVar7 = func_302(&Local_275, &(Local_275.f_4), Local_275.f_8, -604.2f, -1603.5314f, 27.5187f, Local_275.f_2, 1, 1, 0.75f, 1, 0);
						if (iVar7 == 0)
						{
							if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_15"))
							{
								Local_275.f_8 = { -589.0823f, -1610.1108f, 26.011f };
								func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 90.3195f, 1f, 0, 0, 1, 1);
								Local_275.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-576.169f, -1610.406f, 26.032f, 0f, 0f, -120f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_275.f_0, Local_275.f_6, "misslamar1lam_1_ig_15", "lam_1_ig_15_stretch", 1.5f, -1.5f, 5, 601, 1.5f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_275.f_0, false);
								func_299(&Local_275);
								Local_275.f_12 = 0;
								Local_275.f_11 = 0;
								Local_275.f_4 = 0;
								Local_275.f_3++;
							}
						}
						else if (iVar7 == 2)
						{
							Local_275.f_8 = { -589.0823f, -1610.1108f, 26.011f };
							func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 90.3195f, 1f, 0, 0, 1, 1);
							Local_275.f_12 = 0;
							Local_275.f_11 = 1;
							Local_275.f_4 = 0;
							Local_275.f_3++;
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6) && !Local_275.f_11)
				{
					func_303(&Local_275, &(Local_275.f_6), &(Local_275.f_4), Local_275.f_8, 1f, 0.5f, 1, 0, Local_275.f_2, -1056964608);
				}
				else if (Local_275.f_11 || ((TASK::GET_SCRIPT_TASK_STATUS(Local_275.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6)) && (fVar3 > 4f || !bVar2)))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar6);
					if (fVar3 > 4f && !bVar0)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_275.f_8, -590.1738f, -1606.6678f, 27.6159f, 2f, false, 1f, 1f, true, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_275.f_8, 1000, false, 0.25f, true, false, Local_275.f_2, true);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar6);
					TASK::TASK_PERFORM_SEQUENCE(Local_275.f_0, iVar6);
					TASK::CLEAR_SEQUENCE_TASK(&iVar6);
					Local_275.f_11 = 0;
				}
				break;
			case 53:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_17");
				iVar12 = (func_284(&Local_310) + func_284(&Local_311));
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
				{
					fVar13 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_275.f_6);
					if (fVar13 > 0.25f && fVar13 < 0.4f)
					{
						func_299(&Local_275);
						if (!PED::IS_PED_INJURED(Local_311[2 /*25*/]))
						{
							PED::SET_PED_SHOOTS_AT_COORD(Local_275.f_0, ENTITY::GET_ENTITY_COORDS(Local_311[2 /*25*/], true), false);
							ENTITY::SET_ENTITY_HEALTH(Local_311[2 /*25*/], 0, 0);
						}
						else if (iVar12 > 0)
						{
							PED::SET_PED_SHOOTS_AT_COORD(Local_275.f_0, -594.93f, -1607.64f, 27.8f, false);
						}
					}
				}
				if (iVar12 == 0)
				{
					bVar1 = true;
				}
				else if ((iVar12 == 1 && !PED::IS_PED_INJURED(Local_311[3 /*25*/])) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_311[3 /*25*/], -605.6366f, -1608.9535f, 26.01083f, -594.88464f, -1609.2975f, 29.01083f, 5.25f, false, true, 0))
				{
					if (iLocal_189 == 0)
					{
						iLocal_189 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_189) > 5000)
					{
						bVar1 = true;
					}
				}
				if (!Local_275.f_11)
				{
					if (!Local_275.f_12)
					{
						bVar14 = __LIB_37__::func_207(Local_275.f_0, Local_275.f_8, 5f, 1073741824, 0, 1);
					}
					else
					{
						bVar14 = __LIB_37__::func_207(Local_275.f_0, Local_275.f_8, 4f, 1f, 0, 1);
					}
					if (bVar14)
					{
						if (!bVar1)
						{
							if (Local_275.f_12)
							{
								Local_275.f_8 = { -589.0823f, -1610.1108f, 26.011f };
								func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 90.3195f, 1f, 0, 0, 1, 1);
								Local_275.f_12 = 0;
							}
							else
							{
								Local_275.f_8 = { -588.1877f, -1608.475f, 26.0108f };
								TASK::REMOVE_COVER_POINT(Local_275.f_2);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_275.f_0, Local_275.f_8, 1f, true, false);
								Local_275.f_12 = 1;
							}
							bVar0 = true;
							Local_275.f_11 = 1;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_275.f_0, -8f, true);
							Local_275.f_6 = -1;
						}
					}
				}
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
				{
					if (iVar12 == 1)
					{
						if (!PED::IS_PED_INJURED(Local_311[4 /*25*/]))
						{
							if (!PED::IS_PED_IN_COMBAT(Local_311[4 /*25*/], 0))
							{
								bVar11 = true;
								if (bVar2)
								{
									Local_275.f_11 = 1;
								}
							}
						}
					}
					if (iVar12 == 1)
					{
						if ((!bVar11 && !bVar2) && !bVar1)
						{
							Local_275.f_11 = 1;
						}
					}
				}
				fVar3 = SYSTEM::VDIST2(Var4, Local_275.f_8);
				if (bVar1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
					{
						func_304(&Local_275, &(Local_275.f_6), Local_275.f_8, 0.99f, 0.5f, 1, 0, Local_275.f_2, -1056964608);
					}
					else
					{
						if (Local_275.f_8 != -589.0823f)
						{
							Local_275.f_8 = { -589.0823f, -1610.1108f, 26.011f };
							func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 90.3195f, 1f, 0, 0, 1, 1);
						}
						iVar7 = func_302(&Local_275, &(Local_275.f_4), Local_275.f_8, -604.2f, -1603.5314f, 27.5187f, Local_275.f_2, 1, 1, 0.75f, 0, 0);
						if (iVar7 == 0)
						{
							if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_17"))
							{
								Local_275.f_8 = { -602.9832f, -1611.9431f, 26.0108f };
								func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 188.2352f, 1f, 0, 2, 3, 1);
								Local_275.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-576.169f, -1610.406f, 26.032f, 0f, 0f, -120f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_275.f_0, Local_275.f_6, "misslamar1lam_1_ig_17", "lam_1_ig_17_stretch", 1.5f, -1.5f, 5, 601, 1.5f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_275.f_0, true);
								Local_275.f_12 = 0;
								Local_275.f_11 = 0;
								Local_275.f_4 = 0;
								Local_275.f_3++;
							}
						}
						else if (iVar7 == 2)
						{
							Local_275.f_8 = { -602.9832f, -1611.9431f, 26.0108f };
							func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 188.2352f, 1f, 0, 2, 3, 1);
							Local_275.f_12 = 0;
							Local_275.f_11 = 1;
							Local_275.f_4 = 0;
							Local_275.f_3++;
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6) && !Local_275.f_11)
				{
					func_303(&Local_275, &(Local_275.f_6), &(Local_275.f_4), Local_275.f_8, 1f, 0.5f, 1, 0, Local_275.f_2, -1056964608);
				}
				else if (Local_275.f_11 || ((TASK::GET_SCRIPT_TASK_STATUS(Local_275.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6)) && (fVar3 > 4f || !bVar2)))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar6);
					if (fVar3 > 4f && !bVar0)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_275.f_8, -597.1738f, -1606.1678f, 27.6159f, 2f, false, 1f, 1f, true, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					if (bVar11)
					{
						TASK::TASK_AIM_GUN_AT_COORD(0, -597.1738f, -1606.1678f, 27.6159f, -1, false, false);
					}
					else
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
					}
					TASK::CLOSE_SEQUENCE_TASK(iVar6);
					TASK::TASK_PERFORM_SEQUENCE(Local_275.f_0, iVar6);
					TASK::CLEAR_SEQUENCE_TASK(&iVar6);
					Local_275.f_11 = 0;
				}
				break;
			case 54:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6) && !PED::IS_PED_INJURED(Local_311[3 /*25*/]))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_275.f_6) > 0.25f && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_275.f_6) < 0.36f)
					{
						PED::SET_PED_SHOOTS_AT_COORD(Local_275.f_0, ENTITY::GET_ENTITY_COORDS(Local_311[3 /*25*/], true), false);
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_275.f_6) > 0.34f)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_311[3 /*25*/], 0, 0);
					}
				}
				if (!Local_275.f_11)
				{
					if (!Local_275.f_12)
					{
						bVar15 = __LIB_37__::func_207(Local_275.f_0, Local_275.f_8, 5f, 1073741824, 0, 1);
					}
					else
					{
						bVar15 = __LIB_37__::func_207(Local_275.f_0, Local_275.f_8, 4f, 1f, 0, 1);
					}
					if (bVar15)
					{
						if (Local_275.f_12)
						{
							Local_275.f_8 = { -602.9832f, -1611.9431f, 26.0108f };
							func_306(Local_275.f_0, &(Local_275.f_2), Local_275.f_8, 188.2352f, 2f, 0, 2, 3, 1);
							Local_275.f_12 = 0;
						}
						else
						{
							Local_275.f_8 = { -602.3002f, -1609.171f, 26.0108f };
							TASK::REMOVE_COVER_POINT(Local_275.f_2);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_275.f_0, Local_275.f_8, 1f, true, false);
							Local_275.f_12 = 1;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_275.f_0, -8f, true);
							Local_275.f_6 = -1;
						}
						bVar0 = true;
						Local_275.f_11 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var4, Local_275.f_8);
				if (Local_312[0 /*25*/].f_5 > 0)
				{
					Local_275.f_8 = { -605.6207f, -1615.9396f, 26.0395f };
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_275.f_0, Local_275.f_8, 2f, false, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_275.f_0, 50f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_275.f_0, false);
					Local_275.f_4 = 0;
					Local_275.f_3++;
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6) && !Local_275.f_11)
				{
					func_304(&Local_275, &(Local_275.f_6), Local_275.f_8, 1f, 0.5f, 1, 0, Local_275.f_2, -1056964608);
				}
				else if (Local_275.f_11 || ((TASK::GET_SCRIPT_TASK_STATUS(Local_275.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6)) && fVar3 > 4f))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar6);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					if (fVar3 > 4f)
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_275.f_8, -605.6f, -1624.94f, 27.54f, 2f, false, 1f, 1f, true, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					if (Local_275.f_12)
					{
						TASK::TASK_AIM_GUN_AT_COORD(0, -605.6f, -1624.94f, 27.54f, -1, false, false);
					}
					else
					{
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_275.f_8, -1, false, 0.5f, true, false, Local_275.f_2, true);
					}
					TASK::CLOSE_SEQUENCE_TASK(iVar6);
					TASK::TASK_PERFORM_SEQUENCE(Local_275.f_0, iVar6);
					TASK::CLEAR_SEQUENCE_TASK(&iVar6);
					Local_275.f_11 = 0;
				}
				break;
			case 55:
				if (func_285(&Local_312))
				{
					Local_275.f_8 = { -605.6207f, -1615.9396f, 26.0395f };
					Local_275.f_11 = 1;
					Local_275.f_4 = 0;
					Local_275.f_3++;
				}
				break;
			case 56:
				Var17 = { -605.6207f, -1615.9396f, 26.0395f };
				Var18 = { -605.9904f, -1630.747f, 26.0108f };
				Var19 = { -597.8649f, -1631.3746f, 26.0108f };
				Var20 = { -591.7455f, -1630.4834f, 27.2158f };
				Var21 = { -601f, -1630.2f, 27.2f };
				if (SYSTEM::VDIST2(Var5, Var20) < SYSTEM::VDIST2(Var19, Var20))
				{
					Var16 = { Var19 };
					Var21 = { -591.7455f, -1630.4834f, 27.2158f };
				}
				else if (SYSTEM::VDIST2(Var5, Var19) < SYSTEM::VDIST2(Var18, Var19))
				{
					if (!__LIB_0__::func_490(Local_275.f_8, Var19, 1056964608, 0))
					{
						Var16 = { Var18 };
						Var21 = { -591.7455f, -1630.4834f, 27.2158f };
					}
				}
				else if (!__LIB_0__::func_490(Local_275.f_8, Var18, 1056964608, 0) && !__LIB_0__::func_490(Local_275.f_8, Var17, 1056964608, 0))
				{
					Var16 = { Var17 };
					Var21 = { -601f, -1630.2f, 27.2f };
				}
				if (!__LIB_0__::func_490(Local_275.f_8, Var16, 1056964608, 0) && !__LIB_0__::func_490(0f, 0f, 0f, Var16, 1056964608, 0))
				{
					Local_275.f_8 = { Var16 };
					Local_275.f_11 = 1;
				}
				if (Local_275.f_11)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar6);
					if (SYSTEM::VDIST2(-598.5f, -1608.4f, 26.0109f, -605.5658f, -1628.2056f, 26.0109f) < SYSTEM::VDIST2(Var4, -605.5658f, -1628.2056f, 26.0109f))
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -598.5f, -1608.4f, 26.0109f, -601f, -1630.2f, 27.2f, 2f, false, 0.5f, 0.5f, true, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_275.f_8, Var21, 2f, false, 0.5f, 2f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_COORD(0, Var21, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar6);
					TASK::TASK_PERFORM_SEQUENCE(Local_275.f_0, iVar6);
					TASK::CLEAR_SEQUENCE_TASK(&iVar6);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_275.f_0, true);
					Local_275.f_11 = 0;
				}
				if (bLocal_91)
				{
					if (Local_275.f_4 == 0)
					{
						Local_275.f_4 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - Local_275.f_4) > 500)
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Local_275.f_0, -589.4766f, -1639.8903f, 18.8855f, -587.2f, -1631.2f, 26f, 2f, false, 1f, 1f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						Local_275.f_4 = 0;
						Local_275.f_3++;
					}
				}
				break;
			case 57:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_275.f_0, -592.5679f, -1630.3676f, 28.238453f, -587.90656f, -1630.8245f, 23.511858f, 2.5f, false, true, 0))
				{
					func_298();
					if (bLocal_105)
					{
						Local_275.f_8 = { -593.268f, -1639.5262f, 18.9594f };
					}
					else
					{
						Local_275.f_8 = { -592.8024f, -1642.5282f, 18.9567f };
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_275.f_0, true);
					TASK::OPEN_SEQUENCE_TASK(&iVar6);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -580.124f, -1634.6755f, 18.5787f, -563.72f, -1649f, 29.8111f, 2f, false, 0.5f, 0.5f, true, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_275.f_8, 2f, 20000, 0.25f, 512, 150f);
					TASK::CLOSE_SEQUENCE_TASK(iVar6);
					TASK::TASK_PERFORM_SEQUENCE(Local_275.f_0, iVar6);
					TASK::CLEAR_SEQUENCE_TASK(&iVar6);
					iLocal_94 = 0;
					iLocal_85 = 0;
					Local_275.f_4 = MISC::GET_GAME_TIMER();
					Local_275.f_3++;
				}
				break;
			case 58:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_18");
				if (SYSTEM::VDIST2(Var4, -592.8024f, -1642.5282f, 18.9567f) < 1.3f)
				{
					iLocal_94 = 1;
					if (!PED::IS_PED_INJURED(Local_274.f_0))
					{
						Var22 = { ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true) };
					}
					if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_18") && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -592.2216f, -1642.9377f, 18.92483f, -593.819f, -1641.9839f, 22.709436f, 1.25f, false, true, 0))
					{
						if ((bLocal_84 && Var22.f_2 > 22f) || !bLocal_84)
						{
							TASK::TASK_CLIMB_LADDER(Local_275.f_0, true);
							TASK::TASK_LOOK_AT_ENTITY(Local_274.f_0, Local_275.f_0, 8000, 0, 2);
							iLocal_324 = 2;
							iLocal_85 = 1;
							Local_275.f_4 = 0;
							Local_275.f_3++;
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() - Local_275.f_4) > 1000)
				{
					func_298();
					if (bLocal_105)
					{
						Local_275.f_8 = { -593.268f, -1639.5262f, 18.9594f };
					}
					else
					{
						Local_275.f_8 = { -592.8024f, -1642.5282f, 18.9567f };
					}
					if (SYSTEM::VDIST2(Var4, Local_275.f_8) >= 1.3f)
					{
						if ((TASK::GET_SCRIPT_TASK_STATUS(Local_275.f_0, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_275.f_0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(Local_275.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
						{
							if (SYSTEM::VDIST2(Var4, Local_275.f_8) > 16f)
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_275.f_0, Local_275.f_8, 2f, 20000, 0.25f, 512, 150f);
							}
							else
							{
								TASK::TASK_GO_STRAIGHT_TO_COORD(Local_275.f_0, Local_275.f_8, 1f, 20000, 150f, 0.1f);
							}
						}
					}
				}
				break;
			case 59:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_18");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_18"))
				{
					Var24 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("misslamar1lam_1_ig_18", "lam_1_ig_18_stretch", -593.06f, -1642.835f, 19.004f, 0f, 0f, 0f, 0.421f, 2) };
				}
				if (PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
				{
					if (Var5.f_2 > Var4.f_2)
					{
						bVar23 = true;
					}
				}
				if (PED::IS_PED_CLIMBING(Local_275.f_0))
				{
					if (bVar23)
					{
						if (iLocal_324 != 0)
						{
							PED::SET_LADDER_CLIMB_INPUT_STATE(Local_275.f_0, 0);
							iLocal_324 = 0;
						}
					}
					else if (iLocal_324 != 2)
					{
						PED::SET_LADDER_CLIMB_INPUT_STATE(Local_275.f_0, 2);
						iLocal_324 = 2;
					}
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_275.f_0, joaat("SCRIPT_TASK_CLIMB_LADDER")) == 1)
				{
					func_297(Var5, Var4, 0);
					if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_18"))
					{
						Local_275.f_8 = { Var24 };
						if (MISC::ABSF((Var4.f_2 - Var24.f_2)) < 0.2f)
						{
							if (!bVar23)
							{
								Local_275.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-593.06f, -1642.835f, 19.004f, 0f, 0f, 0f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_275.f_0, Local_275.f_6, "misslamar1lam_1_ig_18", "lam_1_ig_18_stretch", 1.5f, -1.5f, 5, 601, 1.5f, 0);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_275.f_6, 0.421f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_275.f_0, true);
								WEAPON::SET_CURRENT_PED_WEAPON(Local_275.f_0, joaat("WEAPON_PISTOL"), true);
								Local_275.f_4 = 0;
								Local_275.f_3++;
							}
						}
					}
				}
				else if (MISC::ABSF((Var4.f_2 - Var24.f_2)) > 0.2f)
				{
					iLocal_85 = 0;
					iLocal_94 = 0;
					Local_275.f_4 = 0;
					Local_275.f_3 = (Local_275.f_3 - 1);
				}
				else if (!bVar23)
				{
					TASK::TASK_CLIMB_LADDER(Local_275.f_0, true);
				}
				break;
			case 60:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_19");
				Local_275.f_8 = { -596.36f, -1649.46f, 25.14f };
				if (iLocal_111)
				{
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_275.f_6) > 0.7f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
					{
						iLocal_111 = 0;
					}
				}
				if (func_284(&Local_314) < 2)
				{
					if ((bLocal_71 || iLocal_66) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -593.1262f, -1643.0626f, 23f, -592.60345f, -1642.0844f, 26.9577f, 1.5f, false, true, 0))
					{
						bVar25 = true;
					}
				}
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_275.f_6) > 0.9f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
				{
					if (bVar25)
					{
						if (SYSTEM::VDIST2(Var4, Local_275.f_8) < 2f || (ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(Local_275.f_0), Var4, true) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(Local_275.f_0), Local_275.f_8, true)))
						{
							bLocal_112 = false;
							Local_275.f_4 = 0;
							Local_275.f_3 = 100;
						}
						else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
						{
							bLocal_112 = true;
							Local_275.f_4 = 0;
							Local_275.f_3 = 100;
						}
					}
					else
					{
						if (Local_275.f_6 != -1)
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_275.f_0, -8f, true);
							Local_275.f_6 = -1;
						}
						if (SYSTEM::VDIST2(Var4, Local_275.f_8) > 2f)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_275.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar6);
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_275.f_8, -563.72f, -1649f, 29.8111f, 2f, false, 0.25f, 0.5f, true, 512, false, joaat("FIRING_PATTERN_FULL_AUTO"));
								if (func_284(&Local_314) >= 2)
								{
									TASK::TASK_SHOOT_AT_ENTITY(0, iLocal_261, -1, joaat("FIRING_PATTERN_BURST_FIRE"));
								}
								else
								{
									TASK::TASK_AIM_GUN_AT_COORD(0, -563.72f, -1649f, 29.8111f, -1, false, false);
								}
								TASK::CLOSE_SEQUENCE_TASK(iVar6);
								TASK::TASK_PERFORM_SEQUENCE(Local_275.f_0, iVar6);
								TASK::CLEAR_SEQUENCE_TASK(&iVar6);
							}
						}
					}
				}
				else
				{
					func_297(Var5, Var4, 1);
				}
				break;
			case 100:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_19");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_19"))
				{
					Local_275.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-593.078f, -1642.909f, 18.951f, 0f, 0f, 0f, 2);
					if (bLocal_112)
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_275.f_0, Local_275.f_6, "misslamar1lam_1_ig_19", "LAM_1_IG_19_by_ladder_stretch", 1.5f, -1.5f, 5, 603, 1.5f, 0);
					}
					else
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_275.f_0, Local_275.f_6, "misslamar1lam_1_ig_19", "lam_1_ig_19_stretch", 1.5f, -1.5f, 5, 603, 1.5f, 0);
					}
					PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_275.f_6, 0f);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_275.f_0, true);
					PED::SET_PED_CONFIG_FLAG(Local_275.f_0, 131, false);
					Local_275.f_4 = 0;
					Local_275.f_3++;
				}
				break;
			case 101:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
				{
					if (((bLocal_112 && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_275.f_6) > 0.755f) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_275.f_6) < 0.892f) || ((!bLocal_112 && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_275.f_6) > 0.594f) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_275.f_6) < 0.71f))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -603.7463f, -1697.9362f, 24.043583f, -602.3535f, -1695.9869f, 26.901522f, 1f, false, true, 0))
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
						}
					}
					if (iLocal_66 && bLocal_68)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_275.f_6) < 0.7f)
						{
							if (!CAM::IS_SPHERE_VISIBLE(-603.1f, -1696.5f, 24.9f, 1f) && !CAM::IS_SPHERE_VISIBLE(Var4, 1f))
							{
								PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_275.f_6, 0.7f);
							}
						}
					}
				}
				if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_275.f_6) > 0.99f) || ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_275.f_6) > 0.75f) && SYSTEM::VDIST2(Var4, -605.1f, -1699.6f, 23.3f) < 4f)) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar6);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -606.7747f, -1700.0148f, 23.0618f, -625.4585f, -1699.5992f, 24.8108f, 1f, false, 0.5f, 0.5f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_COORD(0, -625.4585f, -1699.5992f, 24.8108f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar6);
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_275.f_0, -8f, true);
					TASK::TASK_PERFORM_SEQUENCE(Local_275.f_0, iVar6);
					TASK::CLEAR_SEQUENCE_TASK(&iVar6);
					Local_275.f_6 = -1;
					Local_275.f_4 = 0;
					Local_275.f_3++;
				}
				break;
		}
		func_296(&Local_275, &(Local_275.f_7));
	}
}

void func_296(var uParam0, var uParam1)//Position - 0x2EB5B
{
	bool bVar0;
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		bVar0 = true;
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), true))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*uParam0);
			if (PED::IS_PED_RAGDOLL(*uParam0))
			{
				if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(*uParam0, true), 5f))
				{
					if (!FIRE::IS_EXPLOSION_IN_SPHERE(23, ENTITY::GET_ENTITY_COORDS(*uParam0, true), 5f))
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(*uParam0, 0);
						ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
						bVar0 = false;
					}
				}
				else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if ((*uParam1 - ENTITY::GET_ENTITY_HEALTH(*uParam0)) > 100)
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(*uParam0, 0);
						ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
						bVar0 = false;
					}
				}
			}
		}
		if (bVar0)
		{
			*uParam1 = ENTITY::GET_ENTITY_HEALTH(*uParam0);
		}
	}
}

void func_297(struct<3> Param0, struct<3> Param1, int iParam2)//Position - 0x2EC0A
{
	float fVar0;
	if (PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
	{
		fVar0 = (Param1.f_2 - Param0.f_2);
		if (fVar0 > 0f)
		{
			if (fVar0 < 3f)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
				if (fVar0 < 1.8f || (iParam2 && fVar0 < 2f))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 32 /*INPUT_MOVE_UP_ONLY*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
				}
			}
		}
	}
}

void func_298()//Position - 0x2EC6A
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	bool bVar3;
	Var0 = { -592.8243f, -1642.2301f, 18.9575f };
	if (!PED::IS_PED_INJURED(Local_274.f_0) && !PED::IS_PED_INJURED(Local_274.f_0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true) };
		Var2 = { ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true) };
		bVar3 = false;
		if (bLocal_70 || (bLocal_84 && Var1.f_2 > 22f))
		{
			bLocal_105 = false;
			bVar3 = true;
		}
		if (bLocal_72 || (iLocal_85 && Var2.f_2 > 22f))
		{
			bLocal_105 = true;
			bVar3 = true;
		}
		if (!bVar3)
		{
			bLocal_105 = SYSTEM::VDIST2(Var0, Var1) < SYSTEM::VDIST2(Var0, Var2);
		}
	}
}

void func_299(int iParam0)//Position - 0x2ED1D
{
	int iVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(*iParam0, &iVar0, true);
	WEAPON::SET_AMMO_IN_CLIP(*iParam0, iVar0, WEAPON::GET_MAX_AMMO_IN_CLIP(*iParam0, iVar0, true));
}

int func_300(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4)//Position - 0x2ED44
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*25*/]))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA((*iParam0)[iVar0 /*25*/], Param1, Param2, fParam3, false, true, 0) || (iParam4 && OBJECT::IS_POINT_IN_ANGLED_AREA((iParam0[iVar0 /*25*/])->f_14, Param1, Param2, fParam3, false, true)))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_301(int iParam0, var uParam1, struct<3> Param2, float fParam3, bool bParam4, float fParam5)//Position - 0x2EDB7
{
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam1) && PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam1) >= fParam3)
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, fParam5, true);
			*uParam1 = -1;
			TASK::TASK_AIM_GUN_AT_COORD(*iParam0, Param2, -1, bParam4, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
		}
	}
}

int func_302(int iParam0, var uParam1, struct<3> Param2, struct<3> Param3, int iParam4, bool bParam5, bool bParam6, float fParam7, bool bParam8, bool bParam9)//Position - 0x2EE09
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar0 = 1;
	fVar2 = SYSTEM::VDIST2(Param2, ENTITY::GET_ENTITY_COORDS(*iParam0, true));
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (!PED::IS_PED_IN_COVER(*iParam0, true) || fVar2 > 4f)
		{
			*uParam1 = 0;
			if ((TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0) || PED::IS_PED_IN_COMBAT(*iParam0, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
				if (fVar2 > 4f)
				{
					if (bParam5)
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Param2, Param3, 2f, false, 0.25f, 1f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param2, 2f, 20000, 0.25f, 0, 40000f);
					}
				}
				if (bParam6)
				{
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Param2, 10000, false, fParam7, bParam8, bParam9, iParam4, true);
				}
				else if (iParam4 == 0)
				{
					TASK::TASK_SEEK_COVER_TO_COORDS(0, Param2, Param3, 10000, false);
				}
				else
				{
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, iParam4, Param3, 10000, false);
				}
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar1);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			}
		}
		else if (*uParam1 == 0 || (MISC::GET_GAME_TIMER() - *uParam1) > 1500)
		{
			*uParam1 = MISC::GET_GAME_TIMER();
		}
		else if ((MISC::GET_GAME_TIMER() - *uParam1) > 500)
		{
			iVar0 = 0;
		}
		if (__LIB_37__::func_207(*iParam0, Param2, 4f, 1073741824, 0, 1))
		{
			iVar0 = 2;
		}
	}
	return iVar0;
}

void func_303(var uParam0, var uParam1, var uParam2, struct<3> Param3, float fParam4, float fParam5, bool bParam6, bool bParam7, int iParam8, float fParam9)//Position - 0x2EF87
{
	int iVar0;
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam1))
		{
			*uParam2 = MISC::GET_GAME_TIMER();
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam1) >= fParam4)
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, fParam9, true);
				*uParam1 = -1;
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(*uParam0, true), Param3) < 2f)
				{
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Param3, 1500, false, fParam5, bParam6, bParam7, iParam8, false);
				}
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				if (bParam6)
				{
					PED::SET_PED_CONFIG_FLAG(*uParam0, 131, true);
				}
			}
		}
		else if ((MISC::GET_GAME_TIMER() - *uParam2) > 2500)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 1 && !PED::IS_PED_IN_COMBAT(*uParam0, 0))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, fParam9, true);
				*uParam1 = -1;
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*uParam0, 50f, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, false);
			}
		}
	}
}

void func_304(int iParam0, var uParam1, struct<3> Param2, float fParam3, float fParam4, bool bParam5, bool bParam6, int iParam7, float fParam8)//Position - 0x2F087
{
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam1))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam1) >= fParam3)
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, fParam8, true);
				*uParam1 = -1;
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(*iParam0, Param2, -1, false, fParam4, bParam5, bParam6, iParam7, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
				if (bParam5)
				{
					PED::SET_PED_CONFIG_FLAG(*iParam0, 131, true);
				}
			}
		}
		else if (*uParam1 != -1)
		{
			*uParam1 = -1;
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(*iParam0, true), Param2) < 4f)
			{
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(*iParam0, Param2, -1, false, fParam4, bParam5, bParam6, iParam7, true);
			}
		}
	}
}

void func_306(int iParam0, var uParam1, struct<3> Param2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x2F1AC
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (*uParam1 != 0)
		{
			TASK::REMOVE_COVER_POINT(*uParam1);
			*uParam1 = 0;
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(Param2))
		{
			*uParam1 = TASK::ADD_COVER_POINT(Param2, fParam3, iParam5, iParam6, iParam7, false);
		}
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, Param2, fParam4, bParam8, false);
	}
}

void func_307(int iParam0)//Position - 0x2F1FF
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	bool bVar14;
	int iVar15;
	var uVar16;
	var uVar17;
	int iVar18;
	bool bVar19;
	bool bVar20;
	struct<3> Var21;
	struct<3> Var22;
	struct<3> Var23;
	struct<3> Var24;
	struct<3> Var25;
	struct<3> Var26;
	struct<3> Var27;
	bool bVar28;
	struct<3> Var29;
	int iVar30;
	struct<6> Var31;
	int iVar32;
	if (!PED::IS_PED_INJURED(Local_274.f_0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true) };
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		bVar5 = (PED::IS_PED_IN_COMBAT(Local_274.f_0, 0) || TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) == 1);
		iVar6 = 0;
		iVar7 = Local_274.f_3;
		fVar10 = SYSTEM::VDIST2(Var1, Var2);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_212);
		PED::SET_PED_RESET_FLAG(Local_274.f_0, 227, true);
		switch (Local_274.f_3)
		{
			case 0:
				bLocal_65 = false;
				STREAMING::REQUEST_ANIM_DICT("misslamar1ig_2_p1");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_2_p1"))
				{
					if (!CAM::IS_SCREEN_FADED_OUT() || iParam0)
					{
						Local_274.f_8 = { -616.5454f, -1633.3083f, 32.0106f };
						func_306(Local_274.f_0, &(Local_274.f_2), Local_274.f_8, 261.3191f, 2f, 1, 0, 1, 1);
						if (!iLocal_129 || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
						{
							Local_274.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-617.689f, -1629.484f, 32.038f, 0f, 0f, 175f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_274.f_0, Local_274.f_6, "misslamar1ig_2_p1", "ig_2_p1_lamar", 4f, -8f, 5, 153, 4f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6, 0f);
						}
						PED::SET_SYNCHRONIZED_SCENE_RATE(Local_274.f_6, 1f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, true);
						Local_274.f_11 = 0;
						Local_274.f_12 = 0;
						Local_274.f_4 = 0;
						Local_274.f_3++;
					}
				}
				break;
			case 1:
				STREAMING::REQUEST_ANIM_DICT("misslamar1ig_4");
				if (!Local_274.f_11)
				{
					if (__LIB_37__::func_207(Local_274.f_0, Local_274.f_8, 5f, 1073741824, 0, 1))
					{
						if (!bVar4)
						{
							if (Local_274.f_12)
							{
								Local_274.f_8 = { -616.5454f, -1633.3083f, 32.0106f };
								func_306(Local_274.f_0, &(Local_274.f_2), Local_274.f_8, 261.3191f, 2f, 1, 0, 1, 1);
								Local_274.f_12 = 0;
							}
							else
							{
								Local_274.f_8 = { -621.3306f, -1632.2926f, 32.0105f };
								func_306(Local_274.f_0, &(Local_274.f_2), Local_274.f_8, 279.3376f, 2f, 2, 0, 1, 1);
								Local_274.f_12 = 1;
							}
							bVar3 = true;
							Local_274.f_11 = 1;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_274.f_0, -8f, true);
							Local_274.f_6 = -1;
						}
					}
				}
				fVar9 = SYSTEM::VDIST2(Var1, Local_274.f_8);
				if ((func_285(&Local_305) && PED::IS_PED_INJURED(Local_307[0 /*25*/])) && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_4"))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
					{
						func_304(&Local_274, &(Local_274.f_6), Local_274.f_8, 0.96f, 0.5f, 1, 1, Local_274.f_2, -1056964608);
					}
					else
					{
						Local_274.f_12 = 0;
						Local_274.f_11 = 0;
						Local_274.f_4 = 0;
						Local_274.f_3++;
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6) && !Local_274.f_11)
				{
					func_303(&Local_274, &(Local_274.f_6), &(Local_274.f_4), Local_274.f_8, 0.96f, 0.5f, 1, 1, Local_274.f_2, -1056964608);
				}
				else if (Local_274.f_11 || ((TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6)) && (fVar9 > 4f || !bVar5)))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_274.f_0, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					Local_274.f_11 = 0;
				}
				break;
			case 2:
				func_303(&Local_274, &(Local_274.f_6), &(Local_274.f_4), Local_274.f_8, 1f, 0.5f, 1, 0, Local_274.f_2, -1056964608);
				if (((!PED::IS_PED_INJURED(Local_307[1 /*25*/]) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) > 0.45f) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) < 0.5f)
				{
					PED::SET_PED_SHOOTS_AT_COORD(Local_274.f_0, -605f, -1631.61f, 33.68f, false);
				}
				if (func_285(&Local_307) && func_285(&Local_305))
				{
					Local_274.f_8 = { -601.2477f, -1617.8696f, 32.0105f };
					TASK::REMOVE_COVER_POINT(Local_274.f_2);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_274.f_0, Local_274.f_8, 1f, false, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, true);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_274.f_8, -599f, -1618f, 33.5f, 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_COORD(0, -589.2117f, -1619.2445f, 33.7295f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_274.f_0, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					Local_274.f_4 = 0;
					Local_274.f_3++;
				}
				break;
			case 3:
				if ((Local_274.f_4 == 0 && !__LIB_13__::func_755(&Local_276, 1)) && !PED::IS_PED_INJURED(Local_275.f_0))
				{
					if (func_309(Var2, Var1, ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true)))
					{
						Local_274.f_4 = MISC::GET_GAME_TIMER();
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -588.06854f, -1619.1289f, 32.033398f, -606.65735f, -1617.3682f, 34.510597f, 5.5f, false, true, 0))
				{
					Local_274.f_8 = { -589.94f, -1620.08f, 32.0106f };
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_274.f_0, Local_274.f_8, 1f, false, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_274.f_0, -588.06854f, -1619.1289f, 32.033398f, -606.65735f, -1617.3682f, 34.510597f, 5.5f, false, true, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -603.2654f, -1617.911f, 32.0105f, 2f, 20000, 1f, 1, 40000f);
					}
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_274.f_8, -590.2297f, -1621.9689f, 33.5192f, 2f, false, 0.25f, 2f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_COORD(0, -590.2297f, -1621.9689f, 33.5192f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_274.f_0, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_274.f_0, false);
					AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_CORRIDOR");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_START"))
					{
						AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_START");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_COVER_LAMAR"))
					{
						AUDIO::START_AUDIO_SCENE("LAMAR_1_SHOOTOUT_COVER_LAMAR");
					}
					Local_274.f_4 = 0;
					Local_274.f_3++;
				}
				break;
			case 4:
				if ((!iLocal_132[5] && !__LIB_13__::func_755(&Local_276, 1)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_274.f_0, -588.06854f, -1619.1289f, 32.033398f, -606.65735f, -1617.3682f, 34.510597f, 5.5f, false, true, 0))
				{
					if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_AHEAD", 7, 0, 0, 0))
					{
						iLocal_132[5] = 1;
					}
				}
				STREAMING::REQUEST_ANIM_DICT("misslamar1ig_5");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_5") && Local_306[0 /*25*/].f_5 > 0)
				{
					Local_274.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-599.1f, -1619.598f, 32.001f, 0f, 0f, -95f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_274.f_0, Local_274.f_6, "misslamar1ig_5", "lamar", 1.5f, -1.5f, 5, 601, 1.5f, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6, 0.675f);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, true);
					PED::SET_CAN_ATTACK_FRIENDLY(PLAYER::PLAYER_PED_ID(), true, false);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_COVER_LAMAR"))
					{
						AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_COVER_LAMAR");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_SAVE_LAMAR"))
					{
						AUDIO::START_AUDIO_SCENE("LAMAR_1_SHOOTOUT_SAVE_LAMAR");
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 2f, 3);
					iLocal_67 = 1;
					Local_274.f_4 = 0;
					Local_274.f_3++;
				}
				break;
			case 5:
				if (!iLocal_132[1])
				{
					if (!__LIB_13__::func_755(&Local_276, 1))
					{
						if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_KNOCK", 7, 0, 0, 0))
						{
							iLocal_132[1] = 1;
						}
					}
					else
					{
						__LIB_0__::func_429();
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) > 0.9f)
					{
						Local_274.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-599.1f, -1619.598f, 32.001f, 0f, 0f, -95f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_274.f_0, Local_274.f_6, "misslamar1ig_5", "p3_lamar", 1.5f, -1.5f, 5, 601, 8f, 0);
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_306[0 /*25*/].f_8))
						{
							PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6, PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_306[0 /*25*/].f_8));
						}
						Local_274.f_4 = 0;
						Local_274.f_3++;
					}
				}
				break;
			case 6:
				STREAMING::REQUEST_ANIM_DICT("misslamar1ig_6");
				if (!PED::IS_PED_INJURED(Local_306[1 /*25*/]) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_306[1 /*25*/].f_8))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) > 0.45f)
						{
							PED::SET_SYNCHRONIZED_SCENE_RATE(Local_274.f_6, -0.8f);
						}
						else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) < 0.28f)
						{
							PED::SET_SYNCHRONIZED_SCENE_RATE(Local_274.f_6, 0.8f);
						}
					}
				}
				if (func_285(&Local_306) && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_6"))
				{
					if (Local_274.f_4 == 0)
					{
						Local_274.f_4 = MISC::GET_GAME_TIMER();
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) > 0.35f)
						{
							Local_274.f_4 = (Local_274.f_4 - 500);
						}
					}
					else if ((MISC::GET_GAME_TIMER() - Local_274.f_4) > 500)
					{
						Local_274.f_8 = { -588.95f, -1620.83f, 32.0105f };
						Local_274.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-599.1f, -1619.598f, 32.001f, 0f, 0f, 175f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_274.f_0, Local_274.f_6, "misslamar1ig_6", "ig_6_lamar", 8f, -4f, 5, 601, 8f, 0);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6, 0f);
						PED::SET_SYNCHRONIZED_SCENE_RATE(Local_274.f_6, 1f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, true);
						PED::SET_CAN_ATTACK_FRIENDLY(PLAYER::PLAYER_PED_ID(), false, false);
						iLocal_67 = 0;
						iLocal_160 = 0;
						Local_274.f_4 = 0;
						Local_274.f_3++;
					}
				}
				else if ((!PED::IS_PED_INJURED(Local_306[0 /*25*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_274.f_0, Local_306[0 /*25*/], true)) || (!PED::IS_PED_INJURED(Local_306[1 /*25*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_274.f_0, Local_306[1 /*25*/], true)))
				{
					PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_274.f_0, 0);
					PED::SET_PED_TO_RAGDOLL(Local_274.f_0, 1000, 2000, 2, true, true, false);
					PED::APPLY_DAMAGE_TO_PED(Local_274.f_0, ENTITY::GET_ENTITY_HEALTH(Local_274.f_0) + 50, true, 0);
				}
				break;
			case 7:
				if (!iLocal_132[6])
				{
					if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_BREACH2", 7, 0, 0, 0))
					{
						iLocal_132[6] = 1;
					}
				}
				else if (!iLocal_132[7])
				{
					if (!__LIB_13__::func_755(&Local_276, 1))
					{
						if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_BREACH3", 7, 0, 0, 0))
						{
							iLocal_132[7] = 1;
						}
					}
				}
				func_301(&Local_274, &(Local_274.f_6), -589.4374f, -1628.9316f, 33.7582f, 1065353216, 1, -1056964608);
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_23_b");
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -588.1853f, -1619.1538f, 32.0105f, -592.52057f, -1618.9945f, 34.7605f, 4.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -566.4107f, -1627.2906f, 32.056114f, -592.11206f, -1624.9486f, 34.760475f, 7.25f, false, true, 0)) && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_23_b"))
				{
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) > 0.6f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
					{
						Local_274.f_8 = { -585.6258f, -1628.18f, 32.0105f };
						TASK::REMOVE_COVER_POINT(Local_274.f_2);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_274.f_0, Local_274.f_8, 1f, false, false);
						if (SYSTEM::VDIST2(Var2, -589.4396f, -1621.6244f, 32.0106f) < 3f)
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_274.f_8, -583.7613f, -1628.2812f, 33.6858f, 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
							TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(Local_274.f_0, iVar0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						}
						else
						{
							Local_274.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-589.133f, -1620.554f, 33.016f, 0f, 0f, 168f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_274.f_0, Local_274.f_6, "misslamar1lam_1_ig_23_b", "lam_1_ig_23_b", 4f, -4f, 5, 601, 4f, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, true);
						}
						Local_274.f_4 = MISC::GET_GAME_TIMER();
						Local_274.f_3++;
					}
				}
				else if (!__LIB_13__::func_755(&Local_276, 1))
				{
					if (iLocal_132[7])
					{
						if (!iLocal_132[8] && SYSTEM::VDIST2(Var1, Local_274.f_8) < 2f)
						{
							if (iLocal_160 == 0)
							{
								iLocal_160 = MISC::GET_GAME_TIMER();
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_160) > 5000)
							{
								if (SYSTEM::VDIST2(Var1, Var2) < 400f)
								{
									if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_GOGO", 7, 0, 0, 0))
									{
										iLocal_132[8] = 1;
									}
								}
							}
						}
					}
				}
				break;
			case 8:
				if (!iLocal_132[9])
				{
					if (Local_308[0 /*25*/].f_5 > 0)
					{
						if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_GENL2", 8, 0, 0, 0))
						{
							iLocal_132[9] = 1;
						}
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
				{
					func_308(&Local_274, &(Local_274.f_6), 0.99f, 1, -4f);
				}
				if ((PED::IS_PED_INJURED(Local_308[0 /*25*/]) && PED::IS_PED_INJURED(Local_308[1 /*25*/])) && Local_308[0 /*25*/].f_2)
				{
					Local_274.f_8 = { -578.9801f, -1628.9391f, 32.0105f };
					TASK::REMOVE_COVER_POINT(Local_274.f_2);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_274.f_0, Local_274.f_8, 3f, false, false);
					Local_274.f_12 = 0;
					Local_274.f_11 = 1;
					Local_274.f_4 = 0;
					Local_274.f_3++;
				}
				if (!iLocal_122)
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
					{
						if (PED::IS_PED_SHOOTING(Local_274.f_0))
						{
							MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(-568.3865f, -1630.1857f, 33.548122f, -568.45f, -1631.329f, 33.607136f, 0, true, joaat("WEAPON_PUMPSHOTGUN"), PLAYER::PLAYER_PED_ID(), false, true, -1f);
							iLocal_122 = 1;
						}
					}
				}
				break;
			case 9:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
				{
					func_308(&Local_274, &(Local_274.f_6), 0.99f, 1, -4f);
				}
				if (func_285(&Local_308))
				{
					Local_274.f_8 = { -564.5422f, -1628.3492f, 32.0098f };
					TASK::REMOVE_COVER_POINT(Local_274.f_2);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_274.f_0, Local_274.f_8, 1f, false, false);
					Local_274.f_12 = 0;
					Local_274.f_11 = 1;
					Local_274.f_4 = 0;
					Local_274.f_3++;
				}
				break;
			case 10:
				fVar12 = SYSTEM::VDIST2(Var1, Local_274.f_8);
				fVar13 = ENTITY::GET_ENTITY_HEADING(Local_274.f_0);
				STREAMING::REQUEST_ANIM_DICT("misslamar1ig_9");
				if (!__LIB_13__::func_755(&Local_276, 1))
				{
					if (Local_274.f_4 == 0)
					{
						if (!PED::IS_PED_INJURED(Local_275.f_0))
						{
							if (func_309(Var2, Var1, ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true)))
							{
								Local_274.f_4 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				if (fVar12 > 1.2f && (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6) || Local_274.f_11))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 || Local_274.f_11)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_274.f_0, -8f, true);
							Local_274.f_6 = -1;
						}
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						if (fVar12 > 25f)
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -566.4057f, -1629.3054f, 32.0105f, -565.2f, -1632.1f, 33.6f, 2f, false, 0.5f, 2f, true, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						}
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_274.f_8, -565.2f, -1632.1f, 33.6f, 1f, false, 0.05f, 1f, true, 4608, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::TASK_AIM_GUN_AT_COORD(0, -580f, -1682f, 38.5f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_274.f_0, iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						Local_274.f_11 = 0;
					}
				}
				if ((((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6) && fVar12 < 1.2f) && MISC::ABSF((fVar13 - 160f)) < 20f) && ENTITY::GET_ENTITY_SPEED(Local_274.f_0) < 0.1f) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) >= 1f))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -561.0819f, -1629.6393f, 32.0533f, -570.0524f, -1628.8724f, 34.2605f, 3.25f, false, true, 0) || Var2.f_2 < 32f)
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_9"))
						{
							Local_274.f_8 = { -561.9443f, -1623.5027f, 30.0091f };
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_274.f_0, Local_274.f_8, 1f, false, false);
							Local_274.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-587.039f, -1626.984f, 32.008f, 0f, 0f, 175f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_274.f_0, Local_274.f_6, "misslamar1ig_9", "lamar_stairs", 4f, -1.5f, 5, 601, 8f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6, 0.01f);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, true);
							iLocal_160 = 0;
							Local_274.f_4 = 0;
							Local_274.f_3++;
						}
					}
					else if (!__LIB_13__::func_755(&Local_276, 1) && !iLocal_132[10])
					{
						if (iLocal_160 == 0)
						{
							iLocal_160 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_160) > 3000)
						{
							if (SYSTEM::VDIST2(Var1, Var2) < 400f)
							{
								if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_GOGO", 7, 0, 0, 0))
								{
									iLocal_132[10] = 1;
								}
							}
						}
					}
				}
				if (Local_313[0 /*25*/].f_5 > 0)
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
					{
						iLocal_160 = 0;
						Local_274.f_4 = 0;
						Local_274.f_3++;
					}
				}
				break;
			case 11:
				func_301(&Local_274, &(Local_274.f_6), -580f, -1682f, 38.5f, 1065353216, 1, -1056964608);
				if (Local_313[0 /*25*/].f_5 > 0 || PED::IS_PED_INJURED(Local_313[0 /*25*/]))
				{
					if (PED::IS_PED_INJURED(Local_313[0 /*25*/]) || (!PED::IS_PED_INJURED(Local_313[0 /*25*/]) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_313[0 /*25*/], -563.84f, -1632.11f, 25.76f, -563.15f, -1626.45f, 30.89f, 5f, false, true, 0)))
					{
						Local_274.f_8 = { -563.824f, -1622.4832f, 30.0094f };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_274.f_0, Local_274.f_8, 2f, false, false);
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_274.f_0, -1.5f, true);
							bVar14 = true;
							Local_274.f_6 = -1;
						}
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						if (bVar14)
						{
							TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_274.f_8, -564.2987f, -1631.5826f, 30.0554f, 2f, false, 0.5f, 4f, true, 512, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						}
						if (!PED::IS_PED_INJURED(Local_313[0 /*25*/]))
						{
							TASK::TASK_COMBAT_PED(0, Local_313[0 /*25*/], 0, 16);
						}
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_274.f_0, iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						Local_274.f_4 = 0;
						Local_274.f_3++;
					}
				}
				else if (!__LIB_13__::func_755(&Local_276, 1))
				{
					if (SYSTEM::VDIST2(Var1, Var2) < 400f)
					{
						if (!iLocal_132[11])
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_STAIRS", 7, 0, 0, 0))
							{
								iLocal_132[11] = 1;
							}
						}
						else if (!iLocal_132[12])
						{
							if (iLocal_160 == 0)
							{
								iLocal_160 = MISC::GET_GAME_TIMER();
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_160) > 3000)
							{
								if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_FIRST", 7, 0, 0, 0))
								{
									iLocal_132[12] = 1;
								}
							}
						}
					}
				}
				break;
			case 12:
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
				{
					STREAMING::REMOVE_ANIM_DICT("misslamar1ig_9");
					STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_23");
					STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_23_b");
					STREAMING::REMOVE_ANIM_DICT("misslamar1ig_6");
					STREAMING::REMOVE_ANIM_DICT("misslamar1ig_5");
					STREAMING::REMOVE_ANIM_DICT("misslamar1ig_4");
					STREAMING::REMOVE_ANIM_DICT("misslamar1ig_2_p1");
				}
				if (func_285(&Local_313))
				{
					if (Var2.f_2 < 29.1f || Local_309[0 /*25*/].f_5 > 0)
					{
						Local_274.f_8 = { -564.3741f, -1630.4517f, 28.0096f };
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_274.f_8, -561.7f, -1626.3f, 29.3f, 2f, false, 0.5f, 4f, true, 512, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::TASK_AIM_GUN_AT_COORD(0, -561.7f, -1626.3f, 29.3f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_274.f_0, iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						Local_274.f_11 = 0;
						Local_274.f_4 = 0;
						Local_274.f_3++;
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_AIM_GUN_AT_COORD")) != 1)
					{
						TASK::TASK_AIM_GUN_AT_COORD(Local_274.f_0, -564.2987f, -1631.5826f, 30.0554f, -1, false, false);
					}
				}
				break;
			case 13:
				if (iLocal_132[13])
				{
					if (!iLocal_132[14])
					{
						if (SYSTEM::VDIST2(Var1, Var2) < 625f)
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_FIRST", 7, 0, 0, 0))
							{
								iLocal_132[14] = 1;
							}
						}
					}
				}
				if (Var2.f_2 < 27.1f || Local_309[0 /*25*/].f_5 > 0)
				{
					Local_274.f_8 = { -561.3693f, -1626.7592f, 27.2101f };
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_274.f_8, -560.4027f, -1602.1191f, 27.3222f, 2f, false, 0.5f, 4f, true, 512, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_COORD(0, -560.4027f, -1602.1191f, 27.3222f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_274.f_0, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					iLocal_160 = 0;
					Local_274.f_11 = 0;
					Local_274.f_4 = 0;
					Local_274.f_3++;
				}
				break;
			case 14:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_26_alt1");
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_26");
				if (!iLocal_132[15])
				{
					if (iLocal_160 == 0)
					{
						if (!__LIB_13__::func_755(&Local_276, 1))
						{
							iLocal_160 = MISC::GET_GAME_TIMER();
						}
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_160) > 5000)
					{
						if (SYSTEM::VDIST2(Var1, Var2) < 625f)
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_DELAY", 7, 0, 0, 0))
							{
								iLocal_132[15] = 1;
							}
						}
					}
				}
				if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_26_alt1") && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_26"))
				{
					if (Local_309[0 /*25*/].f_5 > 0 || (Local_309[0 /*25*/].f_2 && PED::IS_PED_INJURED(Local_309[0 /*25*/])))
					{
						Local_274.f_11 = 1;
						Local_274.f_4 = 0;
						Local_274.f_3++;
					}
				}
				break;
			case 15:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_26_alt1");
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_26");
				if (SYSTEM::VDIST2(Var1, Local_274.f_8) < 0.15f)
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_26_alt1") && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_26"))
					{
						Local_274.f_8 = { -560.3149f, -1611.988f, 26.011f };
						func_306(Local_274.f_0, &(Local_274.f_2), Local_274.f_8, 353.8994f, 1f, 1, 0, 1, 1);
						Local_274.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-562.36f, -1621.636f, 27.012f, 0f, 0f, -6f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_274.f_0, Local_274.f_6, "misslamar1lam_1_ig_26_alt1", "lam_1_ig_26_alt_1", 4f, -8f, 5, 601, 8f, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, true);
						Local_274.f_4 = 0;
						Local_274.f_3++;
					}
				}
				else
				{
					iVar15 = TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"));
					if ((iVar15 != 1 || (iVar15 == 1 && TASK::GET_SEQUENCE_PROGRESS(Local_274.f_0) >= 3)) || Local_274.f_11)
					{
						Local_274.f_8 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("misslamar1lam_1_ig_26_alt1", "lam_1_ig_26_alt_1", -562.36f, -1621.636f, 27.012f, 0f, 0f, -6f, 0f, 2) };
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_212, Local_274.f_8, &iVar6);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_212, 0, 8, (iVar6 - 2));
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_274.f_8, -560.4027f, -1602.1191f, 27.3222f, 2f, false, 0.1f, 4f, true, 512, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::TASK_AIM_GUN_AT_COORD(0, -560.4027f, -1602.1191f, 27.3222f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_274.f_0, iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						Local_274.f_11 = 0;
					}
					TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_212, Var1, &uVar16);
					TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_212, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar17);
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_274.f_0))
					{
						TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Local_274.f_0, -562.5f, -1626.1f, 28.4f, false);
					}
				}
				break;
			case 16:
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
				{
					if (Local_274.f_4 == 0)
					{
						Local_274.f_4 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - Local_274.f_4) > 1000 || !PED::IS_PED_IN_COVER(Local_274.f_0, false))
					{
						if (!__LIB_0__::func_490(Local_274.f_8, -560.3149f, -1611.988f, 26.011f, 1056964608, 0))
						{
							Local_274.f_8 = { -560.3149f, -1611.988f, 26.011f };
							func_306(Local_274.f_0, &(Local_274.f_2), Local_274.f_8, 356.9735f, 1f, 1, 0, 1, 1);
						}
						Local_274.f_12 = 0;
						Local_274.f_11 = 1;
						Local_274.f_4 = 0;
						Local_274.f_3++;
					}
				}
				else
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) < 0.7f)
					{
						PED::SET_PED_CAPSULE(Local_274.f_0, 1f);
					}
					func_304(&Local_274, &(Local_274.f_6), Local_274.f_8, 0.98f, 0.5f, 1, 1, 0, -1056964608);
					if (__LIB_37__::func_207(Local_274.f_0, Local_274.f_8, 5f, 1073741824, 0, 1))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_274.f_0, -8f, true);
						Local_274.f_8 = { -562.7417f, -1616.3969f, 26.011f };
						func_306(Local_274.f_0, &(Local_274.f_2), Local_274.f_8, 356.9735f, 1f, 0, 0, 1, 1);
						Local_274.f_12 = 1;
						Local_274.f_11 = 1;
						Local_274.f_4 = 0;
						Local_274.f_3++;
					}
				}
				break;
			case 17:
				if (!Local_274.f_11)
				{
					if (__LIB_37__::func_207(Local_274.f_0, Local_274.f_8, 5f, 2f, 0, 0))
					{
						if (Local_274.f_12)
						{
							Local_274.f_8 = { -560.3149f, -1611.988f, 26.011f };
							func_306(Local_274.f_0, &(Local_274.f_2), Local_274.f_8, 356.9735f, 2f, 1, 0, 1, 1);
							Local_274.f_12 = 0;
						}
						else
						{
							Local_274.f_8 = { -562.7417f, -1616.3969f, 26.011f };
							func_306(Local_274.f_0, &(Local_274.f_2), Local_274.f_8, 356.9735f, 2f, 0, 0, 1, 1);
							Local_274.f_12 = 1;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_274.f_0, -8f, true);
							Local_274.f_6 = -1;
						}
						bVar3 = true;
						Local_274.f_11 = 1;
					}
				}
				fVar9 = SYSTEM::VDIST2(Var1, Local_274.f_8);
				if (func_285(&Local_309))
				{
					if (Local_274.f_4 == 0)
					{
						Local_274.f_4 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - Local_274.f_4) > 500)
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						if (fVar9 > 9f)
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_274.f_8, -562f, -1602.3f, 27.6f, 2f, false, 0.5f, 0.5f, true, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						}
						TASK::TASK_AIM_GUN_AT_COORD(0, -562f, -1602.3f, 27.6f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_274.f_0, iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						Local_274.f_11 = 0;
						Local_274.f_4 = 0;
						Local_274.f_3++;
					}
				}
				else if (Local_274.f_11 || ((TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6)) && (fVar9 > 4f || !bVar5)))
				{
					if (Local_309[0 /*25*/].f_5 > 0)
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_274.f_0, iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						Local_274.f_11 = 0;
					}
				}
				break;
			case 18:
				if (!iLocal_132[16])
				{
					if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_FIRST", 7, 0, 0, 0))
					{
						iLocal_132[16] = 1;
						iLocal_160 = 0;
					}
				}
				else if (!iLocal_132[17])
				{
					if (iLocal_160 == 0)
					{
						if (!__LIB_13__::func_755(&Local_276, 1))
						{
							iLocal_160 = MISC::GET_GAME_TIMER();
						}
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_160) > 5000)
					{
						if (SYSTEM::VDIST2(Var1, Var2) < 625f)
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_DELAY", 7, 0, 0, 0))
							{
								iLocal_132[17] = 1;
							}
						}
					}
				}
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -567.3907f, -1601.2479f, 26.010801f, -563.4156f, -1601.658f, 28.260801f, 3.75f, false, true, 0) || Local_310[0 /*25*/].f_5 > 0) || PED::IS_PED_INJURED(Local_310[0 /*25*/]))
				{
					Local_274.f_8 = { -562.7458f, -1602.204f, 26.0108f };
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_274.f_8, -566.3f, -1601.3f, 27.6159f, 2f, false, 0.5f, 0.5f, true, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_COORD(0, -566.3f, -1601.3f, 27.6159f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_274.f_0, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					Local_274.f_11 = 0;
					Local_274.f_4 = 0;
					Local_274.f_3++;
				}
				break;
			case 19:
				if (Local_310[0 /*25*/].f_5 > 0 || PED::IS_PED_INJURED(Local_310[0 /*25*/]))
				{
					Local_274.f_11 = 0;
					Local_274.f_4 = 0;
					Local_274.f_3 = 50;
				}
				break;
			case 50:
				if (Local_274.f_4 == 0)
				{
					Local_274.f_4 = MISC::GET_GAME_TIMER();
				}
				else if ((MISC::GET_GAME_TIMER() - Local_274.f_4) > 500)
				{
					Local_274.f_8 = { -575.0826f, -1610.5575f, 26.044f };
					func_306(Local_274.f_0, &(Local_274.f_2), Local_274.f_8, 64.3911f, 1f, 0, 0, 1, 1);
					PED::SET_PED_CONFIG_FLAG(Local_274.f_0, 131, true);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					if (SYSTEM::VDIST2(Var1, Local_274.f_8) > 9f)
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -564.2f, -1601.4f, 26.01f, -566.3f, -1601.3f, 27.6159f, 2f, false, 0.5f, 0.5f, true, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_274.f_8, -590.1738f, -1606.6678f, 27.6159f, 2f, false, 1f, 1f, true, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_274.f_8, 1000, false, 0f, true, false, Local_274.f_2, true);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_274.f_0, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					PED::SET_PED_ACCURACY(Local_274.f_0, 1);
					Local_274.f_4 = 0;
					Local_274.f_3++;
				}
				break;
			case 51:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_14");
				if (!func_300(&Local_310, -582.35657f, -1606.783f, 26.010801f, -569.629f, -1607.289f, 30.270933f, 15.5f, 0) && !func_300(&Local_311, -582.35657f, -1606.783f, 26.010801f, -569.629f, -1607.289f, 30.270933f, 15.5f, 0))
				{
					iVar11 = func_302(&Local_274, &(Local_274.f_4), Local_274.f_8, -604.2f, -1603.5314f, 27.5187f, Local_274.f_2, 1, 1, 0.75f, 0, 0);
					if (iVar11 == 0)
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_14"))
						{
							Local_274.f_8 = { -579.7391f, -1604.3739f, 26.0308f };
							func_306(Local_274.f_0, &(Local_274.f_2), Local_274.f_8, 77.199f, 1f, 1, 0, 1, 1);
							Local_274.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-576.169f, -1610.406f, 26.032f, 0f, 0f, -120f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_274.f_0, Local_274.f_6, "misslamar1lam_1_ig_14", "lam_1_ig_14_lamar", 1.5f, -1.5f, 1, 601, 1.5f, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, true);
							Local_274.f_12 = 0;
							Local_274.f_11 = 0;
							Local_274.f_4 = 0;
							Local_274.f_3++;
						}
					}
					else if (iVar11 == 2)
					{
						Local_274.f_8 = { -579.7391f, -1604.3739f, 26.0308f };
						func_306(Local_274.f_0, &(Local_274.f_2), Local_274.f_8, 77.199f, 1f, 1, 0, 1, 1);
						Local_274.f_12 = 0;
						Local_274.f_11 = 1;
						Local_274.f_4 = 0;
						Local_274.f_3++;
					}
				}
				break;
			case 52:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_15");
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
				{
					fVar8 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6);
					if (fVar8 > 0.34f && fVar8 < 0.36f)
					{
						func_299(&Local_274);
						if (!(func_285(&Local_310) && func_285(&Local_311)))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_243))
							{
								PED::SET_PED_SHOOTS_AT_COORD(Local_274.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_243, 0f, 0f, 1.5f), false);
							}
							else
							{
								PED::SET_PED_SHOOTS_AT_COORD(Local_274.f_0, -594.93f, -1607.64f, 27.8f, false);
							}
						}
					}
				}
				bVar4 = ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_274.f_0, -572.62897f, -1612.5465f, 26.010874f, -577.249f, -1609.1063f, 28.010874f, 3.25f, false, true, 1) && !func_300(&Local_310, -592.9783f, -1606.4116f, 25.671156f, -569.629f, -1607.289f, 30.270933f, 15.5f, 0)) && !func_300(&Local_311, -592.9783f, -1606.4116f, 25.671156f, -569.629f, -1607.289f, 30.270933f, 15.5f, 0));
				if (!Local_274.f_11)
				{
					if (__LIB_37__::func_207(Local_274.f_0, Local_274.f_8, 5f, 1073741824, 0, 1))
					{
						if (Local_274.f_12)
						{
							Local_274.f_8 = { -579.7391f, -1604.3739f, 26.0308f };
							func_306(Local_274.f_0, &(Local_274.f_2), Local_274.f_8, 77.199f, 1f, 1, 0, 1, 1);
							Local_274.f_12 = 0;
						}
						else
						{
							Local_274.f_8 = { -580.6209f, -1601.483f, 26.0108f };
							func_306(Local_274.f_0, &(Local_274.f_2), Local_274.f_8, 81.6555f, 2f, 2, 0, 0, 1);
							Local_274.f_12 = 1;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_274.f_0, -8f, true);
							Local_274.f_6 = -1;
						}
						bVar3 = true;
						Local_274.f_11 = 1;
					}
				}
				fVar9 = SYSTEM::VDIST2(Var1, Local_274.f_8);
				if (bVar4)
				{
					if (!__LIB_0__::func_490(Local_274.f_8, -579.7391f, -1604.3739f, 26.0308f, 1056964608, 0))
					{
						Local_274.f_8 = { -579.7391f, -1604.3739f, 26.0308f };
						func_306(Local_274.f_0, &(Local_274.f_2), Local_274.f_8, 77.199f, 1f, 1, 0, 1, 1);
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
					{
						func_304(&Local_274, &(Local_274.f_6), Local_274.f_8, 1f, 0.5f, 1, 1, Local_274.f_2, -1056964608);
					}
					else
					{
						iVar11 = func_302(&Local_274, &(Local_274.f_4), Local_274.f_8, -604.2f, -1603.5314f, 27.5187f, Local_274.f_2, 1, 1, 0.75f, 0, 0);
						if (iVar11 == 0 && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_15"))
						{
							Local_274.f_8 = { -587.1434f, -1606.1481f, 26.0108f };
							func_306(Local_274.f_0, &(Local_274.f_2), Local_274.f_8, 94.366f, 1f, 1, 0, 1, 1);
							Local_274.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-576.169f, -1610.406f, 26.032f, 0f, 0f, -120f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_274.f_0, Local_274.f_6, "misslamar1lam_1_ig_15", "lam_1_ig_15_lamar", 1.5f, -1.5f, 1, 601, 1.5f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6, 0.1f);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, true);
							Local_274.f_5 = 0;
							Local_274.f_12 = 0;
							Local_274.f_11 = 0;
							Local_274.f_4 = 0;
							Local_274.f_3++;
						}
						else if (iVar11 == 2)
						{
							Local_274.f_8 = { -587.1434f, -1606.1481f, 26.0108f };
							func_306(Local_274.f_0, &(Local_274.f_2), Local_274.f_8, 94.366f, 1f, 1, 0, 1, 1);
							Local_274.f_5 = 0;
							Local_274.f_12 = 0;
							Local_274.f_11 = 1;
							Local_274.f_4 = 0;
							Local_274.f_3++;
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6) && !Local_274.f_11)
				{
					func_303(&Local_274, &(Local_274.f_6), &(Local_274.f_4), Local_274.f_8, 1f, 0.5f, 1, 1, Local_274.f_2, -1056964608);
				}
				else if (Local_274.f_11 || ((TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6)) && (fVar9 > 4f || !bVar5)))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (fVar9 > 4f && !bVar3)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_274.f_8, -590.1738f, -1606.6678f, 27.6159f, 2f, false, 1f, 1f, true, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_274.f_8, 1000, false, 0.25f, true, false, Local_274.f_2, true);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_274.f_0, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					Local_274.f_11 = 0;
				}
				break;
			case 53:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_17");
				iVar18 = (func_284(&Local_310) + func_284(&Local_311));
				if ((!iLocal_132[18] && !__LIB_13__::func_755(&Local_276, 1)) && !PED::IS_PED_INJURED(Local_275.f_0))
				{
					if (func_309(Var2, Var1, ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true)))
					{
						iLocal_132[18] = 1;
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
				{
					fVar8 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6);
					if (fVar8 > 0.48f && fVar8 < 0.75f)
					{
						func_299(&Local_274);
						if (iVar18 > 0)
						{
							PED::SET_PED_SHOOTS_AT_COORD(Local_274.f_0, -594.93f, -1607.64f, 27.8f, false);
							WEAPON::SET_AMMO_IN_CLIP(Local_274.f_0, joaat("WEAPON_PUMPSHOTGUN"), 6);
						}
					}
				}
				if (iVar18 == 0)
				{
					bVar4 = true;
				}
				else if ((iVar18 == 1 && !PED::IS_PED_INJURED(Local_311[3 /*25*/])) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_311[3 /*25*/], -605.6366f, -1608.9535f, 26.01083f, -594.88464f, -1609.2975f, 29.01083f, 5.25f, false, true, 0))
				{
					if (iLocal_190 == 0)
					{
						iLocal_190 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_190) > 5000)
					{
						bVar4 = true;
					}
				}
				if (!Local_274.f_11)
				{
					if (!Local_274.f_12)
					{
						bVar19 = __LIB_37__::func_207(Local_274.f_0, Local_274.f_8, 5f, 1073741824, 0, 1);
					}
					else
					{
						bVar19 = __LIB_37__::func_207(Local_274.f_0, Local_274.f_8, 4f, 1f, 0, 1);
					}
					if (bVar19)
					{
						if (!bVar4)
						{
							if (Local_274.f_12)
							{
								Local_274.f_8 = { -587.1434f, -1606.1481f, 26.0108f };
								func_306(Local_274.f_0, &(Local_274.f_2), Local_274.f_8, 94.366f, 1f, 1, 0, 1, 1);
								Local_274.f_12 = 0;
							}
							else
							{
								Local_274.f_8 = { -586.5f, -1604.0411f, 26.0108f };
								TASK::REMOVE_COVER_POINT(Local_274.f_2);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_274.f_0, Local_274.f_8, 1f, true, false);
								Local_274.f_12 = 1;
							}
							bVar3 = true;
							Local_274.f_11 = 1;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_274.f_0, -8f, true);
							Local_274.f_6 = -1;
						}
					}
				}
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
				{
					if (iVar18 == 1)
					{
						if (!PED::IS_PED_INJURED(Local_311[4 /*25*/]))
						{
							if (!PED::IS_PED_IN_COMBAT(Local_311[4 /*25*/], 0))
							{
								bVar20 = true;
								if (bVar5)
								{
									Local_274.f_11 = 1;
								}
							}
						}
					}
					if (iVar18 == 1)
					{
						if ((!bVar20 && !bVar5) && !bVar4)
						{
							Local_274.f_11 = 1;
						}
					}
				}
				if (bVar20)
				{
					if (!iLocal_132[19])
					{
						if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_FIRST", 7, 0, 0, 0))
						{
							iLocal_132[19] = 1;
							iLocal_160 = 0;
						}
					}
					else if (!iLocal_132[20])
					{
						if (!__LIB_13__::func_755(&Local_276, 1))
						{
							if (iLocal_160 == 0)
							{
								iLocal_160 = MISC::GET_GAME_TIMER();
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_160) > 7000)
							{
								if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_GOGO", 7, 0, 0, 0))
								{
									iLocal_132[20] = 1;
								}
							}
						}
					}
				}
				fVar9 = SYSTEM::VDIST2(Var1, Local_274.f_8);
				if (bVar4)
				{
					if (Local_274.f_8 != -587.1434f)
					{
						Local_274.f_8 = { -587.1434f, -1606.1481f, 26.0108f };
						func_306(Local_274.f_0, &(Local_274.f_2), Local_274.f_8, 94.366f, 1f, 1, 0, 1, 1);
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
					{
						func_304(&Local_274, &(Local_274.f_6), Local_274.f_8, 0.99f, 0.5f, 1, 1, Local_274.f_2, -1056964608);
					}
					else
					{
						iVar11 = func_302(&Local_274, &(Local_274.f_4), Local_274.f_8, -604.2f, -1603.5314f, 27.5187f, Local_274.f_2, 1, 1, 0.75f, 0, 0);
						if (iVar11 == 0 && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_17"))
						{
							if (Local_274.f_5 == 0)
							{
								Local_274.f_5 = MISC::GET_GAME_TIMER();
							}
							else if ((MISC::GET_GAME_TIMER() - Local_274.f_5) > 1000 || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -595.3635f, -1609.2875f, 27.010801f, 8.25f, 2.75f, 2f, false, true, 0))
							{
								Local_274.f_8 = { -602.9f, -1607.08f, 26.0109f };
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_274.f_0, Local_274.f_8, 2f, true, false);
								Local_274.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-576.169f, -1610.406f, 26.032f, 0f, 0f, -120f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_274.f_0, Local_274.f_6, "misslamar1lam_1_ig_17", "lam_1_ig_17_lamar", 1.5f, -1.5f, 5, 601, 1.5f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, true);
								Local_274.f_12 = 0;
								Local_274.f_11 = 0;
								Local_274.f_4 = 0;
								Local_274.f_3++;
							}
						}
						else if (iVar11 == 2)
						{
							Local_274.f_8 = { -602.9f, -1607.08f, 26.0109f };
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_274.f_0, Local_274.f_8, 2f, true, false);
							Local_274.f_12 = 0;
							Local_274.f_11 = 1;
							Local_274.f_4 = 0;
							Local_274.f_3++;
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6) && !Local_274.f_11)
				{
					func_303(&Local_274, &(Local_274.f_6), &(Local_274.f_4), Local_274.f_8, 0.99f, 0.5f, 1, 1, Local_274.f_2, -1056964608);
				}
				else if (Local_274.f_11 || ((TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6)) && (fVar9 > 4f || !bVar5)))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (fVar9 > 4f && !bVar3)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_274.f_8, -597.1738f, -1606.1678f, 27.6159f, 2f, false, 1f, 1f, true, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					if (bVar20)
					{
						TASK::TASK_AIM_GUN_AT_COORD(0, -597.1738f, -1606.1678f, 27.6159f, -1, false, false);
					}
					else
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
					}
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_274.f_0, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					Local_274.f_11 = 0;
				}
				break;
			case 54:
				if (!__LIB_13__::func_755(&Local_276, 1))
				{
					if (Local_274.f_4 == 0)
					{
						if (!PED::IS_PED_INJURED(Local_275.f_0) && func_309(Var2, Var1, ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true)))
						{
							Local_274.f_4 = MISC::GET_GAME_TIMER();
							iLocal_160 = 0;
						}
					}
					else if (!iLocal_132[21])
					{
						if (iLocal_160 == 0)
						{
							iLocal_160 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_160) > 3000)
						{
							if (SYSTEM::VDIST2(Var1, Var2) < 400f && MISC::ABSF((Var1.f_2 - Var2.f_2)) < 5f)
							{
								if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_FIRST", 7, 0, 0, 0))
								{
									iLocal_132[21] = 1;
								}
							}
						}
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
				{
					func_301(&Local_274, &(Local_274.f_6), -605.6f, -1624.94f, 27.54f, 1065353216, 1, -1056964608);
					if (!PED::IS_PED_INJURED(Local_311[3 /*25*/]))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) > 0.125f && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) < 0.2f)
						{
							PED::SET_PED_SHOOTS_AT_COORD(Local_274.f_0, ENTITY::GET_ENTITY_COORDS(Local_311[3 /*25*/], true), false);
						}
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) > 0.16f)
						{
							ENTITY::SET_ENTITY_HEALTH(Local_311[3 /*25*/], 0, 0);
						}
					}
				}
				else if (SYSTEM::VDIST2(Var1, Local_274.f_8) > 4f)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 || (TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1 && TASK::GET_SEQUENCE_PROGRESS(Local_274.f_0) >= 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_274.f_8, -605.6f, -1624.94f, 27.54f, 2f, false, 0.1f, 1f, true, 512, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::TASK_AIM_GUN_AT_COORD(0, -605.6f, -1624.94f, 27.54f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_274.f_0, iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					}
				}
				if (Local_312[0 /*25*/].f_5 > 0)
				{
					Local_274.f_8 = { -604.0372f, -1618.1508f, 26.0108f };
					TASK::REMOVE_COVER_POINT(Local_274.f_2);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_274.f_0, Local_274.f_8, 1f, false, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_274.f_0, 50f, 0);
					Local_274.f_4 = 0;
					Local_274.f_3++;
				}
				break;
			case 55:
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
				{
					STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_17");
					STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_16");
					STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_15");
					STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_14");
					STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_13");
					STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_11");
					STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_12");
					STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_26_alt1");
					STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_26");
				}
				if (func_285(&Local_312))
				{
					Local_274.f_11 = 1;
					Local_274.f_4 = 0;
					Local_274.f_3++;
				}
				break;
			case 56:
				Var22 = { -604.0372f, -1618.1508f, 26.0108f };
				Var23 = { -605.6624f, -1628.9808f, 26.0107f };
				Var24 = { -596.8221f, -1629.5259f, 26.0108f };
				Var25 = { -591.7455f, -1630.4834f, 27.2158f };
				Var26 = { -601f, -1630.2f, 27.2f };
				if (SYSTEM::VDIST2(Var2, Var25) < SYSTEM::VDIST2(Var24, Var25))
				{
					Var21 = { Var24 };
					Var26 = { -591.7455f, -1630.4834f, 27.2158f };
				}
				else if (SYSTEM::VDIST2(Var2, Var24) < SYSTEM::VDIST2(Var23, Var24))
				{
					if (!__LIB_0__::func_490(Local_274.f_8, Var24, 1056964608, 0))
					{
						Var21 = { Var23 };
						Var26 = { -591.7455f, -1630.4834f, 27.2158f };
					}
				}
				else if (!__LIB_0__::func_490(Local_274.f_8, Var23, 1056964608, 0) && !__LIB_0__::func_490(Local_274.f_8, Var22, 1056964608, 0))
				{
					Var21 = { Var22 };
					Var26 = { -601f, -1630.2f, 27.2f };
				}
				if (!__LIB_0__::func_490(Local_274.f_8, Var21, 1056964608, 0) && !__LIB_0__::func_490(0f, 0f, 0f, Var21, 1056964608, 0))
				{
					Local_274.f_8 = { Var21 };
					Local_274.f_11 = 1;
				}
				if (Local_274.f_11)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_274.f_8, Var26, 2f, false, 0.5f, 2f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_COORD(0, Var26, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_274.f_0, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, true);
					Local_274.f_11 = 0;
				}
				if (bLocal_91)
				{
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Local_274.f_0, -589.4766f, -1639.8903f, 18.8855f, -587.2f, -1631.2f, 26f, 2f, false, 1f, 1f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					iLocal_132[45] = 0;
					bLocal_65 = true;
					Local_274.f_4 = 0;
					Local_274.f_3++;
				}
				else if ((!__LIB_13__::func_755(&Local_276, 1) && SYSTEM::VDIST2(Var1, Var2) < 400f) && MISC::ABSF((Var1.f_2 - Var2.f_2)) < 5f)
				{
					if (!iLocal_132[22])
					{
						if (!iLocal_132[23])
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_FIRST", 7, 0, 0, 0))
							{
								iLocal_132[23] = 1;
								iLocal_160 = MISC::GET_GAME_TIMER();
							}
						}
						else if (!iLocal_132[24])
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_160) > 7000)
							{
								if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_GOGO", 7, 0, 0, 0))
								{
									iLocal_132[24] = 1;
									iLocal_160 = MISC::GET_GAME_TIMER();
								}
							}
						}
						else if (!iLocal_132[25])
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_160) > 7000)
							{
								if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_DELAY", 7, 0, 0, 0))
								{
									iLocal_132[25] = 1;
								}
							}
						}
					}
					else if (!iLocal_132[26])
					{
						if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_WAYOUT", 7, 0, 0, 0))
						{
							iLocal_132[26] = 1;
							iLocal_160 = MISC::GET_GAME_TIMER();
						}
					}
					else if (!iLocal_132[27])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_160) > 7000)
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_EXT", 7, 0, 0, 0))
							{
								iLocal_132[27] = 1;
								iLocal_160 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (!iLocal_132[28])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_160) > 7000)
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_DELAY", 7, 0, 0, 0))
							{
								iLocal_132[28] = 1;
							}
						}
					}
				}
				break;
			case 57:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_274.f_0, -592.5679f, -1630.3676f, 28.238453f, -587.90656f, -1630.8245f, 23.511858f, 2.5f, false, true, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_261, false))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, true);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Local_274.f_0, -589.4766f, -1639.8903f, 18.8855f, -563.72f, -1649f, 29.8111f, 2f, true, 1f, 1f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
					Local_274.f_4 = 0;
					Local_274.f_3++;
				}
				break;
			case 58:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_274.f_0, -592.5679f, -1630.3676f, 28.238453f, -587.90656f, -1630.8245f, 23.511858f, 2.5f, false, true, 0))
				{
					func_298();
					if (bLocal_105)
					{
						Local_274.f_8 = { -592.8024f, -1642.5282f, 18.9567f };
					}
					else
					{
						Local_274.f_8 = { -593.268f, -1639.5262f, 18.9594f };
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, true);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -580.124f, -1634.6755f, 18.5787f, -563.72f, -1649f, 29.8111f, 2f, false, 0.5f, 0.5f, true, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_274.f_8, 2f, 20000, 0.25f, 512, 150f);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_274.f_0, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					bLocal_84 = false;
					Local_274.f_4 = 0;
					Local_274.f_3++;
				}
				break;
			case 59:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_18");
				if (SYSTEM::VDIST2(Var1, -592.8024f, -1642.5282f, 18.9567f) < 1.3f)
				{
					if (!PED::IS_PED_INJURED(Local_275.f_0))
					{
						Var27 = { ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true) };
					}
					if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_18") && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -592.2216f, -1642.9377f, 18.92483f, -593.819f, -1641.9839f, 22.709436f, 1.25f, false, true, 0))
					{
						if ((iLocal_85 && Var27.f_2 > 22f) || !iLocal_94)
						{
							TASK::TASK_CLIMB_LADDER(Local_274.f_0, true);
							iLocal_323 = 2;
							iLocal_111 = 1;
							bLocal_84 = true;
							Local_274.f_4 = 0;
							Local_274.f_3++;
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() - Local_274.f_4) > 1000)
				{
					func_298();
					if (bLocal_105)
					{
						Local_274.f_8 = { -592.8024f, -1642.5282f, 18.9567f };
					}
					else
					{
						Local_274.f_8 = { -593.268f, -1639.5262f, 18.9594f };
					}
					fVar9 = SYSTEM::VDIST2(Var1, Local_274.f_8);
					if (fVar9 >= 1.3f)
					{
						if ((TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
						{
							if (fVar9 > 16f)
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_274.f_0, Local_274.f_8, 2f, 20000, 0.25f, 512, 150f);
							}
							else
							{
								TASK::TASK_GO_STRAIGHT_TO_COORD(Local_274.f_0, Local_274.f_8, 1f, 20000, 150f, 0.1f);
							}
						}
					}
				}
				if (!iLocal_132[31] && iLocal_132[32])
				{
					if (!bLocal_90 && fVar9 < 64f)
					{
						if (!__LIB_13__::func_755(&Local_276, 1))
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_LADR", 7, 0, 0, 0))
							{
								iLocal_132[31] = 1;
							}
						}
					}
				}
				break;
			case 60:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_18");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_18"))
				{
					Var29 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("misslamar1lam_1_ig_18", "lam_1_ig_18_lamar", -593.06f, -1642.835f, 19.004f, 0f, 0f, 0f, 0.454f, 2) };
				}
				if (PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
				{
					if (Var2.f_2 > Var1.f_2)
					{
						bVar28 = true;
					}
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_CLIMB_LADDER")) == 1)
				{
					func_297(Var2, Var1, 0);
					if (PED::IS_PED_CLIMBING(Local_274.f_0))
					{
						if (bVar28)
						{
							if (iLocal_323 != 0)
							{
								PED::SET_LADDER_CLIMB_INPUT_STATE(Local_274.f_0, 0);
								iLocal_323 = 0;
							}
						}
						else if (iLocal_323 != 2)
						{
							PED::SET_LADDER_CLIMB_INPUT_STATE(Local_274.f_0, 2);
							iLocal_323 = 2;
						}
					}
					if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_18"))
					{
						if (MISC::ABSF((Var1.f_2 - Var29.f_2)) < 0.2f)
						{
							if (!bVar28)
							{
								Local_274.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-593.06f, -1642.835f, 19.004f, 0f, 0f, 0f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_274.f_0, Local_274.f_6, "misslamar1lam_1_ig_18", "lam_1_ig_18_lamar", 1.5f, -1.5f, 5, 601, 1.5f, 0);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6, 0.454f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, true);
								WEAPON::SET_CURRENT_PED_WEAPON(Local_274.f_0, joaat("WEAPON_PUMPSHOTGUN"), true);
								Local_274.f_4 = 0;
								Local_274.f_3++;
							}
						}
					}
				}
				else if (MISC::ABSF((Var1.f_2 - Var29.f_2)) > 0.2f)
				{
					bLocal_84 = false;
					Local_274.f_4 = 0;
					Local_274.f_3 = (Local_274.f_3 - 1);
				}
				else if (!bVar28)
				{
					TASK::TASK_CLIMB_LADDER(Local_274.f_0, true);
				}
				if (!iLocal_132[31] && iLocal_132[32])
				{
					if (!bLocal_90)
					{
						if (!__LIB_13__::func_755(&Local_276, 1))
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_LADR", 7, 0, 0, 0))
							{
								iLocal_132[31] = 1;
							}
						}
					}
				}
				break;
			case 61:
				STREAMING::REQUEST_ANIM_DICT("misslamar1ig_20");
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) > 0.82f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
				{
					if (Local_274.f_6 != -1)
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_274.f_0, -8f, true);
						Local_274.f_6 = -1;
					}
					if (func_284(&Local_314) >= 2)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_SHOOT_AT_ENTITY")) != 1 && !ENTITY::IS_ENTITY_DEAD(iLocal_261, false))
						{
							TASK::TASK_SHOOT_AT_ENTITY(Local_274.f_0, iLocal_261, -1, joaat("FIRING_PATTERN_BURST_FIRE"));
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, true);
						}
					}
					else
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_AIM_GUN_AT_COORD")) != 1)
						{
							if ((((!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_274.f_0, "misslamar1ig_20", "Lamar_Call_Hurry_A", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_274.f_0, "misslamar1ig_20", "Lamar_Call_Hurry_B", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_274.f_0, "misslamar1ig_20", "Lamar_Call_Hurry_C", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_274.f_0, "misslamar1ig_20", "Lamar_Call_Hurry_D", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_274.f_0, "misslamar1ig_20", "Lamar_Call_Hurry_E", 3))
							{
								TASK::TASK_AIM_GUN_AT_COORD(Local_274.f_0, -563.72f, -1649f, 29.8111f, -1, false, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, true);
							}
						}
						if (!bLocal_71)
						{
							Var31 = { __LIB_0__::func_486() };
							if (fVar10 > 25f)
							{
								if (fVar10 < 625f)
								{
									if (iLocal_183 == 0)
									{
										iLocal_183 = (MISC::GET_GAME_TIMER() - 4000);
									}
									else if ((MISC::GET_GAME_TIMER() - iLocal_183) > 10000)
									{
										if (iLocal_184 < 2)
										{
											if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_KEEPUP", 7, 0, 0, 0))
											{
												if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6) && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_20"))
												{
													iVar30 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
													TASK::OPEN_SEQUENCE_TASK(&iVar0);
													if (iVar30 == 0)
													{
														TASK::TASK_PLAY_ANIM(0, "misslamar1ig_20", "Lamar_Call_Hurry_A", 4f, -4f, -1, 0, 0f, false, false, false);
													}
													else if (iVar30 == 1)
													{
														TASK::TASK_PLAY_ANIM(0, "misslamar1ig_20", "Lamar_Call_Hurry_B", 4f, -4f, -1, 0, 0f, false, false, false);
													}
													else if (iVar30 == 2)
													{
														TASK::TASK_PLAY_ANIM(0, "misslamar1ig_20", "Lamar_Call_Hurry_C", 4f, -4f, -1, 0, 0f, false, false, false);
													}
													else if (iVar30 == 3)
													{
														TASK::TASK_PLAY_ANIM(0, "misslamar1ig_20", "Lamar_Call_Hurry_D", 4f, -4f, -1, 0, 0f, false, false, false);
													}
													else
													{
														TASK::TASK_PLAY_ANIM(0, "misslamar1ig_20", "Lamar_Call_Hurry_E", 4f, -4f, -1, 0, 0f, false, false, false);
													}
													TASK::TASK_AIM_GUN_AT_COORD(0, -563.72f, -1649f, 29.8111f, -1, false, false);
													TASK::CLOSE_SEQUENCE_TASK(iVar0);
													TASK::TASK_PERFORM_SEQUENCE(Local_274.f_0, iVar0);
													TASK::CLEAR_SEQUENCE_TASK(&iVar0);
												}
												iLocal_183 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 4000));
												iLocal_184++;
											}
										}
										else if (!iLocal_132[33])
										{
											if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_TOP", 7, 0, 0, 0))
											{
												iLocal_132[33] = 1;
												iLocal_183 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 4000));
											}
										}
									}
								}
							}
							else if (MISC::ARE_STRINGS_EQUAL(&Var31, "LEM1_TOP"))
							{
								__LIB_0__::func_638();
							}
						}
					}
					STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_19");
					if (func_284(&Local_314) < 2)
					{
						if (iLocal_111 || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true), -596.36f, -1649.46f, 25.14f) < 4f)
						{
							if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) > 0.82f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
							{
								if ((bLocal_71 || iLocal_66) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -593.1262f, -1643.0626f, 23f, -592.60345f, -1642.0844f, 26.9577f, 1.5f, false, true, 0))
								{
									iVar32 = 1;
								}
							}
						}
						if (!PED::IS_PED_INJURED(Local_275.f_0))
						{
							if (Local_275.f_3 >= 100 || iVar32)
							{
								if (Local_274.f_4 == 0)
								{
									if (Local_275.f_3 >= 100)
									{
										Local_274.f_4 = MISC::GET_GAME_TIMER();
									}
									else
									{
										Local_274.f_4 = (MISC::GET_GAME_TIMER() - 1000);
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_274.f_4) > 500)
								{
									Local_274.f_4 = 0;
									Local_274.f_3 = 100;
								}
							}
						}
					}
				}
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) < 0.82f) || TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_CLIMB_LADDER")) == 1)
				{
					func_297(Var2, Var1, 1);
					if (!__LIB_13__::func_755(&Local_276, 1))
					{
						if (iLocal_132[34] && !iLocal_132[35])
						{
							if (!iLocal_66 && fVar10 < 625f)
							{
								if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_ROOF", 7, 0, 0, 0))
								{
									iLocal_132[35] = 1;
								}
							}
						}
					}
				}
				break;
			case 100:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_19");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_19"))
				{
					Local_274.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-593.078f, -1642.909f, 18.951f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_274.f_0, Local_274.f_6, "misslamar1lam_1_ig_19", "lam_1_ig_19_lamar", 1.5f, -1.5f, 5, 603, 1.5f, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6, 0f);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, true);
					PED::SET_PED_CONFIG_FLAG(Local_274.f_0, 131, true);
					Local_274.f_4 = 0;
					Local_274.f_3++;
				}
				break;
			case 101:
				if (!__LIB_13__::func_755(&Local_276, 1) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
				{
					if (!iLocal_132[36])
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) > 0.2f && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) < 0.5f)
						{
							if (fVar10 < 900f)
							{
								if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_MOVE", 7, 0, 0, 0))
								{
									iLocal_132[36] = 1;
									iLocal_183 = (MISC::GET_GAME_TIMER() - 3000);
								}
							}
						}
					}
					else if (!iLocal_132[37] && iLocal_184 < 3)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_183) > 10000)
						{
							if (fVar10 < 900f && fVar10 > 400f)
							{
								if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_KEEPUP", 7, 0, 0, 0))
								{
									iLocal_132[37] = 1;
									iLocal_184++;
								}
							}
						}
					}
					if (!iLocal_132[38])
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) > 0.55f && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) < 0.62f) && fVar10 < 900f)
						{
							__LIB_0__::func_640(Local_274.f_0, "GENERIC_CURSE_MED", 10);
							iLocal_132[38] = 1;
						}
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
				{
					if (iLocal_66 && bLocal_69)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) < 0.7f)
						{
							if (!CAM::IS_SPHERE_VISIBLE(-603.1f, -1696.5f, 24.9f, 1f) && !CAM::IS_SPHERE_VISIBLE(Var1, 1f))
							{
								PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6, 0.7f);
							}
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) > 0.713f && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) < 0.9f)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -603.10095f, -1698.4114f, 24.043583f, -601.63086f, -1696.3237f, 26.977901f, 1f, false, true, 0))
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
						}
					}
				}
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) > 0.99f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -603.5973f, -1701.3f, 22.9511f, -596.5918f, -1714.461f, 23.8392f, 1f, false, 0.5f, 0.5f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_COORD(0, -596.5918f, -1714.461f, 23.8392f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_274.f_0, -8f, true);
					TASK::TASK_PERFORM_SEQUENCE(Local_274.f_0, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					Local_274.f_6 = -1;
					Local_274.f_4 = 0;
					Local_274.f_3++;
				}
				break;
		}
		func_296(&Local_274, &(Local_274.f_7));
		if (iVar7 != Local_274.f_3)
		{
		}
	}
}

void func_308(var uParam0, var uParam1, float fParam2, int iParam3, float fParam4)//Position - 0x332F8
{
	int iVar0;
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam1) && PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam1) >= fParam2) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam1))
		{
			iVar0 = 0;
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam1))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, fParam4, true);
				*uParam1 = -1;
				iVar0 = 1;
			}
			if (!PED::IS_PED_IN_COMBAT(*uParam0, 0) && TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 1)
			{
				if (iVar0 && iParam3)
				{
					PED::SET_PED_RESET_FLAG(*uParam0, 156, true);
				}
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*uParam0, 50f, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, false);
			}
		}
	}
}

int func_309(struct<3> Param0, struct<3> Param1, struct<3> Param2)//Position - 0x3339B
{
	int iVar0;
	struct<2> Var1;
	int iVar2;
	if ((SYSTEM::VDIST2(Param0, Param1) < 400f && SYSTEM::VDIST2(Param0, Param2) < 400f) && MISC::ABSF((Param0.f_2 - Param2.f_2)) < 5f)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		StringCopy(&Var1, "", 16);
		switch (iVar0)
		{
			case 0:
				StringConCat(&Var1, "LEM1_FCONV1", 16);
				iVar2 = 118;
				break;
			case 1:
				StringConCat(&Var1, "LEM1_FCONV2", 16);
				iVar2 = 119;
				break;
			case 2:
				StringConCat(&Var1, "LEM1_FCONV3", 16);
				iVar2 = 120;
				break;
			case 3:
				StringConCat(&Var1, "LEM1_FCONV4", 16);
				iVar2 = 121;
				break;
			case 4:
				StringConCat(&Var1, "LEM1_FCONV5", 16);
				iVar2 = 122;
				break;
			case 5:
				StringConCat(&Var1, "LEM1_FCONV6", 16);
				iVar2 = 123;
				break;
			case 6:
				StringConCat(&Var1, "LEM1_FCONV7", 16);
				iVar2 = 124;
				break;
			case 7:
				StringConCat(&Var1, "LEM1_FCONV8", 16);
				iVar2 = 125;
				break;
			case 8:
				StringConCat(&Var1, "LEM1_FCONV9", 16);
				iVar2 = 126;
				break;
			case 9:
				StringConCat(&Var1, "LEM1_FCONV10", 16);
				iVar2 = 127;
				break;
		}
		if (!iLocal_132[iVar2])
		{
			if (__LIB_38__::func_746(&Local_288, cLocal_207, &Var1, 7, 0, 0, 0))
			{
				iLocal_132[iVar2] = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_310(struct<3> Param0)//Position - 0x334F5
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	bool bVar13;
	int iVar14[4];
	bool bVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	struct<3> Var21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	struct<3> Var26;
	struct<3> Var27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	int iVar37;
	int iVar38;
	iVar0 = 0;
	Var1 = { 0f, 0f, 0f };
	iVar4 = 0;
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar5, false);
	if (Local_312[iVar0 /*25*/].f_5 == 0)
	{
		STREAMING::REQUEST_MODEL(iLocal_326);
		STREAMING::REQUEST_MODEL(iLocal_327);
	}
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PISTOL"), 31, 0);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_ASSAULTRIFLE"), 31, 0);
	if (!PED::IS_PED_INJURED(Local_274.f_0))
	{
		Var2 = { ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true) };
	}
	if (!PED::IS_PED_INJURED(Local_275.f_0))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true) };
	}
	if (!iLocal_123)
	{
		if (!iLocal_62)
		{
			AUDIO::PREPARE_MUSIC_EVENT("LM1_TERMINADOR_DOORS_OPEN");
		}
		iVar7 = 0;
		if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -626.09656f, -1625.246f, 32.034725f, -622.5164f, -1625.457f, 34.01049f, 1.25f, false, true, 0) || iVar7) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6) > 0.1f)) || (iLocal_187 > 0 && (MISC::GET_GAME_TIMER() - iLocal_187) > 750))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_DOORS_OPEN");
			iLocal_123 = 1;
		}
	}
	if (!Local_305[(Local_305.f_0 - 1) /*25*/].f_2)
	{
		if (STREAMING::HAS_MODEL_LOADED(iLocal_326) && STREAMING::HAS_MODEL_LOADED(iLocal_327))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_305[0 /*25*/]))
			{
				Local_305[0 /*25*/] = func_320(iLocal_326, -613.8455f, -1625.8945f, 32.0106f, 175.6571f, iLocal_347, 135, 0, joaat("WEAPON_PISTOL"), 26);
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_305[1 /*25*/]))
			{
				Local_305[1 /*25*/] = func_320(iLocal_327, -612.4139f, -1623.9155f, 32.0106f, 180.2247f, iLocal_347, 115, 0, joaat("WEAPON_PISTOL"), 26);
				fLocal_135 = 0f;
				func_318(&Local_305, "Lift ");
			}
		}
	}
	else
	{
		if (iLocal_123)
		{
			func_317(&fLocal_135, 1f, 0.5f, 1);
			if (fLocal_135 < 1f && fLocal_135 != 0f)
			{
				OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(iLocal_329, -614.7f, -1626.8f, 32f, true, 0f, 0f, -fLocal_135);
				OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(iLocal_330, -612.1f, -1627f, 32f, true, 0f, 0f, fLocal_135);
			}
		}
		iVar0 = 0;
		while (iVar0 < Local_305.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_305[iVar0 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_305[iVar0 /*25*/]))
				{
					switch (Local_305[iVar0 /*25*/].f_5)
					{
						case 0:
							if (iLocal_123)
							{
								Local_305[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								Local_305[iVar0 /*25*/].f_5++;
							}
							break;
						case 1:
							if (iVar0 == 0)
							{
								iVar8 = 100;
								Local_305[iVar0 /*25*/].f_14 = { -614.2863f, -1630.5717f, 32.0106f };
							}
							else if (iVar0 == 1)
							{
								iVar8 = 500;
								Local_305[iVar0 /*25*/].f_14 = { -609.6615f, -1631.9216f, 32.0106f };
							}
							if ((MISC::GET_GAME_TIMER() - Local_305[iVar0 /*25*/].f_7) > iVar8)
							{
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_305[iVar0 /*25*/], iLocal_346);
								__LIB_37__::func_208(&(Local_305[iVar0 /*25*/]), 10, 1, 2, 0, 1);
								if (iVar0 == 0)
								{
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_305[iVar0 /*25*/], Local_305[iVar0 /*25*/].f_14, 2f, true, false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_305[iVar0 /*25*/], 100f, 0);
								}
								else
								{
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_305[iVar0 /*25*/], Local_305[iVar0 /*25*/].f_14, 2f, false, false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_305[iVar0 /*25*/], 100f, 0);
								}
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_305[iVar0 /*25*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_305[iVar0 /*25*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_305[iVar0 /*25*/], 50, true);
								PED::SET_COMBAT_FLOAT(Local_305[iVar0 /*25*/], 13, 3f);
								__LIB_0__::func_640(Local_305[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_305[iVar0 /*25*/], true);
								Local_305[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								Local_305[iVar0 /*25*/].f_5++;
							}
							break;
						case 2:
							if ((MISC::GET_GAME_TIMER() - Local_305[iVar0 /*25*/].f_7) > 17000)
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_305[iVar0 /*25*/], false);
								Local_305[iVar0 /*25*/].f_5++;
							}
							break;
					}
					if (!iLocal_120)
					{
						iVar9 = (func_284(&Local_305) + func_284(&Local_307));
						if (iVar9 <= 2)
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_305[iVar0 /*25*/], -614.2863f, -1630.5717f, 32.0106f, 3f, false, false);
							PED::SET_PED_COMBAT_MOVEMENT(Local_305[iVar0 /*25*/], 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_305[iVar0 /*25*/], 51, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_305[iVar0 /*25*/], 50, true);
							iLocal_120 = 1;
						}
					}
					if (Local_305[iVar0 /*25*/].f_5 > 1)
					{
						__LIB_0__::func_631(Local_305[iVar0 /*25*/], &(Local_305[iVar0 /*25*/].f_17), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
					}
				}
				else
				{
					func_237(&(Local_305[iVar0 /*25*/]), 0);
				}
			}
			iVar0++;
		}
	}
	if (!Local_307[(Local_307.f_0 - 1) /*25*/].f_2)
	{
		if (STREAMING::HAS_MODEL_LOADED(iLocal_326) && STREAMING::HAS_MODEL_LOADED(iLocal_327))
		{
			if (Local_305[0 /*25*/].f_5 > 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_307[0 /*25*/]))
				{
					Local_307[0 /*25*/] = func_320(iLocal_326, -605.7524f, -1625.3763f, 32.0106f, 90.1695f, iLocal_347, 115, 0, joaat("WEAPON_PISTOL"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_307[1 /*25*/]))
				{
					Local_307[1 /*25*/] = func_320(iLocal_327, -605.5994f, -1624.1635f, 32.0106f, 90.2147f, iLocal_347, 115, 0, joaat("WEAPON_PISTOL"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_307[2 /*25*/]))
				{
					Local_307[2 /*25*/] = func_320(iLocal_326, -605.3604f, -1621.979f, 32.0106f, 90.2147f, iLocal_347, 115, 0, joaat("WEAPON_PISTOL"), 26);
					func_318(&Local_307, "Window ");
				}
			}
		}
	}
	else
	{
		bVar10 = false;
		iVar0 = 0;
		while (iVar0 < Local_307.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_307[iVar0 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_307[iVar0 /*25*/]))
				{
					switch (Local_307[iVar0 /*25*/].f_5)
					{
						case 0:
							if (iLocal_123)
							{
								Local_307[iVar0 /*25*/].f_7 = 0;
								Local_307[iVar0 /*25*/].f_5++;
							}
							break;
						case 1:
							bVar10 = false;
							if (iVar0 == 0)
							{
								if (Local_307[iVar0 /*25*/].f_7 == 0)
								{
									Local_307[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								}
								else if ((MISC::GET_GAME_TIMER() - Local_307[iVar0 /*25*/].f_7) > 1000)
								{
									bVar10 = true;
								}
							}
							else if (iVar0 == 1 || iVar0 == 2)
							{
								if (func_284(&Local_305) <= 1 || func_284(&Local_307) <= 2)
								{
									if (Local_307[iVar0 /*25*/].f_7 == 0)
									{
										Local_307[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
									}
									else if ((MISC::GET_GAME_TIMER() - Local_307[iVar0 /*25*/].f_7) > 1000)
									{
										bVar10 = true;
									}
								}
							}
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -616.51447f, -1630.9775f, 31.760536f, -605.3833f, -1631.4326f, 35.260498f, 7.75f, false, true, 0))
							{
								bVar10 = true;
							}
							if (bVar10)
							{
								if (iVar0 == 0)
								{
									__LIB_0__::func_640(Local_307[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
									func_306(Local_307[iVar0 /*25*/], &(Local_307[iVar0 /*25*/].f_4), -607.4794f, -1633.2985f, 32.0303f, 80.4127f, 2f, 2, 0, 1, 1);
								}
								else if (iVar0 == 1)
								{
									func_306(Local_307[iVar0 /*25*/], &(Local_307[iVar0 /*25*/].f_4), -609.4595f, -1631.6287f, 32.0106f, 89.7347f, 2f, 2, 0, 1, 1);
								}
								else if (iVar0 == 2)
								{
									func_306(Local_307[iVar0 /*25*/], &(Local_307[iVar0 /*25*/].f_4), -608.9896f, -1628.0059f, 32.0105f, 97.5261f, 2f, 2, 0, 1, 1);
								}
								__LIB_37__::func_208(&(Local_307[iVar0 /*25*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_307[iVar0 /*25*/], iLocal_346);
								PED::SET_PED_CAN_BE_TARGETTED(Local_307[iVar0 /*25*/], true);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_307[iVar0 /*25*/], true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_307[iVar0 /*25*/], 100f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_307[iVar0 /*25*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_307[iVar0 /*25*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_307[iVar0 /*25*/], 50, true);
								PED::SET_COMBAT_FLOAT(Local_307[iVar0 /*25*/], 13, 3f);
								Local_307[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								Local_307[iVar0 /*25*/].f_5++;
							}
							break;
						case 2:
							if ((MISC::GET_GAME_TIMER() - Local_307[iVar0 /*25*/].f_7) > 15000)
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_307[iVar0 /*25*/], false);
								Local_307[iVar0 /*25*/].f_5++;
							}
							break;
					}
					if (!iLocal_120)
					{
						iVar11 = (func_284(&Local_307) + func_284(&Local_305));
						if (iVar11 <= 2)
						{
							PED::SET_PED_COMBAT_MOVEMENT(Local_307[iVar0 /*25*/], 1);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_307[iVar0 /*25*/], -616.7226f, -1630.4847f, 32.0106f, 3f, false, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_307[iVar0 /*25*/], 51, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_307[iVar0 /*25*/], 50, true);
							iLocal_120 = 1;
						}
					}
					if (Local_307[iVar0 /*25*/].f_5 > 1)
					{
						__LIB_0__::func_631(Local_307[iVar0 /*25*/], &(Local_307[iVar0 /*25*/].f_17), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
					}
				}
				else
				{
					func_237(&(Local_307[iVar0 /*25*/]), 0);
				}
			}
			iVar0++;
		}
	}
	if (!Local_306[0 /*25*/].f_2)
	{
		if (!Local_307[0 /*25*/].f_2)
		{
			Local_306[0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
		}
		else if ((MISC::GET_GAME_TIMER() - Local_306[0 /*25*/].f_7) > 3000)
		{
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_MODEL(iLocal_335);
			if ((((STREAMING::HAS_MODEL_LOADED(iLocal_326) && STREAMING::HAS_MODEL_LOADED(iLocal_327)) && STREAMING::HAS_MODEL_LOADED(iLocal_335)) && STREAMING::HAS_PTFX_ASSET_LOADED()) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\LAMAR1_01", false, -1))
			{
				Local_306[0 /*25*/] = func_320(iLocal_326, -590.1174f, -1622.8175f, 32.0106f, 19.5823f, iLocal_347, 110, 0, joaat("WEAPON_PUMPSHOTGUN"), 26);
				Local_306[1 /*25*/] = func_320(iLocal_327, -590.9761f, -1623.5693f, 32.0106f, 342.5562f, iLocal_347, 135, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
				__LIB_16__::func_13(&(iLocal_245[0]), 1);
				__LIB_16__::func_13(&(iLocal_245[1]), 1);
				iLocal_244 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_335, -591.5f, -1621.4f, 100f, true, true, false);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_244, -591.5f, -1621.4f, 100f, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_244, 0f, 0f, 180f, 2, true);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_244, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_244, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_335);
				ENTITY::REMOVE_MODEL_HIDE(-591.5f, -1621.4f, 33.2f, 0.5f, joaat("v_ilev_rc_door1_st"), false);
				ENTITY::REMOVE_MODEL_HIDE(-588.9f, -1621.6f, 33.2f, 0.5f, joaat("v_ilev_rc_door1_st"), false);
				MISC::CLEAR_AREA(-588.9f, -1621.6f, 33.2f, 5f, false, false, false, false);
				iVar0 = 0;
				while (iVar0 < Local_306.f_0)
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_306[iVar0 /*25*/], true);
					ENTITY::SET_ENTITY_PROOFS(Local_306[iVar0 /*25*/], true, true, true, true, true, false, false, false);
					if (iVar0 == 1)
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_306[iVar0 /*25*/], true);
						PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_306[iVar0 /*25*/], false);
						PED::SET_PED_MAX_HEALTH(Local_306[iVar0 /*25*/], 1000);
						ENTITY::SET_ENTITY_HEALTH(Local_306[iVar0 /*25*/], 1000, 0);
					}
					iVar0++;
				}
				func_318(&Local_306, "Breach ");
				iLocal_89 = 0;
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_306.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_306[iVar0 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_306[iVar0 /*25*/]))
				{
					switch (Local_306[iVar0 /*25*/].f_5)
					{
						case 0:
							if (!iLocal_89)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_245[0]))
								{
									iLocal_245[0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_228, 1f, joaat("v_ilev_rc_door1_st"), false, false, true);
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_245[1]))
								{
									iLocal_245[1] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_229, 1f, joaat("v_ilev_rc_door1_st"), false, false, true);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_245[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_245[1]))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_245[0], true, false);
									ENTITY::SET_ENTITY_COLLISION(iLocal_245[0], true, false);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_245[0], true);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_245[0], true);
									ENTITY::SET_ENTITY_VISIBLE(iLocal_245[1], true, false);
									ENTITY::SET_ENTITY_COLLISION(iLocal_245[1], true, false);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_245[1], true);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_245[1], true);
									iLocal_89 = 1;
								}
							}
							if (!PED::IS_PED_INJURED(Local_274.f_0))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_274.f_0, -590.109f, -1621.4475f, 32.01178f, -589.89f, -1617.4846f, 34.378773f, 2f, false, true, 0))
								{
									if (iVar0 == 0)
									{
										Var1 = { -589.5699f, -1619.7706f, 32.0106f };
										GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(sLocal_211, -590.1724f, -1621.4822f, 33.1749f, 0f, 0f, -5.84f, 1f, false, false, false);
										fVar12 = SYSTEM::VDIST2(Param0, -590.1724f, -1621.4822f, 33.1749f);
										if (fVar12 < 100f)
										{
											CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", (0.5f - (fVar12 / 100f)));
										}
										AUDIO::PLAY_SOUND_FROM_COORD(-1, "LAMAR1_BustDoorOpen1", -590.1724f, -1621.4822f, 33.1749f, 0, false, 0, false);
										AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_1ST_DOOR_EXPLODES");
									}
									else
									{
										Var1 = { -592.0153f, -1619.4905f, 32.0106f };
									}
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_306[iVar0 /*25*/], iLocal_346);
									ENTITY::SET_ENTITY_INVINCIBLE(Local_306[iVar0 /*25*/], false);
									ENTITY::SET_ENTITY_PROOFS(Local_306[iVar0 /*25*/], false, false, false, false, false, false, false, false);
									PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_306[iVar0 /*25*/], 29);
									func_131(&(Local_306[iVar0 /*25*/]), 10, 1, 2, 0, 0, Var1, 1f);
									Local_306[iVar0 /*25*/].f_8 = PED::CREATE_SYNCHRONIZED_SCENE(-599.1f, -1620.098f, 32.001f, 0f, 0f, -91f, 2);
									if (iVar0 == 0)
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar6);
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -589.4663f, -1620.3263f, 32.0106f, -589.6f, -1617.7f, 32.3f, 1f, false, 0.5f, 4f, false, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
										TASK::TASK_AIM_GUN_AT_COORD(0, -589.6f, -1617.7f, 32.3f, -1, false, false);
										TASK::CLOSE_SEQUENCE_TASK(iVar6);
										TASK::TASK_PERFORM_SEQUENCE(Local_306[iVar0 /*25*/], iVar6);
										TASK::CLEAR_SEQUENCE_TASK(&iVar6);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_306[iVar0 /*25*/], true);
									}
									else
									{
										Local_306[iVar0 /*25*/].f_14 = { -591.5299f, -1619.2393f, 32.0105f };
										TASK::OPEN_SEQUENCE_TASK(&iVar6);
										TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_306[iVar0 /*25*/].f_14, PLAYER::PLAYER_PED_ID(), 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
										TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
										TASK::CLOSE_SEQUENCE_TASK(iVar6);
										TASK::TASK_PERFORM_SEQUENCE(Local_306[iVar0 /*25*/], iVar6);
										TASK::CLEAR_SEQUENCE_TASK(&iVar6);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_306[iVar0 /*25*/], 51, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_306[iVar0 /*25*/], 50, true);
										PED::SET_COMBAT_FLOAT(Local_306[iVar0 /*25*/], 13, 3f);
										ENTITY::SET_ENTITY_INVINCIBLE(Local_306[iVar0 /*25*/], true);
									}
									Local_306[iVar0 /*25*/].f_1 = __LIB_0__::func_666(Local_306[iVar0 /*25*/], 1, 145);
									Local_306[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
									Local_306[iVar0 /*25*/].f_5++;
								}
							}
							break;
						case 1:
							if (iVar0 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_245[0]))
								{
									GRAPHICS::REMOVE_DECALS_FROM_OBJECT(iLocal_245[0]);
									ENTITY::SET_ENTITY_VISIBLE(iLocal_245[0], false, false);
									ENTITY::SET_ENTITY_COLLISION(iLocal_245[0], false, false);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_245[0], false);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_245[1]))
								{
									GRAPHICS::REMOVE_DECALS_FROM_OBJECT(iLocal_245[1]);
									ENTITY::SET_ENTITY_VISIBLE(iLocal_245[1], false, false);
									ENTITY::SET_ENTITY_COLLISION(iLocal_245[1], false, false);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_245[1], false);
								}
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_244, -590.7942f, -1621.283f, 33.1598f, false, false, true);
								ENTITY::SET_ENTITY_ROTATION(iLocal_244, 0f, 0f, -5f, 2, true);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_244, false);
								ENTITY::SET_ENTITY_VISIBLE(iLocal_244, true, false);
								PHYSICS::ACTIVATE_PHYSICS(iLocal_244);
								ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_244, 1, -0.5f, 5f, 0f, 0f, 0f, 0f, 0, false, true, true, false, false);
							}
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -589.85077f, -1621.5645f, 31.760536f, -589.2391f, -1616.5161f, 34.76246f, 3.5f, false, true, 0))
							{
								PED::SET_PED_TO_RAGDOLL_WITH_FALL(PLAYER::PLAYER_PED_ID(), 1000, 5000, 2, 0f, 1f, 0f, 32f, 0f, 0f, 0f, 0f, 0f, 0f);
								ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 0f, 1f, 0.25f, 0f, 0f, 0f, 0, false, true, true, false, true);
								PED::APPLY_DAMAGE_TO_PED(PLAYER::PLAYER_PED_ID(), ((ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) - 100) / 3), true, 0);
								CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.5f);
							}
							Local_306[iVar0 /*25*/].f_5++;
							break;
						case 2:
							if ((MISC::GET_GAME_TIMER() - Local_306[iVar0 /*25*/].f_7) > 500)
							{
								ENTITY::SET_ENTITY_INVINCIBLE(Local_306[iVar0 /*25*/], false);
								PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_306[iVar0 /*25*/], 1);
								PED::SET_PED_CAN_RAGDOLL(Local_306[iVar0 /*25*/], true);
								if (iVar0 == 0)
								{
									if (!iLocal_132[0] && iLocal_132[1])
									{
										if (!__LIB_13__::func_755(&Local_276, 1))
										{
											__LIB_0__::func_640(Local_306[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
											iLocal_132[0] = 1;
										}
									}
									else
									{
										Local_306[iVar0 /*25*/].f_7 = 0;
										Local_306[iVar0 /*25*/].f_5++;
									}
								}
								else
								{
									Local_306[iVar0 /*25*/].f_7 = 0;
									Local_306[iVar0 /*25*/].f_5++;
								}
							}
							break;
						case 3:
							if (iVar0 == 0)
							{
								if (Local_306[iVar0 /*25*/].f_7 == 0)
								{
									Local_306[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								}
								else if ((MISC::GET_GAME_TIMER() - Local_306[iVar0 /*25*/].f_7) > 3000)
								{
									if (!PED::IS_PED_RAGDOLL(Local_306[iVar0 /*25*/]))
									{
										PED::SET_PED_ACCURACY(Local_274.f_0, 100);
									}
									TASK::OPEN_SEQUENCE_TASK(&iVar6);
									if (!PED::IS_PED_RAGDOLL(Local_306[iVar0 /*25*/]))
									{
										if (!PED::IS_PED_INJURED(Local_274.f_0))
										{
											TASK::TASK_SHOOT_AT_ENTITY(0, Local_274.f_0, 800, joaat("FIRING_PATTERN_FULL_AUTO"));
										}
									}
									TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
									TASK::CLOSE_SEQUENCE_TASK(iVar6);
									TASK::TASK_PERFORM_SEQUENCE(Local_306[iVar0 /*25*/], iVar6);
									TASK::CLEAR_SEQUENCE_TASK(&iVar6);
									if (!PED::IS_PED_RAGDOLL(Local_306[iVar0 /*25*/]))
									{
										if (!PED::IS_PED_INJURED(Local_274.f_0))
										{
											PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_274.f_0, 0);
											PED::SET_PED_TO_RAGDOLL(Local_274.f_0, 1000, 2000, 2, true, true, false);
											PED::APPLY_DAMAGE_TO_PED(Local_274.f_0, ENTITY::GET_ENTITY_HEALTH(Local_274.f_0) + 50, true, 0);
										}
									}
									Local_306[iVar0 /*25*/].f_7 = 0;
									Local_306[iVar0 /*25*/].f_5++;
								}
								if (PED::IS_PED_INJURED(Local_306[1 /*25*/]))
								{
									MISC::SET_BIT(&(Local_306[iVar0 /*25*/].f_9), 3);
									Local_306[iVar0 /*25*/].f_7 = 0;
									Local_306[iVar0 /*25*/].f_5 = 10;
								}
							}
							else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_306[iVar0 /*25*/].f_8))
							{
								if (!iLocal_132[2])
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_306[iVar0 /*25*/].f_8) > 0.21f)
									{
										__LIB_0__::func_640(Local_306[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
										iLocal_132[2] = 1;
									}
								}
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_306[iVar0 /*25*/].f_8) > 0.25f)
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_306[iVar0 /*25*/].f_8) > 0.27f || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -588.2419f, -1619.3705f, 32.010517f, -593.07733f, -1618.8927f, 34.760517f, 5.25f, false, true, 0))
									{
										Local_306[iVar0 /*25*/].f_7 = 0;
										Local_306[iVar0 /*25*/].f_5 = 10;
									}
								}
							}
							else
							{
								Local_306[iVar0 /*25*/].f_7 = 0;
								Local_306[iVar0 /*25*/].f_5 = 10;
							}
							break;
						case 10:
							if (PED::GET_PED_MAX_HEALTH(Local_306[iVar0 /*25*/]) > 200)
							{
								PED::SET_PED_MAX_HEALTH(Local_306[iVar0 /*25*/], 200);
								if (ENTITY::GET_ENTITY_HEALTH(Local_306[iVar0 /*25*/]) > 135)
								{
									ENTITY::SET_ENTITY_HEALTH(Local_306[iVar0 /*25*/], 135, 0);
								}
							}
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_306[iVar0 /*25*/], true);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_306[iVar0 /*25*/], 0);
							PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_306[iVar0 /*25*/], 1);
							if (((TASK::GET_SCRIPT_TASK_STATUS(Local_306[iVar0 /*25*/], joaat("SCRIPT_TASK_COMBAT")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_306[iVar0 /*25*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_306[iVar0 /*25*/].f_8)) || BitTest(Local_306[iVar0 /*25*/].f_9, 3))
							{
								if (iVar0 == 0)
								{
									Local_306[iVar0 /*25*/].f_14 = { -591.5299f, -1619.2393f, 32.0105f };
								}
								else if (iVar0 == 1)
								{
									Local_306[iVar0 /*25*/].f_14 = { -591.5299f, -1619.2393f, 32.0105f };
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_306[iVar0 /*25*/], Local_306[iVar0 /*25*/].f_14, 2f, false, false);
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_306[iVar0 /*25*/].f_8))
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_306[iVar0 /*25*/], -4f, true);
									Local_306[iVar0 /*25*/].f_8 = -1;
									bVar13 = true;
								}
								TASK::OPEN_SEQUENCE_TASK(&iVar6);
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
								if (bVar13)
								{
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_306[iVar0 /*25*/].f_14, PLAYER::PLAYER_PED_ID(), 1f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
								}
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 67108864, 16);
								TASK::CLOSE_SEQUENCE_TASK(iVar6);
								TASK::TASK_PERFORM_SEQUENCE(Local_306[iVar0 /*25*/], iVar6);
								TASK::CLEAR_SEQUENCE_TASK(&iVar6);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_306[iVar0 /*25*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_306[iVar0 /*25*/], 50, true);
								PED::SET_COMBAT_FLOAT(Local_306[iVar0 /*25*/], 13, 3f);
								MISC::CLEAR_BIT(&(Local_306[iVar0 /*25*/].f_9), 3);
							}
							break;
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_306[iVar0 /*25*/], PLAYER::PLAYER_PED_ID(), true))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_306[iVar0 /*25*/], -4f, true);
						Local_306[iVar0 /*25*/].f_8 = -1;
						ENTITY::SET_ENTITY_INVINCIBLE(Local_306[iVar0 /*25*/], false);
						PED::SET_PED_CAN_RAGDOLL(Local_306[iVar0 /*25*/], true);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_306[iVar0 /*25*/], 0);
						if (PED::GET_PED_MAX_HEALTH(Local_306[iVar0 /*25*/]) > 200)
						{
							PED::SET_PED_MAX_HEALTH(Local_306[iVar0 /*25*/], 200);
							if (ENTITY::GET_ENTITY_HEALTH(Local_306[iVar0 /*25*/]) > 135)
							{
								ENTITY::SET_ENTITY_HEALTH(Local_306[iVar0 /*25*/], 135, 0);
							}
						}
					}
				}
				else
				{
					func_237(&(Local_306[iVar0 /*25*/]), 0);
					__LIB_16__::func_13(&iLocal_244, 0);
					STREAMING::REMOVE_PTFX_ASSET();
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\LAMAR1_01");
				}
			}
			iVar0++;
		}
	}
	if (!Local_308[0 /*25*/].f_2)
	{
		if (Local_306[0 /*25*/].f_5 > 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_326))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_308[0 /*25*/]))
				{
					Local_308[0 /*25*/] = func_320(iLocal_326, -562.0791f, -1627.7186f, 31.8098f, 86.8494f, iLocal_347, 135, 0, joaat("WEAPON_PISTOL"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_308[1 /*25*/]))
				{
					Local_308[1 /*25*/] = func_320(iLocal_326, -562.11f, -1626.7261f, 31.2098f, 86.8494f, iLocal_347, 135, 0, joaat("WEAPON_PISTOL"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_308[2 /*25*/]))
				{
					Local_308[2 /*25*/] = func_320(iLocal_326, -561.9381f, -1625.9612f, 30.6098f, 95.2498f, iLocal_347, 175, 0, joaat("WEAPON_MICROSMG"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_308[3 /*25*/]))
				{
					Local_308[3 /*25*/] = func_320(iLocal_326, -561.6803f, -1624.1124f, 30.0093f, 95.2498f, iLocal_347, 135, 0, joaat("WEAPON_PUMPSHOTGUN"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_308[4 /*25*/]))
				{
					Local_308[4 /*25*/] = func_320(iLocal_326, -574.1028f, -1625.1156f, 32.0106f, 81.3094f, iLocal_347, 135, 0, joaat("WEAPON_PISTOL"), 26);
					func_318(&Local_308, "heliroom ");
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_308.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_308[iVar0 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_308[iVar0 /*25*/]))
				{
					switch (Local_308[iVar0 /*25*/].f_5)
					{
						case 0:
							if (iVar0 < 3)
							{
								PED::SET_PED_RESET_FLAG(Local_308[iVar0 /*25*/], 282, true);
								if (func_314(PLAYER::PLAYER_PED_ID(), Local_274.f_0, Local_275.f_0, -586.0922f, -1625.4724f, 32.189663f, -592.10236f, -1624.9104f, 34.510536f, 6.85f))
								{
									__LIB_37__::func_208(&(Local_308[iVar0 /*25*/]), 10, 2, 2, 0, 1);
									if (iVar0 == 0)
									{
										func_306(Local_308[iVar0 /*25*/], &(Local_308[iVar0 /*25*/].f_4), -573.5095f, -1627.3381f, 32.0258f, 79.2489f, 2f, 2, 0, 1, 1);
									}
									else if (iVar0 == 1)
									{
										func_306(Local_308[iVar0 /*25*/], &(Local_308[iVar0 /*25*/].f_4), -577.9146f, -1623.5862f, 32.0106f, 89.1467f, 2f, 2, 0, 1, 1);
									}
									else
									{
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_308[iVar0 /*25*/], -578.3687f, -1628.8259f, 32.0106f, 2f, true, false);
									}
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_308[iVar0 /*25*/], iLocal_346);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_308[iVar0 /*25*/], 100f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_308[iVar0 /*25*/], true);
									if (iVar0 != 2)
									{
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_308[iVar0 /*25*/], true);
									}
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_308[iVar0 /*25*/], 51, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_308[iVar0 /*25*/], 50, true);
									PED::SET_COMBAT_FLOAT(Local_308[iVar0 /*25*/], 13, 3f);
									if (iVar0 == 0)
									{
										__LIB_0__::func_640(Local_308[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
									}
									Local_308[iVar0 /*25*/].f_5++;
									Local_308[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								}
							}
							else if (iVar0 == 3)
							{
								if (((PED::IS_PED_INJURED(Local_308[0 /*25*/]) && PED::IS_PED_INJURED(Local_308[1 /*25*/])) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -566.99225f, -1627.3809f, 31.79691f, -580.0611f, -1626.5541f, 34.575512f, 9.5f, false, true, 0)) || func_284(&Local_308) <= 3)
								{
									__LIB_37__::func_208(&(Local_308[iVar0 /*25*/]), 10, 2, 2, 0, 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_308[iVar0 /*25*/], -573.6948f, -1627.8458f, 32.0258f, 2f, false, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_308[iVar0 /*25*/], 51, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_308[iVar0 /*25*/], 50, true);
									PED::SET_COMBAT_FLOAT(Local_308[iVar0 /*25*/], 13, 3f);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_308[iVar0 /*25*/], iLocal_346);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_308[iVar0 /*25*/], 100f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_308[iVar0 /*25*/], true);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_308[iVar0 /*25*/], true);
									__LIB_0__::func_640(Local_308[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
									Local_308[iVar0 /*25*/].f_5++;
									Local_308[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								}
							}
							else if (iVar0 == 4)
							{
								if (func_314(Local_274.f_0, Local_275.f_0, 0, -586.0922f, -1625.4724f, 32.189663f, -592.10236f, -1624.9104f, 34.510536f, 6.85f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -589.3593f, -1628.6876f, 32.130856f, -589.5018f, -1619.5673f, 34.76056f, 5.25f, false, true, 0))
								{
									if (PED::IS_PED_INJURED(Local_306[0 /*25*/]) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -589.3593f, -1628.6876f, 32.130856f, -589.5018f, -1619.5673f, 34.76056f, 5.25f, false, true, 0))
									{
										Local_308[iVar0 /*25*/].f_14 = { -581.6903f, -1624.3286f, 32.0106f };
										__LIB_37__::func_208(&(Local_308[iVar0 /*25*/]), 10, 2, 2, 0, 1);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_308[iVar0 /*25*/], Local_308[iVar0 /*25*/].f_14, 2f, true, false);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_308[iVar0 /*25*/], 51, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_308[iVar0 /*25*/], 50, true);
										PED::SET_COMBAT_FLOAT(Local_308[iVar0 /*25*/], 13, 3f);
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_308[iVar0 /*25*/], true);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_308[iVar0 /*25*/], iLocal_346);
										TASK::OPEN_SEQUENCE_TASK(&iVar6);
										TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
										TASK::CLOSE_SEQUENCE_TASK(iVar6);
										TASK::TASK_PERFORM_SEQUENCE(Local_308[iVar0 /*25*/], iVar6);
										TASK::CLEAR_SEQUENCE_TASK(&iVar6);
										__LIB_0__::func_640(Local_308[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
										Local_308[iVar0 /*25*/].f_5++;
										Local_308[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
									}
								}
							}
							break;
						case 1:
							if ((MISC::GET_GAME_TIMER() - Local_308[iVar0 /*25*/].f_7) > 13000 || (iVar0 == 3 && (MISC::GET_GAME_TIMER() - Local_308[iVar0 /*25*/].f_7) > 8000))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_308[iVar0 /*25*/], false);
								Local_308[iVar0 /*25*/].f_5++;
								Local_308[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
							}
							break;
					}
					if (iVar0 == 4)
					{
						if (__LIB_0__::func_490(Local_308[iVar0 /*25*/].f_14, -581.6903f, -1624.3286f, 32.0106f, 0.1f, 0))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -586.0922f, -1625.4724f, 32.189663f, -592.10236f, -1624.9104f, 34.510536f, 6.85f, false, true, 0))
							{
								PED::SET_PED_COMBAT_MOVEMENT(Local_308[iVar0 /*25*/], 1);
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(Local_308[iVar0 /*25*/], PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 4f, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_308[iVar0 /*25*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_308[iVar0 /*25*/], 50, true);
								Local_308[iVar0 /*25*/].f_14 = { 0f, 0f, 0f };
							}
						}
					}
					if (Local_308[iVar0 /*25*/].f_5 > 0)
					{
						__LIB_0__::func_631(Local_308[iVar0 /*25*/], &(Local_308[iVar0 /*25*/].f_17), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
					}
				}
				else
				{
					func_237(&(Local_308[iVar0 /*25*/]), 0);
				}
			}
			iVar0++;
		}
	}
	if (!Local_313[0 /*25*/].f_2)
	{
		if (Local_306[0 /*25*/].f_5 > 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_326))
			{
				Local_313[0 /*25*/] = func_320(iLocal_326, -562.1794f, -1628.9116f, 28.0096f, 359.9586f, iLocal_347, 135, 0, joaat("WEAPON_PISTOL"), 26);
				func_318(&Local_313, "window_2 ");
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_313.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_313[iVar0 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_313[iVar0 /*25*/]))
				{
					switch (Local_313[iVar0 /*25*/].f_5)
					{
						case 0:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -564.71f, -1628.2012f, 28.00959f, -564.2546f, -1622.0074f, 31.759422f, 2.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -560.61237f, -1623.8948f, 30.009325f, -565.55664f, -1623.5286f, 32.318893f, 3f, false, true, 0))
							{
								__LIB_37__::func_208(&(Local_313[iVar0 /*25*/]), 10, 2, 2, 1, 1);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_313[iVar0 /*25*/], -563.7205f, -1630.9292f, 28.0096f, 2f, true, false);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_313[iVar0 /*25*/], iLocal_346);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_313[iVar0 /*25*/], 50f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_313[iVar0 /*25*/], true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_313[iVar0 /*25*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_313[iVar0 /*25*/], 50, true);
								PED::SET_COMBAT_FLOAT(Local_313[iVar0 /*25*/], 13, 3f);
								__LIB_0__::func_640(Local_313[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
								Local_313[iVar0 /*25*/].f_5++;
								Local_313[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
							}
							break;
						case 1:
							if ((MISC::GET_GAME_TIMER() - Local_313[iVar0 /*25*/].f_7) > 2500)
							{
								__LIB_0__::func_640(Local_313[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
								Local_313[iVar0 /*25*/].f_5++;
							}
							break;
					}
					if (Local_313[iVar0 /*25*/].f_5 > 0)
					{
						__LIB_0__::func_631(Local_313[iVar0 /*25*/], &(Local_313[iVar0 /*25*/].f_17), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
					}
				}
				else
				{
					if (Local_313[iVar0 /*25*/].f_5 <= 0)
					{
						Local_313[iVar0 /*25*/].f_5 = 1;
					}
					func_237(&(Local_313[iVar0 /*25*/]), 0);
				}
			}
			iVar0++;
		}
	}
	if (!Local_309[0 /*25*/].f_2)
	{
		if (Local_313[0 /*25*/].f_5 > 0)
		{
			if (SYSTEM::VDIST2(-561.449f, -1603.4106f, 26.0109f, Param0) < 2500f)
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_326) && STREAMING::HAS_MODEL_LOADED(iLocal_327))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_309[0 /*25*/]))
					{
						Local_309[0 /*25*/] = func_320(iLocal_326, -564.2737f, -1601.372f, 26.0108f, 182.8773f, iLocal_347, 135, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_309[1 /*25*/]))
					{
						Local_309[1 /*25*/] = func_320(iLocal_327, -563.2382f, -1602.5646f, 26.0108f, 183.3599f, iLocal_347, 135, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_309[2 /*25*/]))
					{
						Local_309[2 /*25*/] = func_320(iLocal_326, -564.2366f, -1602.4486f, 26.0108f, 183.3599f, iLocal_347, 135, 0, joaat("WEAPON_PISTOL"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_309[3 /*25*/]))
					{
						Local_309[3 /*25*/] = func_320(iLocal_327, -565.6711f, -1601.5125f, 26.0108f, 177.4956f, iLocal_347, 135, 0, joaat("WEAPON_MICROSMG"), 26);
						iVar14[0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-559.99f, -1610.07f, 26.01f, 2f, joaat("prop_box_wood03a"), false, false, true);
						iVar14[1] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-560f, -1611.25f, 26.01f, 2f, joaat("prop_box_wood03a"), false, false, true);
						iVar14[2] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-562.69f, -1614.53f, 26.01f, 2f, joaat("prop_box_wood03a"), false, false, true);
						iVar14[3] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-562.79f, -1615.71f, 26.01f, 2f, joaat("prop_box_wood03a"), false, false, true);
						iVar0 = 0;
						while (iVar0 < iVar14)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar14[iVar0]))
							{
								ENTITY::FREEZE_ENTITY_POSITION(iVar14[iVar0], true);
							}
							iVar0++;
						}
						func_318(&Local_309, "Pre-warehouse ");
						iLocal_154 = 0;
					}
				}
			}
		}
	}
	else
	{
		bVar15 = false;
		bVar16 = false;
		iVar0 = 0;
		while (iVar0 < Local_309.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_309[iVar0 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_309[iVar0 /*25*/]))
				{
					switch (Local_309[iVar0 /*25*/].f_5)
					{
						case 0:
							if (!bVar16)
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -560.26f, -1619.91f, 26.01f, -563.71f, -1619.67f, 28.01f, 1f, false, true, 0))
								{
									bVar15 = true;
								}
								else if (Local_309[iVar0 /*25*/].f_7 == 0)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_274.f_0, -560.26f, -1619.91f, 26.01f, -563.71f, -1619.67f, 28.01f, 1f, false, true, 0))
									{
										Local_309[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_309[iVar0 /*25*/].f_7) > 5000)
								{
									bVar15 = true;
								}
								bVar16 = true;
							}
							if (bVar15)
							{
								Local_309[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								Local_309[iVar0 /*25*/].f_5++;
							}
							break;
						case 1:
							STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_11");
							if (iVar0 < 2)
							{
								if ((MISC::GET_GAME_TIMER() - Local_309[iVar0 /*25*/].f_7) > 500 && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_11"))
								{
									if (iVar0 == 0)
									{
										Local_309[iVar0 /*25*/].f_14 = { -559.94f, -1606.5057f, 26.011f };
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_309[iVar0 /*25*/], Local_309[iVar0 /*25*/].f_14, 2f, false, false);
									}
									else if (iVar0 == 1)
									{
										Local_309[iVar0 /*25*/].f_14 = { -561.5538f, -1607.4127f, 26.011f };
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_309[iVar0 /*25*/], Local_309[iVar0 /*25*/].f_14, 2f, false, false);
									}
									__LIB_37__::func_208(&(Local_309[iVar0 /*25*/]), 10, 1, 2, 0, 1);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_309[iVar0 /*25*/], iLocal_346);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_309[iVar0 /*25*/], 51, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_309[iVar0 /*25*/], 50, true);
									PED::SET_COMBAT_FLOAT(Local_309[iVar0 /*25*/], 13, 3f);
									Local_309[iVar0 /*25*/].f_8 = PED::CREATE_SYNCHRONIZED_SCENE(-559.968f, -1610.005f, 26.03f, 0f, 0f, 88f, 2);
									if (iVar0 == 0)
									{
										TASK::TASK_SYNCHRONIZED_SCENE(Local_309[iVar0 /*25*/], Local_309[iVar0 /*25*/].f_8, "misslamar1lam_1_ig_11", "lam_1_ig_11_swat_a", 8f, -8f, 1, 0, 1000f, 0);
										PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_309[iVar0 /*25*/].f_8, 0.05f);
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_309[iVar0 /*25*/], true);
										PED::SET_PED_FIRING_PATTERN(Local_309[iVar0 /*25*/], joaat("FIRING_PATTERN_FULL_AUTO"));
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_309[iVar0 /*25*/], true);
									}
									else
									{
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_309[iVar0 /*25*/], 100f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_309[iVar0 /*25*/], false);
									}
									if (iVar0 == 0)
									{
										__LIB_0__::func_640(Local_309[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
									}
									else
									{
										PED::SET_PED_CONFIG_FLAG(Local_309[iVar0 /*25*/], 286, true);
									}
									Local_309[iVar0 /*25*/].f_7 = 0;
									Local_309[iVar0 /*25*/].f_5++;
								}
							}
							else if (iVar0 == 2)
							{
								if (func_284(&Local_309) < 4 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -561.16223f, -1611.5518f, 25.760828f, -560.37195f, -1601.4965f, 32.260826f, 5f, false, true, 0))
								{
									Local_309[iVar0 /*25*/].f_14 = { -561.5297f, -1609.8085f, 26.0108f };
									__LIB_37__::func_208(&(Local_309[iVar0 /*25*/]), 10, 1, 2, 0, 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_309[iVar0 /*25*/], Local_309[iVar0 /*25*/].f_14, 2f, true, false);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_309[iVar0 /*25*/], iLocal_346);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_309[iVar0 /*25*/], 100f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_309[iVar0 /*25*/], false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_309[iVar0 /*25*/], 51, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_309[iVar0 /*25*/], 50, true);
									PED::SET_COMBAT_FLOAT(Local_309[iVar0 /*25*/], 13, 3f);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_309[iVar0 /*25*/], true);
									Local_309[iVar0 /*25*/].f_7 = 0;
									Local_309[iVar0 /*25*/].f_5++;
								}
							}
							else if (iVar0 == 3)
							{
								if (func_284(&Local_309) < 3 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -561.16223f, -1611.5518f, 25.760828f, -560.37195f, -1601.4965f, 32.260826f, 5f, false, true, 0))
								{
									Local_309[iVar0 /*25*/].f_14 = { -560.71f, -1601.6761f, 26.0108f };
									__LIB_37__::func_208(&(Local_309[iVar0 /*25*/]), 10, 1, 2, 0, 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_309[iVar0 /*25*/], Local_309[iVar0 /*25*/].f_14, 1f, true, false);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_309[iVar0 /*25*/], iLocal_346);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_309[iVar0 /*25*/], 100f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_309[iVar0 /*25*/], false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_309[iVar0 /*25*/], 51, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_309[iVar0 /*25*/], 50, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_309[iVar0 /*25*/], 35, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_309[iVar0 /*25*/], 34, false);
									PED::SET_COMBAT_FLOAT(Local_309[iVar0 /*25*/], 13, 3f);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_309[iVar0 /*25*/], true);
									Local_309[iVar0 /*25*/].f_7 = 0;
									Local_309[iVar0 /*25*/].f_5++;
								}
							}
							break;
						case 2:
							if (iVar0 < 2)
							{
								if (iVar0 == 0)
								{
									func_308(&(Local_309[iVar0 /*25*/]), &(Local_309[iVar0 /*25*/].f_8), 0.9f, 1, -1056964608);
								}
								else if (iVar0 == 1)
								{
									func_308(&(Local_309[iVar0 /*25*/]), &(Local_309[iVar0 /*25*/].f_8), 0.77f, 1, -1056964608);
								}
							}
							if (Local_309[iVar0 /*25*/].f_7 == 0)
							{
								Local_309[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
							}
							else if (iVar0 < 2)
							{
								if (iVar0 == 0)
								{
									iVar17 = 6000;
								}
								else
								{
									iVar17 = 9000;
								}
								if ((MISC::GET_GAME_TIMER() - Local_309[iVar0 /*25*/].f_7) > iVar17 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_309[iVar0 /*25*/].f_8))
								{
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_309[iVar0 /*25*/], false);
									Local_309[iVar0 /*25*/].f_5++;
								}
							}
							else if ((MISC::GET_GAME_TIMER() - Local_309[iVar0 /*25*/].f_7) > 6000)
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_309[iVar0 /*25*/], false);
								if (iVar0 == 3)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_309[iVar0 /*25*/], 51, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_309[iVar0 /*25*/], 50, true);
								}
								Local_309[iVar0 /*25*/].f_5++;
							}
							break;
					}
					if (Local_309[iVar0 /*25*/].f_5 > 1)
					{
						__LIB_0__::func_631(Local_309[iVar0 /*25*/], &(Local_309[iVar0 /*25*/].f_17), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
					}
				}
				else
				{
					func_237(&(Local_309[iVar0 /*25*/]), 0);
				}
			}
			iVar0++;
		}
	}
	if (!Local_311[0 /*25*/].f_2)
	{
		if (Local_309[0 /*25*/].f_5 > 0 || Local_274.f_3 >= 50)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_326) && STREAMING::HAS_MODEL_LOADED(iLocal_327))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_311[0 /*25*/]))
				{
					Local_311[0 /*25*/] = func_320(iLocal_326, -604.6722f, -1614.3717f, 26.011f, 1.7272f, iLocal_347, 135, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_311[1 /*25*/]))
				{
					Local_311[1 /*25*/] = func_320(iLocal_327, -604.7084f, -1616.1466f, 26.011f, 1.7272f, iLocal_347, 165, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_311[2 /*25*/]))
				{
					Local_311[2 /*25*/] = func_320(iLocal_326, -604.7386f, -1617.9944f, 26.011f, 1.7272f, iLocal_347, 135, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_311[3 /*25*/]))
				{
					Local_311[3 /*25*/] = func_320(iLocal_327, -605.5866f, -1615.7777f, 26.0393f, 336.7832f, iLocal_347, 135, 0, joaat("WEAPON_MICROSMG"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_311[4 /*25*/]))
				{
					Local_311[4 /*25*/] = func_320(iLocal_327, -603.8036f, -1605.4093f, 26.6105f, 267.3067f, iLocal_347, 135, 0, joaat("WEAPON_MICROSMG"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_311[5 /*25*/]))
				{
					Local_311[5 /*25*/] = func_320(iLocal_326, -605.4207f, -1614.5223f, 26.0108f, 330.9266f, iLocal_347, 135, 0, joaat("WEAPON_PUMPSHOTGUN"), 26);
					func_318(&Local_311, "Warehouse ");
					iVar0 = 0;
					while (iVar0 < Local_311.f_0)
					{
						if (!PED::IS_PED_INJURED(Local_311[iVar0 /*25*/]))
						{
							TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_311[iVar0 /*25*/], false);
						}
						iVar0++;
					}
				}
			}
		}
	}
	else
	{
		bVar18 = false;
		bVar19 = false;
		bVar20 = false;
		iVar0 = 0;
		while (iVar0 < Local_311.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_311[iVar0 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_311[iVar0 /*25*/]))
				{
					Var21 = { ENTITY::GET_ENTITY_COORDS(Local_311[iVar0 /*25*/], true) };
					switch (Local_311[iVar0 /*25*/].f_5)
					{
						case 0:
							if (!bVar18)
							{
								bVar19 = (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -565.84f, -1601.32f, 25.8f, -571.33f, -1600.83f, 29.01f, 3f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -568.24f, -1607.67f, 30.48f, -577.45f, -1606.81f, 25.76f, 16.75f, false, true, 0));
								bVar18 = true;
							}
							if (bVar19)
							{
								Local_311[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								Local_311[iVar0 /*25*/].f_5++;
							}
							break;
						case 1:
							if (iVar0 < 3)
							{
								STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_13");
								if ((MISC::GET_GAME_TIMER() - Local_311[iVar0 /*25*/].f_7) > 1000 && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_13"))
								{
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_311[iVar0 /*25*/], iLocal_346);
									__LIB_37__::func_208(&(Local_311[iVar0 /*25*/]), 10, 1, 2, 0, 1);
									if (iVar0 == 0)
									{
										Local_311[iVar0 /*25*/].f_14 = { -586.1633f, -1604.6453f, 26.011f };
										func_306(Local_311[iVar0 /*25*/], &(Local_311[iVar0 /*25*/].f_4), Local_311[iVar0 /*25*/].f_14, 270.8263f, 2f, 0, 0, 1, 1);
									}
									else if (iVar0 == 1)
									{
										Local_311[iVar0 /*25*/].f_14 = { -590.7108f, -1610.3392f, 26.011f };
										func_306(Local_311[iVar0 /*25*/], &(Local_311[iVar0 /*25*/].f_4), Local_311[iVar0 /*25*/].f_14, 272.9712f, 2f, 1, 0, 1, 1);
									}
									else if (iVar0 == 2)
									{
										Local_311[iVar0 /*25*/].f_14 = { -584.5994f, -1601.2083f, 26.011f };
										func_306(Local_311[iVar0 /*25*/], &(Local_311[iVar0 /*25*/].f_4), Local_311[iVar0 /*25*/].f_14, 270.8263f, 2f, 0, 0, 1, 1);
									}
									Local_311[iVar0 /*25*/].f_8 = PED::CREATE_SYNCHRONIZED_SCENE(-589.947f, -1610.48f, 26.043f, 0f, 0f, 90f, 2);
									if (iVar0 == 0)
									{
										TASK::TASK_SYNCHRONIZED_SCENE(Local_311[iVar0 /*25*/], Local_311[iVar0 /*25*/].f_8, "misslamar1lam_1_ig_13", "lam_1_ig_13_a", 8f, -8f, 5, 0, 1000f, 0);
									}
									else if (iVar0 == 1)
									{
										TASK::TASK_SYNCHRONIZED_SCENE(Local_311[iVar0 /*25*/], Local_311[iVar0 /*25*/].f_8, "misslamar1lam_1_ig_13", "lam_1_ig_13_b", 8f, -8f, 5, 0, 1000f, 0);
									}
									else
									{
										TASK::TASK_SYNCHRONIZED_SCENE(Local_311[iVar0 /*25*/], Local_311[iVar0 /*25*/].f_8, "misslamar1lam_1_ig_13", "lam_1_ig_13_c", 8f, -8f, 5, 0, 1000f, 0);
									}
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_311[iVar0 /*25*/], false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_311[iVar0 /*25*/], 51, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_311[iVar0 /*25*/], 50, true);
									PED::SET_COMBAT_FLOAT(Local_311[iVar0 /*25*/], 13, 3f);
									Local_311[iVar0 /*25*/].f_7 = 0;
									Local_311[iVar0 /*25*/].f_5++;
								}
							}
							else if (iVar0 == 3)
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -605.69354f, -1609.5312f, 26.010809f, -588.66125f, -1609.1199f, 31.010809f, 6.75f, false, true, 0) || (func_284(&Local_311) + func_284(&Local_310)) < 4)
								{
									Local_311[iVar0 /*25*/].f_14 = { -598.8683f, -1611.3479f, 26.0109f };
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_311[iVar0 /*25*/], iLocal_346);
									__LIB_37__::func_208(&(Local_311[iVar0 /*25*/]), 10, 1, 2, 0, 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_311[iVar0 /*25*/], Local_311[iVar0 /*25*/].f_14, 2f, true, false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_311[iVar0 /*25*/], 50f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_311[iVar0 /*25*/], false);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_311[iVar0 /*25*/], true);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_311[iVar0 /*25*/], 51, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_311[iVar0 /*25*/], 50, true);
									PED::SET_COMBAT_FLOAT(Local_311[iVar0 /*25*/], 13, 3f);
									__LIB_0__::func_640(Local_311[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
									Local_311[iVar0 /*25*/].f_7 = 0;
									Local_311[iVar0 /*25*/].f_5++;
								}
							}
							else if (iVar0 == 4)
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -606.03674f, -1609.4902f, 25.297455f, -584.5716f, -1609.0262f, 31.760801f, 7f, false, true, 0))
								{
									Local_311[iVar0 /*25*/].f_14 = { -593.4334f, -1608.6034f, 26.0108f };
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_311[iVar0 /*25*/], iLocal_346);
									__LIB_37__::func_208(&(Local_311[iVar0 /*25*/]), 10, 1, 2, 0, 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_311[iVar0 /*25*/], Local_311[iVar0 /*25*/].f_14, 2f, true, false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_311[iVar0 /*25*/], 100f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_311[iVar0 /*25*/], false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_311[iVar0 /*25*/], 51, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_311[iVar0 /*25*/], 50, true);
									PED::SET_COMBAT_FLOAT(Local_311[iVar0 /*25*/], 13, 3f);
									ENTITY::SET_ENTITY_INVINCIBLE(Local_311[iVar0 /*25*/], false);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_311[iVar0 /*25*/], true);
									__LIB_0__::func_640(Local_311[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
									Local_311[iVar0 /*25*/].f_7 = 0;
									Local_311[iVar0 /*25*/].f_5++;
								}
							}
							else if (iVar0 == 5)
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -605.69354f, -1609.5312f, 26.010809f, -588.66125f, -1609.1199f, 31.010809f, 6.75f, false, true, 0) || (PED::IS_PED_INJURED(Local_310[3 /*25*/]) && Local_310[3 /*25*/].f_2))
								{
									Local_311[iVar0 /*25*/].f_14 = { -590.7108f, -1610.3392f, 26.011f };
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_311[iVar0 /*25*/], iLocal_346);
									__LIB_37__::func_208(&(Local_311[iVar0 /*25*/]), 10, 1, 2, 0, 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_311[iVar0 /*25*/], Local_311[iVar0 /*25*/].f_14, 2f, false, false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_311[iVar0 /*25*/], 100f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_311[iVar0 /*25*/], false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_311[iVar0 /*25*/], 51, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_311[iVar0 /*25*/], 50, true);
									PED::SET_COMBAT_FLOAT(Local_311[iVar0 /*25*/], 13, 3f);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_311[iVar0 /*25*/], true);
									Local_311[iVar0 /*25*/].f_7 = 0;
									Local_311[iVar0 /*25*/].f_5++;
								}
							}
							break;
						case 2:
							if (iVar0 < 3)
							{
								if (iVar0 == 0)
								{
									func_303(&(Local_311[iVar0 /*25*/]), &(Local_311[iVar0 /*25*/].f_8), &(Local_311[iVar0 /*25*/].f_7), Local_311[iVar0 /*25*/].f_14, 0.9f, 0.5f, 1, 1, 0, -1056964608);
								}
								else if (iVar0 == 1)
								{
									func_303(&(Local_311[iVar0 /*25*/]), &(Local_311[iVar0 /*25*/].f_8), &(Local_311[iVar0 /*25*/].f_7), Local_311[iVar0 /*25*/].f_14, 0.7f, 0.5f, 1, 1, 0, -1056964608);
								}
								else
								{
									func_303(&(Local_311[iVar0 /*25*/]), &(Local_311[iVar0 /*25*/].f_8), &(Local_311[iVar0 /*25*/].f_7), Local_311[iVar0 /*25*/].f_14, 0.99f, 0.5f, 1, 0, 0, -1056964608);
								}
								if (iVar0 == 1)
								{
									if (!__LIB_0__::func_490(Local_311[iVar0 /*25*/].f_14, -584.7054f, -1608.4663f, 26.0108f, 0.5f, 0))
									{
										if (PED::IS_PED_INJURED(Local_310[3 /*25*/]) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_311[iVar0 /*25*/].f_8))
										{
											Local_311[iVar0 /*25*/].f_14 = { -584.7054f, -1608.4663f, 26.0108f };
											PED::SET_PED_COMBAT_MOVEMENT(Local_311[iVar0 /*25*/], 1);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_311[iVar0 /*25*/], Local_311[iVar0 /*25*/].f_14, 2f, true, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_311[iVar0 /*25*/], 51, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_311[iVar0 /*25*/], 50, true);
											PED::SET_COMBAT_FLOAT(Local_311[iVar0 /*25*/], 13, 3f);
											__LIB_0__::func_640(Local_311[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
										}
									}
								}
							}
							else if (Local_311[iVar0 /*25*/].f_7 == 0)
							{
								Local_311[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
							}
							else if ((MISC::GET_GAME_TIMER() - Local_311[iVar0 /*25*/].f_7) > 10000)
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_311[iVar0 /*25*/], false);
								Local_311[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
							}
							if (!__LIB_0__::func_490(Local_311[iVar0 /*25*/].f_14, Var21, 1f, 0))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
								{
									if (!BitTest(Local_311[iVar0 /*25*/].f_9, 2) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_311[iVar0 /*25*/].f_8))
									{
										if (SYSTEM::VDIST2(Var21, Local_311[iVar0 /*25*/].f_14) < SYSTEM::VDIST2(Var2, Local_311[iVar0 /*25*/].f_14) && SYSTEM::VDIST2(Var21, Local_311[iVar0 /*25*/].f_14) < SYSTEM::VDIST2(Var3, Local_311[iVar0 /*25*/].f_14))
										{
											PED::SET_PED_COMBAT_MOVEMENT(Local_311[iVar0 /*25*/], 1);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_311[iVar0 /*25*/], Local_311[iVar0 /*25*/].f_14, 2f, true, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_311[iVar0 /*25*/], 51, true);
											ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_311[iVar0 /*25*/], false);
											TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_311[iVar0 /*25*/], 100f, 0);
											MISC::SET_BIT(&(Local_311[iVar0 /*25*/].f_9), 2);
										}
									}
								}
								else if (BitTest(Local_311[iVar0 /*25*/].f_9, 2))
								{
									MISC::CLEAR_BIT(&(Local_311[iVar0 /*25*/].f_9), 2);
								}
							}
							break;
					}
					bVar20 = false;
					if (FIRE::IS_EXPLOSION_IN_AREA(-1, Var21 - Vector(5f, 5f, 5f), Var21 + Vector(5f, 5f, 5f)) && !FIRE::IS_EXPLOSION_IN_AREA(23, Var21 - Vector(5f, 5f, 5f), Var21 + Vector(5f, 5f, 5f)))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_200) > 1000)
						{
							bVar20 = true;
						}
					}
					if (!BitTest(Local_311[iVar0 /*25*/].f_9, 1))
					{
						if (Local_237[0 /*9*/].f_1 < 0.5f)
						{
							if (!bVar20)
							{
								ENTITY::SET_ENTITY_PROOFS(Local_311[iVar0 /*25*/], false, false, true, false, false, false, false, false);
								PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_311[iVar0 /*25*/], 1);
								MISC::SET_BIT(&(Local_311[iVar0 /*25*/].f_9), 1);
							}
						}
					}
					else if (Local_237[0 /*9*/].f_1 > 0.5f || bVar20)
					{
						ENTITY::SET_ENTITY_PROOFS(Local_311[iVar0 /*25*/], false, false, false, false, false, false, false, false);
						PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_311[iVar0 /*25*/], 1);
						MISC::CLEAR_BIT(&(Local_311[iVar0 /*25*/].f_9), 1);
					}
					if (Local_311[iVar0 /*25*/].f_5 > 1)
					{
						bVar22 = PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_311[iVar0 /*25*/].f_8);
						__LIB_0__::func_631(Local_311[iVar0 /*25*/], &(Local_311[iVar0 /*25*/].f_17), -1, 0, bVar22, 0, -1082130432, 0, -1, -1, 1, 0);
					}
				}
				else
				{
					func_237(&(Local_311[iVar0 /*25*/]), 0);
				}
			}
			iVar0++;
		}
	}
	if (!Local_310[0 /*25*/].f_2)
	{
		if (Local_309[0 /*25*/].f_5 > 0 || Local_274.f_3 >= 50)
		{
			if (SYSTEM::VDIST2(-579.9283f, -1602.4014f, 34.2005f, Param0) < 2500f)
			{
				STREAMING::REQUEST_MODEL(iLocal_340);
				STREAMING::REQUEST_CLIP_SET("move_ped_strafing");
				if (((STREAMING::HAS_MODEL_LOADED(iLocal_326) && STREAMING::HAS_MODEL_LOADED(iLocal_327)) && STREAMING::HAS_MODEL_LOADED(iLocal_340)) && STREAMING::HAS_CLIP_SET_LOADED("move_ped_strafing"))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_310[0 /*25*/]))
					{
						Local_310[0 /*25*/] = func_320(iLocal_326, -578.6725f, -1606.9213f, 26.0108f, 298.2048f, iLocal_347, 135, 0, joaat("WEAPON_PISTOL"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_310[1 /*25*/]))
					{
						Local_310[1 /*25*/] = func_320(iLocal_327, -593.8203f, -1597.9493f, 26.0108f, 271.5309f, iLocal_347, 135, 0, joaat("WEAPON_PISTOL"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_310[2 /*25*/]))
					{
						Local_310[2 /*25*/] = func_320(iLocal_326, -601.3184f, -1598.0675f, 29.4102f, 264.0741f, iLocal_347, 135, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_310[3 /*25*/]))
					{
						Local_310[3 /*25*/] = func_320(iLocal_327, -584.7054f, -1608.4663f, 26.0108f, 270.8387f, iLocal_347, 135, 0, joaat("WEAPON_PISTOL"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_310[4 /*25*/]))
					{
						Local_310[4 /*25*/] = func_320(iLocal_326, -588.8279f, -1608.2739f, 26.0108f, 284.8407f, iLocal_347, 115, 0, joaat("WEAPON_PUMPSHOTGUN"), 26);
						func_318(&Local_310, "Roof ");
						iVar0 = 0;
						while (iVar0 < Local_310.f_0)
						{
							if (!PED::IS_PED_INJURED(Local_310[iVar0 /*25*/]))
							{
								if (iVar0 == 2)
								{
									PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_310[iVar0 /*25*/], false);
									PED::SET_PED_STRAFE_CLIPSET(Local_310[iVar0 /*25*/], "move_ped_strafing");
								}
								TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_310[iVar0 /*25*/], false);
							}
							iVar0++;
						}
						if (!PED::IS_PED_INJURED(Local_310[4 /*25*/]))
						{
							TASK::TASK_AIM_GUN_AT_COORD(Local_310[4 /*25*/], -567.5737f, -1601.1451f, 27.5852f, -1, false, false);
						}
						iLocal_243 = OBJECT::CREATE_OBJECT(iLocal_340, -588.2625f, -1600.5623f, 26.0109f, true, true, false);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_243, false);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_340);
						Local_237[0 /*9*/].f_3 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
	}
	else
	{
		bVar23 = false;
		bVar24 = false;
		bVar25 = false;
		iVar0 = 0;
		while (iVar0 < Local_310.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_310[iVar0 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_310[iVar0 /*25*/]))
				{
					Var26 = { ENTITY::GET_ENTITY_COORDS(Local_310[iVar0 /*25*/], true) };
					switch (Local_310[iVar0 /*25*/].f_5)
					{
						case 0:
							if (!bVar24)
							{
								bVar23 = (func_314(PLAYER::PLAYER_PED_ID(), Local_274.f_0, Local_275.f_0, -565.84f, -1601.32f, 25.8f, -571.33f, -1600.83f, 29.01f, 3f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -568.24f, -1607.67f, 30.48f, -577.45f, -1606.81f, 25.76f, 16.75f, false, true, 0));
								bVar24 = true;
							}
							if (bVar23)
							{
								if (iVar0 == 0)
								{
									Local_310[iVar0 /*25*/].f_14 = { -577.7428f, -1603.1418f, 26.0108f };
									func_306(Local_310[iVar0 /*25*/], &(Local_310[iVar0 /*25*/].f_4), Local_310[iVar0 /*25*/].f_14, 276.7884f, 2f, 2, 0, 1, 1);
									__LIB_37__::func_208(&(Local_310[iVar0 /*25*/]), 10, 1, 2, 0, 1);
								}
								else if (iVar0 == 1)
								{
									Local_310[iVar0 /*25*/].f_14 = { -592.6339f, -1602.4424f, 26.0108f };
									func_306(Local_310[iVar0 /*25*/], &(Local_310[iVar0 /*25*/].f_4), Local_310[iVar0 /*25*/].f_14, 264.6638f, 2f, 0, 0, 1, 1);
									__LIB_37__::func_208(&(Local_310[iVar0 /*25*/]), 10, 1, 2, 0, 1);
								}
								else if (iVar0 == 2)
								{
									Local_310[iVar0 /*25*/].f_14 = { -601.3184f, -1598.0675f, 29.4102f };
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_310[iVar0 /*25*/], Local_310[iVar0 /*25*/].f_14, 1f, true, false);
									__LIB_37__::func_208(&(Local_310[iVar0 /*25*/]), 10, 0, 2, 1, 1);
								}
								else if (iVar0 == 3)
								{
									Local_310[iVar0 /*25*/].f_14 = { -584.7054f, -1608.4663f, 26.0108f };
									func_306(Local_310[iVar0 /*25*/], &(Local_310[iVar0 /*25*/].f_4), Local_310[iVar0 /*25*/].f_14, 270.8387f, 2f, 2, 0, 1, 1);
									__LIB_37__::func_208(&(Local_310[iVar0 /*25*/]), 10, 1, 2, 0, 1);
								}
								else if (iVar0 == 4)
								{
									Local_310[iVar0 /*25*/].f_14 = { -575.7058f, -1606.347f, 26.0108f };
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_310[iVar0 /*25*/], Local_310[iVar0 /*25*/].f_14, 2f, true, false);
									__LIB_37__::func_208(&(Local_310[iVar0 /*25*/]), 10, 1, 2, 0, 1);
									ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_310[iVar0 /*25*/], true, 0f);
								}
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_310[iVar0 /*25*/], iLocal_346);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_310[iVar0 /*25*/], false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_310[iVar0 /*25*/], 100f, 0);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_310[iVar0 /*25*/], true);
								if (iVar0 == 0 || iVar0 == 4)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_310[iVar0 /*25*/], 51, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_310[iVar0 /*25*/], 50, true);
									PED::SET_COMBAT_FLOAT(Local_310[iVar0 /*25*/], 13, 3f);
								}
								if (iVar0 == 2)
								{
									PED::SET_PED_CAN_RAGDOLL(Local_310[iVar0 /*25*/], false);
									PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_310[iVar0 /*25*/], false);
								}
								iLocal_80 = 0;
								Local_310[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								Local_310[iVar0 /*25*/].f_5++;
							}
							break;
						case 1:
							if ((MISC::GET_GAME_TIMER() - Local_310[iVar0 /*25*/].f_7) > 10000 && (iVar0 != 4 || (iVar0 == 4 && iLocal_319 == 7)))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_310[iVar0 /*25*/], false);
								if (iVar0 == 0)
								{
									Local_310[iVar0 /*25*/].f_7 = 0;
									Local_310[iVar0 /*25*/].f_5++;
								}
							}
							if (iVar0 == 1)
							{
								if (Local_237[0 /*9*/].f_1 > 0f)
								{
									Local_310[iVar0 /*25*/].f_14 = { -591.0416f, -1605.2275f, 26.0108f };
									func_306(Local_310[iVar0 /*25*/], &(Local_310[iVar0 /*25*/].f_4), Local_310[iVar0 /*25*/].f_14, 329.4291f, 2f, 2, 0, 1, 1);
									TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_310[iVar0 /*25*/], false);
									Local_310[iVar0 /*25*/].f_5++;
								}
							}
							else if (iVar0 == 2)
							{
								STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_16");
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -598.54456f, -1604.5233f, 25.770239f, -605.584f, -1604.194f, 31.827965f, 15f, false, true, 0))
								{
									if (!iLocal_80)
									{
										PED::SET_PED_CAN_RAGDOLL(Local_310[iVar0 /*25*/], true);
										iLocal_80 = 1;
									}
								}
								else if (iLocal_80)
								{
									PED::SET_PED_CAN_RAGDOLL(Local_310[iVar0 /*25*/], false);
									iLocal_80 = 0;
								}
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_310[iVar0 /*25*/], PLAYER::PLAYER_PED_ID(), true))
								{
									if ((STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_16") && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -598.54456f, -1604.5233f, 25.770239f, -605.584f, -1604.194f, 31.827965f, 15f, false, true, 0)) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_310[iVar0 /*25*/], true), PED::GET_ANIM_INITIAL_OFFSET_POSITION("misslamar1lam_1_ig_16", "lam_1_ig_16_swat", -594.45f, -1602.85f, 26f, 0f, 0f, 10f, 0f, 2)) < 1.25f)
									{
										Local_310[iVar0 /*25*/].f_8 = PED::CREATE_SYNCHRONIZED_SCENE(-594.45f, -1602.85f, 26f, 0f, 0f, 10f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_310[iVar0 /*25*/], Local_310[iVar0 /*25*/].f_8, "misslamar1lam_1_ig_16", "lam_1_ig_16_swat", 8f, -8f, 5, 0, 1000f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_310[iVar0 /*25*/], true);
									}
									else
									{
										TASK::CLEAR_PED_TASKS(Local_310[iVar0 /*25*/]);
										PED::SET_PED_CAN_RAGDOLL(Local_310[iVar0 /*25*/], true);
										PED::SET_PED_TO_RAGDOLL_WITH_FALL(Local_310[iVar0 /*25*/], 10000, 20000, 0, __LIB_3__::func_80(0f, 0f, -90f), 26f, 0f, 0f, 0f, 0f, 0f, 0f);
										ENTITY::APPLY_FORCE_TO_ENTITY(Local_310[iVar0 /*25*/], 1, 2f, 0f, 0.25f, 0f, 0f, 0f, PED::GET_PED_RAGDOLL_BONE_INDEX(Local_310[iVar0 /*25*/], 11), false, true, true, false, true);
									}
									if (HUD::DOES_BLIP_EXIST(Local_310[iVar0 /*25*/].f_1))
									{
										HUD::REMOVE_BLIP(&(Local_310[iVar0 /*25*/].f_1));
									}
									PED::SET_PED_CAN_BE_TARGETTED(Local_310[iVar0 /*25*/], false);
									Local_310[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
									Local_310[iVar0 /*25*/].f_5++;
								}
							}
							break;
						case 2:
							if (iVar0 == 2)
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_310[iVar0 /*25*/].f_8))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_310[iVar0 /*25*/].f_8) > 0.945f)
									{
										PED::SET_PED_CAN_RAGDOLL(Local_310[iVar0 /*25*/], true);
										PED::SET_PED_TO_RAGDOLL_WITH_FALL(Local_310[iVar0 /*25*/], 10000, 20000, 0, __LIB_3__::func_80(0f, 0f, -90f), 26f, 0f, 0f, 0f, 0f, 0f, 0f);
										ENTITY::SET_ENTITY_HEALTH(Local_310[iVar0 /*25*/], 0, 0);
										Local_310[iVar0 /*25*/].f_7 = 0;
										Local_310[iVar0 /*25*/].f_5++;
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_310[iVar0 /*25*/].f_7) > 3000)
								{
									ENTITY::SET_ENTITY_HEALTH(Local_310[iVar0 /*25*/], 0, 0);
									Local_310[iVar0 /*25*/].f_7 = 0;
									Local_310[iVar0 /*25*/].f_5++;
								}
							}
							break;
					}
					if (iVar0 == 2)
					{
						Var27 = { ENTITY::GET_ENTITY_COORDS(Local_310[iVar0 /*25*/], true) };
						if (Var27.f_2 < 28f)
						{
							PED::APPLY_DAMAGE_TO_PED(Local_310[iVar0 /*25*/], 200, true, 0);
						}
					}
					if (iVar0 != 2)
					{
						if (!BitTest(Local_310[iVar0 /*25*/].f_9, 2))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
							{
								if (!__LIB_0__::func_490(Local_310[iVar0 /*25*/].f_14, Var26, 1f, 0))
								{
									if (SYSTEM::VDIST2(Var26, Local_310[iVar0 /*25*/].f_14) < SYSTEM::VDIST2(Var2, Local_310[iVar0 /*25*/].f_14) && SYSTEM::VDIST2(Var26, Local_310[iVar0 /*25*/].f_14) < SYSTEM::VDIST2(Var3, Local_310[iVar0 /*25*/].f_14))
									{
										PED::SET_PED_COMBAT_MOVEMENT(Local_310[iVar0 /*25*/], 1);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_310[iVar0 /*25*/], Local_310[iVar0 /*25*/].f_14, 2f, true, false);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_310[iVar0 /*25*/], 51, true);
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_310[iVar0 /*25*/], false);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_310[iVar0 /*25*/], 100f, 0);
										MISC::SET_BIT(&(Local_310[iVar0 /*25*/].f_9), 2);
									}
								}
							}
						}
						else if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_274.f_6) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_275.f_6))
						{
							MISC::CLEAR_BIT(&(Local_310[iVar0 /*25*/].f_9), 2);
						}
					}
					bVar25 = false;
					if (FIRE::IS_EXPLOSION_IN_AREA(-1, Var26 - Vector(5f, 5f, 5f), Var26 + Vector(5f, 5f, 5f)) && !FIRE::IS_EXPLOSION_IN_AREA(23, Var26 - Vector(5f, 5f, 5f), Var26 + Vector(5f, 5f, 5f)))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_200) > 1000)
						{
							bVar25 = true;
						}
					}
					if (!BitTest(Local_310[iVar0 /*25*/].f_9, 1))
					{
						if (Local_237[0 /*9*/].f_1 < 0.5f)
						{
							if (!bVar25)
							{
								ENTITY::SET_ENTITY_PROOFS(Local_310[iVar0 /*25*/], false, false, true, false, false, false, false, false);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_310[iVar0 /*25*/], 32);
								MISC::SET_BIT(&(Local_310[iVar0 /*25*/].f_9), 1);
							}
						}
					}
					else if (Local_237[0 /*9*/].f_1 >= 0.5f || bVar25)
					{
						ENTITY::SET_ENTITY_PROOFS(Local_310[iVar0 /*25*/], false, false, false, false, false, false, false, false);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_310[iVar0 /*25*/], 0);
						MISC::CLEAR_BIT(&(Local_310[iVar0 /*25*/].f_9), 1);
						if (iVar0 == 1 || iVar0 == 3)
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_310[iVar0 /*25*/], 51, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_310[iVar0 /*25*/], 50, true);
							PED::SET_COMBAT_FLOAT(Local_310[iVar0 /*25*/], 13, 3f);
						}
					}
					if (Local_310[iVar0 /*25*/].f_5 > 0)
					{
						__LIB_0__::func_631(Local_310[iVar0 /*25*/], &(Local_310[iVar0 /*25*/].f_17), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
					}
				}
				else
				{
					func_237(&(Local_310[iVar0 /*25*/]), 0);
					if (iVar0 == 2)
					{
						STREAMING::REMOVE_CLIP_SET("move_ped_strafing");
					}
				}
			}
			iVar0++;
		}
		if (Local_237[0 /*9*/].f_1 == 0f)
		{
			bVar28 = MISC::IS_BULLET_IN_ANGLED_AREA(-588.9023f, -1600.4879f, 26.017223f, -588.2918f, -1600.5177f, 28.750704f, 2.75f, false);
			bVar29 = MISC::IS_BULLET_IN_ANGLED_AREA(-588.9023f, -1600.4879f, 26.017223f, -588.2918f, -1600.5177f, 27.50704f, 1.5f, true);
			if ((bVar29 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -582.8576f, -1605.4193f, 25.760828f, -568.18585f, -1607.0043f, 31.547653f, 17.5f, false, true, 0)) || ((bVar28 && !bVar29) && (MISC::GET_GAME_TIMER() - Local_237[0 /*9*/].f_3) > 4000))
			{
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_243, 0.5f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(iLocal_243, true), 1, true, joaat("WEAPON_PUMPSHOTGUN"), PLAYER::PLAYER_PED_ID(), false, true, -1f);
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_243, PLAYER::PLAYER_PED_ID(), true))
			{
				FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iLocal_243, true), 23, 0.1f, true, false, 0.1f, false);
				AUDIO::PLAY_SOUND_FROM_COORD(iLocal_161, "LAMAR1_WAREHOUSE_FIRE", -591.8f, -1602.6f, 27.3f, 0, false, 0, false);
				Local_237[0 /*9*/].f_1 = 0.3f;
				Local_238[0 /*9*/].f_1 = 0.1f;
				iLocal_200 = MISC::GET_GAME_TIMER();
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1f, 2f, 3);
				if (!PED::IS_PED_INJURED(Local_310[1 /*25*/]))
				{
					PED::APPLY_DAMAGE_TO_PED(Local_310[1 /*25*/], 500, true, 0);
				}
			}
		}
	}
	if (!Local_312[0 /*25*/].f_2)
	{
		if (Local_310[0 /*25*/].f_5 > 0)
		{
			STREAMING::REQUEST_PTFX_ASSET();
			if (SYSTEM::VDIST2(-605.9154f, -1628.3444f, 26.0109f, Param0) < 10000f)
			{
				if (((STREAMING::HAS_MODEL_LOADED(iLocal_326) && STREAMING::HAS_MODEL_LOADED(iLocal_327)) && STREAMING::HAS_PTFX_ASSET_LOADED()) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\LAMAR1_01", false, -1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_312[0 /*25*/]))
					{
						Local_312[0 /*25*/] = func_320(iLocal_326, -605.9154f, -1628.3444f, 26.0109f, 355.7177f, iLocal_347, 135, 0, joaat("WEAPON_ASSAULTRIFLE"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_312[1 /*25*/]))
					{
						Local_312[1 /*25*/] = func_320(iLocal_327, -604.5666f, -1630.3938f, 26.0109f, 359.9206f, iLocal_347, 135, 0, joaat("WEAPON_PISTOL"), 26);
						iVar0 = 0;
						while (iVar0 < Local_312.f_0)
						{
							if (!PED::IS_PED_INJURED(Local_312[iVar0 /*25*/]))
							{
								ENTITY::SET_ENTITY_INVINCIBLE(Local_312[iVar0 /*25*/], true);
								PED::SET_PED_CAN_RAGDOLL(Local_312[iVar0 /*25*/], false);
							}
							iVar0++;
						}
						func_318(&Local_312, "Breach 2 ");
					}
				}
			}
		}
	}
	else
	{
		bVar30 = false;
		if (Local_312[0 /*25*/].f_5 == 0)
		{
			if (func_285(&Local_311) && func_285(&Local_310))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -605.6501f, -1626.1594f, 26.010805f, -604.42566f, -1612.3586f, 28.647781f, 3.5f, false, true, 0) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -605.6109f, -1626.2156f, 25.76258f, -605.3935f, -1623.6409f, 28.760939f, 4f))
				{
					bVar30 = true;
				}
			}
		}
		iVar0 = 0;
		while (iVar0 < Local_312.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_312[iVar0 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_312[iVar0 /*25*/]))
				{
					if (Local_312[iVar0 /*25*/].f_5 == 0)
					{
						if (iVar0 == 0)
						{
							if ((MISC::GET_GAME_TIMER() - Local_312[0 /*25*/].f_7) > 1000)
							{
								OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_rc_door1"), -604.3f, -1626.4f, 27.2f, true, 0f, false);
								OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_rc_door1"), -606.9f, -1626.2f, 27.2f, true, 0f, false);
								Local_312[0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
							}
						}
						if (bVar30)
						{
							if (iVar0 == 0)
							{
								Local_312[iVar0 /*25*/].f_14 = { -606.2178f, -1621.538f, 26.0108f };
								OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_rc_door1"), -604.3f, -1626.4f, 27.2f, false, 0f, false);
								OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_rc_door1"), -606.9f, -1626.2f, 27.2f, false, 0f, false);
								iVar31 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-604.3f, -1626.4f, 27.2f, 2f, joaat("v_ilev_rc_door1"), false, false, true);
								iVar32 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-606.9f, -1626.2f, 27.2f, 2f, joaat("v_ilev_rc_door1"), false, false, true);
								ENTITY::APPLY_FORCE_TO_ENTITY(iVar31, 1, 0f, 16f, 0f, 1.3077f, 0f, 0f, 0, false, true, true, false, true);
								ENTITY::APPLY_FORCE_TO_ENTITY(iVar32, 1, 0f, 16f, 0f, 1.3077f, 0f, 0f, 0, false, true, true, false, true);
								MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(-605.65f, -1627.2021f, 27.2032f, -605.5878f, -1625.3854f, 27.0974f, 1, true, joaat("WEAPON_PUMPSHOTGUN"), 0, false, true, -1f);
								MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(-605.65f, -1627.2021f, 27.6032f, -605.5878f, -1625.3854f, 27.6974f, 1, true, joaat("WEAPON_PUMPSHOTGUN"), 0, false, true, -1f);
								GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(sLocal_211, -605.65f, -1626.35f, 27.24f, 0f, 0f, -5.23f, 1f, false, false, false);
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "LAMAR1_BustDoorOpen1", -605.65f, -1626.35f, 27.24f, 0, false, 0, false);
								__LIB_0__::func_640(Local_312[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1f, 2f, 3);
								__LIB_42__::func_534(103, 0);
								__LIB_42__::func_534(104, 0);
							}
							else if (iVar0 == 1)
							{
								Local_312[iVar0 /*25*/].f_14 = { -604.7348f, -1622.4652f, 26.0108f };
							}
							ENTITY::SET_ENTITY_INVINCIBLE(Local_312[iVar0 /*25*/], false);
							PED::SET_PED_CAN_RAGDOLL(Local_312[iVar0 /*25*/], true);
							PED::SET_PED_CAN_BE_TARGETTED(Local_312[iVar0 /*25*/], true);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_312[iVar0 /*25*/], iLocal_346);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_312[iVar0 /*25*/], true);
							__LIB_37__::func_208(&(Local_312[iVar0 /*25*/]), 10, 1, 2, 0, 1);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_312[iVar0 /*25*/], Local_312[iVar0 /*25*/].f_14, 2f, true, false);
							func_312(Local_312[iVar0 /*25*/], Local_312[iVar0 /*25*/].f_14, 2f, 0f, 0f, 0f, PLAYER::PLAYER_PED_ID(), 0, 0.5f, 1f, 1, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_326);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_327);
							iVar4 = 1;
							Local_312[iVar0 /*25*/].f_7 = 0;
							Local_312[iVar0 /*25*/].f_5++;
						}
					}
					else
					{
						__LIB_0__::func_631(Local_312[iVar0 /*25*/], &(Local_312[iVar0 /*25*/].f_17), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
						if (Local_312[iVar0 /*25*/].f_5 == 1)
						{
							if (Local_312[iVar0 /*25*/].f_7 == 0)
							{
								if (SYSTEM::VDIST2(Local_312[iVar0 /*25*/].f_14, ENTITY::GET_ENTITY_COORDS(Local_312[iVar0 /*25*/], true)) < 9f)
								{
									Local_312[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								}
							}
							else if ((MISC::GET_GAME_TIMER() - Local_312[iVar0 /*25*/].f_7) > 250)
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_312[iVar0 /*25*/], 100f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_312[iVar0 /*25*/], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_312[iVar0 /*25*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_312[iVar0 /*25*/], 50, true);
								PED::SET_COMBAT_FLOAT(Local_312[iVar0 /*25*/], 13, 3f);
								if (iVar0 == 1)
								{
									__LIB_0__::func_640(Local_312[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
								}
								Local_312[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								Local_312[iVar0 /*25*/].f_5++;
							}
						}
						else if (Local_312[iVar0 /*25*/].f_5 == 2)
						{
							if ((MISC::GET_GAME_TIMER() - Local_312[iVar0 /*25*/].f_7) > 4000)
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_312[iVar0 /*25*/], false);
								Local_312[iVar0 /*25*/].f_5++;
							}
						}
					}
				}
				else
				{
					func_237(&(Local_312[iVar0 /*25*/]), 0);
					STREAMING::REMOVE_PTFX_ASSET();
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\LAMAR1_01");
				}
			}
			iVar0++;
		}
	}
	if (!Local_314[0 /*25*/].f_2)
	{
		if (Local_312[0 /*25*/].f_5 > 0)
		{
			STREAMING::REQUEST_MODEL(iLocal_328);
			STREAMING::REQUEST_MODEL(iLocal_325);
			VEHICLE::REQUEST_VEHICLE_RECORDING(10, sLocal_208);
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_325) && STREAMING::HAS_MODEL_LOADED(iLocal_328)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, sLocal_208))
			{
				iLocal_261 = VEHICLE::CREATE_VEHICLE(iLocal_328, -531.7855f, -1650.4025f, 46.0368f, 0f, true, true, false);
				VEHICLE::SET_VEHICLE_LIVERY(iLocal_261, 0);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_261, true, true, false);
				VEHICLE::SET_VEHICLE_SIREN(iLocal_261, true);
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_261, 2);
				ENTITY::SET_ENTITY_COLLISION(iLocal_261, false, false);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_261);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_261, 10, sLocal_208, true);
				ENTITY::SET_ENTITY_ALWAYS_PRERENDER(iLocal_261, true);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_261, 0f);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_328);
				fLocal_133 = 1f;
				iLocal_79 = 0;
				iLocal_156 = 0;
				Local_314[0 /*25*/] = func_320(iLocal_325, -531.7855f, -1650.4025f, 47.0368f, 0f, iLocal_347, 200, 0, joaat("WEAPON_UNARMED"), 26);
				PED::SET_PED_INTO_VEHICLE(Local_314[0 /*25*/], iLocal_261, -1);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_314[0 /*25*/], true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_314[0 /*25*/], true);
				Local_314[1 /*25*/] = func_320(iLocal_325, -531.7855f, -1650.4025f, 48.0368f, 0f, iLocal_347, 200, 0, joaat("WEAPON_CARBINERIFLE"), 26);
				PED::SET_PED_INTO_VEHICLE(Local_314[1 /*25*/], iLocal_261, 2);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_314[1 /*25*/], true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_314[1 /*25*/], true);
				Local_314[2 /*25*/] = func_320(iLocal_325, -531.7855f, -1650.4025f, 49.0368f, 0f, iLocal_347, 200, 0, joaat("WEAPON_CARBINERIFLE"), 26);
				PED::SET_PED_INTO_VEHICLE(Local_314[2 /*25*/], iLocal_261, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_314[2 /*25*/], true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_314[2 /*25*/], true);
				func_318(&Local_314, "Chopper-");
			}
		}
	}
	else
	{
		bVar33 = false;
		iVar0 = 0;
		while (iVar0 < Local_314.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_314[iVar0 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_314[iVar0 /*25*/]))
				{
					switch (Local_314[iVar0 /*25*/].f_5)
					{
						case 0:
							if (iVar0 == 0)
							{
								bVar33 = ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -592.51f, -1631.69f, 25.98f, -592.32f, -1629.18f, 28.23f, 1f, false, true, 1) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_274.f_0, -592.51f, -1631.69f, 25.98f, -592.32f, -1629.18f, 28.23f, 1f, false, true, 1)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_275.f_0, -592.51f, -1631.69f, 25.98f, -592.32f, -1629.18f, 28.23f, 1f, false, true, 1));
							}
							if (bVar33)
							{
								ENTITY::SET_ENTITY_INVINCIBLE(Local_314[iVar0 /*25*/], false);
								PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_314[iVar0 /*25*/], false);
								if (iVar0 == 0)
								{
									if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_261, false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_261)) && !PED::IS_PED_INJURED(Local_274.f_0))
									{
										__LIB_17__::func_84(&iLocal_261, 4500f);
										VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_261, true);
										ENTITY::SET_ENTITY_COLLISION(iLocal_261, true, false);
										VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_261, true, false);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_314[iVar0 /*25*/], iLocal_346);
										TASK::TASK_VEHICLE_AIM_AT_PED(Local_314[iVar0 /*25*/], Local_274.f_0);
										AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_261, "LAMAR_1_HELI", 0f);
										Local_314[iVar0 /*25*/].f_1 = __LIB_0__::func_639(iLocal_261, 1, 0);
										Local_314[iVar0 /*25*/].f_5++;
									}
								}
								else
								{
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_314[iVar0 /*25*/], iLocal_346);
									func_131(&(Local_314[iVar0 /*25*/]), 1, 1, 2, 1, 0, 0f, 0f, 0f, 0f);
									WEAPON::SET_CURRENT_PED_WEAPON(Local_314[iVar0 /*25*/], joaat("WEAPON_CARBINERIFLE"), true);
									Local_314[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
									Local_314[iVar0 /*25*/].f_5++;
								}
							}
							break;
						case 1:
							if (iVar0 == 1)
							{
								if ((MISC::GET_GAME_TIMER() - Local_314[iVar0 /*25*/].f_7) > 2000 && TASK::GET_SCRIPT_TASK_STATUS(Local_314[iVar0 /*25*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_314[iVar0 /*25*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 100, false, joaat("FIRING_PATTERN_FULL_AUTO"));
									PED::SET_PED_SHOOT_RATE(Local_314[iVar0 /*25*/], 80);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_314[iVar0 /*25*/], true);
								}
							}
							else if (iVar0 == 2)
							{
								if (PED::IS_PED_INJURED(Local_314[1 /*25*/]))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_261, false))
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_261, 2, false) != Local_314[iVar0 /*25*/])
										{
											if ((PED::IS_PED_IN_VEHICLE(Local_314[iVar0 /*25*/], iLocal_261, false) && !PED::IS_PED_RAGDOLL(Local_314[iVar0 /*25*/])) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_261, 2, false))
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(Local_314[iVar0 /*25*/], joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_314[iVar0 /*25*/], joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT")) != 0)
												{
													if ((MISC::GET_GAME_TIMER() - Local_314[iVar0 /*25*/].f_7) > 250)
													{
														TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_314[iVar0 /*25*/], iLocal_261, false);
														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_314[iVar0 /*25*/], true);
														Local_314[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
													}
												}
											}
										}
										else
										{
											Local_314[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
											Local_314[iVar0 /*25*/].f_5++;
										}
									}
								}
							}
							break;
						case 2:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_261, false))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_314[iVar0 /*25*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_314[iVar0 /*25*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 100, false, joaat("FIRING_PATTERN_FULL_AUTO"));
									PED::SET_PED_SHOOT_RATE(Local_314[iVar0 /*25*/], 80);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_314[iVar0 /*25*/], true);
								}
							}
							break;
					}
				}
				else
				{
					func_237(&(Local_314[iVar0 /*25*/]), 0);
				}
			}
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_261, false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_261, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_261))
				{
					if (Local_314[0 /*25*/].f_5 > 0)
					{
						fVar34 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_261);
						if (!bLocal_71 && !PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
						{
							if (fVar34 < 16000f)
							{
								func_317(&fLocal_133, 1f, 0.5f, 1);
							}
							if (fVar34 > 22000f)
							{
								func_317(&fLocal_133, -1f, 0.5f, 1);
							}
						}
						else
						{
							if (fVar34 < 33000f)
							{
								func_317(&fLocal_133, 1f, 0.5f, 1);
							}
							if (fVar34 > 38000f)
							{
								func_317(&fLocal_133, -1f, 0.5f, 1);
							}
						}
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_261, fLocal_133);
					}
					if (PED::IS_PED_INJURED(Local_314[1 /*25*/]) && PED::IS_PED_INJURED(Local_314[2 /*25*/]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_261);
						if (!PED::IS_PED_INJURED(Local_314[0 /*25*/]))
						{
							TASK::TASK_HELI_MISSION(Local_314[0 /*25*/], iLocal_261, 0, 0, -165.91f, -1771f, 200f, 4, 30f, 5f, 0f, 200, 100, -1f, 0);
							PED::SET_PED_KEEP_TASK(Local_314[0 /*25*/], true);
						}
						if (HUD::DOES_BLIP_EXIST(Local_314[0 /*25*/].f_1))
						{
							HUD::REMOVE_BLIP(&(Local_314[0 /*25*/].f_1));
						}
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
					}
				}
				else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_261, true), Param0) > 40000f)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_261, 0f);
					func_237(&(Local_314[0 /*25*/]), 0);
					__LIB_37__::func_206(&iLocal_261, 0);
				}
			}
			else if (!PED::IS_PED_INJURED(Local_314[0 /*25*/]))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_314[0 /*25*/], 0, 0);
			}
			if (!iLocal_79)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_261, false))
				{
					if (iLocal_156 <= 3)
					{
						if ((ENTITY::GET_ENTITY_HEALTH(iLocal_261) < 800 || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_261) < 800f) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_261) < 800f)
						{
							iLocal_156 = 10;
							iLocal_157 = MISC::GET_GAME_TIMER();
						}
					}
					if (((iLocal_156 > 3 && (MISC::GET_GAME_TIMER() - iLocal_157) > 400) || PED::IS_PED_INJURED(Local_314[0 /*25*/])) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_261, 0f, 5f, -5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_261, 0f, -5f, 5f), 8f))
					{
						if (!PED::IS_PED_INJURED(Local_314[0 /*25*/]))
						{
							ENTITY::SET_ENTITY_HEALTH(Local_314[0 /*25*/], 0, 0);
						}
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_261))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_261);
						}
						ENTITY::SET_ENTITY_HEALTH(iLocal_261, 1000, 0);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_261, 1000f);
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_261, true);
						ENTITY::SET_ENTITY_PROOFS(iLocal_261, true, true, true, true, true, false, false, false);
						VEHICLE::SET_VEHICLE_OUT_OF_CONTROL(iLocal_261, true, true);
						if (iLocal_156 > 3)
						{
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_261, -50f);
						}
						else
						{
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_261, 200f);
						}
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
						iLocal_79 = 1;
						iLocal_157 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_157) < 2000)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_261, false))
				{
					if (iLocal_156 > 3)
					{
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_261, -50f);
					}
					else
					{
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_261, 200f);
					}
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_261, 0, 20f, 0f, 9f, 0f, 0f, 0f, 0, false, false, true, false, true);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_261, 0, 1.5f, 0f, 0f, 0f, -5f, 0f, 0, true, true, true, false, true);
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_261, false))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_261, false);
					ENTITY::SET_ENTITY_PROOFS(iLocal_261, false, false, false, false, false, false, false, false);
					VEHICLE::SET_VEHICLE_OUT_OF_CONTROL(iLocal_261, true, true);
				}
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_261, 0f);
				func_237(&(Local_314[0 /*25*/]), 0);
				__LIB_37__::func_206(&iLocal_261, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_261))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_261, 0f);
			__LIB_37__::func_206(&iLocal_261, 0);
		}
	}
	if (!Local_315[0 /*25*/].f_2)
	{
		if (Local_312[0 /*25*/].f_5 > 0)
		{
			STREAMING::REQUEST_MODEL(iLocal_328);
			STREAMING::REQUEST_MODEL(iLocal_325);
			VEHICLE::REQUEST_VEHICLE_RECORDING(11, sLocal_208);
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_325) && STREAMING::HAS_MODEL_LOADED(iLocal_328)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, sLocal_208))
			{
				iLocal_262 = VEHICLE::CREATE_VEHICLE(iLocal_328, -531.7855f, -1650.4025f, 46.0368f, 0f, true, true, false);
				VEHICLE::SET_VEHICLE_LIVERY(iLocal_262, 0);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_262, true, true, false);
				VEHICLE::SET_VEHICLE_SIREN(iLocal_262, true);
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_262, 2);
				ENTITY::SET_ENTITY_COLLISION(iLocal_262, false, false);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_262);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_262, 11, sLocal_208, true);
				ENTITY::SET_ENTITY_ALWAYS_PRERENDER(iLocal_262, true);
				ENTITY::SET_ENTITY_COLLISION(iLocal_262, false, false);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_262, 0f);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_262, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_328);
				Local_315[0 /*25*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_262, 6, iLocal_325, -1, true, true);
				Local_315[0 /*25*/].f_5 = 0;
				Local_315[0 /*25*/].f_2 = 1;
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_315.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_315[iVar0 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_315[iVar0 /*25*/]))
				{
					switch (Local_315[iVar0 /*25*/].f_5)
					{
						case 0:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_262, false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_262))
							{
								if (bLocal_71 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -593.1262f, -1643.0626f, 23f, -592.60345f, -1642.0844f, 26.9577f, 1.5f, false, true, 0))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -592.95844f, -1642.8015f, 23.4562f, 3f, 3f, 4.5f, false, true, 0))
									{
										__LIB_17__::func_84(&iLocal_262, 6500f);
									}
									else
									{
										__LIB_17__::func_84(&iLocal_262, 0f);
									}
									VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_262, true);
									VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_262, true, false);
									ENTITY::SET_ENTITY_COLLISION(iLocal_262, true, false);
									TASK::TASK_VEHICLE_AIM_AT_PED(Local_315[iVar0 /*25*/], PLAYER::PLAYER_PED_ID());
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_315[iVar0 /*25*/], true);
									AUDIO::BLIP_SIREN(iLocal_262);
									Local_315[0 /*25*/].f_1 = __LIB_0__::func_639(iLocal_262, 1, 0);
									HUD::SET_BLIP_SPRITE(Local_315[0 /*25*/].f_1, 15);
									fLocal_134 = 1f;
									Local_315[iVar0 /*25*/].f_7 = 0;
									Local_315[iVar0 /*25*/].f_5++;
								}
							}
							break;
						case 1:
							if (iVar0 == 0)
							{
								if (!iLocal_132[3] && !__LIB_13__::func_755(&Local_276, 1))
								{
									if (Local_288[6 /*10*/] != Local_315[iVar0 /*25*/])
									{
										__LIB_0__::func_222(&Local_288, 6, Local_315[iVar0 /*25*/], "Lam1Swat5", 0, 1);
									}
									else if (bLocal_71)
									{
										if (SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(Local_315[iVar0 /*25*/], true)) < 6400f)
										{
											if (Local_315[iVar0 /*25*/].f_7 == 0)
											{
												if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_HELIC", 7, 0, 0, 0))
												{
													Local_315[iVar0 /*25*/].f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000));
												}
											}
											else if ((MISC::GET_GAME_TIMER() - Local_315[iVar0 /*25*/].f_7) > 8000)
											{
												if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_HELIC", 7, 0, 0, 0))
												{
													iLocal_132[3] = 1;
												}
											}
										}
									}
								}
							}
							break;
					}
				}
				else
				{
					func_237(&(Local_315[iVar0 /*25*/]), 0);
					if (Local_288[6 /*10*/] == Local_315[iVar0 /*25*/])
					{
						__LIB_0__::func_221(&Local_288, 6);
					}
				}
			}
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_262, false))
		{
			if (iLocal_319 == 7)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_262))
				{
					if (Local_315[0 /*25*/].f_5 > 0)
					{
						fVar35 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_262);
						fVar36 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(11, sLocal_208);
						if (fVar35 < 15500f)
						{
							func_317(&fLocal_134, 1f, 0.5f, 1);
						}
						else if (fVar35 > (fVar36 - 3000f))
						{
							func_317(&fLocal_134, -1f, 0.5f, 1);
						}
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_262, fLocal_134);
					}
					if (((PED::IS_PED_INJURED(Local_315[0 /*25*/]) || ENTITY::GET_ENTITY_HEALTH(iLocal_262) < 200) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_262) < 200f) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_262) < 200f)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_262);
						VEHICLE::SET_VEHICLE_OUT_OF_CONTROL(iLocal_262, true, true);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_262, false);
					}
				}
				else if (!PED::IS_PED_INJURED(Local_315[0 /*25*/]))
				{
					PED::APPLY_DAMAGE_TO_PED(Local_315[0 /*25*/], 0, true, 0);
					VEHICLE::SET_VEHICLE_OUT_OF_CONTROL(iLocal_262, true, true);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_262, false);
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_262, false))
		{
			if (!PED::IS_PED_INJURED(Local_315[0 /*25*/]))
			{
				PED::APPLY_DAMAGE_TO_PED(Local_315[0 /*25*/], 0, true, 0);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_262))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_262);
				}
				VEHICLE::SET_VEHICLE_OUT_OF_CONTROL(iLocal_262, true, true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_262, false);
			}
		}
	}
	if (Local_288[3 /*10*/].f_7)
	{
		if (PED::IS_PED_INJURED(Local_288[3 /*10*/]))
		{
			__LIB_0__::func_221(&Local_288, 3);
		}
	}
	if (Local_288[4 /*10*/].f_7)
	{
		if (PED::IS_PED_INJURED(Local_288[4 /*10*/]))
		{
			__LIB_0__::func_221(&Local_288, 4);
		}
	}
	if (Local_288[8 /*10*/].f_7)
	{
		if (PED::IS_PED_INJURED(Local_288[8 /*10*/]))
		{
			__LIB_0__::func_221(&Local_288, 8);
		}
	}
	if (iLocal_132[4])
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_155) > 0 || iVar4)
		{
			iVar37 = -1;
			iVar38 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (iVar38 == 0)
			{
				if (Local_288[3 /*10*/].f_7)
				{
					iVar37 = 3;
				}
				else if (Local_288[4 /*10*/].f_7)
				{
					iVar37 = 4;
				}
				else if (Local_288[8 /*10*/].f_7)
				{
					iVar37 = 8;
				}
			}
			else if (iVar38 == 1)
			{
				if (Local_288[4 /*10*/].f_7)
				{
					iVar37 = 4;
				}
				else if (Local_288[8 /*10*/].f_7)
				{
					iVar37 = 8;
				}
				else if (Local_288[3 /*10*/].f_7)
				{
					iVar37 = 3;
				}
			}
			else if (iVar38 == 2)
			{
				if (Local_288[8 /*10*/].f_7)
				{
					iVar37 = 8;
				}
				else if (Local_288[3 /*10*/].f_7)
				{
					iVar37 = 3;
				}
				else if (Local_288[4 /*10*/].f_7)
				{
					iVar37 = 4;
				}
			}
			if (iVar37 != -1)
			{
				if (!PED::IS_PED_INJURED(Local_288[iVar37 /*10*/]))
				{
					if ((PED::IS_PED_IN_COMBAT(Local_288[iVar37 /*10*/], 0) || PED::IS_PED_SHOOTING(Local_288[iVar37 /*10*/])) || iVar4)
					{
						iLocal_155 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 13000));
					}
				}
			}
		}
	}
	else if (iLocal_319 == 7)
	{
		iLocal_132[4] = 1;
	}
}

void func_312(int iParam0, struct<3> Param1, float fParam2, struct<3> Param3, int iParam4, bool bParam5, float fParam6, float fParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11)//Position - 0x38DD7
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (ENTITY::IS_ENTITY_DEAD(iParam4, false))
		{
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Param1, Param3, fParam2, bParam5, fParam6, fParam7, bParam8, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
			if (bParam10)
			{
				TASK::TASK_SHOOT_AT_COORD(0, Param3, -1, iParam11);
			}
			else
			{
				TASK::TASK_AIM_GUN_AT_COORD(0, Param3, -1, false, false);
			}
		}
		else
		{
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Param1, iParam4, fParam2, bParam5, fParam6, fParam7, bParam8, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
			if (bParam10)
			{
				TASK::TASK_SHOOT_AT_ENTITY(0, iParam4, -1, iParam11);
			}
			else
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(0, iParam4, -1, false);
			}
		}
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, bParam9);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

int func_314(int iParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param4, float fParam5)//Position - 0x38EBD
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Param3, Param4, fParam5, false, true, 1))
		{
			return 1;
		}
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, Param3, Param4, fParam5, false, true, 1))
		{
			return 1;
		}
	}
	if (!PED::IS_PED_INJURED(iParam2))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam2, Param3, Param4, fParam5, false, true, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_317(float fParam0, float fParam1, float fParam2, bool bParam3)//Position - 0x39153
{
	float fVar0;
	if (*fParam0 != fParam1)
	{
		fVar0 = fParam2;
		if (bParam3)
		{
			fVar0 = (0f + (fParam2 * SYSTEM::TIMESTEP()));
		}
		if ((*fParam0 - fParam1) > fVar0)
		{
			*fParam0 = (*fParam0 - fVar0);
		}
		else if ((*fParam0 - fParam1) < -fVar0)
		{
			*fParam0 = (*fParam0 + fVar0);
		}
		else
		{
			*fParam0 = fParam1;
		}
	}
}

void func_318(int iParam0, char* sParam1)//Position - 0x391AE
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*25*/]))
		{
			TASK::TASK_STAND_STILL((*iParam0)[iVar0 /*25*/], -1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam0)[iVar0 /*25*/], true);
			__LIB_0__::func_609((*iParam0)[iVar0 /*25*/], 0);
			(iParam0[iVar0 /*25*/])->f_2 = 1;
			(iParam0[iVar0 /*25*/])->f_5 = 0;
			(iParam0[iVar0 /*25*/])->f_7 = 0;
			(iParam0[iVar0 /*25*/])->f_9 = 0;
			sParam1 = sParam1;
		}
		iVar0++;
	}
}

int func_320(int iParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x392BF
{
	int iVar0;
	iVar0 = PED::CREATE_PED(iParam7, iParam0, Param1, fParam2, true, true);
	WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam6, -1, true, true);
	WEAPON::SET_PED_INFINITE_AMMO(iVar0, true, iParam6);
	PED::SET_PED_MAX_HEALTH(iVar0, iParam4);
	ENTITY::SET_ENTITY_HEALTH(iVar0, iParam4, 0);
	PED::ADD_ARMOUR_TO_PED(iVar0, -PED::GET_PED_ARMOUR(iVar0));
	PED::ADD_ARMOUR_TO_PED(iVar0, iParam5);
	PED::SET_PED_DIES_WHEN_INJURED(iVar0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam3);
	PED::SET_PED_AS_ENEMY(iVar0, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iVar0, 1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 118, false);
	PED::SET_PED_CONFIG_FLAG(iVar0, 208, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 188, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 29, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 12, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 14, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 9, false);
	PED::SET_PED_MONEY(iVar0, 0);
	iLocal_204 = MISC::GET_GAME_TIMER() + 500;
	return iVar0;
}

void func_321(int iParam0)//Position - 0x39382
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		(iParam0[iVar0 /*25*/])->f_2 = 1;
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*25*/]))
		{
			ENTITY::SET_ENTITY_HEALTH((*iParam0)[iVar0 /*25*/], 0, 0);
		}
		iVar0++;
	}
}

int func_322()//Position - 0x393C4
{
	if (!bLocal_81 || iLocal_97)
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), false))
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), 100, false, true);
		}
		if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), joaat("COMPONENT_AT_AR_FLSH")))
		{
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), joaat("COMPONENT_AT_AR_FLSH"));
		}
		iLocal_97 = 0;
	}
	return 1;
}

int func_323(bool bParam0, bool bParam1, bool bParam2)//Position - 0x39429
{
	if (func_324(bParam1))
	{
		STREAMING::REQUEST_ANIM_DICT(sLocal_217);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_217))
		{
			if (!bParam1)
			{
				if (!PED::IS_PED_INJURED(iLocal_254) && (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_254, sLocal_217, "dead_idle", 3) || bParam2))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_254, -622.82f, -1619.93f, 32.21f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_254, -1.28f);
					TASK::TASK_PLAY_ANIM(iLocal_254, sLocal_217, "dead_idle", 1000f, -4f, -1, 9, 0f, false, false, false);
					if (bParam2)
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_254, false, false);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_254, true);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_254, !bParam0, false);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_324(bool bParam0)//Position - 0x394E4
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_254))
	{
		STREAMING::REQUEST_MODEL(iLocal_341);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_341))
		{
			if (!bParam0)
			{
				iLocal_254 = PED::CREATE_PED(26, iLocal_341, -622.82f, -1619.93f, 32.21f, -1.28f, true, true);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_254, 3, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_254, 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_254, 10, 0, 0, 0);
				PED::SET_PED_PROP_INDEX(iLocal_254, 0, 1, 0, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_254, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_341);
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_325()//Position - 0x39578
{
	int iVar0[5];
	int iVar1;
	int iVar2[10];
	int iVar3;
	int iVar4;
	if (iLocal_320 == 0)
	{
		if (iLocal_62)
		{
			if (iLocal_140 != 99)
			{
				if (bLocal_81)
				{
					__LIB_0__::func_427(Local_218 + Vector(0.5f, 0f, 0f), 0f, 0, 0);
					iLocal_140 = 99;
				}
				else if (func_130(7, 0f, 0f, 0f, 0, 0))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_218 + Vector(0.5f, 0f, 0f), true, false, false, true);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					STREAMING::LOAD_SCENE(Local_218);
					iLocal_140 = 99;
				}
			}
			else if (func_130(7, 0f, 0f, 0f, 0, 0))
			{
				if (((func_130(0, Local_218 - Vector(0f, 3f, 0f), 0, 0) && func_130(1, Local_218 - Vector(0f, 2f, 0f), 0, 0)) && func_130(5, 0f, 0f, 0f, 0, 0)) && func_322())
				{
					__LIB_0__::func_433(0, -1, 0);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_218 + Vector(0.5f, 0f, 0f), true, false, false, true);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					iLocal_62 = 0;
				}
			}
		}
		else
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -614.12305f, -1619.0217f, 32.010517f, -611.4392f, -1619.1227f, 34.26001f, 3.25f, false, true, 0))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				}
			}
			CUTSCENE::REQUEST_CUTSCENE("LAM_1_MCS_1_CONCAT", 8);
			func_36("LAM_1_MCS_1_CONCAT");
			if ((func_324(0) && !__LIB_13__::func_755(&Local_276, 0)) && __LIB_0__::func_90())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				__LIB_37__::func_204(Local_274.f_0);
				__LIB_37__::func_204(Local_275.f_0);
				if (!PED::IS_PED_INJURED(Local_274.f_0))
				{
					PED::SET_PED_CONFIG_FLAG(Local_274.f_0, 104, false);
					PED::REMOVE_PED_FROM_GROUP(Local_274.f_0);
					TASK::TASK_CLEAR_LOOK_AT(Local_274.f_0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_274.f_0, "Lamar", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_275.f_0))
				{
					PED::SET_PED_CONFIG_FLAG(Local_275.f_0, 104, false);
					PED::REMOVE_PED_FROM_GROUP(Local_275.f_0);
					TASK::TASK_CLEAR_LOOK_AT(Local_275.f_0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_275.f_0, "Stretch" /* GXT: Stretch */, 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_254))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_254, "Ballas_OG", 0, 0, 0);
				}
				CUTSCENE::START_CUTSCENE(0);
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				func_30();
				RECORDING::REPLAY_START_EVENT(4);
				OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(iLocal_331, Local_224, false, 0f, 0f, 0f);
				OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(iLocal_332, Local_225, false, 0f, 0f, 0f);
				__LIB_42__::func_534(103, 1);
				__LIB_42__::func_534(104, 1);
				__LIB_42__::func_534(101, 1);
				__LIB_42__::func_534(102, 1);
				Local_274.f_3 = 0;
				Local_274.f_4 = 0;
				Local_275.f_3 = 0;
				Local_275.f_4 = 0;
				iLocal_64 = 0;
				iLocal_129 = 0;
				iLocal_63 = 0;
				iLocal_108 = 0;
				iLocal_187 = 0;
				iLocal_140 = 0;
				iLocal_320 = 1;
			}
		}
	}
	if (iLocal_320 == 1)
	{
		if (!iLocal_63)
		{
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
				iLocal_63 = 1;
			}
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_320 = 2;
		}
		else
		{
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_323(0, 1, 0);
				if (!iLocal_108 && !PED::IS_PED_INJURED(iLocal_254))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 42500)
					{
						PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &iVar0, -1);
						iVar1 = 0;
						iVar1 = 0;
						while (iVar1 < iVar0)
						{
							if (!PED::IS_PED_INJURED(iVar0[iVar1]))
							{
								if (ENTITY::GET_ENTITY_MODEL(iVar0[iVar1]) == joaat("CSB_BallasOG"))
								{
									PED::APPLY_PED_BLOOD_SPECIFIC(iVar0[iVar1], 1, 0.534f, 0.556f, 16.352f, 1f, 1, 0f, "BulletLarge");
									PED::APPLY_PED_BLOOD_SPECIFIC(iVar0[iVar1], 1, 0.534f, 0.556f, 16.352f, 1f, 1, 0f, "BulletLarge");
									PED::APPLY_PED_BLOOD_SPECIFIC(iVar0[iVar1], 1, 0.556f, 0.53f, 23.682f, 1f, 5, 0f, "BulletLarge");
									PED::APPLY_PED_BLOOD_SPECIFIC(iVar0[iVar1], 1, 0.504f, 0.576f, 6.12f, 1f, 0, 0f, "ShotgunLarge");
									iLocal_108 = 1;
								}
							}
							iVar1++;
						}
					}
				}
				if (!iLocal_64)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 33000)
					{
						PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &iVar2);
						iVar3 = 0;
						iVar3 = 0;
						while (iVar3 < iVar2)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iVar2[iVar3], false))
							{
								if (ENTITY::GET_ENTITY_MODEL(iVar2[iVar3]) == joaat("speedo") || ENTITY::GET_ENTITY_MODEL(iVar2[iVar3]) == joaat("landstalker"))
								{
									VEHICLE::SET_VEHICLE_LIGHTS(iVar2[iVar3], 2);
								}
							}
							iVar3++;
						}
						iLocal_64 = 1;
					}
				}
			}
			switch (iLocal_140)
			{
				case 0:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						iVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, false))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iVar4, -612.1882f, -1594.531f, 29.251713f, 22.75f, 16f, 4f, false, true, 0))
							{
								__LIB_17__::func_201(iVar4, -700.7425f, 5270.605f, 74.4262f, 229.0238f, 24, 0);
							}
						}
						MISC::CLEAR_AREA(Local_218, 200f, true, true, false, false);
						func_130(8, 0f, 0f, 0f, 0, 0);
						WEAPON::SET_CURRENT_PED_WEAPON(Local_274.f_0, joaat("WEAPON_UNARMED"), true);
						if (!PED::IS_PED_INJURED(Local_275.f_0))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Local_275.f_0, joaat("WEAPON_UNARMED"), true);
						}
						CLOCK::SET_CLOCK_TIME(0, 0, 0);
						__LIB_16__::func_11();
						iLocal_140++;
					}
					break;
				case 1:
					if (CUTSCENE::GET_CUTSCENE_TIME() > 1500)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_CS_DOORS");
						iLocal_140++;
					}
					break;
				case 2:
					if (CUTSCENE::GET_CUTSCENE_TIME() > 26000)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_MISSION_START");
						iLocal_140++;
					}
					break;
				case 3:
					if (!iLocal_63)
					{
						AUDIO::PREPARE_MUSIC_EVENT("LM1_TERMINADOR_HEAD_SHOT");
						if (CUTSCENE::GET_CUTSCENE_TIME() > 42500)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_HEAD_SHOT");
							iLocal_140++;
						}
					}
					break;
				}
		}
		PED::REQUEST_ACTION_MODE_ASSET("FRANKLIN_ACTION");
		WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PUMPSHOTGUN"), 31, 0);
		WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_ASSAULTRIFLE"), 31, 0);
		WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PISTOL"), 31, 0);
		STREAMING::REQUEST_ANIM_DICT("misslamar1ig_2_p1");
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", 0))
		{
			ENTITY::SET_ENTITY_COORDS(Local_274.f_0, -622.6625f, -1624.3663f, 32.0105f, true, true, false, true);
			ENTITY::SET_ENTITY_HEADING(Local_274.f_0, 80f);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_274.f_0, joaat("WEAPON_PUMPSHOTGUN"), true);
			PED::SET_PED_COMPONENT_VARIATION(Local_274.f_0, 1, 1, 0, 0);
			if (!iLocal_63)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_2_p1"))
				{
					Local_274.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-617.689f, -1629.484f, 32.038f, 0f, 0f, 175f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_274.f_0, Local_274.f_6, "misslamar1ig_2_p1", "ig_2_p1_lamar", 1000f, -8f, 5, 153, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_274.f_6, 0f);
					PED::SET_SYNCHRONIZED_SCENE_RATE(Local_274.f_6, 0f);
					iLocal_129 = 1;
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, true);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_274.f_0, false, false);
				Local_274.f_4 = MISC::GET_GAME_TIMER();
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Stretch" /* GXT: Stretch */, 0))
		{
			if (!PED::IS_PED_INJURED(Local_275.f_0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_275.f_0, joaat("SCRIPT_TASK_AIM_GUN_AT_COORD")) != 1)
				{
					ENTITY::SET_ENTITY_COORDS(Local_275.f_0, -622.458f, -1623.38f, 32.0105f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_275.f_0, 175.0071f);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_275.f_0, joaat("WEAPON_PISTOL"), true);
					TASK::TASK_AIM_GUN_AT_COORD(Local_275.f_0, -625.3885f, -1626.4886f, 33.2392f, -1, true, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_275.f_0, true);
					PED::FORCE_PED_MOTION_STATE(Local_275.f_0, joaat("MotionState_Aiming"), false, 1, false);
					Local_275.f_4 = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
		{
			if (PED::HAS_ACTION_MODE_ASSET_LOADED("FRANKLIN_ACTION"))
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_ActionMode_Idle"), false, 1, false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), true);
				RECORDING::REPLAY_STOP_EVENT();
			}
		}
		if (!iLocal_63)
		{
			if (!PED::IS_PED_INJURED(Local_274.f_0))
			{
				if (Local_274.f_4 != 0)
				{
					if ((MISC::GET_GAME_TIMER() - Local_274.f_4) > 2500)
					{
						func_307(0);
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_275.f_0))
			{
				if (Local_275.f_4 != 0)
				{
					if ((MISC::GET_GAME_TIMER() - Local_275.f_4) > 1500)
					{
						func_295(0);
					}
				}
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ballas_OG", 0))
		{
			func_323(0, 0, 0);
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
	if (iLocal_320 == 2)
	{
		if (iLocal_63)
		{
			func_326();
			AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_MISSION_FAIL");
			while (CUTSCENE::IS_CUTSCENE_ACTIVE() || !func_323(0, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(Local_274.f_0) && !PED::IS_PED_INJURED(Local_275.f_0))
			{
				if (Local_274.f_3 == 0)
				{
					ENTITY::SET_ENTITY_COORDS(Local_274.f_0, -622.6625f, -1624.3663f, 32.0105f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_274.f_0, 185.6249f);
				}
				if (Local_275.f_3 == 0)
				{
					ENTITY::SET_ENTITY_COORDS(Local_275.f_0, -622.6948f, -1623.1971f, 32.0105f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_275.f_0, 175.0071f);
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		if (!PED::IS_PED_INJURED(Local_274.f_0))
		{
			if ((!PED::IS_PED_IN_COVER(Local_274.f_0, false) && TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_COVER")) != 1) && Local_274.f_3 == 0)
			{
				Local_274.f_2 = TASK::ADD_COVER_POINT(-622.6625f, -1624.3663f, 32.0105f, 185.6249f, 0, 2, 3, false);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_274.f_0, -622.6625f, -1624.3663f, 32.0105f, -1, false, 0.5f, true, false, Local_274.f_2, false);
			}
		}
		if (!PED::IS_PED_INJURED(Local_275.f_0))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_275.f_0, joaat("SCRIPT_TASK_AIM_GUN_AT_COORD")) != 1 && Local_275.f_3 == 0)
			{
				TASK::TASK_AIM_GUN_AT_COORD(Local_275.f_0, -625.3885f, -1626.4886f, 33.2392f, -1, false, false);
			}
		}
		func_323(0, 0, 1);
		__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
		iLocal_140 = 0;
		iLocal_320 = 0;
		iLocal_319 = 6;
	}
	if (iLocal_320 == 3)
	{
		CUTSCENE::STOP_CUTSCENE(false);
		func_326();
		iLocal_63 = 1;
		iLocal_320 = 1;
	}
}

void func_326()//Position - 0x39EF7
{
	AUDIO::CANCEL_MUSIC_EVENT("LM1_TERMINADOR_DOORS_OPEN");
	AUDIO::CANCEL_MUSIC_EVENT("LM1_TERMINADOR_2ND_DOOR_EXPLODES");
	AUDIO::CANCEL_MUSIC_EVENT("LM1_TERMINADOR_EXIT_WAREHOUSE");
	AUDIO::CANCEL_MUSIC_EVENT("LM1_TERMINADOR_HEAD_SHOT");
}

void func_366()//Position - 0x4007D
{
	float fVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	struct<3> Var7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	struct<6> Var11;
	if (iLocal_320 == 0)
	{
		if (iLocal_62)
		{
			if (bLocal_81)
			{
				__LIB_0__::func_427(16.1696f, -1119.9182f, 27.8357f, 182.5737f, 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 16.1696f, -1119.9182f, 27.8357f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 182.5737f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
			while ((!ENTITY::DOES_ENTITY_EXIST(Local_274.f_0) || !ENTITY::DOES_ENTITY_EXIST(Local_275.f_0)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_260))
			{
				func_130(0, 14.642f, -1120.8765f, 27.7931f, 321.7365f, 0);
				func_130(1, 18.2288f, -1120.647f, 27.9195f, 88.0996f, 0);
				func_375(15.3563f, -1126.204f, 27.7251f, 273.6953f, 1);
				SYSTEM::WAIT(0);
			}
			__LIB_0__::func_433(0, -1, 0);
			SYSTEM::SETTIMERB(0);
			while (SYSTEM::TIMERB() < 10000)
			{
				if (((!PED::IS_PED_INJURED(Local_274.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_274.f_0)) && (!PED::IS_PED_INJURED(Local_275.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_275.f_0))) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
				{
					SYSTEM::SETTIMERB(100000);
				}
				SYSTEM::WAIT(0);
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 16.1696f, -1119.9182f, 27.8357f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 182.5737f);
			func_130(4, 0f, 0f, 0f, 0, 0);
			func_130(5, 0f, 0f, 0f, 0, 0);
			__LIB_30__::func_373(48, 1);
			func_322();
			CLOCK::SET_CLOCK_TIME(21, 30, 0);
			iLocal_140 = 99;
			iLocal_62 = 0;
		}
		else
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				MISC::CLEAR_AREA_OF_PEDS(16.1696f, -1119.9182f, 27.8357f, 100f, 0);
				iLocal_100 = 1;
			}
			else
			{
				iLocal_100 = 0;
			}
			iLocal_110 = 0;
			bLocal_109 = false;
			iLocal_119 = 0;
			iLocal_141 = 0;
			iLocal_192 = 0;
			iLocal_132[128] = 0;
			__LIB_30__::func_373(48, 0);
			func_660(1);
			if (!bLocal_115)
			{
			}
			OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(iLocal_331, Local_224, true, 0f, 0f, 0f);
			OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(iLocal_332, Local_225, true, 0f, 0f, 0f);
			__LIB_42__::func_534(103, 1);
			__LIB_42__::func_534(104, 1);
			__LIB_42__::func_534(101, 0);
			__LIB_42__::func_534(102, 0);
			func_663(2, "GO_TO_PLANT", 0, 0, 0, 1);
			__LIB_16__::func_11();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			SYSTEM::SETTIMERB(0);
			iLocal_140 = 0;
			iLocal_320 = 1;
		}
	}
	if (iLocal_320 == 1)
	{
		__LIB_37__::func_205(Local_274.f_0, 1);
		__LIB_37__::func_205(Local_275.f_0, 1);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_214);
		if (!PED::IS_PED_INJURED(Local_274.f_0) && !PED::IS_PED_INJURED(Local_275.f_0))
		{
			if (__LIB_3__::func_509(28))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_274.f_0, 1f);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_275.f_0, 1f);
			}
			else if (!iLocal_100)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_274.f_0, 2f);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_275.f_0, 2f);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_274.f_0, true);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_275.f_0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_275.f_0, false);
				iLocal_100 = 1;
			}
			fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true));
			fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true));
			if (!iLocal_132[66])
			{
				if (!__LIB_13__::func_755(&Local_276, 1))
				{
					if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_SHOP5", 7, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 5f, 3);
						iLocal_132[66] = 1;
					}
				}
			}
			switch (iLocal_140)
			{
				case 0:
					func_373(&Local_276, -614.2678f, -1602.964f, 25.7517f, 3f, 3f, 2f, 0, Local_274.f_0, Local_275.f_0, 0, "LEM1_GOMEET", "LEM1_LEFTLEMAR", "LEM1_LEFTSTRET", "", "LEM1_LEFTBOTH", 0, 1, 1, -1, 1);
					if (HUD::DOES_BLIP_EXIST(Local_276.f_5))
					{
						HUD::SET_BLIP_ALPHA(Local_276.f_5, 0);
						if (HUD::DOES_BLIP_EXIST(iLocal_231) && !__LIB_0__::func_78(HUD::GET_BLIP_COORDS(iLocal_231), Local_218, 0))
						{
							HUD::REMOVE_BLIP(&iLocal_231);
						}
						if (!HUD::DOES_BLIP_EXIST(iLocal_231))
						{
							iLocal_231 = __LIB_0__::func_488(Local_218, 0);
						}
					}
					else if (HUD::DOES_BLIP_EXIST(iLocal_231))
					{
						HUD::REMOVE_BLIP(&iLocal_231);
					}
					if (!iLocal_119)
					{
						PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, true);
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							iLocal_119 = 1;
						}
					}
					if (!HUD::DOES_BLIP_EXIST(Local_276.f_5))
					{
						if (((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -605.7533f, -1601.9415f, 23.058146f, -627.6484f, -1599.5258f, 31.501303f, 22f, false, true, 0)) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && fVar0 < 100f) && fVar1 < 100f) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
						{
							iVar2 = 1;
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_276.f_5) || iVar2)
					{
						if (HUD::DOES_BLIP_EXIST(Local_276.f_6))
						{
							if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_276.f_6))
							{
								HUD::SET_BLIP_ROUTE(Local_276.f_6, true);
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -605.7533f, -1601.9415f, 23.058146f, -627.6484f, -1599.5258f, 31.501303f, 22f, false, true, 0))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								__LIB_16__::func_318(&Local_276, 0, 0);
								HUD::REMOVE_BLIP(&iLocal_231);
								Local_274.f_4 = 0;
								Local_275.f_4 = 0;
								iLocal_140++;
							}
						}
					}
					break;
				case 1:
					func_372(&Local_276, Local_218, 0.001f, 0.001f, 2f, 1, "", 1, 1, -1, 1);
					Var6 = { -611.823f, -1618.2036f, 32.0105f };
					Var7 = { -613.2916f, -1620.0579f, 32.0105f };
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_214))
					{
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_214, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar3);
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_214, ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true), &uVar4);
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_214, ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true), &uVar5);
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_274.f_0, -611.2579f, -1609.9354f, 26.035994f, -612.2429f, -1620.8995f, 35.437653f, 6f, false, true, 0))
					{
						PED::SET_PED_RESET_FLAG(Local_274.f_0, 247, true);
					}
					if (Local_274.f_3 == 0)
					{
						if (PED::IS_PED_IN_GROUP(Local_274.f_0))
						{
							PED::REMOVE_PED_FROM_GROUP(Local_274.f_0);
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true), Var6) > 4f)
							{
								PED::SET_PED_CONFIG_FLAG(Local_274.f_0, 104, true);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_274.f_0, Var6, 1f, 40000, 0.25f, 0, 349.012f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, true);
								Local_274.f_3 = 0;
							}
						}
						else
						{
							PED::SET_PED_RESET_FLAG(Local_274.f_0, 60, true);
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true), Var6) < 4f)
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_274.f_0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
							Local_274.f_3++;
						}
					}
					else if (Local_274.f_3 == 1)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -611.70795f, -1620.9385f, 31.260536f, -611.278f, -1616.51f, 35.185593f, 5f, false, true, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_274.f_0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true), -613.2521f, -1619.0509f, 32.0105f) > 3f)
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_274.f_0, -613.2521f, -1619.0509f, 32.0105f, 1f, 40000, 0.25f, 0, 349.012f);
								TASK::TASK_CLEAR_LOOK_AT(Local_274.f_0);
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_275.f_0, -611.2579f, -1609.9354f, 26.035994f, -612.2429f, -1620.8995f, 35.437653f, 6f, false, true, 0))
					{
						PED::SET_PED_RESET_FLAG(Local_275.f_0, 247, true);
					}
					if (((PED::IS_PED_IN_GROUP(Local_275.f_0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_274.f_0, false)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_275.f_0, false))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_275.f_0);
					}
					if (Local_275.f_3 == 0)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_275.f_0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true), Var7) > 4f)
							{
								PED::SET_PED_CONFIG_FLAG(Local_275.f_0, 104, true);
								if (Local_275.f_4 == 0 && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_274.f_0))
								{
									Local_275.f_4 = MISC::GET_GAME_TIMER();
								}
								if ((MISC::GET_GAME_TIMER() - Local_275.f_4) > 700)
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_ANY_VEHICLE(Local_275.f_0, false))
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_275.f_0, Var7, 1f, 40000, 0.25f, 0, 300.2354f);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_275.f_0, true);
										Local_275.f_3 = 0;
									}
								}
							}
						}
						else
						{
							PED::SET_PED_RESET_FLAG(Local_275.f_0, 60, true);
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true), Var7) < 4f)
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_275.f_0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
							Local_275.f_3++;
						}
					}
					if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						TASK::CLEAR_PED_TASKS(Local_274.f_0);
						TASK::CLEAR_PED_TASKS(Local_275.f_0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_0, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_275.f_0, false);
						iLocal_140 = (iLocal_140 - 1);
					}
					if (HUD::DOES_BLIP_EXIST(Local_276.f_5))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_218) > 10000f)
						{
							if (!__LIB_13__::func_755(&Local_276, 2))
							{
								if (!iLocal_132[67])
								{
									__LIB_0__::func_229("LEM1_LEFTMEET", 7500, 0);
									iLocal_132[67] = 1;
								}
							}
						}
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_218) > 40000f)
					{
						func_648(10);
					}
					break;
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_218) < (100f * 100f))
			{
				CUTSCENE::REQUEST_CUTSCENE("LAM_1_MCS_1_CONCAT", 8);
				func_324(1);
				func_36("LAM_1_MCS_1_CONCAT");
			}
			else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_218) > (120f * 120f))
			{
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_276.f_5))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -609.9499f, -1619.6838f, 32.01014f, -614.033f, -1618.9325f, 34.50995f, 2.75f, false, true, 0) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true), -613.2521f, -1619.0509f, 32.0105f) < 2f)
				{
					iLocal_320 = 2;
				}
			}
			else
			{
				func_155();
			}
			switch (iLocal_141)
			{
				case 0:
					if (((HUD::DOES_BLIP_EXIST(Local_276.f_5) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && __LIB_16__::func_19(PLAYER::PLAYER_PED_ID(), Local_274.f_0)) && __LIB_16__::func_19(PLAYER::PLAYER_PED_ID(), Local_275.f_0))
					{
						if (__LIB_0__::func_568())
						{
							__LIB_0__::func_620(0);
						}
						if (!__LIB_13__::func_755(&Local_276, 1))
						{
							if (iLocal_192 == 0)
							{
								iLocal_192 = MISC::GET_GAME_TIMER();
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_192) > 2500)
							{
								if (__LIB_17__::func_617() == 0)
								{
									if (!iLocal_132[68])
									{
										if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_REC", 7, 0, 0, 0))
										{
											iLocal_132[68] = 1;
										}
									}
								}
								else if (!iLocal_132[69])
								{
									if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_REC2", 7, 0, 0, 0))
									{
										iLocal_132[69] = 1;
									}
								}
							}
						}
					}
					else if (iLocal_132[68] || iLocal_132[69])
					{
						if (!__LIB_0__::func_568())
						{
							__LIB_0__::func_620(1);
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -624.42065f, -1608.0718f, 25.751478f, -607.61383f, -1609.7593f, 37.398098f, 26.75f, false, true, 0))
					{
						__LIB_0__::func_638();
						iLocal_141++;
					}
					break;
				case 1:
					bVar10 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -611.3336f, -1610.3046f, 25.760519f, -611.7027f, -1620.9208f, 35.10986f, 5.25f, false, true, 0);
					bVar8 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_274.f_0, -611.3336f, -1610.3046f, 25.760519f, -611.7027f, -1620.9208f, 35.10986f, 5.25f, false, true, 0);
					bVar9 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_275.f_0, -611.3336f, -1610.3046f, 25.760519f, -611.7027f, -1620.9208f, 35.10986f, 5.25f, false, true, 0);
					if (bVar10)
					{
						func_324(1);
					}
					if (!iLocal_132[70])
					{
						if (bLocal_109)
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_T2", 7, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
								iLocal_132[70] = 1;
							}
						}
						else if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_ARRIVE", 7, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
							iLocal_132[70] = 1;
						}
					}
					if (((((((fVar0 < 625f && fVar1 < 625f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -624.42065f, -1608.0718f, 25.751478f, -607.61383f, -1609.7593f, 37.398098f, 26.75f, false, true, 0)) && ((((bVar10 && bVar8) && bVar9) || !bVar8) || !bVar9)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_275.f_0, false)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_274.f_0, false)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && HUD::DOES_BLIP_EXIST(Local_276.f_5))
					{
						if (__LIB_0__::func_568())
						{
							__LIB_0__::func_620(0);
						}
						if (!__LIB_13__::func_755(&Local_276, 1))
						{
							if (!iLocal_132[71])
							{
								if (iLocal_132[70])
								{
									if (__LIB_17__::func_617() == 0)
									{
										if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_STAIR", 7, 0, 0, 0))
										{
											iLocal_132[71] = 1;
										}
									}
									else if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_STAIR2", 7, 0, 0, 0))
									{
										iLocal_132[71] = 1;
										iLocal_182 = 0;
									}
								}
							}
							else if (!iLocal_132[72])
							{
								if (iLocal_182 == 0)
								{
									iLocal_182 = MISC::GET_GAME_TIMER();
								}
								else if ((MISC::GET_GAME_TIMER() - iLocal_182) > 10000)
								{
									if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_STOP", 7, 0, 0, 0))
									{
										iLocal_132[72] = 1;
									}
								}
							}
						}
					}
					else if (iLocal_132[71])
					{
						if (!__LIB_0__::func_568())
						{
							__LIB_0__::func_620(1);
						}
					}
					if (iLocal_132[71])
					{
						Var11 = { __LIB_0__::func_486() };
						if (MISC::ARE_STRINGS_EQUAL(&Var11, "LEM1_STAIR") || MISC::ARE_STRINGS_EQUAL(&Var11, "LEM1_STAIR2"))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -611.8038f, -1620.8934f, 35.010536f, -611.146f, -1612.2745f, 30.025726f, 5f, false, true, 0))
							{
								__LIB_0__::func_638();
							}
						}
					}
					break;
			}
			if (iLocal_83)
			{
				if (!__LIB_13__::func_755(&Local_276, 0))
				{
					__LIB_37__::func_213(28, 0);
					iLocal_83 = 0;
				}
			}
			if (!bVar10)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_GO_TO_RECYCLING_CENTRE"))
					{
						AUDIO::START_AUDIO_SCENE("LAMAR_1_GO_TO_RECYCLING_CENTRE");
					}
				}
				else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_GO_TO_RECYCLING_CENTRE"))
				{
					AUDIO::STOP_AUDIO_SCENE("LAMAR_1_GO_TO_RECYCLING_CENTRE");
				}
			}
			else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_GO_TO_MEETING"))
			{
				AUDIO::START_AUDIO_SCENE("LAMAR_1_GO_TO_MEETING");
			}
		}
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -611.3336f, -1610.3046f, 25.760519f, -611.7027f, -1620.9208f, 35.10986f, 5.25f, false, true, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					iLocal_110 = 1;
					if (SYSTEM::TIMERA() > 1000)
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
				else
				{
					SYSTEM::SETTIMERA(0);
				}
			}
		}
		else
		{
			SYSTEM::SETTIMERA(0);
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && iLocal_110)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_110 = 0;
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -611.3336f, -1610.3046f, 25.760519f, -611.7027f, -1620.9208f, 35.10986f, 5.25f, false, true, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
			}
		}
	}
	if (iLocal_320 == 2)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		func_213();
		__LIB_16__::func_318(&Local_276, 1, 0);
		__LIB_0__::func_638();
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_260, false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_260, true, true);
			__LIB_37__::func_206(&iLocal_260, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_270, false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_270, true, true);
			__LIB_37__::func_206(&iLocal_270, 0);
		}
		STREAMING::REMOVE_ANIM_DICT(sLocal_206);
		STREAMING::NEW_LOAD_SCENE_STOP();
		iLocal_320 = 0;
		iLocal_319 = 5;
	}
	if (iLocal_320 == 3)
	{
		func_721(5, 0);
	}
}

int func_372(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, char* sParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x4119D
{
	return func_174(iParam0, Param1, Param2, __LIB_0__::func_613(), __LIB_0__::func_613(), bParam3, 3, 0, 0, 0, 0, sParam4, __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), 0, bParam5, __LIB_0__::func_591(), 0, 0, bParam6, iParam7, __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), bParam8, 1065353216);
}

bool func_373(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15, bool bParam16)//Position - 0x411F8
{
	return func_174(iParam0, Param1, Param2, __LIB_0__::func_613(), __LIB_0__::func_613(), bParam3, 3, iParam4, iParam5, iParam6, 0, sParam7, sParam8, sParam9, sParam10, sParam11, __LIB_0__::func_591(), bParam12, bParam13, __LIB_0__::func_591(), 0, 0, bParam14, iParam15, __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), bParam16, 1065353216);
}

int func_375(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x412D2
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_260))
	{
		if (bParam2)
		{
			if (__LIB_13__::func_821())
			{
				__LIB_14__::func_532();
				if (__LIB_14__::func_531())
				{
					iLocal_260 = __LIB_37__::func_914(Param0, fParam1);
					if (__LIB_15__::func_990(iLocal_260, &Local_276, 2))
					{
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_260, false, 0);
						VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(iLocal_260, false);
						return 1;
					}
					else
					{
						__LIB_37__::func_206(&iLocal_260, 1);
						bParam2 = false;
					}
				}
			}
			else
			{
				bParam2 = false;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_260) && !bParam2)
		{
			__LIB_37__::func_209(19, 3);
			VEHICLE::REQUEST_VEHICLE_ASSET(__LIB_32__::func_2(19, 0), 2);
			if (__LIB_37__::func_211(19, 3) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(__LIB_32__::func_2(19, 0)))
			{
				func_376(&iLocal_260, 19, Param0, fParam1, 1, 3);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_260, false, 0);
				VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(iLocal_260, false);
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

int func_376(int iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)//Position - 0x413B8
{
	struct<98> Var0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_374(bParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		__LIB_17__::func_152(bParam1, &Var0, iParam5);
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var0.f_0)
			{
			}
			return 1;
		}
		if ((bParam1 == 17 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][0 /*98*/] == Var0.f_0) || (bParam1 == 15 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][1 /*98*/] == Var0.f_0))
		{
			if (bParam1 == 17)
			{
				iVar1 = 0;
			}
			else if (bParam1 == 15)
			{
				iVar1 = 1;
			}
			STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/], Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var0.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_5, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_7, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var0.f_2);
				iVar2 = 0;
				while (iVar2 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar2 + 1, !Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_11[iVar2]);
					iVar2++;
				}
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_24)
				{
					if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam0, false))
					{
						if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_24)
						{
							VEHICLE::RAISE_CONVERTIBLE_ROOF(*iParam0, true);
						}
						else
						{
							VEHICLE::LOWER_CONVERTIBLE_ROOF(*iParam0, true);
						}
					}
				}
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_27));
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26);
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_84, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_85, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_93, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_94, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90);
						}
					}
				}
				__LIB_0__::func_372(iParam0, &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var0.f_96);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]);
				}
				__LIB_17__::func_153(*iParam0);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var0.f_0);
			if (STREAMING::HAS_MODEL_LOADED(Var0.f_0))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var0.f_0, Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				__LIB_38__::func_691(iParam0, Var0);
				if (bParam1 == 17 || bParam1 == 15)
				{
					__LIB_17__::func_153(*iParam0);
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var0.f_0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_427()//Position - 0x43DB2
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	bool bVar7;
	var uVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	struct<6> Var17;
	struct<6> Var18;
	float fVar19;
	float fVar20;
	struct<6> Var21;
	if (iLocal_320 == 0)
	{
		if (iLocal_62)
		{
			if (bLocal_81)
			{
				while (__LIB_1__::func_686(28, 10, 1) || !__LIB_13__::func_725(28))
				{
					SYSTEM::WAIT(0);
				}
				__LIB_0__::func_427(19.6422f, -1109.1816f, 28.797f, 324.8243f, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 19.6422f, -1109.1816f, 28.797f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 324.8243f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				SYSTEM::SETTIMERA(0);
				while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(20.3f, -1110.2f, 30.4f, 10f, 0))
				{
					SYSTEM::WAIT(0);
				}
				while (SYSTEM::TIMERA() < 10000)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						SYSTEM::SETTIMERA(100000);
					}
					SYSTEM::WAIT(0);
				}
			}
			while (((!func_130(6, 0f, 0f, 0f, 0, 0) || !ENTITY::DOES_ENTITY_EXIST(Local_274.f_0)) || !ENTITY::DOES_ENTITY_EXIST(Local_275.f_0)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_260))
			{
				func_130(0, Local_222, fLocal_136, 0);
				func_130(1, Local_223, fLocal_137, 0);
				func_375(15.3563f, -1126.204f, 27.7251f, 273.6953f, 1);
				SYSTEM::WAIT(0);
			}
			func_130(5, 0f, 0f, 0f, 0, 0);
			func_130(4, 0f, 0f, 0f, 0, 0);
			__LIB_3__::func_506(28);
			__LIB_30__::func_373(48, 1);
			__LIB_0__::func_433(0, -1, 0);
			SYSTEM::SETTIMERB(0);
			while (SYSTEM::TIMERB() < 10000)
			{
				if (((!PED::IS_PED_INJURED(Local_274.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_274.f_0)) && (!PED::IS_PED_INJURED(Local_275.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_275.f_0))) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
				{
					SYSTEM::SETTIMERB(100000);
				}
				SYSTEM::WAIT(0);
			}
			func_555(&Local_274, Local_222, fLocal_136, "idle_lamar");
			func_555(&Local_275, Local_223, fLocal_137, "idle_stretch");
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 19.6422f, -1109.1816f, 28.797f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 324.8243f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CLOCK::SET_CLOCK_TIME(20, 45, 0);
			SYSTEM::WAIT(1000);
			bLocal_113 = true;
			iLocal_62 = 0;
		}
		else
		{
			iLocal_159 = __LIB_12__::func_295(__LIB_33__::func_611());
			if (!PED::IS_PED_INJURED(Local_274.f_0))
			{
				if (PED::IS_PED_IN_GROUP(Local_274.f_0))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_274.f_0);
				}
			}
			if (!PED::IS_PED_INJURED(Local_275.f_0))
			{
				if (PED::IS_PED_IN_GROUP(Local_275.f_0))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_275.f_0);
				}
			}
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), false))
			{
				if (__LIB_37__::func_217(1, joaat("WEAPON_PUMPSHOTGUN"), joaat("COMPONENT_AT_AR_FLSH")))
				{
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), joaat("COMPONENT_AT_AR_FLSH"));
				}
			}
			iLocal_87 = 0;
			bLocal_88 = false;
			iLocal_101 = 0;
			bLocal_104 = false;
			iLocal_124 = 0;
			bLocal_107 = WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), false);
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), false))
			{
				if (WEAPON::GET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN")) > 0)
				{
					bLocal_104 = true;
				}
			}
			__LIB_0__::func_325();
			OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(iLocal_331, Local_224, true, 0f, 0f, 0f);
			OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(iLocal_332, Local_225, true, 0f, 0f, 0f);
			__LIB_42__::func_534(103, 1);
			__LIB_42__::func_534(104, 1);
			__LIB_42__::func_534(101, 1);
			__LIB_42__::func_534(102, 1);
			iLocal_132[45] = 0;
			func_663(1, "BUY_GRENADES", 0, 0, 0, 1);
			STREAMING::NEW_LOAD_SCENE_STOP();
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				SYSTEM::WAIT(250);
				__LIB_16__::func_11();
			}
			if (__LIB_14__::func_476(28))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			iLocal_140 = 0;
			iLocal_320 = 1;
		}
	}
	if (iLocal_320 == 1)
	{
		func_555(&Local_274, Local_222, fLocal_136, "idle_lamar");
		func_555(&Local_275, Local_223, fLocal_137, "idle_stretch");
		func_517(joaat("WEAPON_KNIFE"), &iVar3, &iVar3, &uVar8, 0);
		func_517(joaat("WEAPON_PUMPSHOTGUN"), &iVar4, &uVar6, &uVar8, 0);
		iVar5 = func_476(joaat("WEAPON_PUMPSHOTGUN"), joaat("COMPONENT_AT_AR_FLSH"));
		if (__LIB_14__::func_476(28))
		{
			__LIB_38__::func_112(joaat("WEAPON_PISTOL"));
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_AMMUNATION_INTRO_CUTSCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("LAMAR_1_AMMUNATION_INTRO_CUTSCENE");
				}
			}
			bVar9 = WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), false);
			bVar10 = WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), joaat("COMPONENT_AT_AR_FLSH"));
			bVar11 = __LIB_3__::func_509(28);
			bVar12 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_274.f_0, 17.558983f, -1114.3575f, 28.79703f, 22.78873f, -1104.4443f, 32.09842f, 6.25f, false, true, 0);
			bVar13 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_275.f_0, 17.558983f, -1114.3575f, 28.79703f, 22.78873f, -1104.4443f, 32.09842f, 6.25f, false, true, 0);
			bVar14 = (bVar11 && __LIB_2__::func_764(28));
			iVar15 = __LIB_12__::func_295(__LIB_33__::func_611());
			if (bVar14)
			{
				if (__LIB_0__::func_75() || !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
				}
			}
			if (!iLocal_87 && bVar14)
			{
				iLocal_87 = 1;
			}
			if (!iLocal_124 && !bVar11)
			{
				iLocal_124 = 1;
			}
			if (!bLocal_113)
			{
				bLocal_113 = func_473();
			}
			if (!bLocal_88)
			{
				if (bVar14 && iVar15 < iLocal_159)
				{
					bLocal_88 = true;
				}
			}
			iVar16 = 0;
			if (!bVar9)
			{
				iVar16 = (iVar16 + iVar4);
			}
			if (!bVar10)
			{
				iVar16 = (iVar16 + iVar5);
			}
			if (!bLocal_88)
			{
				iVar16 = (iVar16 + iVar3);
			}
			if (bVar10)
			{
				if (bVar9)
				{
					sVar0 = "LEM1_BUYANY";
					sVar1 = "LEM1_BACKSHOP";
					sVar2 = "LEM1_BUYN";
				}
				else
				{
					sVar0 = "";
					sVar1 = "LEM1_BACKSHOP2";
					sVar2 = "LEM1_BUYN";
				}
			}
			else if (bVar9)
			{
				sVar0 = "LEM1_BUYFLSH";
				sVar1 = "LEM1_BACKSHOP3";
				sVar2 = "LEM1_SHOTTY2";
			}
			else
			{
				sVar0 = "LEM1_BUYSHOT";
				sVar1 = "LEM1_BACKSHOP2";
				sVar2 = "LEM1_SHOTTY";
			}
			if (!iLocal_132[49])
			{
				if (!iLocal_132[50])
				{
					if (!__LIB_13__::func_755(&Local_276, 1))
					{
						if (__LIB_38__::func_746(&Local_288, cLocal_207, sVar2, 7, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 3.5f, 3);
							iLocal_132[50] = 1;
						}
					}
				}
				else if (!iLocal_132[51])
				{
					if (!__LIB_13__::func_755(&Local_276, 1))
					{
						if (!func_472())
						{
							if (iVar15 < 1500)
							{
								if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_LMONEY", 7, 0, 0, 0))
								{
									iLocal_132[51] = 1;
									bVar7 = true;
								}
							}
							else
							{
								iLocal_132[51] = 1;
								iLocal_101 = 1;
							}
						}
					}
				}
				else if (!iLocal_132[52])
				{
					if (!__LIB_13__::func_755(&Local_276, 2))
					{
						if ((bVar10 && bVar9) && bLocal_88)
						{
							iLocal_132[52] = 1;
						}
						else
						{
							__LIB_0__::func_229(sVar0, 7500, 0);
							iLocal_132[52] = 1;
						}
					}
				}
			}
			if (!iLocal_101)
			{
				if (iLocal_132[51])
				{
					Var17 = { __LIB_0__::func_486() };
					if (MISC::ARE_STRINGS_EQUAL(&Var17, "LEM1_LMONEY"))
					{
						Var18 = { __LIB_13__::func_743() };
						if (MISC::ARE_STRINGS_EQUAL(&Var18, "LEM1_LMONEY_2"))
						{
							__LIB_37__::func_474(__LIB_33__::func_611(), 1, (1500 - iVar15), 0, 0);
							iVar15 = 1500;
							iLocal_101 = 1;
						}
					}
					else if (!bVar7)
					{
						__LIB_37__::func_474(__LIB_33__::func_611(), 1, (1500 - iVar15), 0, 0);
						iVar15 = 1500;
						iLocal_101 = 1;
					}
				}
			}
			if ((bLocal_88 && bVar10) && bVar9)
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_274.f_0, false);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_275.f_0, false);
				if (!iLocal_132[53])
				{
					if (bVar14)
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_206) && func_440(bVar14))
						{
							if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_SHOP", 8, 0, 0, 0))
							{
								iLocal_132[53] = 1;
								func_439("lam_ig_1_p4_lamar", "lam_ig_1_p4_stretch", bVar14);
							}
						}
					}
					else
					{
						__LIB_0__::func_638();
						iLocal_132[53] = 1;
					}
				}
				else if (!bVar14)
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_231))
					{
						iLocal_231 = __LIB_0__::func_488(Local_218, 1);
					}
					if (!__LIB_13__::func_755(&Local_276, 0))
					{
						iLocal_320 = 2;
					}
					if (!__LIB_3__::func_509(28))
					{
						__LIB_0__::func_638();
						iLocal_320 = 2;
					}
				}
			}
			else
			{
				if (!bVar11 && iVar15 >= iVar16)
				{
					if (!PED::IS_PED_INJURED(Local_274.f_0) && !PED::IS_PED_INJURED(Local_275.f_0))
					{
						fVar19 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
						fVar20 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
						if (fVar19 > 2500f || fVar20 > 2500f)
						{
							if (!HUD::DOES_BLIP_EXIST(Local_274.f_1))
							{
								Local_274.f_1 = __LIB_0__::func_639(Local_274.f_0, 0, 0);
							}
							if (!HUD::DOES_BLIP_EXIST(Local_275.f_1))
							{
								Local_275.f_1 = __LIB_0__::func_639(Local_275.f_0, 0, 0);
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_231))
							{
								HUD::REMOVE_BLIP(&iLocal_231);
							}
							if (!iLocal_132[45])
							{
								if (!__LIB_13__::func_755(&Local_276, 2))
								{
									__LIB_0__::func_229("LEM1_LEFTBOTH", 7500, 0);
									iLocal_132[45] = 1;
								}
							}
						}
						else if (fVar19 < 1600f && fVar20 < 1600f)
						{
							if (HUD::DOES_BLIP_EXIST(Local_274.f_1))
							{
								HUD::REMOVE_BLIP(&(Local_274.f_1));
							}
							if (HUD::DOES_BLIP_EXIST(Local_275.f_1))
							{
								HUD::REMOVE_BLIP(&(Local_275.f_1));
							}
							if (__LIB_0__::func_501("LEM1_LEFTBOTH", 0, 0) || (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && __LIB_0__::func_501(sVar0, 0, 0)))
							{
								HUD::CLEAR_PRINTS();
							}
							if (!__LIB_13__::func_755(&Local_276, 2))
							{
								if (!iLocal_132[54])
								{
									__LIB_0__::func_229(sVar1, 7500, 0);
									iLocal_132[54] = 1;
								}
							}
							if (!HUD::DOES_BLIP_EXIST(iLocal_231))
							{
								iLocal_231 = __LIB_0__::func_488(22.1f, -1106.6f, 29.8f, 1);
							}
						}
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_231))
					{
						HUD::REMOVE_BLIP(&iLocal_231);
					}
					if (__LIB_0__::func_501("LEM1_BACKSHOP", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
				}
				if (bVar14)
				{
					if (__LIB_0__::func_501(sVar1, 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (!bVar9 && !iLocal_132[55])
					{
						if (func_437() == joaat("WEAPON_PUMPSHOTGUN"))
						{
							if (!__LIB_13__::func_755(&Local_276, 1))
							{
								if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_SFOUND", 7, 0, 0, 0))
								{
									iLocal_132[55] = 1;
								}
							}
						}
					}
					if (((!bLocal_107 && bVar9) && !bVar10) && !iLocal_132[56])
					{
						if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_SFLASH", 7, 0, 0, 0))
						{
							iLocal_132[56] = 1;
						}
					}
					if (((MISC::GET_GAME_TIMER() - iLocal_158) > 15000 && !__LIB_13__::func_755(&Local_276, 1)) && iVar15 >= iVar16)
					{
						if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_SMOAN3", 7, 0, 0, 0))
						{
							iLocal_158 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(-2000, 2000));
						}
					}
				}
				else
				{
					if (((iVar15 >= iVar16 && !iLocal_132[57]) && !__LIB_13__::func_755(&Local_276, 1)) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 19.93965f, -1114.8497f, 28.797018f, 15.61272f, -1113.1924f, 31.334002f, 4f, false, true, 0) || !bVar11))
					{
						if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_SMOAN3", 7, 0, 0, 0))
						{
							iLocal_132[57] = 1;
						}
					}
					iLocal_158 = MISC::GET_GAME_TIMER();
					if (__LIB_8__::func_943())
					{
						__LIB_1__::func_674(1);
					}
				}
				iLocal_159 = iVar15;
				if (!PED::IS_PED_INJURED(Local_274.f_0) && !PED::IS_PED_INJURED(Local_275.f_0))
				{
					if (((bVar11 && bVar12) && bVar13) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_206))
					{
						if (!__LIB_13__::func_755(&Local_276, 1))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_142) > 10000 && iLocal_132[51])
							{
								if (func_440(bVar14))
								{
									if (!iLocal_132[58])
									{
										if (!func_472())
										{
											if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_SHOP1", 7, 0, 0, 0))
											{
												iLocal_132[58] = 1;
											}
										}
									}
									else if (!iLocal_132[59])
									{
										if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_SHOP2", 7, 0, 0, 0))
										{
											func_439("lam_ig_1_p1_lamar", "lam_ig_1_p1_stretch", bVar14);
											iLocal_132[59] = 1;
										}
									}
									else if (!iLocal_132[60])
									{
										if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_SHOP3", 7, 0, 0, 0))
										{
											func_439("lam_ig_1_p2_lamar", "lam_ig_1_p2_stretch", bVar14);
											iLocal_132[60] = 1;
										}
									}
									else if (!iLocal_132[61])
									{
										if (!func_472())
										{
											if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_SHOP6", 7, 0, 0, 0))
											{
												func_439("lam_ig_1_p3_lamar", "lam_ig_1_p3_stretch", bVar14);
												iLocal_132[61] = 1;
											}
										}
									}
								}
							}
							if (!iLocal_132[62])
							{
								if ((iLocal_124 && !bVar14) && iVar15 >= iVar16)
								{
									if (bVar9 && !bVar10)
									{
										if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_SRETURN", 7, 0, 0, 0))
										{
											iLocal_132[62] = 1;
										}
									}
								}
							}
							if (!iLocal_132[63])
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_274.f_0, sLocal_206, "idle_stretch", 3))
								{
									if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_STUFF", 7, 0, 0, 0))
									{
										iLocal_132[63] = 1;
									}
								}
							}
						}
						else if (iLocal_132[58])
						{
							iLocal_142 = (MISC::GET_GAME_TIMER() - MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000));
						}
					}
					else if (__LIB_0__::func_75())
					{
						if (iLocal_132[58])
						{
							__LIB_0__::func_638();
							TASK::CLEAR_PED_TASKS(Local_274.f_0);
							TASK::CLEAR_PED_TASKS(Local_275.f_0);
						}
					}
					if (iLocal_132[52])
					{
						if (iVar15 < iVar16 && iLocal_101)
						{
							if (bVar9 && bVar10)
							{
								if (!iLocal_132[49])
								{
									if (((STREAMING::HAS_ANIM_DICT_LOADED(sLocal_206) && func_440(bVar14)) && !func_472()) && __LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_BROKE", 8, 0, 0, 0))
									{
										iLocal_132[49] = 1;
										func_439("lam_ig_1_p5_lamar", "lam_ig_1_p5_stretch", bVar14);
									}
								}
								else if (!__LIB_13__::func_755(&Local_276, 0))
								{
									if (!bVar14)
									{
										iLocal_320 = 2;
									}
								}
							}
							else
							{
								func_648(12);
							}
						}
					}
					if (!bLocal_104 && !iLocal_132[65])
					{
						if (bVar14 && !__LIB_13__::func_755(&Local_276, 1))
						{
							if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), false))
							{
								if (WEAPON::GET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN")) > 0)
								{
									if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_COLOR", 7, 0, 0, 0))
									{
										iLocal_132[65] = 1;
									}
								}
							}
						}
					}
				}
			}
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && iVar15 >= iVar16)
			{
				HUD::CLEAR_PRINTS();
				func_213();
				__LIB_0__::func_638();
				__LIB_16__::func_318(&Local_276, 1, 0);
				__LIB_17__::func_716(&Local_276, 1);
				iLocal_140 = 1;
				iLocal_319 = 1;
				iLocal_320 = 1;
			}
			if (func_472())
			{
				Var21 = { __LIB_0__::func_486() };
				if (((MISC::ARE_STRINGS_EQUAL(&Var21, "LEM1_LMONEY") || MISC::ARE_STRINGS_EQUAL(&Var21, "LEM1_SHOP1")) || MISC::ARE_STRINGS_EQUAL(&Var21, "LEM1_SHOP6")) || MISC::ARE_STRINGS_EQUAL(&Var21, "LEM1_BROKE"))
				{
					__LIB_0__::func_638();
				}
			}
		}
		func_155();
	}
	if (iLocal_320 == 2)
	{
		HUD::CLEAR_HELP(true);
		__LIB_1__::func_674(1);
		func_213();
		if (iLocal_241 != 0)
		{
			if (INTERIOR::IS_INTERIOR_READY(iLocal_241))
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_241);
				iLocal_241 = 0;
			}
		}
		__LIB_38__::func_112(0);
		func_30();
		iLocal_320 = 0;
		iLocal_319 = 4;
	}
	if (iLocal_320 == 3)
	{
		func_721(4, 0);
	}
}

int func_437()//Position - 0x44ED3
{
	return Global_100493.f_1;
}

void func_439(char* sParam0, char* sParam1, bool bParam2)//Position - 0x44EFF
{
	int iVar0;
	if (bParam2)
	{
		if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			ENTITY::SET_ENTITY_COORDS(Local_274.f_0, Local_222, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(Local_274.f_0, fLocal_136);
			ENTITY::SET_ENTITY_COORDS(Local_275.f_0, Local_223, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(Local_275.f_0, fLocal_137);
		}
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_PLAY_ANIM(0, sLocal_206, sParam0, 4f, -4f, -1, 262144, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, sLocal_206, "idle_lamar", 4f, -4f, -1, 262145, 0f, false, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_274.f_0, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_PLAY_ANIM(0, sLocal_206, sParam1, 4f, -4f, -1, 262144, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, sLocal_206, "idle_stretch", 4f, -4f, -1, 262145, 0f, false, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_275.f_0, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

int func_440(bool bParam0)//Position - 0x44FE6
{
	float fVar0;
	float fVar1;
	if (!PED::IS_PED_INJURED(Local_274.f_0) && !PED::IS_PED_INJURED(Local_275.f_0))
	{
		if (bParam0)
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_274.f_0, sLocal_206, "idle_lamar", 3) && ENTITY::IS_ENTITY_PLAYING_ANIM(Local_275.f_0, sLocal_206, "idle_stretch", 3))
		{
			fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_274.f_0, sLocal_206, "idle_lamar");
			fVar1 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_275.f_0, sLocal_206, "idle_stretch");
			if ((fVar0 >= 0.885f || fVar0 <= 0.4f) && (fVar1 >= 0.885f || fVar1 <= 0.6f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_472()//Position - 0x4641F
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mini@sprunk", "plyr_buy_drink_pt1", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mini@sprunk", "plyr_buy_drink_pt2", 3))
	{
		return 1;
	}
	return 0;
}

int func_473()//Position - 0x46457
{
	int iVar0;
	float fVar1;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
		{
			fVar1 = SYSTEM::VDIST2(Local_220, ENTITY::GET_ENTITY_COORDS(iVar0, true));
			if (fVar1 < 10000f)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, 17.350292f, -1115.117f, 27.796766f, 15.640124f, -1119.6829f, 31.820522f, 6f, false, true, 0) || fVar1 > 2500f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(iVar0))
					{
						ENTITY::SET_ENTITY_COORDS(iVar0, Local_220, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iVar0, 273.6953f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
						return 1;
					}
				}
				if (iVar0 != iLocal_260)
				{
					iLocal_270 = iVar0;
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_270, true, true);
				}
			}
		}
	}
	return 0;
}

int func_476(int iParam0, int iParam1)//Position - 0x4654C
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var* uVar4;
	struct<6> Var5;
	int iVar6;
	int iVar7;
	var* uVar8;
	struct<6> Var9;
	char* sVar10;
	struct<4> Var11;
	float fVar12;
	iVar0 = 0;
	fVar1 = 2.5f;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						iVar0 = 155;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 189;
						break;
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = 729;
						break;
					case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
						iVar0 = 18600;
						break;
				}
				break;
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						iVar0 = 136;
						break;
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						iVar0 = 159;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 189;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 735;
						break;
					case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
						iVar0 = 14500;
						break;
				}
				break;
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						iVar0 = 145;
						break;
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						iVar0 = 165;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 185;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 730;
						break;
					case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
						iVar0 = 15800;
						break;
				}
				break;
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						iVar0 = 137;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 190;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 549;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 775;
						break;
					case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
						iVar0 = 15100;
						break;
				}
				break;
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_CLIP_01"):
						iVar0 = 119;
						break;
					case joaat("COMPONENT_SMG_CLIP_02"):
						iVar0 = 134;
						break;
					case joaat("COMPONENT_SMG_CLIP_03"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 210;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
						iVar0 = 549;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 815;
						break;
					case joaat("COMPONENT_SMG_VARMOD_LUXE"):
						iVar0 = 19300;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						iVar0 = 129;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 159;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 189;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 565;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 810;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
						iVar0 = 14400;
						break;
				}
				break;
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						iVar0 = 99;
						break;
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						iVar0 = 105;
						break;
					case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 132;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 150;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 450;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 815;
						break;
					case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
						iVar0 = 17900;
						break;
				}
				break;
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						iVar0 = 110;
						break;
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						iVar0 = 124;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 159;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 450;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 812;
						break;
					case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
						iVar0 = 16500;
						break;
				}
				break;
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MG_CLIP_01"):
						iVar0 = 135;
						break;
					case joaat("COMPONENT_MG_CLIP_02"):
						iVar0 = 145;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						iVar0 = 450;
						break;
					case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
						iVar0 = 15600;
						break;
				}
				break;
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						iVar0 = 119;
						break;
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						iVar0 = 126;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 129;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 559;
						break;
					case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
						iVar0 = 14000;
						break;
				}
				break;
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 189;
						break;
					case joaat("COMPONENT_AT_SR_SUPP"):
						iVar0 = 975;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
						iVar0 = 16900;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						iVar0 = 129;
						break;
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						iVar0 = 139;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 150;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 225;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 899;
						break;
				}
				break;
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 559;
						break;
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 975;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 920;
						break;
					case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
						iVar0 = 13000;
						break;
				}
				break;
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 575;
						break;
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 999;
						break;
				}
				break;
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 128;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 185;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 525;
						break;
				}
				break;
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						iVar0 = -1;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
						iVar0 = 110;
						break;
					case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
						iVar0 = 9700;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2275;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10875;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12400;
						break;
					case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
						iVar0 = 17600;
						break;
				}
				if (__LIB_0__::func_116() && (__LIB_0__::func_163() || __LIB_0__::func_164()))
				{
					iVar0 = 0;
				}
				break;
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4100;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2300;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12450;
						break;
				}
				if (__LIB_0__::func_116() && (__LIB_0__::func_163() || __LIB_0__::func_164()))
				{
					iVar0 = 0;
				}
				break;
			case joaat("WEAPON_PISTOL50"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL50_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_PISTOL50_CLIP_02"):
						iVar0 = 9500;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 2000;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12250;
						break;
					case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
						iVar0 = 20000;
						break;
				}
				if (__LIB_0__::func_116() && (__LIB_0__::func_163() || __LIB_0__::func_164()))
				{
					iVar0 = 0;
				}
				break;
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
						iVar0 = 13700;
						break;
				}
				break;
			case joaat("WEAPON_MARKSMANRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
						iVar0 = 3612;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 1020;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 5000;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 1760;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
						iVar0 = 17200;
						break;
				}
				break;
			case joaat("WEAPON_HEAVYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
						iVar0 = 3680;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 710;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 4800;
						break;
					case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
						iVar0 = 12000;
						break;
				}
				break;
			case joaat("WEAPON_KNUCKLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
						iVar0 = 4900;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
						iVar0 = 5600;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
						iVar0 = 5500;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
						iVar0 = 5200;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
						iVar0 = 4600;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
						iVar0 = 4700;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
						iVar0 = 4800;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
						iVar0 = 4300;
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
						iVar0 = 4000;
						break;
				}
				break;
			case joaat("WEAPON_BULLPUPRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
						iVar0 = 108;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
						iVar0 = 9950;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2575;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 11350;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12500;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4275;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
						iVar0 = 16600;
						break;
				}
				break;
			case joaat("WEAPON_SNSPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
						iVar0 = 29;
						break;
					case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
						iVar0 = 9150;
						break;
					case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
						iVar0 = 13900;
						break;
				}
				break;
			case joaat("WEAPON_SPECIALCARBINE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
						iVar0 = 108;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
						iVar0 = 9975;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2525;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 11550;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12500;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
						iVar0 = 18000;
						break;
				}
				break;
			case joaat("WEAPON_MACHINEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
						iVar0 = 3680;
						break;
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 4840;
						break;
				}
				break;
			default:
				iVar2 = __LIB_0__::func_289(iParam0, &uVar4);
				if (iVar2 != -1)
				{
					iVar3 = 0;
					while (iVar3 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar2))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar2, iVar3, &Var5))
						{
							if (!__LIB_0__::func_288(Var5.f_3))
							{
								if (Var5.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (!__LIB_37__::func_212(iParam1))
									{
										Var5.f_5 = -1;
									}
									if (Var5.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var5.f_5;
									}
									if (iParam0 == joaat("WEAPON_HAMMER"))
									{
										if (__LIB_0__::func_116() && (__LIB_0__::func_163() || __LIB_0__::func_164()))
										{
											iVar0 = 0;
										}
									}
								}
							}
						}
						iVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						iVar0 = 9175;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2894 /* Tunable: WEAPONADDON_PISTOL_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1675;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4346 /* Tunable: WEAPONADDON_PISTOL_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4347 /* Tunable: WEAPONADDON_PISTOL_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11039 /* Tunable: LUXE1_ADDONSPISTOL_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4424));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21237 /* Tunable: 1045219855 */;
						break;
				}
				break;
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						iVar0 = 136;
						break;
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_21124 /* Tunable: -1714511790 */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2895 /* Tunable: WEAPONADDON_COMBATPISTOL_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4348 /* Tunable: WEAPONADDON_COMBATPISTOL_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_21125 /* Tunable: -83416429 */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4349 /* Tunable: WEAPONADDON_COMBATPISTOL_SUPP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12428 /* Tunable: WEAPONADDONCOMBAT_PISTOL_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4419 /* Tunable: WEAPONADDON_COMBATPISTOL_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						iVar0 = 145;
						break;
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						iVar0 = 9400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2897 /* Tunable: WEAPONADDON_APPISTOL_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4350 /* Tunable: WEAPONADDON_APPISTOL_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 12200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4351 /* Tunable: WEAPONADDON_APPISTOL_SUPP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11038 /* Tunable: LUXE1_ADDONSAP_PISTOL_GILDED_GUN_METAL_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4413 /* Tunable: WEAPONADDON_APPPISTOL_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
						iVar0 = Global_262145.f_31993 /* Tunable: FIXER_THE_STUDIO_FINISH */;
						break;
				}
				break;
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						iVar0 = 9325;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2898 /* Tunable: WEAPONADDON_MICROSMG_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4354 /* Tunable: WEAPONADDON_MICROSMG_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10800;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4356 /* Tunable: WEAPONADDON_MICROSMG_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12150;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4355 /* Tunable: WEAPONADDON_MICROSMG_SUPP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11042 /* Tunable: LUXE1_ADDONSMICRO_SMG_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4423 /* Tunable: WEAPONADDON_MICROSMG_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
						iVar0 = Global_262145.f_31992 /* Tunable: FIXER_THE_WEED_FINISH */;
						break;
				}
				break;
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_CLIP_01"):
						iVar0 = 119;
						break;
					case joaat("COMPONENT_SMG_CLIP_02"):
						iVar0 = 9475;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2899 /* Tunable: WEAPONADDON_SMG_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_SMG_CLIP_03"):
						iVar0 = Global_262145.f_16642 /* Tunable: ADDONS_SMG_DRUM_MAGAZINE */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4357 /* Tunable: WEAPONADDON_SMG_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
						iVar0 = 10825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4359 /* Tunable: WEAPONADDON_SMG_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4358 /* Tunable: WEAPONADDON_SMG_SUPP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_SMG_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11041 /* Tunable: LUXE1_ADDONSSMG_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4428 /* Tunable: WEAPONADDON_SMG_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21238 /* Tunable: -1113441963 */;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						iVar0 = 120;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						iVar0 = 9550;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2901 /* Tunable: WEAPONADDON_ASSAULTRIFLE_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
						iVar0 = Global_262145.f_16637 /* Tunable: ADDONS_ASSAULT_RIFLE_DRUM_MAGAZINE */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4367 /* Tunable: WEAPONADDON_ASSRIFLE_GRIP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2125;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4364 /* Tunable: WEAPONADDON_ASSRIFLE_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4366 /* Tunable: WEAPONADDON_ASSRIFLE_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4365 /* Tunable: WEAPONADDON_ASSRIFLE_SUPP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11035 /* Tunable: LUXE1_KIT_ASSAULT_RIFLE_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4414 /* Tunable: WEAPONADDON_ASSAULTRIFLE_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21240 /* Tunable: 2090566072 */;
						break;
				}
				break;
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						iVar0 = 99;
						break;
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						iVar0 = 9775;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2902 /* Tunable: WEAPONADDON_CARBINERIFLE_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
						iVar0 = Global_262145.f_16636 /* Tunable: ADDONS_CARBINE_RIFLE_BOX_MAGAZINE */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4375 /* Tunable: WEAPONADDON_CARBINERRIFLE_GRIP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4372 /* Tunable: WEAPONADDON_CARBINERRIFLE_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 10900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4374 /* Tunable: WEAPONADDON_CARBINERRIFLE_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4373 /* Tunable: WEAPONADDON_CARBINERRIFLE_SUPP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11037 /* Tunable: LUXE1_ADDONSCARBINE_RIFLE_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4417 /* Tunable: WEAPONADDON_CARBINERILE_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21241 /* Tunable: 199705908 */;
						break;
				}
				break;
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						iVar0 = 110;
						break;
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						iVar0 = 9925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2904 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4377 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 10950;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4379 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4378 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_SUPP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11036 /* Tunable: LUXE1_ADDONSADVANCED_RIFLE_GILDED_GUN_METAL_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4412 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MG_CLIP_01"):
						iVar0 = 135;
						break;
					case joaat("COMPONENT_MG_CLIP_02"):
						iVar0 = 9850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2905 /* Tunable: WEAPONADDON_MG_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						iVar0 = 10925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4380 /* Tunable: WEAPONADDON_MACHINEGUN_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12429 /* Tunable: WEAPONADDONMG_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4422 /* Tunable: WEAPONADDON_MG_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						iVar0 = 119;
						break;
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						iVar0 = 10000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2906 /* Tunable: WEAPONADDON_COMBATMG_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4402 /* Tunable: WEAPONADDON_COMBATMG_GRIP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 10975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4403 /* Tunable: WEAPONADDON_COMBATMG_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12430 /* Tunable: WEAPONADDONCOMBAT_MG_ETCHED_GUN_METAL_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4418 /* Tunable: WEAPONADDON_COMBATMG_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21239 /* Tunable: -31847919 */;
						break;
				}
				break;
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 1750;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4384 /* Tunable: WEAPONADDON_PUMPSHOTGUN_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SR_SUPP"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4385 /* Tunable: WEAPONADDON_PUMPSHOTGUN_SUPP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12425 /* Tunable: WEAPONADDONPUMP_SHOTGUN_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4426 /* Tunable: WEAPONADDON_PUMPSHOTGUN_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22961 /* Tunable: -1541473904 */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
						iVar0 = Global_262145.f_31990 /* Tunable: FIXER_THE_BONE_FINISH */;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						iVar0 = 129;
						break;
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						iVar0 = 9625;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2908 /* Tunable: WEAPONADDON_ASSAULTSHOTGUN_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4388 /* Tunable: WEAPONADDON_ASSHOTGUN_GRIP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4389 /* Tunable: WEAPONADDON_ASSHOTGUN_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4390 /* Tunable: WEAPONADDON_ASSHOTGUN_SUPP_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4391 /* Tunable: WEAPONADDON_SNIPER_SCOPE1_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4392 /* Tunable: WEAPONADDON_SNIPER_SCOPE2_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4393 /* Tunable: WEAPONADDON_SNIPER_SUPP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11044 /* Tunable: LUXE1_ADDONSSNIPER_RIFLE_ETCHED_WOOD_GRIP_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4429 /* Tunable: WEAPONADDON_SNIPERRIFLE_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						iVar0 = -1;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 99;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4394 /* Tunable: WEAPONADDON_HEAVYSNIPER_SCOPE1_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4395 /* Tunable: WEAPONADDON_HEAVYSNIPER_SCOPE2_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21242 /* Tunable: 1329981068 */;
						break;
				}
				break;
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4404 /* Tunable: WEAPONADDON_GRENADELAUNCHER_GRIP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4400 /* Tunable: WEAPONADDON_GRENADELAUNCHER_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 11000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4401 /* Tunable: WEAPONADDON_GRENADELAUNCHER_SCOPE_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						iVar0 = -1;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
						iVar0 = 110;
						break;
					case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
						iVar0 = 9700;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2900 /* Tunable: WEAPONADDON_ASSAULTSMG_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4360 /* Tunable: WEAPONADDON_ASSSMG_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10875;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4363 /* Tunable: WEAPONADDON_ASSSMG_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4361 /* Tunable: WEAPONADDON_ASSSMG_SUPP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12426 /* Tunable: WEAPONADDONASSAULT_SMG_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4362));
						break;
				}
				break;
			case joaat("WEAPON_GUSENBERG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_GUSENBERG_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_GUSENBERG_CLIP_02"):
						iVar0 = Global_262145.f_7060 /* Tunable: VALENTINE_GUSENBERG_WEAPONMOD_EXTENDED_CLIP */;
						break;
				}
				break;
			case joaat("WEAPON_SNSPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_7639 /* Tunable: DLC_WEAPON_ADDON_SNS_PISTOL_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12427 /* Tunable: WEAPONADDONSNS_PISTOL_ETCHED_WOOD_GRIP_FINISH */;
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22966 /* Tunable: 770433911 */;
						break;
				}
				break;
			case joaat("WEAPON_SPECIALCARBINE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
						iVar0 = Global_262145.f_7644 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
						iVar0 = Global_262145.f_16639 /* Tunable: ADDONS_SPECIAL_CARBINE_DRUM_MAGAZINE */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_7647 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_FLASHLIGHT */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = Global_262145.f_7643 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_SCOPE */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_7641 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_SUPPRESSOR */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_7646 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_GRIP */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12431 /* Tunable: WEAPONADDONSPECIAL_CARBINE_ETCHED_GUN_METAL_FINISH */;
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22962 /* Tunable: -2069986193 */;
						break;
				}
				break;
			case joaat("WEAPON_HEAVYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_7645 /* Tunable: DLC_WEAPON_ADDON_HEAVY_PISTOL_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = Global_262145.f_7649 /* Tunable: DLC_WEAPON_ADDON_HEAVY_PISTOL_FLASHLIGHT */;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_7642 /* Tunable: DLC_WEAPON_ADDON_HEAVY_PISTOL_SUPPRESSOR */;
						break;
					case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
						iVar0 = Global_262145.f_7669 /* Tunable: LUXE1_ADDONSHEAVY_PISTOL_ETCHED_WOOD_GRIP_FINISH */;
						break;
				}
				break;
			case joaat("WEAPON_BULLPUPRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_7652 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_7655 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_FLASHLIGHT */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_7650 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_SUPPRESSOR */;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = Global_262145.f_7651 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_SCOPE */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_7653 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_GRIP */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
						iVar0 = Global_262145.f_12432 /* Tunable: WEAPONADDONBULLPUP_RIFLE_GILDED_GUN_METAL_FINISH */;
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22965 /* Tunable: -1864587586 */;
						break;
				}
				break;
			case joaat("WEAPON_VINTAGEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_8127 /* Tunable: DLC_HIPSTER_WEAPON_MOD_VINTAGE_PISTOL_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_8128 /* Tunable: DLC_HIPSTER_WEAPON_MOD_VINTAGE_PISTOL_SUPPRESSOR */;
						break;
				}
				break;
			case joaat("WEAPON_HEAVYSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
						iVar0 = Global_262145.f_8856 /* Tunable: LTS_HEAVY_SHOTGUN_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
						iVar0 = Global_262145.f_16643 /* Tunable: ADDONS_HEAVY_SHOTGUN_DRUM_MAGAZINE */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_8857 /* Tunable: LTS_HEAVY_SHOTGUN_FLASHLIGHT */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_8858 /* Tunable: LTS_HEAVY_SHOTGUN_SUPPRESSOR */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_8859 /* Tunable: LTS_HEAVY_SHOTGUN_GRIP */;
						break;
				}
				break;
			case joaat("WEAPON_MARKSMANRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_8862 /* Tunable: LTS_MARKSMAN_RIFLE_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_8863 /* Tunable: LTS_MARKSMAN_RIFLE_FLASHLIGHT */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_8865 /* Tunable: LTS_MARKSMAN_RIFLE_SUPPRESSOR */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_8866 /* Tunable: LTS_MARKSMAN_RIFLE_GRIP */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_8867 /* Tunable: LUXE1_ADDONSMARKSMAN_RIFLE_YUSUF_AMIR_LUXURY_FINISH */;
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22963 /* Tunable: -2073299738 */;
						break;
				}
				break;
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4100;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_15134 /* Tunable: WEAPONADDON_BULLPUPSHOTGUN_GRIP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4386 /* Tunable: WEAPONADDON_BULLPUPSHOTGUN_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4387 /* Tunable: WEAPONADDON_BULLPUPSHOTGUN_SUPP_EXPENDITURE_TUNABLE */));
						break;
				}
				if (__LIB_0__::func_116() && (__LIB_0__::func_163() || __LIB_0__::func_164()))
				{
					iVar0 = 0;
				}
				break;
			case joaat("WEAPON_PISTOL50"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL50_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_PISTOL50_CLIP_02"):
						iVar0 = 9500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2896 /* Tunable: WEAPONADDON_PISTOL50_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 2000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4352 /* Tunable: WEAPONADDON_DLCPISTOL50_FLSH_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4353 /* Tunable: WEAPONADDON_DLCPISTOL50_SUPP_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11040 /* Tunable: LUXE1_ADDONSPISTOL_50_PLATINUM_PEARL_DELUXE_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4425 /* Tunable: WEAPONADDON_PISTOL50_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				if (__LIB_0__::func_116() && (__LIB_0__::func_163() || __LIB_0__::func_164()))
				{
					iVar0 = 0;
				}
				break;
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11043 /* Tunable: LUXE1_ADDONSSAWED_OFF_SHOTGUN_GILDED_GUN_METAL_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4427 /* Tunable: WEAPONADDON_SAWNOFFSHOTGUN_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			case joaat("WEAPON_KNUCKLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
						iVar0 = Global_262145.f_11365 /* Tunable: LUXE2_THE_PIMP_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4432 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_PIMP_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
						iVar0 = Global_262145.f_11366 /* Tunable: LUXE2_THE_BALLAS_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4433 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_BALLAS_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
						iVar0 = Global_262145.f_11367 /* Tunable: LUXE2_THE_HUSTLER_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4434 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_HUSTLER_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
						iVar0 = Global_262145.f_11368 /* Tunable: LUXE2_THE_ROCK_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4435 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_ROCK_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
						iVar0 = Global_262145.f_11369 /* Tunable: LUXE2_THE_HATER_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4436 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_HATER_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
						iVar0 = Global_262145.f_11370 /* Tunable: LUXE2_THE_LOVER_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4437 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_LOVER_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
						iVar0 = Global_262145.f_11371 /* Tunable: LUXE2_THE_PLAYER_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4438 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_PLAYER_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
						iVar0 = Global_262145.f_11372 /* Tunable: LUXE2_THE_KING_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4439 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_KING_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
						iVar0 = Global_262145.f_11373 /* Tunable: LUXE2_THE_VAGOS_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4440 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_VAGOS_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			case joaat("WEAPON_MACHINEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_11390 /* Tunable: LOWRIDER_MACHINEPISTOL_CLIP02 */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4442));
						break;
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
						iVar0 = Global_262145.f_16641 /* Tunable: ADDONS_MACHINE_PISTOL_DRUM_MAGAZINE */;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_11391 /* Tunable: LOWRIDER_MACHINEPISTOL_SUPP */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4443));
						break;
				}
				break;
			case joaat("WEAPON_SWITCHBLADE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
						iVar0 = Global_262145.f_13273 /* Tunable: APARTMENT_ADDONS_SWITCHBLADE_ENGRAVED_BOSS_VARIANT */;
						break;
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
						iVar0 = Global_262145.f_13274 /* Tunable: APARTMENT_ADDONS_SWITCHBLADE_ENGRAVED_GOON_VARIANT */;
						break;
				}
				break;
			case joaat("WEAPON_REVOLVER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_REVOLVER_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
						iVar0 = Global_262145.f_13331 /* Tunable: APARTMENT_ADDONS_HEAVY_REVOLVER_ENGRAVED_BOSS_VARIANT */;
						break;
					case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
						iVar0 = Global_262145.f_13272 /* Tunable: APARTMENT_ADDONS_HEAVY_REVOLVER_ENGRAVED_GOON_VARIANT */;
						break;
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22964 /* Tunable: 458535408 */;
						break;
				}
				break;
			case joaat("WEAPON_COMPACTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_15064 /* Tunable: ADDONS_COMPACT_RIFLE_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
						iVar0 = Global_262145.f_16638 /* Tunable: ADDONS_COMPACT_RIFLE_DRUM_MAGAZINE */;
						break;
				}
				break;
			case joaat("WEAPON_DBSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_DBSHOTGUN_CLIP_01"):
						iVar0 = 0;
						break;
				}
				break;
			case joaat("WEAPON_MINISMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINISMG_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MINISMG_CLIP_02"):
						iVar0 = Global_262145.f_19087 /* Tunable: 1482389140 */;
						break;
				}
				break;
			case joaat("WEAPON_COMBATPDW"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPDW_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_COMBATPDW_CLIP_02"):
						iVar0 = Global_262145.f_21120 /* Tunable: LUXE1_COMBATPDW_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_COMBATPDW_CLIP_03"):
						iVar0 = Global_262145.f_16640 /* Tunable: ADDONS_PDW_DRUM_MAGAZINE */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_21121 /* Tunable: LUXE1_COMBATPDW_FLASHLIGHT */;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = Global_262145.f_21123 /* Tunable: LUXE1_COMBATPDW_SCOPE */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_21122 /* Tunable: LUXE1_COMBATPDW_GRIP */;
						break;
				}
				break;
			case joaat("WEAPON_ASSAULTRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21243 /* Tunable: -1550181012 */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_21244 /* Tunable: 599186436 */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21245 /* Tunable: 1538620212 */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21246 /* Tunable: -170097190 */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21247 /* Tunable: -1387455740 */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_21248 /* Tunable: -325408568 */;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_21249 /* Tunable: -82364995 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_21250 /* Tunable: -229542830 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_21251 /* Tunable: 1327976003 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_21252 /* Tunable: -618034935 */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_21253 /* Tunable: -1721486303 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_21254 /* Tunable: -240242887 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_21255 /* Tunable: 1111019601 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_21256 /* Tunable: 1417573596 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_21257 /* Tunable: 648354090 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_21258 /* Tunable: -1500342013 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_21259 /* Tunable: -80395705 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_21260 /* Tunable: 225896138 */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_21261 /* Tunable: -946948419 */;
						break;
					case joaat("COMPONENT_AT_AR_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_AR_BARREL_02"):
						iVar0 = Global_262145.f_21262 /* Tunable: 628289383 */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_CARBINERIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21263 /* Tunable: 1286553594 */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_21264 /* Tunable: -1398112727 */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21265 /* Tunable: 1311192953 */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21266 /* Tunable: -577265450 */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21267 /* Tunable: 441926214 */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_21268 /* Tunable: -1137873158 */;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_21269 /* Tunable: 757231685 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_21270 /* Tunable: 1743852487 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_21271 /* Tunable: 1889225718 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_21272 /* Tunable: 1808408105 */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_21273 /* Tunable: 998096574 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_21274 /* Tunable: 42291623 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_21275 /* Tunable: 918075921 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_21276 /* Tunable: -253841830 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_21277 /* Tunable: -554038639 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_21278 /* Tunable: -851712235 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_21279 /* Tunable: -1149353062 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_21280 /* Tunable: -1211679700 */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_21281 /* Tunable: -1770903800 */;
						break;
					case joaat("COMPONENT_AT_CR_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_CR_BARREL_02"):
						iVar0 = Global_262145.f_21282 /* Tunable: 120043539 */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_COMBATMG_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21283 /* Tunable: 1898572754 */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_21284 /* Tunable: -980014447 */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21285 /* Tunable: 954938707 */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21286 /* Tunable: 1734159338 */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21287 /* Tunable: 994554097 */;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_21288 /* Tunable: 320273484 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_21289 /* Tunable: -300742141 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_21290 /* Tunable: -1429921876 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_21291 /* Tunable: 1509305655 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_21292 /* Tunable: -49677055 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_21293 /* Tunable: 2089647114 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_21294 /* Tunable: 1816386423 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_21295 /* Tunable: -1717619155 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_21296 /* Tunable: -2014801216 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_21297 /* Tunable: 902950516 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_21298 /* Tunable: 562283992 */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_21299 /* Tunable: 1292930355 */;
						break;
					case joaat("COMPONENT_AT_MG_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_MG_BARREL_02"):
						iVar0 = Global_262145.f_21300 /* Tunable: 1947193436 */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_HEAVYSNIPER_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21301 /* Tunable: 330899918 */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_21302 /* Tunable: 917018525 */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21304 /* Tunable: 884234768 */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21305 /* Tunable: 1088190767 */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
						iVar0 = Global_262145.f_21303 /* Tunable: -1206093715 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
						iVar0 = Global_262145.f_21306 /* Tunable: 579562015 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_SCOPE_NV"):
						iVar0 = Global_262145.f_21307 /* Tunable: 544428193 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_THERMAL"):
						iVar0 = Global_262145.f_21308 /* Tunable: -707213005 */;
						break;
					case joaat("COMPONENT_AT_SR_SUPP_03"):
						iVar0 = Global_262145.f_21309 /* Tunable: 1674324405 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_08"):
						iVar0 = Global_262145.f_21310 /* Tunable: 291821001 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_09"):
						iVar0 = Global_262145.f_21311 /* Tunable: 1067332155 */;
						break;
					case joaat("COMPONENT_AT_SR_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_SR_BARREL_02"):
						iVar0 = Global_262145.f_21312 /* Tunable: 2037426926 */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_PISTOL_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21313 /* Tunable: 1430566154 */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_21315 /* Tunable: -1046185578 */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21314 /* Tunable: -506102803 */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21316 /* Tunable: 1296166421 */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21317 /* Tunable: 1866512725 */;
						break;
					case joaat("COMPONENT_AT_PI_FLSH_02"):
						iVar0 = Global_262145.f_21318 /* Tunable: -1999312528 */;
						break;
					case joaat("COMPONENT_AT_PI_RAIL"):
						iVar0 = Global_262145.f_21319 /* Tunable: 1055846757 */;
						break;
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = Global_262145.f_21320 /* Tunable: 1378860015 */;
						break;
					case joaat("COMPONENT_AT_PI_COMP"):
						iVar0 = Global_262145.f_21321 /* Tunable: 1792089868 */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_SMG_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SMG_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21322 /* Tunable: -220053906 */;
						break;
					case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_21324 /* Tunable: -952131423 */;
						break;
					case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21323 /* Tunable: -1897517534 */;
						break;
					case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21325 /* Tunable: -977321503 */;
						break;
					case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21326 /* Tunable: -1188309354 */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_21327 /* Tunable: -2017541960 */;
						break;
					case joaat("COMPONENT_AT_SIGHTS_SMG"):
						iVar0 = Global_262145.f_21328 /* Tunable: 1261888316 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
						iVar0 = Global_262145.f_21329 /* Tunable: 735171511 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
						iVar0 = Global_262145.f_21330 /* Tunable: -1290434805 */;
						break;
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_21331 /* Tunable: 662271695 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_21332 /* Tunable: 1781046189 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_21333 /* Tunable: -1288131124 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_21334 /* Tunable: -1129922392 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_21335 /* Tunable: 129226433 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_21336 /* Tunable: -1594095277 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_21337 /* Tunable: -444427681 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_21338 /* Tunable: -137611534 */;
						break;
					case joaat("COMPONENT_AT_SB_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_SB_BARREL_02"):
						iVar0 = Global_262145.f_21339 /* Tunable: 946764522 */;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_PUMPSHOTGUN_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_22993 /* Tunable: 1652287555 */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
						iVar0 = Global_262145.f_22994 /* Tunable: -535703975 */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_22992 /* Tunable: 95511928 */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22991 /* Tunable: -665155806 */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_23020 /* Tunable: 307884450 */;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_23021 /* Tunable: 1712943577 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_23022 /* Tunable: -1605498735 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_23023 /* Tunable: -1766164400 */;
						break;
					case joaat("COMPONENT_AT_SR_SUPP_03"):
						iVar0 = Global_262145.f_23024 /* Tunable: 1535840470 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_08"):
						iVar0 = Global_262145.f_23025 /* Tunable: 179346571 */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_SPECIALCARBINE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_22995 /* Tunable: -1133159623 */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_22999 /* Tunable: 884315323 */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22997 /* Tunable: 117177146 */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22998 /* Tunable: 1711440619 */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22996 /* Tunable: 1515067404 */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_23026 /* Tunable: -675401976 */;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_23027 /* Tunable: 1348404810 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_23028 /* Tunable: 1661135184 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_23029 /* Tunable: -622756256 */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_23030 /* Tunable: 1005673153 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_23031 /* Tunable: -2043761976 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_23032 /* Tunable: 1467944449 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_23033 /* Tunable: 2104462570 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_23034 /* Tunable: -686370155 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_23035 /* Tunable: 1322082777 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_23036 /* Tunable: -189707864 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_23037 /* Tunable: 1794058860 */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_23038 /* Tunable: -77140556 */;
						break;
					case joaat("COMPONENT_AT_SC_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_SC_BARREL_02"):
						iVar0 = Global_262145.f_23039 /* Tunable: 1028863717 */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_SNSPISTOL_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
						iVar0 = Global_262145.f_23910 /* Tunable: -1086352658 */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_23015 /* Tunable: -1789606801 */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_23017 /* Tunable: -843751922 */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_23016 /* Tunable: 839487066 */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_23014 /* Tunable: -1383425686 */;
						break;
					case joaat("COMPONENT_AT_PI_FLSH_03"):
						iVar0 = Global_262145.f_23071 /* Tunable: -291501777 */;
						break;
					case joaat("COMPONENT_AT_PI_RAIL_02"):
						iVar0 = Global_262145.f_23072 /* Tunable: -1122806840 */;
						break;
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = Global_262145.f_23073 /* Tunable: -353555220 */;
						break;
					case joaat("COMPONENT_AT_PI_COMP_02"):
						iVar0 = Global_262145.f_23074 /* Tunable: -537982964 */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_MARKSMANRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_23000 /* Tunable: -1378447114 */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_23004 /* Tunable: -402362564 */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_23002 /* Tunable: -901067049 */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_23003 /* Tunable: 148273883 */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_23001 /* Tunable: -1383428803 */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_23040 /* Tunable: -852920589 */;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_23041 /* Tunable: -235285662 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_23042 /* Tunable: 947508682 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_23043 /* Tunable: -829621681 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_23044 /* Tunable: -1449227090 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_23045 /* Tunable: -1300374254 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_23046 /* Tunable: 989071156 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_23047 /* Tunable: 1338637515 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_23048 /* Tunable: -1766547494 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_23049 /* Tunable: -1090214635 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_23050 /* Tunable: 532703720 */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_23051 /* Tunable: -2106260249 */;
						break;
					case joaat("COMPONENT_AT_MRFL_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_MRFL_BARREL_02"):
						iVar0 = Global_262145.f_23052 /* Tunable: -249998032 */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_REVOLVER_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_23005 /* Tunable: 1955558754 */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_23006 /* Tunable: 38016460 */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_23008 /* Tunable: 784593552 */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_23007 /* Tunable: 1408548101 */;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_23053 /* Tunable: 1857338618 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_23054 /* Tunable: 1760541515 */;
						break;
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = Global_262145.f_23055 /* Tunable: 141245052 */;
						break;
					case joaat("COMPONENT_AT_PI_COMP_03"):
						iVar0 = Global_262145.f_23056 /* Tunable: -1827907706 */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_BULLPUPRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_23009 /* Tunable: -316590252 */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_23013 /* Tunable: -2001892987 */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_23011 /* Tunable: 545820391 */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_23012 /* Tunable: 794018680 */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_23010 /* Tunable: -493624257 */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_23057 /* Tunable: 1592341943 */;
						break;
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_23058 /* Tunable: 2078892836 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
						iVar0 = Global_262145.f_23059 /* Tunable: 1554127006 */;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_23060 /* Tunable: -1314225140 */;
						break;
					case joaat("COMPONENT_AT_BP_BARREL_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_BP_BARREL_02"):
						iVar0 = Global_262145.f_23070 /* Tunable: -2119010024 */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_23061 /* Tunable: -1948594273 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_23062 /* Tunable: 21146921 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_23063 /* Tunable: 1358418183 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_23064 /* Tunable: 1464361534 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_23065 /* Tunable: -268389376 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_23066 /* Tunable: -1823864223 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_23067 /* Tunable: -574324148 */;
						break;
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_23068 /* Tunable: 999664111 */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_23069 /* Tunable: -1915566950 */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			case joaat("WEAPON_RAYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
						iVar0 = 0;
						break;
				}
				break;
			case joaat("WEAPON_CERAMICPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_28685 /* Tunable: 453457679 */;
						break;
					case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
						iVar0 = Global_262145.f_28686 /* Tunable: 143602352 */;
						break;
				}
				break;
			case joaat("WEAPON_COMBATSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATSHOTGUN_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_30824 /* Tunable: IH_COMBAT_SHOTGUN_FLASHLIGHT */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_30825 /* Tunable: IH_COMBAT_SHOTGUN_SUPPRESSOR */;
						break;
				}
				break;
			case joaat("WEAPON_GADGETPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_GADGETPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
				}
				break;
			case joaat("WEAPON_MILITARYRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MILITARYRIFLE_CLIP_01"):
						iVar0 = Global_262145.f_30810 /* Tunable: IH_MILITARY_RIFLE_DEFAULT_CLIP */;
						break;
					case joaat("COMPONENT_MILITARYRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_30811 /* Tunable: IH_MILITARY_RIFLE_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_MILITARYRIFLE_SIGHT_01"):
						iVar0 = Global_262145.f_30812 /* Tunable: IH_MILITARY_RIFLE_IRON_SIGHTS */;
						break;
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = Global_262145.f_30813 /* Tunable: IH_MILITARY_RIFLE_SCOPE */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_30814 /* Tunable: IH_MILITARY_RIFLE_FLASHLIGHT */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_30815 /* Tunable: IH_MILITARY_RIFLE_SUPPRESSOR */;
						break;
				}
				break;
			case joaat("WEAPON_HEAVYRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYRIFLE_CLIP_01"):
						iVar0 = Global_262145.f_31958 /* Tunable: FIXER_HEAVY_RIFLE_DEFAULT_CLIP */;
						break;
					case joaat("COMPONENT_HEAVYRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_31959 /* Tunable: FIXER_HEAVY_RIFLE_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
						iVar0 = Global_262145.f_31991 /* Tunable: FIXER_THE_FAMILIES_FINISH */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_31964 /* Tunable: FIXER_HEAVY_RIFLE_GRIP */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_31962 /* Tunable: FIXER_HEAVY_RIFLE_FLASHLIGHT */;
						break;
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = Global_262145.f_31961 /* Tunable: FIXER_HEAVY_RIFLE_SCOPE */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_31963 /* Tunable: FIXER_HEAVY_RIFLE_SUPPRESSOR */;
						break;
					case joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"):
						iVar0 = Global_262145.f_31960 /* Tunable: FIXER_HEAVY_RIFLE_IRON_SIGHTS */;
						break;
				}
				break;
			case joaat("WEAPON_TACTICALRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_33124 /* Tunable: SU22_SERVICE_CARBINE_EXTENDED_CLIP */;
						break;
					case joaat("COMPONENT_AT_AR_FLSH_REH"):
						iVar0 = Global_262145.f_33126 /* Tunable: SU22_SERVICE_CARBINE_FLASHLIGHT */;
						break;
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_33127 /* Tunable: SU22_SERVICE_CARBINE_SUPPRESSOR */;
						break;
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_33125 /* Tunable: SU22_SERVICE_CARBINE_GRIP */;
						break;
				}
				break;
			default:
				iVar6 = __LIB_0__::func_289(iParam0, &uVar8);
				if (iVar6 != -1)
				{
					iVar7 = 0;
					while (iVar7 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar6))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar6, iVar7, &Var9))
						{
							if (!__LIB_0__::func_288(Var9.f_3))
							{
								if (Var9.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (Var9.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var9.f_5;
									}
								}
							}
						}
						iVar7++;
					}
				}
				break;
			}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538())
	{
		StringCopy(&Var11, __LIB_19__::func_181(iParam1, iParam0), 16);
		__LIB_4__::func_886(&sVar10, Var11, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 1, __LIB_3__::func_371(iParam0), __LIB_12__::func_581(iParam0), -1, 0, 0);
		if (NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&sVar10))
		{
			iVar0 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar10), joaat("CATEGORY_WEAPON_MOD"), true);
		}
	}
	if (iVar0 > 0)
	{
		fVar12 = func_477(iParam0, &iVar0, fVar1);
		if (fVar12 != 1f)
		{
		}
	}
	return iVar0;
}

float func_477(int iParam0, int iParam1, float fParam2)//Position - 0x49E6B
{
	float fVar0;
	float fVar1;
	int iVar2;
	fVar0 = 0f;
	fVar1 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538())
	{
		fVar1 = (fVar1 + __LIB_12__::func_580());
		fVar0 = (1f - fVar1);
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar0));
		return fVar0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fParam2));
	}
	if (!Global_78319)
	{
		if (*iParam1 != 0)
		{
			iVar2 = __LIB_37__::func_216(iParam0);
			if (iVar2 == 3)
			{
				fVar1 = 0.1f;
			}
			else if (iVar2 == 2)
			{
				fVar1 = 0.15f;
			}
			else if (iVar2 == 1)
			{
				fVar1 = 0.25f;
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iLocal_55 == 1)
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_77 /* Tunable: WEAPONS_SHOP_MULTIPLIER */));
			fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_132 /* Tunable: SHOP_GOODBOY_DISCOUNT_PERCENT */) / 100f));
		}
		if (iLocal_55 == 0)
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_77 /* Tunable: WEAPONS_SHOP_MULTIPLIER */));
			if (func_478())
			{
				fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_132 /* Tunable: SHOP_GOODBOY_DISCOUNT_PERCENT */) / 100f));
				iLocal_55 = 1;
			}
			else
			{
				iLocal_55 = -1;
			}
		}
		fVar1 = (fVar1 + __LIB_12__::func_580());
	}
	fVar0 = (1f - fVar1);
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar0));
	return fVar0;
}

int func_478()//Position - 0x49FA4
{
	int iVar0;
	int iVar1;
	float fVar2;
	if (MISC::IS_PC_VERSION())
	{
		return 0;
	}
	if (__LIB_0__::func_438())
	{
		if (func_482())
		{
			iVar0 = __LIB_13__::func_667();
			iVar1 = __LIB_12__::func_576();
			fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_262145.f_131 /* Tunable: SHOP_DISCOUNT_PERCENT */) && iVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_482()//Position - 0x4A0FA
{
	struct<7> Var0;
	struct<7> Var1;
	CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var1 = { __LIB_12__::func_579(joaat("MPPLY_STARTED_MP")) };
	if (func_483(Var1, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_483(struct<7> Param0, struct<7> Param1, int iParam2)//Position - 0x4A13E
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_13__::func_718(Param1);
	iVar1 = func_489(Param0, iParam2);
	if (iVar1 == -15)
	{
		return 0;
	}
	if (__LIB_11__::func_761(iVar0, iVar1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_489(struct<7> Param0, int iParam1)//Position - 0x4A399
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (__LIB_12__::func_577(Param0) == 0)
	{
		iVar0 = __LIB_13__::func_718(Param0);
		iVar1 = iVar0;
		__LIB_13__::func_827(&iVar1, 0, 0, 0, iParam1, 0, 0);
		if (iParam1 == 0)
		{
			iVar1 = iVar0;
		}
		return iVar1;
	}
	return uVar2;
}

bool func_517(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x4C31D
{
	struct<5> Var0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	char cVar4[64];
	struct<4> Var5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	*uParam1 = 0;
	*uParam2 = 0;
	*uParam3 = 0;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (iParam0)
		{
			case joaat("WEAPON_UNARMED"):
				if (iParam4 == 0)
				{
					*uParam1 = 500;
					*uParam2 = 500;
				}
				else if (iParam4 == 1)
				{
					*uParam1 = 1000;
					*uParam2 = 1000;
				}
				else if (iParam4 == 2)
				{
					*uParam1 = 1500;
					*uParam2 = 1500;
				}
				else if (iParam4 == 3)
				{
					*uParam1 = 2000;
					*uParam2 = 2000;
				}
				else if (iParam4 == 4)
				{
					*uParam1 = 2500;
					*uParam2 = 2500;
				}
				break;
			case joaat("GADGET_PARACHUTE"):
				*uParam1 = 100;
				*uParam2 = 100;
				break;
			case joaat("WEAPON_MICROSMG"):
				*uParam1 = 850;
				*uParam2 = 20;
				break;
			case joaat("WEAPON_SMG"):
				*uParam1 = 1300;
				*uParam2 = 38;
				break;
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				*uParam1 = 300;
				*uParam2 = 8;
				break;
			case joaat("WEAPON_PUMPSHOTGUN"):
				*uParam1 = 550;
				*uParam2 = 8;
				break;
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				*uParam1 = 1500;
				*uParam2 = 8;
				break;
			case joaat("WEAPON_ASSAULTRIFLE"):
				*uParam1 = 1400;
				*uParam2 = 36;
				break;
			case joaat("WEAPON_CARBINERIFLE"):
				*uParam1 = 2100;
				*uParam2 = 36;
				break;
			case joaat("WEAPON_ADVANCEDRIFLE"):
				*uParam1 = 3500;
				*uParam2 = 36;
				break;
			case joaat("WEAPON_SNIPERRIFLE"):
				*uParam1 = 5000;
				*uParam2 = 48;
				break;
			case joaat("WEAPON_HEAVYSNIPER"):
				*uParam1 = 9500;
				*uParam2 = 29;
				break;
			case joaat("WEAPON_MG"):
				*uParam1 = 3000;
				*uParam2 = 50;
				break;
			case joaat("WEAPON_COMBATMG"):
				*uParam1 = 3700;
				*uParam2 = 92;
				break;
			case joaat("WEAPON_RPG"):
				*uParam1 = 6500;
				*uParam2 = 100;
				break;
			case joaat("WEAPON_GRENADELAUNCHER"):
				*uParam1 = 8100;
				*uParam2 = 50;
				break;
			case joaat("WEAPON_MINIGUN"):
				*uParam1 = 15000;
				*uParam2 = 50;
				break;
			case joaat("WEAPON_KNIFE"):
				*uParam1 = 100;
				*uParam2 = 100;
				break;
			case joaat("WEAPON_NIGHTSTICK"):
				*uParam1 = 100;
				*uParam2 = 100;
				break;
			case joaat("WEAPON_STUNGUN"):
				*uParam1 = 100;
				*uParam2 = 50;
				break;
			case joaat("WEAPON_APPISTOL"):
				*uParam1 = 1000;
				*uParam2 = 25;
				break;
			case joaat("WEAPON_COMBATPISTOL"):
				*uParam1 = 600;
				*uParam2 = 19;
				break;
			case joaat("WEAPON_PISTOL"):
				*uParam1 = 350;
				*uParam2 = 19;
				break;
			case joaat("WEAPON_SMOKEGRENADE"):
				*uParam1 = 150;
				*uParam2 = 150;
				break;
			case joaat("WEAPON_GRENADE"):
				*uParam1 = 150;
				*uParam2 = 150;
				break;
			case joaat("WEAPON_STICKYBOMB"):
				*uParam1 = 400;
				*uParam2 = 400;
				break;
			case joaat("WEAPON_PETROLCAN"):
				*uParam1 = 25;
				*uParam2 = 25;
				break;
			case joaat("WEAPON_ASSAULTSMG"):
				*uParam1 = 0;
				*uParam2 = 38;
				break;
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				*uParam1 = 1250;
				*uParam2 = 8;
				break;
			case joaat("WEAPON_PISTOL50"):
				*uParam1 = 4000;
				*uParam2 = 19;
				break;
			case joaat("WEAPON_HAMMER"):
				*uParam1 = 500;
				*uParam2 = 0;
				break;
			case joaat("WEAPON_SPECIALCARBINE"):
				*uParam1 = 14750;
				*uParam2 = 108;
				break;
			case joaat("WEAPON_BULLPUPRIFLE"):
				*uParam1 = 14500;
				*uParam2 = 108;
				break;
			case joaat("WEAPON_RAILGUN"):
				*uParam1 = 250000;
				*uParam2 = 100;
				break;
			case joaat("WEAPON_HATCHET"):
				*uParam1 = 750;
				*uParam2 = 0;
				break;
			case joaat("WEAPON_HOMINGLAUNCHER"):
				*uParam1 = 15500;
				*uParam2 = 400;
				break;
			case joaat("WEAPON_PROXMINE"):
				*uParam1 = 750;
				*uParam2 = 750;
				break;
			case joaat("WEAPON_KNUCKLE"):
				*uParam1 = 7500;
				*uParam2 = 0;
				break;
			case joaat("WEAPON_MARKSMANPISTOL"):
				*uParam1 = 4350;
				*uParam2 = 5;
				break;
			case joaat("WEAPON_COMBATPDW"):
				*uParam1 = 11750;
				*uParam2 = 113;
				break;
			case joaat("WEAPON_MACHETE"):
				*uParam1 = 8900;
				*uParam2 = 0;
				break;
			case joaat("WEAPON_MACHINEPISTOL"):
				*uParam1 = 6250;
				*uParam2 = 85;
				break;
			case joaat("WEAPON_REVOLVER"):
				*uParam1 = Global_262145.f_9119 /* Tunable: DLC_WEAPON_REVOLVER */;
				*uParam2 = Global_262145.f_9120 /* Tunable: DLC_WEAPON_REVOLVER_AMMO */;
				break;
			case joaat("WEAPON_SWITCHBLADE"):
				*uParam1 = Global_262145.f_9121 /* Tunable: DLC_WEAPON_SWITCHBLADE */;
				*uParam2 = 0;
				break;
			default:
				if (__LIB_0__::func_289(iParam0, &Var0) != -1)
				{
					*uParam1 = Var0.f_3;
					*uParam2 = Var0.f_4;
				}
				break;
		}
		if ((iParam0 == joaat("WEAPON_BULLPUPSHOTGUN") || iParam0 == joaat("WEAPON_PISTOL50")) || iParam0 == joaat("WEAPON_HAMMER"))
		{
			if (__LIB_0__::func_116() && (__LIB_0__::func_164() || __LIB_0__::func_163()))
			{
				*uParam1 = 0;
			}
		}
		iVar1 = *uParam2;
		switch (iParam0)
		{
			case joaat("WEAPON_APPISTOL"):
				iVar1 = 25;
				break;
			case joaat("WEAPON_SNSPISTOL"):
				iVar1 = 10;
				break;
			case joaat("WEAPON_HEAVYPISTOL"):
				iVar1 = 100;
				break;
			case joaat("WEAPON_VINTAGEPISTOL"):
				iVar1 = 10;
				break;
			case joaat("WEAPON_MICROSMG"):
				iVar1 = 20;
				break;
			case joaat("WEAPON_SPECIALCARBINE"):
				iVar1 = 108;
				break;
			case joaat("WEAPON_BULLPUPRIFLE"):
				iVar1 = 108;
				break;
			case joaat("WEAPON_MG"):
				iVar1 = 50;
				break;
			case joaat("WEAPON_GUSENBERG"):
				iVar1 = 108;
				break;
			case joaat("WEAPON_HEAVYSHOTGUN"):
				iVar1 = 18;
				break;
			case joaat("WEAPON_MUSKET"):
				iVar1 = 15;
				break;
			case joaat("WEAPON_HEAVYSNIPER"):
				iVar1 = 29;
				break;
			case joaat("WEAPON_MARKSMANRIFLE"):
				iVar1 = 87;
				break;
		}
		if (*uParam2 != iVar1)
		{
			*uParam2 = iVar1;
		}
	}
	else
	{
		iVar2 = -1;
		switch (iParam0)
		{
			case joaat("WEAPON_UNARMED"):
				if (iParam4 == 0)
				{
					*uParam1 = 100;
					*uParam2 = 100;
				}
				else if (iParam4 == 1)
				{
					*uParam1 = 200;
					*uParam2 = 200;
				}
				else if (iParam4 == 2)
				{
					*uParam1 = 300;
					*uParam2 = 300;
				}
				else if (iParam4 == 3)
				{
					*uParam1 = 400;
					*uParam2 = 400;
				}
				else if (iParam4 == 4)
				{
					*uParam1 = 500;
					*uParam2 = 500;
				}
				if (iParam4 == 0)
				{
					*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_2828 /* Tunable: PLAYERKIT_SUPERLIGHTARMOUR_EXPENDITURE_TUNABLE */));
					*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_262145.f_2828 /* Tunable: PLAYERKIT_SUPERLIGHTARMOUR_EXPENDITURE_TUNABLE */));
				}
				else if (iParam4 == 1)
				{
					*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_2829 /* Tunable: PLAYERKIT_LIGHTARMOUR_EXPENDITURE_TUNABLE */));
					*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_262145.f_2829 /* Tunable: PLAYERKIT_LIGHTARMOUR_EXPENDITURE_TUNABLE */));
				}
				else if (iParam4 == 2)
				{
					*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_2830 /* Tunable: PLAYERKIT_STANDARDARMOUR_EXPENDITURE_TUNABLE */));
					*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_262145.f_2830 /* Tunable: PLAYERKIT_STANDARDARMOUR_EXPENDITURE_TUNABLE */));
				}
				else if (iParam4 == 3)
				{
					*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_2831 /* Tunable: PLAYERKIT_HEAVYARMOUR_EXPENDITURE_TUNABLE */));
					*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_262145.f_2831 /* Tunable: PLAYERKIT_HEAVYARMOUR_EXPENDITURE_TUNABLE */));
				}
				else if (iParam4 == 4)
				{
					*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_2832 /* Tunable: PLAYERKIT_SUPERHEAVYARMOUR_EXPENDITURE_TUNABLE */));
					*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_262145.f_2832 /* Tunable: PLAYERKIT_SUPERHEAVYARMOUR_EXPENDITURE_TUNABLE */));
				}
				iVar2 = 16;
				break;
			case joaat("GADGET_PARACHUTE"):
				*uParam1 = 500;
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_2673 /* Tunable: PLAYERKIT_FM_PARACHUTE_EXPENDITURE_TUNABLE */));
				*uParam2 = 500;
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_262145.f_2673 /* Tunable: PLAYERKIT_FM_PARACHUTE_EXPENDITURE_TUNABLE */));
				iVar2 = 99;
				break;
			case joaat("WEAPON_MICROSMG"):
				if (Global_262145.f_2357 /* Tunable: MICRO_SMG_MODIFIER */ == -1)
				{
					*uParam1 = 3750;
				}
				else
				{
					*uParam1 = Global_262145.f_2357 /* Tunable: MICRO_SMG_MODIFIER */;
				}
				if (Global_262145.f_2386 /* Tunable: MICRO_SMG_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 60;
				}
				else
				{
					*uParam2 = Global_262145.f_2386 /* Tunable: MICRO_SMG_AMMO_MODIFIER */;
				}
				iVar2 = 1;
				break;
			case joaat("WEAPON_SMG"):
				if (Global_262145.f_2358 /* Tunable: SMG_MODIFIER */ == -1)
				{
					*uParam1 = 7500;
				}
				else
				{
					*uParam1 = Global_262145.f_2358 /* Tunable: SMG_MODIFIER */;
				}
				if (Global_262145.f_2387 /* Tunable: SMG_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 113;
				}
				else
				{
					*uParam2 = Global_262145.f_2387 /* Tunable: SMG_AMMO_MODIFIER */;
				}
				iVar2 = 1;
				break;
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				if (Global_262145.f_2368 /* Tunable: SAWEDOFF_SHOTGUN_MODIFIER */ == -1)
				{
					*uParam1 = 0;
				}
				else
				{
					*uParam1 = Global_262145.f_2368 /* Tunable: SAWEDOFF_SHOTGUN_MODIFIER */;
				}
				if (Global_262145.f_2397 /* Tunable: SAWEDOFF_SHOTGUN_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2397 /* Tunable: SAWEDOFF_SHOTGUN_AMMO_MODIFIER */;
				}
				iVar2 = 2;
				break;
			case joaat("WEAPON_PUMPSHOTGUN"):
				if (Global_262145.f_2367 /* Tunable: PUMP_SHOTGUN_MODIFIER */ == -1)
				{
					*uParam1 = 3500;
				}
				else
				{
					*uParam1 = Global_262145.f_2367 /* Tunable: PUMP_SHOTGUN_MODIFIER */;
				}
				if (Global_262145.f_2396 /* Tunable: PUMP_SHOTGUN_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2396 /* Tunable: PUMP_SHOTGUN_AMMO_MODIFIER */;
				}
				iVar2 = 2;
				break;
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				if (Global_262145.f_2370 /* Tunable: ASSAULT_SHOTGUN_MODIFIER */ == -1)
				{
					*uParam1 = 10000;
				}
				else
				{
					*uParam1 = Global_262145.f_2370 /* Tunable: ASSAULT_SHOTGUN_MODIFIER */;
				}
				if (Global_262145.f_2399 /* Tunable: ASSAULT_SHOTGUN_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2399 /* Tunable: ASSAULT_SHOTGUN_AMMO_MODIFIER */;
				}
				iVar2 = 2;
				break;
			case joaat("WEAPON_ASSAULTRIFLE"):
				if (Global_262145.f_2360 /* Tunable: ASSAULT_RIFLE_MODIFIER */ == -1)
				{
					*uParam1 = 8550;
				}
				else
				{
					*uParam1 = Global_262145.f_2360 /* Tunable: ASSAULT_RIFLE_MODIFIER */;
				}
				if (Global_262145.f_2389 /* Tunable: ASSAULT_RIFLE_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_262145.f_2389 /* Tunable: ASSAULT_RIFLE_AMMO_MODIFIER */;
				}
				iVar2 = 3;
				break;
			case joaat("WEAPON_CARBINERIFLE"):
				if (Global_262145.f_2361 /* Tunable: CARBINE_RIFLE_MODIFIER */ == -1)
				{
					*uParam1 = 13000;
				}
				else
				{
					*uParam1 = Global_262145.f_2361 /* Tunable: CARBINE_RIFLE_MODIFIER */;
				}
				if (Global_262145.f_2390 /* Tunable: CARBINE_RIFLE_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_262145.f_2390 /* Tunable: CARBINE_RIFLE_AMMO_MODIFIER */;
				}
				iVar2 = 3;
				break;
			case joaat("WEAPON_ADVANCEDRIFLE"):
				if (Global_262145.f_2363 /* Tunable: ADVANCED_RIFLE_MODIFIER */ == -1)
				{
					*uParam1 = 14250;
				}
				else
				{
					*uParam1 = Global_262145.f_2363 /* Tunable: ADVANCED_RIFLE_MODIFIER */;
				}
				if (Global_262145.f_2392 /* Tunable: ADVANCED_RIFLE_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_262145.f_2392 /* Tunable: ADVANCED_RIFLE_AMMO_MODIFIER */;
				}
				iVar2 = 3;
				break;
			case joaat("WEAPON_SNIPERRIFLE"):
				if (Global_262145.f_2373 /* Tunable: SNIPER_RIFLE_MODIFIER */ == -1)
				{
					*uParam1 = 20000;
				}
				else
				{
					*uParam1 = Global_262145.f_2373 /* Tunable: SNIPER_RIFLE_MODIFIER */;
				}
				if (Global_262145.f_2402 /* Tunable: SNIPER_RIFLE_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 145;
				}
				else
				{
					*uParam2 = Global_262145.f_2402 /* Tunable: SNIPER_RIFLE_AMMO_MODIFIER */;
				}
				iVar2 = 4;
				break;
			case joaat("WEAPON_HEAVYSNIPER"):
				if (Global_262145.f_2371 /* Tunable: HEAVY_SNIPER_MODIFIER */ == -1)
				{
					*uParam1 = 38150;
				}
				else
				{
					*uParam1 = Global_262145.f_2371 /* Tunable: HEAVY_SNIPER_MODIFIER */;
				}
				if (Global_262145.f_2400 /* Tunable: HEAVY_SNIPER_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 87;
				}
				else
				{
					*uParam2 = Global_262145.f_2400 /* Tunable: HEAVY_SNIPER_AMMO_MODIFIER */;
				}
				iVar2 = 4;
				break;
			case joaat("WEAPON_MG"):
				if (Global_262145.f_2364 /* Tunable: MG_MODIFIER */ == -1)
				{
					*uParam1 = 13500;
				}
				else
				{
					*uParam1 = Global_262145.f_2364 /* Tunable: MG_MODIFIER */;
				}
				if (Global_262145.f_2393 /* Tunable: MG_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 150;
				}
				else
				{
					*uParam2 = Global_262145.f_2393 /* Tunable: MG_AMMO_MODIFIER */;
				}
				iVar2 = 5;
				break;
			case joaat("WEAPON_COMBATMG"):
				if (Global_262145.f_2365 /* Tunable: COMBAT_MG_MODIFIER */ == -1)
				{
					*uParam1 = 14800;
				}
				else
				{
					*uParam1 = Global_262145.f_2365 /* Tunable: COMBAT_MG_MODIFIER */;
				}
				if (Global_262145.f_2394 /* Tunable: COMBAT_MG_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 277;
				}
				else
				{
					*uParam2 = Global_262145.f_2394 /* Tunable: COMBAT_MG_AMMO_MODIFIER */;
				}
				iVar2 = 5;
				break;
			case joaat("WEAPON_RPG"):
				if (Global_262145.f_2376 /* Tunable: RPG_MODIFIER */ == -1)
				{
					*uParam1 = 26250;
				}
				else
				{
					*uParam1 = Global_262145.f_2376 /* Tunable: RPG_MODIFIER */;
				}
				if (Global_262145.f_2405 /* Tunable: RPG_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 1000;
				}
				else
				{
					*uParam2 = Global_262145.f_2405 /* Tunable: RPG_AMMO_MODIFIER */;
				}
				iVar2 = 6;
				break;
			case joaat("WEAPON_GRENADELAUNCHER"):
				if (Global_262145.f_2375 /* Tunable: GRENADE_LAUNCHER_MODIFIER */ == -1)
				{
					*uParam1 = 32400;
				}
				else
				{
					*uParam1 = Global_262145.f_2375 /* Tunable: GRENADE_LAUNCHER_MODIFIER */;
				}
				if (Global_262145.f_2404 /* Tunable: GRENADE_LAUNCHER_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 5000;
				}
				else
				{
					*uParam2 = Global_262145.f_2404 /* Tunable: GRENADE_LAUNCHER_AMMO_MODIFIER */;
				}
				iVar2 = 6;
				break;
			case joaat("WEAPON_MINIGUN"):
				if (Global_262145.f_2377 /* Tunable: MINIGUN_MODIFIER */ == -1)
				{
					*uParam1 = 50000;
				}
				else
				{
					*uParam1 = Global_262145.f_2377 /* Tunable: MINIGUN_MODIFIER */;
				}
				if (Global_262145.f_2406 /* Tunable: MINIGUN_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 150;
				}
				else
				{
					*uParam2 = Global_262145.f_2406 /* Tunable: MINIGUN_AMMO_MODIFIER */;
				}
				iVar2 = 6;
				break;
			case joaat("WEAPON_KNIFE"):
				if (Global_262145.f_2410 /* Tunable: KNIFE_MODIFIER */ == -1)
				{
					*uParam1 = 400;
				}
				else
				{
					*uParam1 = Global_262145.f_2410 /* Tunable: KNIFE_MODIFIER */;
				}
				if (Global_262145.f_2416 /* Tunable: KNIFE_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 100;
				}
				else
				{
					*uParam2 = Global_262145.f_2416 /* Tunable: KNIFE_AMMO_MODIFIER */;
				}
				iVar2 = 7;
				break;
			case joaat("WEAPON_NIGHTSTICK"):
				if (Global_262145.f_2411 /* Tunable: MININIGHTSTICK_MODIFIER */ == -1)
				{
					*uParam1 = 400;
				}
				else
				{
					*uParam1 = Global_262145.f_2411 /* Tunable: MININIGHTSTICK_MODIFIER */;
				}
				if (Global_262145.f_2417 /* Tunable: NIGHTSTICK_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 100;
				}
				else
				{
					*uParam2 = Global_262145.f_2417 /* Tunable: NIGHTSTICK_AMMO_MODIFIER */;
				}
				iVar2 = 7;
				break;
			case joaat("WEAPON_DAGGER"):
				if (Global_262145.f_7666 /* Tunable: DLC_WEAPON_DAGGER */ == -1)
				{
					*uParam1 = 400;
				}
				else
				{
					*uParam1 = Global_262145.f_7666 /* Tunable: DLC_WEAPON_DAGGER */;
				}
				if (Global_262145.f_7668 /* Tunable: DLC_WEAPON_ADDON_DAGGER_AMMO */ == -1)
				{
					*uParam2 = 85;
				}
				else
				{
					*uParam2 = Global_262145.f_7668 /* Tunable: DLC_WEAPON_ADDON_DAGGER_AMMO */;
				}
				iVar2 = 7;
				break;
			case joaat("WEAPON_STUNGUN"):
				*uParam1 = 100;
				*uParam2 = 50;
				break;
			case joaat("WEAPON_APPISTOL"):
				if (Global_262145.f_2356 /* Tunable: AP_PISTOL_MODIFIER */ == -1)
				{
					*uParam1 = 5000;
				}
				else
				{
					*uParam1 = Global_262145.f_2356 /* Tunable: AP_PISTOL_MODIFIER */;
				}
				if (Global_262145.f_2385 /* Tunable: AP_PISTOL_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 85;
				}
				else
				{
					*uParam2 = Global_262145.f_2385 /* Tunable: AP_PISTOL_AMMO_MODIFIER */;
				}
				iVar2 = 8;
				break;
			case joaat("WEAPON_COMBATPISTOL"):
				if (Global_262145.f_2354 /* Tunable: COMBAT_PISTOL_MODIFIER */ == -1)
				{
					*uParam1 = 3200;
				}
				else
				{
					*uParam1 = Global_262145.f_2354 /* Tunable: COMBAT_PISTOL_MODIFIER */;
				}
				if (Global_262145.f_2383 /* Tunable: COMBAT_PISTOL_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 57;
				}
				else
				{
					*uParam2 = Global_262145.f_2383 /* Tunable: COMBAT_PISTOL_AMMO_MODIFIER */;
				}
				iVar2 = 8;
				break;
			case joaat("WEAPON_PISTOL"):
				if (Global_262145.f_2353 /* Tunable: PISTOL_MODIFIER */ == -1)
				{
					*uParam1 = 2500;
				}
				else
				{
					*uParam1 = Global_262145.f_2353 /* Tunable: PISTOL_MODIFIER */;
				}
				if (Global_262145.f_2382 /* Tunable: PISTOL_AMMO_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 57;
				}
				else
				{
					*uParam2 = Global_262145.f_2382 /* Tunable: PISTOL_AMMO_AMMO_MODIFIER */;
				}
				iVar2 = 8;
				break;
			case joaat("WEAPON_SMOKEGRENADE"):
				if (Global_262145.f_2378 /* Tunable: TEARGAS_MODIFIER */ == -1)
				{
					*uParam1 = 150;
				}
				else
				{
					*uParam1 = Global_262145.f_2378 /* Tunable: TEARGAS_MODIFIER */;
				}
				if (Global_262145.f_2415 /* Tunable: TEARGAS_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 150;
				}
				else
				{
					*uParam2 = Global_262145.f_2415 /* Tunable: TEARGAS_AMMO_MODIFIER */;
				}
				iVar2 = 9;
				break;
			case joaat("WEAPON_GRENADE"):
				if (Global_262145.f_2408 /* Tunable: GRENADE_MODIFIER */ == -1)
				{
					*uParam1 = 250;
				}
				else
				{
					*uParam1 = Global_262145.f_2408 /* Tunable: GRENADE_MODIFIER */;
				}
				if (Global_262145.f_2414 /* Tunable: GRENADE_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 250;
				}
				else
				{
					*uParam2 = Global_262145.f_2414 /* Tunable: GRENADE_AMMO_MODIFIER */;
				}
				iVar2 = 9;
				break;
			case joaat("WEAPON_STICKYBOMB"):
				if (Global_262145.f_2407 /* Tunable: STICKYBOMB_MODIFIER */ == -1)
				{
					*uParam1 = 600;
				}
				else
				{
					*uParam1 = Global_262145.f_2407 /* Tunable: STICKYBOMB_MODIFIER */;
				}
				if (Global_262145.f_2413 /* Tunable: STICKYBOMB_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 600;
				}
				else
				{
					*uParam2 = Global_262145.f_2413 /* Tunable: STICKYBOMB_AMMO_MODIFIER */;
				}
				iVar2 = 9;
				break;
			case joaat("WEAPON_PETROLCAN"):
				if (Global_262145.f_2379 /* Tunable: JERRYCAN_MODIFIER */ == -1)
				{
					*uParam1 = 100;
				}
				else
				{
					*uParam1 = Global_262145.f_2379 /* Tunable: JERRYCAN_MODIFIER */;
				}
				*uParam2 = Global_262145.f_12003 /* Tunable: JERRYCANFUEL_MODIFIER */;
				iVar2 = 10;
				break;
			case joaat("WEAPON_ASSAULTSMG"):
				if (Global_262145.f_2359 /* Tunable: ASSAULT_SMG_MODIFIER */ == -1)
				{
					*uParam1 = 12550;
				}
				else
				{
					*uParam1 = Global_262145.f_2359 /* Tunable: ASSAULT_SMG_MODIFIER */;
				}
				if (Global_262145.f_2388 /* Tunable: ASSAULT_SMG_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 113;
				}
				else
				{
					*uParam2 = Global_262145.f_2388 /* Tunable: ASSAULT_SMG_AMMO_MODIFIER */;
				}
				iVar2 = 1;
				break;
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				if (Global_262145.f_2369 /* Tunable: BULLPUP_SHOTGUN_MODIFIER */ == -1)
				{
					*uParam1 = 8000;
				}
				else
				{
					*uParam1 = Global_262145.f_2369 /* Tunable: BULLPUP_SHOTGUN_MODIFIER */;
				}
				if (Global_262145.f_2398 /* Tunable: BULLPUP_SHOTGUN_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2398 /* Tunable: BULLPUP_SHOTGUN_AMMO_MODIFIER */;
				}
				if (__LIB_0__::func_116() && (__LIB_0__::func_163() || __LIB_0__::func_164()))
				{
					*uParam1 = 0;
				}
				iVar2 = 2;
				break;
			case joaat("WEAPON_PISTOL50"):
				if (Global_262145.f_2355 /* Tunable: PISTOL50_MODIFIER */ == -1)
				{
					*uParam1 = 3900;
				}
				else
				{
					*uParam1 = Global_262145.f_2355 /* Tunable: PISTOL50_MODIFIER */;
				}
				if (Global_262145.f_2384 /* Tunable: PISTOL50_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 57;
				}
				else
				{
					*uParam2 = Global_262145.f_2384 /* Tunable: PISTOL50_AMMO_MODIFIER */;
				}
				if (__LIB_0__::func_116() && (__LIB_0__::func_163() || __LIB_0__::func_164()))
				{
					*uParam1 = 0;
				}
				iVar2 = 8;
				break;
			case joaat("WEAPON_HAMMER"):
				if (Global_262145.f_2381 /* Tunable: HAMMER_MODIFIER */ == -1)
				{
					*uParam1 = 500;
				}
				else
				{
					*uParam1 = Global_262145.f_2381 /* Tunable: HAMMER_MODIFIER */;
				}
				*uParam2 = 0;
				if (__LIB_0__::func_116() && (__LIB_0__::func_163() || __LIB_0__::func_164()))
				{
					*uParam1 = 0;
				}
				iVar2 = 7;
				break;
			case joaat("WEAPON_SNSPISTOL"):
				*uParam1 = Global_262145.f_7661 /* Tunable: DLC_WEAPON_SNS_PISTOL */;
				*uParam2 = Global_262145.f_7656 /* Tunable: DLC_WEAPON_ADDON_SNS_PISTOL_AMMO */;
				iVar2 = 8;
				break;
			case joaat("WEAPON_BOTTLE"):
				*uParam1 = Global_262145.f_7660 /* Tunable: DLC_WEAPON_BROKEN_BOTTLE */;
				*uParam2 = 0;
				iVar2 = 7;
				break;
			case joaat("WEAPON_GUSENBERG"):
				*uParam1 = Global_262145.f_7055 /* Tunable: VALENTINE_MODIFIER_CADDY_GUSENBERG */;
				*uParam2 = Global_262145.f_7061 /* Tunable: VALENTINE_GUSENBERG_AMMO */;
				iVar2 = 3;
				break;
			case joaat("WEAPON_HEAVYPISTOL"):
				*uParam1 = Global_262145.f_7662 /* Tunable: DLC_WEAPON_HEAVY_PISTOL */;
				*uParam2 = Global_262145.f_7658 /* Tunable: DLC_WEAPON_ADDON_HEAVY_PISTOL_AMMO */;
				iVar2 = 8;
				break;
			case joaat("WEAPON_SPECIALCARBINE"):
				*uParam1 = Global_262145.f_7663 /* Tunable: DLC_WEAPON_SPECIAL_CARBINE */;
				*uParam2 = Global_262145.f_7657 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_AMMO */;
				iVar2 = 3;
				break;
			case joaat("WEAPON_BULLPUPRIFLE"):
				*uParam1 = Global_262145.f_7664 /* Tunable: DLC_WEAPON_BULLPUP_RIFLE */;
				*uParam2 = Global_262145.f_7659 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_AMMO */;
				iVar2 = 3;
				break;
			case joaat("WEAPON_VINTAGEPISTOL"):
				*uParam1 = Global_262145.f_7665 /* Tunable: DLC_WEAPON_VINTAGE_PISTOL */;
				*uParam2 = Global_262145.f_7667 /* Tunable: DLC_WEAPON_ADDON_VINTAGE_PISTOL_AMMO */;
				iVar2 = 8;
				break;
			case joaat("WEAPON_MUSKET"):
				*uParam1 = Global_262145.f_8284 /* Tunable: WEAPONS_INDEPENDENCEDAY_MUSKET */;
				*uParam2 = Global_262145.f_8285 /* Tunable: WEAPONS_INDEPENDENCEDAY_MUSKET_AMMO */;
				iVar2 = 4;
				break;
			case joaat("WEAPON_FIREWORK"):
				*uParam1 = Global_262145.f_8286 /* Tunable: WEAPONS_INDEPENDENCEDAY_FIREWORKLAUNCHER */;
				*uParam2 = Global_262145.f_8287 /* Tunable: WEAPONS_INDEPENDENCEDAY_FIREWORKLAUNCHER_AMMO */;
				iVar2 = 6;
				break;
			case joaat("WEAPON_HEAVYSHOTGUN"):
				*uParam1 = Global_262145.f_8855 /* Tunable: LTS_HEAVY_SHOTGUN */;
				*uParam2 = Global_262145.f_8860 /* Tunable: LTS_HEAVY_SHOTGUN_AMMO */;
				iVar2 = 2;
				break;
			case joaat("WEAPON_MARKSMANRIFLE"):
				if (__LIB_7__::func_269())
				{
					*uParam1 = 0;
				}
				else
				{
					*uParam1 = Global_262145.f_8861 /* Tunable: LTS_MARKSMAN_RIFLE */;
				}
				*uParam2 = Global_262145.f_8868 /* Tunable: LTS_MARKSMAN_RIFLE_AMMO */;
				iVar2 = 4;
				break;
			case joaat("WEAPON_HATCHET"):
				*uParam1 = Global_262145.f_9193 /* Tunable: CGTONG_HATCHET */;
				*uParam2 = 0;
				if (__LIB_0__::func_116())
				{
					*uParam1 = Global_262145.f_20252 /* Tunable: RETURNING_PRICE_HATCHET */;
				}
				else if (Global_262145.f_20269 /* Tunable: ENABLE_RETURNING_CONTENT_WEAPON */)
				{
					*uParam1 = Global_262145.f_9193 /* Tunable: CGTONG_HATCHET */;
				}
				iVar2 = 7;
				break;
			case joaat("WEAPON_FLAREGUN"):
				*uParam1 = Global_262145.f_9107 /* Tunable: FLAREGUN_PRICE */;
				*uParam2 = Global_262145.f_9108 /* Tunable: FLAREGUN_AMMO */;
				iVar2 = 6;
				break;
			case joaat("WEAPON_PROXMINE"):
				*uParam1 = Global_262145.f_9412 /* Tunable: WEAPONS_XMAS14_PROXIMITY_MINE */;
				*uParam2 = Global_262145.f_9412 /* Tunable: WEAPONS_XMAS14_PROXIMITY_MINE */;
				iVar2 = 9;
				break;
			case joaat("WEAPON_KNUCKLE"):
				*uParam1 = Global_262145.f_9109 /* Tunable: DLC_WEAPON_KNUCKLE_DUSTER */;
				*uParam2 = Global_262145.f_9110 /* Tunable: DLC_WEAPON_KNUCKLE_DUSTER_AMMO */;
				iVar2 = 7;
				break;
			case joaat("WEAPON_MARKSMANPISTOL"):
				*uParam1 = Global_262145.f_9111 /* Tunable: DLC_WEAPON_MARKSMAN_PISTOL */;
				*uParam2 = Global_262145.f_9112 /* Tunable: DLC_WEAPON_MARKSMAN_PISTOL_AMMO */;
				iVar2 = 8;
				break;
			case joaat("WEAPON_COMBATPDW"):
				*uParam1 = Global_262145.f_11074 /* Tunable: LUXE1_PRIMARY_COMBAT_PDW */;
				*uParam2 = Global_262145.f_11075 /* Tunable: LUXE1_AMMO_COMBAT_PDW_AMMO */;
				iVar2 = 1;
				break;
			case joaat("WEAPON_HOMINGLAUNCHER"):
				*uParam1 = Global_262145.f_9410 /* Tunable: WEAPONS_XMAS14_HOMING_LAUNCHER */;
				*uParam2 = Global_262145.f_9411 /* Tunable: WEAPONS_XMAS14_HOMING_LAUNCHER_AMMO */;
				iVar2 = 6;
				break;
			case joaat("WEAPON_MACHETE"):
				*uParam1 = Global_262145.f_12423 /* Tunable: PRIMARY_MACHETE */;
				iVar2 = 7;
				break;
			case joaat("WEAPON_MACHINEPISTOL"):
				*uParam1 = Global_262145.f_12422 /* Tunable: PRIMARY_MACHINE_PISTOL */;
				*uParam2 = Global_262145.f_12424 /* Tunable: AMMO_MACHINE_PISTOL_AMMO */;
				iVar2 = 8;
				break;
			case joaat("WEAPON_FLASHLIGHT"):
				*uParam1 = Global_262145.f_12584 /* Tunable: HALLOWEEN_2015_FLASHLIGHT */;
				iVar2 = 7;
				break;
			case joaat("WEAPON_REVOLVER"):
				*uParam1 = Global_262145.f_9119 /* Tunable: DLC_WEAPON_REVOLVER */;
				*uParam2 = Global_262145.f_9120 /* Tunable: DLC_WEAPON_REVOLVER_AMMO */;
				iVar2 = 8;
				break;
			case joaat("WEAPON_SWITCHBLADE"):
				*uParam1 = Global_262145.f_9121 /* Tunable: DLC_WEAPON_SWITCHBLADE */;
				iVar2 = 7;
				break;
			case joaat("WEAPON_DBSHOTGUN"):
				*uParam1 = Global_262145.f_15065 /* Tunable: PRIMARY_DOUBLE_BARREL_SHOTGUN */;
				*uParam2 = Global_262145.f_15066 /* Tunable: AMMO_DOUBLE_BARREL_SHOTGUN_AMMO */;
				iVar2 = 2;
				break;
			case joaat("WEAPON_COMPACTRIFLE"):
				if (__LIB_7__::func_269())
				{
					*uParam1 = 0;
				}
				else
				{
					*uParam1 = Global_262145.f_15062 /* Tunable: PRIMARY_COMPACT_RIFLE */;
				}
				*uParam2 = Global_262145.f_15063 /* Tunable: AMMO_COMPACT_RIFLE_AMMO */;
				iVar2 = 3;
				break;
			case joaat("WEAPON_AUTOSHOTGUN"):
				*uParam1 = Global_262145.f_17957 /* Tunable: BIKER_PRIMARY_SWEEPER_SHOTGUN */;
				*uParam2 = Global_262145.f_17958 /* Tunable: BIKER_AMMO_SWEEPER_SHOTGUN_AMMO */;
				iVar2 = 2;
				break;
			case joaat("WEAPON_BATTLEAXE"):
				*uParam1 = Global_262145.f_17954 /* Tunable: BIKER_PRIMARY_BATTLE_AXE */;
				iVar2 = 7;
				break;
			case joaat("WEAPON_COMPACTLAUNCHER"):
				if (__LIB_7__::func_269())
				{
					*uParam1 = 0;
				}
				else
				{
					*uParam1 = Global_262145.f_17955 /* Tunable: BIKER_PRIMARY_COMPACT_GRENADE_LAUNCHER */;
				}
				*uParam2 = Global_262145.f_17956 /* Tunable: BIKER_AMMO_COMPACT_GRENADE_LAUNCHER_AMMO */;
				iVar2 = 6;
				break;
			case joaat("WEAPON_MINISMG"):
				*uParam1 = Global_262145.f_17959 /* Tunable: BIKER_PRIMARY_MINI_SMG */;
				*uParam2 = Global_262145.f_17960 /* Tunable: BIKER_AMMO_MINI_SMG_AMMO */;
				iVar2 = 1;
				break;
			case joaat("WEAPON_PIPEBOMB"):
				*uParam1 = Global_262145.f_17961 /* Tunable: BIKER_PRIMARY_PIPE_BOMB */;
				*uParam2 = Global_262145.f_17961 /* Tunable: BIKER_PRIMARY_PIPE_BOMB */;
				iVar2 = 9;
				break;
			case joaat("WEAPON_POOLCUE"):
				*uParam1 = Global_262145.f_17952 /* Tunable: BIKER_PRIMARY_POOL_CUE */;
				iVar2 = 7;
				break;
			case joaat("WEAPON_WRENCH"):
				*uParam1 = Global_262145.f_17953 /* Tunable: BIKER_PRIMARY_PIPE_WRENCH */;
				iVar2 = 7;
				break;
			case joaat("WEAPON_PISTOL_MK2"):
				if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER")))
				{
					*uParam2 = Global_262145.f_21383 /* Tunable: GR_PISTOL_MK2_TRACER_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ")))
				{
					*uParam2 = Global_262145.f_21388 /* Tunable: GR_PISTOL_MK2_FMJ_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT")))
				{
					*uParam2 = Global_262145.f_21400 /* Tunable: GR_PISTOL_MK2_HOLLOW_POINT_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY")))
				{
					*uParam2 = Global_262145.f_21394 /* Tunable: GR_PISTOL_MK2_INCENDIARY_AMMO */;
				}
				else if (Global_262145.f_2382 /* Tunable: PISTOL_AMMO_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 57;
				}
				else
				{
					*uParam2 = Global_262145.f_2382 /* Tunable: PISTOL_AMMO_AMMO_MODIFIER */;
				}
				break;
			case joaat("WEAPON_SMG_MK2"):
				if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_TRACER")))
				{
					*uParam2 = Global_262145.f_21384 /* Tunable: GR_SMG_MK2_TRACER_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_FMJ")))
				{
					*uParam2 = Global_262145.f_21389 /* Tunable: GR_SMG_MK2_FMJ_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT")))
				{
					*uParam2 = Global_262145.f_21401 /* Tunable: GR_SMG_MK2_HOLLOW_POINT_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY")))
				{
					*uParam2 = Global_262145.f_21395 /* Tunable: GR_SMG_MK2_INCENDIARY_AMMO */;
				}
				else if (Global_262145.f_2387 /* Tunable: SMG_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 113;
				}
				else
				{
					*uParam2 = Global_262145.f_2387 /* Tunable: SMG_AMMO_MODIFIER */;
				}
				break;
			case joaat("WEAPON_COMBATMG_MK2"):
				if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER")))
				{
					*uParam2 = Global_262145.f_21385 /* Tunable: GR_COMBAT_MG_MK2_TRACER_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ")))
				{
					*uParam2 = Global_262145.f_21390 /* Tunable: GR_COMBAT_MG_MK2_FMJ_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING")))
				{
					*uParam2 = Global_262145.f_21402 /* Tunable: GR_COMBAT_MG_MK2_ARMOR_PIERCING_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY")))
				{
					*uParam2 = Global_262145.f_21396 /* Tunable: GR_COMBAT_MG_INCENDIARY_AMMO */;
				}
				else if (Global_262145.f_2394 /* Tunable: COMBAT_MG_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 277;
				}
				else
				{
					*uParam2 = Global_262145.f_2394 /* Tunable: COMBAT_MG_AMMO_MODIFIER */;
				}
				break;
			case joaat("WEAPON_ASSAULTRIFLE_MK2"):
				if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER")))
				{
					*uParam2 = Global_262145.f_21386 /* Tunable: GR_ASSAULT_RIFLE_MK2_TRACER_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ")))
				{
					*uParam2 = Global_262145.f_21391 /* Tunable: GR_ASSAULT_RIFLE_MK2_FMJ_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					*uParam2 = Global_262145.f_21403 /* Tunable: GR_ASSAULT_RIFLE_MK2_ARMOR_PIERCING_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY")))
				{
					*uParam2 = Global_262145.f_21397 /* Tunable: GR_ASSAULT_RIFLE_INCENDIARY_AMMO */;
				}
				else if (Global_262145.f_2389 /* Tunable: ASSAULT_RIFLE_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_262145.f_2389 /* Tunable: ASSAULT_RIFLE_AMMO_MODIFIER */;
				}
				break;
			case joaat("WEAPON_CARBINERIFLE_MK2"):
				if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER")))
				{
					*uParam2 = Global_262145.f_21387 /* Tunable: GR_CARBINE_RIFLE_MK2_TRACER_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ")))
				{
					*uParam2 = Global_262145.f_21392 /* Tunable: GR_CARBINE_RIFLE_MK2_FMJ_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					*uParam2 = Global_262145.f_21404 /* Tunable: GR_CARBINE_RIFLE_MK2_ARMOR_PIERCING_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY")))
				{
					*uParam2 = Global_262145.f_21398 /* Tunable: GR_CARBINE_RIFLE_INCENDIARY_AMMO */;
				}
				else if (Global_262145.f_2390 /* Tunable: CARBINE_RIFLE_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_262145.f_2390 /* Tunable: CARBINE_RIFLE_AMMO_MODIFIER */;
				}
				break;
			case joaat("WEAPON_HEAVYSNIPER_MK2"):
				if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE")))
				{
					*uParam2 = Global_262145.f_21406 /* Tunable: GR_HEAVY_SNIPER_MK2_EXPLOSIVE_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ")))
				{
					*uParam2 = Global_262145.f_21393 /* Tunable: GR_HEAVY_SNIPER_MK2_FMJ_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING")))
				{
					*uParam2 = Global_262145.f_21405 /* Tunable: GR_HEAVY_SNIPER_MK2_ARMOR_PIERCING_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY")))
				{
					*uParam2 = Global_262145.f_21399 /* Tunable: GR_HEAVY_SNIPER_INCENDIARY_AMMO */;
				}
				else if (Global_262145.f_2400 /* Tunable: HEAVY_SNIPER_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 87;
				}
				else
				{
					*uParam2 = Global_262145.f_2400 /* Tunable: HEAVY_SNIPER_AMMO_MODIFIER */;
				}
				break;
			case joaat("WEAPON_PUMPSHOTGUN_MK2"):
				if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY")))
				{
					*uParam2 = Global_262145.f_22977 /* Tunable: GO_PUMP_SHOTGUN_MK2_INCENDIARY_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT")))
				{
					*uParam2 = Global_262145.f_22983 /* Tunable: GO_PUMP_SHOTGUN_MK2_HOLLOW_POINT_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING")))
				{
					*uParam2 = Global_262145.f_22986 /* Tunable: GO_PUMP_SHOTGUN_MK2_ARMOR_PIERCING_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE")))
				{
					*uParam2 = Global_262145.f_22990 /* Tunable: GO_PUMP_SHOTGUN_MK2_EXPLOSIVE_AMMO */;
				}
				else if (Global_262145.f_2396 /* Tunable: PUMP_SHOTGUN_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2396 /* Tunable: PUMP_SHOTGUN_AMMO_MODIFIER */;
				}
				break;
			case joaat("WEAPON_SPECIALCARBINE_MK2"):
				if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER")))
				{
					*uParam2 = Global_262145.f_22967 /* Tunable: GO_SPECIAL_CARBINE_MK2_TRACER_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ")))
				{
					*uParam2 = Global_262145.f_22972 /* Tunable: GO_SPECIAL_CARBINE_MK2_FMJ_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY")))
				{
					*uParam2 = Global_262145.f_22978 /* Tunable: GO_SPECIAL_CARBINE_MK2_INCENDIARY_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING")))
				{
					*uParam2 = Global_262145.f_22987 /* Tunable: GO_SPECIAL_CARBINE_MK2_ARMOR_PIERCING_AMMO */;
				}
				else if (Global_262145.f_2390 /* Tunable: CARBINE_RIFLE_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = Global_262145.f_7657 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_AMMO */;
				}
				else
				{
					*uParam2 = Global_262145.f_2390 /* Tunable: CARBINE_RIFLE_AMMO_MODIFIER */;
				}
				break;
			case joaat("WEAPON_SNSPISTOL_MK2"):
				if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER")))
				{
					*uParam2 = Global_262145.f_22971 /* Tunable: GO_SNS_PISTOL_MK2_TRACER_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ")))
				{
					*uParam2 = Global_262145.f_22976 /* Tunable: GO_SNS_PISTOL_MK2_FMJ_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY")))
				{
					*uParam2 = Global_262145.f_22982 /* Tunable: GO_SNS_PISTOL_INCENDIARY_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT")))
				{
					*uParam2 = Global_262145.f_22985 /* Tunable: GO_SNS_PISTOL_MK2_HOLLOW_POINT_AMMO */;
				}
				else if (Global_262145.f_2382 /* Tunable: PISTOL_AMMO_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = Global_262145.f_7656 /* Tunable: DLC_WEAPON_ADDON_SNS_PISTOL_AMMO */;
				}
				else
				{
					*uParam2 = Global_262145.f_2382 /* Tunable: PISTOL_AMMO_AMMO_MODIFIER */;
				}
				break;
			case joaat("WEAPON_MARKSMANRIFLE_MK2"):
				if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER")))
				{
					*uParam2 = Global_262145.f_22968 /* Tunable: GO_MARKSMAN_RIFLE_MK2_TRACER_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ")))
				{
					*uParam2 = Global_262145.f_22973 /* Tunable: GO_MARKSMAN_RIFLE_MK2_FMJ_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY")))
				{
					*uParam2 = Global_262145.f_22979 /* Tunable: GO_MARKSMAN_RIFLE_MK2_INCENDIARY_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					*uParam2 = Global_262145.f_22988 /* Tunable: GO_MARKSMAN_RIFLE_MK2_ARMOR_PIERCING_AMMO */;
				}
				else if (Global_262145.f_2402 /* Tunable: SNIPER_RIFLE_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = Global_262145.f_8868 /* Tunable: LTS_MARKSMAN_RIFLE_AMMO */;
				}
				else
				{
					*uParam2 = Global_262145.f_2402 /* Tunable: SNIPER_RIFLE_AMMO_MODIFIER */;
				}
				break;
			case joaat("WEAPON_REVOLVER_MK2"):
				if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER")))
				{
					*uParam2 = Global_262145.f_22969 /* Tunable: GO_HEAVY_REVOLVER_MK2_TRACER_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ")))
				{
					*uParam2 = Global_262145.f_22974 /* Tunable: GO_HEAVY_REVOLVER_MK2_FMJ_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY")))
				{
					*uParam2 = Global_262145.f_22980 /* Tunable: GO_HEAVY_REVOLVER_INCENDIARY_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT")))
				{
					*uParam2 = Global_262145.f_22984 /* Tunable: GO_HEAVY_REVOLVER_MK2_HOLLOW_POINT_AMMO */;
				}
				else if (Global_262145.f_2382 /* Tunable: PISTOL_AMMO_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = Global_262145.f_9120 /* Tunable: DLC_WEAPON_REVOLVER_AMMO */;
				}
				else
				{
					*uParam2 = Global_262145.f_2382 /* Tunable: PISTOL_AMMO_AMMO_MODIFIER */;
				}
				break;
			case joaat("WEAPON_BULLPUPRIFLE_MK2"):
				if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER")))
				{
					*uParam2 = Global_262145.f_22970 /* Tunable: GO_BULLPUP_RIFLE_MK2_TRACER_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ")))
				{
					*uParam2 = Global_262145.f_22975 /* Tunable: GO_BULLPUP_RIFLE_MK2_FMJ_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY")))
				{
					*uParam2 = Global_262145.f_22981 /* Tunable: GO_BULLPUP_RIFLE_INCENDIARY_AMMO */;
				}
				else if (__LIB_12__::func_669(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					*uParam2 = Global_262145.f_22989 /* Tunable: GO_BULLPUP_RIFLE_MK2_ARMOR_PIERCING_AMMO */;
				}
				else if (Global_262145.f_2389 /* Tunable: ASSAULT_RIFLE_AMMO_MODIFIER */ == -1)
				{
					*uParam2 = Global_262145.f_7659 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_AMMO */;
				}
				else
				{
					*uParam2 = Global_262145.f_2389 /* Tunable: ASSAULT_RIFLE_AMMO_MODIFIER */;
				}
				break;
			case joaat("WEAPON_DOUBLEACTION"):
				*uParam1 = 1000;
				*uParam2 = Global_262145.f_22959 /* Tunable: 907871281 */;
				iVar2 = 8;
				break;
			case joaat("WEAPON_RAYPISTOL"):
				*uParam1 = Global_262145.f_26499 /* Tunable: AW_WEAPON_PRICE_UP_N_ATOMIZER */;
				iVar2 = 8;
				break;
			case joaat("WEAPON_RAYCARBINE"):
				*uParam1 = Global_262145.f_26500 /* Tunable: AW_WEAPON_PRICE_UNHOLY_HELLBRINGER */;
				*uParam2 = Global_262145.f_26502 /* Tunable: AW_WEAPON_AMMO_PRICE_UNHOLY_HELLBRINGER */;
				iVar2 = 3;
				break;
			case joaat("WEAPON_RAYMINIGUN"):
				*uParam1 = Global_262145.f_26501 /* Tunable: AW_WEAPON_PRICE_WIDOWMAKER */;
				*uParam2 = Global_262145.f_26503 /* Tunable: AW_WEAPON_AMMO_PRICE_WIDOWMAKER */;
				iVar2 = 6;
				break;
			case joaat("WEAPON_NAVYREVOLVER"):
				*uParam1 = 0;
				*uParam2 = Global_262145.f_28682 /* Tunable: -2090125230 */;
				iVar2 = 8;
				break;
			case joaat("WEAPON_CERAMICPISTOL"):
				*uParam1 = Global_262145.f_28683 /* Tunable: 1233397362 */;
				*uParam2 = Global_262145.f_28684 /* Tunable: -1260597537 */;
				iVar2 = 8;
				break;
			case joaat("WEAPON_COMBATSHOTGUN"):
				*uParam1 = Global_262145.f_30808 /* Tunable: IH_COMBAT_SHOTGUN_COST */;
				*uParam2 = Global_262145.f_30843 /* Tunable: IH_COMBAT_SHOTGUN_AMMO */;
				iVar2 = 2;
				break;
			case joaat("WEAPON_GADGETPISTOL"):
				*uParam1 = Global_262145.f_30809 /* Tunable: IH_PERICO_PISTOL_COST */;
				*uParam2 = Global_262145.f_30844 /* Tunable: IH_PERICO_PISTOL_AMMO */;
				iVar2 = 8;
				break;
			case joaat("WEAPON_MILITARYRIFLE"):
				*uParam1 = Global_262145.f_30807 /* Tunable: IH_MILITARY_RIFLE_COST */;
				*uParam2 = Global_262145.f_30842 /* Tunable: IH_MILITARY_RIFLE_AMMO */;
				iVar2 = 3;
				break;
			case joaat("WEAPON_HEAVYRIFLE"):
				*uParam1 = Global_262145.f_31955 /* Tunable: FIXER_HEAVY_RIFLE_COST */;
				*uParam2 = Global_262145.f_31994 /* Tunable: FIXER_HEAVY_RIFLE_AMMO */;
				iVar2 = 3;
				break;
			case joaat("WEAPON_EMPLAUNCHER"):
				*uParam1 = Global_262145.f_31956 /* Tunable: FIXER_EMP_LAUNCHER_COST */;
				*uParam2 = Global_262145.f_31995 /* Tunable: FIXER_EMP_LAUNCHER_AMMO */;
				iVar2 = 6;
				break;
			case joaat("WEAPON_STUNGUN_MP"):
				*uParam1 = Global_262145.f_31957 /* Tunable: FIXER_STUN_GUN_COST */;
				*uParam2 = 0;
				iVar2 = 8;
				break;
			case joaat("WEAPON_TACTICALRIFLE"):
				*uParam1 = Global_262145.f_33114 /* Tunable: SU22_SERVICE_CARBINE_COST */;
				*uParam2 = Global_262145.f_33136 /* Tunable: SU22_SERVICE_CARBINE_AMMO */;
				iVar2 = 3;
				break;
			case joaat("WEAPON_PRECISIONRIFLE"):
				*uParam1 = Global_262145.f_33115 /* Tunable: SU22_PRECISION_RIFLE_COST */;
				*uParam2 = Global_262145.f_33137 /* Tunable: SU22_PRECISION_RIFLE_AMMO */;
				iVar2 = 4;
				break;
			default:
				if (__LIB_0__::func_289(iParam0, &Var3) != -1)
				{
					*uParam1 = Var3.f_3;
					*uParam2 = Var3.f_4;
				}
				break;
		}
		switch (iVar2)
		{
			case 0:
				break;
			case 1:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_295754.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_295754.f_2));
				break;
			case 2:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_295754.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_295754.f_2));
				break;
			case 3:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_295754.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_295754.f_2));
				break;
			case 4:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_295754.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_295754.f_2));
				break;
			case 5:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_295754.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_295754.f_2));
				break;
			case 6:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_295754.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_295754.f_2));
				break;
			case 7:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_295754.f_6));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_295754.f_6));
				break;
			case 8:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_295754.f_4));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_295754.f_4));
				break;
			case 9:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_295754.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_295754.f_2));
				break;
			case 10:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_295754.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_295754.f_2));
				break;
			case 11:
				break;
			case 12:
				break;
			case 13:
				break;
			case 14:
				break;
			case 15:
				break;
			case 16:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_295754));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_295754));
				break;
			case 17:
			case 21:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_295754.f_6));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_295754.f_6));
				break;
			case 18:
			case 20:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_295754.f_4));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_295754.f_4));
				break;
			case 99:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_295754.f_7));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_295754.f_7));
				break;
			}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538())
	{
		StringCopy(&Var5, __LIB_4__::func_960(iParam0, 0), 16);
		iVar7 = 0;
		__LIB_18__::func_235(iParam0, &iVar6, &iVar7);
		if (__LIB_0__::func_116() && (__LIB_0__::func_163() || __LIB_0__::func_164()))
		{
			if ((iParam0 == joaat("WEAPON_HAMMER") || iParam0 == joaat("WEAPON_PISTOL50")) || iParam0 == joaat("WEAPON_BULLPUPSHOTGUN"))
			{
				iVar7 = 1;
			}
		}
		if (__LIB_0__::func_116())
		{
			if (iParam0 == joaat("WEAPON_HATCHET"))
			{
				iVar7 = 1;
			}
		}
		bVar8 = false;
		if (__LIB_18__::func_499(iParam0))
		{
			bVar8 = true;
			iVar7 = 2;
		}
		__LIB_4__::func_886(&cVar4, Var5, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, iVar6, iVar7, __LIB_12__::func_581(iParam0), -1, 0, bVar8);
		if (NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&cVar4))
		{
			*uParam1 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&cVar4), joaat("CATEGORY_WEAPON"), true);
		}
		if (__LIB_18__::func_528(iParam0, &iVar9))
		{
			__LIB_18__::func_234(iVar9, 2, &Var5, 0);
			__LIB_4__::func_886(&cVar4, Var5, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 0, __LIB_3__::func_371(iParam0), __LIB_12__::func_581(iParam0), -1, 0, 0);
			if (NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&cVar4))
			{
				*uParam2 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&cVar4), joaat("CATEGORY_WEAPON_AMMO"), true);
				switch (iParam0)
				{
					case joaat("WEAPON_RPG"):
					case joaat("WEAPON_GRENADELAUNCHER"):
					case joaat("WEAPON_HOMINGLAUNCHER"):
					case joaat("WEAPON_FIREWORK"):
						*uParam3 = 1;
						break;
					}
			}
		}
		else if ((((iParam0 == joaat("WEAPON_GRENADE") || iParam0 == joaat("WEAPON_SMOKEGRENADE")) || iParam0 == joaat("WEAPON_STICKYBOMB")) || iParam0 == joaat("WEAPON_PROXMINE")) || iParam0 == joaat("WEAPON_PIPEBOMB"))
		{
			switch (iParam0)
			{
				case joaat("WEAPON_GRENADE"):
					StringCopy(&cVar4, "WP_WT_GNADE_t2_v1", 64);
					break;
				case joaat("WEAPON_SMOKEGRENADE"):
					StringCopy(&cVar4, "WP_WT_GNADE_SMK_t2_v1", 64);
					break;
				case joaat("WEAPON_STICKYBOMB"):
					StringCopy(&cVar4, "WP_WT_GNADE_STK_t2_v1", 64);
					break;
				case joaat("WEAPON_PROXMINE"):
					StringCopy(&cVar4, "WP_WT_PRXMINE_t2_v1", 64);
					break;
				case joaat("WEAPON_PIPEBOMB"):
					StringCopy(&cVar4, "WP_WT_PIPEBOMB_t2_v1", 64);
					break;
			}
			if (NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&cVar4))
			{
				*uParam2 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&cVar4), joaat("CATEGORY_WEAPON_AMMO"), true);
			}
		}
	}
	fVar10 = func_518(iParam0, uParam1, uParam2);
	if (fVar10 != 1f)
	{
	}
	return *uParam1 != 0;
}

float func_518(int iParam0, var uParam1, var uParam2)//Position - 0x4E514
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar1 = 0f;
	fVar2 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538())
	{
		fVar2 = (fVar2 + __LIB_12__::func_580());
		fVar1 = (1f - fVar2);
		*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * fVar1));
		*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * fVar1));
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = __LIB_37__::func_216(iParam0);
		if (iVar0 == 3)
		{
			fVar2 = (fVar2 + 0.05f);
		}
		else if (iVar0 == 2)
		{
			fVar2 = (fVar2 + 0.1f);
		}
		else if (iVar0 == 1)
		{
			fVar2 = (fVar2 + 0.15f);
		}
		if (fVar3 >= 100f)
		{
			fVar2 = (fVar2 + 0.1f);
		}
		else if (fVar3 >= 80f)
		{
			fVar2 = (fVar2 + 0.08f);
		}
		else if (fVar3 >= 60f)
		{
			fVar2 = (fVar2 + 0.06f);
		}
		else if (fVar3 >= 40f)
		{
			fVar2 = (fVar2 + 0.04f);
		}
		else if (fVar3 >= 20f)
		{
			fVar2 = (fVar2 + 0.02f);
		}
		fVar2 = (fVar2 + __LIB_18__::func_498(iParam0));
		fVar2 = (fVar2 + __LIB_18__::func_497());
		fVar2 = (fVar2 + __LIB_18__::func_507());
		fVar2 = (fVar2 + __LIB_12__::func_580());
		if (iLocal_55 == 1)
		{
			fVar2 = (fVar2 + (SYSTEM::TO_FLOAT(Global_262145.f_132 /* Tunable: SHOP_GOODBOY_DISCOUNT_PERCENT */) / 100f));
		}
		if (iLocal_55 == 0)
		{
			if (func_478())
			{
				fVar2 = (fVar2 + (SYSTEM::TO_FLOAT(Global_262145.f_132 /* Tunable: SHOP_GOODBOY_DISCOUNT_PERCENT */) / 100f));
				iLocal_55 = 1;
			}
			else
			{
				iLocal_55 = -1;
			}
		}
		fVar1 = (1f - fVar2);
		*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * fVar1));
		*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_77 /* Tunable: WEAPONS_SHOP_MULTIPLIER */));
		*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_262145.f_77 /* Tunable: WEAPONS_SHOP_MULTIPLIER */));
		*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * (1f - __LIB_12__::func_580())));
		return fVar1;
	}
	iVar0 = __LIB_37__::func_216(iParam0);
	if (iVar0 == 3)
	{
		fVar2 = (fVar2 + 0.1f);
	}
	else if (iVar0 == 2)
	{
		fVar2 = (fVar2 + 0.15f);
	}
	else if (iVar0 == 1)
	{
		fVar2 = (fVar2 + 0.25f);
	}
	fVar1 = (1f - fVar2);
	*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * fVar1));
	*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * fVar1));
	return fVar1;
}

void func_555(int iParam0, struct<3> Param1, float fParam2, char* sParam3)//Position - 0x53619
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		fVar0 = ENTITY::GET_ENTITY_HEADING(*iParam0);
		fVar1 = MISC::ABSF((fVar0 - fParam2));
		if (fVar1 > 180f)
		{
			fVar1 = MISC::ABSF((fVar1 - 360f));
		}
		bVar2 = (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_PLAY_ANIM")) == 1 && !ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, sLocal_206, sParam3, 3));
		bVar3 = (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(*iParam0, true), Param1) < 1.4f && (fVar1 < 20f || bVar2));
		STREAMING::REQUEST_ANIM_DICT(sLocal_206);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_206))
		{
			if (!bVar3)
			{
				TASK::TASK_CLEAR_LOOK_AT(*iParam0);
				if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_260, false))
					{
						if (PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_260, false))
						{
							if (*iParam0 == Local_274.f_0)
							{
								TASK::TASK_PAUSE(0, 500);
							}
							TASK::TASK_LEAVE_VEHICLE(0, iLocal_260, 0);
						}
					}
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param1, 1f, 20000, 0.25f, 4608, 40000f);
					TASK::TASK_ACHIEVE_HEADING(0, fParam2, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar4);
					TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar4);
					TASK::CLEAR_SEQUENCE_TASK(&iVar4);
				}
			}
			else if ((TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_PLAY_ANIM")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
			{
				TASK::TASK_PLAY_ANIM(*iParam0, sLocal_206, sParam3, 4f, -4f, -1, 262145, 0f, false, false, false);
			}
		}
	}
}

void func_557()//Position - 0x537AC
{
	int iVar0;
	if (iLocal_320 == 0)
	{
		if (iLocal_62)
		{
			if (iLocal_140 != 99)
			{
				if (bLocal_81)
				{
					__LIB_0__::func_427(Local_221 + Vector(0.5f, 0f, 0f), 327.4432f, 0, 0);
					iLocal_140 = 99;
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_221 + Vector(0.5f, 0f, 0f), true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 327.4432f);
					if (func_130(6, 0f, 0f, 0f, 0, 0))
					{
						STREAMING::LOAD_SCENE(Local_221);
						iLocal_140 = 99;
					}
				}
			}
			else if ((((func_130(0, Local_222, fLocal_136, 0) && func_130(1, Local_223, fLocal_137, 0)) && func_375(15.3563f, -1126.204f, 27.7251f, 273.6953f, 1)) && func_130(4, 0f, 0f, 0f, 0, 0)) && func_130(5, 0f, 0f, 0f, 0, 0))
			{
				__LIB_3__::func_506(28);
				__LIB_30__::func_373(48, 1);
				SYSTEM::WAIT(100);
				OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(iLocal_331, Local_224, true, 0f, 0f, 0f);
				OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(iLocal_332, Local_225, true, 0f, 0f, 0f);
				__LIB_42__::func_534(103, 1);
				__LIB_42__::func_534(104, 1);
				__LIB_42__::func_534(101, 1);
				__LIB_42__::func_534(102, 1);
				__LIB_0__::func_433(0, -1, 0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_221, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 327.4432f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				bLocal_113 = true;
				iLocal_62 = 0;
			}
		}
		else
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
			}
			CUTSCENE::REQUEST_CUTSCENE("lam_1_mcs_3", 8);
			STREAMING::REQUEST_ANIM_DICT(sLocal_206);
			func_36("lam_1_mcs_3");
			if (((__LIB_14__::func_403(28, 0) && func_573()) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_206)) && __LIB_0__::func_90())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				__LIB_37__::func_204(Local_274.f_0);
				__LIB_37__::func_204(Local_275.f_0);
				if (!PED::IS_PED_INJURED(Local_274.f_0))
				{
					if (PED::IS_PED_IN_GROUP(Local_274.f_0))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_274.f_0);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_274.f_0, "Lamar", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_275.f_0))
				{
					if (PED::IS_PED_IN_GROUP(Local_275.f_0))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_275.f_0);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_275.f_0, "Stretch" /* GXT: Stretch */, 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_255))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_255, "GunShopKeeper", 0, 0, 0);
				}
				CUTSCENE::START_CUTSCENE(0);
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				func_30();
				iLocal_63 = 0;
				iLocal_140 = 0;
				iLocal_320 = 1;
			}
		}
	}
	if (iLocal_320 == 1)
	{
		if (!iLocal_63)
		{
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
				iLocal_63 = 1;
				iLocal_320 = 3;
			}
		}
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_AMMUNATION_INTRO_CUTSCENE"))
			{
				AUDIO::START_AUDIO_SCENE("LAMAR_1_AMMUNATION_INTRO_CUTSCENE");
			}
			if (!bLocal_113)
			{
				bLocal_113 = func_473();
			}
			switch (iLocal_140)
			{
				case 0:
					iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, true);
						__LIB_17__::func_199(iVar0);
					}
					FIRE::STOP_FIRE_IN_RANGE(17.9f, -1115f, 29.3f, 50f);
					MISC::CLEAR_AREA_OF_PROJECTILES(17.9f, -1115f, 29.3f, 50f, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(17.9f, -1115f, 29.3f, 50f, true, false, false, false, false, false, 0);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(17.9f, -1115f, 29.3f, 50f);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_260, false))
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_260, true);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_260, 17.350292f, -1115.117f, 27.796766f, 15.640124f, -1119.6829f, 31.820522f, 6f, false, true, 0))
						{
							ENTITY::SET_ENTITY_HEADING(iLocal_260, 229.0238f);
							ENTITY::SET_ENTITY_COORDS(iLocal_260, -700.7425f, 5270.605f, 74.4262f, true, false, false, true);
						}
					}
					if (CLOCK::GET_CLOCK_HOURS() < 21 && CLOCK::GET_CLOCK_HOURS() > 4)
					{
						CLOCK::SET_CLOCK_TIME(20, 45, 0);
					}
					SYSTEM::SETTIMERB(0);
					__LIB_16__::func_11();
					iLocal_140++;
					break;
				case 1:
					__LIB_14__::func_409(28, "SHOP_INTRO" /* GXT: Welcome to ~a~. */, 0);
					if (SYSTEM::TIMERB() > 8000)
					{
						SYSTEM::SETTIMERB(0);
						iLocal_140++;
					}
					break;
				case 2:
					__LIB_14__::func_409(28, "GS_INTRO_0" /* GXT: Walk up to the counter to purchase new weapons and stock up on ammo. */, 0);
					if (SYSTEM::TIMERB() > 8000)
					{
						SYSTEM::SETTIMERB(0);
						iLocal_140++;
					}
					break;
				case 3:
					__LIB_14__::func_409(28, "GS_INTRO_1" /* GXT: Weapons will unlock as you progress through the game. */, 0);
					if (SYSTEM::TIMERB() > 8000)
					{
						HUD::CLEAR_HELP(true);
						SYSTEM::SETTIMERB(0);
						iLocal_140++;
					}
					break;
				}
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_320 = 2;
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", 0))
		{
			if (!PED::IS_PED_INJURED(Local_274.f_0))
			{
				TASK::TASK_PLAY_ANIM(Local_274.f_0, sLocal_206, "idle_lamar", 4f, -4f, -1, 262145, 0f, false, false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_274.f_0, false, false);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Stretch" /* GXT: Stretch */, 0))
		{
			if (!PED::IS_PED_INJURED(Local_275.f_0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_275.f_0, Local_223, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_275.f_0, fLocal_137);
				TASK::TASK_PLAY_ANIM(Local_275.f_0, sLocal_206, "idle_stretch", 4f, -4f, -1, 262145, 0f, false, false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_275.f_0, false, false);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("GunShopKeeper", 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_255))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_255, 23.76f, -1105.664f, 28.797f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_255, 142.49f);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
		{
			HUD::CLEAR_HELP(true);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	if (iLocal_320 == 2)
	{
		if (iLocal_63)
		{
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(Local_274.f_0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_274.f_0, Local_222, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_274.f_0, fLocal_136);
				TASK::TASK_PLAY_ANIM(Local_274.f_0, sLocal_206, "idle_lamar", 1000f, -4f, -1, 262145, 0f, false, false, false);
			}
			if (!PED::IS_PED_INJURED(Local_275.f_0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_275.f_0, Local_223, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_275.f_0, fLocal_137);
				TASK::TASK_PLAY_ANIM(Local_275.f_0, sLocal_206, "idle_stretch", 1000f, -4f, -1, 262145, 0f, false, false, false);
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 19.5879f, -1109.1584f, 28.797f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 338.699f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		if (!PED::IS_PED_INJURED(iLocal_255))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_255, true, false);
		}
		__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
		__LIB_14__::func_423(28, 0);
		iLocal_320 = 0;
		iLocal_319 = 3;
	}
	if (iLocal_320 == 3)
	{
		CUTSCENE::STOP_CUTSCENE(false);
		iLocal_63 = 1;
		iLocal_320 = 1;
	}
}

int func_573()//Position - 0x54D49
{
	int iVar0[10];
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_255))
	{
		PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &iVar0, -1);
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (!PED::IS_PED_INJURED(iVar0[iVar1]))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0[iVar1]) == joaat("S_M_Y_AmmuCity_01"))
				{
					iLocal_255 = iVar0[iVar1];
					return 1;
				}
			}
			iVar1++;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_579()//Position - 0x54F51
{
	int iVar0[1];
	struct<2> Var1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	if (iLocal_320 == 0)
	{
		if (iLocal_62)
		{
			if (bLocal_81)
			{
				__LIB_0__::func_427(-14.2794f, -1453.4706f, 29.5179f, 210.5592f, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -14.2794f, -1453.4706f, 29.5179f, false, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 210.5592f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
			func_130(4, 0f, 0f, 0f, 0, 0);
			if (!MISC::IS_AREA_OCCUPIED(-13.7896f, -1459.157f, 29.4592f, -11.7896f, -1457.157f, 29.4592f, false, true, false, false, false, 0, false))
			{
				while (!func_375(-12.7896f, -1458.157f, 29.4592f, 273.6953f, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
			while (!func_130(0, -12.0409f, -1460.072f, 29.5347f, 31.2574f, 0) || !func_130(1, -12.313f, -1452.9957f, 29.5358f, 178.3208f, 0))
			{
				SYSTEM::WAIT(0);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			__LIB_30__::func_373(48, 1);
			__LIB_0__::func_433(0, -1, 0);
			SYSTEM::SETTIMERB(0);
			while (SYSTEM::TIMERB() < 10000)
			{
				if (((!PED::IS_PED_INJURED(Local_274.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_274.f_0)) && (!PED::IS_PED_INJURED(Local_275.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_275.f_0))) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
				{
					SYSTEM::SETTIMERB(100000);
				}
				SYSTEM::WAIT(0);
			}
			iLocal_140 = 99;
			iLocal_62 = 0;
		}
		else if ((func_130(0, -12.0409f, -1460.072f, 29.5347f, 31.2574f, 0) && func_130(1, -12.313f, -1452.9957f, 29.5358f, 178.3208f, 0)) && func_130(5, 0f, 0f, 0f, 0, 0))
		{
			__LIB_17__::func_716(&Local_276, 1);
			__LIB_16__::func_308(&Local_276, 0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -14.2794f, -1453.4706f, 29.5179f, false, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 201.1911f);
				if (!PED::IS_PED_INJURED(Local_274.f_0) && !PED::IS_PED_INJURED(Local_275.f_0))
				{
					ENTITY::SET_ENTITY_COORDS(Local_274.f_0, -11.2779f, -1455.201f, 29.5488f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_274.f_0, 158.1405f);
					ENTITY::SET_ENTITY_COORDS(Local_275.f_0, -14.0287f, -1456.5962f, 29.4127f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_275.f_0, 188.2834f);
					PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &iVar0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_260))
					{
						iVar0[0] = iLocal_260;
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0[0], false) && __LIB_15__::func_990(iVar0[0], &Local_276, 2))
					{
						TASK::TASK_ENTER_VEHICLE(Local_274.f_0, iVar0[0], 20000, 0, 1f, 1, 0);
						TASK::TASK_ENTER_VEHICLE(Local_275.f_0, iVar0[0], 20000, 1, 1f, 1, 0);
					}
				}
				SYSTEM::WAIT(500);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(iLocal_331, Local_224, true, 0f, 0f, 0f);
			OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(iLocal_332, Local_225, true, 0f, 0f, 0f);
			__LIB_42__::func_534(103, 1);
			__LIB_42__::func_534(104, 1);
			__LIB_42__::func_534(101, 1);
			__LIB_42__::func_534(102, 1);
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				while (!CAM::IS_SCREEN_FADED_IN())
				{
					if (!PED::IS_PED_INJURED(Local_274.f_0))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_274.f_0, 1f);
					}
					if (!PED::IS_PED_INJURED(Local_275.f_0))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_275.f_0, 1f);
					}
					SYSTEM::WAIT(0);
				}
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_140 = 0;
			iLocal_181 = 0;
			iLocal_185 = 0;
			iLocal_320 = 1;
		}
	}
	if (iLocal_320 == 1)
	{
		__LIB_37__::func_205(Local_274.f_0, 1);
		__LIB_37__::func_205(Local_275.f_0, 1);
		switch (iLocal_140)
		{
			case 0:
				if (__LIB_41__::func_46(&Local_288, cLocal_207, "LEM1_GUN", "LEM1_GUN_1", 7, 0, 0))
				{
					iLocal_140++;
				}
				break;
			case 1:
				if (!iLocal_132[45])
				{
					StringCopy(&Var1, "LEM1_LEFTBOTH", 16);
				}
				else
				{
					StringCopy(&Var1, "", 16);
				}
				if (func_373(&Local_276, 14.9916f, -1126.0948f, 27.7036f, 0.001f, 0.001f, 2f, 0, Local_274.f_0, Local_275.f_0, 0, "LEM1_GOGUN", "LEM1_LEFTLEMAR", "LEM1_LEFTSTRET", "", &Var1, 0, 1, 1, -1, 1))
				{
					iLocal_320 = 2;
				}
				break;
		}
		if (((HUD::DOES_BLIP_EXIST(Local_276.f_5) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && __LIB_16__::func_19(PLAYER::PLAYER_PED_ID(), Local_274.f_0)) && __LIB_16__::func_19(PLAYER::PLAYER_PED_ID(), Local_275.f_0))
		{
			if (__LIB_0__::func_568())
			{
				__LIB_0__::func_620(0);
			}
			if (iLocal_181 == 0)
			{
				iLocal_181 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_181) > 1500)
			{
				if (!__LIB_13__::func_755(&Local_276, 1) && SYSTEM::TIMERA() > 1000)
				{
					if (!iLocal_132[46])
					{
						if (__LIB_0__::func_786(6, 0))
						{
							if (__LIB_0__::func_786(6, 1))
							{
								iVar2 = func_598(PLAYER::PLAYER_PED_ID(), 2);
								if (iVar2 == 2 || iVar2 == 3)
								{
									iLocal_321 = 2;
								}
								else
								{
									iLocal_321 = 1;
								}
							}
							else
							{
								iLocal_321 = 0;
							}
						}
						else
						{
							iLocal_321 = 3;
						}
						if (func_580())
						{
							iVar3 = func_598(PLAYER::PLAYER_PED_ID(), 3);
							if (iVar3 == 2 || iVar3 == 3)
							{
								iLocal_322 = 2;
							}
							else
							{
								iLocal_322 = 1;
							}
						}
						else
						{
							iLocal_322 = 0;
						}
						StringCopy(&Var4, "", 16);
						if (__LIB_17__::func_617() == 0 && iLocal_321 != 3)
						{
							if (iLocal_321 == 0)
							{
								if (iLocal_322 == 0)
								{
									StringCopy(&Var4, "LEM1_HAIR1", 16);
								}
								else if (iLocal_322 == 1)
								{
									StringCopy(&Var4, "LEM1_HAIR2", 16);
								}
								else if (iLocal_322 == 2)
								{
									StringCopy(&Var4, "LEM1_HAIR3", 16);
								}
							}
							else if (iLocal_321 == 1)
							{
								if (iLocal_322 == 0)
								{
									StringCopy(&Var4, "LEM1_HAIR4", 16);
								}
								else if (iLocal_322 == 1)
								{
									StringCopy(&Var4, "LEM1_HAIR5", 16);
								}
								else if (iLocal_322 == 2)
								{
									StringCopy(&Var4, "LEM1_HAIR6", 16);
								}
							}
							else if (iLocal_321 == 2)
							{
								if (iLocal_322 == 0)
								{
									StringCopy(&Var4, "LEM1_HAIR7", 16);
								}
								else if (iLocal_322 == 1)
								{
									StringCopy(&Var4, "LEM1_HAIR8", 16);
								}
								else if (iLocal_322 == 2)
								{
									StringCopy(&Var4, "LEM1_HAIR9", 16);
								}
							}
							if (__LIB_38__::func_746(&Local_288, cLocal_207, &Var4, 7, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 4f, 4);
								iLocal_132[46] = 1;
							}
						}
						else
						{
							iLocal_132[46] = 1;
						}
					}
					else if (!iLocal_132[47])
					{
						if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_TOGUN", 7, 0, 0, 0))
						{
							iLocal_132[47] = 1;
						}
					}
				}
			}
		}
		else
		{
			if (((!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_230) < 1600f) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true)) < 400f) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_275.f_0, true)) < 400f)
			{
				if (__LIB_0__::func_568())
				{
					__LIB_0__::func_620(0);
				}
				if (!iLocal_132[48])
				{
					if (__LIB_38__::func_746(&Local_288, cLocal_207, "LEM1_PRESHOP", 7, 0, 0, 0))
					{
						iLocal_132[48] = 1;
					}
					else
					{
						__LIB_0__::func_638();
					}
				}
			}
			else if (iLocal_132[46])
			{
				if (!__LIB_0__::func_568())
				{
					__LIB_0__::func_620(1);
				}
			}
			func_155();
		}
		if (HUD::DOES_BLIP_EXIST(Local_276.f_5))
		{
			HUD::SET_BLIP_ALPHA(Local_276.f_5, 0);
			if (!HUD::DOES_BLIP_EXIST(iLocal_231))
			{
				iLocal_231 = __LIB_0__::func_488(Local_230, 0);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(iLocal_231))
		{
			HUD::REMOVE_BLIP(&iLocal_231);
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 16.693903f, -1117.0369f, 28.796833f, 18.689972f, -1111.7394f, 31.797018f, 3.5f, false, true, 0) || __LIB_3__::func_509(28))
		{
			if (HUD::DOES_BLIP_EXIST(Local_276.f_5) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_320 = 2;
			}
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 17.2f, -1114.9f, 29.6f) < 22500f)
		{
			func_130(6, 0f, 0f, 0f, 0, 0);
			STREAMING::REQUEST_ANIM_DICT(sLocal_206);
			__LIB_14__::func_403(28, 0);
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 17.2f, -1114.9f, 29.6f) > 40000f)
		{
			if (iLocal_241 != 0)
			{
				if (INTERIOR::IS_INTERIOR_READY(iLocal_241))
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_241);
					iLocal_241 = 0;
				}
			}
			STREAMING::REMOVE_ANIM_DICT(sLocal_206);
			__LIB_14__::func_423(28, 0);
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 16.6953f, -1116.3615f, 28.7962f) < 400f)
		{
			CUTSCENE::REQUEST_CUTSCENE("lam_1_mcs_3", 8);
			STREAMING::SET_SRL_FORCE_PRESTREAM(1);
			func_36("lam_1_mcs_3");
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 16.6953f, -1116.3615f, 28.7962f) > 900f)
		{
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
		}
		switch (iLocal_185)
		{
			case 0:
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_GO_TO_AMMUNATION"))
					{
						AUDIO::START_AUDIO_SCENE("LAMAR_1_GO_TO_AMMUNATION");
					}
				}
				else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_GO_TO_AMMUNATION"))
				{
					AUDIO::STOP_AUDIO_SCENE("LAMAR_1_GO_TO_AMMUNATION");
				}
				break;
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 17.634806f, -1113.5742f, 29.814344f, 1.5f, 1.25f, 1f, false, true, 0))
			{
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(21.2064f, -1104.5675f, 29.6342f, 21.0047f, -1105.2529f, 29.5447f, 0, true, joaat("WEAPON_PISTOL"), PLAYER::PLAYER_PED_ID(), false, false, -1f);
				func_648(9);
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 17.252968f, -1116.7883f, 30.296766f, 10f, 8f, 2.75f, false, true, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
		}
	}
	if (iLocal_320 == 2)
	{
		HUD::CLEAR_PRINTS();
		func_213();
		__LIB_16__::func_318(&Local_276, 1, 0);
		__LIB_0__::func_638();
		bLocal_113 = false;
		iLocal_320 = 0;
		iLocal_319 = 2;
	}
	if (iLocal_320 == 3)
	{
		func_721(2, 0);
	}
}

int func_580()//Position - 0x5597D
{
	if (__LIB_0__::func_786(7, 0))
	{
		if (__LIB_33__::func_611() == 1)
		{
			if (Global_113386.f_2363.f_4863 == -1)
			{
				return 0;
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (func_581(PLAYER::PLAYER_PED_ID()) == Global_113386.f_2363.f_4863)
				{
					__LIB_13__::func_782(7, 1, 0);
				}
				else
				{
					__LIB_13__::func_782(7, 1, 1);
				}
			}
		}
		return __LIB_0__::func_786(7, 1);
	}
	return 0;
}

int func_581(int iParam0)//Position - 0x559E5
{
	int iVar0;
	int iVar1;
	iVar0 = func_582(iParam0, 3, -1);
	iVar1 = func_582(iParam0, 4, -1);
	return (iVar0 + iVar1 * 100);
}

int func_582(int iParam0, int iParam1, int iParam2)//Position - 0x55A08
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
				if (func_585(iParam0, iParam1, iVar0))
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
				if (func_585(iParam0, iParam1, iVar1))
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

int func_585(int iParam0, int iParam1, int iParam2)//Position - 0x55B4F
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
				if (!func_585(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_585(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_12__::func_14(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_585(iParam0, 14, iVar4))
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
			if (!func_585(iParam0, 14, uVar8[iVar7]))
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

int func_598(int iParam0, int iParam1)//Position - 0x59A38
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!__LIB_37__::func_210(iVar0, 0))
	{
		return 2;
	}
	iVar1 = func_582(iParam0, iParam1, -1);
	if (iVar1 == -99)
	{
		return 0;
	}
	Global_78130[1 /*14*/] = { __LIB_12__::func_14(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, iVar1, -1) };
	return Global_78130[1 /*14*/];
}

void func_603()//Position - 0x59BD2
{
	bool bVar0;
	struct<3> Var1;
	int iVar2[1];
	int iVar3;
	int iVar4;
	if (iLocal_320 == 0)
	{
		if (iLocal_62)
		{
			iLocal_62 = 0;
		}
		else
		{
			CUTSCENE::REQUEST_CUTSCENE(sLocal_209, 8);
			func_36(sLocal_209);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			func_643();
			if (iLocal_140 < 99)
			{
				__LIB_16__::func_309(1, 0);
				__LIB_42__::func_534(47, 4);
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					STREAMING::REQUEST_ANIM_DICT(sLocal_210);
					STREAMING::REQUEST_MODEL(iLocal_345);
					if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_201))
					{
						OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_201, joaat("v_ilev_fa_frontdoor"), -14.8689f, -1441.1821f, 31.1932f, true, true, false);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_250))
					{
						iLocal_250 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-14.8689f, -1441.1821f, 31.1932f, 1f, joaat("v_ilev_fa_frontdoor"), true, false, true);
					}
					if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_250) && OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_201)) && STREAMING::HAS_MODEL_LOADED(iLocal_345)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_210)) && !TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
					{
						if (__LIB_14__::func_742(0f, 0f, 0f, 1))
						{
							__LIB_32__::func_109(-3.2086f, -1465.918f, 29.4404f, 274.0793f, 0, 145);
						}
						__LIB_42__::func_361(-16.0756f, -1468.5688f, 29.098814f, -17.915562f, -1431.5044f, 36.052402f, 20f, -3.2086f, -1465.918f, 29.4404f, 274.0793f, __LIB_13__::func_790(), 1, 1, 1, 0, 0);
						Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						if (Var1.f_2 > 31f)
						{
							bVar0 = true;
						}
						else
						{
							bVar0 = false;
						}
						if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_201) != 1f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_201) != 4)
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_201, 1f, false, false);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_201, 4, false, true);
						}
						ENTITY::SET_ENTITY_VISIBLE(iLocal_250, false, false);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						iLocal_198 = PED::CREATE_SYNCHRONIZED_SCENE(-14.862f, -1441.208f, 31.18f, 0f, 0f, 180f, 2);
						iLocal_249 = OBJECT::CREATE_OBJECT(iLocal_345, -14.8689f, -1441.1821f, 31.1932f, true, true, false);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_345);
						iLocal_232 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -7.205015f, -1471.6554f, 31.161417f, 9.377599f, 0f, 11.473698f, 38.5265f, true, 2);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						HUD::DISPLAY_HUD(false);
						HUD::DISPLAY_RADAR(false);
						__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
						PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
						VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
						if (!__LIB_0__::func_323())
						{
							if (ENTITY::DOES_ENTITY_EXIST(__LIB_14__::func_794()) && !ENTITY::IS_ENTITY_DEAD(__LIB_14__::func_794(), false))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(__LIB_14__::func_794(), true, true);
							}
						}
						MISC::CLEAR_AREA_OF_PEDS(-17.1615f, -1439.0176f, 30.1015f, 400f, 0);
						MISC::CLEAR_AREA_OF_VEHICLES(-17.1615f, -1439.0176f, 30.1015f, 400f, true, false, false, false, false, false, 0);
						MISC::CLEAR_AREA_OF_OBJECTS(-17.1615f, -1439.0176f, 30.1015f, 400f, 0);
						MISC::CLEAR_AREA_OF_PROJECTILES(-17.1615f, -1439.0176f, 30.1015f, 400f, 0);
						GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-17.1615f, -1439.0176f, 30.1015f, 50f);
						PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_198, sLocal_210, "franklin_enters_old_home", 1000f, -1000f, 4, 512, 1000f, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_249, iLocal_198, "franklin_enters_old_home_door", sLocal_210, 1000f, 8f, 0, 1000f);
						if (bVar0)
						{
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_198, 0.3f);
						}
						else
						{
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_198, 0.15f);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_249);
						GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(false);
						GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
						GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(false);
						iLocal_128 = 0;
						SYSTEM::SETTIMERB(0);
						iLocal_140 = 99;
					}
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_140 = 99;
				}
			}
			else if (iLocal_140 == 99)
			{
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("LAMAR1_INT", false, -1);
				if (!iLocal_128)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_198) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_198) > 0.67f)
					{
						CAM::DESTROY_ALL_CAMS(false);
						iLocal_232 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -7.205015f, -1471.6554f, 31.161417f, 9.377599f, 0f, 11.473698f, 38.5265f, true, 2);
						iLocal_128 = 1;
					}
				}
				if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_201) != 1f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_201) != 4)
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_201, 1f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_201, 4, false, true);
				}
				if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_198) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_198) > 0.85f) || (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_198) && SYSTEM::TIMERB() > 5000)) || CAM::IS_SCREEN_FADED_OUT())
				{
					if (func_610(43, &uLocal_293, 1, 0, 0, 0, 1))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "LAMAR1_PARTYGIRLS_master", 0, true);
						SYSTEM::SETTIMERB(0);
						iLocal_140++;
					}
				}
				if (__LIB_0__::func_645(1000))
				{
					if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(800);
					}
				}
			}
			else if (iLocal_140 == 100)
			{
				if (SYSTEM::TIMERB() > 2500 || CAM::IS_SCREEN_FADED_OUT())
				{
					iLocal_140++;
				}
			}
			else if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				func_130(4, 0f, 0f, 0f, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_274.f_0, "Lamar", 2, __LIB_0__::func_493(19), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_275.f_0, "Stretch" /* GXT: Stretch */, 2, __LIB_0__::func_493(37), 0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				__LIB_30__::func_373(48, 1);
				bLocal_102 = false;
				iLocal_63 = 0;
				iLocal_140 = 0;
				iLocal_320 = 1;
			}
		}
	}
	if (iLocal_320 == 1)
	{
		if (!iLocal_63)
		{
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
				iLocal_63 = 1;
			}
		}
		switch (iLocal_140)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					__LIB_15__::func_228(&uLocal_293, 0, 0, 2000, 1, 1, 0, 1);
					func_704(PLAYER::PLAYER_PED_ID(), 12, 20, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
					GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(true);
					GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(true);
					GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
					bLocal_102 = true;
					if (CAM::DOES_CAM_EXIST(iLocal_232))
					{
						CAM::DESTROY_ALL_CAMS(false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					}
					__LIB_16__::func_13(&iLocal_249, 1);
					STREAMING::REMOVE_ANIM_DICT(sLocal_210);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_250))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_250, true, false);
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_250);
					}
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_201))
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_201, 0f, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_201, 0, false, true);
					}
					__LIB_0__::func_468(43);
					MISC::CLEAR_AREA_OF_PEDS(-12.7896f, -1458.157f, 29.4592f, 200f, 0);
					__LIB_16__::func_11();
					iLocal_140++;
				}
				break;
			case 1:
				if (bLocal_102)
				{
					func_375(-12.7896f, -1458.157f, 29.4592f, 273.6953f, 0);
				}
				break;
		}
		PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &iVar2);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_260))
		{
			iVar2[0] = iLocal_260;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_274.f_0))
		{
			iVar3 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lamar", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				Local_274.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_275.f_0))
		{
			iVar4 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Stretch" /* GXT: Stretch */, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				Local_275.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
			}
		}
		if (!PED::IS_PED_INJURED(Local_274.f_0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_274.f_0, 1f);
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", ENTITY::GET_ENTITY_MODEL(Local_274.f_0)))
			{
				ENTITY::SET_ENTITY_COORDS(Local_274.f_0, -10.151f, -1456.4628f, 29.4131f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_274.f_0, 212.6173f);
				PED::SET_PED_COMPONENT_VARIATION(Local_274.f_0, 1, 1, 0, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2[0], false) && __LIB_15__::func_990(iVar2[0], &Local_276, 2))
				{
					TASK::TASK_ENTER_VEHICLE(Local_274.f_0, iVar2[0], 20000, 0, 1f, 1, 0);
				}
				PED::FORCE_PED_MOTION_STATE(Local_274.f_0, joaat("MotionState_Walk"), true, 1, false);
			}
		}
		if (!PED::IS_PED_INJURED(Local_275.f_0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_275.f_0, 1f);
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Stretch" /* GXT: Stretch */, 0))
			{
				PED::SET_PED_PROP_INDEX(Local_275.f_0, 0, 0, 0, false);
				PED::SET_PED_COMPONENT_VARIATION(Local_275.f_0, 8, 0, 0, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2[0], false) && __LIB_15__::func_990(iVar2[0], &Local_276, 2))
				{
					ENTITY::SET_ENTITY_COORDS(Local_275.f_0, -13.9305f, -1454.9846f, 29.4717f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_275.f_0, 130.2734f);
					TASK::TASK_ENTER_VEHICLE(Local_275.f_0, iVar2[0], 20000, 1, 1f, 1, 0);
				}
				PED::FORCE_PED_MOTION_STATE(Local_275.f_0, joaat("MotionState_Walk"), true, 1, false);
			}
			PED::SET_PED_RESET_FLAG(Local_275.f_0, 71, true);
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
		{
			if (!iLocal_63)
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1500, -157f, false, false);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false) || iLocal_63)
		{
			RECORDING::REPLAY_STOP_EVENT();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_320 = 2;
		}
	}
	if (iLocal_320 == 2)
	{
		__LIB_16__::func_13(&iLocal_249, 1);
		STREAMING::REMOVE_ANIM_DICT(sLocal_210);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("LAMAR1_INT");
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_250))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_250, true, false);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_250);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_201))
		{
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_201) != 0)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_201, 0, false, true);
			}
		}
		if (iLocal_242 != 0)
		{
			if (INTERIOR::IS_INTERIOR_READY(iLocal_242))
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_242);
				iLocal_242 = 0;
			}
		}
		if (iLocal_63)
		{
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -14.2794f, -1453.4706f, 29.5179f, false, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 201.1911f);
			while (!func_130(0, -9.5493f, -1458.85f, 29.5055f, 133.2693f, 0) || !func_130(1, -12.313f, -1452.9957f, 29.5358f, 178.3208f, 0))
			{
				SYSTEM::WAIT(0);
			}
			if (bLocal_102)
			{
				while (!func_375(-12.7896f, -1458.157f, 29.4592f, 273.6953f, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
			if (!PED::IS_PED_INJURED(Local_274.f_0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_274.f_0, -11.2779f, -1455.201f, 29.5488f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_274.f_0, 158.1405f);
			}
			if (!PED::IS_PED_INJURED(Local_275.f_0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_275.f_0, -14.3457f, -1456.4288f, 29.4137f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_275.f_0, -166.9394f);
			}
			while ((ENTITY::DOES_ENTITY_EXIST(Local_274.f_0) && !PED::IS_PED_INJURED(Local_274.f_0)) && !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_274.f_0))
			{
				SYSTEM::WAIT(0);
			}
			while ((ENTITY::DOES_ENTITY_EXIST(Local_275.f_0) && !PED::IS_PED_INJURED(Local_275.f_0)) && !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_275.f_0))
			{
				SYSTEM::WAIT(0);
			}
			SYSTEM::WAIT(0);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 750, -157f, false, false);
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
		}
		func_130(0, -9.5493f, -1458.85f, 29.505f, 133.2693f, 0);
		func_130(1, -14.6866f, -1455.3466f, 29.4362f, 212.5621f, 0);
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
		__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
		iLocal_140 = 0;
		iLocal_320 = 0;
		iLocal_319 = 1;
	}
	if (iLocal_320 == 3)
	{
		__LIB_17__::func_737();
		CUTSCENE::STOP_CUTSCENE(false);
		iLocal_63 = 1;
		iLocal_320 = 1;
	}
}

bool func_610(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x5A996
{
	struct<2> Var0;
	func_628(iParam0, &Var0);
	__LIB_13__::func_812(iParam0, &Var0, &(Var0.f_1));
	return __LIB_17__::func_96(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

void func_628(int iParam0, var uParam1)//Position - 0x5B963
{
	uParam1->f_17 = -1;
	switch (iParam0)
	{
		case 1:
		case 2:
			uParam1->f_2 = { -58.1338f, -1115.6534f, 25.8856f };
			uParam1->f_5 = { 18.4907f, 0f, 3.566f };
			uParam1->f_8 = { -58.3857f, -1115.0834f, 26.0824f };
			uParam1->f_11 = { 18.4907f, 0f, 2.0628f };
			uParam1->f_14 = 40.0256f;
			uParam1->f_15 = 4000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 0;
			break;
		case 17:
		case 18:
			uParam1->f_2 = { -830.1f, 171.4f, 71.5f };
			uParam1->f_5 = { 17.5f, 0f, -76f };
			uParam1->f_8 = { -829.5f, 171.6f, 71.7f };
			uParam1->f_11 = { 17.9f, 0f, -75.4f };
			uParam1->f_14 = 47.9931f;
			uParam1->f_15 = 6600;
			uParam1->f_16 = 0;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			break;
		case 21:
		case 22:
			uParam1->f_2 = { -776.5807f, 181.1033f, 72.2059f };
			uParam1->f_5 = { 11.8135f, 0f, 95.7275f };
			uParam1->f_8 = { -776.8288f, 181.0926f, 72.2551f };
			uParam1->f_11 = { 11.8134f, 0f, 95.7284f };
			uParam1->f_14 = 46.7255f;
			uParam1->f_15 = 5500;
			uParam1->f_16 = 0;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			break;
		case 20:
			switch (__LIB_33__::func_611())
			{
				case 0:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.28817f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_11 = { 4.202f, 0f, -111.2882f };
					uParam1->f_14 = 47f;
					uParam1->f_15 = 5500;
					uParam1->f_16 = 0;
					break;
				case 2:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.28817f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_11 = { 4.202f, 0f, -111.2882f };
					uParam1->f_14 = 47f;
					uParam1->f_15 = 5500;
					uParam1->f_16 = 0;
					break;
			}
			break;
		case 40:
			uParam1->f_2 = { -8.0845f, -1450.3672f, 36.8585f };
			uParam1->f_5 = { 13.3776f, 0f, 4.513f };
			uParam1->f_8 = { -9.0519f, -1450.4437f, 36.8585f };
			uParam1->f_11 = { 13.3776f, 0f, 4.513f };
			uParam1->f_14 = 39.9659f;
			uParam1->f_15 = 7200;
			uParam1->f_16 = 0;
			break;
		case 27:
			uParam1->f_2 = { -1576.1322f, 5160.8877f, 24.1175f };
			uParam1->f_5 = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_8 = { -1576.1322f, 5160.8877f, 24.1175f };
			uParam1->f_11 = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_14 = 40f;
			uParam1->f_15 = 7200;
			uParam1->f_16 = 0;
			break;
		case 43:
			uParam1->f_2 = { -7.205f, -1471.6555f, 31.1614f };
			uParam1->f_5 = { 9.3776f, 0f, 11.4737f };
			uParam1->f_8 = { -7.2909f, -1471.2322f, 31.2546f };
			uParam1->f_11 = { 9.3776f, 0f, 11.4737f };
			uParam1->f_14 = 38.5265f;
			uParam1->f_15 = 5000;
			uParam1->f_16 = 0;
			break;
		case 61:
			uParam1->f_2 = { -1060.6584f, -464.0052f, 44.994f };
			uParam1->f_5 = { 5.6441f, 0f, -138.7474f };
			uParam1->f_8 = { -1060.6584f, -464.0052f, 44.994f };
			uParam1->f_11 = { 4.8242f, 0f, -118.3167f };
			uParam1->f_14 = 37f;
			uParam1->f_15 = 5000;
			uParam1->f_16 = 0;
			break;
		case 91:
		case 93:
			uParam1->f_2 = { 1406.1116f, 3590.2307f, 34.4113f };
			uParam1->f_5 = { 17.5005f, 0f, 55.9579f };
			uParam1->f_8 = { 1405.6732f, 3590.5247f, 34.4113f };
			uParam1->f_11 = { 18.4979f, 0f, 55.9579f };
			uParam1->f_14 = 56.3199f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 69:
		case 86:
		case 90:
			uParam1->f_2 = { 739.1493f, -990.3961f, 29.851938f };
			uParam1->f_5 = { 17.19917f, 0f, 44.21184f };
			uParam1->f_8 = { 738.4197f, -989.64624f, 30.175814f };
			uParam1->f_11 = { 17.19917f, 0f, 44.21184f };
			uParam1->f_14 = 47.563618f;
			uParam1->f_15 = 6000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 0;
			break;
		case 70:
			uParam1->f_2 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_5 = { -0.2f, 0f, -169.6f };
			uParam1->f_8 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_11 = { -0.2f, 0f, -169.6f };
			uParam1->f_14 = 47.6f;
			uParam1->f_15 = 5000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 1;
			break;
		case 45:
			uParam1->f_2 = { -458.56662f, 1010.09717f, 316.3736f };
			uParam1->f_5 = { 14.471864f, 0f, -18.288841f };
			uParam1->f_8 = { -457.3f, 1011.6f, 316.9f };
			uParam1->f_11 = { 14.5f, 0f, -18.5f };
			uParam1->f_14 = 50f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 49:
			uParam1->f_2 = { -723.9982f, -155.71844f, 38.123623f };
			uParam1->f_5 = { 30.120478f, 0f, -99.11243f };
			uParam1->f_8 = { -722.4385f, -155.7817f, 37.4443f };
			uParam1->f_11 = { 2.0429f, 0f, -101.5132f };
			uParam1->f_14 = 45f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 9:
			switch (__LIB_33__::func_611())
			{
				case 2:
					uParam1->f_2 = { 416.3221f, -960.2586f, 30.6696f };
					uParam1->f_5 = { 21.5747f, 0f, -135.2969f };
					uParam1->f_8 = { 416.8894f, -960.832f, 30.9887f };
					uParam1->f_11 = { 21.9916f, 0f, -135.2969f };
					uParam1->f_14 = 47.1057f;
					uParam1->f_15 = 6000;
					uParam1->f_16 = 0;
					break;
				case 1:
					uParam1->f_2 = { 1393.3628f, -2052.5813f, 65.4054f };
					uParam1->f_5 = { 2.5107f, 0f, 51.1167f };
					uParam1->f_8 = { 1393.4564f, -2052.6562f, 68.146f };
					uParam1->f_11 = { 2.5107f, 0f, 51.1167f };
					uParam1->f_14 = 35.9859f;
					uParam1->f_15 = 6000;
					uParam1->f_16 = 0;
					break;
			}
			break;
		case 30:
			uParam1->f_2 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_5 = { 61.9f, 0f, -63.8f };
			uParam1->f_8 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_11 = { 61.9f, 0f, -63.8f };
			uParam1->f_14 = 46.6f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 39:
			uParam1->f_2 = { 3841.9304f, 4464.658f, 2.6587f };
			uParam1->f_5 = { 8.4859f, 0.0024f, 143.0775f };
			uParam1->f_8 = { 3842.5398f, 4464.184f, 2.6587f };
			uParam1->f_11 = { 8.4859f, 0.0024f, 142.0089f };
			uParam1->f_14 = 34.1544f;
			uParam1->f_15 = 3000;
			uParam1->f_16 = 0;
			break;
		case 71:
			uParam1->f_2 = { -1193.1f, -1525.3f, 4.4f };
			uParam1->f_5 = { 9.4f, 0f, -78.8f };
			uParam1->f_8 = { -1192.2f, -1525.1f, 4.4f };
			uParam1->f_11 = { 9.4f, 0f, -78.5f };
			uParam1->f_14 = 30.4f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 74:
			uParam1->f_2 = { -24.2f, -2417.6f, 7.8f };
			uParam1->f_5 = { 10.4f, 0f, 80.4f };
			uParam1->f_8 = { -23.8f, -2414.8f, 7.8f };
			uParam1->f_11 = { 10.4f, 0f, 81.4f };
			uParam1->f_14 = 48.1095f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 84:
		case 85:
		case 65:
			uParam1->f_2 = { 146.97333f, -1310.6444f, 30.851767f };
			uParam1->f_5 = { 16.268848f, -2.1E-05f, 45.00475f };
			uParam1->f_8 = { 146.97333f, -1310.6444f, 30.851767f };
			uParam1->f_11 = { 16.268848f, -2.1E-05f, 45.00475f };
			uParam1->f_14 = 39.4027f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 62:
		case 15:
		case 16:
			uParam1->f_2 = { 1998.215f, 3816.9827f, 33.0117f };
			uParam1->f_5 = { 5.9088f, 0f, 89.1989f };
			uParam1->f_8 = { 1997.1537f, 3817.0042f, 33.1215f };
			uParam1->f_11 = { 5.9088f, 0f, 89.1989f };
			uParam1->f_14 = 36.8186f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			if (iParam0 == 62)
			{
				if (__LIB_33__::func_611() != 2)
				{
					uParam1->f_2 = { 0f, 0f, 0f };
					uParam1->f_5 = { 0f, 0f, 0f };
					uParam1->f_8 = { 0f, 0f, 0f };
					uParam1->f_11 = { 0f, 0f, 0f };
					uParam1->f_14 = -1f;
					uParam1->f_15 = -1;
					uParam1->f_16 = 0;
				}
			}
			break;
		case 63:
			uParam1->f_2 = { 1576f, 3363.9f, 55.5f };
			uParam1->f_5 = { 0.5f, 0f, -123.8f };
			uParam1->f_8 = { 1575.2f, 3364.4f, 49.2f };
			uParam1->f_11 = { -4.3f, 0f, -124.1f };
			uParam1->f_14 = 50f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		case 64:
			uParam1->f_2 = { 1566f, 3378.8f, 42.8f };
			uParam1->f_5 = { -2.4f, 0f, -126.3f };
			uParam1->f_8 = { 1567.6f, 3376.9f, 45f };
			uParam1->f_11 = { 1.6f, 0f, -124.6f };
			uParam1->f_14 = 34.7f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		case 24:
			uParam1->f_2 = { 1339.5729f, -2550.8728f, 56.282543f };
			uParam1->f_5 = { -2.348373f, -2.1E-05f, 159.736f };
			uParam1->f_8 = { 1334.4908f, -2549.3455f, 47.69109f };
			uParam1->f_11 = { 2.789334f, -2.1E-05f, -156.43968f };
			uParam1->f_14 = 25.660002f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		case 25:
			uParam1->f_2 = { 2383.6511f, 2624.787f, 46.9527f };
			uParam1->f_5 = { 14.6191f, 0f, 64.366f };
			uParam1->f_8 = { 2383.9292f, 2622.8015f, 47.2707f };
			uParam1->f_11 = { 33.177135f, -0.13073f, 12.314363f };
			uParam1->f_14 = 35.31843f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 26:
			uParam1->f_2 = { 1755.5189f, -1474.9811f, 126.1743f };
			uParam1->f_5 = { 4.5341f, 0f, 89.6405f };
			uParam1->f_8 = { 1772.2605f, -1475.0853f, 125.9465f };
			uParam1->f_11 = { 5.8327f, 0f, 89.6405f };
			uParam1->f_14 = 32.7f;
			uParam1->f_15 = 6500;
			uParam1->f_16 = 0;
			break;
		case 3:
			uParam1->f_2 = { -1514.2566f, -947.7281f, 15.0253f };
			uParam1->f_5 = { -3.5807f, -0.0001f, -46.3209f };
			uParam1->f_8 = { -1512.6014f, -949.2796f, 14.8827f };
			uParam1->f_11 = { -4.7682f, -0.0001f, -34.1393f };
			uParam1->f_14 = 29.9555f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 4:
			uParam1->f_2 = { -698.2578f, -934.4238f, 31.6909f };
			uParam1->f_5 = { -22.0467f, 0f, 32.1888f };
			uParam1->f_8 = { -697.8695f, -935.0406f, 31.9861f };
			uParam1->f_11 = { -20.6093f, 0f, 32.1888f };
			uParam1->f_14 = 30f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 5:
			uParam1->f_2 = { 221.8613f, -830.6434f, 45.3154f };
			uParam1->f_5 = { -13.9263f, 0f, 140.7092f };
			uParam1->f_8 = { 227.5233f, -832.8285f, 45.3154f };
			uParam1->f_11 = { -13.9263f, 0f, 140.7092f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 6:
			uParam1->f_2 = { -23.3747f, -120.3161f, 64.139f };
			uParam1->f_5 = { -5.7232f, 0f, 5.1015f };
			uParam1->f_8 = { -22.5824f, -122.52f, 64.139f };
			uParam1->f_11 = { -5.7232f, 0f, 6.6362f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 7:
			uParam1->f_2 = { 803.5977f, -1075.8688f, 37.1981f };
			uParam1->f_5 = { -10.7685f, 0f, -38.1705f };
			uParam1->f_8 = { 803.5977f, -1075.8688f, 32.7981f };
			uParam1->f_11 = { -10.7685f, 0f, -38.1705f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		default:
			uParam1->f_2 = { 0f, 0f, 0f };
			uParam1->f_5 = { 0f, 0f, 0f };
			uParam1->f_8 = { 0f, 0f, 0f };
			uParam1->f_11 = { 0f, 0f, 0f };
			uParam1->f_14 = -1f;
			uParam1->f_15 = -1;
			uParam1->f_16 = 0;
			break;
	}
	if (MISC::GET_HASH_KEY("RAIN") == MISC::GET_PREV_WEATHER_TYPE_HASH_NAME())
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_18)))
		{
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_22)))
		{
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
		}
	}
}

int func_643()//Position - 0x5D3A0
{
	if (iLocal_242 == 0)
	{
		iLocal_242 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-14.4f, -1437f, 31.5f, "v_franklins");
	}
	else if (INTERIOR::IS_INTERIOR_READY(iLocal_242))
	{
		return 1;
	}
	else
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_242);
	}
	return 0;
}

void func_648(int iParam0)//Position - 0x5D57C
{
	if (!iLocal_75)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		func_213();
		__LIB_16__::func_318(&Local_276, 1, 0);
		__LIB_0__::func_325();
		if (iParam0 == 0)
		{
			if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				CUTSCENE::STOP_CUTSCENE(false);
			}
			CUTSCENE::REMOVE_CUTSCENE();
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
		}
		switch (iParam0)
		{
			case 0:
				sLocal_215 = "";
				break;
			case 1:
				sLocal_215 = "LEM1_LEMDEAD";
				break;
			case 2:
				sLocal_215 = "LEM1_STRETDEAD";
				break;
			case 5:
				sLocal_215 = "LEM1_ABLAMAR";
				break;
			case 6:
				sLocal_215 = "LEM1_ABSTRETCH";
				break;
			case 7:
				sLocal_215 = "LEM1_ABBOTH";
				break;
			case 9:
				sLocal_215 = "LEM1_FAILSHOP";
				break;
			case 3:
				sLocal_215 = "CMN_GENDEST" /* GXT: ~s~The car was destroyed. */;
				break;
			case 4:
				sLocal_215 = "LEM1_FRASTUCK";
				break;
			case 8:
				sLocal_215 = "LEM1_BOTHDEAD";
				break;
			case 10:
				sLocal_215 = "LEM1_MISSDEAL";
				break;
			case 11:
				sLocal_215 = "LEM1_ABANCAR";
				break;
			case 12:
				sLocal_215 = "LEM1_NOMON";
				break;
		}
		iLocal_75 = 1;
	}
	AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_MISSION_FAIL");
	func_651(sLocal_215);
	while (!__LIB_0__::func_223())
	{
		if (iLocal_319 == 6 || iLocal_319 == 7)
		{
			func_310(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		}
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_274.f_0, false))
	{
		if (PED::IS_PED_GROUP_MEMBER(Local_274.f_0, __LIB_0__::func_495()) || __LIB_16__::func_19(PLAYER::PLAYER_PED_ID(), Local_274.f_0))
		{
			func_269(&Local_274, 1);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_275.f_0, false))
	{
		if (PED::IS_PED_GROUP_MEMBER(Local_275.f_0, __LIB_0__::func_495()) || __LIB_16__::func_19(PLAYER::PLAYER_PED_ID(), Local_275.f_0))
		{
			func_269(&Local_275, 1);
		}
	}
	if ((iLocal_319 == 6 || iLocal_319 == 7) || (iLocal_319 == 4 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), -612.8f, -1619f, 28.6f) < 400f))
	{
		__LIB_0__::func_507(-664.9598f, -1645.1869f, 23.9818f, 283.7155f);
	}
	else if (iLocal_319 == 3)
	{
		__LIB_0__::func_507(15.9802f, -1119.646f, 27.8296f, 192.4578f);
	}
	func_733();
}

void func_651(char* sParam0)//Position - 0x5D831
{
	__LIB_0__::func_381(sParam0);
	func_652(0);
}

void func_652(int iParam0)//Position - 0x5D844
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_653(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_653(int iParam0)//Position - 0x5D889
{
	int iVar0;
	int iVar1;
	__LIB_37__::func_360();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_654(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_113386.f_9085.f_330[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085)
		{
		}
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_654(var uParam0, int iParam1)//Position - 0x5D999
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113386.f_18533[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_656(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				__LIB_0__::func_17(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_97831[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_9 = 0f;
				Global_97831[iVar0 /*29*/].f_12 = 0f;
				Global_97831[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_10 = 0f;
				Global_97831[iVar0 /*29*/].f_13 = 0f;
				Global_97831[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_11 = 0f;
				Global_97831[iVar0 /*29*/].f_14 = 0f;
				Global_97831[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_26 = 0f;
				Global_97831[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_27 = 0f;
				Global_97831[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

int func_656(int iParam0, var uParam1, float fParam2)//Position - 0x5DB6D
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		case 9:
			return func_656(8, uParam1, fParam2);
			break;
		case 10:
			return func_656(8, uParam1, fParam2);
			break;
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.3408f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		default:
			break;
	}
	return 0;
}

void func_660(bool bParam0)//Position - 0x5E64C
{
	__LIB_12__::func_761(29, bParam0, 0);
	__LIB_12__::func_761(30, bParam0, 0);
	__LIB_12__::func_761(31, bParam0, 0);
	__LIB_12__::func_761(32, bParam0, 0);
	__LIB_12__::func_761(33, bParam0, 0);
	__LIB_12__::func_761(34, bParam0, 0);
	__LIB_12__::func_761(35, bParam0, 0);
	__LIB_12__::func_761(36, bParam0, 0);
	__LIB_12__::func_761(37, bParam0, 0);
}

void func_663(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5E6F0
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_100478)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_100478)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		__LIB_0__::func_179(1);
		if (iParam0 <= Global_100478)
		{
		}
		iVar1 = __LIB_0__::func_365(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113386.f_9085.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = __LIB_0__::func_510(iVar1);
			cVar3 = { Global_91229[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113386.f_9085.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_100478, iParam0);
		}
		else
		{
			iVar4 = __LIB_0__::func_531(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar4 != -1)
			{
				Global_113386.f_18574[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {__LIB_0__::func_45(iVar4)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar5, 0, Global_100478, iParam0);
			}
			else
			{
				iVar6 = __LIB_0__::func_125(&(Global_100441.f_3));
				if (iVar6 > -1)
				{
					Global_113386.f_24986.f_4[iVar6] = 0;
				}
			}
		}
		Global_94619 = iParam2;
		Global_100478 = iParam0;
		func_664(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_664(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x5E868
{
	func_665(&Global_106934, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_665(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x5E884
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_33__::func_611();
	uParam0->f_1 = __LIB_11__::func_762();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_675(&(uParam0->f_2884), 0);
		__LIB_37__::func_214(PLAYER::PLAYER_PED_ID());
		__LIB_37__::func_218(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), true);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
		{
			uParam0->f_2 = joaat("WEAPON_UNARMED");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113386.f_2363.f_539.f_294[iVar1];
		if (iVar1 == __LIB_33__::func_611())
		{
			__LIB_37__::func_219(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_100166[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_100166[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_100166[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_100166[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_100166[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_100166[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_100166[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_100166[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_100166[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_100166[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 1:
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 2:
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113386.f_20564.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_60328[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113386.f_2363[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &(uParam0->f_2341[0]), -1);
	STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &(uParam0->f_2341[1]), -1);
	STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_667(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__::func_384(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

void func_667(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5F72F
{
	int iVar0;
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = __LIB_25__::func_663(iParam2);
	}
	if (__LIB_37__::func_358(iParam2, &iVar0, iParam3, iParam5))
	{
		__LIB_16__::func_35(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
			{
				__LIB_16__::func_35(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

void func_675(var uParam0, int iParam1)//Position - 0x60A22
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.5645f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.4724f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (BitTest(Global_78567, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (BitTest(Global_78567, 5))
	{
		*uParam0 = { -745.4462f, 5595.1465f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (BitTest(Global_78567, 6))
	{
		*uParam0 = { -1675.5215f, -1125.5901f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (BitTest(Global_78567, 7))
	{
		*uParam0 = { -1631.2192f, -1112.8052f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.6588f, -1715.4669f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.9564f, -1725.1892f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.43646f, 2068.2886f, 113.30017f, -564.9516f, 1884.7025f, 134.04034f, 258.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.41275f, -581.21344f, 2036.2561f, 136.28363f, 9.5f, false, true, 0))
	{
		*uParam0 = { -601.59f, 2099.1973f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.39264f, -477.95844f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.3756f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.8085f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.9323f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.5266f, 2571.3113f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.9304f, 2594.1528f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (__LIB_17__::func_923(&iVar0))
		{
			if (__LIB_0__::func_388(iVar0, &Var1, &uVar2))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, false, true, 0))
		{
			iVar3 = __LIB_33__::func_611();
			if (iVar3 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68.5531f, -1824.3774f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220.8189f, -1162.3016f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.71747f, -1326.6299f, 28.2135f, 474.96436f, -1307.9983f, 34.494976f, 12f, false, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.0801f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.54315f, -996.97687f, 24.88307f, 428.29355f, -997.0192f, 28.574581f, 8.5f, false, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (__LIB_0__::func_387(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_704(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x64E13
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
										func_704(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_704(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, iVar0, func_582(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_709(iParam0, iVar10, &iVar4, 1))
							{
								func_704(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_704(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_704(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_704(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_704(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_704(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_704(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_704(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_704(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_704(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_709(iParam0, iVar10, &iVar4, 0))
		{
			func_704(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_705(iParam0, iVar10, &iVar4))
		{
			func_704(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_705(int iParam0, int iParam1, int iParam2)//Position - 0x65623
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_585(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_709(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6583F
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_585(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

void func_721(int iParam0, bool bParam1)//Position - 0x67001
{
	__LIB_17__::func_737();
	iLocal_62 = 1;
	iLocal_140 = 0;
	iLocal_319 = iParam0;
	iLocal_320 = 0;
	func_733();
	if (bParam1)
	{
		if (iLocal_319 >= 8)
		{
			func_663(5, "LOSE_COPS", 1, 0, 0, 1);
		}
		else if (iLocal_319 >= 7)
		{
			func_663(4, "ESCAPE_FROM_WAREHOUSE", 0, 0, 0, 1);
		}
		else if (iLocal_319 >= 6)
		{
			func_663(3, "ESCAPE_PRE_WAREHOUSE", 0, 0, 0, 1);
		}
		else if (iLocal_319 >= 4)
		{
			func_663(2, "GO_TO_PLANT", 0, 0, 0, 1);
		}
		else if (iLocal_319 >= 3)
		{
			func_663(1, "BUY_GRENADES", 0, 0, 0, 1);
		}
		else
		{
			func_663(0, "GO_TO_GUN_SHOP", 0, 0, 0, 1);
		}
	}
}

void func_724()//Position - 0x670F4
{
	int iVar0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	HUD::REQUEST_ADDITIONAL_TEXT("LEM1", 0);
	PED::ADD_RELATIONSHIP_GROUP("SWAT", &iLocal_346);
	PED::ADD_RELATIONSHIP_GROUP("DRIVERS", &iLocal_347);
	PED::ADD_RELATIONSHIP_GROUP("BIKERS", &iLocal_348);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_346);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_346, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_346, iLocal_346);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_346, iLocal_347);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_346, iLocal_348);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_347, iLocal_346);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_347, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_347, iLocal_347);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_348, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_348, iLocal_346);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_348, iLocal_348);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_344, true);
	__LIB_11__::func_816(3, 0);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-73.97455f, -1548.6064f, 23.770067f, 7.875402f, -1450.7036f, 39.286743f, 126.75f, false, false, true);
	PATHFIND::SET_ROADS_IN_AREA(-672.15f, -1670.86f, 18.61f, -410.67f, -1748.43f, 26.83f, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(17.2f, -1115.4f, 20f, 50f, -1083.3f, 40f, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-630f, -1617f, 20f, -600f, -1590f, 40f, false, true);
	__LIB_0__::func_222(&Local_288, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	__LIB_0__::func_364(2, 0);
	__LIB_0__::func_364(3, 1);
	__LIB_14__::func_474(28, 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_151)
	{
		iLocal_151[iVar0] = AUDIO::GET_SOUND_ID();
		iVar0++;
	}
	iLocal_161 = AUDIO::GET_SOUND_ID();
	Global_95467 = 3;
	iLocal_99 = 0;
	bLocal_115 = __LIB_3__::func_200(29);
	iLocal_178 = PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID());
	iLocal_349[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-572.7031f, -1672.0083f, 0f, -509.0245f, -1618.3895f, 34.451f, false, true, true, true);
	iLocal_349[1] = PED::ADD_SCENARIO_BLOCKING_AREA(-563.9064f, -1761.4708f, 0f, -384.2186f, -1635.0127f, 34.451f, false, true, true, true);
	iLocal_349[2] = PED::ADD_SCENARIO_BLOCKING_AREA(-697.5707f, -1686.8453f, 0.0951f, -584.6719f, -1596.8103f, 60.0951f, false, true, true, true);
	iLocal_350 = PED::ADD_SCENARIO_BLOCKING_AREA(4.3425f, -1128.4681f, 0.0951f, 38.8711f, -1098.1051f, 60.0951f, false, true, true, true);
}

void func_733()//Position - 0x6AA7C
{
	int iVar0[5];
	bool bVar1;
	int iVar2;
	int iVar3;
	HUD::CLEAR_HELP(true);
	__LIB_1__::func_674(1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
	__LIB_0__::func_671(0);
	__LIB_16__::func_318(&Local_276, 1, 0);
	__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
	__LIB_38__::func_112(0);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	MISC::ENABLE_DISPATCH_SERVICE(1, true);
	MISC::ENABLE_DISPATCH_SERVICE(8, true);
	MISC::ENABLE_DISPATCH_SERVICE(2, true);
	MISC::ENABLE_DISPATCH_SERVICE(6, true);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	PED::SET_CREATE_RANDOM_COPS(true);
	PLAYER::SET_POLICE_RADAR_BLIPS(true);
	MISC::SET_FAKE_WANTED_LEVEL(0);
	CLOCK::PAUSE_CLOCK(false);
	STREAMING::NEW_LOAD_SCENE_STOP();
	__LIB_12__::func_849(9, 0);
	__LIB_12__::func_849(8, 0);
	if (iLocal_125)
	{
		iLocal_125 = 0;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			}
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), false);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true, true, false);
		PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), true);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 146, false);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
		PLAYER::SET_PLAYER_SPRINT(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_RADAR_BLIPS(true);
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		if (iLocal_62)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
	}
	else if (iLocal_319 == 6 || iLocal_319 == 7)
	{
		bVar1 = false;
		if (!PED::IS_PED_INJURED(Local_274.f_0))
		{
			PED::GET_PED_NEARBY_PEDS(Local_274.f_0, &iVar0, -1);
		}
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar0)
		{
			if (!PED::IS_PED_INJURED(iVar0[iVar2]))
			{
				if ((iVar0[iVar2] != Local_274.f_0 && iVar0[iVar2] != Local_275.f_0) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar2]) == iLocal_346)
				{
					bVar1 = true;
				}
			}
			iVar2++;
		}
		if (!PED::IS_PED_INJURED(Local_274.f_0) && !PED::IS_PED_IN_COMBAT(Local_274.f_0, 0))
		{
			if (!iLocal_67)
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_274.f_0, -8f, true);
				if (bVar1)
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_274.f_0, 100f, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(Local_274.f_0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 200f, -1, false, false);
				}
				PED::SET_PED_KEEP_TASK(Local_274.f_0, true);
			}
			else
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_274.f_0, 0);
				PED::SET_PED_TO_RAGDOLL(Local_274.f_0, 1000, 2000, 2, true, true, false);
				PED::APPLY_DAMAGE_TO_PED(Local_274.f_0, ENTITY::GET_ENTITY_HEALTH(Local_274.f_0) + 50, true, 0);
			}
		}
		if (!PED::IS_PED_INJURED(Local_275.f_0) && !PED::IS_PED_IN_COMBAT(Local_275.f_0, 0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_275.f_0, false);
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_275.f_0, -8f, true);
			if (bVar1)
			{
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_275.f_0, 100f, 0);
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(Local_275.f_0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 200f, -1, false, false);
			}
			PED::SET_PED_KEEP_TASK(Local_275.f_0, true);
		}
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_257))
	{
		OBJECT::REMOVE_PICKUP(iLocal_257);
	}
	TASK::REMOVE_COVER_POINT(iLocal_233);
	TASK::REMOVE_COVER_POINT(Local_274.f_2);
	TASK::REMOVE_COVER_POINT(iLocal_234);
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Lemar1");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Lemar2");
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_333, false);
	__LIB_37__::func_213(28, 0);
	__LIB_30__::func_373(48, 0);
	iLocal_83 = 0;
	__LIB_0__::func_221(&Local_288, 5);
	__LIB_0__::func_221(&Local_288, 6);
	__LIB_0__::func_221(&Local_288, 7);
	__LIB_0__::func_221(&Local_288, 3);
	__LIB_0__::func_221(&Local_288, 4);
	__LIB_0__::func_221(&Local_288, 8);
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(iLocal_331, Local_224, false, 0f, 0f, 0f);
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(iLocal_332, Local_225, false, 0f, 0f, 0f);
	if (iLocal_116)
	{
		OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("v_ilev_rc_door1"), -603.8043f, -1620.3005f, 33.1606f, false, 0f, 0f, 0f);
		OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("v_ilev_rc_door1"), -606.3953f, -1620.0739f, 33.1606f, false, 0f, 0f, 0f);
	}
	if (iLocal_240 != 0)
	{
		if (INTERIOR::IS_INTERIOR_READY(iLocal_240))
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_240);
			iLocal_240 = 0;
		}
	}
	if (iLocal_241 != 0)
	{
		if (INTERIOR::IS_INTERIOR_READY(iLocal_241))
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_241);
			iLocal_241 = 0;
		}
	}
	if (iLocal_242 != 0)
	{
		if (INTERIOR::IS_INTERIOR_READY(iLocal_242))
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_242);
			iLocal_242 = 0;
		}
	}
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iLocal_151)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_151[iVar3]))
		{
			AUDIO::STOP_SOUND(iLocal_151[iVar3]);
		}
		iVar3++;
	}
	if (iLocal_73)
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_NPC_RAPPELLING");
		iLocal_73 = 0;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_161))
	{
		AUDIO::STOP_SOUND(iLocal_161);
	}
	__LIB_0__::func_753();
	AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_MISSION_FAIL");
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::SET_AUDIO_FLAG("SpeechDucksScore", false);
	AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", false);
	if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
	{
		CUTSCENE::STOP_CUTSCENE(false);
	}
	CUTSCENE::REMOVE_CUTSCENE();
	if (iLocal_62)
	{
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (iLocal_130)
	{
		RECORDING::REPLAY_STOP_EVENT();
		iLocal_130 = 0;
	}
	func_213();
	func_737();
	func_736(iLocal_62);
	func_735(iLocal_62);
	func_734(iLocal_62);
	func_291(1);
	func_275();
	PHYSICS::ROPE_UNLOAD_TEXTURES();
	VEHICLE::REMOVE_VEHICLE_ASSET(iLocal_333);
	VEHICLE::REMOVE_VEHICLE_ASSET(__LIB_15__::func_221(1, 1));
	AUDIO::DISTANT_COP_CAR_SIRENS(false);
	__LIB_0__::func_424(0);
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_201))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_201) != 0)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_201, 0, false, true);
		}
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_201, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_250))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_250, true, false);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_250);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_202))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_202, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_203))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_203, 0);
	}
	ENTITY::REMOVE_MODEL_HIDE(-614.7736f, -1633.7233f, 32.4919f, 2f, joaat("prop_crate_05a"), true);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	func_289(0);
	iVar3 = 0;
	while (iVar3 < iLocal_259)
	{
		if (iLocal_259[iVar3] != 0)
		{
			PHYSICS::DELETE_ROPE(&(iLocal_259[iVar3]));
			iLocal_259[iVar3] = 0;
		}
		iVar3++;
	}
	if (!iLocal_62)
	{
		__LIB_10__::func_347(3, 1);
		__LIB_0__::func_377(0, -1);
		__LIB_0__::func_364(2, 1);
		__LIB_0__::func_638();
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-73.97455f, -1548.6064f, 23.770067f, 7.875402f, -1450.7036f, 39.286743f, 126.75f, 1);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-672.15f, -1670.86f, 18.61f, -410.67f, -1748.43f, 26.83f, 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_344, false);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(17.2f, -1115.4f, 20f, 50f, -1083.3f, 40f, true, true);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-630f, -1617f, 20f, -600f, -1590f, 40f, true, true);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_349[0], false);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_349[1], false);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_349[2], false);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_350, false);
		AUDIO::RELEASE_SOUND_ID(iLocal_161);
		BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE("chop");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else
	{
		func_288();
		HUD::CLEAR_PRINTS();
		__LIB_0__::func_429();
		__LIB_0__::func_753();
		iLocal_75 = 0;
		Global_95467 = 3;
		iVar3 = 0;
		while (iVar3 < Local_237.f_0)
		{
			if (Local_237[iVar3 /*9*/] != 0)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_237[iVar3 /*9*/], false);
				Local_237[iVar3 /*9*/] = 0;
			}
			Local_237[iVar3 /*9*/].f_1 = 0f;
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < Local_238.f_0)
		{
			if (Local_238[iVar3 /*9*/] != 0)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_238[iVar3 /*9*/], false);
				Local_238[iVar3 /*9*/] = 0;
			}
			Local_238[iVar3 /*9*/].f_1 = 0f;
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < iLocal_258)
		{
			if (iLocal_258[iVar3] != 0)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_258[iVar3], false);
				iLocal_258[iVar3] = 0;
			}
			iVar3++;
		}
		if (iLocal_236 != 0)
		{
			GRAPHICS::REMOVE_DECAL(iLocal_236);
			iLocal_236 = 0;
		}
		__LIB_3__::func_506(28);
		__LIB_42__::func_534(103, 1);
		__LIB_42__::func_534(104, 1);
		__LIB_42__::func_534(101, 1);
		__LIB_42__::func_534(102, 1);
		func_326();
		AUDIO::STOP_AUDIO_SCENES();
		__LIB_14__::func_423(28, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_325);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_326);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_327);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_328);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_333);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_334);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_336);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_337);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_338);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_339);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_340);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_341);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_344);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_345);
		STREAMING::REMOVE_ANIM_DICT(sLocal_206);
		STREAMING::REMOVE_ANIM_DICT(sLocal_205);
		STREAMING::REMOVE_ANIM_DICT(sLocal_216);
		STREAMING::REMOVE_ANIM_DICT(sLocal_217);
		STREAMING::REMOVE_ANIM_DICT(sLocal_210);
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_213);
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_212);
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_214);
		STREAMING::REMOVE_PTFX_ASSET();
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_256[0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_256[0]);
		}
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_256[1]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_256[1]);
		}
		MISC::CLEAR_AREA(0f, 0f, 0f, 10000f, true, true, false, false);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(0f, 0f, 0f, 10000f);
	}
}

void func_734(bool bParam0)//Position - 0x6B33A
{
	int iVar0;
	__LIB_37__::func_206(&iLocal_260, bParam0);
	__LIB_37__::func_206(&iLocal_261, bParam0);
	__LIB_37__::func_206(&iLocal_263, bParam0);
	__LIB_37__::func_206(&iLocal_264, bParam0);
	__LIB_37__::func_206(&iLocal_265, bParam0);
	__LIB_37__::func_206(&iLocal_266, bParam0);
	__LIB_37__::func_206(&iLocal_268, bParam0);
	__LIB_37__::func_206(&iLocal_262, bParam0);
	__LIB_37__::func_206(&iLocal_271, bParam0);
	__LIB_37__::func_206(&iLocal_272, bParam0);
	if (bParam0)
	{
		__LIB_37__::func_206(&iLocal_273, bParam0);
	}
	__LIB_37__::func_206(&iLocal_270, bParam0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_267)
	{
		__LIB_37__::func_206(&(iLocal_267[iVar0]), 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_269)
	{
		__LIB_37__::func_206(&(iLocal_269[iVar0]), 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_239.f_0)
	{
		__LIB_37__::func_206(&(Local_239[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
}

void func_735(bool bParam0)//Position - 0x6B417
{
	if (!iLocal_99)
	{
		if (!(iLocal_67 && !bParam0))
		{
			func_269(&Local_274, bParam0);
		}
		func_269(&Local_275, bParam0);
	}
	func_269(&iLocal_251, bParam0);
	func_269(&iLocal_252, bParam0);
	func_269(&iLocal_253, bParam0);
	func_269(&iLocal_254, bParam0);
	func_269(&(Global_96938.f_9[0]), 1);
	func_269(&(Global_96938.f_9[1]), 1);
	func_269(&(Global_96938.f_9[2]), 1);
	func_269(&(Global_96938.f_9[3]), 1);
	func_153(&Local_305, bParam0);
	func_153(&Local_306, bParam0);
	func_153(&Local_307, bParam0);
	func_153(&Local_308, bParam0);
	func_153(&Local_309, bParam0);
	func_153(&Local_310, bParam0);
	func_153(&Local_312, bParam0);
	func_153(&Local_313, bParam0);
	func_153(&Local_311, bParam0);
	func_153(&Local_314, bParam0);
	func_153(&Local_315, bParam0);
	func_153(&Local_316, bParam0);
	func_153(&Local_317, bParam0);
	func_153(&Local_318, bParam0);
}

void func_736(bool bParam0)//Position - 0x6B51F
{
	int iVar0;
	__LIB_16__::func_13(&iLocal_243, bParam0);
	__LIB_16__::func_13(&iLocal_244, bParam0);
	__LIB_16__::func_13(&iLocal_246, 0);
	__LIB_16__::func_13(&iLocal_249, 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_247)
	{
		__LIB_16__::func_13(&(iLocal_247[iVar0]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_248)
	{
		__LIB_16__::func_13(&(iLocal_248[iVar0]), bParam0);
		iVar0++;
	}
}

void func_737()//Position - 0x6B591
{
	CAM::DESTROY_ALL_CAMS(false);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
}

void func_741()//Position - 0x6B670
{
	int iVar0;
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		if (!__LIB_0__::func_134())
		{
			iVar0 = __LIB_0__::func_380();
			if (iVar0 != -1)
			{
				if (!func_653(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_37__::func_360();
		}
	}
}

