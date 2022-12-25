#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	float fLocal_45 = 0f;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_57 = { 0, 0, 0 } ;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	struct<6> Local_64 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_65 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84[2] = { 0, 0 };
	int iLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	int iLocal_91[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	var uLocal_114 = 16;
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
	struct<2> Local_279 = { 0, 5 } ;
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
	var uLocal_295 = 5;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	iLocal_19 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_45 = -1f;
	StringCopy(&Local_64, "", 24);
	Local_90 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_94 = -1;
	Local_49 = { ScriptParam_279.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_54))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_54);
			}
		}
		func_226();
	}
	if (__LIB_17__::func_698(256, 1))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_39__::func_20(Local_49, -1, 0, 0, 0))
	{
		__LIB_39__::func_9(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_47 == 4) || iLocal_60 > 18)
		{
			if (!__LIB_39__::func_8())
			{
				if (__LIB_39__::func_15())
				{
					func_226();
				}
			}
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_DO", 0);
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				switch (iLocal_46)
				{
					case 0:
						if (!bLocal_48)
						{
							if (__LIB_39__::func_25())
							{
								func_226();
							}
							if (!bLocal_55)
							{
								func_165();
							}
							if (bLocal_55)
							{
								func_164();
							}
						}
						if (bLocal_48)
						{
							iLocal_46 = 1;
						}
						break;
					case 1:
						func_156();
						if (iLocal_61 > 3)
						{
							if (!iLocal_74 && !__LIB_0__::func_75())
							{
								__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_THK", 4, 0, 0, 0);
								iLocal_74 = 1;
							}
						}
						switch (iLocal_47)
						{
							case 0:
								func_150();
								iLocal_47 = 1;
								break;
							case 1:
								if (!iLocal_81)
								{
									if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -467.0595f, 540.1724f, 125.3034f, 91.875f, 90.875f, 30f, false, true, 0) && CAM::IS_SPHERE_VISIBLE(Local_86, 1f)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_86, 20f, 20f, 20f, false, true, 0))
									{
										func_149();
										__LIB_39__::func_11(1);
										iLocal_81 = 1;
									}
								}
								else
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_86, 50f, 50f, 50f, false, true, 0))
									{
										func_138();
									}
									if (!PED::IS_PED_INJURED(iLocal_54))
									{
										if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_54, Local_57, 30f, 30f, 30f, false, true, 0))
										{
											iLocal_47 = 11;
										}
									}
								}
								break;
							case 3:
								func_136();
								if (iLocal_60 > 18)
								{
									func_135();
								}
								else if (!__LIB_0__::func_75())
								{
									func_135();
								}
								break;
							case 7:
								func_136();
								func_131();
								break;
							case 4:
								func_136();
								func_81();
								if (__LIB_39__::func_52(Local_88))
								{
									func_57(0);
									__LIB_0__::func_429();
									SYSTEM::WAIT(0);
									__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CULT", 4, 0, 0, 0);
								}
								if (__LIB_39__::func_55())
								{
									func_57(0);
									__LIB_0__::func_429();
									SYSTEM::WAIT(0);
									__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_NEAR", 4, 0, 0, 0);
								}
								if (!iLocal_71)
								{
									if (func_52())
									{
										if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_88, 23f, 60f, 20f, false, true, 0))
										{
											func_57(0);
											__LIB_0__::func_429();
											SYSTEM::WAIT(0);
											if (!__LIB_0__::func_75())
											{
												__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_DRP", 4, 0, 0, 0);
												iLocal_71 = 1;
											}
										}
									}
								}
								break;
							case 11:
								func_51();
								break;
						}
						if (!PED::IS_PED_INJURED(iLocal_53))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, "random@domestic", "f_attack_end", 3))
							{
								__LIB_0__::func_709(iLocal_53, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
							}
						}
						if ((__LIB_39__::func_22() && !__LIB_39__::func_21()) && iLocal_46 != 2)
						{
							if (!PED::IS_PED_INJURED(iLocal_54))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_54, Local_90, 5f, 5f, 5f, false, true, 0))
								{
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_91[8]))
									{
										iLocal_91[8] = OBJECT::CREATE_OBJECT(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, true, true, false);
										ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_91[8], iLocal_54, PED::GET_PED_BONE_INDEX(iLocal_54, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, true, false, false, false, 2, true, 0);
									}
									__LIB_0__::func_620(0);
									SYSTEM::WAIT(0);
									__LIB_0__::func_429();
									iLocal_46 = 2;
								}
							}
						}
						if (func_45())
						{
							func_51();
						}
						break;
					case 2:
						if (__LIB_39__::func_47())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
							{
								PED::DELETE_PED(&iLocal_54);
							}
							func_14();
						}
						break;
					case 3:
						func_1();
						break;
					}
			}
		}
		else
		{
			func_226();
		}
	}
}

void func_1()//Position - 0x4AB
{
	int iVar0;
	if (iLocal_109 && !iLocal_108)
	{
		__LIB_14__::func_804(0);
		if (Global_32201)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		__LIB_39__::func_23();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[8]))
		{
			iLocal_92 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_GOLFCLUB"), ENTITY::GET_ENTITY_COORDS(iLocal_91[8], true), ENTITY::GET_ENTITY_ROTATION(iLocal_91[8], 2) + Vector(2.8157f, -159.5768f, -14.1956f), 0, -1, 2, true, 0);
			OBJECT::DELETE_OBJECT(&(iLocal_91[8]));
		}
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_57 - Vector(10f, 10f, 10f), Local_57 + Vector(10f, 10f, 10f), true, true);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_111, joaat("PLAYER"));
		if (bLocal_55)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_78);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_79);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
		{
			if (!PED::IS_PED_INJURED(iLocal_53))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, false);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_53);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_85))
		{
			HUD::REMOVE_BLIP(&iLocal_85);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_84[0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_84[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_54, false))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_54);
				}
				PED::REMOVE_PED_FROM_GROUP(iLocal_54);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, false);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_54, true);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_91)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[iVar0]))
			{
				ENTITY::DETACH_ENTITY(iLocal_91[iVar0], true, true);
			}
			iVar0++;
		}
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		iLocal_108 = 1;
	}
	if ((!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_57, 80f, 80f, 80f, false, true, 0) || OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_92)) || !(ENTITY::DOES_ENTITY_EXIST(iLocal_91[8]) && !OBJECT::DOES_PICKUP_EXIST(iLocal_92)))
	{
		func_226();
	}
}

