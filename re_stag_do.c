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
	float fLocal_43 = 0f;
	var uLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56[4] = { 0, 0, 0, 0 };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_61 = { 0, 0, 0 } ;
	float fLocal_62 = 0f;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	float fLocal_66 = 0f;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	float fLocal_72 = 0f;
	struct<3> Local_73 = { 0, 0, 0 } ;
	struct<3> Local_74 = { 0, 0, 0 } ;
	struct<3> Local_75 = { 0, 0, 0 } ;
	float fLocal_76 = 0f;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 16;
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
	int iLocal_265 = 0;
	char* sLocal_266 = NULL;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	struct<2> Local_287 = { 0, 5 } ;
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
	var uLocal_303 = 5;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
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
	fLocal_43 = 20f;
	iLocal_81 = 1;
	iLocal_272 = 6000;
	Local_50 = { ScriptParam_287.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_51))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_51))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_51);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_53))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_53);
			}
		}
		func_183();
	}
	if (__LIB_17__::func_695(283, 1))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_39__::func_418(Local_50, -1, 0, 0, 0))
	{
		if ((CLOCK::GET_CLOCK_HOURS() > 2 && CLOCK::GET_CLOCK_HOURS() < 15) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
		}
		else
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		__LIB_39__::func_334(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || bLocal_80)
		{
			if (!__LIB_39__::func_333())
			{
				if (__LIB_39__::func_340())
				{
					func_183();
				}
			}
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_SDRM", 0);
			switch (iLocal_46)
			{
				case 0:
					if (__LIB_39__::func_417())
					{
						func_183();
					}
					if (iLocal_48)
					{
						iLocal_49 = 1;
						iLocal_46 = 1;
					}
					else
					{
						func_127();
					}
					break;
				case 1:
					__LIB_0__::func_496();
					if (!iLocal_78)
					{
						func_125();
						func_122();
						func_111();
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_282))
						{
							func_110();
						}
					}
					else
					{
						func_107();
						if (!bLocal_88)
						{
							func_105();
						}
						func_97();
						func_95();
						func_79();
						__LIB_37__::func_531(iLocal_51, 0);
						if (!bLocal_85)
						{
						}
						if (iLocal_47 == 0 && !bLocal_82)
						{
							func_74();
							func_72();
						}
						else
						{
							func_67();
						}
						if (iLocal_47 == 3)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_67, true) < 100f)
							{
								if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
								{
									CUTSCENE::REQUEST_CUTSCENE("sdrm_mcs_2", 8);
								}
								if (CUTSCENE::IS_CUTSCENE_ACTIVE())
								{
									if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
									{
										if ((((!PED::IS_PED_INJURED(iLocal_51) && !PED::IS_PED_INJURED(iLocal_53)) && !PED::IS_PED_INJURED(iLocal_52)) && !PED::IS_PED_INJURED(iLocal_54)) && !ENTITY::IS_ENTITY_DEAD(iLocal_96, false))
										{
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Groom", iLocal_51, 0);
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Groomsman", iLocal_53, 0);
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Bride", iLocal_52, 0);
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Father_of_the_bride", iLocal_54, 0);
										}
									}
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_ACTIVE())
							{
								CUTSCENE::REMOVE_CUTSCENE();
							}
							if (bLocal_82)
							{
								if (__LIB_0__::func_494(1, 0, 1))
								{
									func_31();
								}
							}
							else if (!PED::IS_PED_INJURED(iLocal_53))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_53, false))
								{
									if (HUD::DOES_BLIP_EXIST(iLocal_286))
									{
										HUD::REMOVE_BLIP(&iLocal_286);
										if (HUD::DOES_BLIP_EXIST(iLocal_284))
										{
											HUD::REMOVE_BLIP(&iLocal_284);
										}
										if (!HUD::DOES_BLIP_EXIST(iLocal_284))
										{
											iLocal_284 = __LIB_0__::func_488(Local_59, 1);
										}
									}
								}
							}
						}
						if (func_3())
						{
							if (!PED::IS_PED_INJURED(iLocal_51))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_51, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
							}
							if (!PED::IS_PED_INJURED(iLocal_53))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
							}
							if (!PED::IS_PED_INJURED(iLocal_52))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_52, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
							}
							if (!PED::IS_PED_INJURED(iLocal_54))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_54, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
							}
							func_2();
						}
					}
					__LIB_0__::func_467();
					break;
			}
		}
		else
		{
			func_183();
		}
	}
}

void func_2()//Position - 0x39D
{
	func_183();
}

int func_3()//Position - 0x3A9
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_INJURED(iLocal_51))
		{
			return 1;
		}
		else
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_51, PLAYER::PLAYER_PED_ID(), true) || ENTITY::IS_ENTITY_IN_WATER(iLocal_51))
			{
				return 1;
			}
			if (bLocal_80)
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_0__::func_429();
					if (__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_police", 4, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, false))
	{
		if ((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false) || VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_55)) || ENTITY::IS_ENTITY_IN_WATER(iLocal_55))
		{
			__LIB_0__::func_429();
			if (__LIB_2__::func_859(&uLocal_100, "stagdau", "stagdwrcar", 4, 0, 0, 0))
			{
				return 1;
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_55))
				{
					__LIB_0__::func_429();
					if (__LIB_2__::func_859(&uLocal_100, "stagdau", "stagdwrcar", 4, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	else
	{
		__LIB_0__::func_429();
		if (__LIB_2__::func_859(&uLocal_100, "stagdau", "stagdwrcar", 4, 0, 0, 0))
		{
			return 1;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_51, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, false, true, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_55, false))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
					PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
				}
			}
			return 1;
		}
	}
	if (iLocal_47 >= 1)
	{
		if (bLocal_87)
		{
			if (PED::IS_PED_INJURED(iLocal_53))
			{
				__LIB_0__::func_429();
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), true))
			{
				__LIB_0__::func_429();
				return 1;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, false))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
			{
				if (!iLocal_90)
				{
					__LIB_0__::func_429();
					if (__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_comeba", 4, 0, 0, 0))
					{
						iLocal_90 = 1;
					}
				}
			}
			else
			{
				iLocal_90 = 0;
			}
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, false, true, 0))
			{
				return 1;
			}
		}
	}
	if (iLocal_47 == 3)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_INJURED(iLocal_52) || PED::IS_PED_INJURED(iLocal_54))
			{
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0) && iLocal_274)
			{
				if (!iLocal_91)
				{
					__LIB_0__::func_429();
					if (__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_nobest", 4, 0, 0, 0))
					{
						iLocal_91 = 1;
					}
				}
			}
			else
			{
				iLocal_91 = 0;
			}
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_31()//Position - 0x100C
{
	switch (iLocal_95)
	{
		case 0:
			__LIB_0__::func_429();
			SYSTEM::WAIT(0);
			__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
			iLocal_274 = 0;
			iLocal_95++;
			break;
		case 1:
			iLocal_95++;
			break;
		case 2:
			if ((((!PED::IS_PED_INJURED(iLocal_51) && !PED::IS_PED_INJURED(iLocal_53)) && !PED::IS_PED_INJURED(iLocal_52)) && !PED::IS_PED_INJURED(iLocal_54)) && !ENTITY::IS_ENTITY_DEAD(iLocal_96, false))
			{
				if (__LIB_0__::func_90())
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_96, "SDRM_Car", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_51, "Groom", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_53, "Groomsman", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_52, "Bride", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_54, "Father_of_the_bride", 0, 0, 0);
					CUTSCENE::START_CUTSCENE(4);
					iLocal_95++;
				}
			}
			break;
		case 3:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_96, false))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_96, 5f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_96, true);
					HUD::DISPLAY_HUD(true);
					HUD::DISPLAY_RADAR(true);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
				}
				iLocal_95++;
			}
			break;
		case 4:
			PED::DELETE_PED(&iLocal_51);
			PED::DELETE_PED(&iLocal_53);
			PED::DELETE_PED(&iLocal_52);
			PED::DELETE_PED(&iLocal_54);
			__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
			func_32();
			break;
	}
}

