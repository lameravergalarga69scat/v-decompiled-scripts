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
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_57 = { 0, 0, 0 } ;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int* iLocal_69 = NULL;
	int iLocal_70 = 0;
	int* iLocal_71 = NULL;
	struct<3> Local_72 = { 0, 0, 0 } ;
	struct<3> Local_73 = { 0, 0, 0 } ;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76 = 16;
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
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	bool bLocal_243 = 0;
	bool bLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	char* sLocal_249 = NULL;
	char* sLocal_250 = NULL;
	char* sLocal_251 = NULL;
	char* sLocal_252 = NULL;
	char* sLocal_253 = NULL;
	char* sLocal_254 = NULL;
	char* sLocal_255 = NULL;
	char* sLocal_256 = NULL;
	char* sLocal_257 = NULL;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	struct<3> Local_260 = { 0, 0, 0 } ;
	float fLocal_261 = 0f;
	bool bLocal_262 = 0;
	bool bLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	float fLocal_267 = 0f;
	float fLocal_268 = 0f;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	char* sLocal_271 = NULL;
	bool bLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	struct<2> Local_275 = { 0, 5 } ;
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
	iLocal_46 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_47 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_246 = joaat("A_M_M_EastSA_02");
	iLocal_247 = joaat("IG_Talina");
	iLocal_248 = joaat("emperor");
	sLocal_249 = "RANDOM@CRASH_RESCUE@WOUNDED@BASE";
	sLocal_250 = "MOVE_INJURED_GENERIC";
	sLocal_251 = "RANDOM@CRASH_RESCUE@HELP_VICTIM_UP";
	sLocal_252 = "random@crash_rescue@dead_ped";
	sLocal_253 = "RANDOM@CRASH_RESCUE@CAR_DEATH@LOW_CAR";
	sLocal_254 = "RANDOM@CRASH_RESCUE@CAR_DEATH@STD_CAR";
	sLocal_255 = "RANDOM@CRASH_RESCUE@CAR_DEATH@VAN";
	sLocal_257 = "random@crash_rescue@get_victim_to_friend";
	Local_260 = { 1933.506f, 6280.579f, 41.7f };
	fLocal_261 = 218.0731f;
	fLocal_267 = 0f;
	fLocal_268 = 0.975f;
	Local_55 = { ScriptParam_275.f_1[0 /*3*/] };
	Local_56 = { 1735.79f, 3840.59f, 33.9f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_67))
		{
			if (PED::IS_PED_GROUP_MEMBER(iLocal_67, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_67);
			}
			TASK::TASK_WANDER_STANDARD(iLocal_67, 40000f, 0);
			PED::SET_PED_KEEP_TASK(iLocal_67, true);
			SYSTEM::WAIT(0);
		}
		if (__LIB_0__::func_75() && __LIB_38__::func_626() == 2)
		{
			__LIB_0__::func_429();
		}
		func_323();
	}
	if (func_322())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_14__::func_552())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_42__::func_711(Local_55, -1, 0, 0, 0))
	{
		__LIB_39__::func_334(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		__LIB_0__::func_467();
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		switch (iLocal_50)
		{
			case 0:
				if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
				{
					switch (iLocal_51)
					{
						case 0:
							if (__LIB_42__::func_710())
							{
								func_323();
							}
							else if (__LIB_39__::func_340())
							{
								func_323();
							}
							else
							{
								func_262();
							}
							break;
						case 1:
							func_243();
							break;
						case 2:
							func_237();
							break;
					}
				}
				else
				{
					func_323();
				}
				break;
			case 1:
				switch (iLocal_52)
				{
					case 0:
						func_210();
						break;
					case 1:
						func_26();
						break;
					case 2:
						func_1();
						break;
				}
				break;
		}
	}
}

void func_1()//Position - 0x25C
{
	switch (iLocal_269)
	{
		case 0:
			if (__LIB_0__::func_121(iLocal_67))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_67, true);
				if (!__LIB_0__::func_75())
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_66))
					{
						HUD::REMOVE_BLIP(&iLocal_66);
					}
					iLocal_270 = MISC::GET_GAME_TIMER() + 6000;
					if (bLocal_272)
					{
						sLocal_271 = "RECRA_VDIE2";
					}
					else
					{
						sLocal_271 = "RECRA_VDIE";
					}
					PED::SET_PED_CONFIG_FLAG(iLocal_67, 137, true);
					iLocal_269++;
				}
			}
			else
			{
				func_323();
			}
			break;
		case 1:
			if (__LIB_0__::func_121(iLocal_67))
			{
				if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", sLocal_271, 3, 0, 0, 0) || MISC::GET_GAME_TIMER() > iLocal_270)
				{
					iLocal_269++;
				}
			}
			else
			{
				func_323();
			}
			break;
		case 2:
			if (!__LIB_0__::func_75())
			{
				if (__LIB_0__::func_683() == 0)
				{
					if (bLocal_272)
					{
						sLocal_271 = "RECRA_MDIE2";
					}
					else
					{
						sLocal_271 = "RECRA_MDIE";
					}
				}
				else if (__LIB_0__::func_683() == 1)
				{
					if (bLocal_272)
					{
						sLocal_271 = "RECRA_FDIE2";
					}
					else
					{
						sLocal_271 = "RECRA_FDIE";
					}
				}
				else if (__LIB_0__::func_683() == 2)
				{
					if (bLocal_272)
					{
						sLocal_271 = "RECRA_TDIE2";
					}
					else
					{
						sLocal_271 = "RECRA_TDIE";
					}
				}
				iLocal_270 = MISC::GET_GAME_TIMER() + 500;
				iLocal_269++;
			}
			break;
		case 3:
			if (MISC::GET_GAME_TIMER() > iLocal_270 && CAM::IS_SCREEN_FADED_IN())
			{
				if (!PED::IS_PED_INJURED(iLocal_67))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_67, false))
					{
						PED::SET_PED_DIES_IN_VEHICLE(iLocal_67, true);
						PED::APPLY_DAMAGE_TO_PED(iLocal_67, 200, false, 0);
					}
					else
					{
						PED::SET_PED_TO_RAGDOLL(iLocal_67, 500, 1000, 0, false, false, false);
						ENTITY::SET_ENTITY_HEALTH(iLocal_67, 0, 0);
					}
					iLocal_270 = MISC::GET_GAME_TIMER() + 2000;
					iLocal_269++;
				}
			}
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() > iLocal_270 && __LIB_2__::func_859(&uLocal_76, "RECRAAU", sLocal_271, 3, 0, 0, 0)) || MISC::GET_GAME_TIMER() > iLocal_270 + 6000)
			{
				func_323();
			}
			break;
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_67))
			{
				if (__LIB_0__::func_75())
				{
					__LIB_0__::func_429();
				}
				TASK::CLEAR_PED_TASKS(iLocal_67);
				PED::SET_PED_TO_RAGDOLL(iLocal_67, 500, 1000, 0, false, false, false);
				PED::APPLY_DAMAGE_TO_PED(iLocal_67, 200, false, 0);
				func_323();
			}
			else
			{
				if (__LIB_0__::func_75())
				{
					__LIB_0__::func_429();
				}
				func_323();
			}
			break;
	}
}

