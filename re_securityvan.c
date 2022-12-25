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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_44 = 0;
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49[2] = { 0, 0 };
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56[2] = { 0, 0 };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	struct<3> Local_61[2];
	float fLocal_62[2] = { 0f, 0f };
	struct<3> Local_63 = { 0, 0, 0 } ;
	float fLocal_64 = 0f;
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	float fLocal_72 = 0f;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88[2] = { 0, 0 };
	bool bLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91[2] = { 0, 0 };
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	char[] cLocal_105[8] = 0;
	struct<10> Local_106[16];
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = -1;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 1000;
	var uLocal_121 = 1000;
	var uLocal_122 = 0;
	var uLocal_123 = 8;
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
	var uLocal_270 = 1;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	float fLocal_275 = 0f;
	struct<3> Local_276 = { 0, 0, 0 } ;
	struct<3> Local_277 = { 0, 0, 0 } ;
	int iLocal_278 = 0;
	struct<3> Local_279 = { 0, 0, 0 } ;
	float fLocal_280 = 0f;
	int iLocal_281[2] = { 0, 0 };
	int iLocal_282 = 0;
	struct<3> Local_283 = { 0, 0, 0 } ;
	struct<3> Local_284 = { 0, 0, 0 } ;
	struct<3> Local_285 = { 0, 0, 0 } ;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	bool bLocal_288 = 0;
	int iLocal_289 = 0;
	float fLocal_290 = 0f;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	struct<3> Local_293 = { 0, 0, 0 } ;
	int iLocal_294[2] = { 0, 0 };
	int iLocal_295 = 0;
	float fLocal_296 = 0f;
	float fLocal_297 = 0f;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300[2] = { 0, 0 };
	int iLocal_301[2] = { 0, 0 };
	struct<2> Local_302 = { 0, 5 } ;
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
	var uLocal_318 = 5;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_65 = { 0.0203f, -3.1441f, 0.5027f };
	Local_66 = { 90f, 0f, 0f };
	Local_68 = { 0f, 0f, 0f };
	Local_69 = { 0f, 0f, 0f };
	iLocal_95 = 1;
	iLocal_96 = 1;
	cLocal_105 = "RESECAU";
	iLocal_271 = -1;
	fLocal_275 = -3.55f;
	Local_276 = { 0.014f, -0.9111f, 1.2317f };
	Local_277 = { 0f, -3.4368f, 1.2317f };
	iLocal_286 = -1;
	iLocal_287 = -1;
	iLocal_295 = -1;
	Local_67 = { Local_67 };
	Local_67 = { ScriptParam_302.f_1[0 /*3*/] };
	if (SYSTEM::VDIST(Local_67, -337.3338f, -1460.373f, 29.5668f) < 5f)
	{
		bLocal_45 = true;
	}
	else if (SYSTEM::VDIST(Local_67, -588.4711f, -866.9462f, 25.3292f) < 5f)
	{
		bLocal_45 = 2;
	}
	else if (SYSTEM::VDIST(Local_67, -389f, 6061f, 31f) < 5f)
	{
		bLocal_45 = 3;
	}
	else if (SYSTEM::VDIST(Local_67, -600f, -1094f, 22.76f) < 5f)
	{
		bLocal_45 = 4;
	}
	else if (SYSTEM::VDIST(Local_67, -1025f, -1086f, 2f) < 5f)
	{
		bLocal_45 = 5;
	}
	else if (SYSTEM::VDIST(Local_67, -595.5618f, -667.7235f, 31.0544f) < 5f)
	{
		bLocal_45 = 6;
	}
	else if (SYSTEM::VDIST(Local_67, 3018.3843f, 3634.0168f, 70.4076f) < 5f)
	{
		bLocal_45 = 7;
	}
	else if (SYSTEM::VDIST(Local_67, -2815.6614f, 2208.1707f, 27.8382f) < 5f)
	{
		bLocal_45 = 8;
	}
	else if (SYSTEM::VDIST(Local_67, 856.7742f, -2067.8452f, 29.0704f) < 5f)
	{
		bLocal_45 = 9;
	}
	else if (SYSTEM::VDIST(Local_67, 805.1932f, -703.1327f, 28.1632f) < 5f)
	{
		bLocal_45 = 10;
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (Global_3)
	{
		if (bLocal_45 != 2)
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	else
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_49)
			{
				if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_49[iVar0], iLocal_50, false))
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_49[iVar0], iLocal_50, -1, __LIB_26__::func_249(iLocal_50), 2f, 1, 0);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(iLocal_49[iVar0], 10000);
					}
				}
				iVar0++;
			}
			func_231();
		}
		if (!__LIB_39__::func_46(Local_67, 9, bLocal_45, 1, 0))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		else
		{
			__LIB_39__::func_9(-1);
		}
	}
	func_187();
	iLocal_59 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_63 + Vector(30f, 30f, 30f), Local_63 - Vector(30f, 30f, 30f), false, true, true, true);
	while (true)
	{
		SYSTEM::WAIT(0);
		__LIB_38__::func_71(&uLocal_123);
		if (!__LIB_39__::func_8())
		{
			if (__LIB_39__::func_15())
			{
				func_231();
			}
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_SV", 0);
			switch (iLocal_298)
			{
				case 0:
					if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && !__LIB_39__::func_45())
					{
						if (func_161())
						{
							if ((iLocal_44 == 3 && !(CAM::IS_SPHERE_VISIBLE(Local_63, 3f) && __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_63, 1) < 150f)) || iLocal_44 != 3)
							{
								if (iLocal_44 == 3)
								{
									if (!CAM::IS_SPHERE_VISIBLE(Local_63, 8f))
									{
										MISC::CLEAR_AREA(Local_63, 4f, true, false, false, false);
									}
									iLocal_46 = 4;
									bLocal_79 = true;
								}
								else
								{
									iLocal_46 = 1;
								}
								func_159();
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && iLocal_44 == 3)
								{
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_50, 5f);
								}
								SYSTEM::SETTIMERA(0);
								iLocal_298++;
							}
						}
					}
					else
					{
						func_231();
					}
					break;
				case 1:
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false))
					{
						if (((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_50, true)) < 10000f || !ENTITY::IS_ENTITY_OCCLUDED(iLocal_50)) || (!PED::IS_PED_INJURED(iLocal_49[0]) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_49[0]))) || (!PED::IS_PED_INJURED(iLocal_49[1]) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_49[1])))
						{
							iLocal_298++;
						}
					}
					if (func_158())
					{
						iLocal_298++;
					}
					if (iLocal_298 != 1)
					{
						SYSTEM::SETTIMERA(0);
					}
					break;
				case 2:
					if (SYSTEM::TIMERA() > 2000)
					{
						if (iLocal_44 != 3)
						{
							func_153();
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_50) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (iLocal_44 == 3)
						{
							func_148();
							if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_50) && (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_50, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 100f || func_158()))
							{
								__LIB_39__::func_11(1);
							}
						}
						else if (((!ENTITY::IS_ENTITY_OCCLUDED(iLocal_50) && iLocal_46 == 4) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_70, Local_71, fLocal_72, false, true, 0)) || func_158())
						{
							__LIB_39__::func_11(1);
						}
						if ((iLocal_46 == 4 && ENTITY::IS_ENTITY_OCCLUDED(iLocal_50)) && iLocal_44 != 3)
						{
							if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_50, true)) > 100f)
							{
								func_231();
							}
							else
							{
								__LIB_39__::func_11(1);
							}
						}
					}
					break;
			}
			if (iLocal_298 > 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_50))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_50, true)) > 62500f)
					{
						func_231();
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_50, true)) > 10000f && !BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
					{
						func_231();
					}
				}
			}
		}
		else
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			if (!HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				if (!func_138(2) && !bLocal_84)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						__LIB_0__::func_151("SV_VANHELP1" /* GXT: If you blow off the doors or destroy a security truck, you will be able to get to the cash inside. */, 15000);
						func_136(2);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
				{
					if (iLocal_299 != 0)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_52, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < SYSTEM::POW(50f, 2f))
						{
							iLocal_299 = 0;
							__LIB_0__::func_345(&uLocal_111, 0, 0);
						}
					}
				}
				else if (((bLocal_79 && !OBJECT::DOES_PICKUP_EXIST(iLocal_103)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false)) && !bLocal_89)
				{
					if (iLocal_299 != 1)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_50, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < SYSTEM::POW(50f, 2f))
						{
							iLocal_299 = 1;
							__LIB_0__::func_345(&uLocal_111, 0, 0);
						}
					}
				}
				else if (OBJECT::DOES_PICKUP_EXIST(iLocal_103))
				{
					if (iLocal_299 != 2)
					{
						if (SYSTEM::VDIST2(OBJECT::GET_PICKUP_COORDS(iLocal_103), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < SYSTEM::POW(50f, 2f))
						{
							iLocal_299 = 2;
							__LIB_0__::func_345(&uLocal_111, 0, 0);
						}
					}
				}
				if (iLocal_299 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
					{
						__LIB_17__::func_118(&uLocal_111, iLocal_52, 0, 0, 1, 1, 1);
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_52, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > SYSTEM::POW(50f, 2f))
						{
							iLocal_299 = -1;
							__LIB_0__::func_345(&uLocal_111, 0, 0);
						}
					}
				}
				else if (iLocal_299 == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_50, true))
					{
						__LIB_17__::func_118(&uLocal_111, iLocal_50, 0, 0, 1, 1, 1);
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_50, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > SYSTEM::POW(50f, 2f))
						{
							iLocal_299 = -1;
							__LIB_0__::func_345(&uLocal_111, 0, 0);
						}
					}
				}
				else if (iLocal_299 == 2)
				{
					if (OBJECT::DOES_PICKUP_EXIST(iLocal_103))
					{
						__LIB_38__::func_478(&uLocal_111, OBJECT::GET_PICKUP_COORDS(iLocal_103), 0, 0, 1, 1, 1);
						if (SYSTEM::VDIST2(OBJECT::GET_PICKUP_COORDS(iLocal_103), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > SYSTEM::POW(50f, 2f))
						{
							iLocal_299 = -1;
							__LIB_0__::func_345(&uLocal_111, 0, 0);
						}
					}
				}
				if (((!ENTITY::IS_ENTITY_DEAD(iLocal_50, false) && bLocal_79) && !bLocal_81) && (!func_138(0) || (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), false) && !func_138(1))))
				{
					switch (iLocal_100)
					{
						case 0:
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_50, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 225f)
							{
								__LIB_0__::func_151("SV_DOORHELP1" /* GXT: When attacking a Security Van damage the center of the rear doors to open them. */, 15000);
								func_136(0);
								iLocal_100++;
							}
							break;
						case 1:
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								iLocal_101 = MISC::GET_GAME_TIMER();
								iLocal_100++;
							}
							break;
						case 2:
							if ((MISC::GET_GAME_TIMER() - iLocal_101) > 2000 && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), false))
							{
								__LIB_0__::func_151("SV_DOORHELP2" /* GXT: Alternatively, attach a sticky bomb to the rear doors of the van and detonate it to blow them open. */, 15000);
								func_136(1);
								iLocal_100++;
							}
							break;
						}
				}
				if (bLocal_81 || bLocal_89)
				{
					if (__LIB_0__::func_1("SV_DOORHELP1" /* GXT: When attacking a Security Van damage the center of the rear doors to open them. */) || __LIB_0__::func_1("SV_DOORHELP2" /* GXT: Alternatively, attach a sticky bomb to the rear doors of the van and detonate it to blow them open. */))
					{
						HUD::CLEAR_HELP(true);
					}
				}
			}
			switch (iLocal_46)
			{
				case 1:
					func_153();
					break;
				case 2:
					func_96();
					break;
				case 3:
					func_94();
					break;
				case 4:
					func_148();
					break;
				case 5:
					func_90();
					break;
				case 6:
					func_86();
					break;
				case 7:
					if (!PED::IS_PED_INJURED(iLocal_49[0]))
					{
						if (PED::GET_PED_ALERTNESS(iLocal_49[0]) != 3)
						{
							PED::SET_PED_ALERTNESS(iLocal_49[0], 3);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_49[1]))
					{
						if (PED::GET_PED_ALERTNESS(iLocal_49[1]) != 3)
						{
							PED::SET_PED_ALERTNESS(iLocal_49[1], 3);
						}
					}
					if (((!PED::IS_PED_INJURED(iLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false)) && !PED::IS_PED_INJURED(iLocal_49[1])) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[1], false))
					{
						iLocal_95 = 1;
						func_79(iLocal_49[1]);
						func_77(0, 1);
					}
					else if (iLocal_95 == 1)
					{
						if (PED::IS_PED_INJURED(iLocal_49[1]) || ENTITY::IS_ENTITY_DEAD(iLocal_49[1], false))
						{
							iLocal_48 = 0;
							iLocal_95 = 0;
						}
						else
						{
							func_79(iLocal_49[1]);
						}
					}
					else if (iLocal_95 == 0)
					{
						if (PED::IS_PED_INJURED(iLocal_49[0]) || ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false))
						{
							iLocal_95 = -1;
						}
						else
						{
							func_79(iLocal_49[0]);
						}
					}
					break;
				case 8:
					func_71();
					break;
				case 9:
					func_231();
					break;
			}
			if (func_69())
			{
				func_68(9);
			}
			if ((((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_50, -1, false) == PLAYER::PLAYER_PED_ID()) && !bLocal_83) && iLocal_46 != 8)
			{
				if (bLocal_79)
				{
					func_68(8);
				}
				else
				{
					func_68(5);
				}
			}
			if (bLocal_80)
			{
				if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iLocal_60, joaat("PLAYER")) != 5)
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_60, joaat("PLAYER"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_60);
				}
			}
			if (bLocal_81)
			{
				if ((OBJECT::DOES_PICKUP_EXIST(iLocal_103) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), OBJECT::GET_PICKUP_COORDS(iLocal_103)) > 250f)
				{
					func_68(9);
				}
			}
			if (!bLocal_89)
			{
				if (func_67())
				{
					bLocal_89 = true;
				}
			}
			else
			{
				iVar1 = 1;
				iVar2 = 0;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[iVar2]))
				{
					if ((!ENTITY::IS_ENTITY_DEAD(iLocal_49[iVar2], false) && !PED::IS_PED_INJURED(iLocal_49[iVar2])) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_49[0], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 10000f)
					{
						iVar1 = 0;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_50))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_50, false))
						{
							iVar3 = 1;
						}
					}
					if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_50, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 10000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_50)) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_50, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 62500f)
					{
						iVar3 = 1;
					}
				}
				if (iVar3 && iVar1)
				{
					func_43();
				}
			}
			func_39();
			func_34();
			func_29();
		}
		if (!bLocal_77)
		{
			if (func_28())
			{
				iLocal_93 = MISC::GET_GAME_TIMER();
				bLocal_77 = true;
			}
		}
		if (bLocal_77)
		{
			if (!bLocal_78)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_93) > 5000)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
					if (func_27() < 30f)
					{
						if (__LIB_0__::func_787(&Local_106, cLocal_105, "RESEC_COPS", 8, 0, 0, 0))
						{
							bLocal_78 = true;
						}
					}
					else
					{
						bLocal_78 = true;
					}
				}
			}
		}
		if (((MISC::GET_GAME_TIMER() - iLocal_93) > 10000 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) && !iLocal_92)
		{
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (iVar4 == 0)
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_01", 0f);
			}
			else if (iVar4 == 1)
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_02", 0f);
			}
			else
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_03", 0f);
			}
			iLocal_92 = 1;
		}
		if (bLocal_78)
		{
			if ((!PED::IS_PED_INJURED(iLocal_49[0]) || !PED::IS_PED_INJURED(iLocal_49[1])) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(func_3(), true)) < SYSTEM::POW(50f, 2f))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					}
					PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				}
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && func_2())
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
		if (__LIB_0__::func_201())
		{
			func_68(9);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_50, 0) > 0f || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_50, 1) > 0f)
			{
				if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iLocal_50) == 3)
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_50, 1);
				}
			}
			if (!bLocal_82)
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_50, false))
				{
					bLocal_82 = true;
				}
			}
			if (!bLocal_82)
			{
				if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_50, 0) == 0f && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_50, 1) == 0f)
				{
					if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iLocal_50) == 1)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_50, 3);
					}
				}
			}
		}
		if (iLocal_97 != 0)
		{
			if ((iLocal_46 == 8 || iLocal_46 == 6) || iLocal_46 == 4)
			{
				EVENT::REMOVE_SHOCKING_EVENT(iLocal_97);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
		{
			iVar5 = 0;
			while (iVar5 < iLocal_49)
			{
				if (!PED::IS_PED_INJURED(iLocal_49[iVar5]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[iVar5], false))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_52, iLocal_49[iVar5]))
					{
						if (iLocal_46 == 1)
						{
							if (!iLocal_300[iVar5])
							{
								PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 0, "random@security_van", "sec_idle", 8f, true);
								PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 1, "random@security_van", "sec_walk_calm", 8f, true);
								iLocal_300[iVar5] = 1;
							}
						}
						if (iLocal_46 == 7)
						{
							if (!iLocal_301[iVar5])
							{
								PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 0, "random@security_van", "sec_idle", 8f, true);
								PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 1, "random@security_van", "sec_walk_panic", 8f, true);
								iLocal_301[iVar5] = 1;
							}
						}
						if (WEAPON::IS_PED_ARMED(iLocal_49[iVar5], 4) && !iLocal_85)
						{
							WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(iLocal_49[iVar5], true);
							iLocal_85 = 1;
						}
					}
					else
					{
						if (iLocal_300[iVar5])
						{
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 0, -8f);
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 1, -8f);
							iLocal_300[iVar5] = 0;
						}
						if (iLocal_301[iVar5])
						{
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 0, -8f);
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 1, -8f);
							iLocal_301[iVar5] = 0;
						}
						if (iLocal_300[iVar5] || iLocal_301[iVar5])
						{
							iLocal_300[iVar5] = 0;
							iLocal_301[iVar5] = 0;
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 0, -8f);
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 1, -8f);
						}
						if (WEAPON::IS_PED_ARMED(iLocal_49[iVar5], 4) && iLocal_85)
						{
							WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(iLocal_49[iVar5], true);
							iLocal_85 = 0;
						}
					}
				}
				iVar5++;
			}
		}
		else
		{
			iVar5 = 0;
			while (iVar5 < iLocal_49)
			{
				if (!PED::IS_PED_INJURED(iLocal_49[iVar5]))
				{
					if (iLocal_300[iVar5] || iLocal_301[iVar5])
					{
						iLocal_300[iVar5] = 0;
						iLocal_301[iVar5] = 0;
						PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 0, -8f);
						PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 1, -8f);
					}
				}
				iVar5++;
			}
		}
		if (!bLocal_79 && !bLocal_288)
		{
			if (((((ENTITY::DOES_ENTITY_EXIST(iLocal_52) && ENTITY::IS_ENTITY_ATTACHED(iLocal_52)) && !PED::IS_PED_INJURED(iLocal_49[iLocal_96])) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49[iLocal_96], "random@security_van", "sec_hand_override", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49[iLocal_96], "random@security_van", "sec_case_into_van_panic", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49[iLocal_96], "random@security_van", "sec_case_into_van_calm", 3))
			{
				TASK::TASK_PLAY_ANIM(iLocal_49[iLocal_96], "random@security_van", "sec_hand_override", 1000f, -4f, -1, 49, 0f, false, false, false);
			}
		}
		if (!iLocal_86)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_50))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50, PLAYER::PLAYER_PED_ID(), true))
				{
					iLocal_86 = 1;
				}
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_50);
			}
		}
	}
}

