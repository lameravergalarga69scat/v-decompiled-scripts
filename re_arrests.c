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
	struct<3> Local_44 = { 0, 0, 0 } ;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 16;
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
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	bool bLocal_242 = 0;
	bool bLocal_243 = 0;
	struct<3> Local_244 = { 0, 0, 0 } ;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	char* sLocal_248 = NULL;
	char* sLocal_249 = NULL;
	char* sLocal_250 = NULL;
	char* sLocal_251 = NULL;
	char* sLocal_252 = NULL;
	bool bLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	char* sLocal_257 = NULL;
	char* sLocal_258 = NULL;
	char* sLocal_259 = NULL;
	char* sLocal_260 = NULL;
	char* sLocal_261 = NULL;
	char* sLocal_262 = NULL;
	char* sLocal_263 = NULL;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	struct<3> Local_271 = { 0, 0, 0 } ;
	struct<3> Local_272 = { 0, 0, 0 } ;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	bool bLocal_276 = 0;
	bool bLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	bool bLocal_282 = 0;
	struct<3> Local_283 = { 0, 0, 0 } ;
	bool bLocal_284 = 0;
	struct<2> Local_285 = { 0, 5 } ;
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 5;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
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
	iLocal_238 = 8000;
	iLocal_241 = 8;
	iLocal_243 = 1;
	sLocal_249 = "S_M_Y_RANGER_01_WHITE_FULL_01";
	sLocal_250 = "RANDOM@ARRESTS";
	sLocal_251 = "RANDOM@ARRESTS@BUSTED";
	iLocal_255 = 1;
	Local_63 = { ScriptParam_285.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		bLocal_70 = true;
		func_207();
		func_177();
	}
	if (SYSTEM::VDIST(2411.32f, 4958.76f, 45.19f, Local_63) < 10f)
	{
		iLocal_51 = 1;
	}
	else
	{
		iLocal_51 = 2;
	}
	if (__LIB_39__::func_345(Local_63, 15, iLocal_51, 0, 0))
	{
		__LIB_39__::func_334(15);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		switch (iLocal_46)
		{
			case 0:
				if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && !__LIB_39__::func_350()) && !__LIB_39__::func_340())
				{
					if (func_112())
					{
						iLocal_46 = 1;
					}
				}
				else
				{
					func_177();
				}
				break;
			case 1:
				if (func_108())
				{
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(2551.0378f, 4708.6133f, 32.6775f, 2536.979f, 5022.1787f, 43.8519f, 300f, false, true, true);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					__LIB_39__::func_336(1);
					iLocal_46 = 2;
				}
				else if (!func_96(200f))
				{
					func_177();
				}
				break;
			case 2:
				if (func_96(1128792064))
				{
					func_1();
				}
				else
				{
					func_177();
				}
				break;
		}
	}
}

