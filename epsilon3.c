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
	int iLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	struct<61> Local_81 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_82 = NULL;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	char* sLocal_85 = NULL;
	var uLocal_86 = 16;
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
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	int iLocal_251 = 0;
	bool bLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	float fLocal_264 = 0f;
	float fLocal_265 = 0f;
	float fLocal_266 = 0f;
	float fLocal_267 = 0f;
	float fLocal_268 = 0f;
	int iLocal_269 = 0;
	bool bLocal_270 = 0;
	struct<61> Local_271 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	uLocal_78 = __LIB_2__::func_910(60);
	uLocal_79 = __LIB_2__::func_910(14);
	sLocal_82 = "rcmepsilonism3";
	iLocal_83 = -1;
	sLocal_85 = "Marnie";
	fLocal_264 = 40f;
	fLocal_265 = 0.25f;
	fLocal_266 = 0.8f;
	fLocal_267 = -0.8f;
	fLocal_268 = 0.04f;
	Local_81 = { ScriptParam_271 };
	__LIB_14__::func_801(&Local_81);
	MISC::SET_MISSION_FLAG(true);
	iLocal_257 = __LIB_17__::func_33();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		if (AUDIO::PREPARE_MUSIC_EVENT("EPS_FAIL"))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL"))
			{
			}
		}
		__LIB_14__::func_872(1);
		func_329();
	}
	if (__LIB_0__::func_323())
	{
		Global_78564 = 1;
		iLocal_77 = 0;
		while (!func_319(&Local_81))
		{
			SYSTEM::WAIT(0);
		}
		Global_78564 = 0;
		__LIB_0__::func_427(1843.1725f, 4701.249f, 37.5487f, 320.2838f, 1, 0);
		func_317(0);
	}
	if (!__LIB_0__::func_323())
	{
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			__LIB_17__::func_417("EP_3_RCM_ALT1", 1);
		}
	}
	__LIB_0__::func_712(60, 0, 0);
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_AsTT", 0);
		SYSTEM::WAIT(0);
		__LIB_14__::func_863(Local_81.f_9, 0, 0, 0, 0, 0);
		switch (iLocal_83)
		{
			case -1:
				func_290();
				break;
			case 0:
				func_243();
				break;
			case 1:
				func_28();
				break;
			case 2:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x1B3
{
	char* sVar0;
	switch (iLocal_269)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			bLocal_270 = true;
			switch (iLocal_251)
			{
				case 0:
					break;
				case 1:
					sVar0 = "EPS3_FAILKILL";
					break;
				case 2:
					sVar0 = "EPS3_FAILHURT";
					break;
				case 3:
					sVar0 = "EPS3_FAILSCARE";
					break;
			}
			if (iLocal_251 == 0)
			{
				__LIB_14__::func_872(1);
			}
			else
			{
				__LIB_14__::func_880(sVar0, 1);
			}
			iLocal_269 = 1;
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				func_329();
			}
			else if (bLocal_270 == 0)
			{
				if (iLocal_251 == 3)
				{
					bLocal_270 = __LIB_0__::func_787(&uLocal_86, "FAN2AU", "FAN2_SCARED", 8, 1, 0, 0);
				}
			}
			break;
	}
}