int func_2()//Position - 0x11D5
{
	float fVar0;
	int iVar1;
	int iVar2;
	fVar0 = 50f;
	if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && bLocal_84) && OBJECT::DOES_PICKUP_EXIST(iLocal_103)) || (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && OBJECT::DOES_PICKUP_EXIST(iLocal_103)))) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_50, true)) < 20f) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), OBJECT::GET_PICKUP_COORDS(iLocal_103)) < 20f)
	{
		iVar1 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar0, fVar0, fVar0, -1);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("S_M_Y_Cop_01") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("S_F_Y_Cop_01"))
			{
				return 1;
			}
		}
		iVar1 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar0, fVar0, fVar0, -1);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("S_M_Y_Cop_01") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("S_F_Y_Cop_01"))
			{
				return 1;
			}
		}
		iVar2 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar0, 0, 1024);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
		{
			return 1;
		}
		iVar2 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar0, 0, 1024);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
		{
			return 1;
		}
	}
	return 0;
}

var func_3()//Position - 0x1335
{
	float fVar0;
	int iVar1;
	fVar0 = 999999f;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(iLocal_49[0]))
		{
			fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[0], true));
			iVar1 = 0;
		}
		if (!PED::IS_PED_INJURED(iLocal_49[1]))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[1], true)) < fVar0)
			{
				fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[1], true));
				iVar1 = 1;
			}
		}
	}
	return iLocal_49[iVar1];
}

float func_27()//Position - 0x1CB6
{
	float fVar0;
	fVar0 = 999999f;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(iLocal_49[0]))
		{
			fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[0], true));
		}
		if (!PED::IS_PED_INJURED(iLocal_49[1]))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[1], true)) < fVar0)
			{
				fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[1], true));
			}
		}
	}
	return SYSTEM::SQRT(fVar0);
}

int func_28()//Position - 0x1D40
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar1 = 0;
		while (iVar1 < iLocal_49)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[iVar1]))
			{
				if (((!PED::IS_PED_INJURED(iLocal_49[iVar1]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[iVar1], PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_INJURED(iLocal_49[iVar1])) || ENTITY::IS_ENTITY_DEAD(iLocal_49[iVar1], false))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
		if ((!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(iLocal_49[1])) && iLocal_86)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_29()//Position - 0x1DE5
{
	if (!bLocal_89)
	{
		if (!bLocal_79)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_52))
				{
					OBJECT::DELETE_OBJECT(&iLocal_52);
					if (!OBJECT::DOES_PICKUP_EXIST(iLocal_103) && !bLocal_81)
					{
						func_30(0f, 0f, 0f, 0);
					}
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_102) > 3000)
				{
					if (PED::IS_PED_INJURED(iLocal_49[iLocal_96]) || PED::IS_PED_RAGDOLL(iLocal_49[iLocal_96]))
					{
						ENTITY::DETACH_ENTITY(iLocal_52, true, true);
						iLocal_102 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (!OBJECT::DOES_PICKUP_EXIST(iLocal_103))
			{
				if (PED::IS_PED_INJURED(iLocal_49[iLocal_96]) || ((!PED::IS_PED_INJURED(iLocal_49[iLocal_96]) && PED::IS_PED_RAGDOLL(iLocal_49[iLocal_96])) && !bLocal_81))
				{
					func_30(0f, 0f, 0f, 0);
				}
			}
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
		{
			OBJECT::DELETE_OBJECT(&iLocal_52);
		}
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_103))
		{
			OBJECT::REMOVE_PICKUP(iLocal_103);
		}
	}
}