void func_1()//Position - 0x1D2
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	float fVar4;
	MISC::SET_BIT(&uVar0, 3);
	MISC::SET_BIT(&uVar0, 4);
	iVar3 = 0;
	func_95();
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		PED::SET_PED_RESET_FLAG(iLocal_53, 129, true);
	}
	if (__LIB_0__::func_121(iLocal_53))
	{
		if (PED::IS_PED_BEING_STUNNED(iLocal_53, 0))
		{
			bLocal_284 = true;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_52) && (iLocal_47 != 2 && iLocal_47 != 1))
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			switch (iLocal_50)
			{
				case 0:
					GRAPHICS::DRAW_DEBUG_TEXT_2D("copChasesCriminal", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					if (SYSTEM::TIMERA() > 10)
					{
						if (!bLocal_68)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 7)
							{
								TASK::TASK_GO_TO_ENTITY(iLocal_52, iLocal_53, -1, 1f, 3f, 2f, 0);
							}
						}
					}
					if (SYSTEM::TIMERA() > 4000)
					{
						if (!bLocal_68)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("SCRIPT_TASK_SMART_FLEE_PED")) == 7)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("SCRIPT_TASK_PLAY_ANIM")) == 1)
								{
									TASK::STOP_ANIM_PLAYBACK(iLocal_53, 2, true);
								}
								TASK::TASK_SMART_FLEE_PED(iLocal_53, iLocal_52, 150f, -1, false, false);
							}
						}
					}
					fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_52, true), ENTITY::GET_ENTITY_COORDS(iLocal_53, true), true);
					if (SYSTEM::TIMERA() > 8000 || fVar2 < 1.5f)
					{
						iVar3 = func_90();
						if (iVar3 == 1)
						{
							TASK::TASK_GO_TO_ENTITY(iLocal_52, iLocal_53, -1, 1f, 0.01f, 2f, 0);
						}
					}
					if (SYSTEM::TIMERA() > 30000 && fVar2 < 10f)
					{
						iVar3 = 1;
					}
					if (SYSTEM::TIMERA() > 2000)
					{
						if (iVar3 || iLocal_270 == 1)
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_PCUFF", 4, iLocal_246, 0, 0))
								{
								}
								bLocal_282 = (PED::IS_PED_RAGDOLL(iLocal_53) || TASK::IS_PED_GETTING_UP(iLocal_53));
								if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_52, joaat("WEAPON_PISTOL"), false))
								{
									WEAPON::GIVE_WEAPON_TO_PED(iLocal_52, joaat("WEAPON_PISTOL"), -1, false, true);
								}
								WEAPON::SET_CURRENT_PED_WEAPON(iLocal_52, joaat("WEAPON_PISTOL"), true);
								Local_64 = { ENTITY::GET_ENTITY_COORDS(iLocal_53, true) };
								TASK::CLEAR_PED_TASKS(iLocal_52);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
								if (!bLocal_282 && fVar2 > 2f)
								{
									TASK::TASK_SHOOT_AT_COORD(0, Local_64.f_0, Local_64.f_1, (Local_64.f_2 + 4f), 1000, joaat("FIRING_PATTERN_SINGLE_SHOT"));
								}
								TASK::TASK_LOOK_AT_ENTITY(0, iLocal_53, -1, 2048, 2);
								TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, iLocal_53, iLocal_53, 1f, false, 3f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
								TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_53, 5000, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_52);
								PED::SET_PED_KEEP_TASK(iLocal_52, true);
								SYSTEM::SETTIMERA(0);
								iLocal_240 = MISC::GET_GAME_TIMER();
								if (bLocal_282)
								{
									TASK::CLEAR_PED_TASKS(iLocal_53);
									WEAPON::SET_PED_DROPS_WEAPON(iLocal_53);
									iLocal_50 = 4;
								}
								else
								{
									iLocal_50 = 2;
								}
							}
							else if (!iLocal_270)
							{
								TASK::TASK_GO_TO_ENTITY(iLocal_52, iLocal_53, -1, 1f, 0.01f, 2f, 0);
								iLocal_270 = 1;
							}
						}
						else
						{
							func_73();
						}
					}
					else
					{
						GRAPHICS::DRAW_DEBUG_TEXT_2D("copChasesCriminal TIMERA() < 2000", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!PED::IS_PED_INJURED(iLocal_52) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_52))
							{
								TASK::CLEAR_PED_TASKS(iLocal_52);
								iLocal_50 = 1;
								TASK::TASK_STAND_STILL(iLocal_52, 500);
							}
						}
					}
					break;
				case 1:
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, joaat("SCRIPT_TASK_STAND_STILL")) == 7)
					{
						TASK::TASK_GO_TO_ENTITY(iLocal_52, iLocal_53, -1, 1f, 3f, 2f, 0);
						iLocal_50 = 0;
					}
					break;
				case 2:
					if ((MISC::GET_GAME_TIMER() - iLocal_240) > 1000)
					{
						Var1 = { 0f, 0f, (ENTITY::GET_ENTITY_HEADING(iLocal_53) * 3f) };
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_53, Var1, 2f, -1, 1f, 1024, 40000f);
						iLocal_50 = 3;
					}
					break;
				case 3:
					if ((MISC::GET_GAME_TIMER() - iLocal_240) > 4500)
					{
						iLocal_50 = 4;
					}
					break;
				case 4:
					bLocal_68 = true;
					TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
					TASK::TASK_PLAY_ANIM(0, sLocal_250, "idle_2_hands_up", 2f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_250, "kneeling_arrest_idle", 8f, -8f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_53);
					PED::SET_PED_KEEP_TASK(iLocal_53, true);
					WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_53, true);
					iLocal_50 = 5;
					break;
				case 5:
					if (iLocal_48 == 3)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
						{
							TASK::CLEAR_PED_TASKS(iLocal_52);
							if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_52, joaat("WEAPON_PISTOL"), false))
							{
								WEAPON::GIVE_WEAPON_TO_PED(iLocal_52, joaat("WEAPON_PISTOL"), -1, false, true);
							}
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_52, joaat("WEAPON_PISTOL"), true);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_53, -1, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
							PED::SET_PED_KEEP_TASK(iLocal_52, true);
							iLocal_50 = 6;
						}
					}
					break;
				case 6:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false) && !PED::IS_PED_INJURED(iLocal_54))
					{
						VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(iLocal_55, true);
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 7)
							{
								if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_53, iLocal_55, 2, false, false))
								{
									if (!PED::IS_PED_INJURED(iLocal_53))
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_53, iLocal_55))
										{
											if (!PED::IS_PED_IN_COMBAT(iLocal_53, 0))
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 7)
												{
													TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
													TASK::TASK_PLAY_ANIM(0, sLocal_250, "kneeling_arrest_get_up", 8f, -2f, -1, 0, 0f, false, false, false);
													TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
													TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
													PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_66, iLocal_65);
													PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_65, iLocal_66);
												}
											}
										}
									}
									if (!PED::IS_PED_INJURED(iLocal_52))
									{
										PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(iLocal_52);
										if (!PED::IS_PED_IN_COMBAT(iLocal_52, 0))
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
											{
												if (!__LIB_0__::func_75())
												{
													if (__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_INCAR", 4, iLocal_246, 0, 0))
													{
														if (__LIB_39__::func_330(iLocal_52, iLocal_55) == 2)
														{
															if (PED::IS_PED_FACING_PED(iLocal_54, iLocal_53, 180f))
															{
																Local_283 = { 2.978f, -0.75f, 1f };
															}
															else
															{
																Local_283 = { 2.978f, 0.75f, 1f };
															}
														}
														else if (PED::IS_PED_FACING_PED(iLocal_54, iLocal_53, 180f))
														{
															Local_283 = { -2.978f, -0.75f, 1f };
														}
														else
														{
															Local_283 = { -2.978f, 0.75f, 1f };
														}
														TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
														TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_55, Local_283), iLocal_53, 0.75f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 60000);
														TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_53, -1, false);
														TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
														TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
														TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
														PED::SET_PED_KEEP_TASK(iLocal_52, true);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_55, false);
														iLocal_238 = 8000;
														SYSTEM::SETTIMERB(0);
														iLocal_269 = MISC::GET_GAME_TIMER();
														iLocal_50 = 7;
													}
												}
											}
										}
									}
								}
								else
								{
									func_71();
								}
							}
						}
					}
					break;
				case 7:
					if (!PED::IS_PED_INJURED(iLocal_52))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 35f, 35f, 35f, false, true, 0))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_269) > 8000)
							{
								if (!__LIB_0__::func_75())
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), 6000, 2048, 2);
									__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_PLEAVE", 4, iLocal_246, 0, 0);
									iLocal_238 = 8000;
									iLocal_269 = MISC::GET_GAME_TIMER();
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
						{
							if (iLocal_62)
							{
								if (__LIB_39__::func_330(iLocal_52, iLocal_55) == 2)
								{
									TASK::TASK_ENTER_VEHICLE(iLocal_53, iLocal_55, -1, 2, 1f, 1, 0);
								}
								else
								{
									TASK::TASK_ENTER_VEHICLE(iLocal_53, iLocal_55, -1, 1, 1f, 1, 0);
								}
								iLocal_50 = 8;
							}
							else if (iLocal_61)
							{
								fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), ENTITY::GET_ENTITY_COORDS(iLocal_55, true), true);
								if (fVar4 < 4f && iLocal_273 == 0)
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(iLocal_53, iLocal_55, 60000, 0.5f, Local_283.f_0, Local_283.f_1, 1f, 1);
									iLocal_273 = 1;
								}
								else if (fVar4 < 3f)
								{
									TASK::CLEAR_PED_TASKS(iLocal_53);
									iLocal_62 = 1;
								}
							}
							else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_250, "kneeling_arrest_get_up", 3))
							{
								if (__LIB_39__::func_330(iLocal_52, iLocal_55) == 2)
								{
									Local_283 = { 1.578f, -0.5f, 1f };
								}
								else
								{
									Local_283 = { -1.578f, -0.5f, 1f };
								}
								TASK::TASK_GOTO_ENTITY_OFFSET_XY(iLocal_53, iLocal_55, 60000, 0.5f, Local_283.f_0, Local_283.f_1, 1f, 1);
								if (bLocal_284)
								{
									PED::SET_PED_MOVEMENT_CLIPSET(iLocal_53, "MOVE_M@BAIL_BOND_TAZERED", 0.25f);
								}
								else
								{
									PED::SET_PED_MOVEMENT_CLIPSET(iLocal_53, "MOVE_M@BAIL_BOND_NOT_TAZERED", 0.25f);
								}
								iLocal_61 = 1;
							}
						}
					}
					break;
				case 8:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
					{
						if (!PED::IS_PED_INJURED(iLocal_54))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_53, iLocal_55))
							{
								if (HUD::DOES_BLIP_EXIST(iLocal_56))
								{
									HUD::REMOVE_BLIP(&iLocal_56);
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_57))
								{
									HUD::REMOVE_BLIP(&iLocal_57);
								}
								if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_52, iLocal_55))
								{
									TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_54, iLocal_55, 10f, 786603);
									PED::SET_PED_KEEP_TASK(iLocal_54, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52, false);
									func_177();
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 7)
								{
									TASK::CLEAR_PED_TASKS(iLocal_52);
									TASK::TASK_ENTER_VEHICLE(iLocal_52, iLocal_55, 20000, 0, 1f, 1, 0);
									PED::SET_PED_KEEP_TASK(iLocal_52, true);
								}
							}
						}
					}
					break;
				}
			}
	}
	func_57();
	if (PED::IS_PED_INJURED(iLocal_53))
	{
	}
	if (PED::IS_PED_INJURED(iLocal_52))
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (iLocal_47 == 2)
			{
				func_12();
			}
			else
			{
				if (iLocal_47 == 1 || iLocal_47 == 3)
				{
					if (!__LIB_0__::func_75())
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 20f)
						{
							__LIB_0__::func_787(&uLocal_72, "REARRAU", sLocal_266, 4, iLocal_246, 0, 0);
						}
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_250, "kneeling_arrest_idle", 3))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
					TASK::TASK_PLAY_ANIM(0, sLocal_250, "kneeling_arrest_get_up", 2f, -2f, -1, 0, 0f, false, false, false);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_53, true);
				}
				SYSTEM::WAIT(0);
				if (iLocal_47 == 0)
				{
					iLocal_47 = 2;
				}
				func_177();
			}
		}
	}
	if (PED::IS_PED_INJURED(iLocal_53))
	{
		if (!bLocal_59)
		{
			if (func_11())
			{
				func_3(0);
			}
		}
	}
	if (iLocal_50 == 5 || iLocal_50 == 6)
	{
		if (!bLocal_59)
		{
			if (iLocal_47 == 3)
			{
				if (func_11())
				{
					func_3(0);
				}
			}
			else
			{
				func_3(1);
			}
		}
	}
	func_2();
}