void func_26()//Position - 0xDB1
{
	int iVar0;
	int* iVar1;
	iVar0 = 0;
	switch (iLocal_53)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_67) && !PED::IS_PED_INJURED(iLocal_68))
			{
				if (PED::IS_PED_IN_GROUP(iLocal_67) || ENTITY::IS_ENTITY_AT_COORD(iLocal_67, Local_56, Global_22, false, true, 0))
				{
					__LIB_0__::func_963(1, 0, 1, 0);
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (__LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 5f, 1, 1056964608, 0, 1, 0))
						{
							iVar0 = 1;
						}
					}
					else
					{
						__LIB_14__::func_592(1722.3253f, 3842.0803f, 33.5323f, 1741.269f, 3856.8623f, 37.1775f, 11f, 1740.9175f, 3831.5713f, 33.8387f, 121.9f, 1, 1, 1, 0, 0);
						iVar0 = 1;
					}
				}
			}
			if (iVar0 == 1)
			{
				if (__LIB_7__::func_691())
				{
					iLocal_274 = 1;
				}
				else
				{
					iLocal_274 = 0;
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_66))
				{
					HUD::REMOVE_BLIP(&iLocal_66);
				}
				func_77(1731.0516f, 3847.6455f, 33.813f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_68, true), 20f, true, false, false, false);
				MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(iLocal_68, true), 20f, 0);
				SYSTEM::WAIT(0);
				iLocal_53 = 1;
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_67) && !PED::IS_PED_INJURED(iLocal_68))
			{
				if (__LIB_14__::func_535(&uLocal_76, "RECRAAU", "RECRA_ARRIV", "RECRA_ARRIV_1", 3, 0, 0))
				{
					ENTITY::SET_ENTITY_HEALTH(iLocal_67, 200, 0);
					__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, false);
						if (func_67(iVar1))
						{
							ENTITY::SET_ENTITY_COORDS(iVar1, 1738.6554f, 3836.2266f, 33.879f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iVar1, 119f);
						}
						else
						{
							ENTITY::SET_ENTITY_COORDS(iVar1, Local_56, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iVar1, 119f);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar1, 5f);
						if (__LIB_7__::func_691())
						{
							CAM::SET_FIRST_PERSON_FLASH_EFFECT_VEHICLE_MODEL_HASH(ENTITY::GET_ENTITY_MODEL(iVar1));
						}
					}
					else
					{
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 25f);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1734.2593f, 3840.5903f, 33.7883f, true, false, false, true);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					ENTITY::SET_ENTITY_COORDS(iLocal_67, 1738.0475f, 3842.4382f, 33.7707f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_67, 36.8203f);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_67, false, false);
					MISC::CLEAR_AREA(Local_56, 4f, true, false, false, false);
					__LIB_0__::func_106(&iVar1);
					iLocal_259 = PED::CREATE_SYNCHRONIZED_SCENE(Local_72, Local_73, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_67, iLocal_259, sLocal_257, "helping_friend_inside_victim", 1000f, -1000f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_68, iLocal_259, sLocal_257, "helping_friend_inside_friend", 1000f, -1000f, 0, 0, 1000f, 0);
					iLocal_75 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_75, iLocal_259, "HELPING_FRIEND_INSIDE_CAM", sLocal_257);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_259, fLocal_267);
					CAM::SET_CAM_ACTIVE(iLocal_75, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					iLocal_53 = 4;
				}
			}
			break;
		case 4:
			if ((iLocal_274 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_259)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_259) > 0.97f)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				iLocal_274 = 0;
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_259) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_259) >= fLocal_268) || func_63())
			{
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				CAM::SET_CAM_ACTIVE(iLocal_75, false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(iLocal_75, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				PED::DELETE_PED(&iLocal_67);
				PED::DELETE_PED(&iLocal_68);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				func_61(1, 1, 1, 1);
				while (CAM::IS_SCREEN_FADING_IN())
				{
					SYSTEM::WAIT(0);
				}
				__LIB_0__::func_963(0, 0, 1, 0);
				func_27();
			}
			break;
	}
}

void func_27()//Position - 0x119B
{
	__LIB_39__::func_388(13, 0);
	if (__LIB_0__::func_178(77))
	{
		__LIB_37__::func_324(12, 0);
	}
	__LIB_0__::func_109();
	func_31(-1, 0);
	__LIB_14__::func_557();
	func_323();
}

void func_31(int iParam0, int iParam1)//Position - 0x124D
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
			__LIB_39__::func_335(__LIB_39__::func_320(iParam0, iParam1), Local_48.f_0, Local_48.f_1);
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

void func_61(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2775
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, false);
	PLAYER::SET_PLAYER_CONTROL(iVar0, bParam3, 0);
	__LIB_1__::func_373(0, 1, 0, 0, 0, 0, 0);
	if (iParam2 == 1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	HUD::CLEAR_HELP(true);
	if (iParam0 == 1)
	{
		CAM::SET_WIDESCREEN_BORDERS(false, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_49 != 0 && iLocal_49 != joaat("OBJECT")) && iLocal_49 != joaat("GADGET_PARACHUTE"))
		{
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_49, false))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_49, false);
				}
			}
		}
	}
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
	}
}

int func_63()//Position - 0x283F
{
	if (__LIB_0__::func_645(1000))
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_259) < 1f)
		{
			PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_259, 1f);
		}
		return 1;
	}
	return 0;
}