void func_14()//Position - 0xC84
{
	while (__LIB_0__::func_75())
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_0__::func_109())
	{
		SYSTEM::WAIT(0);
	}
	Global_113386.f_18574.f_383 = __LIB_0__::func_58() + 1;
	__LIB_39__::func_24(-1, 0);
	__LIB_14__::func_557();
	iLocal_46 = 3;
}

int func_45()//Position - 0x2068
{
	if (PED::IS_PED_INJURED(iLocal_53) && PED::IS_PED_INJURED(iLocal_54))
	{
		return 1;
	}
	return 0;
}

void func_51()//Position - 0x22C6
{
	iLocal_46 = 3;
}

int func_52()//Position - 0x22D1
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iLocal_110 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, false))
		{
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_54, iLocal_110))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_57(bool bParam0)//Position - 0x23D9
{
	if (bParam0)
	{
		if (iLocal_63)
		{
			if (__LIB_14__::func_782(&uLocal_114, "REDO2AU", &Local_65, &Local_64, 8, 0, 0))
			{
				iLocal_63 = 0;
			}
		}
	}
	else if ((!iLocal_63 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !func_62())
	{
		Local_65 = { __LIB_0__::func_486() };
		Local_64 = { __LIB_13__::func_743() };
		__LIB_0__::func_638();
		iLocal_63 = 1;
	}
}

int func_62()//Position - 0x24D3
{
	if (((((((__LIB_17__::func_160("REDO2_DRP") || __LIB_17__::func_160("REDO2_UV")) || __LIB_17__::func_160("REDO2_UV2")) || __LIB_17__::func_160("REDO2_CULT")) || __LIB_17__::func_160("REDO2_NEAR")) || __LIB_17__::func_160("REDO2_GETOUT")) || __LIB_17__::func_160("REDO2_JACK")) || __LIB_17__::func_160("REDO2_SHOOT"))
	{
		return 1;
	}
	return 0;
}

void func_81()//Position - 0x2D4E
{
	switch (iLocal_62)
	{
		case 0:
			if (iLocal_60 > 18)
			{
				iLocal_62++;
			}
			else if (!PED::IS_PED_INJURED(iLocal_54))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_54, 1f);
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, false, true, 0))
				{
					if (iLocal_60 < 19)
					{
						if (__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
						{
							iLocal_62++;
						}
					}
					else
					{
						iLocal_62++;
					}
				}
			}
			break;
		case 1:
			func_127();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
			{
				if (!PED::IS_PED_INJURED(iLocal_54))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), false))
					{
						if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_54))
						{
							OBJECT::DELETE_OBJECT(&(iLocal_91[8]));
						}
					}
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_54))
					{
						func_125();
						func_119();
						if (__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_TO", 4, 0, 0, 0))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_62++;
						}
					}
					else
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_54, 1f);
					}
				}
			}
			break;
		case 2:
			func_119();
			func_118();
			func_127();
			func_117();
			if (SYSTEM::TIMERB() > 1500)
			{
				func_116();
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_88, 10f, 10f, 10f, false, true, 0))
			{
				HUD::CLEAR_ALL_HELP_MESSAGES();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
			{
				if (!PED::IS_PED_INJURED(iLocal_54))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_54, Local_88, Global_19, true, true, 0) && __LIB_0__::func_494(1, 0, 1))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_82))
						{
							HUD::REMOVE_BLIP(&iLocal_82);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_83))
						{
							HUD::REMOVE_BLIP(&iLocal_83);
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_54, false))
						{
							VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(iLocal_54, false), 10.5f, 3, false);
							iLocal_62++;
						}
						else
						{
							iLocal_62 = 4;
						}
					}
				}
			}
			break;
		case 3:
			func_114();
			if (bLocal_104)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				func_14();
			}
			break;
		case 4:
			func_82();
			if (bLocal_104)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				func_14();
			}
			break;
	}
}

void func_82()//Position - 0x2F53
{
	switch (iLocal_102)
	{
		case 0:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			__LIB_0__::func_638();
			if (__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
			{
				iLocal_102++;
			}
			break;
		case 1:
			iLocal_102++;
			break;
		case 2:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_54);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, 2048, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_89, 1f, -1, 0.25f, 0, 311.3569f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_54, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				PED::SET_PED_KEEP_TASK(iLocal_54, true);
				iLocal_103 = MISC::GET_GAME_TIMER() + 4000;
				iLocal_102++;
			}
			break;
		case 3:
			if (iLocal_103 < MISC::GET_GAME_TIMER())
			{
				HUD::CLEAR_ALL_HELP_MESSAGES();
				iLocal_102++;
			}
			break;
		case 4:
			if (!__LIB_0__::func_75())
			{
				__LIB_0__::func_151("DOM_GOLF" /* GXT: Castro will soon be available to play golf. */, -1);
				__LIB_39__::func_48(&(Global_113386.f_18979), 16);
				if (__LIB_0__::func_683() == 0)
				{
					__LIB_0__::func_989(&(Global_113386.f_18979.f_24), 1);
				}
				else if (__LIB_0__::func_683() == 1)
				{
					__LIB_0__::func_989(&(Global_113386.f_18979.f_24), 4);
				}
				else if (__LIB_0__::func_683() == 2)
				{
					__LIB_0__::func_989(&(Global_113386.f_18979.f_24), 2);
				}
				__LIB_14__::func_593(__LIB_0__::func_683(), 1, 80, 0, 1);
				SYSTEM::SETTIMERA(0);
				iLocal_102++;
			}
			break;
		case 5:
			if (SYSTEM::TIMERA() > 5000)
			{
				bLocal_104 = true;
			}
			break;
	}
}