void func_2()//Position - 0xBEC
{
	int iVar0;
	struct<3> Var1;
	Var1 = { 40f, 40f, 20f };
	if (MISC::GET_GAME_TIMER() > iLocal_247 + 1000)
	{
		if (!PED::IS_PED_INJURED(iLocal_52))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), Var1, false, true, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), Var1, false, true, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			iLocal_246 = 1;
		}
		else
		{
			iLocal_246 = 0;
		}
		iLocal_247 = MISC::GET_GAME_TIMER();
	}
}

void func_3(bool bParam0)//Position - 0xC84
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if (bParam0)
	{
		sVar0 = "radio_enter";
		sVar1 = "radio_chatter";
		sVar2 = "radio_exit";
	}
	else
	{
		sVar0 = "generic_radio_enter";
		sVar1 = "generic_radio_chatter";
		sVar2 = "generic_radio_exit";
	}
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		switch (iLocal_48)
		{
			case 0:
				if ((iLocal_237 == 3 || iLocal_50 == 5) || iLocal_50 == 6)
				{
					if (!__LIB_0__::func_75())
					{
						TASK::CLEAR_PED_TASKS(iLocal_52);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
						TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_53, false), 10000, 0, 2);
						TASK::TASK_PLAY_ANIM(0, sLocal_250, sVar0, 8f, -4f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, sLocal_250, sVar1, 16f, -8f, -1, 1, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
						iLocal_48 = 1;
					}
				}
				break;
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_52, sLocal_250, sVar1, 3))
				{
					if (!PED::IS_PED_INJURED(iLocal_53))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_PRAD1", 4, iLocal_246, 0, 0))
							{
								iLocal_48 = 2;
							}
						}
					}
					else if (func_10())
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_PRAD2", 4, iLocal_246, 0, 0))
							{
								iLocal_48 = 2;
							}
						}
					}
				}
				break;
			case 2:
				if (!__LIB_0__::func_75())
				{
					if (func_10())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
						{
							VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_55, false);
							VEHICLE::SET_VEHICLE_SIREN(iLocal_55, true);
						}
						TASK::CLEAR_PED_TASKS(iLocal_52);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
						TASK::TASK_PLAY_ANIM(0, sLocal_250, sVar2, 8f, -1.5f, -1, 0, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_52, false, false);
						func_8();
						iLocal_48 = 3;
					}
				}
				break;
			case 3:
				if (!bLocal_68)
				{
					func_7();
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_53) || !ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53))
					{
						if (!__LIB_0__::func_75())
						{
							__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_PWTF", 4, iLocal_246, 0, 0);
						}
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 35f, 35f, 35f, false, true, 0))
				{
					PED::SET_IK_TARGET(iLocal_52, 1, PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f, 0, -1, -1);
					PED::SET_IK_TARGET(PLAYER::PLAYER_PED_ID(), 1, iLocal_52, 31086, 0f, 0f, 0f, 0, -1, -1);
					if (SYSTEM::TIMERB() > iLocal_238 || iLocal_254)
					{
						if (iLocal_47 == 3 || iLocal_47 == 0)
						{
							if (!PED::IS_PED_INJURED(iLocal_53))
							{
								if (iLocal_238 == 8000 || iLocal_254)
								{
									if (bLocal_253)
									{
										func_6();
									}
									else
									{
										func_4();
									}
								}
								else if (!__LIB_0__::func_75())
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), 500, 2048, 2);
									__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_PLEAVE", 4, iLocal_246, 0, 0);
									iLocal_238 = 8000;
								}
							}
							else if (iLocal_238 == 8000)
							{
								if (!__LIB_0__::func_75())
								{
									__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_PRA2", 4, iLocal_246, 0, 0);
									iLocal_238 = 20000;
								}
							}
							else if (!__LIB_0__::func_75())
							{
								__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_PRA2", 4, iLocal_246, 0, 0);
								iLocal_238 = 8000;
							}
							SYSTEM::SETTIMERB(0);
						}
						else
						{
							if (PED::IS_PED_INJURED(iLocal_53))
							{
								if (!__LIB_0__::func_75())
								{
									__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_PRA2", 4, iLocal_246, 0, 0);
									iLocal_238 = 30000;
								}
							}
							else if (!__LIB_0__::func_75())
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), 6000, 2048, 2);
								__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_PLEAVE", 4, iLocal_246, 0, 0);
								iLocal_238 = MISC::GET_RANDOM_INT_IN_RANGE(8, 22);
								iLocal_238 *= 30000;
							}
							SYSTEM::SETTIMERB(0);
						}
					}
				}
				if (iLocal_50 != 8)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
					{
						if (!PED::IS_PED_INJURED(iLocal_53))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_53, iLocal_55, false))
							{
								func_71();
							}
						}
					}
					else
					{
						func_71();
					}
				}
				break;
			}
	}
}

void func_4()//Position - 0x1054
{
	if (!iLocal_254)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
		{
			case 0:
				sLocal_252 = "idle_a";
				break;
			case 1:
				sLocal_252 = "idle_b";
				break;
			case 2:
				sLocal_252 = "idle_c";
				break;
		}
		TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
		TASK::TASK_PLAY_ANIM(0, sLocal_251, "enter", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_251, sLocal_252, 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_251, "exit", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_250, "kneeling_arrest_idle", 8f, -8f, -1, 9, 0f, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
		iLocal_254 = 1;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_251, "enter", 3))
	{
		if (func_5())
		{
			__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_PRAND", 4, iLocal_246, 0, 0);
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_251, "exit", 3))
	{
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_251, sLocal_252, 3))
	{
		__LIB_0__::func_787(&uLocal_72, "REARRAU", sLocal_264, 4, iLocal_246, 0, 0);
	}
	else
	{
		func_8();
	}
}

int func_5()//Position - 0x1199
{
	if (MISC::GET_GAME_TIMER() > iLocal_256 + 6000)
	{
		iLocal_256 = MISC::GET_GAME_TIMER();
		return 1;
	}
	return 0;
}