int func_67(int iParam0)//Position - 0x2934
{
	struct<3> Var0[2];
	struct<3> Var1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &(Var0[0 /*3*/]), &(Var0[1 /*3*/]));
		Var1 = { __LIB_13__::func_790() };
		if ((Var0[1 /*3*/] - Var0[0 /*3*/]) > Var1.f_0)
		{
			return 1;
		}
		if ((Var0[1 /*3*/].f_1 - Var0[0 /*3*/].f_1) > Var1.f_1)
		{
			return 1;
		}
		if ((Var0[1 /*3*/].f_2 - Var0[0 /*3*/].f_2) > Var1.f_2)
		{
			return 1;
		}
	}
	return 0;
}

void func_77(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x2C76
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_17__::func_111(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_0__::func_683())
			{
				case 0:
					if (func_195(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_80(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_195(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_80(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_195(PLAYER::PLAYER_PED_ID(), 8, 1) || func_195(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_80(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_195(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_80(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam4 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(__LIB_0__::func_85(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
		}
		if (iParam5 == 1)
		{
			MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
		}
		if (bParam8)
		{
			FIRE::STOP_FIRE_IN_RANGE(Param0, 30f);
		}
		MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, false);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, true);
		if (bParam10)
		{
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
		}
		HUD::CLEAR_PRINTS();
		if (iParam9 == 1)
		{
			HUD::CLEAR_HELP(true);
		}
		if (iParam1 == 1)
		{
			CAM::SET_WIDESCREEN_BORDERS(true, 0);
		}
		if (iParam2 == 1)
		{
			iLocal_49 = 0;
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_49 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__::func_84(500, 0);
		}
	}
}

int func_80(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x2E83
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
		Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_0__::func_633(iParam1);
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
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, uVar11[iVar0], -1) };
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
							Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_0__::func_633(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_14__::func_752(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_80(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						__LIB_0__::func_633(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_14__::func_752(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_80(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_89(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_88(iParam0, iVar10, &iVar4, 1))
							{
								func_80(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_80(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_13__::func_798(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_80(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_80(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_80(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_80(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_80(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
			Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_0__::func_633(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_14__::func_752(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_80(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_0__::func_633(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_14__::func_752(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_80(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = __LIB_14__::func_752(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_80(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_14__::func_635(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_88(iParam0, iVar10, &iVar4, 0))
		{
			func_80(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_81(iParam0, iVar10, &iVar4))
		{
			func_80(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_81(int iParam0, int iParam1, int iParam2)//Position - 0x3693
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_195(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_88(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3F87
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_195(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_89(int iParam0, int iParam1, int iParam2)//Position - 0x4020
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
				if (func_195(iParam0, iParam1, iVar0))
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
				if (func_195(iParam0, iParam1, iVar1))
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

int func_195(int iParam0, int iParam1, int iParam2)//Position - 0x20D90
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
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar0, iParam1, iParam2, -1) };
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
				if (!func_195(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_195(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_195(iParam0, 14, iVar4))
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
						Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, iVar2, iVar1, -1) };
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
			if (!func_195(iParam0, 14, uVar8[iVar7]))
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

void func_210()//Position - 0x21C15
{
	if (!PED::IS_PED_INJURED(iLocal_67))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_67))
		{
			bLocal_272 = true;
			iLocal_52 = 2;
			iLocal_269 = 5;
		}
		else if (MISC::GET_GAME_TIMER() < iLocal_270)
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_67, false);
			if (!PED::IS_PED_FLEEING(iLocal_67))
			{
				func_234();
			}
			if (func_222())
			{
				if (iLocal_70)
				{
					if (!__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), 1935.53f, 6291.888f, 41.144f, 100f, 1))
					{
						__LIB_0__::func_124(&iLocal_69, 1, 0, 1);
						__LIB_0__::func_106(&iLocal_71);
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_265))
						{
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_265, false);
						}
						iLocal_70 = 0;
					}
					else
					{
						func_219();
					}
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_66))
				{
					iLocal_66 = __LIB_39__::func_403(Local_56, 1);
				}
				if (bLocal_244)
				{
					if (PED::IS_PED_INJURED(iLocal_68))
					{
						bLocal_272 = true;
						iLocal_52 = 2;
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_68, PLAYER::PLAYER_PED_ID(), true) || __LIB_0__::func_687(iLocal_68, PLAYER::PLAYER_PED_ID(), 1.25f, 1))
					{
						TASK::CLEAR_PED_TASKS(iLocal_68);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_68, false);
						PED::SET_PED_TO_RAGDOLL(iLocal_68, 250, 500, 0, false, false, false);
						TASK::TASK_SMART_FLEE_PED(iLocal_68, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
						PED::SET_PED_KEEP_TASK(iLocal_68, true);
						bLocal_272 = true;
						iLocal_52 = 2;
						iLocal_269 = 0;
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_56, Global_19, true, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1722.09f, 3843f, 33.6f, 1740.11f, 3854.94f, 39.22f, 12f, false, true, 0))
					{
						iLocal_52 = 1;
						iLocal_53 = 0;
					}
				}
				else
				{
					func_213();
				}
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_67) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_ON_ANY_BIKE(iLocal_67))
					{
						sLocal_256 = sLocal_254;
						if (func_212())
						{
							sLocal_256 = sLocal_253;
						}
						else if (func_211())
						{
							sLocal_256 = sLocal_255;
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_67, joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
						{
							TASK::TASK_PLAY_ANIM(iLocal_67, sLocal_256, "LOOP", 2f, -8f, -1, 1, 0f, false, false, false);
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_66))
				{
					HUD::REMOVE_BLIP(&iLocal_66);
				}
				if (bLocal_244)
				{
					if (PED::IS_PED_INJURED(iLocal_68))
					{
						bLocal_272 = true;
						iLocal_52 = 2;
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_68, PLAYER::PLAYER_PED_ID(), true) || __LIB_0__::func_687(iLocal_68, PLAYER::PLAYER_PED_ID(), 1.25f, 1))
					{
						TASK::CLEAR_PED_TASKS(iLocal_68);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_68, false);
						PED::SET_PED_TO_RAGDOLL(iLocal_68, 250, 500, 0, false, false, false);
						TASK::TASK_SMART_FLEE_PED(iLocal_68, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
						PED::SET_PED_KEEP_TASK(iLocal_68, true);
						bLocal_272 = true;
						iLocal_52 = 2;
						iLocal_269 = 0;
					}
				}
				if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_67, 200f, 1))
				{
					iLocal_52 = 2;
					iLocal_269 = 5;
				}
			}
		}
		else
		{
			bLocal_272 = false;
			iLocal_52 = 2;
		}
	}
	else
	{
		bLocal_272 = true;
		iLocal_52 = 2;
	}
}

int func_211()//Position - 0x21ECD
{
	int iVar0;
	int iVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_67, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_67, false);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			iVar1 = VEHICLE::GET_VEHICLE_LAYOUT_HASH(iVar0);
			if ((((iVar1 == joaat("LAYOUT_VAN") || iVar1 == joaat("LAYOUT_VAN_BODHI")) || iVar1 == joaat("LAYOUT_VAN_BOXVILLE")) || iVar1 == joaat("LAYOUT_VAN_JOURNEY")) || iVar1 == joaat("LAYOUT_VAN_MULE"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_212()//Position - 0x21F43
{
	int iVar0;
	int iVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_67, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_67, false);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			iVar1 = VEHICLE::GET_VEHICLE_LAYOUT_HASH(iVar0);
			if ((((((((((iVar1 == joaat("LAYOUT_LOW") || iVar1 == joaat("LAYOUT_LOW_INFERNUS")) || iVar1 == joaat("LAYOUT_LOW_DUNE")) || iVar1 == joaat("LAYOUT_LOW_BFINJECTION")) || iVar1 == joaat("LAYOUT_LOW_CHEETAH")) || iVar1 == joaat("LAYOUT_LOW_RESTRICTED")) || iVar1 == joaat("LAYOUT_LOW_SENTINEL2")) || iVar1 == joaat("LAYOUT_LOW_BLADE")) || iVar1 == joaat("LAYOUT_LOW_TURISMOR")) || iVar1 == joaat("LAYOUT_LOW_FURORE")) || iVar1 == joaat("LAYOUT_LOW_OSIRIS"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_213()//Position - 0x2200D
{
	if (!bLocal_244 && __LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_56, 150f, 1))
	{
		STREAMING::REQUEST_MODEL(iLocal_246);
		STREAMING::REQUEST_ANIM_DICT(sLocal_257);
		if ((STREAMING::HAS_MODEL_LOADED(iLocal_246) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_257)) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(1728.7781f, 3851.2869f, 33.7826f, 5f, joaat("prop_skid_chair_01"), false))
		{
			iLocal_245 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1728.7781f, 3851.2869f, 33.7826f, 5f, joaat("prop_skid_chair_01"), true, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_245, true);
			Local_72 = { 1730.038f, 3853.562f, 34.661f };
			Local_73 = { 0f, 0f, 36f };
			iLocal_68 = PED::CREATE_PED(26, iLocal_246, 1728.7781f, 3851.2869f, 33.7826f, 211.7722f, true, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_68, true);
			__LIB_0__::func_222(&uLocal_76, 5, iLocal_68, "CrashSafehouse", 0, 1);
			iLocal_259 = PED::CREATE_SYNCHRONIZED_SCENE(Local_72, Local_73, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_68, iLocal_259, sLocal_257, "helping_friend_idle_friend", 1000f, -1000f, 0, 0, 1000f, 0);
			bLocal_244 = true;
		}
	}
}

void func_219()//Position - 0x2223A
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_71))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false))
		{
			iLocal_61 = MISC::GET_GAME_TIMER();
			if ((iLocal_61 - iLocal_62) < 1000)
			{
				VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(iLocal_71, true);
			}
			else if ((iLocal_61 - iLocal_62) > 2000)
			{
				VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(iLocal_71, false);
				iLocal_62 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

int func_222()//Position - 0x222F6
{
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_67, 1f);
	if (PED::IS_PED_GROUP_MEMBER(iLocal_67, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_65))
		{
			HUD::REMOVE_BLIP(&iLocal_65);
		}
		else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_67, 20f, 20f, 20f, false, true, 0) || !func_231())
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_67);
		}
		else if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_ON_FOOT(iLocal_67))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_67, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 7)
				{
					TASK::CLEAR_PED_TASKS(iLocal_67);
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_67, 0, 0);
				}
			}
		}
		return 1;
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_65))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_67, Global_19, false, true, 0) && func_231())
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_67, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
		}
	}
	else
	{
		iLocal_65 = func_223(iLocal_67, 0, 0);
	}
	return 0;
}