void func_30(struct<3> Param0, bool bParam1)//Position - 0x1ED2
{
	if (!bLocal_89 && !bLocal_81)
	{
		if (!bParam1)
		{
			if (bLocal_79)
			{
				Param0 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, 0f, -3.3f, 0f), 1.2f, 1.5f) };
			}
			else
			{
				Param0 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_49[iLocal_96], false), 1.2f, 1.5f) };
			}
		}
		MISC::SET_BIT(&iLocal_104, 3);
		MISC::SET_BIT(&iLocal_104, 4);
		MISC::SET_BIT(&iLocal_104, 1);
		if (bParam1)
		{
			iLocal_103 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_MONEY_SECURITY_CASE"), Param0, ENTITY::GET_ENTITY_ROTATION(iLocal_52, 2), 0, iLocal_94, 2, true, 0);
		}
		else
		{
			iLocal_103 = OBJECT::CREATE_PICKUP(joaat("PICKUP_MONEY_SECURITY_CASE"), Param0, iLocal_104, iLocal_94, true, 0);
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_58))
		{
			iLocal_58 = __LIB_39__::func_39(iLocal_103);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
		{
			OBJECT::DELETE_OBJECT(&iLocal_52);
		}
		bLocal_81 = true;
	}
}

void func_34()//Position - 0x2001
{
	if (func_36())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_50, 2, false, false);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_50, 3, false, false);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
			{
				OBJECT::DELETE_OBJECT(&iLocal_53);
			}
		}
	}
	switch (iLocal_47)
	{
		case 0:
			if (bLocal_79)
			{
				iLocal_47 = 1;
			}
			break;
		case 1:
			if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_50, 2) == 0f && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_50, 3) == 0f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_52))
					{
						ENTITY::DETACH_ENTITY(iLocal_52, true, true);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_52, iLocal_50, 0, Local_65, Local_66, false, false, false, false, 2, true, 0);
					iLocal_47 = 2;
				}
			}
			break;
		case 2:
			if (!bLocal_81 && !bLocal_89)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_50, false))
				{
					if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_50, 2) > 0.25f) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_50, 3) > 0.25f) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(iLocal_52))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(AUDIO::GET_SOUND_ID(), "DOORS_BLOWN", ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_50, 13), "RE_SECURITY_VAN_SOUNDSET", false, 0, false);
								ENTITY::DETACH_ENTITY(iLocal_52, true, false);
								ENTITY::SET_ENTITY_COLLISION(iLocal_52, true, false);
								PHYSICS::ACTIVATE_PHYSICS(iLocal_52);
								OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(iLocal_52, true);
								Local_279 = { ENTITY::GET_ENTITY_COORDS(iLocal_52, true) - ENTITY::GET_ENTITY_COORDS(iLocal_50, true) * Vector(1.5f, 1.5f, 1.5f) };
								if (SYSTEM::VMAG(Local_279) > 10f)
								{
									Local_279 = { __LIB_0__::func_79(Local_279) };
									Local_279 = { Local_279 * Vector(10f, 10f, 10f) };
								}
								if (iLocal_99 < 100)
								{
									iLocal_87 = 1;
								}
								ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_52, 1, 0f, 1f, 5f, 0f, 0f, 0f, 0, true, true, true, false, true);
								iLocal_278 = MISC::GET_GAME_TIMER();
							}
							else if (MISC::GET_RATIO_OF_CLOSEST_POINT_ON_LINE(ENTITY::GET_ENTITY_COORDS(iLocal_52, true), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, Local_276), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, Local_277), false) >= 1f)
							{
								iLocal_47 = 3;
								iLocal_91[0] = 0;
								iLocal_91[1] = 0;
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_278) > 5000)
							{
								func_30(0f, 0f, 0f, 0);
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_50))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_50, 2, false, false);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_50, 3, false, false);
					func_30(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, 0f, 2f, 0f), 0);
				}
			}
			break;
		case 3:
			if (iLocal_46 != 8)
			{
				func_68(8);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_52) && !OBJECT::DOES_PICKUP_EXIST(iLocal_103))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_52) == 0f && (MISC::GET_GAME_TIMER() - iLocal_278) > 1000)
				{
					func_30(ENTITY::GET_ENTITY_COORDS(iLocal_52, true), 1);
					OBJECT::DELETE_OBJECT(&iLocal_52);
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_278) > 5000)
				{
					func_30(0f, 0f, 0f, 0);
				}
			}
			break;
	}
}

int func_36()//Position - 0x22F1
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_53) && ENTITY::IS_ENTITY_ATTACHED(iLocal_53))
	{
		if (!iLocal_272)
		{
			if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), joaat("WEAPON_STICKYBOMB"), 0.25f, false) || OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), 0.3f, WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_STICKYBOMB")), false))
			{
				iLocal_272 = 1;
			}
		}
		iVar0 = 0;
		GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), 0.1f, 255, 0, 0, 255);
		if (__LIB_39__::func_116(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_53, true), 1f, 1) || (FIRE::IS_EXPLOSION_IN_SPHERE(2, ENTITY::GET_ENTITY_COORDS(iLocal_53, true), 0.3f) && iLocal_272))
		{
			iLocal_87 = 1;
			iVar0 = 1;
		}
		if (ENTITY::GET_ENTITY_HEALTH(iLocal_53) < iLocal_98 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_99 = (iLocal_99 + (iLocal_98 - ENTITY::GET_ENTITY_HEALTH(iLocal_53)));
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_53);
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_273) > 200 && ENTITY::DOES_ENTITY_EXIST(iLocal_50))
		{
			if (MISC::IS_BULLET_IN_ANGLED_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, 0f, 0f, (1.2195f - 0.27f)), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, 0f, fLocal_275, (1.2195f + 0.09f)), 0.45f, true))
			{
				iLocal_273 = MISC::GET_GAME_TIMER();
				iLocal_274++;
			}
		}
		if (iLocal_274 > 5)
		{
			return 1;
		}
		if (iLocal_99 > 100 || iVar0)
		{
			return 1;
		}
		iLocal_98 = ENTITY::GET_ENTITY_HEALTH(iLocal_53);
	}
	return 0;
}

void func_39()//Position - 0x288F
{
	int iVar0;
	bool bVar1;
	int iVar2[2];
	if (!HUD::DOES_BLIP_EXIST(iLocal_57))
	{
		if (!bLocal_80)
		{
			if ((!PED::IS_PED_INJURED(iLocal_49[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false)) && !bLocal_89)
			{
				if (!bLocal_79)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_56[1]))
					{
						uLocal_56[1] = __LIB_0__::func_666(iLocal_49[1], 0, 145);
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_56[1]))
					{
						HUD::REMOVE_BLIP(&(uLocal_56[1]));
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_55))
					{
						iLocal_55 = __LIB_0__::func_639(iLocal_50, 0, 0);
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_56[1]))
				{
					HUD::REMOVE_BLIP(&(uLocal_56[1]));
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_55))
				{
					HUD::REMOVE_BLIP(&iLocal_55);
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_56[0]) && HUD::GET_BLIP_HUD_COLOUR(uLocal_56[0]) != 119)
			{
				HUD::REMOVE_BLIP(&(uLocal_56[0]));
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_56[1]) && HUD::GET_BLIP_HUD_COLOUR(uLocal_56[1]) != 119)
			{
				HUD::REMOVE_BLIP(&(uLocal_56[1]));
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_55) && HUD::GET_BLIP_HUD_COLOUR(iLocal_55) != 119)
			{
				HUD::REMOVE_BLIP(&iLocal_55);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_49)
				{
					if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_49[iVar0], iLocal_50, false))
						{
							bVar1 = true;
						}
					}
					iVar0++;
				}
			}
			if (bVar1)
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_55))
				{
					iLocal_55 = __LIB_0__::func_639(iLocal_50, 1, 0);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_55))
			{
				HUD::REMOVE_BLIP(&iLocal_55);
			}
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && HUD::DOES_BLIP_EXIST(iLocal_55)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_50, false))
				{
					if (HUD::GET_BLIP_ALPHA(iLocal_55) != 0)
					{
						HUD::SET_BLIP_ALPHA(iLocal_55, 0);
					}
				}
				else if (HUD::GET_BLIP_ALPHA(iLocal_55) != 255)
				{
					HUD::SET_BLIP_ALPHA(iLocal_55, 255);
				}
			}
			iVar0 = 0;
			while (iVar0 < iLocal_49)
			{
				if (!PED::IS_PED_INJURED(iLocal_49[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!OBJECT::DOES_PICKUP_EXIST(iLocal_103) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_49[iVar0], false))
					{
						if (!PED::IS_PED_FLEEING(iLocal_49[iVar0]) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_49[iVar0], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 30f)
						{
							iVar2[iVar0] = 1;
						}
					}
					if (iLocal_46 == 8 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_49[iVar0], false))
					{
						iVar2[iVar0] = 1;
					}
					if (iLocal_46 == 5)
					{
						iVar2[iVar0] = 0;
					}
				}
				if (iVar2[iVar0])
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_56[iVar0]))
					{
						uLocal_56[iVar0] = __LIB_0__::func_666(iLocal_49[iVar0], 1, 145);
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_56[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_56[iVar0]));
				}
				iVar0++;
			}
			if (OBJECT::DOES_PICKUP_EXIST(iLocal_103) && !bLocal_89)
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_58))
				{
					iLocal_58 = __LIB_16__::func_324(iLocal_103);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_58))
			{
				HUD::REMOVE_BLIP(&iLocal_58);
			}
		}
	}
	else if ((ENTITY::DOES_ENTITY_EXIST(iLocal_50) && ENTITY::DOES_ENTITY_EXIST(iLocal_49[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_49[1]))
	{
		if ((((((!ENTITY::IS_ENTITY_OCCLUDED(iLocal_50) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50, 100f, 100f, 30f, false, true, 0)) || (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_49[0]) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[0], 100f, 100f, 30f, false, true, 0))) || (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_49[1]) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[1], 100f, 100f, 30f, false, true, 0))) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50, 50f, 50f, 20f, false, true, 0)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[0], 50f, 50f, 20f, false, true, 0)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[1], 50f, 50f, 20f, false, true, 0))
		{
			HUD::REMOVE_BLIP(&iLocal_57);
		}
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_56[0]))
	{
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_56[0], iLocal_90);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_56[1]))
	{
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_56[1], bLocal_90);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_55))
	{
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_55, bLocal_90);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_58))
	{
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_58, bLocal_90);
	}
	if (!bLocal_90)
	{
		if (bLocal_80 || iLocal_47 == 3)
		{
			bLocal_90 = false;
		}
	}
}

void func_43()//Position - 0x2E30
{
	__LIB_39__::func_87(9, bLocal_45);
	while (!__LIB_0__::func_109())
	{
		SYSTEM::WAIT(0);
	}
	func_231();
}

int func_67()//Position - 0x4048
{
	if (bLocal_81)
	{
		if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_103))
		{
			return 1;
		}
	}
	return 0;
}

void func_68(int iParam0)//Position - 0x4063
{
	iLocal_46 = iParam0;
	iLocal_48 = 0;
}

int func_69()//Position - 0x4072
{
	if (!OBJECT::DOES_PICKUP_EXIST(iLocal_103))
	{
		if (bLocal_79)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false))
			{
				if (!func_70(iLocal_50))
				{
					if (iLocal_271 == -1)
					{
						iLocal_271 = MISC::GET_GAME_TIMER();
					}
				}
				else if (iLocal_271 != -1)
				{
					iLocal_271 = -1;
				}
			}
		}
		if (!bLocal_79)
		{
			if (iLocal_96 != -1)
			{
				if (!PED::IS_PED_INJURED(iLocal_49[iLocal_96]))
				{
					if (!func_70(iLocal_50))
					{
						if (iLocal_271 == -1)
						{
							iLocal_271 = MISC::GET_GAME_TIMER();
						}
					}
					else if (iLocal_271 != -1)
					{
						iLocal_271 = -1;
					}
				}
			}
		}
		if (iLocal_271 != -1)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_271) > 3000)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_49[0]));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_49[1]));
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_50, -1000f, true);
				ENTITY::SET_ENTITY_COLLISION(iLocal_50, true, false);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_50);
				return 1;
			}
		}
	}
	else
	{
		if (iLocal_271 != -1)
		{
			iLocal_271 = -1;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && SYSTEM::VDIST(OBJECT::GET_PICKUP_COORDS(iLocal_103), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0)//Position - 0x417C
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true)) < 150f)
		{
			return 1;
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true)) < 300f)
		{
			return 1;
		}
	}
	return 0;
}