void func_6()//Position - 0x11BA
{
	if (!iLocal_254)
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
		TASK::TASK_PLAY_ANIM(0, sLocal_250, "radio_enter", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_250, "radio_chatter", 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_250, "radio_exit", 8f, -1.5f, -1, 0, 0f, false, false, false);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_53, -1, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
		iLocal_254 = 1;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_52, sLocal_250, "radio_chatter", 3))
	{
		if (func_5())
		{
			__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_PRAD3", 4, iLocal_246, 0, 0);
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_52, sLocal_250, "radio_exit", 3))
	{
		iLocal_255 = 0;
		func_8();
	}
}

void func_7()//Position - 0x128E
{
	switch (iLocal_49)
	{
		case 0:
			if (!bLocal_68)
			{
				if (iLocal_47 == 3)
				{
					iLocal_49 = 1;
				}
				else if (iLocal_47 == 0)
				{
					iLocal_49 = 1;
				}
				ENTITY::IS_ENTITY_DEAD(iLocal_52, false);
				ENTITY::IS_ENTITY_DEAD(iLocal_53, false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_52) && ENTITY::DOES_ENTITY_EXIST(iLocal_53))
				{
					TASK::TASK_GOTO_ENTITY_OFFSET_XY(iLocal_52, iLocal_53, -1, 3f, 0f, 0f, 1f, 0);
				}
				SYSTEM::SETTIMERB(0);
			}
			break;
		case 1:
			if (HUD::DOES_BLIP_EXIST(iLocal_56))
			{
				HUD::REMOVE_BLIP(&iLocal_56);
			}
			iLocal_49 = 2;
			iLocal_238 = 8000;
			iLocal_279 = MISC::GET_GAME_TIMER();
			break;
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_279) > 20000)
				{
					if (!PED::IS_PED_INJURED(iLocal_54))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_54, joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 7)
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_52, iLocal_55, -1, 0, 1f, 1, 0);
							iLocal_49 = 3;
						}
					}
				}
			}
			break;
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
			{
				if (!PED::IS_PED_INJURED(iLocal_54))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_52, iLocal_55))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_54, iLocal_55, 10f, 786603);
						PED::SET_PED_KEEP_TASK(iLocal_54, true);
						func_177();
					}
				}
			}
			break;
	}
}

void func_8()//Position - 0x13AD
{
	bLocal_253 = __LIB_0__::func_680();
	bLocal_253 = iLocal_255;
	iLocal_238 = 20000;
	iLocal_254 = 0;
}

int func_10()//Position - 0x13E9
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	int iVar4;
	iVar4 = joaat("pranger");
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar4);
	if (STREAMING::HAS_MODEL_LOADED(iVar4))
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 1, &Var0, 1, 3f, 0f))
		{
			if (VEHICLE::GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(&Var0, &Var2, &uVar3, 0f, 180f, 50f, 1, 1, 1))
			{
				iLocal_55 = VEHICLE::CREATE_VEHICLE(iVar4, Var2, 0f, true, true, false);
				iLocal_54 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_55, 6, joaat("S_M_Y_Ranger_01"), -1, true, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_54, 294, true);
				if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_54, joaat("WEAPON_PISTOL"), false))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_54, joaat("WEAPON_PISTOL"), -1, false, true);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_54, joaat("WEAPON_PISTOL"), true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_54, iLocal_65);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_55, 3);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_55, 5f);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_55, true);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_55, true);
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_55, true) };
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Var0 };
				ENTITY::SET_ENTITY_HEADING(iLocal_55, MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1));
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 1, &Var0, 1, 3f, 0f);
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, 2528.5625f, 2639.1147f, 36.9446f, true) < 75f)
				{
					Var0 = { 2473.6006f, 2496.7646f, 40.87f };
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(2538.7097f, 2592.0073f, 36.9446f, Var0, true) < 16f)
				{
					Var0 = { 2473.6006f, 2496.7646f, 40.87f };
				}
				TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_54, iLocal_55, Var0, 4, 7f, 786471, 5f, -1f, true);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_55, 4f);
				VEHICLE::SET_VEHICLE_SIREN(iLocal_55, true);
				iLocal_71 = 1;
				VEHICLE::SET_RANDOM_TRAINS(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_11()//Position - 0x15AB
{
	if (iLocal_47 != 3)
	{
		iLocal_237 = 3;
	}
	switch (iLocal_237)
	{
		case 0:
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 || MISC::GET_GAME_TIMER() > iLocal_240 + 15000)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 25f, 25f, 25f, false, true, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_52))
					{
						TASK::CLEAR_PED_TASKS(iLocal_52);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
						{
							TASK::TASK_GO_TO_ENTITY(0, iLocal_53, -1, 3.5f, 2f, 2f, 0);
						}
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
						iLocal_237 = 1;
					}
				}
				else
				{
					iLocal_237 = 3;
				}
			}
			break;
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
			{
				if (TASK::GET_SEQUENCE_PROGRESS(iLocal_52) > 0)
				{
					if (!__LIB_0__::func_75())
					{
						if (iLocal_239 < 2)
						{
							__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_PTHANK", 4, iLocal_246, 0, 0);
							if (HUD::DOES_BLIP_EXIST(iLocal_56))
							{
								HUD::SET_BLIP_AS_FRIENDLY(iLocal_56, true);
							}
						}
						else
						{
							__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_PHELP", 4, iLocal_246, 0, 0);
						}
						iLocal_237 = 2;
					}
				}
			}
			else if (!__LIB_0__::func_75())
			{
				if (iLocal_239 < 2)
				{
					__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_PTHANK", 4, iLocal_246, 0, 0);
					if (HUD::DOES_BLIP_EXIST(iLocal_56))
					{
						HUD::SET_BLIP_AS_FRIENDLY(iLocal_56, true);
					}
				}
				else
				{
					__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_PHELP", 4, iLocal_246, 0, 0);
				}
				iLocal_237 = 2;
			}
			break;
		case 2:
			if (!__LIB_0__::func_75())
			{
				iLocal_237 = 3;
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), 100);
			break;
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_12()//Position - 0x1750
{
	bool bVar0;
	bool bVar1;
	bVar0 = ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), true);
	bVar1 = func_56();
	if (bVar1)
	{
	}
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (!bVar0)
		{
			if (!bVar1)
			{
				if (iLocal_47 == 2 || bLocal_68 == 1)
				{
					switch (iLocal_241)
					{
						case 8:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 8", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							HUD::SET_BLIP_AS_FRIENDLY(iLocal_57, true);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, false) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_250, "kneeling_arrest_idle", 3))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
								TASK::TASK_PLAY_ANIM(0, sLocal_250, "kneeling_arrest_get_up", 8f, -8f, -1, 0, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
								iLocal_241 = 9;
							}
							else
							{
								iLocal_241 = 3;
							}
							break;
						case 9:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 9", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
							{
								iLocal_241 = 0;
							}
							break;
						case 0:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 0", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 75f, 75f, 75f, false, true, 0))
							{
								AUDIO::STOP_PED_SPEAKING(iLocal_53, true);
								iLocal_241 = 3;
							}
							break;
						case 1:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 1", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_53, ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 4f, 4f, 3f, false, true, 0))
							{
								iLocal_241 = 2;
							}
							else
							{
								TASK::CLEAR_PED_TASKS(iLocal_53);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
								TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 1000, 0, 2);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 2f, -1, 3f, 0, 40000f);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
								iLocal_241 = 2;
							}
							break;
						case 2:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 2", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_53, ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 4f, 4f, 3f, false, true, 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 || __LIB_0__::func_787(&uLocal_72, "REARRAU", sLocal_263, 4, iLocal_246, 0, 0))
								{
									iLocal_241 = 6;
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
								TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 1000, 0, 2);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_52, false), 2f, -1, 3f, 0, 40000f);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
							}
							break;
						case 3:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 3", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 5f, 5f, 3f, false, true, 0))
							{
								iLocal_241 = 4;
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 75f, 75f, 75f, false, true, 0))
							{
								if (!__LIB_0__::func_75())
								{
									TASK::CLEAR_PED_TASKS(iLocal_53);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
									TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 8f, 2f, 2f, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
									iLocal_241 = 4;
								}
							}
							else
							{
								iLocal_241 = 6;
							}
							break;
						case 4:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 4", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), 9f, 9f, 9f, false, true, 0))
							{
								iLocal_280 = MISC::GET_GAME_TIMER();
								iLocal_241 = 7;
							}
							break;
						case 7:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 7", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!PED::IS_PED_HEADTRACKING_PED(iLocal_53, PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), -1, 2064, 2);
							}
							if (!PED::IS_PED_FACING_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 30f))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), -1);
							}
							if ((MISC::GET_GAME_TIMER() - iLocal_280) > 2000)
							{
								iLocal_241 = 5;
							}
							break;
						case 5:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 5", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_250, "Thanks_Male_05", 3) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
							{
								if (!__LIB_0__::func_75())
								{
									if (iLocal_239 < 2)
									{
										__LIB_0__::func_787(&uLocal_72, "REARRAU", sLocal_258, 4, iLocal_246, 0, 0);
										TASK::TASK_PLAY_ANIM(iLocal_53, sLocal_250, "Thanks_Male_05", 16f, -16f, -1, 16, 0f, false, false, false);
									}
									else
									{
										__LIB_0__::func_787(&uLocal_72, "REARRAU", sLocal_262, 4, iLocal_246, 0, 0);
									}
									__LIB_14__::func_593(__LIB_0__::func_683(), 1, 250, 0, 0);
									TASK::TASK_CLEAR_LOOK_AT(iLocal_53);
									iLocal_241 = 6;
								}
							}
							break;
						case 6:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 6", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!__LIB_0__::func_75())
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
								func_177();
							}
							break;
						}
				}
			}
			else
			{
				if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_787(&uLocal_72, "REARRAU", sLocal_265, 4, iLocal_246, 0, 0);
				}
				TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
				func_177();
			}
		}
		else
		{
			__LIB_0__::func_638();
			TASK::TASK_SMART_FLEE_PED(iLocal_53, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
			if (bVar0 == 1)
			{
				iLocal_47 = 1;
			}
			if (!__LIB_0__::func_75())
			{
				__LIB_0__::func_787(&uLocal_72, "REARRAU", sLocal_262, 4, iLocal_246, 0, 0);
			}
			func_177();
		}
	}
}