void func_32()//Position - 0x116F
{
	while (!__LIB_0__::func_109())
	{
		SYSTEM::WAIT(0);
	}
	func_36(-1, 0);
	__LIB_14__::func_557();
	func_183();
}

void func_36(int iParam0, int iParam1)//Position - 0x1215
{
	if (iParam0 == -1)
	{
		iParam0 = __LIB_39__::func_324();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= __LIB_39__::func_307(iParam0))
	{
		__LIB_39__::func_321(iParam0, iParam1);
		if (!__LIB_0__::func_67(51))
		{
			__LIB_0__::func_697("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, __LIB_14__::func_792(), 0, 138, 0);
			__LIB_0__::func_592(51);
		}
		if (__LIB_39__::func_306(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (__LIB_39__::func_320(iParam0, iParam1) != 322)
		{
			__LIB_39__::func_335(__LIB_39__::func_320(iParam0, iParam1), Local_45.f_0, Local_45.f_1);
		}
		Global_113374 = iParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				__LIB_39__::func_319(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				__LIB_39__::func_319(7);
			}
			else
			{
				__LIB_39__::func_319(1);
			}
		}
	}
}

void func_67()//Position - 0x2726
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_51, false))
	{
		if (!iLocal_81)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_55, false) && PED::IS_PED_IN_VEHICLE(iLocal_51, iLocal_55, false))
			{
				iLocal_81 = 1;
				if (HUD::DOES_BLIP_EXIST(iLocal_283))
				{
					HUD::REMOVE_BLIP(&iLocal_283);
				}
				if (iLocal_86 && !bLocal_82)
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_284))
					{
						iLocal_284 = __LIB_0__::func_488(Local_59, 1);
					}
				}
				if (!__LIB_0__::func_75())
				{
				}
			}
		}
		if (!iLocal_81 && !iLocal_83)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_55, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_51, iLocal_55, false))
				{
					if (!__LIB_0__::func_75())
					{
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_283))
					{
						HUD::REMOVE_BLIP(&iLocal_283);
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_283))
					{
						iLocal_283 = __LIB_0__::func_666(iLocal_51, 0, 145);
						HUD::SET_BLIP_AS_FRIENDLY(iLocal_283, true);
					}
					iLocal_81 = 0;
					iLocal_83 = 1;
				}
			}
		}
		if (iLocal_81)
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_55, false))
			{
				if (!__LIB_0__::func_75())
				{
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_283))
				{
					iLocal_283 = __LIB_0__::func_639(iLocal_55, 0, 0);
					HUD::SET_BLIP_AS_FRIENDLY(iLocal_283, true);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_284))
				{
					HUD::REMOVE_BLIP(&iLocal_284);
				}
				iLocal_81 = 0;
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_55, false) && !PED::IS_PED_IN_VEHICLE(iLocal_51, iLocal_55, false))
			{
				if (!__LIB_0__::func_75())
				{
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_283))
				{
					iLocal_283 = __LIB_0__::func_639(iLocal_55, 0, 0);
					HUD::SET_BLIP_AS_FRIENDLY(iLocal_283, true);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_284))
				{
					HUD::REMOVE_BLIP(&iLocal_284);
				}
				iLocal_81 = 0;
			}
		}
	}
}

void func_72()//Position - 0x29D8
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_51))
	{
		if (!PED::IS_PED_INJURED(iLocal_51))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_51, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, false, true, 0))
			{
				if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_51, false)) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_285))
					{
						HUD::REMOVE_BLIP(&iLocal_285);
						if (!HUD::DOES_BLIP_EXIST(iLocal_284))
						{
							iLocal_284 = __LIB_0__::func_488(Local_59, 1);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_51, false))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_285))
					{
						HUD::REMOVE_BLIP(&iLocal_285);
						if (!HUD::DOES_BLIP_EXIST(iLocal_284))
						{
							iLocal_284 = __LIB_0__::func_488(Local_59, 1);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_284))
				{
					HUD::REMOVE_BLIP(&iLocal_284);
					if (!HUD::DOES_BLIP_EXIST(iLocal_285))
					{
						iLocal_285 = __LIB_0__::func_666(iLocal_51, 0, 145);
					}
				}
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_284))
			{
				HUD::REMOVE_BLIP(&iLocal_284);
				if (!HUD::DOES_BLIP_EXIST(iLocal_285))
				{
					iLocal_285 = __LIB_0__::func_666(iLocal_51, 0, 145);
				}
			}
			if (!PED::IS_PED_IN_GROUP(iLocal_51))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, 10f, 10f, 10f, false, true, 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_51);
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_51, __LIB_0__::func_495());
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_51, true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_51, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					TASK::CLEAR_PED_TASKS(iLocal_51);
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_51, __LIB_0__::func_495());
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_51, true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_51, 0);
				}
			}
		}
	}
}

void func_74()//Position - 0x2B7C
{
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (!func_77())
			{
				if (PED::IS_PED_IN_GROUP(iLocal_51))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_51);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(iLocal_51, PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 2f, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_51, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_51, 0, 0);
				}
				if (!iLocal_89)
				{
					if (!__LIB_0__::func_75())
					{
						iLocal_89 = 1;
						if (__LIB_39__::func_374())
						{
							__LIB_14__::func_535(&uLocal_100, "stagdau", "stagd_nogood", "stagd_nogood_1", 4, 0, 0);
						}
						else
						{
							__LIB_14__::func_535(&uLocal_100, "stagdau", "stagd_nogood", "stagd_nogood_2", 4, 0, 0);
						}
					}
				}
			}
			else
			{
				iLocal_89 = 0;
				if (((TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 0) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 0)
				{
					TASK::CLEAR_PED_TASKS(iLocal_51);
					if (!PED::IS_PED_IN_GROUP(iLocal_51))
					{
						PED::SET_PED_AS_GROUP_MEMBER(iLocal_51, __LIB_0__::func_495());
						PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_51, true);
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_51, 0);
					}
				}
			}
		}
		else if (((!PED::IS_PED_IN_GROUP(iLocal_51) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_51, false)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0)
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_51, __LIB_0__::func_495());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_51, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_51, 0);
		}
	}
}