void func_114()//Position - 0x43F1
{
	switch (iLocal_102)
	{
		case 0:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			__LIB_0__::func_638();
			if (__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
			{
				iLocal_102++;
			}
			break;
		case 1:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			iLocal_102++;
			break;
		case 2:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			iLocal_102++;
			break;
		case 3:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_54);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, 2048, 2);
				TASK::TASK_PAUSE(0, 300);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_89, 1f, -1, 0.25f, 0, 311.3569f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_54, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				PED::SET_PED_KEEP_TASK(iLocal_54, true);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_91[8]))
				{
					iLocal_91[8] = OBJECT::CREATE_OBJECT(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_91[8], iLocal_54, PED::GET_PED_BONE_INDEX(iLocal_54, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, true, false, false, false, 2, true, 0);
				}
				iLocal_103 = MISC::GET_GAME_TIMER() + 1000;
				iLocal_102++;
			}
			break;
		case 4:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			if (iLocal_103 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(iLocal_54))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					iLocal_103 = MISC::GET_GAME_TIMER() + 3000;
					iLocal_102++;
				}
			}
			break;
		case 5:
			if (iLocal_103 < MISC::GET_GAME_TIMER())
			{
				HUD::CLEAR_ALL_HELP_MESSAGES();
				iLocal_102++;
			}
			break;
		case 6:
			if (!__LIB_0__::func_75())
			{
				__LIB_0__::func_151("DOM_GOLF" /* GXT: Castro will soon be available to play golf. */, -1);
				__LIB_39__::func_48(&(Global_113386.f_18979), 16);
				if (__LIB_0__::func_683() == 0)
				{
					__LIB_0__::func_989(&(Global_113386.f_18979.f_24), 1);
				}
				else if (__LIB_0__::func_683() == 1)
				{
					__LIB_0__::func_989(&(Global_113386.f_18979.f_24), 4);
				}
				else if (__LIB_0__::func_683() == 2)
				{
					__LIB_0__::func_989(&(Global_113386.f_18979.f_24), 2);
				}
				__LIB_14__::func_593(__LIB_0__::func_683(), 1, 80, 0, 1);
				SYSTEM::SETTIMERA(0);
				iLocal_102++;
			}
			break;
		case 7:
			if (SYSTEM::TIMERA() > 5000)
			{
				bLocal_104 = true;
			}
			break;
	}
}

void func_116()//Position - 0x4720
{
	if (!func_62())
	{
		func_57(1);
	}
	if (!__LIB_0__::func_75())
	{
		switch (iLocal_100)
		{
			case 0:
				if (__LIB_0__::func_683() == 0)
				{
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHTM", 4, 0, 0, 0);
				}
				else if (__LIB_0__::func_683() == 1)
				{
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHTF", 4, 0, 0, 0);
				}
				else if (__LIB_0__::func_683() == 2)
				{
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHTT", 4, 0, 0, 0);
				}
				iLocal_100++;
				break;
			case 1:
				__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT2", 4, 0, 0, 0);
				iLocal_100++;
				break;
			case 2:
				if (__LIB_0__::func_683() == 0)
				{
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT2M", 4, 0, 0, 0);
				}
				else if (__LIB_0__::func_683() == 1)
				{
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT2F", 4, 0, 0, 0);
				}
				else if (__LIB_0__::func_683() == 2)
				{
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT2T", 4, 0, 0, 0);
				}
				iLocal_100++;
				break;
			case 3:
				__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT3", 4, 0, 0, 0);
				iLocal_100++;
				break;
			case 4:
				if (__LIB_0__::func_683() == 0)
				{
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT3M", 4, 0, 0, 0);
				}
				else if (__LIB_0__::func_683() == 1)
				{
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT3F", 4, 0, 0, 0);
				}
				else if (__LIB_0__::func_683() == 2)
				{
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT3T", 4, 0, 0, 0);
				}
				iLocal_100++;
				break;
			case 5:
				__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO_CHT4", 4, 0, 0, 0);
				iLocal_100++;
				break;
			case 6:
				iLocal_101 = MISC::GET_GAME_TIMER() + 1000;
				iLocal_100++;
				break;
			case 7:
				if (iLocal_101 < MISC::GET_GAME_TIMER())
				{
					if (__LIB_0__::func_683() == 0)
					{
						__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO_CHT4M", 4, 0, 0, 0);
					}
					else if (__LIB_0__::func_683() == 1)
					{
						__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO_CHT4F", 4, 0, 0, 0);
					}
					else if (__LIB_0__::func_683() == 2)
					{
						__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO_CHT4T", 4, 0, 0, 0);
					}
					iLocal_100++;
				}
				break;
			case 8:
				__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT5", 4, 0, 0, 0);
				iLocal_100++;
				break;
			case 9:
				if (__LIB_0__::func_683() == 0)
				{
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT5M", 4, 0, 0, 0);
				}
				else if (__LIB_0__::func_683() == 1)
				{
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT5F", 4, 0, 0, 0);
				}
				else if (__LIB_0__::func_683() == 2)
				{
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT5T", 4, 0, 0, 0);
				}
				iLocal_100++;
				break;
			case 10:
				__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT6", 4, 0, 0, 0);
				iLocal_100++;
				break;
			case 11:
				if (__LIB_0__::func_683() == 0)
				{
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT6M", 4, 0, 0, 0);
				}
				else if (__LIB_0__::func_683() == 1)
				{
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT6F", 4, 0, 0, 0);
				}
				else if (__LIB_0__::func_683() == 2)
				{
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT6T", 4, 0, 0, 0);
				}
				iLocal_100++;
				break;
			case 12:
				__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT7", 4, 0, 0, 0);
				iLocal_100++;
				break;
			case 13:
				iLocal_101 = MISC::GET_GAME_TIMER() + 600;
				iLocal_100++;
				break;
			case 14:
				if (iLocal_101 < MISC::GET_GAME_TIMER())
				{
					if (__LIB_0__::func_683() == 0)
					{
						__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT7M", 4, 0, 0, 0);
					}
					else if (__LIB_0__::func_683() == 1)
					{
						__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT7F", 4, 0, 0, 0);
					}
					else if (__LIB_0__::func_683() == 2)
					{
						__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT7T", 4, 0, 0, 0);
					}
					iLocal_100++;
				}
				break;
			case 15:
				__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT8", 4, 0, 0, 0);
				iLocal_100++;
				break;
			case 16:
				if (__LIB_0__::func_683() == 0)
				{
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT8M", 4, 0, 0, 0);
				}
				else if (__LIB_0__::func_683() == 1)
				{
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT8F", 4, 0, 0, 0);
				}
				else if (__LIB_0__::func_683() == 2)
				{
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT8T", 4, 0, 0, 0);
				}
				iLocal_100++;
				break;
			case 17:
				iLocal_101 = MISC::GET_GAME_TIMER() + 800;
				iLocal_100++;
				break;
			case 18:
				if (iLocal_101 < MISC::GET_GAME_TIMER())
				{
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT9", 4, 0, 0, 0);
					iLocal_100++;
				}
				break;
			case 19:
				if (__LIB_0__::func_683() == 0)
				{
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT9M", 4, 0, 0, 0);
				}
				else if (__LIB_0__::func_683() == 1)
				{
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT9F", 4, 0, 0, 0);
				}
				else if (__LIB_0__::func_683() == 2)
				{
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT9T", 4, 0, 0, 0);
				}
				iLocal_100++;
				break;
			case 20:
				__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CHT10", 4, 0, 0, 0);
				iLocal_100++;
				break;
			}
	}
}