void func_28()//Position - 0xBCE
{
	switch (iLocal_84)
	{
		case 0:
			__LIB_0__::func_229("EPS3_LEAVE", 7500, 1);
			iLocal_260 = MISC::GET_GAME_TIMER() + 7500;
			iLocal_261 = MISC::GET_GAME_TIMER();
			iLocal_262 = 10000;
			iLocal_84 = 1;
			break;
		case 1:
			if (iLocal_253 == 1)
			{
			}
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_81.f_28[0], 1) <= 1.4f)
			{
				if ((!__LIB_0__::func_75() && __LIB_0__::func_121(Local_81.f_28[0])) && (MISC::GET_GAME_TIMER() - iLocal_261) > 5000)
				{
					if (HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (__LIB_0__::func_787(&uLocal_86, "EPS3AUD", "EP3_FOLLOW", 8, 1, 0, 0))
						{
							iLocal_260 = MISC::GET_GAME_TIMER();
							iLocal_263++;
						}
					}
					else if (__LIB_0__::func_787(&uLocal_86, "EPS3AUD", "EP3_FOLLOW", 8, 0, 0, 0))
					{
						iLocal_260 = MISC::GET_GAME_TIMER();
						iLocal_263++;
					}
				}
			}
			else if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() && !__LIB_0__::func_75()) && (MISC::GET_GAME_TIMER() - iLocal_260) > iLocal_262)
			{
				if (__LIB_0__::func_121(Local_81.f_28[0]))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_81.f_28[0], 1) <= 10f)
					{
						if (iLocal_263 < 5)
						{
							if (__LIB_0__::func_787(&uLocal_86, "EPS3AUD", "EP3_FOLLOW", 8, 0, 0, 0))
							{
								iLocal_260 = MISC::GET_GAME_TIMER();
								iLocal_263++;
							}
						}
						else if (__LIB_0__::func_787(&uLocal_86, "EPS3AUD", "EP3_AMB", 8, 0, 0, 0))
						{
							iLocal_260 = MISC::GET_GAME_TIMER();
							iLocal_262 = 1000;
						}
					}
				}
			}
			if (__LIB_0__::func_121(Local_81.f_28[0]))
			{
				if (__LIB_0__::func_75())
				{
					if (iLocal_263 < 5)
					{
						if (!PED::IS_PED_HEADTRACKING_PED(Local_81.f_28[0], PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_81.f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
					}
				}
				else if (PED::IS_PED_HEADTRACKING_PED(Local_81.f_28[0], PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_CLEAR_LOOK_AT(Local_81.f_28[0]);
				}
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_81.f_28[0], 1) >= 100f && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_81.f_28[0], true), 3f))
				{
					iLocal_84 = 3;
				}
				if ((((((GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_81.f_28[0], false), 5f) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_81.f_28[0], false), 5f, false)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(Local_81.f_28[0], false), joaat("WEAPON_GRENADELAUNCHER"), 5f, false)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(Local_81.f_28[0], false), joaat("WEAPON_RPG"), 5f, false)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(Local_81.f_28[0], false), joaat("WEAPON_GRENADE"), 5f, false)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(Local_81.f_28[0], false), joaat("WEAPON_MOLOTOV"), 5f, false)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(Local_81.f_28[0], false), joaat("WEAPON_FLARE"), 5f, false))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
					TASK::OPEN_SEQUENCE_TASK(&iLocal_256);
					TASK::TASK_PLAY_ANIM(0, "rcmepsilonism3", "outro", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_256);
					TASK::TASK_PERFORM_SEQUENCE(Local_81.f_28[0], iLocal_256);
					iLocal_251 = 3;
					func_317(2);
				}
				if (PED::IS_PED_INJURED(Local_81.f_28[0]) || PED::IS_PED_RAGDOLL(Local_81.f_28[0]))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
					TASK::TASK_PERFORM_SEQUENCE(Local_81.f_28[0], iLocal_256);
					iLocal_251 = 2;
					func_317(2);
				}
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("EPS_FAIL");
				iLocal_251 = 1;
				func_317(2);
			}
			break;
		case 3:
			if (AUDIO::PREPARE_MUSIC_EVENT("EPS3_STOP"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("EPS3_STOP"))
				{
					__LIB_17__::func_14(2, 0);
					__LIB_17__::func_20(2, 0, 1);
					__LIB_17__::func_32(2, "EPS_1STEMAIL" /* GXT: Brother,~n~~n~These are the vehicles that the higher beings require:~n~Pegassi Vacca ~nrt~<img src='img://Epsilon_Cars/Eps3Vacca' vspace='0' height='128' width='244'/>~nrt~~n~Benefactor Surano ~nrt~<img src='img://Epsilon_Cars/Eps3Surano' vspace='0' height='128' width='244'/>~nrt~~n~Declasse Tornado ~nrt~<img src='img://Epsilon_Cars/Eps3Tornado2' vspace='0' height='128' width='244'/>~nrt~~n~Enus Super Diamond ~nrt~<img src='img://Epsilon_Cars/Eps3SuperD' vspace='0' height='128' width='244'/>~nrt~~n~Dinka Double-T ~nrt~<img src='img://Epsilon_Cars/Eps3Carbon' vspace='0' height='128' width='244'/>~nrt~~n~~n~Make sure these vehicles are delivered in a condition befitting the level of divine understanding that our thesis holders have reached.  Carry out this small task for us and you will be rewarded with knowledge of infinitely greater value.  Kraff be praised! */, 1);
					func_29();
				}
			}
			break;
	}
}