int func_223(int iParam0, bool bParam1, int iParam2)//Position - 0x223D8
{
	var uVar0;
	iParam2 = iParam2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			uVar0 = __LIB_39__::func_356(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bParam1, 0);
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			uVar0 = __LIB_39__::func_367(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), bParam1, 0);
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			uVar0 = func_224(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return uVar0;
}

int func_224(int iParam0)//Position - 0x2243D
{
	return __LIB_0__::func_643(iParam0);
}

int func_231()//Position - 0x22587
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if ((((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID())) && !func_233())
			{
				if (((VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0, false) || VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false)) || VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1, false)) || VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2, false))
				{
					iLocal_264 = 0;
					return 1;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_67))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_67, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					iLocal_264 = 0;
					return 1;
				}
			}
		}
		else if (func_232())
		{
		}
		else
		{
			return 1;
		}
	}
	if (!bLocal_263)
	{
		iLocal_264 = 1;
	}
	return 0;
}

int func_232()//Position - 0x22682
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))))
		{
			return 1;
		}
	}
	return 0;
}

int func_233()//Position - 0x226AE
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
	if (iVar0 == joaat("firetruk") || iVar0 == joaat("trash"))
	{
		return 1;
	}
	return 0;
}

void func_234()//Position - 0x226E3
{
	switch (iLocal_54)
	{
		case 0:
			iLocal_59 = 0;
			iLocal_54 = 1;
			iLocal_58 = MISC::GET_GAME_TIMER() + 1000;
			break;
		case 1:
			if (iLocal_59 == 0)
			{
				if (func_236() && !__LIB_0__::func_75())
				{
					if (__LIB_0__::func_683() == 0)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_WHEREM", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
					else if (__LIB_0__::func_683() == 1)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_WHEREF", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
					else if (__LIB_0__::func_683() == 2)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_WHERET", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
				}
			}
			else if (iLocal_59 == 1)
			{
				func_235(100, 1);
			}
			else if (iLocal_59 == 2)
			{
				if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_APPR", 3, 0, 0, 0))
				{
					iLocal_59++;
					if (!HUD::DOES_BLIP_EXIST(iLocal_66))
					{
						iLocal_66 = __LIB_39__::func_403(Local_56, 1);
					}
				}
			}
			else if (iLocal_59 == 3)
			{
				func_235(0, 1);
			}
			else if (iLocal_59 == 4)
			{
				if (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()) == 2)
				{
					iLocal_59++;
				}
				else
				{
					iLocal_59 = 6;
				}
			}
			else if (iLocal_59 == 5)
			{
				if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_TSS", 3, 0, 0, 0))
				{
					iLocal_59++;
				}
			}
			else if (iLocal_59 == 6)
			{
				func_235(1500, 1);
			}
			else if (iLocal_59 == 7)
			{
				if (func_236())
				{
					if (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()) == 2)
					{
						iLocal_58 = MISC::GET_GAME_TIMER();
						iLocal_59 = 0;
						iLocal_54 = 2;
					}
					else
					{
						iLocal_58 = MISC::GET_GAME_TIMER();
						iLocal_59 = 0;
						iLocal_54 = 3;
					}
				}
			}
			break;
		case 2:
			if (iLocal_59 == 0)
			{
				if (func_236() && !__LIB_0__::func_75())
				{
					if (func_222())
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_ALTRU", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
				}
			}
			else if (iLocal_59 == 1)
			{
				func_235(0, 1);
			}
			else if (iLocal_59 == 2)
			{
				iLocal_58 = MISC::GET_GAME_TIMER() + 1500;
				iLocal_59 = 0;
				iLocal_54 = 3;
			}
			break;
		case 3:
			if (iLocal_59 == 0)
			{
				if (func_236() && !__LIB_0__::func_75())
				{
					if (func_222())
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT1", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
				}
			}
			else if (iLocal_59 == 1)
			{
				func_235(100, 1);
			}
			else if (iLocal_59 == 2)
			{
				if (func_236())
				{
					if (__LIB_0__::func_683() == 0)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT1M", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
					else if (__LIB_0__::func_683() == 1)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT1F", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
					else if (__LIB_0__::func_683() == 2)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT1T", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
				}
			}
			else if (iLocal_59 == 3)
			{
				func_235(100, 1);
			}
			else if (iLocal_59 == 4)
			{
				if (func_236() && __LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT2", 3, 0, 0, 0))
				{
					iLocal_59++;
				}
			}
			else if (iLocal_59 == 5)
			{
				func_235(100, 1);
			}
			else if (iLocal_59 == 6)
			{
				if (func_236())
				{
					if (__LIB_0__::func_683() == 0)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT2M", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
					else if (__LIB_0__::func_683() == 1)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT2F", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
					else if (__LIB_0__::func_683() == 2)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT2T", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
				}
			}
			else if (iLocal_59 == 7)
			{
				func_235(100, 1);
			}
			else if (iLocal_59 == 8)
			{
				if (func_236() && __LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT3", 3, 0, 0, 0))
				{
					iLocal_59++;
				}
			}
			else if (iLocal_59 == 9)
			{
				func_235(100, 1);
			}
			else if (iLocal_59 == 10)
			{
				if (func_236())
				{
					if (__LIB_0__::func_683() == 0)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT3M", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
					else if (__LIB_0__::func_683() == 1)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT3F", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
					else if (__LIB_0__::func_683() == 2)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT3T", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
				}
			}
			else if (iLocal_59 == 11)
			{
				func_235(100, 1);
			}
			else if (iLocal_59 == 12)
			{
				if (func_236() && __LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT4", 3, 0, 0, 0))
				{
					iLocal_59++;
				}
			}
			else if (iLocal_59 == 13)
			{
				func_235(100, 1);
			}
			else if (iLocal_59 == 14)
			{
				if (func_236())
				{
					if (__LIB_0__::func_683() == 0)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT4M", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
					else if (__LIB_0__::func_683() == 1)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT4F", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
					else if (__LIB_0__::func_683() == 2)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT4T", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
				}
			}
			else if (iLocal_59 == 15)
			{
				func_235(100, 1);
			}
			else if (iLocal_59 == 16)
			{
				if (func_236() && __LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT5", 3, 0, 0, 0))
				{
					iLocal_59++;
				}
			}
			else if (iLocal_59 == 17)
			{
				func_235(100, 1);
			}
			else if (iLocal_59 == 18)
			{
				if (func_236())
				{
					if (__LIB_0__::func_683() == 0)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT5M", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
					else if (__LIB_0__::func_683() == 1)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT5F", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
					else if (__LIB_0__::func_683() == 2)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT5T", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
				}
			}
			else if (iLocal_59 == 19)
			{
				func_235(100, 1);
			}
			else if (iLocal_59 == 20)
			{
				if (func_236() && __LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT6", 3, 0, 0, 0))
				{
					iLocal_59++;
				}
			}
			else if (iLocal_59 == 21)
			{
				func_235(100, 1);
			}
			else if (iLocal_59 == 22)
			{
				if (func_236())
				{
					if (__LIB_0__::func_683() == 0)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT6M", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
					else if (__LIB_0__::func_683() == 1)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT6F", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
					else if (__LIB_0__::func_683() == 2)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT6T", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
				}
			}
			else if (iLocal_59 == 23)
			{
				func_235(100, 1);
			}
			else if (iLocal_59 == 24)
			{
				if (func_236() && __LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT7", 3, 0, 0, 0))
				{
					iLocal_59++;
				}
			}
			else if (iLocal_59 == 25)
			{
				func_235(100, 1);
			}
			else if (iLocal_59 == 26)
			{
				if (func_236())
				{
					if (__LIB_0__::func_683() == 0)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT7M", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
					else if (__LIB_0__::func_683() == 1)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT7F", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
					else if (__LIB_0__::func_683() == 2)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT7T", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
				}
			}
			else if (iLocal_59 == 27)
			{
				func_235(100, 1);
			}
			else if (iLocal_59 == 28)
			{
				if (func_236() && __LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_CHAT8", 3, 0, 0, 0))
				{
					iLocal_59++;
				}
			}
			else if (iLocal_59 == 29)
			{
				iLocal_58 = MISC::GET_GAME_TIMER() + 6000;
				iLocal_59 = 0;
				iLocal_54 = 4;
			}
			break;
		case 4:
			if (iLocal_59 == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_58 && !__LIB_0__::func_75())
				{
					if (func_222())
					{
						if (func_231() && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_PAIN", 3, 0, 0, 0))
							{
								iLocal_59++;
							}
						}
						else if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_GETOUT", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
				}
			}
			else if (iLocal_59 == 1)
			{
				func_235(100, 1);
			}
			else if (iLocal_59 == 2)
			{
				if (func_222() && func_236())
				{
					if (__LIB_0__::func_683() == 0)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_MC1", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
					else if (__LIB_0__::func_683() == 1)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_FC1", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
					else if (__LIB_0__::func_683() == 2)
					{
						if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_TC1", 3, 0, 0, 0))
						{
							iLocal_59++;
						}
					}
				}
			}
			else if (iLocal_59 == 3)
			{
				if (!__LIB_0__::func_75())
				{
					iLocal_64++;
					if (iLocal_64 < 3)
					{
						iLocal_58 = MISC::GET_GAME_TIMER() + 20000;
						iLocal_59 = 0;
					}
					else
					{
						iLocal_54 = 7;
					}
				}
			}
			break;
		case 7:
			break;
	}
}

void func_235(int iParam0, bool bParam1)//Position - 0x23033
{
	if (!__LIB_0__::func_75())
	{
		if (iLocal_264)
		{
			if (__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_WALK", 3, 0, 0, 0))
			{
				bLocal_263 = true;
				iLocal_264 = 0;
			}
		}
		else
		{
			if (bParam1)
			{
				iLocal_59++;
			}
			iLocal_58 = (MISC::GET_GAME_TIMER() + iParam0);
		}
	}
}

int func_236()//Position - 0x2307D
{
	if (MISC::GET_GAME_TIMER() >= iLocal_58)
	{
		return 1;
	}
	return 0;
}

void func_237()//Position - 0x23093
{
	struct<3> Var0;
	char* sVar1;
	switch (iLocal_63)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT(sLocal_251);
			if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_251))
			{
				iLocal_63++;
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_67))
			{
				func_77(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				Local_72 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_67, 0f, 0f, 5f) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Local_72, &(Local_72.f_2), false, false);
				Local_73 = { __LIB_3__::func_554() };
				Local_73.f_2 = __LIB_1__::func_9((fLocal_261 + 180f), 0f, 360f);
				iLocal_258 = PED::CREATE_SYNCHRONIZED_SCENE(Local_72, Local_73, 2);
				iLocal_74 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_74, iLocal_258, "HELPING_VICTIM_TO_FEET_CAM", sLocal_251);
				CAM::SET_CAM_ACTIVE(iLocal_74, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				if (__LIB_39__::func_366())
				{
					__LIB_14__::func_592(1935.59f, 6277.31f, 40.87f, 1930.11f, 6285.06f, 44.4f, 7f, 1936.63f, 6275.5f, 42.59f, -146.8f, 1, 1, 1, 0, 0);
				}
				else
				{
					__LIB_14__::func_592(1935.59f, 6277.31f, 40.87f, 1930.11f, 6285.06f, 44.4f, 7f, 1933.3604f, 6261.681f, 42.2652f, 218f, 1, 1, 1, 0, 0);
				}
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_67, true), 5f, true, false, false, false);
				MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(iLocal_67, true), 20f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iLocal_67, true), 7f);
				iLocal_266 = GRAPHICS::ADD_DECAL(1110, Local_260, 0f, 0f, -1f, __LIB_0__::func_79(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
				if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()) == 1)
				{
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_258, sLocal_251, "HELPING_VICTIM_TO_FEET_PLAYER", 1000f, -4f, 0, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_67, iLocal_258, sLocal_251, "HELPING_VICTIM_TO_FEET_VICTIM", 1000f, -4f, 0, 0, 1000f, 0);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_258, false);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_258, 0.25f);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_67, false, false);
				__LIB_0__::func_429();
				SYSTEM::WAIT(0);
				__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
				if (__LIB_0__::func_683() == 0)
				{
					__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_MHELP", 3, 0, 0, 0);
				}
				else if (__LIB_0__::func_683() == 1)
				{
					__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_FHELP", 3, 0, 0, 0);
				}
				else if (__LIB_0__::func_683() == 2)
				{
					__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_THELP", 3, 0, 0, 0);
				}
				iLocal_63++;
			}
			break;
		case 2:
			if (iLocal_242)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iLocal_63 = 4;
				}
			}
			else if (__LIB_0__::func_645(1000))
			{
				CAM::DO_SCREEN_FADE_OUT(250);
				iLocal_242 = 1;
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_258) > 0.5f)
			{
				iLocal_63++;
			}
			break;
		case 3:
			if (iLocal_242)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iLocal_63 = 4;
				}
			}
			else if (__LIB_0__::func_645(1000))
			{
				CAM::DO_SCREEN_FADE_OUT(250);
				iLocal_242 = 1;
			}
			else if (func_238(iLocal_258, 0.9f))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), -4f, true);
				iLocal_63 = 4;
				bLocal_243 = true;
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_258) > 0.99f)
			{
				iLocal_63++;
			}
			break;
		case 4:
			if (iLocal_242)
			{
				__LIB_0__::func_429();
			}
			if (bLocal_243)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				if (__LIB_0__::func_121(iLocal_67))
				{
					TASK::CLEAR_PED_TASKS(iLocal_67);
				}
			}
			STREAMING::REMOVE_ANIM_DICT(sLocal_251);
			STREAMING::REMOVE_ANIM_DICT(sLocal_249);
			if (__LIB_0__::func_121(iLocal_67))
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_67, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_67, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_67, 172, false);
			}
			GRAPHICS::REMOVE_DECAL(iLocal_266);
			__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
			if (CAM::DOES_CAM_EXIST(iLocal_74))
			{
				CAM::DESTROY_CAM(iLocal_74, false);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_67, joaat("PLAYER"));
			if (iLocal_242)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(250);
				}
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_67);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), false, 0, false);
				PED::FORCE_PED_MOTION_STATE(iLocal_67, joaat("MotionState_Idle"), false, 0, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_67, false, false);
				Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_251, "HELPING_VICTIM_TO_FEET_PLAYER", Local_72, Local_73, 1f, 2) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), false, false);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
				Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_251, "HELPING_VICTIM_TO_FEET_PLAYER", Local_72, Local_73, 1f, 2) };
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Var0.f_2);
				Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_251, "HELPING_VICTIM_TO_FEET_VICTIM", Local_72, Local_73, 1f, 2) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), false, false);
				ENTITY::SET_ENTITY_COORDS(iLocal_67, Var0, true, false, false, true);
				Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_251, "HELPING_VICTIM_TO_FEET_VICTIM", Local_72, Local_73, 1f, 2) };
				ENTITY::SET_ENTITY_HEADING(iLocal_67, Var0.f_2);
			}
			else
			{
				if (!bLocal_243)
				{
					if (__LIB_0__::func_683() == 0)
					{
						sVar1 = "move_p_m_zero";
					}
					else if (__LIB_0__::func_683() == 1)
					{
						sVar1 = "move_p_m_one";
					}
					else if (__LIB_0__::func_683() == 2)
					{
						sVar1 = "move_p_m_two";
					}
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sVar1, "idle_intro", 8f, -8f, -1, 0, 0f, false, false, false);
				}
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
			}
			iLocal_242 = 0;
			iLocal_270 = (MISC::GET_GAME_TIMER() + 180000);
			iLocal_58 = MISC::GET_GAME_TIMER() + 3000;
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_241, false);
			iLocal_241 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(33.813f, 3847.6455f, 1731.0516f) + Vector(-5f, -20f, -20f), Vector(33.813f, 3847.6455f, 1731.0516f) + Vector(5f, 25f, 35f), false, true, true, true);
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			func_61(1, 1, 1, 1);
			iLocal_50 = 1;
			iLocal_52 = 0;
			break;
	}
}