int func_77()//Position - 0x2DC9
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (((((!PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
		{
			if ((((!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_79()//Position - 0x2F72
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_51))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_51, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_39__::func_376("stagd_chape_1"))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_284))
				{
					iLocal_284 = __LIB_0__::func_488(Local_59, 1);
				}
				iLocal_86 = 1;
			}
			if (__LIB_39__::func_376("stagd_chape_3"))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				if (!PED::IS_PED_INJURED(iLocal_51))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_51, false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_USE_MOBILE_PHONE_TIMED(0, 30600);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_51, iLocal_77);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
					}
				}
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, 13.5f, 13.5f, 13.5f, false, true, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_51, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					if (iLocal_47 == 0)
					{
						if (SYSTEM::TIMERB() > 5000)
						{
							if (iLocal_94 == 0)
							{
								if (!__LIB_0__::func_75())
								{
									__LIB_0__::func_325();
									if (__LIB_2__::func_859(&uLocal_100, "stagdau", sLocal_266, 4, 0, 0, 0))
									{
										iLocal_274 = 1;
									}
									bLocal_85 = true;
									iLocal_94++;
									SYSTEM::SETTIMERB(0);
								}
							}
						}
						if (SYSTEM::TIMERB() > 5000)
						{
							if (iLocal_94 == 1)
							{
								if (!__LIB_0__::func_75())
								{
									HUD::DISPLAY_HUD(true);
									HUD::DISPLAY_RADAR(true);
									iLocal_94++;
									SYSTEM::SETTIMERB(0);
								}
							}
						}
						if (SYSTEM::TIMERB() > 2500)
						{
							if (iLocal_94 == 2)
							{
								if (!__LIB_0__::func_75())
								{
									__LIB_0__::func_325();
									if (__LIB_0__::func_683() == 0)
									{
										__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_tailM", 4, 0, 0, 0);
									}
									if (__LIB_0__::func_683() == 1)
									{
										__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_tailF", 4, 0, 0, 0);
									}
									if (__LIB_0__::func_683() == 2)
									{
										__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_tailT", 4, 0, 0, 0);
									}
									iLocal_94++;
									SYSTEM::SETTIMERB(0);
								}
							}
						}
					}
					if (!bLocal_88)
					{
						if (iLocal_47 == 3)
						{
							if (!__LIB_0__::func_75())
							{
								if (iLocal_94 == 0)
								{
									__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_enough", 4, 0, 0, 0);
									iLocal_94++;
								}
							}
						}
						if (iLocal_47 == 3)
						{
							if (SYSTEM::TIMERB() > 5000)
							{
								if (iLocal_94 == 0)
								{
									if (!__LIB_0__::func_75())
									{
										iLocal_94++;
									}
								}
							}
						}
						if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_67, 150f, 150f, 150f, false, true, 0))
						{
							if (iLocal_267 == 0)
							{
								if (iLocal_271 == __LIB_0__::func_199(__LIB_11__::func_762()) + 11)
								{
									if (!__LIB_0__::func_75())
									{
										__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_time10", 4, 0, 0, 0);
										iLocal_267 = 1;
									}
								}
							}
							if (iLocal_267 < 2)
							{
								if (iLocal_271 == __LIB_0__::func_199(__LIB_11__::func_762()) + 10)
								{
									if (!__LIB_0__::func_75())
									{
										__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_time9", 4, 0, 0, 0);
										iLocal_267 = 2;
									}
								}
							}
							if (iLocal_267 < 3)
							{
								if (iLocal_271 == __LIB_0__::func_199(__LIB_11__::func_762()) + 9)
								{
									if (!__LIB_0__::func_75())
									{
										__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_time8", 4, 0, 0, 0);
										iLocal_267 = 3;
									}
								}
							}
							if (iLocal_267 < 4)
							{
								if (iLocal_271 == __LIB_0__::func_199(__LIB_11__::func_762()) + 8)
								{
									if (!__LIB_0__::func_75())
									{
										__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_time7", 4, 0, 0, 0);
										iLocal_267 = 4;
									}
								}
							}
							if (iLocal_267 < 5)
							{
								if (iLocal_271 == __LIB_0__::func_199(__LIB_11__::func_762()) + 7)
								{
									if (!__LIB_0__::func_75())
									{
										iLocal_267 = 5;
									}
								}
							}
							if (iLocal_267 < 6)
							{
								if (iLocal_271 == __LIB_0__::func_199(__LIB_11__::func_762()) + 6)
								{
									if (!__LIB_0__::func_75())
									{
										iLocal_267 = 6;
									}
								}
							}
							if (iLocal_267 < 7)
							{
								if (iLocal_271 == __LIB_0__::func_199(__LIB_11__::func_762()) + 5)
								{
									if (!__LIB_0__::func_75())
									{
										iLocal_267 = 7;
									}
								}
							}
							if (iLocal_267 < 8)
							{
								if (iLocal_271 == __LIB_0__::func_199(__LIB_11__::func_762()) + 4)
								{
									if (!__LIB_0__::func_75())
									{
										iLocal_267 = 8;
									}
								}
							}
							if (iLocal_267 < 9)
							{
								if (iLocal_271 == __LIB_0__::func_199(__LIB_11__::func_762()) + 3)
								{
									if (!__LIB_0__::func_75())
									{
										__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267 = 9;
									}
								}
							}
							if (iLocal_267 < 10)
							{
								if (iLocal_271 == __LIB_0__::func_199(__LIB_11__::func_762()) + 2)
								{
									if (!__LIB_0__::func_75())
									{
										__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267 = 10;
									}
								}
							}
							if (iLocal_267 < 11)
							{
								if (iLocal_271 == __LIB_0__::func_199(__LIB_11__::func_762()) + 1)
								{
									if (!__LIB_0__::func_75())
									{
										__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267 = 11;
									}
								}
							}
						}
						else
						{
							if (iLocal_267 < 6)
							{
								if (iLocal_271 == __LIB_0__::func_199(__LIB_11__::func_762()) + 6)
								{
									if (!__LIB_0__::func_75())
									{
										__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267++;
									}
								}
							}
							if (iLocal_267 < 7)
							{
								if (iLocal_271 == __LIB_0__::func_199(__LIB_11__::func_762()) + 5)
								{
									if (!__LIB_0__::func_75())
									{
										__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267++;
									}
								}
							}
							if (iLocal_267 < 8)
							{
								if (iLocal_271 == __LIB_0__::func_199(__LIB_11__::func_762()) + 4)
								{
									if (!__LIB_0__::func_75())
									{
										__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267++;
									}
								}
							}
							if (iLocal_267 < 9)
							{
								if (iLocal_271 == __LIB_0__::func_199(__LIB_11__::func_762()) + 3)
								{
									if (!__LIB_0__::func_75())
									{
										__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267++;
									}
								}
							}
							if (iLocal_267 < 10)
							{
								if (iLocal_271 == __LIB_0__::func_199(__LIB_11__::func_762()) + 2)
								{
									if (!__LIB_0__::func_75())
									{
										__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267++;
									}
								}
							}
							if (iLocal_267 < 11)
							{
								if (iLocal_271 == __LIB_0__::func_199(__LIB_11__::func_762()) + 1)
								{
									if (!__LIB_0__::func_75())
									{
										__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_267++;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_95()//Position - 0x3889
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_51))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_51, false))
		{
			if (!PED::IS_PED_INJURED(iLocal_51))
			{
				if (!iLocal_93 && bLocal_82)
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
					iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
					if (iVar0 != 0)
					{
						iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
						if (iVar1 != 4)
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 79 /*INPUT_VEH_LOOK_BEHIND*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 286 /*INPUT_VEH_LOOK_LEFT*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 287 /*INPUT_VEH_LOOK_RIGHT*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 273 /*INPUT_LOOK_DOWN*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 4 /*INPUT_LOOK_DOWN_ONLY*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 270 /*INPUT_LOOK_LEFT*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 5 /*INPUT_LOOK_LEFT_ONLY*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 271 /*INPUT_LOOK_RIGHT*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 6 /*INPUT_LOOK_RIGHT_ONLY*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 272 /*INPUT_LOOK_UP*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 3 /*INPUT_LOOK_UP_ONLY*/, true);
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_51, -2002.008f, 455.58f, 101.0381f, -2009.7614f, 453.2027f, 105.9135f, 12.4375f, false, true, 0) || SYSTEM::TIMERA() > 5000)
					{
						iLocal_93 = 1;
						SYSTEM::SETTIMERA(0);
						__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
						HUD::CLEAR_HELP(true);
						HUD::DISPLAY_HUD(false);
						HUD::DISPLAY_RADAR(false);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						VEHICLE::REQUEST_VEHICLE_ASSET(joaat("superd"), 3);
						while (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("superd")))
						{
							SYSTEM::WAIT(0);
						}
						iLocal_98 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -2014.228f, 456.49612f, 103.55235f, -6.509435f, -0.037031f, -95.98762f, 29.001434f, false, 2);
						iLocal_99 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -2014.3337f, 456.418f, 103.31525f, -6.198685f, -0.037031f, -100.57357f, 29.001434f, false, 2);
						CAM::SHAKE_CAM(iLocal_98, "HAND_SHAKE", 0.25f);
						CAM::SHAKE_CAM(iLocal_99, "HAND_SHAKE", 0.25f);
						CAM::SET_CAM_ACTIVE(iLocal_98, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						SYSTEM::WAIT(1000);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_99, iLocal_98, 4000, 1, 1);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						MISC::CLEAR_AREA_OF_VEHICLES(Local_71, 10f, false, false, false, false, false, false, 0);
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						{
							VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE());
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_71, 8f, 8f, 8f, false, true, 0))
							{
								iLocal_97 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_97, true, false);
								VEHICLE::DELETE_VEHICLE(&iLocal_97);
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, false))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_55, 1);
							if (!HUD::DOES_BLIP_EXIST(iLocal_283))
							{
								iLocal_283 = __LIB_0__::func_639(iLocal_55, 0, 0);
								HUD::SET_BLIP_AS_FRIENDLY(iLocal_283, true);
							}
						}
						iLocal_81 = 0;
					}
				}
				if (iLocal_93 && CAM::DOES_CAM_EXIST(iLocal_98))
				{
					if (SYSTEM::TIMERA() > 5700 && !iLocal_281)
					{
						if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4))
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							iLocal_281 = 1;
						}
					}
					if (SYSTEM::TIMERA() > 6000)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						HUD::DISPLAY_HUD(true);
						HUD::DISPLAY_RADAR(true);
						__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
						CAM::SET_CAM_ACTIVE(iLocal_98, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::DESTROY_CAM(iLocal_98, false);
						CAM::STOP_GAMEPLAY_HINT(false);
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -2201.4172f, 4296.06f, 47.5076f, 100f, 100f, 100f, false, true, 0))
				{
					MISC::CLEAR_AREA_OF_VEHICLES(Local_67, 5f, false, false, false, false, false, false, 0);
				}
			}
			if (!bLocal_87)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_73, 100f, 100f, 100f, false, true, 0))
				{
					STREAMING::REQUEST_MODEL(joaat("IG_BestMen"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("IG_BestMen")))
					{
						iLocal_53 = PED::CREATE_PED(4, joaat("IG_BestMen"), -2202.7468f, 4299.008f, 47.4293f, 73.0028f, true, true);
						__LIB_0__::func_222(&uLocal_100, 4, iLocal_53, "BESTMAN", 0, 1);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 0, 0, 0, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_53, joaat("PLAYER"));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, true);
						PED::SET_PED_CONFIG_FLAG(iLocal_53, 185, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_77);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
						bLocal_87 = true;
					}
				}
			}
			if (!bLocal_88)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_63, 20f, 20f, 20f, false, true, 0))
				{
					__LIB_0__::func_429();
					if (!__LIB_0__::func_75())
					{
						__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_spot", 4, 0, 0, 0);
						bLocal_88 = true;
					}
				}
			}
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_60, Local_61, fLocal_62, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_51, Local_60, Local_61, fLocal_62, false, true, 0)) || (ENTITY::IS_ENTITY_AT_COORD(iLocal_51, Local_59, 0f, 0f, 2f, true, true, 0) && __LIB_0__::func_494(1, 0, 1))) || bLocal_82)
			{
				switch (iLocal_47)
				{
					case 0:
						HUD::REMOVE_BLIP(&iLocal_284);
						if (!bLocal_82)
						{
							Local_59 = { Local_73 };
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
								{
									VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 4, false);
								}
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, false))
							{
								iVar2 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
								if (iVar2 != 0)
								{
									iVar3 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar2);
									if (iVar3 == 4)
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, 5000, 0, 2);
									}
									else
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_55, 5000, 2052, 4);
										CAM::SET_GAMEPLAY_VEHICLE_HINT(iLocal_55, 0f, 0f, 0f, true, -1, 3000, 2000);
									}
								}
							}
							__LIB_0__::func_429();
							if (!__LIB_0__::func_75())
							{
								__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_wait1", 4, 0, 0, 0);
								if (!PED::IS_PED_INJURED(iLocal_51))
								{
									TASK::CLEAR_PED_TASKS(iLocal_51);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2013.0945f, 460.3515f, 101.8024f, 2f, 20000, 0.25f, 0, 40000f);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_71, 3f, 20000, 0.25f, 0, 40000f);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_51, iLocal_77);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
									PED::SET_PED_KEEP_TASK(iLocal_51, true);
								}
								bLocal_82 = true;
								SYSTEM::SETTIMERA(0);
							}
						}
						if (!PED::IS_PED_INJURED(iLocal_51) && !ENTITY::IS_ENTITY_DEAD(iLocal_55, false))
						{
							if ((bLocal_82 && ENTITY::IS_ENTITY_AT_COORD(iLocal_51, Local_71, 1f, 1f, 1f, false, true, 0)) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_51, false))
							{
								if (PED::IS_PED_IN_GROUP(iLocal_51))
								{
									if (!__LIB_0__::func_75())
									{
										if (__LIB_0__::func_683() == 2)
										{
											__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_reply", 4, 0, 0, 0);
										}
									}
									PED::REMOVE_PED_FROM_GROUP(iLocal_51);
								}
								if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_51))
								{
									if (!PED::IS_PED_INJURED(iLocal_51))
									{
										ENTITY::SET_ENTITY_VISIBLE(iLocal_51, false, false);
										ENTITY::SET_ENTITY_COLLISION(iLocal_51, false, false);
										ENTITY::SET_ENTITY_INVINCIBLE(iLocal_51, true);
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_51, true);
									}
									if (SYSTEM::TIMERA() > 15000)
									{
										if (!PED::IS_PED_INJURED(iLocal_51))
										{
											PED::SET_PED_COMPONENT_VARIATION(iLocal_51, 2, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_51, 0, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_51, 3, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_51, 4, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_51, 11, 0, 0, 0);
											ENTITY::SET_ENTITY_VISIBLE(iLocal_51, true, false);
											ENTITY::SET_ENTITY_COLLISION(iLocal_51, true, false);
											ENTITY::SET_ENTITY_INVINCIBLE(iLocal_51, false);
											ENTITY::FREEZE_ENTITY_POSITION(iLocal_51, false);
											ENTITY::SET_ENTITY_COORDS(iLocal_51, Local_71, true, false, false, true);
											ENTITY::SET_ENTITY_HEADING(iLocal_51, 106.5078f);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_51, 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_51, 17, true);
											PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(iLocal_51, true);
											TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, -1, 2048, 4);
											if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, false))
											{
												TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
												TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
												TASK::TASK_ENTER_VEHICLE(0, iLocal_55, -1, 0, 2f, 1, 0);
												TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
												TASK::TASK_PERFORM_SEQUENCE(iLocal_51, iLocal_77);
												TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
											}
										}
										SYSTEM::SETTIMERA(0);
										Local_59 = { Local_73 };
										Local_60 = { Local_74 };
										Local_61 = { Local_75 };
										fLocal_62 = fLocal_76;
										iLocal_47 = 1;
									}
								}
							}
						}
						break;
					case 1:
						if (!PED::IS_PED_INJURED(iLocal_51) && !ENTITY::IS_ENTITY_DEAD(iLocal_55, false))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_51, iLocal_55, 5f, 5f, 5f, false, true, 0) && !iLocal_92)
							{
								__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_suit", 4, 0, 0, 0);
								iLocal_92 = 1;
							}
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_51, false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_55, false))
								{
									if (__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_chape", 4, 0, 0, 0))
									{
										iLocal_47 = 2;
										bLocal_82 = false;
										iLocal_94 = 0;
									}
								}
								else
								{
									if (iLocal_272 == 0)
									{
										iLocal_272 = MISC::GET_GAME_TIMER();
									}
									if (iLocal_272 != 0 && MISC::GET_GAME_TIMER() > iLocal_272 + 6000)
									{
										__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_getin", 4, 0, 0, 0);
										iLocal_272 = 0;
									}
									SYSTEM::SETTIMERA(0);
								}
							}
						}
						break;
					case 2:
						if (!bLocal_82)
						{
							__LIB_0__::func_429();
							if (__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_hairc", 4, 0, 0, 0))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
									{
										iLocal_96 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
										VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 2, false);
									}
								}
								if (!PED::IS_PED_INJURED(iLocal_53) && !PED::IS_PED_INJURED(iLocal_51))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_51, false))
									{
										iLocal_96 = PED::GET_VEHICLE_PED_IS_IN(iLocal_51, false);
										TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
										TASK::TASK_ENTER_VEHICLE(0, iLocal_96, -1, 2, 1f, 1, 0);
										TASK::TASK_CLEAR_LOOK_AT(0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_77);
										PED::SET_PED_CONFIG_FLAG(iLocal_53, 185, false);
									}
									else
									{
										TASK::TASK_GO_TO_ENTITY(iLocal_53, iLocal_51, -1, 8f, 2f, 2f, 0);
									}
									if (!HUD::DOES_BLIP_EXIST(iLocal_286))
									{
										iLocal_286 = __LIB_0__::func_666(iLocal_53, 0, 145);
									}
									if (HUD::DOES_BLIP_EXIST(iLocal_284))
									{
										HUD::REMOVE_BLIP(&iLocal_284);
									}
								}
								SYSTEM::SETTIMERA(0);
								iLocal_84 = 1;
								bLocal_82 = true;
							}
						}
						if (bLocal_82 && !PED::IS_PED_INJURED(iLocal_51))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 || SYSTEM::TIMERA() > 12000)
							{
								Local_59 = { Local_63 };
								Local_60 = { Local_64 };
								Local_61 = { Local_65 };
								fLocal_62 = fLocal_66;
								STREAMING::REQUEST_MODEL(joaat("IG_Bride"));
								STREAMING::REQUEST_MODEL(joaat("washington"));
								STREAMING::REQUEST_MODEL(joaat("baller2"));
								STREAMING::REQUEST_MODEL(joaat("primo"));
								if (((STREAMING::HAS_MODEL_LOADED(joaat("IG_Bride")) && STREAMING::HAS_MODEL_LOADED(joaat("washington"))) && STREAMING::HAS_MODEL_LOADED(joaat("baller2"))) && STREAMING::HAS_MODEL_LOADED(joaat("primo")))
								{
									iLocal_52 = PED::CREATE_PED(5, joaat("IG_Bride"), -330.36f, 6154.03f, 30.8f, 90f, true, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52, true);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_77);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
									iLocal_54 = PED::CREATE_PED(4, joaat("IG_BestMen"), -333.3692f, 6157.6436f, 30.489f, 83.2763f, true, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, true);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), -1);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 0, 1, 0, 0);
									iLocal_56[0] = VEHICLE::CREATE_VEHICLE(joaat("washington"), -342.1295f, 6141.4043f, 30.4839f, 133.4604f, true, true, false);
									iLocal_56[1] = VEHICLE::CREATE_VEHICLE(joaat("baller2"), -338.3777f, 6137.41f, 30.476f, 135.6866f, true, true, false);
									iLocal_56[2] = VEHICLE::CREATE_VEHICLE(joaat("primo"), -329.4687f, 6143.247f, 30.4893f, 313.82f, true, true, false);
									iLocal_56[3] = VEHICLE::CREATE_VEHICLE(joaat("washington"), -322.3235f, 6135.4272f, 30.4924f, 316.5898f, true, true, false);
									VEHICLE::SET_VEHICLE_COLOURS(iLocal_56[0], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									VEHICLE::SET_VEHICLE_COLOURS(iLocal_56[1], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									VEHICLE::SET_VEHICLE_COLOURS(iLocal_56[2], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									VEHICLE::SET_VEHICLE_COLOURS(iLocal_56[3], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									iLocal_47 = 3;
									bLocal_82 = false;
									iLocal_94 = 0;
								}
							}
						}
						break;
					case 3:
						if (!bLocal_82)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
								{
									VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 2, false);
									bLocal_82 = true;
									SYSTEM::WAIT(3000);
									__LIB_0__::func_429();
									SYSTEM::WAIT(0);
								}
							}
						}
						break;
					}
			}
		}
		else if (ENTITY::IS_ENTITY_DEAD(iLocal_51, false))
		{
			func_183();
		}
	}
}