void func_117()//Position - 0x4C4B
{
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		if (!iLocal_66)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), true) && PED::IS_PED_IN_VEHICLE(iLocal_54, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					func_57(0);
					__LIB_0__::func_429();
					SYSTEM::WAIT(0);
					__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_GETOUT", 4, 0, 0, 0);
					iLocal_66 = 1;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), false) && PED::IS_PED_IN_VEHICLE(iLocal_54, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				iLocal_66 = 0;
			}
		}
		if (!iLocal_67)
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
			{
				func_57(0);
				__LIB_0__::func_429();
				SYSTEM::WAIT(0);
				__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_JACK", 4, 0, 0, 0);
				iLocal_67 = 1;
			}
		}
		else if (!PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_67 = 0;
		}
		if (!iLocal_68)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_57(0);
				__LIB_0__::func_429();
				SYSTEM::WAIT(0);
				__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
				iLocal_68 = 1;
			}
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_68 = 0;
		}
	}
}

void func_118()//Position - 0x4D72
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_95 == 0)
		{
			iLocal_95 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_96 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_96 = 0;
		iLocal_95 = 0;
	}
	if ((iLocal_96 - iLocal_95) > 60000)
	{
		__LIB_0__::func_429();
		SYSTEM::WAIT(0);
		__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_TX", 4, 0, 0, 0);
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_54, Local_89, 200f, 200f, 200f, false, true, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_54, Local_89, 1f, -1, 0.25f, 0, 40000f);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(iLocal_54, 40000f, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_54, true);
			PED::REMOVE_PED_FROM_GROUP(iLocal_54);
		}
		func_51();
	}
}

void func_119()//Position - 0x4E2A
{
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 8f, 8f, 8f, false, true, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_54, false)) && !PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_84[0]))
				{
					uLocal_84[0] = __LIB_0__::func_666(iLocal_54, 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_82))
				{
					HUD::REMOVE_BLIP(&iLocal_82);
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_84[0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_84[0]));
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_82))
				{
					iLocal_82 = __LIB_0__::func_488(Local_88, 1);
				}
				if (__LIB_0__::func_683() == 2 && !__LIB_39__::func_21())
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_83))
					{
						iLocal_83 = __LIB_0__::func_488(Local_90, 0);
						HUD::SET_BLIP_SPRITE(iLocal_83, 269);
						__LIB_39__::func_53();
					}
				}
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_84[0]))
			{
				uLocal_84[0] = __LIB_0__::func_666(iLocal_54, 0, 145);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_82))
			{
				HUD::REMOVE_BLIP(&iLocal_82);
			}
		}
	}
}

void func_125()//Position - 0x509E
{
	int iVar0;
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_53);
	__LIB_0__::func_221(&uLocal_114, 4);
	iVar0 = 0;
	while (iVar0 < iLocal_91)
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_91[iVar0]));
		iVar0++;
	}
	STREAMING::REMOVE_ANIM_DICT("random@domestic");
}

void func_127()//Position - 0x50F4
{
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (!__LIB_39__::func_50())
			{
				if (PED::IS_PED_IN_GROUP(iLocal_54))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_54);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 2f, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_54, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_54, 0, 0);
				}
				if (!iLocal_73)
				{
					func_57(0);
					__LIB_0__::func_429();
					SYSTEM::WAIT(0);
					if (!__LIB_0__::func_75())
					{
						if (!__LIB_39__::func_49())
						{
							__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						}
						else
						{
							__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
						}
						iLocal_73 = 1;
					}
				}
			}
			else
			{
				iLocal_73 = 0;
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 0)
				{
					TASK::CLEAR_PED_TASKS(iLocal_54);
				}
			}
		}
		else if (!PED::IS_PED_IN_GROUP(iLocal_54))
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_54, __LIB_0__::func_495());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_54, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_54, 0);
		}
	}
}

void func_131()//Position - 0x53B2
{
	switch (iLocal_61)
	{
		case 0:
			if (!__LIB_0__::func_75())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (__LIB_39__::func_50())
					{
						if (__LIB_0__::func_683() == 0)
						{
							__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_GLM", 4, 0, 0, 0);
						}
						if (__LIB_0__::func_683() == 1)
						{
							__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_GLF", 4, 0, 0, 0);
						}
						if (__LIB_0__::func_683() == 2)
						{
							__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_GLT", 4, 0, 0, 0);
						}
						iLocal_61 = 2;
					}
					else
					{
						if (__LIB_0__::func_683() == 0)
						{
							__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
						}
						if (__LIB_0__::func_683() == 1)
						{
							__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
						}
						if (__LIB_0__::func_683() == 2)
						{
							__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
						}
						iLocal_61++;
					}
				}
				else
				{
					if (__LIB_0__::func_683() == 0)
					{
						__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
					}
					if (__LIB_0__::func_683() == 1)
					{
						__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
					}
					if (__LIB_0__::func_683() == 2)
					{
						__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
					}
					iLocal_61++;
				}
			}
			break;
		case 1:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!__LIB_39__::func_50())
				{
					if (!__LIB_0__::func_75())
					{
						__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
						iLocal_98 = MISC::GET_GAME_TIMER();
						iLocal_61++;
					}
				}
				else
				{
					iLocal_61++;
				}
			}
			else if (!__LIB_0__::func_75())
			{
				__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
				iLocal_98 = MISC::GET_GAME_TIMER();
				iLocal_61++;
			}
			break;
		case 2:
			iLocal_99 = MISC::GET_GAME_TIMER();
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 12f, 12f, 5f, false, true, 2))
				{
					if (__LIB_39__::func_50())
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_111, joaat("PLAYER"));
						if (__LIB_39__::func_51("REDO2_WT"))
						{
							__LIB_0__::func_429();
							SYSTEM::WAIT(0);
						}
						iLocal_61++;
					}
					else if (!__LIB_0__::func_75() && !iLocal_69)
					{
						if (!__LIB_39__::func_49())
						{
							__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						}
						else
						{
							__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
						}
						iLocal_69 = 1;
					}
				}
			}
			if (iLocal_98 != 0)
			{
				if ((iLocal_99 - iLocal_98) > 60000)
				{
					if (__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_TX", 4, 0, 0, 0))
					{
						SYSTEM::WAIT(2000);
						if (!PED::IS_PED_INJURED(iLocal_54))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
							TASK::TASK_USE_MOBILE_PHONE_TIMED(0, -1);
							TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_54, iLocal_77);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
							PED::SET_PED_KEEP_TASK(iLocal_54, true);
							SYSTEM::WAIT(3000);
							iLocal_47 = 11;
						}
					}
				}
			}
			break;
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_54) && ENTITY::DOES_ENTITY_EXIST(iLocal_91[8]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				if (iLocal_60 > 18)
				{
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_91[8], true) + Vector(0f, 0.39f, 0.35f), 1f, -1, 0f, 512, __LIB_0__::func_932(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_91[8], true)));
				TASK::TASK_PLAY_ANIM(0, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_54, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				SYSTEM::SETTIMERB(0);
				iLocal_61++;
			}
			break;
		case 4:
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_54) && !ENTITY::IS_ENTITY_DEAD(iLocal_91[8], false))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54, "random@domestic", "pickup_low", 3))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_54, iLocal_91[8], false);
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_61 = 7;
					}
				}
				else if (SYSTEM::TIMERB() > 10000 || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_91[8], true), 1.5f, 1.5f, 3f, false, true, 0))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_91[8]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
						TASK::TASK_PLAY_ANIM(0, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_54, iLocal_77);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
						iLocal_61 = 6;
					}
				}
			}
			break;
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_54) && !ENTITY::IS_ENTITY_DEAD(iLocal_91[8], false))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54, "random@domestic", "pickup_low", 3))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_54, iLocal_91[8], false);
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_61++;
					}
				}
			}
			break;
		case 7:
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_91[8], iLocal_54, PED::GET_PED_BONE_INDEX(iLocal_54, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, true, false, false, false, 2, true, 0);
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_54, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_54, true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_54, 0);
					__LIB_39__::func_54();
					iLocal_47 = 4;
				}
			}
			break;
	}
}