int func_238(int iParam0, float fParam1)//Position - 0x23679
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	__LIB_0__::func_603(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	if (((iVar0 < -64 || iVar0 > 64) || iVar1 < -64) || iVar1 > 64)
	{
		fVar4 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam0);
		if (fVar4 >= fParam1)
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

void func_243()//Position - 0x2387B
{
	if (!PED::IS_PED_INJURED(iLocal_67) && !func_261())
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_67, 80f, 80f, 15f, false, true, 0))
		{
			STREAMING::REQUEST_ANIM_DICT(sLocal_251);
			if (!iLocal_273)
			{
				func_259(1);
				iLocal_273 = 1;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_67, 2.5f, 2.5f, 2.5f, false, true, 1) && __LIB_0__::func_494(1, 0, 1))
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_67, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_67, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_67, 206, true);
				iLocal_51 = 2;
			}
			else if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_67, 15f, 1) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 4f)
			{
				if (__LIB_0__::func_75())
				{
					__LIB_0__::func_638();
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_65))
				{
					iLocal_65 = __LIB_14__::func_661(iLocal_67, 1, 1, 5);
				}
			}
			else
			{
				switch (iLocal_60)
				{
					case 0:
						iLocal_58 = MISC::GET_GAME_TIMER();
						if (!__LIB_39__::func_333())
						{
							__LIB_39__::func_336(1);
						}
						iLocal_60 = 1;
						break;
					case 1:
						if (!__LIB_0__::func_75())
						{
							if (!HUD::DOES_BLIP_EXIST(iLocal_65))
							{
								iLocal_65 = __LIB_14__::func_661(iLocal_67, 1, 1, 5);
								HUD::SHOW_HEIGHT_ON_BLIP(iLocal_65, false);
							}
							__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_PLEAD", 3, 0, 0, 0);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_67, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							iLocal_58 = MISC::GET_GAME_TIMER() + 18000;
							iLocal_60 = 2;
						}
						break;
					case 2:
						if (MISC::GET_GAME_TIMER() > iLocal_58 && !__LIB_0__::func_75())
						{
							__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_PLEAD2", 3, 0, 0, 0);
							iLocal_58 = MISC::GET_GAME_TIMER() + 12000;
							iLocal_60 = 3;
						}
						break;
					case 3:
						if (MISC::GET_GAME_TIMER() > iLocal_58 && !__LIB_0__::func_75())
						{
							__LIB_2__::func_859(&uLocal_76, "RECRAAU", "RECRA_PLEAD3", 3, 0, 0, 0);
							iLocal_58 = MISC::GET_GAME_TIMER() + 9500;
						}
						break;
					}
				}
		}
	}
	else
	{
		iLocal_269 = 5;
		iLocal_50 = 1;
		iLocal_52 = 2;
	}
	func_219();
}