void func_97()//Position - 0x455A
{
	if ((iLocal_274 && iLocal_271 != __LIB_0__::func_199(__LIB_11__::func_762())) && !CAM::DOES_CAM_EXIST(iLocal_98))
	{
		__LIB_1__::func_350(((iLocal_271 * 1000 * 60 - __LIB_0__::func_199(__LIB_11__::func_762()) * 1000 * 60) + (iLocal_270 * 1000 - __LIB_0__::func_198(__LIB_11__::func_762()) * 1000)), "TIMER_TIME" /* GXT: TIME */, 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	if (iLocal_270 == 0)
	{
		if (iLocal_271 == __LIB_0__::func_199(__LIB_11__::func_762()) + 1 && ((((iLocal_270 == (__LIB_0__::func_198(__LIB_11__::func_762()) - 55) || iLocal_270 == (__LIB_0__::func_198(__LIB_11__::func_762()) - 56)) || iLocal_270 == (__LIB_0__::func_198(__LIB_11__::func_762()) - 57)) || iLocal_270 == (__LIB_0__::func_198(__LIB_11__::func_762()) - 58)) || iLocal_270 == (__LIB_0__::func_198(__LIB_11__::func_762()) - 59)))
		{
			func_100();
		}
	}
	if (iLocal_271 == __LIB_0__::func_199(__LIB_11__::func_762()))
	{
		func_100();
		__LIB_0__::func_638();
		if (!__LIB_0__::func_75())
		{
			__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_failti", 4, 0, 0, 0);
			if (!PED::IS_PED_INJURED(iLocal_51))
			{
				TASK::TASK_USE_MOBILE_PHONE(iLocal_51, true, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_52, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
			}
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_54, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
			}
			SYSTEM::WAIT(8500);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 3, false);
				}
			}
			SYSTEM::WAIT(2000);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_51, false))
			{
				TASK::CLEAR_PED_TASKS(iLocal_51);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, 5000, 2048, 2);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_51, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_51, 0, 0);
				PED::REMOVE_PED_FROM_GROUP(iLocal_51);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, 5000, 0, 2);
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_53, 500, 0);
			}
			SYSTEM::WAIT(1000);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_55, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_51, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == iLocal_55)
				{
					TASK::TASK_ENTER_VEHICLE(0, iLocal_55, -1, -1, 1f, 8, 0);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_55, PLAYER::PLAYER_PED_ID(), 8, 15f, 786469, 10f, 10f, true);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_51, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				PED::SET_PED_KEEP_TASK(iLocal_51, true);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
					if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == iLocal_55)
					{
						TASK::TASK_ENTER_VEHICLE(0, iLocal_55, -1, 0, 2f, 1, 0);
						TASK::TASK_PAUSE(0, 100000);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
					}
					TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_77);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
					PED::SET_PED_KEEP_TASK(iLocal_53, true);
				}
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			while (__LIB_0__::func_75())
			{
				SYSTEM::WAIT(0);
			}
			func_2();
		}
	}
}