void func_135()//Position - 0x597D
{
	if (!iLocal_80)
	{
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 12f, 12f, 5f, false, true, 0))
			{
				TASK::CLEAR_PED_TASKS(iLocal_54);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 18000, 0, 2);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_54, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 15000, 0, 2);
				iLocal_80 = 1;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), 12f, 12f, 5f, false, true, 0))
		{
			if (!bLocal_97)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::CLEAR_PED_TASKS(iLocal_54);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_54, iLocal_77);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
					bLocal_97 = true;
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iLocal_54);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_54, iLocal_77);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
					bLocal_97 = true;
				}
			}
			if (bLocal_97)
			{
				if (bLocal_50)
				{
					__LIB_0__::func_638();
					SYSTEM::WAIT(0);
					if (!PED::IS_PED_INJURED(iLocal_54))
					{
						if (!__LIB_0__::func_75())
						{
							if (PED::IS_PED_FACING_PED(iLocal_54, PLAYER::PLAYER_PED_ID(), 90f))
							{
								if (__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_LFT2", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_47 = 7;
								}
							}
						}
					}
				}
				else if (!__LIB_0__::func_75())
				{
					if (__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_LFT", 4, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_47 = 7;
					}
				}
			}
		}
	}
}

void func_136()//Position - 0x5B20
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 15f, 15f, 15f, false, true, 0))
		{
			if (__LIB_0__::func_568())
			{
				__LIB_0__::func_620(0);
				iLocal_72 = 0;
			}
		}
		else if (__LIB_0__::func_75() && !iLocal_72)
		{
			__LIB_0__::func_620(1);
			iLocal_72 = 1;
		}
	}
}