void func_71()//Position - 0x41ED
{
	int iVar0;
	int iVar1;
	if (iLocal_295 == -1)
	{
		iLocal_295 = MISC::GET_GAME_TIMER();
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_48)
		{
			case 0:
				bLocal_80 = true;
				if (!PED::IS_PED_INJURED(iLocal_49[0]) || !PED::IS_PED_INJURED(iLocal_49[1]))
				{
					if (func_27() < 30f && !PED::IS_PED_INJURED(Local_106[3 /*10*/]))
					{
						__LIB_0__::func_787(&Local_106, cLocal_105, "RESEC_SHT1", 8, 0, 0, 0);
					}
				}
				iVar0 = 0;
				while (iVar0 < iLocal_49)
				{
					if (!PED::IS_PED_INJURED(iLocal_49[iVar0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_52))
					{
						if ((iVar0 != iLocal_96 || bLocal_79) || !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_52, iLocal_49[iVar0]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_49[iVar0]);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_54);
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_49[iVar0], false))
							{
								if (iLocal_87)
								{
									if (STREAMING::HAS_CLIP_SET_LOADED("move_injured_generic"))
									{
										PED::SET_PED_MOVEMENT_CLIPSET(iLocal_49[iVar0], "move_injured_generic", 0.25f);
										iLocal_88[iVar0] = 1;
									}
								}
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
							}
							TASK::TASK_CLEAR_LOOK_AT(0);
							if (iLocal_88[iVar0])
							{
								TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000));
							}
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_54);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_49[iVar0], iLocal_54);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
						}
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 6, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 0, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 1, false);
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_49[iVar0], 1);
						PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_49[iVar0], 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[iVar0], true);
					}
					iVar0++;
				}
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_52) && ENTITY::IS_ENTITY_ATTACHED(iLocal_52)) && !PED::IS_PED_INJURED(iLocal_49[iLocal_96]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_49[iLocal_96]);
				}
				SYSTEM::SETTIMERA(0);
				iLocal_48++;
				break;
			case 1:
				if (func_76(iLocal_96))
				{
					if (!PED::IS_PED_INJURED(iLocal_49[iLocal_96]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_49[iLocal_96]);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_54);
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_49[iLocal_96], false))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
						}
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_54);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_49[iLocal_96], iLocal_54);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
					}
					iLocal_48++;
				}
				break;
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_49[0]) || !PED::IS_PED_INJURED(iLocal_49[1]))
				{
					if (PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(iLocal_49[1]))
					{
						if (Local_106[3 /*10*/] != iLocal_49[1])
						{
							__LIB_0__::func_221(&Local_106, 3);
							__LIB_0__::func_221(&Local_106, 4);
							__LIB_0__::func_222(&Local_106, 3, iLocal_49[1], "SECVANGUY1", 0, 1);
						}
					}
					iVar0 = 0;
					while (iVar0 < iLocal_49)
					{
						if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
						{
							if ((iLocal_47 == 2 && !iLocal_91[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_50, false))
							{
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(iLocal_49[iVar0], iLocal_50, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, 0f, -4f, 0f), 5f, false);
								iLocal_91[iVar0] = 1;
							}
							if (((OBJECT::DOES_PICKUP_EXIST(iLocal_103) && !iLocal_91[iVar0]) && iLocal_47 == 3) && !bLocal_89)
							{
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(iLocal_49[iVar0], iLocal_50, OBJECT::GET_PICKUP_COORDS(iLocal_103), 5f, false);
								iLocal_91[iVar0] = 1;
							}
							if (bLocal_89)
							{
								if (iLocal_91[iVar0])
								{
									PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_49[iVar0], false);
									iLocal_91[iVar0] = 0;
								}
							}
						}
						iVar0++;
					}
					if (IntToFloat((MISC::GET_GAME_TIMER() - iLocal_292)) > MISC::GET_RANDOM_FLOAT_IN_RANGE(10000f, 15000f))
					{
						if (!__LIB_0__::func_75() && func_27() < 30f)
						{
							if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
							{
								if (__LIB_0__::func_787(&Local_106, cLocal_105, "RESEC_SHT2", 8, 0, 0, 0))
								{
									iLocal_292 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false))
					{
						if (!bLocal_79)
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_50, false) && (MISC::GET_GAME_TIMER() - iLocal_295) > 5000)
							{
								if (func_27() > (30f + (30f / 10f)))
								{
									func_68(7);
								}
								if (func_27() > (30f / 2f) && !func_72())
								{
									if (!bLocal_79)
									{
										func_68(7);
									}
									else
									{
										func_68(6);
									}
								}
								if (iLocal_46 != 8)
								{
									iLocal_91[0] = 0;
									iLocal_91[1] = 0;
									iLocal_295 = -1;
								}
							}
						}
					}
				}
				break;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_49)
		{
			if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
			{
				if (iVar0 == 0)
				{
					iVar1 = 7000;
				}
				else
				{
					iVar1 = 9000;
				}
				if (SYSTEM::TIMERA() > iVar1 && iLocal_88[iVar0])
				{
					PED::RESET_PED_MOVEMENT_CLIPSET(iLocal_49[iVar0], 0.25f);
					iLocal_88[iVar0] = 0;
				}
			}
			iVar0++;
		}
	}
}

bool func_72()//Position - 0x46BD
{
	int iVar0;
	if ((MISC::GET_GAME_TIMER() - iLocal_282) > 250)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_49)
			{
				if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_49[iVar0], PLAYER::PLAYER_PED_ID(), 19) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_49[iVar0], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_281[iVar0] = 1;
					}
					else
					{
						iLocal_281[iVar0] = 0;
					}
				}
				iVar0++;
			}
		}
	}
	return (iLocal_281[0] || iLocal_281[1]);
}

bool func_76(int iParam0)//Position - 0x4824
{
	bool bVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
	{
		if (!PED::IS_PED_INJURED(iLocal_49[iParam0]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_52, iLocal_49[iParam0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49[iParam0], "weapons@holster_1h", "holster", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_49[iParam0], "weapons@holster_1h", "holster") > 0.9f)
					{
						ENTITY::DETACH_ENTITY(iLocal_52, true, true);
						OBJECT::DELETE_OBJECT(&iLocal_52);
					}
				}
				else
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[iParam0], true);
					TASK::TASK_PLAY_ANIM(iLocal_49[iParam0], "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0f, false, false, false);
				}
			}
		}
	}
	bVar0 = (!ENTITY::DOES_ENTITY_EXIST(iLocal_52) || (ENTITY::DOES_ENTITY_EXIST(iLocal_52) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_52, iLocal_49[iParam0])));
	if (bVar0)
	{
		if (!PED::IS_PED_INJURED(iLocal_49[iParam0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[iParam0], false);
		}
	}
	return bVar0;
}

void func_77(int iParam0, bool bParam1)//Position - 0x4908
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	struct<3> Var3[2];
	int iVar4;
	bool bVar5;
	int iVar6;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { __LIB_0__::func_79(ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_50, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true))) };
		fVar1 = ((ENTITY::GET_ENTITY_HEADING(iLocal_50) + MISC::GET_HEADING_FROM_VECTOR_2D(Var0.f_0, Var0.f_1)) + 45f);
		fVar2 = ((ENTITY::GET_ENTITY_HEADING(iLocal_50) + MISC::GET_HEADING_FROM_VECTOR_2D(Var0.f_0, Var0.f_1)) - 45f);
		Var3[0 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_50, true), fVar1, 0f, 4.5f, 0f) };
		Var3[1 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_50, true), fVar2, 0f, 4.5f, 0f) };
		func_78(&fVar1);
		func_78(&fVar2);
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_293) > 2f)
		{
			bVar5 = true;
		}
		iVar4 = 0;
		while (iVar4 < iLocal_49)
		{
			if (!PED::IS_PED_INJURED(iLocal_49[iVar4]))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_49[iVar4], true), Var3[iVar4 /*3*/]) > 2f)
				{
					bVar5 = true;
				}
			}
			iVar4++;
		}
		if (bVar5)
		{
			iVar4 = 0;
			while (iVar4 < iLocal_49)
			{
				if ((((((!PED::IS_PED_INJURED(iLocal_49[iVar4]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_49[iVar4], true), Var3[iVar4 /*3*/]) > 2f) && (MISC::GET_GAME_TIMER() - iLocal_294[iVar4]) > 1000) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_49[iVar4], false)) && !iLocal_281[iVar4]) && (iParam0 == -1 || iParam0 == iVar4))
				{
					if (bParam1)
					{
						if (func_72())
						{
							Local_293 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						}
						TASK::OPEN_SEQUENCE_TASK(&iVar6);
						if (func_72() || __LIB_0__::func_86(Local_293))
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Var3[iVar4 /*3*/], PLAYER::PLAYER_PED_ID(), 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, true);
						}
						else
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Var3[iVar4 /*3*/], Local_293, 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
							TASK::TASK_AIM_GUN_AT_COORD(0, Local_293, -1, true, false);
						}
						TASK::CLOSE_SEQUENCE_TASK(iVar6);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_49[iVar4], iVar6);
						TASK::CLEAR_SEQUENCE_TASK(&iVar6);
					}
					iLocal_294[iVar4] = MISC::GET_GAME_TIMER();
				}
				iVar4++;
			}
		}
	}
}

void func_78(float fParam0)//Position - 0x4B6D
{
	if (*fParam0 > 180f)
	{
		*fParam0 = (*fParam0 - 360f);
	}
	else if (*fParam0 < -180f)
	{
		*fParam0 = (*fParam0 + 360f);
	}
}