void func_100()//Position - 0x48C2
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_SECONDS();
	if (iLocal_273 == 0)
	{
		if (iVar1 == 55 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 1)
	{
		if (iVar1 == 56 && iVar2 >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 2)
	{
		if (iVar1 == 56 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 3)
	{
		if (iVar1 == 57 && iVar2 >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 4)
	{
		if (iVar1 == 57 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 5)
	{
		if (iVar1 == 58 && iVar2 >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 6)
	{
		if (iVar1 == 58 && iVar2 >= 15)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 7)
	{
		if (iVar1 == 58 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 8)
	{
		if (iVar1 == 58 && iVar2 >= 45)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 9)
	{
		if (iVar1 == 59 && iVar2 >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 10)
	{
		if (iVar1 == 59 && iVar2 >= 15)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 11)
	{
		if (iVar1 == 59 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 12)
	{
		if (iVar1 == 59 && iVar2 >= 45)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
	else if (iLocal_273 == 13)
	{
		if (iVar1 >= 0 && iVar0 == iLocal_271)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_273++;
		}
	}
}

void func_105()//Position - 0x4D36
{
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_51, iLocal_55, false) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_55))
			{
				if (!__LIB_0__::func_75())
				{
					if (__LIB_0__::func_680())
					{
						__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_crash", 4, 0, 0, 0);
					}
					else
					{
						__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_bump1", 4, 0, 0, 0);
					}
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(iLocal_51, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			{
				if (!__LIB_0__::func_75())
				{
					__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_bump1", 4, 0, 0, 0);
				}
			}
		}
	}
}

void func_107()//Position - 0x4E0E
{
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_51, false);
	}
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_53, false);
	}
	if (((((ENTITY::IS_ENTITY_AT_ENTITY(iLocal_51, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, false, true, 0) || iLocal_47 == 1) || iLocal_90) || iLocal_91) || iLocal_89) || bLocal_82)
	{
		if ((((((iLocal_47 >= 2 && iLocal_84) && iLocal_47 != 1) && !iLocal_90) && !iLocal_91) && !iLocal_89) && !bLocal_82)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, false, true, 0))
			{
				if (__LIB_0__::func_568())
				{
					__LIB_0__::func_620(0);
				}
			}
			else if (__LIB_0__::func_75() && !__LIB_0__::func_568())
			{
				__LIB_0__::func_620(1);
			}
		}
		else if (__LIB_0__::func_568())
		{
			__LIB_0__::func_620(0);
		}
	}
	else if (__LIB_0__::func_75() && !__LIB_0__::func_568())
	{
		__LIB_0__::func_620(1);
	}
}