void func_138()//Position - 0x5B90
{
	switch (iLocal_60)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_54) && !PED::IS_PED_INJURED(iLocal_53))
			{
				if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), 3f))
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_ARMA", 4, 0, 0, 0))
						{
							TASK::TASK_PLAY_ANIM(iLocal_54, "random@domestic", "balcony_fight_male", 2f, -2f, -1, 0, 0.3f, false, false, false);
							TASK::TASK_PLAY_ANIM(iLocal_53, "random@domestic", "balcony_fight_female", 2f, -2f, -1, 0, 0.3f, false, false, false);
							iLocal_60++;
						}
					}
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_53) && ENTITY::DOES_ENTITY_EXIST(iLocal_91[8]))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_91[8], iLocal_53, PED::GET_PED_BONE_INDEX(iLocal_53, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
				iLocal_60++;
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_53) && ENTITY::DOES_ENTITY_EXIST(iLocal_91[8]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_53, "random@domestic", "balcony_fight_female") > 0.335f)
					{
						ENTITY::DETACH_ENTITY(iLocal_91[8], false, true);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_91[8], 1, 0f, 6f, 4f, 0f, 0f, 0f, 0, false, false, true, false, true);
						iLocal_60++;
					}
				}
			}
			break;
		case 3:
			if (!iLocal_70 && ENTITY::DOES_ENTITY_EXIST(iLocal_91[8]))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_91[8]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CLOTHES_THROWN", iLocal_91[8], "RE_DOMESTIC_SOUNDSET", false, 0);
					iLocal_70 = 1;
				}
			}
			if (!__LIB_0__::func_75() || __LIB_0__::func_568())
			{
				__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_ARFA", 4, 0, 0, 0);
				iLocal_70 = 0;
				iLocal_60++;
			}
			break;
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_53) && ENTITY::DOES_ENTITY_EXIST(iLocal_91[9]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_53, "random@domestic", "balcony_fight_female") > 0.473f)
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_91[9], iLocal_53, PED::GET_PED_BONE_INDEX(iLocal_53, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
						iLocal_60++;
					}
				}
			}
			break;
		case 5:
			if (!__LIB_0__::func_75() || __LIB_0__::func_568())
			{
				__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_ARMB", 4, 0, 0, 0);
				iLocal_60++;
			}
			break;
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_53) && ENTITY::DOES_ENTITY_EXIST(iLocal_91[9]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_53, "random@domestic", "balcony_fight_female") > 0.55f)
					{
						ENTITY::DETACH_ENTITY(iLocal_91[9], false, true);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_91[9], 1, 1f, 2f, 3f, 0f, 0f, 0f, 0, false, false, true, false, true);
						iLocal_60++;
					}
				}
			}
			break;
		case 7:
			if (!iLocal_70 && ENTITY::DOES_ENTITY_EXIST(iLocal_91[9]))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_91[9]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CLOTHES_THROWN", iLocal_91[9], "RE_DOMESTIC_SOUNDSET", false, 0);
					iLocal_70 = 1;
				}
			}
			if (!__LIB_0__::func_75() || __LIB_0__::func_568())
			{
				__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_ARFB", 4, 0, 0, 0);
				iLocal_70 = 0;
				iLocal_60++;
			}
			break;
		case 8:
			if (!PED::IS_PED_INJURED(iLocal_53) && ENTITY::DOES_ENTITY_EXIST(iLocal_91[10]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_53, "random@domestic", "balcony_fight_female") > 0.705f)
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_91[10], iLocal_53, PED::GET_PED_BONE_INDEX(iLocal_53, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
						iLocal_60++;
					}
				}
			}
			break;
		case 9:
			if (!PED::IS_PED_INJURED(iLocal_53) && ENTITY::DOES_ENTITY_EXIST(iLocal_91[10]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_53, "random@domestic", "balcony_fight_female") > 0.838f)
					{
						ENTITY::DETACH_ENTITY(iLocal_91[10], false, true);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_91[10], 1, 1f, 3f, 3f, 0f, 0f, 0f, 0, false, false, true, false, true);
						iLocal_60++;
					}
				}
			}
			break;
		case 10:
			if (!iLocal_70 && ENTITY::DOES_ENTITY_EXIST(iLocal_91[10]))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_91[10]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CLOTHES_THROWN", iLocal_91[10], "RE_DOMESTIC_SOUNDSET", false, 0);
					iLocal_70 = 1;
				}
			}
			if (!__LIB_0__::func_75() || __LIB_0__::func_568())
			{
				__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_ARMC", 4, 0, 0, 0);
				iLocal_70 = 0;
				iLocal_60++;
			}
			break;
		case 11:
			if (!PED::IS_PED_INJURED(iLocal_53) && !PED::IS_PED_INJURED(iLocal_54))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_53, "random@domestic", "balcony_fight_female") > 0.94f)
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_53, iLocal_54, 0);
					}
				}
			}
			if (!__LIB_0__::func_75() || __LIB_0__::func_568())
			{
				__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_ARFC", 4, 0, 0, 0);
				iLocal_60 = 14;
			}
			break;
		case 14:
			if (!__LIB_0__::func_75())
			{
				if (__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_ARFF", 4, 0, 0, 0))
				{
					func_139();
					iLocal_60++;
				}
			}
			break;
		case 15:
			if (!__LIB_0__::func_75())
			{
				if (__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_ARMI", 4, 0, 0, 0))
				{
					iLocal_60++;
				}
			}
			break;
		case 16:
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_87, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_54, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				iLocal_60++;
			}
			break;
		case 17:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_53, Local_87, 1f, 1f, 5f, false, true, 0) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_53))
					{
						PED::DELETE_PED(&iLocal_53);
					}
				}
			}
			if (iLocal_75 < MISC::GET_GAME_TIMER())
			{
				if (!__LIB_0__::func_75())
				{
					if (__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_INS1", 4, 0, 0, 0))
					{
						iLocal_75 = MISC::GET_GAME_TIMER() + 5000;
						iLocal_76++;
					}
				}
			}
			if (iLocal_76 > 0)
			{
				iLocal_60++;
			}
			break;
		case 18:
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				if (!__LIB_0__::func_75())
				{
					if (__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
					{
						TASK::TASK_WANDER_STANDARD(iLocal_54, 40000f, 0);
						iLocal_60++;
					}
				}
			}
			break;
	}
	if (!bLocal_50)
	{
		if (iLocal_60 > 2 && iLocal_60 < 8)
		{
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 6f, 4f, 5f, false, true, 0) || (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 12f, 12f, 5f, false, true, 2) && PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID())))
				{
					TASK::CLEAR_PED_TASKS(iLocal_54);
					func_139();
					if (iLocal_60 > 18)
					{
						iLocal_47 = 3;
					}
					else
					{
						__LIB_0__::func_638();
						while (__LIB_0__::func_75())
						{
							SYSTEM::WAIT(0);
						}
						if (__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
						{
							bLocal_50 = true;
							iLocal_47 = 3;
						}
					}
				}
			}
		}
		else if (iLocal_60 > 7)
		{
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 6f, 8f, 5f, false, true, 0))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_84[0]))
					{
						HUD::SHOW_HEIGHT_ON_BLIP(uLocal_84[0], true);
					}
					TASK::CLEAR_PED_TASKS(iLocal_54);
					func_139();
					if (iLocal_60 > 18)
					{
						iLocal_47 = 3;
					}
					else
					{
						__LIB_0__::func_429();
						while (__LIB_0__::func_75())
						{
							SYSTEM::WAIT(0);
						}
						if (__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
						{
							bLocal_50 = true;
							iLocal_47 = 3;
						}
					}
				}
			}
		}
	}
	if (bLocal_52)
	{
		if (iLocal_51 < MISC::GET_GAME_TIMER())
		{
			__LIB_0__::func_638();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
			{
				func_139();
			}
			iLocal_47 = 3;
		}
	}
}

void func_139()//Position - 0x634C
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_87, 1f, -1, 40000f, 0.5f);
		TASK::TASK_PLAY_ANIM(0, "random@domestic", "f_attack_end", 2f, -2f, -1, 1, 0f, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_77);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
		PED::SET_PED_KEEP_TASK(iLocal_53, true);
		iVar0 = 0;
		while (iVar0 < iLocal_91)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[iVar0]))
			{
				ENTITY::DETACH_ENTITY(iLocal_91[iVar0], true, true);
			}
			iVar0++;
		}
	}
}

void func_149()//Position - 0x6917
{
	if (HUD::DOES_BLIP_EXIST(iLocal_85))
	{
		HUD::REMOVE_BLIP(&iLocal_85);
	}
	if (!HUD::DOES_BLIP_EXIST(uLocal_84[0]))
	{
		uLocal_84[0] = __LIB_0__::func_666(iLocal_54, 0, 145);
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_84[0], false);
	}
}