void func_79(int iParam0)//Position - 0x4BA8
{
	float fVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false))
	{
		switch (iLocal_48)
		{
			case 0:
				if (!bLocal_79)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
					TASK::CLEAR_PED_TASKS(iParam0);
					Local_283 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_50, 0) };
					Local_284 = { ENTITY::GET_ENTITY_ROTATION(iLocal_50, 2) };
					Local_285 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@security_van", "sec_case_into_van_panic", Local_283, Local_284, 0f, 2) };
					if (((!PED::IS_PED_INJURED(iLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[1], false)) && !PED::IS_PED_INJURED(iLocal_49[0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false))
					{
						if (func_27() < 20f)
						{
							if (bLocal_80)
							{
								__LIB_0__::func_787(&Local_106, cLocal_105, "RESEC_REC", 8, 0, 0, 0);
							}
						}
						if (OBJECT::DOES_PICKUP_EXIST(iLocal_103))
						{
							if (bLocal_80)
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, OBJECT::GET_PICKUP_COORDS(iLocal_103), 2f, -1, 0.25f, 0, 40000f);
							}
							else
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, OBJECT::GET_PICKUP_COORDS(iLocal_103), 1f, -1, 0.25f, 0, 40000f);
							}
							iLocal_48++;
						}
						else
						{
							func_85(iParam0);
							iLocal_48 = 2;
						}
					}
					else if (!PED::IS_PED_INJURED(iParam0))
					{
						if (OBJECT::DOES_PICKUP_EXIST(iLocal_103))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, OBJECT::GET_PICKUP_COORDS(iLocal_103), 2f, -1, 0.25f, 0, 40000f);
							iLocal_48++;
						}
						else
						{
							func_85(iParam0);
							iLocal_48 = 2;
						}
					}
				}
				else
				{
					iLocal_48 = 4;
				}
				break;
			case 1:
				if (!PED::IS_PED_INJURED(iParam0) && OBJECT::DOES_PICKUP_EXIST(iLocal_103))
				{
					if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), OBJECT::GET_PICKUP_COORDS(iLocal_103), true) < 2f && !PED::IS_PED_RAGDOLL(iParam0)) && (MISC::GET_GAME_TIMER() - iLocal_102) > 3000)
					{
						if (WEAPON::IS_PED_ARMED(iParam0, 4))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), true);
						}
						OBJECT::REMOVE_PICKUP(iLocal_103);
						func_85(iParam0);
						WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), true);
						bLocal_81 = false;
						iLocal_96 = iLocal_95;
						iLocal_48++;
					}
				}
				break;
			case 2:
				if (!PED::IS_PED_INJURED(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
					{
						if (bLocal_80)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Local_285, 2f, -1, 0.1f, 512, Local_284.f_2);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Local_285, 1f, -1, 0.1f, 512, Local_284.f_2);
						}
						iLocal_48++;
					}
				}
				break;
			case 3:
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (OBJECT::DOES_PICKUP_EXIST(iLocal_103))
					{
						iLocal_48 = 0;
					}
					else
					{
						fVar0 = ENTITY::GET_ENTITY_HEADING(iParam0);
						if (fVar0 > 180f)
						{
							fVar0 = (fVar0 - 360f);
						}
						if (fVar0 <= -180f)
						{
							fVar0 = (fVar0 + 360f);
						}
						if (Local_284.f_2 > 180f)
						{
							Local_284.f_2 = (Local_284.f_2 - 360f);
						}
						if (Local_284.f_2 <= -180f)
						{
							Local_284.f_2 = (Local_284.f_2 + 360f);
						}
						if (SYSTEM::VDIST(Local_285, ENTITY::GET_ENTITY_COORDS(iParam0, true)) < 0.3f)
						{
							if (MISC::ABSF((fVar0 - Local_284.f_2)) < 15f)
							{
								PED::CLEAR_PED_ALTERNATE_WALK_ANIM(iParam0, -8f);
								TASK::CLEAR_PED_TASKS(iParam0);
								bLocal_288 = true;
								iLocal_286 = PED::CREATE_SYNCHRONIZED_SCENE(Local_283, Local_284, 2);
								if (bLocal_80)
								{
									TASK::TASK_SYNCHRONIZED_SCENE(iParam0, iLocal_286, "random@security_van", "sec_case_into_van_panic", 4f, 4f, 3, 0, 4f, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_50, iLocal_286, "van_case_into_van_panic", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								else
								{
									TASK::TASK_SYNCHRONIZED_SCENE(iParam0, iLocal_286, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_50, iLocal_286, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
								iLocal_48++;
							}
						}
						else if (ENTITY::IS_ENTITY_OCCLUDED(iParam0) && !CAM::IS_SPHERE_VISIBLE(Local_283, 2f))
						{
							ENTITY::SET_ENTITY_COORDS(iParam0, Local_283, true, false, false, true);
						}
					}
				}
				break;
			case 4:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_286))
				{
					if (bLocal_80)
					{
						fLocal_296 = 0.42f;
					}
					else
					{
						fLocal_296 = 0.3893f;
					}
					if (bLocal_80)
					{
						fLocal_297 = 0.52f;
					}
					else
					{
						fLocal_297 = 0.546243f;
					}
					if (!bLocal_79)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(iLocal_52) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_52, iParam0)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_286) > fLocal_296)
						{
							if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_52, iLocal_50))
							{
								ENTITY::DETACH_ENTITY(iLocal_52, true, true);
								ENTITY::SET_ENTITY_COLLISION(iLocal_52, false, false);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_52, iLocal_50, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_50, ENTITY::GET_ENTITY_COORDS(iLocal_52, true)), 90f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
							bLocal_79 = true;
						}
					}
					else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_286) > fLocal_297)
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_50, -4f, true);
						TASK::CLEAR_PED_TASKS(iParam0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
						{
							iLocal_76 = 0;
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_50, 2, true);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_50, 3, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
							iLocal_48++;
						}
					}
				}
				break;
			case 5:
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_286) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_286) > fLocal_297) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_286))
				{
					if (!bLocal_80)
					{
						if (!PED::IS_PED_INJURED(iLocal_49[0]))
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_49[0], iLocal_50, -1, -1, 1f, 1, 0);
						}
					}
					iLocal_48++;
				}
				break;
			case 6:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false))
				{
					if (bLocal_80)
					{
						func_68(6);
					}
					else
					{
						func_68(4);
					}
				}
				else
				{
					func_68(8);
				}
				break;
			}
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false))
	{
		if (!PED::IS_PED_INJURED(iLocal_49[0]) || !PED::IS_PED_INJURED(iLocal_49[1]))
		{
			func_68(8);
		}
	}
	if ((!PED::IS_PED_INJURED(iLocal_49[0]) || !PED::IS_PED_INJURED(iLocal_49[1])) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!bLocal_79)
		{
			if ((((((func_27() < 10f && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && func_72()) || ((func_27() < 20f && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))) || (func_27() < 5f && bLocal_80)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_80(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))) || ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && func_80(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
			{
				func_68(8);
			}
		}
	}
	if (iLocal_46 != 7)
	{
		if (bLocal_79)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_286))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_50, -8f, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		}
	}
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && iLocal_46 != 7) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_286))
	{
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_50, -8f, true);
	}
}

int func_80(int iParam0)//Position - 0x528F
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var2;
	struct<3> Var3[4];
	struct<3> Var4[4];
	struct<3> Var5[4];
	struct<3> Var6[4];
	var uVar7;
	float fVar8;
	float fVar9;
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iLocal_50))
	{
		uVar7 = 4;
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var1, &Var2);
		Var3[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var1.f_0, Var2.f_1, 0f) };
		Var3[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var2.f_0, Var2.f_1, 0f) };
		Var3[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var2.f_0, Var1.f_1, 0f) };
		Var3[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var1.f_0, Var1.f_1, 0f) };
		fVar8 = -3.7f;
		fVar9 = 1.35f;
		Var4[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, (-fVar9 - 0.25f), fVar8, 0f) };
		Var4[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, (fVar9 + 0.25f), fVar8, 0f) };
		Var4[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, (fVar9 - 0.25f), (fVar8 - 1.55f), 0f) };
		Var4[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, (-fVar9 + 0.25f), (fVar8 - 1.55f), 0f) };
		Var5[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, -fVar9, 0.5f, 0f) };
		Var5[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, (-fVar9 - 0.75f), 0.5f, 0f) };
		Var5[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, (-fVar9 - 0.75f), 1.5f, 0f) };
		Var5[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, -fVar9, 1.5f, 0f) };
		Var6[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, fVar9, 0.5f, 0f) };
		Var6[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, (fVar9 + 0.75f), 0.5f, 0f) };
		Var6[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, (fVar9 + 0.75f), 1.5f, 0f) };
		Var6[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, fVar9, 1.5f, 0f) };
		if (!bLocal_79)
		{
			if (func_81(&Var4, &Var3, &uVar7))
			{
				iVar0 = 1;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_IN_VEHICLE(iLocal_49[0], iLocal_50, true))
		{
			if (func_81(&Var5, &Var3, &uVar7))
			{
				iVar0 = 1;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_49[1]) && !PED::IS_PED_IN_VEHICLE(iLocal_49[1], iLocal_50, true))
		{
			if (func_81(&Var6, &Var3, &uVar7))
			{
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_81(var uParam0, var uParam1, var uParam2)//Position - 0x54DB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar2 = iVar0 + 1;
		if (iVar2 == *uParam0)
		{
			iVar2 = 0;
		}
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			iVar3 = iVar1 + 1;
			if (iVar3 == *uParam1)
			{
				iVar3 = 0;
			}
			if (__LIB_39__::func_91(*(uParam0[iVar0 /*3*/]), *(uParam0[iVar2 /*3*/]), *(uParam1[iVar1 /*3*/]), *(uParam1[iVar3 /*3*/]), uParam2[iVar0 /*3*/]))
			{
				return 1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

void func_85(int iParam0)//Position - 0x56CB
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_52))
		{
			iLocal_52 = OBJECT::CREATE_OBJECT(iLocal_75, Local_63, true, true, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_52, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_52, iParam0, PED::GET_PED_BONE_INDEX(iParam0, 28422), Local_68, Local_69, true, false, false, false, 2, true, 0);
		}
	}
}

void func_86()//Position - 0x5726
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (iLocal_48)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < iLocal_49)
			{
				if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[iVar0], true);
				}
				iVar0++;
			}
			bLocal_80 = true;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_89()))
				{
					if (!PED::IS_PED_INJURED(func_89()))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_50, -1, false) != func_89() && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_50, -1, false))
						{
							TASK::TASK_ENTER_VEHICLE(func_89(), iLocal_50, 20000, -1, 2f, 1, 0);
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_49[1]) && func_89() != iLocal_49[1])
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_50, 0, false) != iLocal_49[1] && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_50, 0, false))
					{
						TASK::TASK_ENTER_VEHICLE(iLocal_49[1], iLocal_50, -1, 0, 2f, 1, 0);
					}
				}
				iLocal_48++;
			}
			else
			{
				func_68(8);
			}
			break;
		case 1:
			if (func_88())
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_89()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(func_89(), iLocal_50, PLAYER::PLAYER_PED_ID(), 8, 50f, 786484, 100f, 5f, true);
					iLocal_48++;
				}
			}
			break;
		case 2:
			if (func_87())
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_89()))
				{
					TASK::TASK_VEHICLE_MISSION(func_89(), iLocal_50, 0, 5, 0f, 786484, 100f, 100f, true);
					iLocal_48++;
				}
			}
			break;
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_50) < 2f)
				{
					func_68(8);
				}
			}
			break;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_50) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_50, -1, false))) && (ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_50, -1, false), false) || PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_50, -1, false))))
	{
		iVar1 = 0;
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_50, -1, false) == iLocal_49[0])
		{
			iVar1 = 1;
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_50, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 100f)
		{
			if (!PED::IS_PED_INJURED(iLocal_49[iVar1]) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_49[iVar1], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_49[iVar1], 2, true);
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, iLocal_50, false);
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_50, PLAYER::PLAYER_PED_ID(), 8, 50f, 786484, 100f, 5f, true);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_49[iVar1], iVar2);
				TASK::CLEAR_SEQUENCE_TASK(&iVar2);
			}
		}
		else
		{
			func_68(8);
		}
	}
	if (((((((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) || OBJECT::DOES_PICKUP_EXIST(iLocal_103)) || iLocal_47 == 3) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_50, 0, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_50, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_50, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_50, 1, 40000)) || (iLocal_48 > 1 && !func_88()))
	{
		if (!func_88())
		{
		}
		func_68(8);
	}
}