void func_110()//Position - 0x4F30
{
	if ((CLOCK::GET_CLOCK_HOURS() > 2 && CLOCK::GET_CLOCK_HOURS() < 15) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
	}
	else
	{
		if (!PED::IS_PED_INJURED(iLocal_51))
		{
			TASK::CLEAR_PED_TASKS(iLocal_51);
			__LIB_0__::func_429();
			SYSTEM::WAIT(0);
			__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_failda", 4, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
			{
				ENTITY::DETACH_ENTITY(iLocal_58, true, true);
			}
		}
		while (__LIB_0__::func_75())
		{
			SYSTEM::WAIT(0);
		}
		func_2();
	}
}

void func_111()//Position - 0x4FAE
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(iLocal_51))
	{
		if (!iLocal_79)
		{
			if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, 130f, 60f, 50f, false, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_51)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, 10f, 10f, 10f, false, true, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_285))
				{
					iLocal_285 = __LIB_0__::func_666(iLocal_51, 0, 145);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_285, false);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_51, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, 10f, 10f, 10f, false, true, 0))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_285))
					{
						HUD::SHOW_HEIGHT_ON_BLIP(iLocal_285, true);
					}
					SYSTEM::SETTIMERB(0);
					__LIB_0__::func_638();
					while (__LIB_0__::func_75())
					{
						SYSTEM::WAIT(0);
					}
					if (!__LIB_0__::func_75())
					{
						if (__LIB_0__::func_683() == 0)
						{
							__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_greetM", 4, 0, 0, 0);
						}
						if (__LIB_0__::func_683() == 1)
						{
							__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_greetF", 4, 0, 0, 0);
						}
						if (__LIB_0__::func_683() == 2)
						{
							__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_greetT", 4, 0, 0, 0);
						}
					}
					iLocal_79 = 1;
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(iLocal_51))
			{
				if ((!__LIB_39__::func_333() && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1131.777f, 2636.418f, 15.589f, -1040.995f, 2717.077f, 31.715f, 60.75f, false, true, 0)) && HUD::DOES_BLIP_EXIST(iLocal_285))
				{
					if (!__LIB_0__::func_75())
					{
						__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_greet2", 4, 0, 0, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
					{
						iLocal_57 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					}
					__LIB_39__::func_336(1);
				}
			}
		}
		else if (!iLocal_265)
		{
			if (!PED::IS_PED_INJURED(iLocal_51))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, 25f, 25f, 25f, false, true, 0))
				{
					__LIB_0__::func_429();
					SYSTEM::WAIT(0);
					__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_leave", 4, 0, 0, 0);
					iLocal_265 = 1;
				}
			}
		}
	}
}