void func_150()//Position - 0x6953
{
	__LIB_13__::func_824(39, 1);
	__LIB_13__::func_824(40, 1);
	__LIB_13__::func_824(41, 1);
	__LIB_13__::func_824(42, 1);
	__LIB_13__::func_824(43, 1);
	__LIB_13__::func_824(44, 1);
	MISC::CLEAR_AREA(Local_57, 2f, true, false, false, false);
	MISC::CLEAR_AREA(Local_56, 2f, true, false, false, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_57 - Vector(10f, 10f, 10f), Local_57 + Vector(10f, 10f, 10f), false, true);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, false, false, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_57 - Vector(10f, 10f, 10f), Local_57 + Vector(10f, 10f, 10f), false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_88 - Vector(3f, 2f, 2f), Local_88 + Vector(3f, 2f, 2f), false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(53.1038f, 56.6649f, -1366.4806f) - Vector(1f, 1f, 1f), Vector(53.1038f, 56.6649f, -1366.4806f) + Vector(1f, 1f, 1f), false, true, true, true);
	PED::ADD_RELATIONSHIP_GROUP("rghDomestic", &iLocal_111);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_111, joaat("PLAYER"));
	iLocal_53 = PED::CREATE_PED(26, iLocal_78, Local_56, fLocal_58, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 17, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 8, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_53, 1, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_53, 2, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_53, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_53, 8, false);
	TASK::TASK_PLAY_ANIM(iLocal_53, "random@domestic", "balcony_fight_idle_female", 8f, -4f, -1, 1, 0f, false, false, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_53, iLocal_111);
	__LIB_0__::func_640(iLocal_53, "GENERIC_WHATEVER", 24);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_78);
	PED::SET_PED_CONFIG_FLAG(iLocal_53, 185, true);
	iLocal_54 = PED::CREATE_PED(26, iLocal_79, Local_57, fLocal_59, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_54, 1, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_54, 2, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_54, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_54, 8, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_54, 65536, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_54, 185, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_54, 206, true);
	PED::SET_PED_HELMET(iLocal_54, false);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_54, false);
	TASK::TASK_PLAY_ANIM(iLocal_54, "random@domestic", "balcony_fight_idle_male", 8f, -4f, -1, 1, 0f, false, false, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_54, iLocal_111);
	__LIB_0__::func_640(iLocal_54, "GENERIC_WHATEVER", 24);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_79);
	TASK::TASK_LOOK_AT_ENTITY(iLocal_54, iLocal_53, -1, 0, 2);
	TASK::TASK_LOOK_AT_ENTITY(iLocal_53, iLocal_54, -1, 0, 2);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 2, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 3, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 4, 1, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 2, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 3, 1, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 4, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_54, 8, 0, 0, 0);
	func_152();
	MISC::SET_BIT(&uLocal_93, 5);
	if (__LIB_0__::func_683() == 0)
	{
		__LIB_0__::func_222(&uLocal_114, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	if (__LIB_0__::func_683() == 1)
	{
		__LIB_0__::func_222(&uLocal_114, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	if (__LIB_0__::func_683() == 2)
	{
		__LIB_0__::func_222(&uLocal_114, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	__LIB_0__::func_222(&uLocal_114, 3, iLocal_54, "REDOCastro", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_54, sLocal_112);
	__LIB_0__::func_222(&uLocal_114, 4, iLocal_53, "NATHALIA", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_53, sLocal_113);
	SYSTEM::SETTIMERA(0);
	iLocal_109 = 1;
}

void func_152()//Position - 0x6D49
{
	iLocal_91[0] = OBJECT::CREATE_OBJECT(joaat("prop_ld_tshirt_02"), -470.3661f, 541.385f, 120.0205f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_91[0], -13.7262f, 0.5001f, -0.5886f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_91[0], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_tshirt_02"));
	iLocal_91[1] = OBJECT::CREATE_OBJECT(joaat("prop_ld_jeans_02"), -470.8998f, 540.7595f, 120.169f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_91[1], -7.3906f, -12.8136f, -63.733f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_91[1], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_jeans_02"));
	iLocal_91[2] = OBJECT::CREATE_OBJECT(joaat("prop_ld_shoe_01"), -468.3266f, 540.7725f, 120.1762f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_91[2], -7.041683f, 10.172982f, 45.761696f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_91[2], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_shoe_01"));
	iLocal_91[3] = OBJECT::CREATE_OBJECT(joaat("prop_ld_jeans_01"), -468.7787f, 541.864f, 119.9098f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_91[3], -8.5884f, 12.6893f, 57.1792f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_91[3], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_jeans_01"));
	iLocal_91[4] = OBJECT::CREATE_OBJECT(joaat("prop_ld_shoe_02"), -470.9009f, 541.2538f, 120.0578f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_91[4], -16.4886f, 2.4979f, -3.8769f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_91[4], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_shoe_02"));
	iLocal_91[5] = OBJECT::CREATE_OBJECT(joaat("prop_ld_shirt_01"), -472.0366f, 542.0591f, 119.8243f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_91[5], -3.5946f, -15.0978f, -75.5026f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_91[5], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_shirt_01"));
	iLocal_91[6] = OBJECT::CREATE_OBJECT(joaat("prop_porn_mag_03"), -472.75427f, 542.30225f, 119.76284f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_91[6], 6.402527f, -15.686654f, -104.13083f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_91[6], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_porn_mag_03"));
	iLocal_91[7] = OBJECT::CREATE_OBJECT(joaat("prop_porn_mag_01"), -471.8675f, 543.6655f, 119.4991f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_91[7], -8.3642f, 1.9344f, 2.6889f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_91[7], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_porn_mag_01"));
	iLocal_91[8] = OBJECT::CREATE_OBJECT(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, true, true, false);
	iLocal_91[9] = OBJECT::CREATE_OBJECT(joaat("prop_cs_rub_binbag_01"), -473.195f, 537.2585f, 123.3303f, true, true, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_rub_binbag_01"));
	iLocal_91[10] = OBJECT::CREATE_OBJECT(joaat("prop_golf_bag_01"), -473.4f, 536.8035f, 123.2482f, true, true, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_golf_bag_01"));
}

void func_156()//Position - 0x70B5
{
	if (!PED::IS_PED_INJURED(iLocal_54) && !PED::IS_PED_INJURED(iLocal_53))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PED::CAN_PED_SEE_HATED_PED(iLocal_54, PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_53, PLAYER::PLAYER_PED_ID()))
			{
				if (((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_54) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_54)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_53)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_53))
				{
					if (iLocal_94 == -1)
					{
						iLocal_94 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					iLocal_94 = -1;
				}
			}
			if ((iLocal_94 != -1 && MISC::GET_GAME_TIMER() > iLocal_94 + 500) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_163();
			}
		}
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		func_163();
	}
	if (iLocal_47 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			if (func_162(iLocal_54))
			{
				func_161();
			}
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -471.1757f, 535.356f, 124.8557f, 3f, 2.5f, 1.5f, false, true, 0))
	{
		func_160();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
	{
		if (func_159(iLocal_53))
		{
			func_157();
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		if (func_159(iLocal_54) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), true))
		{
			func_157();
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
	{
		if (func_159(iLocal_53) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), true))
		{
			func_157();
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54, 250f, 250f, 250f, false, true, 0) || ENTITY::IS_ENTITY_IN_WATER(iLocal_54))
		{
			iLocal_47 = 11;
		}
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		func_157();
	}
}

void func_157()//Position - 0x7278
{
	__LIB_0__::func_429();
	SYSTEM::WAIT(0);
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
	}
	else
	{
		__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		TASK::CLEAR_PED_TASKS(iLocal_54);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_54, iLocal_77);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
		PED::SET_PED_KEEP_TASK(iLocal_54, true);
		SYSTEM::WAIT(3000);
	}
	func_158();
	SYSTEM::WAIT(0);
	func_51();
	iLocal_47 = 11;
}

void func_158()//Position - 0x7315
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		TASK::TASK_COWER(iLocal_53, -1);
		PED::SET_PED_KEEP_TASK(iLocal_53, true);
		iVar0 = 0;
		while (iVar0 < iLocal_91)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[iVar0]))
			{
				ENTITY::DETACH_ENTITY(iLocal_91[iVar0], true, true);
			}
			iVar0++;
		}
	}
}

int func_159(int iParam0)//Position - 0x7361
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_160()//Position - 0x738F
{
	func_158();
	__LIB_0__::func_429();
	SYSTEM::WAIT(0);
	__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		TASK::CLEAR_PED_TASKS(iLocal_54);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_54, iLocal_77);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
		PED::SET_PED_KEEP_TASK(iLocal_54, true);
		SYSTEM::WAIT(3000);
	}
	func_51();
	iLocal_47 = 11;
}