int func_56()//Position - 0x325F
{
	float fVar0;
	int iVar1;
	int iVar2;
	fVar0 = 50f;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_55, iLocal_53, fVar0, fVar0, fVar0, false, true, 0))
		{
			return 1;
		}
	}
	iVar1 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_53, false), fVar0, fVar0, fVar0, -1);
	if (!PED::IS_PED_INJURED(iVar1))
	{
		if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("S_F_Y_Cop_01") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("S_M_Y_Cop_01"))
		{
			return 1;
		}
	}
	iVar1 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar0, fVar0, fVar0, -1);
	if (!PED::IS_PED_INJURED(iVar1))
	{
		if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("S_F_Y_Cop_01") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("S_M_Y_Cop_01"))
		{
			return 1;
		}
	}
	iVar2 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_53, false), fVar0, 0, 1024);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
	{
		return 1;
	}
	iVar2 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar0, 0, 1024);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
	{
		return 1;
	}
	return 0;
}

void func_57()//Position - 0x335D
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		bVar0 = ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53);
		bVar1 = ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), true);
		if (((bVar1 || func_70()) || func_68()) || bVar0)
		{
			func_67();
			if (bLocal_68)
			{
				if (((bVar0 || bVar1) && !PED::IS_PED_RAGDOLL(iLocal_53)) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_53, false))
				{
					TASK::CLEAR_PED_TASKS(iLocal_53);
					PED::SET_PED_TO_RAGDOLL(iLocal_53, 500, 2000, 0, false, false, false);
					TASK::TASK_COWER(iLocal_53, -1);
					PED::SET_PED_KEEP_TASK(iLocal_53, true);
				}
				else if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_53, false) && !PED::IS_PED_RAGDOLL(iLocal_53))
				{
					TASK::CLEAR_PED_TASKS(iLocal_53);
					TASK::TASK_COWER(iLocal_53, -1);
					PED::SET_PED_KEEP_TASK(iLocal_53, true);
				}
				func_63(0);
				if (!__LIB_0__::func_75())
				{
					if (!PED::IS_PED_INJURED(iLocal_52) && iLocal_274 == 0)
					{
						if (__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_PWTF", 4, iLocal_246, 0, 0))
						{
							iLocal_274 = 1;
						}
					}
				}
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 3;
			}
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_57))
		{
			HUD::REMOVE_BLIP(&iLocal_57);
			__LIB_0__::func_221(&uLocal_72, 2);
		}
		func_67();
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), true))
		{
			if (bLocal_68)
			{
				func_63(1);
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 3;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if (bLocal_59)
		{
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_177();
			}
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
		}
		iVar2 = 0;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), true) && ENTITY::GET_ENTITY_HEALTH(iLocal_54) < 190) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_54, PLAYER::PLAYER_PED_ID(), true) && PED::IS_PED_RAGDOLL(iLocal_54)))
				{
					iVar2 = 1;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_55) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), true))
				{
					iVar2 = 1;
				}
			}
			else
			{
				iVar2 = 1;
			}
		}
		if ((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), true) && ENTITY::GET_ENTITY_HEALTH(iLocal_52) < 190) || func_61()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || func_60()) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), true) && PED::IS_PED_RAGDOLL(iLocal_52))) || iVar2 == 1)
		{
			func_63(1);
			if (iLocal_47 == 3 || iLocal_47 == 1)
			{
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 2;
			}
		}
	}
	else
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), true))
		{
			if (iLocal_275 == 0)
			{
				iLocal_275 = 1;
				iLocal_278 = MISC::GET_GAME_TIMER();
			}
			if (iLocal_47 == 3 || iLocal_47 == 1)
			{
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 2;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_53);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_56))
		{
			HUD::REMOVE_BLIP(&iLocal_56);
			__LIB_0__::func_221(&uLocal_72, 1);
		}
	}
	if (iLocal_275)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_278) > 5000)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 3, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			iLocal_275 = 0;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_52) && !PED::IS_PED_INJURED(iLocal_53))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), true) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), true))
		{
			if (ENTITY::GET_ENTITY_HEALTH(iLocal_52) < 190 && ENTITY::GET_ENTITY_HEALTH(iLocal_53) < 190)
			{
				func_67();
				func_63(1);
				iLocal_47 = 1;
			}
		}
		if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, iLocal_52, 110f, 110f, 40f, false, true, 0))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 20f, 20f, 20f, false, true, 0))
			{
				__LIB_0__::func_325();
				SYSTEM::WAIT(0);
				__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_PORUN", 4, iLocal_246, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 40f, 40f, 40f, false, true, 0))
			{
				__LIB_0__::func_325();
				SYSTEM::WAIT(0);
				__LIB_0__::func_787(&uLocal_72, "REARRAU", sLocal_259, 4, iLocal_246, 0, 0);
			}
			func_177();
		}
	}
	if (PED::IS_PED_INJURED(iLocal_52) && PED::IS_PED_INJURED(iLocal_53))
	{
		func_177();
	}
	if (PED::IS_PED_INJURED(iLocal_53))
	{
		if (!PED::IS_PED_INJURED(iLocal_52))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 100f, 100f, 40f, false, true, 0))
			{
				func_177();
			}
		}
	}
}