void func_122()//Position - 0x572E
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_51))
	{
		if (!PED::IS_PED_INJURED(iLocal_51))
		{
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_51, true), 3f))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_51);
				ENTITY::SET_ENTITY_HEALTH(iLocal_51, 99, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (ENTITY::GET_ENTITY_SPEED(PLAYER::GET_PLAYERS_LAST_VEHICLE()) < 3f)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_51, true);
				}
				else
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_51, false);
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_51))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_51);
						ENTITY::SET_ENTITY_HEALTH(iLocal_51, 99, 0);
					}
				}
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51, 2f, 2f, 2f, false, true, 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (__LIB_0__::func_494(1, 0, 1))
					{
						if (!iLocal_275)
						{
							__LIB_39__::func_336(1);
							__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
							HUD::CLEAR_HELP(true);
							HUD::DISPLAY_HUD(false);
							HUD::DISPLAY_RADAR(false);
							if (!PED::IS_PED_INJURED(iLocal_51))
							{
								MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_51, true), 5f, true, false, false, false);
								GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 5f);
							}
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_51, 5f, 5f, 5f, false, true, 0))
								{
									ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), ENTITY::GET_ENTITY_COORDS(iLocal_51, true) - Vector(1.5f, 4f, 3f), true, false, false, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 5f);
								}
							}
							if (!PED::IS_PED_INJURED(iLocal_51))
							{
								iLocal_282 = PED::CREATE_SYNCHRONIZED_SCENE(-935.57f, 2767.616f, 24.448f, 2.433f, 0.152f, 53.743f, 2);
								iLocal_98 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_282, 0.158f);
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_98, iLocal_282, "untie_cam", "re@stag_do@");
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_51);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51, iLocal_282, "re@stag_do@", "untie_ped", 1000f, -1000f, 4, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_51, false, false);
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_282, "re@stag_do@", "untie_player", 1000f, -1000f, 0, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
								CAM::SET_CAM_ACTIVE(iLocal_98, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								iLocal_275 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			func_2();
		}
	}
	if (iLocal_275 && !iLocal_277)
	{
		__LIB_0__::func_429();
		SYSTEM::WAIT(0);
		if (__LIB_0__::func_683() == 0)
		{
			__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_untieM", 4, 0, 0, 0);
		}
		if (__LIB_0__::func_683() == 1)
		{
			__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_untieF", 4, 0, 0, 0);
		}
		if (__LIB_0__::func_683() == 2)
		{
			__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_untieT", 4, 0, 0, 0);
		}
		iLocal_277 = 1;
	}
	if (iLocal_275 && !iLocal_276)
	{
		if (!iLocal_280)
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_282) > 0.2f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_282) < 0.3f)
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ROPE_CUT", PLAYER::PLAYER_PED_ID(), "ROPE_CUT_SOUNDSET", false, 0);
				iLocal_280 = 1;
			}
		}
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_282) > 0.46470588f && !iLocal_281)
		{
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				iLocal_281 = 1;
			}
		}
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_282) > 0.5f)
		{
			iLocal_276 = 1;
		}
		if (__LIB_0__::func_645(1000))
		{
			CAM::DO_SCREEN_FADE_OUT(800);
			while (CAM::IS_SCREEN_FADING_OUT())
			{
				SYSTEM::WAIT(0);
			}
			iLocal_276 = 1;
			iLocal_279 = 1;
		}
	}
	if (iLocal_276 && !iLocal_278)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
		{
			ENTITY::DETACH_ENTITY(iLocal_58, true, true);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -936.6537f, 2767.4968f, 24.4289f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 208.4017f);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
		CAM::SET_CAM_ACTIVE(iLocal_98, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_98, false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
		__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
		if (!PED::IS_PED_INJURED(iLocal_51))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_51, false);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_51);
			PED::SET_PED_CAN_RAGDOLL(iLocal_51, true);
			ENTITY::SET_ENTITY_COORDS(iLocal_51, -935.6716f, 2767.7717f, 24.4289f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_51, 136.9073f);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_51, false, false);
		}
		if (iLocal_279)
		{
			CAM::DO_SCREEN_FADE_IN(800);
			while (CAM::IS_SCREEN_FADING_IN())
			{
				SYSTEM::WAIT(0);
			}
			iLocal_279 = 0;
		}
		iLocal_281 = 0;
		iLocal_278 = 1;
	}
	if (iLocal_278 && !PED::IS_PED_INJURED(iLocal_51))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if ((((((ENTITY::IS_ENTITY_AT_ENTITY(iLocal_51, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 20f, 20f, 20f, false, true, 0) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PLAYER::GET_PLAYERS_LAST_VEHICLE()) >= 1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()) != joaat("rhino"))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2048, 3);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 6500);
				TASK::TASK_ENTER_VEHICLE(0, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_51, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
			}
			else if (!PED::IS_PED_IN_GROUP(iLocal_51))
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_51, __LIB_0__::func_495());
				PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_51, true);
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_51, 0);
			}
		}
		else if (!PED::IS_PED_IN_GROUP(iLocal_51))
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_51, __LIB_0__::func_495());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_51, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_51, 0);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_51, false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		iLocal_284 = __LIB_0__::func_488(Local_59, 1);
		iLocal_78 = 1;
		bLocal_80 = true;
		STREAMING::REMOVE_ANIM_DICT("re@stag_do@");
		STREAMING::REMOVE_ANIM_DICT("re@stag_do@idle_a");
		iLocal_269 = __LIB_0__::func_199(__LIB_11__::func_762());
		iLocal_271 = iLocal_269 + 5;
		iLocal_268 = __LIB_0__::func_198(__LIB_11__::func_762());
		if (iLocal_268 >= 30)
		{
			iLocal_270 = 0;
			iLocal_271++;
		}
		if (iLocal_271 > 24)
		{
			iLocal_271 = (iLocal_271 - 24);
		}
		if (iLocal_271 == 0)
		{
			sLocal_266 = "stagd_ptime0";
		}
		else if (iLocal_271 == 1)
		{
			sLocal_266 = "stagd_ptime1";
		}
		else if (iLocal_271 == 2)
		{
			sLocal_266 = "stagd_ptime2";
		}
		else if (iLocal_271 == 3)
		{
			sLocal_266 = "stagd_ptime3";
		}
		else if (iLocal_271 == 4)
		{
			sLocal_266 = "stagd_ptime4";
		}
		else if (iLocal_271 == 5)
		{
			sLocal_266 = "stagd_ptime5";
		}
		else if (iLocal_271 == 6)
		{
			sLocal_266 = "stagd_ptime6";
		}
		else if (iLocal_271 == 7)
		{
			sLocal_266 = "stagd_ptime7";
		}
		else if (iLocal_271 == 8)
		{
			sLocal_266 = "stagd_ptime8";
		}
		else if (iLocal_271 == 9)
		{
			sLocal_266 = "stagd_ptime9";
		}
		else if (iLocal_271 == 10)
		{
			sLocal_266 = "stagd_ptim10";
		}
		else if (iLocal_271 == 11)
		{
			sLocal_266 = "stagd_ptim11";
		}
		else if (iLocal_271 == 12)
		{
			sLocal_266 = "stagd_ptim12";
		}
		else if (iLocal_271 == 13)
		{
			sLocal_266 = "stagd_ptim13";
		}
		else if (iLocal_271 == 14)
		{
			sLocal_266 = "stagd_ptim14";
		}
		else if (iLocal_271 == 15)
		{
			sLocal_266 = "stagd_ptim15";
		}
		else if (iLocal_271 == 16)
		{
			sLocal_266 = "stagd_ptim16";
		}
		else if (iLocal_271 == 17)
		{
			sLocal_266 = "stagd_ptim17";
		}
		else if (iLocal_271 == 18)
		{
			sLocal_266 = "stagd_ptim18";
		}
		else if (iLocal_271 == 19)
		{
			sLocal_266 = "stagd_ptim19";
		}
		else if (iLocal_271 == 20)
		{
			sLocal_266 = "stagd_ptim20";
		}
		else if (iLocal_271 == 21)
		{
			sLocal_266 = "stagd_ptim21";
		}
		else if (iLocal_271 == 22)
		{
			sLocal_266 = "stagd_ptim22";
		}
		else if (iLocal_271 == 23)
		{
			sLocal_266 = "stagd_ptim23";
		}
	}
}