void func_259(bool bParam0)//Position - 0x24159
{
	if (bParam0)
	{
		__LIB_0__::func_424(1);
	}
	else
	{
		__LIB_0__::func_424(0);
	}
}

int func_261()//Position - 0x2419F
{
	if (!PED::IS_PED_INJURED(iLocal_67))
	{
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_67, 31086, 0f, 0f, 0f), 1f, true))
		{
			return 1;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_67))
				{
					return 1;
				}
			}
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(iLocal_67, 31086, 0f, 0f, 0f), 8f))
		{
			return 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_67, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		if (PED::IS_PED_RAGDOLL(iLocal_67))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (!__LIB_0__::func_121(iLocal_67))
	{
		return 1;
	}
	return 0;
}

void func_262()//Position - 0x24245
{
	var uVar0;
	struct<3> Var1;
	STREAMING::REQUEST_MODEL(iLocal_246);
	STREAMING::REQUEST_MODEL(iLocal_248);
	STREAMING::REQUEST_MODEL(iLocal_247);
	STREAMING::REQUEST_ANIM_DICT(sLocal_249);
	STREAMING::REQUEST_CLIP_SET(sLocal_250);
	STREAMING::REQUEST_ANIM_DICT(sLocal_253);
	STREAMING::REQUEST_ANIM_DICT(sLocal_254);
	STREAMING::REQUEST_ANIM_DICT(sLocal_255);
	STREAMING::REQUEST_ANIM_DICT(sLocal_252);
	STREAMING::REQUEST_PTFX_ASSET();
	if (((((((((STREAMING::HAS_MODEL_LOADED(iLocal_246) && STREAMING::HAS_MODEL_LOADED(iLocal_248)) && STREAMING::HAS_MODEL_LOADED(iLocal_247)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_249)) && STREAMING::HAS_CLIP_SET_LOADED(sLocal_250)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_253)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_254)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_255)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_252)) && STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		bLocal_262 = false;
		iLocal_273 = 0;
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		iLocal_71 = VEHICLE::CREATE_VEHICLE(iLocal_248, 1932.98f, 6291.91f, 41.08f, 350.85f, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_248);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_71, false, false, false);
		VEHICLE::SET_VEHICLE_LIGHTS(iLocal_71, 1);
		VEHICLE::SET_VEHICLE_TYRE_BURST(iLocal_71, 0, false, 1000f);
		MISC::GET_MODEL_DIMENSIONS(iLocal_248, &uVar0, &Var1);
		VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_71, 0);
		VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_71, 2);
		VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_71, 3);
		VEHICLE::POP_OUT_VEHICLE_WINDSCREEN(iLocal_71);
		VEHICLE::SET_VEHICLE_DAMAGE(iLocal_71, 0f, Var1.f_1, 0f, 500f, 10000f, true);
		VEHICLE::SET_VEHICLE_DAMAGE(iLocal_71, Var1.f_0, (Var1.f_1 * 0.75f), 0f, 500f, 10000f, true);
		VEHICLE::SET_VEHICLE_DAMAGE(iLocal_71, Var1.f_0, 0f, 0f, 500f, 10000f, true);
		VEHICLE::SET_VEHICLE_DAMAGE(iLocal_71, 0f, 0f, Var1.f_2, 500f, 10000f, true);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_71, 5, true, true);
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_71, 12f);
		VEHICLE::START_VEHICLE_ALARM(iLocal_71);
		ENTITY::SET_ENTITY_PROOFS(iLocal_71, false, true, false, false, false, false, false, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_71, 0f, 180f, 0f, 2, true);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_71, true);
		VEHICLE::SET_VEHICLE_UNDRIVEABLE(iLocal_71, true);
		iLocal_265 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_recrash_rescue_fire", iLocal_71, -0.45f, -1.25f, -0.5f, 0f, 0f, 0f, 1f, false, false, true);
		if (bLocal_262)
		{
			iLocal_67 = PED::CREATE_PED(26, iLocal_247, Local_260, (fLocal_261 - 180f), true, true);
		}
		else
		{
			iLocal_67 = PED::CREATE_PED(26, iLocal_247, Local_260, fLocal_261, true, true);
		}
		PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iLocal_67, 0, 0.7f, 0.5f, 2);
		Local_57 = { ENTITY::GET_ENTITY_COORDS(iLocal_67, true) };
		MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Local_57.f_0, (Local_57.f_1 + 0.1f), (Local_57.f_2 + 0.1f), Local_57.f_0, (Local_57.f_1 - 0.1f), (Local_57.f_2 - 0.1f), 1, true, joaat("WEAPON_ASSAULTRIFLE"), 0, true, true, -1f);
		TASK::TASK_PLAY_ANIM(iLocal_67, sLocal_249, "BASE", 8f, -8f, -1, 9, 0f, false, false, false);
		if (__LIB_0__::func_121(iLocal_67))
		{
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_67, false);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_67, true);
		ENTITY::SET_ENTITY_HEALTH(iLocal_67, 115, 0);
		PED::SET_PED_DIES_WHEN_INJURED(iLocal_67, true);
		PED::SET_PED_KEEP_TASK(iLocal_67, true);
		PED::SET_PED_DIES_IN_VEHICLE(iLocal_67, true);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_67, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_67, 13, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_67, 17, true);
		PED::SET_PED_MOVEMENT_CLIPSET(iLocal_67, sLocal_250, 0.25f);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 229, true);
		__LIB_0__::func_222(&uLocal_76, 3, iLocal_67, "TALINA", 0, 1);
		PED::APPLY_PED_BLOOD(iLocal_67, 3, 0f, 0f, 0f, "wound_sheet");
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_67, false);
		iLocal_69 = PED::CREATE_PED(26, iLocal_246, 1935.53f, 6291.888f, 41.144f, -28.44f, true, true);
		iLocal_70 = 1;
		Local_57 = { ENTITY::GET_ENTITY_COORDS(iLocal_69, true) };
		PED::APPLY_PED_BLOOD(iLocal_69, 3, 0f, 0f, 0f, "wound_sheet");
		MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Local_57.f_0, (Local_57.f_1 + 0.1f), (Local_57.f_2 + 0.1f), Local_57.f_0, (Local_57.f_1 - 0.1f), (Local_57.f_2 - 0.1f), 1, true, joaat("WEAPON_ASSAULTRIFLE"), 0, true, true, -1f);
		PED::SET_PED_CONFIG_FLAG(iLocal_69, 227, true);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_69, sLocal_252, "dead_ped", 1935.53f, 6291.888f, 41.144f, 0f, 0f, -28.44f, 1000f, -1000f, -1, 2102272, 0f, 2, 0);
		ENTITY::SET_ENTITY_HEALTH(iLocal_69, 0, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_246);
		if (__LIB_0__::func_683() == 0)
		{
			__LIB_0__::func_222(&uLocal_76, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		else if (__LIB_0__::func_683() == 1)
		{
			__LIB_0__::func_222(&uLocal_76, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		else if (__LIB_0__::func_683() == 2)
		{
			__LIB_0__::func_222(&uLocal_76, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		iLocal_241 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(33.7286f, 3850.767f, 1729.3109f) - Vector(3f, 25f, 25f), Vector(33.7286f, 3850.767f, 1729.3109f) + Vector(3f, 25f, 25f), false, true, true, true);
		iLocal_51 = 1;
	}
}

int func_322()//Position - 0x27AAC
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_323()//Position - 0x27AD0
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_241, false);
	if (__LIB_39__::func_333())
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	if (__LIB_0__::func_121(iLocal_71))
	{
		ENTITY::SET_ENTITY_PROOFS(iLocal_71, false, false, false, false, false, false, false, false);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_71, -400f);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_71, -100f);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_265))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_265, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_245))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_245, false);
		__LIB_0__::func_122(&iLocal_245, 0);
	}
	if (iLocal_273)
	{
		func_259(0);
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_55 - Vector(3f, 3f, 3f), Local_55 + Vector(3f, 3f, 3f), 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	__LIB_39__::func_344(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