int func_87()//Position - 0x5A3A
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_50))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_50, false))
		{
			if (((((ENTITY::GET_ENTITY_HEALTH(iLocal_50) < 300 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_50) < 200f) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_50, 0, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_50, 1, false))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_50, 4, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_50, 5, false))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_50, 0, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_50, 4, false))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_50, 1, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_50, 5, false)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_88()//Position - 0x5AE6
{
	int iVar0;
	iVar0 = 1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false))
	{
		if (!PED::IS_PED_INJURED(iLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_49[0], iLocal_50, false))
			{
				iVar0 = 0;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[1], false))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_49[1], iLocal_50, false))
			{
				iVar0 = 0;
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_89()//Position - 0x5B63
{
	if (!PED::IS_PED_INJURED(iLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false))
	{
		return iLocal_49[0];
	}
	if (!PED::IS_PED_INJURED(iLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[1], false))
	{
		return iLocal_49[1];
	}
	return 0;
}

void func_90()//Position - 0x5BBC
{
	int iVar0;
	int iVar1;
	switch (iLocal_48)
	{
		case 0:
			if (!bLocal_79)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_52) && ENTITY::IS_ENTITY_ATTACHED(iLocal_52))
				{
					ENTITY::DETACH_ENTITY(iLocal_52, true, true);
				}
			}
			if ((!PED::IS_PED_INJURED(iLocal_49[0]) || !PED::IS_PED_INJURED(iLocal_49[1])) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_27() < 20f)
				{
					__LIB_0__::func_787(&Local_106, cLocal_105, "RESEC_FFLEE", 8, 0, 0, 0);
				}
				iVar0 = 0;
				while (iVar0 < iLocal_49)
				{
					if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 17, true);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_49[iVar0], 128, true);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_49[iVar0], 16, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 1, false);
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_49[iVar0], true))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_49[iVar0], 0, 256);
						}
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_49[iVar0], iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
					}
					iVar0++;
				}
			}
			bLocal_83 = true;
			iLocal_48++;
			break;
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false))
			{
				if (__LIB_2__::func_925(iLocal_50, 1, 0, 0, 0, 0, 1, 0, 1))
				{
					iLocal_48++;
				}
			}
			break;
	}
}

void func_94()//Position - 0x5EF1
{
	if (!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(iLocal_49[1]))
	{
		switch (iLocal_48)
		{
			case 0:
				if (__LIB_0__::func_787(&Local_106, cLocal_105, "RESEC_CAR1", 8, 0, 0, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_52) && ENTITY::IS_ENTITY_ATTACHED(iLocal_52))
					{
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_52, iLocal_49[0]))
						{
							func_95(0);
						}
						else
						{
							TASK::CLEAR_PED_TASKS(iLocal_49[0]);
						}
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_52, iLocal_49[1]))
						{
							func_95(1);
						}
						else
						{
							TASK::CLEAR_PED_TASKS(iLocal_49[1]);
						}
						iLocal_48++;
					}
					else
					{
						func_95(0);
						func_95(1);
						iLocal_48 = 2;
					}
				}
				break;
			case 1:
				if (func_76(iLocal_96))
				{
					if (!PED::IS_PED_INJURED(iLocal_49[iLocal_96]))
					{
						func_95(iLocal_96);
					}
					iLocal_48++;
				}
				break;
			case 2:
				if (!__LIB_0__::func_75())
				{
					if (__LIB_0__::func_787(&Local_106, cLocal_105, "RESEC_CAR2", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_48++;
					}
				}
				break;
			case 3:
				if ((SYSTEM::TIMERA() > 12000 && !__LIB_0__::func_75()) && __LIB_0__::func_787(&Local_106, cLocal_105, "RESEC_CAR3", 8, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_48++;
				}
				break;
			case 4:
				if ((SYSTEM::TIMERA() > 7000 && !__LIB_0__::func_75()) && __LIB_0__::func_787(&Local_106, cLocal_105, "RESEC_CAR4", 8, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					func_68(8);
				}
				break;
			}
	}
	if (iLocal_48 > 0)
	{
		func_77(-1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_51))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_51, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_51, true), ENTITY::GET_ENTITY_COORDS(iLocal_50, true)) > 10f)
			{
				func_68(7);
			}
		}
		if ((ENTITY::IS_ENTITY_DEAD(iLocal_51, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_51, false)) || (!ENTITY::IS_ENTITY_UPRIGHT(iLocal_51, 90f) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_51, true)))
		{
			if (!func_80(iLocal_51))
			{
				func_68(7);
			}
			else
			{
				func_68(8);
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[0], PLAYER::PLAYER_PED_ID(), true))
		{
			func_68(8);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_49[1]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[1], PLAYER::PLAYER_PED_ID(), true))
		{
			func_68(8);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_86)
		{
			func_68(8);
		}
	}
	if (bLocal_89)
	{
		func_68(8);
	}
	if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_72()) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
	{
		func_68(2);
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false))
	{
		func_68(5);
	}
}

void func_95(int iParam0)//Position - 0x61E6
{
	if (!PED::IS_PED_INJURED(iLocal_49[iParam0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(iLocal_49[iParam0]);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_54);
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_49[iParam0], false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
		}
		TASK::TASK_CLEAR_LOOK_AT(0);
		TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_54);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_49[iParam0], iLocal_54);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
		if (iLocal_97 == 0)
		{
			iLocal_97 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(118 /*EVENT_SHOCKING_SEEN_WEAPON_THREAT*/, ENTITY::GET_ENTITY_COORDS(iLocal_49[iParam0], true), -1f);
		}
	}
}

void func_96()//Position - 0x6283
{
	bool bVar0;
	int iVar1;
	int iVar2;
	switch (iLocal_48)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_49[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[0], true);
			}
			if (!PED::IS_PED_INJURED(iLocal_49[1]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[1], true);
			}
			if (func_103())
			{
				if (__LIB_0__::func_787(&Local_106, cLocal_105, "RESEC_ATT1", 8, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					func_68(8);
				}
			}
			else if ((!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(iLocal_49[1])) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_102() || func_101())
				{
					__LIB_0__::func_787(&Local_106, cLocal_105, "RESEC_ENT1", 8, 0, 0, 0);
				}
				else if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
				{
					__LIB_0__::func_787(&Local_106, cLocal_105, "RESEC_WEP1", 8, 0, 0, 0);
				}
				else
				{
					__LIB_0__::func_787(&Local_106, cLocal_105, "RESEC_WARN", 8, 0, 0, 0);
				}
				SYSTEM::SETTIMERA(0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_52) && ENTITY::IS_ENTITY_ATTACHED(iLocal_52))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_52, iLocal_49[0]))
					{
						func_95(0);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_49[0]);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_52, iLocal_49[1]))
					{
						func_95(1);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_49[1]);
					}
					iLocal_48++;
				}
				else
				{
					func_95(0);
					func_95(1);
					iLocal_48 = 2;
				}
			}
			break;
		case 1:
			if (func_76(iLocal_96))
			{
				if (!PED::IS_PED_INJURED(iLocal_49[iLocal_96]))
				{
					func_95(iLocal_96);
				}
				iLocal_48++;
			}
			break;
		case 2:
			if (!func_100())
			{
				if (!func_99(iLocal_50, 1000) && SYSTEM::TIMERA() > 10000)
				{
					bVar0 = true;
				}
				else if (SYSTEM::TIMERA() > 7000)
				{
					SYSTEM::SETTIMERA(7000);
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					if (func_102())
					{
						bVar0 = true;
					}
				}
				if (SYSTEM::TIMERA() > 10000)
				{
					if (func_101())
					{
						bVar0 = true;
					}
				}
				iVar1 = 0;
				while (iVar1 < iLocal_49)
				{
					if (!func_99(iLocal_49[iVar1], 1000) && (func_27() < 2f && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)))
					{
						bVar0 = true;
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_49[iVar1], false))
					{
						if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_49[iVar1]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_49[iVar1]))
						{
							bVar0 = true;
						}
					}
					iVar1++;
				}
				func_77(-1, 1);
				if (IntToFloat((MISC::GET_GAME_TIMER() - iLocal_292)) > MISC::GET_RANDOM_FLOAT_IN_RANGE(5000f, 7500f))
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_0__::func_787(&Local_106, cLocal_105, "RESEC_WARN", 8, 0, 0, 0))
						{
							iLocal_292 = MISC::GET_GAME_TIMER();
						}
					}
				}
				if (bVar0)
				{
					__LIB_0__::func_429();
					func_68(8);
				}
			}
			break;
	}
	iVar2 = 0;
	while (iVar2 < iLocal_49)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(iLocal_49[iVar2]))
		{
			if ((PED::IS_PED_INJURED(iLocal_49[iVar2]) || ENTITY::IS_ENTITY_DEAD(iLocal_49[iVar2], false)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[iVar2], PLAYER::PLAYER_PED_ID(), false))
			{
				func_68(8);
			}
		}
		iVar2++;
	}
	if ((PED::IS_PED_INJURED(iLocal_49[0]) || PED::IS_PED_INJURED(iLocal_49[1])) || bLocal_89)
	{
		func_68(8);
	}
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && func_72())
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50, PLAYER::PLAYER_PED_ID(), true))
		{
			func_68(8);
		}
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false))
	{
		func_68(5);
	}
	if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		func_68(8);
	}
	if (func_27() > 20f || ((!iLocal_281[0] && !iLocal_281[1]) && func_27() > 5f))
	{
		func_68(7);
	}
}

int func_99(int iParam0, int iParam1)//Position - 0x66AC
{
	int iVar0;
	iVar0 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if ((ENTITY::IS_ENTITY_A_PED(iParam0) && !PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0))) || (ENTITY::IS_ENTITY_A_VEHICLE(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), false)))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true)) > fLocal_290)
				{
					iVar0 = 1;
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_291) > iParam1)
				{
					fLocal_290 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true));
					iLocal_291 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	return iVar0;
}

int func_100()//Position - 0x674C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50, 20f, 20f, 5f, false, true, 0) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_101()//Position - 0x679C
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, 0f, 1.7532f, 0.5984f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, 0f, 3.3477f, 3.5984f), 2.8f, false, true, 0))
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_49)
		{
			if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
			{
				if ((!PED::IS_PED_IN_VEHICLE(iLocal_49[iVar0], iLocal_50, false) && PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_50)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[iVar0], true)) < 400f)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_102()//Position - 0x685E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == iLocal_50)
		{
			if (PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_103()//Position - 0x689B
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if ((!PED::IS_PED_INJURED(iLocal_49[0]) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_49[0], PLAYER::PLAYER_PED_ID(), 20f, 20f, 5f, false, true, 0)) || (!PED::IS_PED_INJURED(iLocal_49[1]) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_49[1], PLAYER::PLAYER_PED_ID(), 20f, 20f, 5f, false, true, 0)))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_136(int iParam0)//Position - 0x7E44
{
	MISC::SET_BIT(&(Global_113386.f_24995.f_6), iParam0);
}

bool func_138(int iParam0)//Position - 0x7E72
{
	return BitTest(Global_113386.f_24995.f_6, iParam0);
}