bool func_60()//Position - 0x3807
{
	bool bVar0;
	bVar0 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == joaat("bulldozer"))
		{
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_52))
				{
					bVar0 = true;
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_55))
			{
				bVar0 = true;
			}
		}
		else if (iLocal_71)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), true))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_61()//Position - 0x3891
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	Var0 = { 3f, 3f, 3f };
	Var1 = { -3f, -3f, -3f };
	if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_52, 31086, 0f, 0f, 0f), 0.5f, true))
	{
		if (PED::IS_PED_INJURED(iLocal_53))
		{
			return 1;
		}
		else if (!MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_53, 31086, 0f, 0f, 0f), 2f, true))
		{
			return 1;
		}
	}
	if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_52, 31086, 0f, 0f, 0f), 3f))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 5f, 5f, 5f, false, true, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_52))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_52) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_52))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, true))
				{
					if (iVar2 != joaat("WEAPON_UNARMED"))
					{
						return 1;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_53) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_53))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, true))
				{
					if (iVar2 != joaat("WEAPON_UNARMED"))
					{
						if (bLocal_68)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	Var0 = { Var0 + PED::GET_PED_BONE_COORDS(iLocal_52, 31086, 0f, 0f, 0f) };
	Var1 = { Var1 + PED::GET_PED_BONE_COORDS(iLocal_52, 31086, 0f, 0f, 0f) };
	if (((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("WEAPON_SMOKEGRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("WEAPON_GRENADE"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("WEAPON_STICKYBOMB"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("VEHICLE_WEAPON_TANK"), true))
	{
		return 1;
	}
	return 0;
}

void func_63(int iParam0)//Position - 0x3A55
{
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_52);
		if (!bLocal_59)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_52, true);
			if (HUD::DOES_BLIP_EXIST(iLocal_56))
			{
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_56, false);
			}
			if (iParam0 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_53))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_53, joaat("SCRIPT_TASK_SMART_FLEE_PED")) == 7)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_250, "kneeling_arrest_idle", 3))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
							TASK::TASK_PLAY_ANIM(0, sLocal_250, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0f, false, false, false);
							TASK::TASK_SMART_FLEE_PED(0, iLocal_52, 150f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
							PED::FORCE_PED_MOTION_STATE(iLocal_53, joaat("MotionState_Run"), false, 0, false);
							PED::SET_PED_KEEP_TASK(iLocal_53, true);
						}
						else
						{
							TASK::CLEAR_PED_TASKS(iLocal_53);
							TASK::TASK_SMART_FLEE_PED(iLocal_53, iLocal_52, 150f, -1, false, false);
						}
					}
				}
				if ((!ENTITY::IS_ENTITY_DEAD(iLocal_53, false) && !PED::IS_PED_INJURED(iLocal_53)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 20f)
					{
						if (!__LIB_0__::func_75())
						{
							__LIB_0__::func_787(&uLocal_72, "REARRAU", sLocal_265, 4, iLocal_246, 0, 0);
						}
					}
				}
			}
			TASK::CLEAR_PED_TASKS(iLocal_52);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_52, iLocal_67);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
			PED::SET_PED_KEEP_TASK(iLocal_52, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_52, true, 0f);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_55, false))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_55, 1);
			}
			__LIB_0__::func_429();
			SYSTEM::WAIT(0);
			SYSTEM::WAIT(0);
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				if (!PED::IS_PED_RAGDOLL(iLocal_52))
				{
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
			{
				func_64();
			}
			bLocal_59 = true;
		}
	}
}

void func_64()//Position - 0x3C2C
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		if (!PED::IS_PED_INJURED(iLocal_54))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_54, iLocal_67);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
			PED::SET_PED_KEEP_TASK(iLocal_54, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_54, true, 0f);
		}
	}
}

void func_67()//Position - 0x3CBB
{
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_57))
		{
			HUD::SET_BLIP_AS_FRIENDLY(iLocal_57, false);
		}
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_53);
	}
}

int func_68()//Position - 0x3CE3
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_52, false))
	{
		if (bLocal_68)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_268) > 1000)
				{
					func_69();
				}
			}
		}
	}
	if (iLocal_267 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_69()//Position - 0x3D26
{
	if (!__LIB_0__::func_75())
	{
		if (iLocal_267 < 3)
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), 6000, 2048, 2);
			__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_PLEAVE", 4, iLocal_246, 0, 0);
		}
	}
	iLocal_267++;
	iLocal_268 = MISC::GET_GAME_TIMER();
}

int func_70()//Position - 0x3D6F
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_53))
		{
			if (bLocal_68)
			{
				if (iLocal_50 != 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), Local_64) > 2.5f)
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
		}
	}
	if (bLocal_68)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53))
		{
			if (PED::IS_PED_RAGDOLL(iLocal_53))
			{
				if (iLocal_50 != 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), Local_64) > 2.5f)
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (bLocal_68)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_268) > 1000)
				{
					func_69();
				}
			}
		}
	}
	if (iLocal_267 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_71()//Position - 0x3E34
{
	if (!iLocal_69)
	{
		switch (iLocal_239)
		{
			case 0:
				if (!bLocal_59)
				{
					if (SYSTEM::TIMERA() > 80000)
					{
						if (!PED::IS_PED_INJURED(iLocal_52))
						{
							if (!PED::IS_PED_INJURED(iLocal_53))
							{
								__LIB_0__::func_325();
								SYSTEM::WAIT(0);
								__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_PRAD3", 4, iLocal_246, 0, 0);
							}
						}
						iLocal_239 = 1;
					}
				}
				break;
			case 1:
				if (!__LIB_0__::func_75())
				{
					if (!PED::IS_PED_INJURED(iLocal_53))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_53, sLocal_250, "kneeling_arrest_idle", 3))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
							TASK::TASK_PLAY_ANIM(0, sLocal_250, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0f, false, false, false);
							TASK::TASK_SMART_FLEE_PED(0, iLocal_52, 150f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
							PED::FORCE_PED_MOTION_STATE(iLocal_53, joaat("MotionState_Run"), false, 0, false);
							PED::SET_PED_KEEP_TASK(iLocal_53, true);
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(iLocal_53, iLocal_52, 150f, -1, false, false);
						}
						PED::SET_PED_KEEP_TASK(iLocal_53, true);
						ENTITY::SET_ENTITY_HEALTH(iLocal_53, 101, 0);
						__LIB_0__::func_787(&uLocal_72, "REARRAU", sLocal_261, 4, iLocal_246, 0, 0);
						iLocal_239 = 2;
					}
					if (!PED::IS_PED_INJURED(iLocal_52))
					{
						TASK::CLEAR_PED_TASKS(iLocal_52);
						iLocal_239 = 2;
					}
				}
				break;
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_52))
				{
					if (!PED::IS_PED_INJURED(iLocal_53))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_66, iLocal_65);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_65, iLocal_66);
						TASK::TASK_COMBAT_PED(iLocal_52, iLocal_53, 0, 16);
					}
					else
					{
						TASK::TASK_WANDER_STANDARD(iLocal_52, 40000f, 0);
						func_177();
					}
					PED::SET_PED_KEEP_TASK(iLocal_52, true);
				}
				iLocal_69 = 1;
				break;
			}
	}
}