void func_29()//Position - 0xF7C
{
	int iVar0;
	if (AUDIO::PREPARE_MUSIC_EVENT("EPS3_STOP"))
	{
		if (AUDIO::TRIGGER_MUSIC_EVENT("EPS3_STOP"))
		{
		}
	}
	if (Global_113386.f_10049.f_104 == 0)
	{
		Global_113386.f_10049.f_104 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	}
	STATS::STAT_GET_INT(joaat("NUM_EPSILON_STEP"), &iVar0, -1);
	if (iVar0 < 6)
	{
		STATS::STAT_SET_INT(joaat("NUM_EPSILON_STEP"), 6, true);
		__LIB_0__::func_4(23, 6);
	}
	__LIB_0__::func_221(&uLocal_86, 3);
	func_30(75, 1);
	func_329();
}

void func_30(int iParam0, bool bParam1)//Position - 0xFEB
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_0__::func_775();
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
	__LIB_14__::func_873(iVar0, 0);
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
	__LIB_14__::func_857(iVar0, 1, 0, 0);
	__LIB_0__::func_46(0, 0);
	MemCopy(&sVar1, {__LIB_0__::func_330(iVar0)}, 4);
	__LIB_0__::func_44(&sVar1, __LIB_14__::func_792());
	func_57();
	if (BitTest(Global_113386.f_10016.f_25, 3))
	{
		__LIB_0__::func_18();
	}
	__LIB_14__::func_860();
	if (iParam0 == 210 || iParam0 == 211)
	{
		__LIB_0__::func_716(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		__LIB_0__::func_716(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		__LIB_0__::func_716(iParam0, 0, 0);
	}
	__LIB_0__::func_210();
}

void func_57()//Position - 0x214C
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
			iVar3 = __LIB_0__::func_216(iVar1);
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
				if (func_174(iVar1, 14, iVar2))
				{
					func_58(iVar1, 14, iVar2);
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

int func_58(int iParam0, int iParam1, int iParam2)//Position - 0x220D
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
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_174(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { __LIB_0__::func_459(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_58(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { __LIB_0__::func_466(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_58(iParam0, 14, uVar5[iVar3]))
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
		uVar6 = { __LIB_0__::func_459(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
		}
	}
	if (func_101(iParam0, iVar0, &iVar7, 0))
	{
		func_61(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_59(iParam0, iVar0, &iVar7))
	{
		func_61(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_59(int iParam0, int iParam1, int iParam2)//Position - 0x23C9
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_174(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x2490
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
										func_61(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_61(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_67(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_101(iParam0, iVar10, &iVar4, 1))
							{
								func_61(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_61(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_61(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_61(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_61(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_61(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_61(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_61(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_61(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_61(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_101(iParam0, iVar10, &iVar4, 0))
		{
			func_61(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_59(iParam0, iVar10, &iVar4))
		{
			func_61(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_67(int iParam0, int iParam1, int iParam2)//Position - 0x34CD
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
				if (func_174(iParam0, iParam1, iVar0))
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
				if (func_174(iParam0, iParam1, iVar1))
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

int func_101(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9BA5
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_174(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_174(int iParam0, int iParam1, int iParam2)//Position - 0x1FFE0
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
				if (!func_174(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_174(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_174(iParam0, 14, iVar4))
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
			if (!func_174(iParam0, 14, uVar8[iVar7]))
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

void func_243()//Position - 0x28B4E
{
	switch (iLocal_84)
	{
		case 0:
			iLocal_259 = 0;
			if (__LIB_0__::func_323())
			{
				if (__LIB_0__::func_324())
				{
					__LIB_0__::func_433(0, -1, 1);
				}
				__LIB_17__::func_417("EP_3_RCM_ALT1", 0);
				HUD::REQUEST_ADDITIONAL_TEXT("EPS3", 0);
				while (!CUTSCENE::HAS_CUTSCENE_LOADED() && !HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
				{
					SYSTEM::WAIT(0);
				}
				__LIB_17__::func_418(0, 0, 0);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_14__::func_862();
			}
			else if (__LIB_14__::func_740(1, 1093140480, 0))
			{
				if (__LIB_0__::func_121(Local_81.f_28[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_81.f_28[0], sLocal_85, 0, 0, 0);
				}
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 0, 0);
				}
				__LIB_14__::func_841();
				RECORDING::REPLAY_START_EVENT(1);
				CUTSCENE::START_CUTSCENE(0);
				SYSTEM::WAIT(0);
				CAM::STOP_GAMEPLAY_HINT(false);
				if (__LIB_0__::func_323())
				{
					__LIB_0__::func_84(500, 0);
				}
				__LIB_14__::func_592(1842.1902f, 4707.64f, 36.875866f, 1845.4861f, 4701.726f, 40.280556f, 9f, 1819.401f, 4707.2886f, 38.1416f, 274.5804f, 1, 1, 1, 0, 0);
				func_258(1835.53f, 4705.86f, 38.1f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				iLocal_84 = 1;
			}
			break;
		case 1:
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				iLocal_84 = 2;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MICHAEL", 0))
			{
				RECORDING::REPLAY_STOP_EVENT();
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
					iLocal_253 = 1;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_85, 0))
			{
				if (__LIB_0__::func_121(Local_81.f_28[0]))
				{
					TASK::TASK_PLAY_ANIM(Local_81.f_28[0], sLocal_82, "base_loop", 1000f, -8f, -1, 262145, 0.01f, false, false, false);
					__LIB_14__::func_659(Local_81.f_28[0], 1843.82f, 4705.74f, 40.8f, 143.14f, 1, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_81.f_28[0], true, false);
				}
			}
			if (!iLocal_253)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				__LIB_17__::func_115(1, 1, 1, 1);
				iLocal_84 = 3;
			}
			else if (!iLocal_259)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("EPS3_START"))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("EPS3_START"))
					{
						iLocal_259 = 1;
					}
				}
			}
			break;
		case 2:
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
			__LIB_14__::func_806(250, 0);
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				__LIB_17__::func_419(1, 1, 1);
			}
			__LIB_17__::func_115(1, 1, 1, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			if (__LIB_0__::func_121(Local_81.f_28[0]))
			{
				TASK::TASK_PLAY_ANIM(Local_81.f_28[0], sLocal_82, "base_loop", 1000f, -8f, -1, 262145, 0f, false, false, false);
				__LIB_14__::func_659(Local_81.f_28[0], 1843.82f, 4705.74f, 40.8f, 143.14f, 1, 1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MICHAEL", 0))
			{
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
					iLocal_253 = 1;
				}
			}
			SYSTEM::WAIT(250);
			__LIB_0__::func_84(250, 0);
			iLocal_84 = 3;
			break;
		case 3:
			__LIB_0__::func_963(0, 0, 1, 0);
			__LIB_14__::func_800(&Local_81, 0, 1);
			func_317(1);
			break;
	}
}

void func_258(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x293C1
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_17__::func_114(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_0__::func_683())
			{
				case 0:
					if (func_174(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_61(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_174(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_61(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_174(PLAYER::PLAYER_PED_ID(), 8, 1) || func_174(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_61(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_174(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_61(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			iLocal_34 = 0;
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_34 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__::func_84(500, 0);
		}
	}
}

void func_290()//Position - 0x2A674
{
	__LIB_14__::func_862();
	if (__LIB_0__::func_121(Local_81.f_28[0]) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_81.f_28[0], 1) <= 9f)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
	}
	switch (iLocal_84)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT(sLocal_82);
			HUD::REQUEST_ADDITIONAL_TEXT("EPS3", 0);
			while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_82) && !HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				SYSTEM::WAIT(0);
			}
			if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_258 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
			}
			if (__LIB_0__::func_692(Local_81.f_28[0]))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_81.f_28[0], iLocal_258);
				PED::SET_PED_CONFIG_FLAG(Local_81.f_28[0], 132, true);
			}
			if (__LIB_0__::func_121(Local_81.f_28[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_81.f_28[0], true);
				PED::SET_PED_KEEP_TASK(Local_81.f_28[0], true);
			}
			bLocal_252 = false;
			__LIB_0__::func_222(&uLocal_86, 3, Local_81.f_28[0], "MARNIE", 0, 1);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_255);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1817.3235f, 4708.106f, 38.1031f, 1f, 20000, 0.25f, 1, 40000f);
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_255);
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_81.f_28[0], 1) >= 4f)
			{
				if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					if (__LIB_0__::func_121(Local_81.f_28[0]))
					{
						if (__LIB_7__::func_691())
						{
							CAM::SET_GAMEPLAY_ENTITY_HINT(Local_81.f_28[0], 0f, 0f, -0.5f, true, 30000, 2000, 2000, 0);
						}
						else
						{
							CAM::SET_GAMEPLAY_ENTITY_HINT(Local_81.f_28[0], -0.75f, 0f, -0.5f, true, 30000, 2000, 2000, 0);
						}
						CAM::SET_GAMEPLAY_HINT_FOV(fLocal_264);
						CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_265);
						CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_266);
						CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fLocal_267);
						CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(fLocal_268);
						CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
						__LIB_0__::func_963(1, 0, 1, 0);
					}
				}
				else
				{
					CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
				}
			}
			iLocal_84 = 1;
			break;
		case 1:
			if (__LIB_0__::func_121(Local_81.f_28[0]))
			{
				if (iLocal_254 == 0)
				{
					if (((__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_81.f_28[0], 1) <= 3f && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1847.7052f, 4703.0137f, 36.584274f, 1844.0837f, 4709.5317f, 39.737553f, 5f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1842.9769f, 4705.946f, 36.78089f, 1842.1605f, 4707.8516f, 40.105244f, 2.5f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1843.5267f, 4704.969f, 36.837273f, 1844.1777f, 4703.326f, 40.25331f, 2.5f, false, true, 0))
					{
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						}
						else
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						}
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_81.f_28[0], 0);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_81.f_28[0], 7000, 0, 2);
						iLocal_254 = 1;
					}
				}
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_81.f_28[0], 1) >= 4f)
				{
					if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						if (__LIB_0__::func_121(Local_81.f_28[0]))
						{
							CAM::SET_GAMEPLAY_ENTITY_HINT(Local_81.f_28[0], -0.75f, 0f, -0.5f, true, 30000, 2000, 2000, 0);
							CAM::SET_GAMEPLAY_HINT_FOV(fLocal_264);
							CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_265);
							CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_266);
							CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fLocal_267);
							CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(fLocal_268);
							CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
						}
					}
					else
					{
						CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
					}
				}
			}
			if (!bLocal_252)
			{
				bLocal_252 = __LIB_0__::func_787(&uLocal_86, "EPS3AUD", "EP3_RCM_L1", 8, 0, 0, 0);
				if (bLocal_252 && __LIB_0__::func_121(Local_81.f_28[0]))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_81.f_28[0], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_PLAY_ANIM(Local_81.f_28[0], sLocal_82, "leadin", 8f, -8f, -1, 786434, 0f, false, false, false);
				}
			}
			else if (!__LIB_0__::func_75())
			{
				SYSTEM::WAIT(500);
				iLocal_84 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_121(Local_81.f_28[0]))
			{
				if (PED::IS_PED_HEADTRACKING_PED(Local_81.f_28[0], PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_CLEAR_LOOK_AT(Local_81.f_28[0]);
				}
			}
			func_317(0);
			break;
	}
}

void func_317(int iParam0)//Position - 0x2B874
{
	iLocal_83 = iParam0;
	iLocal_84 = 0;
}

int func_319(var uParam0)//Position - 0x2B918
{
	int iVar0[1];
	int iVar1;
	struct<3> Var2;
	float fVar3;
	bool bVar4;
	int iVar5;
	Var2 = { 1843.82f, 4705.74f, 38.8f };
	fVar3 = __LIB_0__::func_503(1.99f);
	iVar0[0] = uLocal_78;
	switch (iLocal_77)
	{
		case 0:
			uParam0->f_16 = 3;
			uParam0->f_17[0 /*3*/] = { 1842.66f, 4704.65f, 37.81f };
			uParam0->f_15 = 9f;
			uParam0->f_25 = 1;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "EP_3_RCM_ALT1", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_17__::func_31(&(uParam0->f_48), "rcmepsilonism3", "base_loop", 0);
			iLocal_77 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !__LIB_14__::func_856(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_77 = 2;
			break;
		case 2:
			bVar4 = true;
			MISC::CLEAR_AREA_OF_PEDS(Var2, 35f, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_14__::func_842(&(uParam0->f_28[0]), 60, Var2, fVar3, "EPSILON LAUNCHER RC - MARNIE", 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]) && __LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
					{
						iVar5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_28[0], false);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], iVar5);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 132, true);
						TASK::TASK_PLAY_ANIM(uParam0->f_28[0], "rcmepsilonism3", "ep_3_rcm_marnie_meditating", 1000f, -8f, -1, 786433, 0f, false, false, false);
					}
					else
					{
						bVar4 = false;
					}
				}
			}
			if (bVar4)
			{
				iLocal_77 = 3;
			}
			break;
		case 3:
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_329()//Position - 0x2BCFC
{
	__LIB_14__::func_841();
	if (__LIB_0__::func_121(Local_81.f_28[0]))
	{
		if (PED::IS_PED_HEADTRACKING_PED(Local_81.f_28[0], PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_CLEAR_LOOK_AT(Local_81.f_28[0]);
		}
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_257, false);
	if (__LIB_14__::func_843())
	{
	}
	__LIB_0__::func_124(&(Local_81.f_28[0]), 1, 0, 1);
	__LIB_14__::func_871(&Local_81, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