void func_125()//Position - 0x5F78
{
	if (!PED::IS_PED_INJURED(iLocal_51))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true, false);
			}
		}
		iLocal_97 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_51, false), 30f, 0, 4);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_97, false))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_97, -1, false))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_97, iLocal_51, 30f, 30f, 30f, false, true, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_97, true, false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_97, false))
					{
						VEHICLE::START_VEHICLE_HORN(iLocal_97, 3000, 0, false);
						if (!PED::IS_PED_INJURED(iLocal_51))
						{
							if (!__LIB_0__::func_75() && !iLocal_79)
							{
								__LIB_2__::func_859(&uLocal_100, "stagdau", "stagd_greet2", 4, 0, 0, 0);
							}
						}
					}
				}
				else
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_97);
				}
			}
		}
	}
}

void func_127()//Position - 0x60BD
{
	__LIB_13__::func_824(39, 1);
	__LIB_13__::func_824(40, 1);
	__LIB_13__::func_824(41, 1);
	__LIB_13__::func_824(42, 1);
	__LIB_13__::func_824(43, 1);
	__LIB_13__::func_824(44, 1);
	STREAMING::REQUEST_MODEL(joaat("U_M_Y_StagGrm_01"));
	STREAMING::REQUEST_MODEL(joaat("superd"));
	STREAMING::REQUEST_MODEL(joaat("prop_stag_do_rope"));
	while ((!STREAMING::HAS_MODEL_LOADED(joaat("U_M_Y_StagGrm_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("superd"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_stag_do_rope")))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::REQUEST_ANIM_DICT("re@stag_do@");
	STREAMING::REQUEST_ANIM_DICT("re@stag_do@idle_a");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false, -1);
	while ((!STREAMING::HAS_ANIM_DICT_LOADED("re@stag_do@") || !STREAMING::HAS_ANIM_DICT_LOADED("re@stag_do@idle_a")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false, -1))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_51 = PED::CREATE_PED(26, joaat("U_M_Y_StagGrm_01"), -935.57f, 2767.616f, 24.448f, 140.5f, true, true);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_51, "GROOM");
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_51, joaat("PLAYER"));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_51, true);
	PED::SET_PED_MONEY(iLocal_51, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_51, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_51, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_51, 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_51, 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_51, 11, 1, 0, 0);
	TASK::TASK_SET_DECISION_MAKER(iLocal_51, joaat("empty"));
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_51, 3);
	PED::SET_PED_CONFIG_FLAG(iLocal_51, 206, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_51, 134, true);
	iLocal_58 = OBJECT::CREATE_OBJECT(joaat("prop_stag_do_rope"), ENTITY::GET_ENTITY_COORDS(iLocal_51, true), true, true, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_58, iLocal_51, PED::GET_PED_BONE_INDEX(iLocal_51, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	iLocal_55 = VEHICLE::CREATE_VEHICLE(joaat("superd"), -2009.0146f, 455.3556f, 101.6528f, 274.8103f, false, false, false);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_55, true);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_55, 0f);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_55, 3);
	VEHICLE::SET_VEHICLE_MOD_KIT(iLocal_55, 0);
	VEHICLE::SET_VEHICLE_MOD_COLOR_1(iLocal_55, 0, 73, 0);
	VEHICLE::SET_VEHICLE_MOD_COLOR_2(iLocal_55, 2, 48);
	VEHICLE::SET_VEHICLE_MOD(iLocal_55, 11, 1, false);
	VEHICLE::SET_VEHICLE_MOD(iLocal_55, 12, 1, false);
	VEHICLE::REQUEST_VEHICLE_ASSET(joaat("superd"), 3);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_55, 10000);
	VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_55, 5f);
	VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_55);
	Local_63 = { -352.88f, 6164.31f, 30.5f };
	Local_64 = { -355.2565f, 6164.9307f, 30.2944f };
	Local_65 = { -330.5575f, 6139.8516f, 34.4886f };
	fLocal_66 = 25.375f;
	Local_67 = { -343.5804f, 6156.198f, 30.489f };
	Local_68 = { -1991.1265f, 457.991f, 101.1808f };
	Local_69 = { -2002.6903f, 460.539f, 99.828f };
	Local_70 = { -1997.6046f, 445.6651f, 105.0519f };
	Local_71 = { -2026.817f, 450.3329f, 104.8771f };
	fLocal_72 = 24.6875f;
	Local_73 = { -2205.3506f, 4298.7896f, 47.265f };
	Local_74 = { -2207.5254f, 4301.697f, 47.1803f };
	Local_75 = { -2195.6367f, 4295.4067f, 51.1889f };
	fLocal_76 = 12.5625f;
	Local_59 = { Local_68 };
	Local_60 = { Local_69 };
	Local_61 = { Local_70 };
	fLocal_62 = fLocal_72;
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("superd"), true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_67 - Vector(10f, 10f, 10f), Local_67 + Vector(10f, 10f, 10f), false, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_67 - Vector(20f, 20f, 20f), Local_67 + Vector(20f, 20f, 20f), false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_51, false) - Vector(10f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_51, false) + Vector(10f, 10f, 10f), false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(101.6406f, 455.1994f, -2007.751f) - Vector(15f, 15f, 15f), Vector(101.6406f, 455.1994f, -2007.751f) + Vector(15f, 15f, 15f), false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(47.4293f, 4299.008f, -2202.7468f) - Vector(15f, 25f, 25f), Vector(47.4293f, 4299.008f, -2202.7468f) + Vector(15f, 25f, 25f), false, true, true, true);
	MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(iLocal_51, true), 10f, 0);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_51, false))
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
		TASK::TASK_PLAY_ANIM(0, "re@stag_do@idle_a", "idle_a_ped", 8f, -8f, -1, 9, 0f, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_51, iLocal_77);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
		PED::SET_PED_KEEP_TASK(iLocal_51, true);
	}
	if (__LIB_0__::func_683() == 0)
	{
		__LIB_0__::func_222(&uLocal_100, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	if (__LIB_0__::func_683() == 1)
	{
		__LIB_0__::func_222(&uLocal_100, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	if (__LIB_0__::func_683() == 2)
	{
		__LIB_0__::func_222(&uLocal_100, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	__LIB_0__::func_222(&uLocal_100, 3, iLocal_51, "GROOM", 0, 1);
	iLocal_48 = 1;
}

void func_183()//Position - 0x9CF0
{
	if (iLocal_49)
	{
		__LIB_14__::func_804(0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_67 - Vector(10f, 10f, 10f), Local_67 + Vector(10f, 10f, 10f), true, true);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		__LIB_0__::func_429();
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_57, false))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_57, false) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 50f, 50f, 50f, false, true, 0))
			{
				__LIB_17__::func_197(iLocal_57, 0, 145);
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_67, 100f, 100f, 100f, false, true, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_51) && !PED::IS_PED_INJURED(iLocal_53))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -330.36f, 6154.03f, 31.8f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_CHAT_TO_PED(0, iLocal_53, 16, 0f, 0f, 0f, 0f, 0f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_51, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -330.36f, 6155.03f, 31.8f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_CHAT_TO_PED(0, iLocal_51, 16, 0f, 0f, 0f, 0f, 0f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
			}
		}
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_97);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_55);
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_51))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_51, 317, true);
			if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_51))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_51, false);
			}
			PED::REMOVE_PED_FROM_GROUP(iLocal_51);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_51, false);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
		{
			ENTITY::DETACH_ENTITY(iLocal_58, true, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_51);
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_53, 317, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, false);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_53);
		if (!PED::IS_PED_INJURED(iLocal_52))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52, false);
		}
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, false);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_52);
	}
	__LIB_39__::func_344(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