void func_73()//Position - 0x404E
{
	if (!__LIB_0__::func_75())
	{
		if (!iLocal_281)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 30f, 30f, 30f, false, true, 0))
			{
				__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_PSTOP", 4, iLocal_246, 0, 0);
				iLocal_281 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		else if (SYSTEM::TIMERB() > 8000)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 99) > 50)
			{
				__LIB_0__::func_787(&uLocal_72, "REARRAU", "REARR_PRAND", 4, iLocal_246, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 10f, 10f, 10f, false, true, 0))
			{
				__LIB_0__::func_787(&uLocal_72, "REARRAU", sLocal_260, 4, iLocal_246, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 10f, 10f, 10f, false, true, 0))
			{
				__LIB_0__::func_787(&uLocal_72, "REARRAU", sLocal_260, 4, iLocal_246, 0, 0);
			}
			else
			{
				__LIB_0__::func_787(&uLocal_72, "REARRAU", sLocal_264, 4, iLocal_246, 0, 0);
			}
			SYSTEM::SETTIMERB(0);
		}
	}
}

int func_90()//Position - 0x4866
{
	if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, iLocal_52, 3.5f, 3.5f, 3.5f, false, true, 0) || __LIB_0__::func_114())
	{
		if (!func_91(1063675494))
		{
			return 1;
		}
	}
	return 0;
}

int func_91(float fParam0)//Position - 0x48A7
{
	var uVar0;
	struct<3> Var1;
	if (MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), &uVar0, &Var1))
	{
		if (__LIB_0__::func_158(Var1, 0f, 0f, 1f) < fParam0)
		{
			return 1;
		}
	}
	return 0;
}

void func_95()//Position - 0x4922
{
	if ((MISC::GET_GAME_TIMER() - iLocal_245) > 500)
	{
		if ((iLocal_47 != 1 && iLocal_47 != 3) && iLocal_47 != 2)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_57, iLocal_242);
				if (bLocal_242 == 1)
				{
					bLocal_242 = false;
				}
				else
				{
					bLocal_242 = true;
				}
			}
		}
		else
		{
			bLocal_276 = true;
		}
		if (!bLocal_59)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_56))
			{
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_56, iLocal_243);
				if (bLocal_243 == 1)
				{
					bLocal_243 = false;
				}
				else
				{
					bLocal_243 = true;
				}
			}
		}
		else
		{
			bLocal_276 = true;
		}
		iLocal_245 = MISC::GET_GAME_TIMER();
	}
	if (!bLocal_277 == bLocal_276)
	{
		if (bLocal_276)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57, true);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_56))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_56, true);
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57, false);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_56))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_56, false);
			}
		}
		bLocal_277 = bLocal_276;
	}
}

int func_96(float fParam0)//Position - 0x4A04
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	iVar0 = 0;
	Var2 = { fParam0, fParam0, 50f };
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_271, Local_272, 194.75f, false, true, 0))
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), Var2, false, true, 0))
		{
			iVar0 = 1;
		}
		else
		{
			iVar1++;
		}
	}
	else
	{
		iVar1++;
	}
	if (!PED::IS_PED_INJURED(iLocal_53))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), Var2, false, true, 0))
		{
			iVar0 = 1;
		}
		else
		{
			iVar1++;
		}
	}
	else
	{
		iVar1++;
	}
	if (iVar1 == 2)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_108()//Position - 0x5036
{
	float fVar0;
	fVar0 = 50f;
	if (!PED::IS_PED_INJURED(iLocal_52))
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, fVar0, fVar0, fVar0, false, true, 0) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, fVar0, fVar0, fVar0, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_271, Local_272, 194.75f, false, true, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_57))
				{
					iLocal_57 = __LIB_0__::func_666(iLocal_53, 0, 145);
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_56))
				{
					iLocal_56 = __LIB_0__::func_666(iLocal_52, 0, 145);
				}
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57, false);
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_56, false);
				SYSTEM::SETTIMERA(0);
				return 1;
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_56))
				{
					iLocal_56 = __LIB_0__::func_666(iLocal_52, 0, 145);
				}
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				HUD::REMOVE_BLIP(&iLocal_57);
			}
			return 1;
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(iLocal_53))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				iLocal_57 = __LIB_0__::func_666(iLocal_53, 0, 145);
			}
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_56))
		{
			HUD::REMOVE_BLIP(&iLocal_56);
		}
		return 1;
	}
	return 0;
}