void func_148()//Position - 0x83CB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	switch (iLocal_48)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false))
			{
				if (!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(iLocal_49[1]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[0], 6, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[1], 6, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[1], true);
					if (PED::IS_PED_IN_VEHICLE(iLocal_49[0], iLocal_50, false) && PED::IS_PED_IN_VEHICLE(iLocal_49[1], iLocal_50, false))
					{
						if (bLocal_45 == 2)
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_50, -574.6195f, -847.232f, 25.2925f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_50, 10f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_49[0], iVar0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							iLocal_48++;
						}
						else if (bLocal_45 == 4)
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_50, -551.2968f, -1119.4176f, 20.4011f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_50, 10f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(iVar1);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_49[0], iVar1);
							TASK::CLEAR_SEQUENCE_TASK(&iVar1);
							iLocal_48++;
						}
						else if (bLocal_45 == 7)
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar2);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_50, 2786.7524f, 4358.032f, 48.6794f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_50, 10f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(iVar2);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_49[0], iVar2);
							TASK::CLEAR_SEQUENCE_TASK(&iVar2);
							iLocal_48++;
						}
						else
						{
							TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_49[0], iLocal_50, 10f, 786603);
							iLocal_48++;
						}
					}
					else
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_49[0], iLocal_50, false) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_49[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_49[0], iLocal_50, -1, -1, 1f, 8388608, 0);
						}
						if (!PED::IS_PED_IN_VEHICLE(iLocal_49[1], iLocal_50, false) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_49[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_49[1], iLocal_50, -1, 0, 1f, 8388608, 0);
						}
					}
				}
			}
			break;
		case 1:
			if (((((func_152() || func_151()) || func_102()) || func_101()) || func_150()) || func_149())
			{
				if (func_27() < 20f)
				{
					__LIB_0__::func_429();
					__LIB_0__::func_787(&Local_106, cLocal_105, "RESEC_VFLEE1", 8, 0, 0, 0);
				}
				func_68(6);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar3 = 0;
				while (iVar3 < iLocal_49)
				{
					if (!PED::IS_PED_INJURED(iLocal_49[iVar3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[iVar3], false))
					{
						if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_BEING_JACKED(iLocal_49[iVar3]))
						{
							func_68(8);
						}
					}
					else
					{
						func_68(6);
					}
					iVar3++;
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_50, true))
				{
					func_68(8);
				}
			}
			break;
	}
	if (iLocal_46 == 4)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar4, true);
			if ((iVar4 == joaat("WEAPON_STICKYBOMB") || iVar4 == joaat("WEAPON_MOLOTOV")) || iVar4 == joaat("WEAPON_GRENADE"))
			{
				GRAPHICS::DRAW_DEBUG_TEXT("PLAYER HAS PROJECTILE WEAPON", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0, 0, 255, 255);
				if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, 0f, -3.44f, -3f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, 0f, -13.44f, 3f), 2.3f, false, true, 0)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_50, true)) < 225f)
				{
					func_68(6);
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, 0f, -3.44f, -3f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, 0f, -13.44f, 3f), 2.3f, false, true, 0))
				{
					GRAPHICS::DRAW_DEBUG_TEXT_2D("PLAYER IS BEHIND VAN", 0.1f, 0.8f, 0f, 0, 0, 255, 255);
				}
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_50, true)) < 225f)
				{
					GRAPHICS::DRAW_DEBUG_TEXT_2D("PLAYER IS CLOSE TO VAN", 0.1f, 0.82f, 0f, 0, 0, 255, 255);
				}
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
				}
			}
		}
		if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && __LIB_39__::func_116(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_50, true), 25f, 0)) || (!PED::IS_PED_INJURED(iLocal_49[0]) && __LIB_39__::func_116(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_49[0], true), 20f, 0))) || (!PED::IS_PED_INJURED(iLocal_49[1]) && __LIB_39__::func_116(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_49[1], true), 20f, 0)))
		{
			func_68(6);
		}
		if (iLocal_46 != 4)
		{
			if (!PED::IS_PED_INJURED(iLocal_49[0]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[0], 6, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[0], false);
			}
			if (!PED::IS_PED_INJURED(iLocal_49[1]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[1], 6, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[1], false);
			}
		}
	}
}

int func_149()//Position - 0x8913
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(iLocal_50, true) };
		Var1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_50) };
		Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_50, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
		if (((Var2.f_1 > 1f && (((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_50) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_50)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_49[0])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_49[1]))) && MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var1.f_0, Var1.f_1, Var0.f_0, Var0.f_1)) < 60f) && MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var1.f_2, Var1.f_1, Var0.f_2, Var0.f_1) < 30f)
		{
			return 1;
		}
	}
	return 0;
}

int func_150()//Position - 0x8A03
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, 2.7f, 7f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, 2.7f, -3.25f, 3f), 3f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, -2.7f, 7f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, -2.7f, -3.25f, 3f), 3f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, 0f, 7f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_50, 0f, 0f, 3f), 2.4f, false, true, 0))
		{
			if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_151()//Position - 0x8AC4
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_EXIST(iLocal_50))
		{
			return ((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iLocal_50)) && ENTITY::GET_ENTITY_SPEED(iVar0) > 10f);
		}
	}
	return 0;
}

int func_152()//Position - 0x8B5D
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_86)
		{
			return 1;
		}
		if (!PED::IS_PED_INJURED(iLocal_49[0]) || ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[0], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_49[1]) || ENTITY::IS_ENTITY_DEAD(iLocal_49[1], false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[1], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_153()//Position - 0x8BDF
{
	float fVar0;
	if ((!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(iLocal_49[1])) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false))
	{
		switch (iLocal_48)
		{
			case 0:
				Local_283 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_50, 0) };
				Local_284 = { ENTITY::GET_ENTITY_ROTATION(iLocal_50, 2) };
				Local_285 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@security_van", "sec_case_into_van_calm", Local_283, Local_284, 0f, 2) };
				bLocal_288 = false;
				iLocal_289 = 0;
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_50, 5f);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_54);
				TASK::TASK_STAND_STILL(0, 5000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_285, 1f, -1, 0.1f, 512, Local_284.f_2);
				TASK::TASK_ACHIEVE_HEADING(0, Local_284.f_2, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_54);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_49[1], iLocal_54);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
				iLocal_48++;
				break;
			case 1:
				Local_283 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_50, 0) };
				Local_284 = { ENTITY::GET_ENTITY_ROTATION(iLocal_50, 2) };
				Local_285 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@security_van", "sec_case_into_van_calm", Local_283, Local_284, 0f, 2) };
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_287))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_63) < 22500f && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iLocal_50))
					{
						iLocal_287 = PED::CREATE_SYNCHRONIZED_SCENE(Local_283, Local_284, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49[0], iLocal_287, "random@security_van", "driver_idle", 2f, -8f, 13, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_287, true);
					}
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_49[1], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_54);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_285, 1f, -1, 0.1f, 512, Local_284.f_2);
					TASK::TASK_ACHIEVE_HEADING(0, Local_284.f_2, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_54);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_49[1], iLocal_54);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
				}
				fVar0 = ENTITY::GET_ENTITY_HEADING(iLocal_49[1]);
				if (fVar0 > 180f)
				{
					fVar0 = (fVar0 - 360f);
				}
				if (fVar0 <= -180f)
				{
					fVar0 = (fVar0 + 360f);
				}
				if (Local_284.f_2 > 180f)
				{
					Local_284.f_2 = (Local_284.f_2 - 360f);
				}
				if (Local_284.f_2 <= -180f)
				{
					Local_284.f_2 = (Local_284.f_2 + 360f);
				}
				if (MISC::ABSF((fVar0 - Local_284.f_2)) < 15f && SYSTEM::VDIST(Local_285, ENTITY::GET_ENTITY_COORDS(iLocal_49[1], true)) < 0.2f)
				{
					PED::CLEAR_PED_ALTERNATE_WALK_ANIM(iLocal_49[1], -8f);
					TASK::CLEAR_PED_TASKS(iLocal_49[1]);
					bLocal_288 = true;
					iLocal_286 = PED::CREATE_SYNCHRONIZED_SCENE(Local_283, Local_284, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49[1], iLocal_286, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_50, iLocal_286, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
					iLocal_48++;
				}
				break;
			case 2:
				if (!iLocal_76)
				{
					if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_286) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_286) > 0.09f) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_286) < 0.11f) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[1], 20f, 20f, 5f, false, true, 0))
						{
							if (__LIB_0__::func_787(&Local_106, cLocal_105, "RESEC_CHT1", 3, 0, 0, 0))
							{
								iLocal_76 = 1;
							}
						}
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_286))
				{
					if (!bLocal_79)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(iLocal_52) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_52, iLocal_49[1])) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_286) > 0.3793f)
						{
							if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_52, iLocal_50))
							{
								ENTITY::DETACH_ENTITY(iLocal_52, true, true);
								ENTITY::SET_ENTITY_COLLISION(iLocal_52, false, false);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_52, iLocal_50, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_50, ENTITY::GET_ENTITY_COORDS(iLocal_52, true)), 90f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
							bLocal_79 = true;
						}
					}
					else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_286) > 0.546243f)
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_50, -4f, true);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
						{
							iLocal_76 = 0;
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_50, 2, true);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_50, 3, true);
							iLocal_48++;
						}
					}
				}
				break;
			case 3:
				if (!iLocal_76)
				{
					if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_286) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_286) > 0.56f) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[1], 20f, 20f, 5f, false, true, 0))
					{
						if (__LIB_0__::func_787(&Local_106, cLocal_105, "RESEC_CHT2", 3, 0, 0, 0))
						{
							iLocal_76 = 1;
						}
					}
				}
				if (!iLocal_289)
				{
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_286) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_286) > 0.6f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_286))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_287))
						{
							TASK::CLEAR_PED_TASKS(iLocal_49[0]);
							iLocal_287 = PED::CREATE_SYNCHRONIZED_SCENE(Local_283, Local_284, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49[0], iLocal_287, "random@security_van", "driver_exit_calm", 4f, -4f, 9, 0, 1000f, 0);
						}
						iLocal_289 = 1;
					}
				}
				else if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_287) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_287) >= 0.92f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_287))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_49[0], iLocal_50, false) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_49[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
					{
						TASK::CLEAR_PED_TASKS(iLocal_49[0]);
						TASK::TASK_ENTER_VEHICLE(iLocal_49[0], iLocal_50, -1, -1, 1f, 1, 0);
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_286) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_49[1], MISC::GET_HASH_KEY("ENDS_IN_WALK")))
				{
					TASK::CLEAR_PED_TASKS(iLocal_49[1]);
					TASK::TASK_ENTER_VEHICLE(iLocal_49[1], iLocal_50, -1, 0, 1f, 1, 0);
					SYSTEM::SETTIMERA(0);
				}
				if ((func_88() && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_50, 0) == 0f) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_50, 1) == 0f)
				{
					func_68(4);
				}
				break;
			case 4:
				if (SYSTEM::TIMERA() > 15000)
				{
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_50, 0, true);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_50, 1, true);
				}
				break;
		}
		if (((!PED::IS_PED_INJURED(func_3()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(func_3(), true)) < 30f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			func_68(8);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_49[1]))
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_103))
		{
			func_68(7);
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_157())
		{
			if (func_88())
			{
				func_68(6);
			}
			else
			{
				func_68(8);
			}
		}
		else if (func_155())
		{
			func_68(2);
		}
		else if (func_154())
		{
			func_68(3);
		}
	}
	if (iLocal_46 != 1)
	{
		if (iLocal_46 != 4)
		{
			__LIB_0__::func_429();
			if (!PED::IS_PED_INJURED(iLocal_49[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49[0], "random@security_van", "driver_idle", 3))
				{
					if (bLocal_45 != 2)
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_49[0], "random@security_van", "driver_exit_panic", Local_283, Local_284, 1000f, -8f, -1, 4096, 0f, 2, 0);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_49[0]);
						TASK::TASK_PLAY_ANIM(iLocal_49[0], "random@security_van", "driver_exit_panic", 1000f, -8f, -1, 0, 0f, false, false, false);
					}
				}
			}
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_286)) && !PED::IS_PED_INJURED(iLocal_49[1]))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_50, -1000f, true);
				TASK::CLEAR_PED_TASKS(iLocal_49[1]);
			}
		}
		if (bLocal_79 && !OBJECT::DOES_PICKUP_EXIST(iLocal_103))
		{
			VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_50, 2, true);
			VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_50, 3, true);
		}
	}
}