void func_161()//Position - 0x7407
{
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		TASK::CLEAR_PED_TASKS(iLocal_54);
		TASK::TASK_SMART_FLEE_COORD(iLocal_54, ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true), 150f, -1, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_54, true);
	}
	iLocal_47 = 11;
}

int func_162(int iParam0)//Position - 0x7446
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 1.5f, 1.5f, 8f, false, true, 2))
		{
			if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 4f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_163()//Position - 0x749B
{
	__LIB_0__::func_429();
	SYSTEM::WAIT(0);
	__LIB_2__::func_859(&uLocal_114, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	if (!PED::IS_PED_INJURED(iLocal_54))
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4096);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_54, iLocal_77);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
		PED::SET_PED_KEEP_TASK(iLocal_54, true);
		SYSTEM::WAIT(3000);
	}
	func_51();
	iLocal_47 = 11;
}

void func_164()//Position - 0x7512
{
	STREAMING::REQUEST_MODEL(iLocal_78);
	STREAMING::REQUEST_MODEL(iLocal_79);
	STREAMING::REQUEST_MODEL(joaat("prop_golf_iron_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_cs_rub_binbag_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_golf_bag_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_tshirt_02"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_jeans_02"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_shoe_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_jeans_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_shoe_02"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_shirt_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_porn_mag_03"));
	STREAMING::REQUEST_MODEL(joaat("prop_porn_mag_01"));
	STREAMING::REQUEST_ANIM_DICT("random@domestic");
	STREAMING::REQUEST_ANIM_DICT("random@security_van");
	if ((((((((((((((STREAMING::HAS_MODEL_LOADED(iLocal_78) && STREAMING::HAS_MODEL_LOADED(iLocal_79)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_golf_iron_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_rub_binbag_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_golf_bag_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_tshirt_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_jeans_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_shoe_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_jeans_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_shoe_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_shirt_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_porn_mag_03"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_porn_mag_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@domestic")) && STREAMING::HAS_ANIM_DICT_LOADED("random@security_van"))
	{
		bLocal_48 = true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_78);
		STREAMING::REQUEST_MODEL(iLocal_79);
		STREAMING::REQUEST_MODEL(joaat("prop_golf_iron_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_cs_rub_binbag_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_golf_bag_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_tshirt_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_jeans_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_shoe_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_jeans_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_shoe_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_shirt_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_porn_mag_03"));
		STREAMING::REQUEST_MODEL(joaat("prop_porn_mag_01"));
		STREAMING::REQUEST_ANIM_DICT("random@domestic");
		STREAMING::REQUEST_ANIM_DICT("random@security_van");
	}
}

void func_165()//Position - 0x76E3
{
	Local_86 = { -470.4934f, 540.0073f, 120.3715f };
	iLocal_78 = joaat("A_F_Y_Business_02");
	iLocal_79 = joaat("A_M_Y_Golfer_01");
	sLocal_112 = "REDOCastro";
	sLocal_113 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
	Local_56 = { -472.6554f, 536.469f, 123.3555f };
	fLocal_58 = 348.9152f;
	Local_57 = { -470.1328f, 542.9949f, 119.6873f };
	fLocal_59 = 156.0666f;
	Local_87 = { -469.082f, 535.0479f, 123.3553f };
	Local_88 = { -1378.2733f, 40.2254f, 52.6774f };
	Local_89 = { -1368.1881f, 57.2309f, 52.7045f };
	bLocal_55 = true;
}

void func_226()//Position - 0xAACA
{
	int iVar0;
	if (iLocal_109 && !iLocal_108)
	{
		__LIB_14__::func_804(0);
		if (Global_32201)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		__LIB_39__::func_23();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_57 - Vector(10f, 10f, 10f), Local_57 + Vector(10f, 10f, 10f), true, true);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_111, joaat("PLAYER"));
		if (bLocal_55)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_78);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_79);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
		{
			if (!PED::IS_PED_INJURED(iLocal_53))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_53, 317, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, false);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_53);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_85))
		{
			HUD::REMOVE_BLIP(&iLocal_85);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_84[0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_84[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_54, 317, true);
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_54, false))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_54);
				}
				PED::REMOVE_PED_FROM_GROUP(iLocal_54);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, false);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_54, true);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_91)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[iVar0]))
			{
				ENTITY::DETACH_ENTITY(iLocal_91[iVar0], true, true);
			}
			iVar0++;
		}
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	}
	__LIB_39__::func_19(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