int func_112()//Position - 0x5259
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	iVar0 = joaat("S_M_Y_Ranger_01");
	if (iLocal_51 == 1)
	{
		Var2 = { 2429.822f, 4952.938f, 44.8892f };
		fVar4 = 218.3434f;
		Var3 = { 2431.685f, 4945.31f, 44.6996f };
		fVar5 = 220.0087f;
		Local_271 = { 2378.2844f, 4863.027f, 32.508835f };
		Local_272 = { 2512.7974f, 4998.5864f, 90.12283f };
		sLocal_248 = "A_M_M_HillBilly_02_WHITE_MINI_02";
		sLocal_257 = "arrestcriminal";
		sLocal_258 = "REARR_CTHANK";
		sLocal_259 = "REARR_CORUN";
		sLocal_260 = "REARR_CWTF";
		sLocal_261 = "REARR_CTURN";
		sLocal_262 = "REARR_CHELP";
		sLocal_263 = "REARR_HATE";
		sLocal_264 = "REARR_CRAND";
		sLocal_265 = "REARR_CRAND";
		sLocal_266 = "REARR_CRAND";
		iVar1 = joaat("A_M_M_Hillbilly_02");
	}
	else if (iLocal_51 == 2)
	{
		Var2 = { 2592.637f, 2540.0503f, 30.4162f };
		fVar4 = 90.5639f;
		Var3 = { 2586.0051f, 2541.4102f, 31.0379f };
		fVar5 = 75.5943f;
		Local_271 = { 2543.1345f, 2683.9172f, 0.307461f };
		Local_272 = { 2597.6025f, 2408.885f, 121.90103f };
		sLocal_248 = "G_M_M_ArmGoon_01_White_Armenian_MINI_01";
		sLocal_257 = "arrestcriminal2";
		sLocal_258 = "REARR_THANK2";
		sLocal_259 = "REARR_CORUN2";
		sLocal_260 = "REARR_CWTF2";
		sLocal_261 = "REARR_CTURN2";
		sLocal_262 = "REARR_CHELP2";
		sLocal_263 = "REARR_HATE2";
		sLocal_264 = "REARR_CRAND2";
		sLocal_265 = "REARR_CRAND2";
		sLocal_266 = "REARR_CRAND2";
		iVar1 = joaat("G_M_M_ArmGoon_01");
	}
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar1);
	STREAMING::REQUEST_MODEL(joaat("prop_ld_binbag_01"));
	STREAMING::REQUEST_ANIM_DICT(sLocal_250);
	STREAMING::REQUEST_ANIM_DICT(sLocal_251);
	STREAMING::REQUEST_CLIP_SET("MOVE_M@BAIL_BOND_NOT_TAZERED");
	STREAMING::REQUEST_CLIP_SET("MOVE_M@BAIL_BOND_TAZERED");
	if ((((((STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_binbag_01"))) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_250)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_251)) && STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_NOT_TAZERED")) && STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_TAZERED"))
	{
		iLocal_52 = PED::CREATE_PED(6, iVar0, Var2, fVar4, true, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_52, 294, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_52, true, 0f);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_52, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52, true);
		__LIB_0__::func_222(&uLocal_72, 1, iLocal_52, "ArrestCop", 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_52, true, 1);
		PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_52, 1);
		iLocal_53 = PED::CREATE_PED(26, iVar1, Var3, fVar5, true, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_53, true, 0f);
		PED::SET_PED_CONFIG_FLAG(iLocal_53, 42, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_53, 281, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, true);
		__LIB_0__::func_222(&uLocal_72, 2, iLocal_53, sLocal_257, 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_53, true, 1);
		if (iLocal_51 == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 3, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_53, 4, 0, 0, 0);
		}
		func_113();
		if (__LIB_0__::func_683() == 0)
		{
			__LIB_0__::func_222(&uLocal_72, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		else if (__LIB_0__::func_683() == 1)
		{
			__LIB_0__::func_222(&uLocal_72, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		else if (__LIB_0__::func_683() == 2)
		{
			__LIB_0__::func_222(&uLocal_72, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_52, joaat("WEAPON_PISTOL"), false))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_52, joaat("WEAPON_PISTOL"), -1, false, true);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_52, joaat("WEAPON_PISTOL"), true);
		iLocal_58 = OBJECT::CREATE_OBJECT(joaat("prop_ld_binbag_01"), Local_63.f_0, Local_63.f_1, (Local_63.f_2 + 100f), true, true, false);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_58, false, false);
		if (SYSTEM::VDIST(2411.32f, 4958.76f, 45.19f, Local_63) < 10f)
		{
			iLocal_51 = 1;
			TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, 2473.2544f, 4901.6514f, 43.1488f, 3f, -1, 2f, 1, Local_244, 40000f);
			TASK::TASK_SMART_FLEE_PED(0, iLocal_52, 150f, -1, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
			PED::SET_PED_KEEP_TASK(iLocal_53, true);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
			PATHFIND::DISABLE_NAVMESH_IN_AREA(2544.862f, 4729.8926f, 27.8986f, 2564.862f, 4749.8926f, 28.8986f, true);
		}
		else
		{
			iLocal_51 = 2;
			TASK::OPEN_SEQUENCE_TASK(&iLocal_67);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, 2531.445f, 2521.7493f, 38.2072f, 3f, -1, 2f, 1, Local_244, 40000f);
			TASK::TASK_SMART_FLEE_PED(0, iLocal_52, 150f, -1, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_67);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iLocal_67);
			PED::SET_PED_KEEP_TASK(iLocal_53, true);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_67);
		}
		if (iLocal_51 == 1)
		{
		}
		TASK::TASK_GO_TO_ENTITY(iLocal_52, iLocal_53, -1, 1f, 3f, 2f, 0);
		PED::SET_PED_KEEP_TASK(iLocal_52, true);
		return 1;
	}
	return 0;
}

void func_113()//Position - 0x56D7
{
	Local_244.f_0 = 0f;
	Local_244.f_1 = 10f;
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_52, 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52, 13, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52, 2, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52, 11, false);
	PED::SET_PED_COMBAT_RANGE(iLocal_52, 0);
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_53, 3);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 17, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 6, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_53, 11, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_53, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_53, 1, false);
	PED::ADD_RELATIONSHIP_GROUP("RE_ARREST_COP", &iLocal_65);
	PED::ADD_RELATIONSHIP_GROUP("RE_ARREST_CRIM", &iLocal_66);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_52, iLocal_65);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_53, iLocal_66);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, iLocal_66, iLocal_65);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_65, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_66, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, iLocal_66, joaat("COP"));
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_52, sLocal_249);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_53, sLocal_248);
}

void func_177()//Position - 0x8E81
{
	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		switch (iLocal_47)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				__LIB_39__::func_319(6);
				func_191();
				break;
			case 3:
				__LIB_39__::func_319(5);
				func_191();
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
		{
			if (!PED::IS_PED_INJURED(iLocal_53) && !ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
			{
				ENTITY::IS_ENTITY_DEAD(iLocal_52, false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
				{
					TASK::TASK_SMART_FLEE_COORD(iLocal_53, ENTITY::GET_ENTITY_COORDS(iLocal_52, true), 9000f, -1, false, false);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iLocal_53, ENTITY::GET_ENTITY_COORDS(iLocal_53, true), 9000f, -1, false, false);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_53, false);
				PED::SET_PED_KEEP_TASK(iLocal_53, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
		{
			if (!PED::IS_PED_INJURED(iLocal_52))
			{
				PED::SET_PED_KEEP_TASK(iLocal_52, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52, false);
				PED::SET_PED_AS_COP(iLocal_52, true);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_52, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			if (!PED::IS_PED_INJURED(iLocal_54))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_64();
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54, false);
				PED::SET_PED_AS_COP(iLocal_54, true);
			}
		}
		if (__LIB_39__::func_333())
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_66, iLocal_65);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_65, iLocal_66);
		}
		if (iLocal_71)
		{
			VEHICLE::SET_RANDOM_TRAINS(true);
		}
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(2551.0378f, 4708.6133f, 32.6775f, 2536.979f, 5022.1787f, 43.8519f, 300f, 1);
	if (iLocal_275)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 3, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	}
	__LIB_39__::func_344(-1);
	SYSTEM::WAIT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_191()//Position - 0x98C0
{
	if (!bLocal_70)
	{
		__LIB_0__::func_109();
	}
	__LIB_39__::func_349(15, iLocal_51);
	__LIB_14__::func_557();
}

void func_207()//Position - 0xA71F
{
	if (!bLocal_68 && iLocal_49 == 0)
	{
		if (!PED::IS_PED_INJURED(iLocal_52) && !PED::IS_PED_INJURED(iLocal_53))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_52, ENTITY::GET_ENTITY_COORDS(iLocal_53, true), 3f, 20000, 40000f, 0.5f);
			PED::SET_PED_KEEP_TASK(iLocal_52, true);
			SYSTEM::WAIT(0);
		}
	}
}