int func_154()//Position - 0x937C
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (func_80(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					iLocal_51 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					return 1;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (func_80(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			{
				fLocal_280 = (fLocal_280 + MISC::GET_FRAME_TIME());
			}
			else if (fLocal_280 > 0f)
			{
				fLocal_280 = (fLocal_280 - (MISC::GET_FRAME_TIME() * 10f));
			}
			else if (fLocal_280 < 0f)
			{
				fLocal_280 = 0f;
			}
			if (fLocal_280 > 3f)
			{
				iLocal_51 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				return 1;
			}
		}
	}
	return 0;
}

int func_155()//Position - 0x9432
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		if ((((((!PED::IS_PED_INJURED(iLocal_49[iVar0]) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_49[iVar0]) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[iVar0], true)) < 9f) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7)) && func_72())
		{
			return 1;
		}
		if (PED::IS_PED_RAGDOLL(iLocal_49[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_101())
	{
		return 1;
	}
	if ((func_156() || func_102()) && func_72())
	{
		if (!PED::IS_PED_IN_VEHICLE(iLocal_49[0], iLocal_50, false) || !PED::IS_PED_IN_VEHICLE(iLocal_49[1], iLocal_50, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_156()//Position - 0x9534
{
	int iVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7) || (iVar0 == joaat("WEAPON_PETROLCAN") && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())))
		{
			if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(iLocal_49[0]))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_49[0], PLAYER::PLAYER_PED_ID(), 12f, 12f, 5f, false, true, 0))
					{
						return 1;
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_49[1]))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_49[1], PLAYER::PLAYER_PED_ID(), 12f, 12f, 5f, false, true, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_157()//Position - 0x95E5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		if ((((((!PED::IS_PED_INJURED(iLocal_49[iVar0]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[iVar0], PLAYER::PLAYER_PED_ID(), true)) || (!PED::IS_PED_INJURED(iLocal_49[iVar0]) && PED::IS_PED_IN_COMBAT(iLocal_49[iVar0], PLAYER::PLAYER_PED_ID()))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[iVar0], PLAYER::PLAYER_PED_ID(), true)) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50, PLAYER::PLAYER_PED_ID(), true) && func_72())) || PED::IS_PED_INJURED(iLocal_49[iVar0])) || ENTITY::IS_ENTITY_DEAD(iLocal_49[iVar0], false))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_150() || func_103())
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_49)
		{
			if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
			{
				if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_BEING_JACKED(iLocal_49[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_50, true))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_63, 25f, 25f, 20f, false, true, 0))
		{
			return 1;
		}
	}
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_50, false) && __LIB_39__::func_116(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_50, true), 25f, 0)) || (!PED::IS_PED_INJURED(iLocal_49[0]) && __LIB_39__::func_116(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_49[0], true), 20f, 0))) || (!PED::IS_PED_INJURED(iLocal_49[1]) && __LIB_39__::func_116(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_49[1], true), 20f, 0)))
	{
		return 1;
	}
	return 0;
}

int func_158()//Position - 0x97D8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[iVar0]))
		{
			if ((!PED::IS_PED_INJURED(iLocal_49[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[iVar0], false)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_49[iVar0], true), 5f, true) || __LIB_39__::func_116(ENTITY::GET_ENTITY_COORDS(iLocal_49[iVar0], true) + Vector(5f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_49[iVar0], true) - Vector(5f, 5f, 5f), 0f, 0f, 0f, 0, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[iVar0], PLAYER::PLAYER_PED_ID(), true))
				{
					bLocal_80 = true;
					return 1;
				}
			}
			else
			{
				bLocal_80 = true;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_159()//Position - 0x989D
{
	int iVar0;
	iLocal_50 = VEHICLE::CREATE_VEHICLE(iLocal_74, Local_63, fLocal_64, true, true, false);
	iLocal_53 = OBJECT::CREATE_OBJECT(joaat("prop_security_case_01"), Local_63, true, true, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_53, iLocal_50, 0, 0f, -2.4589f, 1.2195f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_53, false, false);
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_53, iLocal_50, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_50, 5f);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_50, 3);
	ENTITY::SET_ENTITY_PROOFS(iLocal_53, false, true, true, true, true, true, false, false);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_50, true, 0f);
	ENTITY::SET_ENTITY_HEALTH(iLocal_50, 700, 0);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_50, false, 0);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_50, true, 1);
	VEHICLE::SET_VEHICLE_DROPS_MONEY_WHEN_BLOWN_UP(iLocal_50, false);
	VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_50, true);
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Local_63.f_0 - 200f), (Local_63.f_1 - 200f), (Local_63.f_0 + 200f), (Local_63.f_1 + 200f));
	if (iLocal_44 == 3)
	{
		iLocal_49[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_50, 26, iLocal_73, -1, true, true);
		iLocal_49[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_50, 26, iLocal_73, 0, true, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_50, true, true, false);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_50, true, 1);
	}
	else
	{
		iLocal_49[1] = PED::CREATE_PED(26, iLocal_73, Local_61[1 /*3*/], fLocal_62[1], true, true);
		iLocal_49[0] = PED::CREATE_PED(26, iLocal_73, Local_61[0 /*3*/], fLocal_62[0], true, true);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_49[1], iLocal_49[0], -1, 0, 2);
	}
	func_85(iLocal_49[1]);
	PED::ADD_RELATIONSHIP_GROUP("Security_guards", &iLocal_60);
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		PED::SET_PED_MONEY(iLocal_49[iVar0], 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 13, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 6, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 8, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 10, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_49[iVar0], 512, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_49[iVar0], 118, false);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_49[iVar0], 128, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_49[iVar0], false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_49[iVar0], true, 0f);
		PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_49[iVar0], true);
		PED::SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(iLocal_49[iVar0], true);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_49[iVar0], joaat("WEAPON_PISTOL"), -1, false, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_49[iVar0], iLocal_60);
		PED::SET_PED_KEEP_TASK(iLocal_49[iVar0], true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_49[iVar0], 250);
		iVar0++;
	}
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_49[1], true, 1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_60);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_60, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_60, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), iLocal_60);
	if (iLocal_44 == 1)
	{
		PED::SET_PED_PROP_INDEX(iLocal_49[0], 0, 1, 0, false);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_49[0], false);
		PED::SET_PED_PROP_INDEX(iLocal_49[1], 0, 1, 0, false);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_49[1], false);
	}
	if (__LIB_0__::func_683() == 0 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_222(&Local_106, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	if (__LIB_0__::func_683() == 1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_222(&Local_106, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	if (__LIB_0__::func_683() == 2 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_222(&Local_106, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	__LIB_0__::func_222(&Local_106, 3, iLocal_49[0], "SECVANGUY1", 0, 1);
	__LIB_0__::func_222(&Local_106, 4, iLocal_49[1], "SECVANGUY2", 0, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_74, true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_73, true);
	if (iLocal_44 != 3)
	{
	}
}

bool func_161()//Position - 0x9C4B
{
	__LIB_38__::func_106(&uLocal_123, iLocal_73);
	__LIB_38__::func_106(&uLocal_123, iLocal_74);
	__LIB_38__::func_106(&uLocal_123, iLocal_75);
	__LIB_38__::func_105(&uLocal_123, "random@security_van");
	__LIB_38__::func_105(&uLocal_123, "weapons@holster_1h");
	__LIB_38__::func_105(&uLocal_123, "move_injured_generic");
	__LIB_39__::func_12(&uLocal_123, 3);
	return __LIB_38__::func_68(&uLocal_123);
}

void func_187()//Position - 0xBDA2
{
	iLocal_75 = joaat("prop_security_case_01");
	iLocal_74 = joaat("stockade");
	iLocal_73 = joaat("S_M_M_Armoured_01");
	iLocal_94 = MISC::GET_RANDOM_INT_IN_RANGE(3000, 8000);
	switch (bLocal_45)
	{
		case 1:
			Local_70 = { -315.889f, -1550.5544f, 7.233013f };
			Local_71 = { -315.23523f, -1366.5808f, 45.29617f };
			fLocal_72 = 180f;
			Local_63 = { -331.8429f, -1461.042f, 30.153f };
			fLocal_64 = -64.3539f;
			Local_61[0 /*3*/] = { -335.564f, -1462.2369f, 29.5452f };
			fLocal_62[0] = 158.3857f;
			Local_61[1 /*3*/] = { -342.7024f, -1475.0432f, 29.6004f };
			fLocal_62[1] = 290.3041f;
			iLocal_44 = 1;
			break;
		case 2:
			Local_70 = { -538.2149f, -868.7426f, 17.96054f };
			Local_71 = { -663.8162f, -867.9987f, 53.66249f };
			fLocal_72 = 121.5f;
			Local_63 = { -588.51276f, -866.9584f, 25.32786f };
			fLocal_64 = -89.026794f;
			Local_61[0 /*3*/] = { -589.4673f, -865.4055f, 24.7622f };
			fLocal_62[0] = 12.5464f;
			Local_61[1 /*3*/] = { -578.4414f, -874.5964f, 24.9183f };
			fLocal_62[1] = 352.4951f;
			iLocal_44 = 1;
			break;
		case 3:
			Local_70 = { -468.6309f, 6101.9067f, 14.891197f };
			Local_71 = { -359.97336f, 5994.152f, 50.368435f };
			fLocal_72 = 152.25f;
			Local_63 = { -395.6852f, 6056.967f, 30.5001f };
			fLocal_64 = 188.9862f;
			Local_61[0 /*3*/] = { -398.4612f, 6051.2964f, 30.5003f };
			fLocal_62[0] = 251.7138f;
			Local_61[1 /*3*/] = { -378.408f, 6035.6895f, 30.498f };
			fLocal_62[1] = 154.0836f;
			iLocal_44 = 2;
			break;
		case 4:
			Local_70 = { -631.34076f, -1105.5807f, 7.220509f };
			Local_71 = { -462.17215f, -1103.5974f, 62.535828f };
			fLocal_72 = 177.25f;
			Local_63 = { -595.7766f, -1094.0891f, 21.1785f };
			fLocal_64 = 263.4662f;
			Local_61[0 /*3*/] = { -600.8182f, -1103.7783f, 21.3292f };
			fLocal_62[0] = 338.8304f;
			Local_61[1 /*3*/] = { -595.3461f, -1096.0538f, 21.1785f };
			fLocal_62[1] = 151.297f;
			iLocal_44 = 1;
			break;
		case 5:
			Local_63 = { -1042.7682f, -1049.2957f, 1.0825f };
			fLocal_64 = 26.9919f;
			iLocal_44 = 3;
			break;
		case 6:
			Local_63 = { -595.5618f, -667.7325f, 31.0544f };
			fLocal_64 = 271.1543f;
			iLocal_44 = 3;
			break;
		case 7:
			Local_63 = { 3018.3843f, 3634.0168f, 70.4076f };
			fLocal_64 = 335.9052f;
			iLocal_44 = 3;
			break;
		case 8:
			Local_63 = { -2815.6614f, 2208.1707f, 27.8382f };
			fLocal_64 = 119.1519f;
			iLocal_44 = 3;
			break;
		case 9:
			Local_63 = { 856.7742f, -2067.8452f, 29.0704f };
			fLocal_64 = 83.1204f;
			iLocal_44 = 3;
			break;
		case 10:
			Local_63 = { 805.1932f, -703.1327f, 28.1632f };
			fLocal_64 = 248.8625f;
			iLocal_44 = 3;
			break;
		default:
			break;
	}
}

void func_231()//Position - 0xD798
{
	if (__LIB_39__::func_8())
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_103))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_58))
			{
				HUD::REMOVE_BLIP(&iLocal_58);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
		{
			OBJECT::DELETE_OBJECT(&iLocal_53);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_52))
			{
				OBJECT::DELETE_OBJECT(&iLocal_52);
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_52);
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_74);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_73);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_75);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_73, false);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_74, false);
	}
	if (iLocal_97 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_97);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_59, false);
	__LIB_0__::func_345(&uLocal_111, 0, 0);
	__LIB_39__::func_19(-1);
	__LIB_38__::func_126(&uLocal_123, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

