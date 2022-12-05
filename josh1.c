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
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	struct<61> Local_81 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97 = 16;
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
	int iLocal_262 = 0;
	struct<61> Local_263 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	uLocal_78 = __LIB_2__.func_108(58);
	iLocal_79 = joaat("felon2");
	Local_88 = { -1106.999f, 288.96f, 63.4f };
	Local_89 = { 0f, 0f, 12.06f };
	Local_81 = { ScriptParam_263 };
	__LIB_20__.func_264(&Local_81);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__.func_135("Force cleanup [TERMINATING]");
		__LIB_38__.func_39(1);
		func_312();
	}
	if (__LIB_0__.func_294())
	{
		Global_78564 = 1;
		iLocal_77 = 0;
		while (!func_299(&Local_81))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_10__.func_700(&Local_81, 0, 1);
		Global_78564 = 0;
	}
	if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_262 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
	}
	if (__LIB_0__.func_121(Local_81.f_28[0]))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_81.f_28[0], iLocal_262);
		PED::SET_PED_CONFIG_FLAG(Local_81.f_28[0], 132, true);
	}
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_EC", 0);
		SYSTEM::WAIT(0);
		__LIB_35__.func_898(Local_81.f_9, 0, 0, 0, 0, 0);
		switch (iLocal_82)
		{
			case 0:
				func_271();
				break;
			case 1:
				func_247();
				break;
			case 2:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x17C
{
	switch (iLocal_83)
	{
		case 0:
			__LIB_11__.func_797("Doing setup for leadout");
			STREAMING::REQUEST_ANIM_DICT("rcmjosh1leadinout");
			STREAMING::REQUEST_MODEL(joaat("p_amb_phone_01"));
			if (STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh1leadinout") && STREAMING::HAS_MODEL_LOADED(joaat("p_amb_phone_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_85))
				{
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), false))
					{
						OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1107.01f, 289.38f, 64.76f, false, 0f, false);
					}
					iLocal_85 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), true, false, true);
				}
				iLocal_83 = 1;
			}
			break;
		case 1:
			if (iLocal_92 == 1)
			{
				__LIB_11__.func_797("Skip detected, waiting 500ms...");
				if ((MISC::GET_GAME_TIMER() - iLocal_93) >= 500)
				{
					__LIB_32__.func_751(1, 1, 1);
					iLocal_92 = 0;
				}
			}
			if (!iLocal_94)
			{
				if (__LIB_1__.func_197(Local_81.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_85))
				{
					iLocal_87 = PED::CREATE_SYNCHRONIZED_SCENE(Local_88, Local_89, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_81.f_28[0], iLocal_87, "rcmjosh1leadinout", "leadout_josh", 8f, -4f, 27, 0, 1000f, 16);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_85, iLocal_87, "leadout_gate", "rcmjosh1leadinout", 8f, 8f, 0, 1000f);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_85);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_81.f_28[0], true, false);
					__LIB_11__.func_797("Done Josh leadout anim");
					iLocal_94 = 1;
				}
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_87))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_87) > 0.29f)
				{
					if (!iLocal_95)
					{
						__LIB_0__.func_203(&uLocal_97, 2, PLAYER::PLAYER_PED_ID(), "Trevor", 0, 1);
						__LIB_0__.func_203(&uLocal_97, 5, Local_81.f_28[0], "Josh", 0, 1);
						if (__LIB_37__.func_799(&uLocal_97, "JOSH1AU", "JOSH1_OUT", 8, 0, 0, 0))
						{
							__LIB_11__.func_797("Leadout convo done");
							iLocal_95 = 1;
						}
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_87) > 0.98f)
				{
					__LIB_11__.func_797("Leadout done, end mission");
					iLocal_83 = 2;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1107.1068f, 290.4275f, 62.9487f, -1102.038f, 291.34207f, 66.278946f, 2f, false, true, 0))
				{
					__LIB_11__.func_797("Too close, stopping scene");
					if (__LIB_0__.func_121(Local_81.f_28[0]))
					{
						TASK::CLEAR_PED_TASKS(Local_81.f_28[0]);
						__LIB_11__.func_797("Stopping Josh?");
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_85, -8f, true);
					}
					iLocal_96 = 1;
				}
				if (__LIB_0__.func_76(Local_81.f_28[0], PLAYER::PLAYER_PED_ID(), 1) > 17.5f)
				{
					if (__LIB_0__.func_121(Local_81.f_28[0]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_81.f_28[0], -8f, true);
						TASK::CLEAR_PED_TASKS(Local_81.f_28[0]);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_85, -8f, true);
					}
					iLocal_96 = 1;
				}
				if ((PED::IS_PED_INJURED(Local_81.f_28[0]) || FIRE::IS_ENTITY_ON_FIRE(Local_81.f_28[0])) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_81.f_28[0], true), 5f))
				{
					if (__LIB_0__.func_121(Local_81.f_28[0]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_81.f_28[0], -8f, true);
						TASK::CLEAR_PED_TASKS(Local_81.f_28[0]);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_85))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_85, -8f, true);
					}
					iLocal_96 = 1;
				}
			}
			else
			{
				__LIB_11__.func_797("Leadout ended early, end mission");
				iLocal_83 = 2;
			}
			break;
		case 2:
			__LIB_10__.func_700(&Local_81, 0, 0);
			if (__LIB_0__.func_121(Local_81.f_28[0]))
			{
				if (iLocal_96 == 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_84);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1115.44f, 317.46f, 65.98f, 1f, 30000, 0.25f, 0, 40000f);
					TASK::TASK_PLAY_ANIM(0, "rcmjosh1@impatient", "enter", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "rcmjosh1@impatient", "idle_b", 8f, -8f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_84);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_84);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1115.44f, 317.46f, 65.98f, 1f, 30000, 0.25f, 1, 40000f);
					TASK::TASK_PLAY_ANIM(0, "rcmjosh1@impatient", "enter", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "rcmjosh1@impatient", "idle_b", 8f, -8f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_84);
				}
				TASK::TASK_PERFORM_SEQUENCE(Local_81.f_28[0], iLocal_84);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_84);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_81.f_28[0], false);
				if (iLocal_96 == 0)
				{
					PED::FORCE_PED_MOTION_STATE(Local_81.f_28[0], joaat("MotionState_Walk"), false, 0, true);
				}
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1107.01f, 289.38f, 64.76f, false, 0f, false);
			}
			if (iLocal_96 == 0)
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(904342475, 0f, true, true);
				__LIB_11__.func_797("Josh 4: PROP_LRGGATE_01c_L - Closed");
			}
			func_2();
			break;
	}
}

void func_2()//Position - 0x63C
{
	__LIB_24__.func_951(58, 2, 1);
	while (!__LIB_27__.func_930(joaat("TEXT_JOSH_1"), 0, 4, 58, 6000, 6000, 65, 0, -1, 17, 1))
	{
		SYSTEM::WAIT(0);
	}
	func_3(322, 1);
	func_312();
}

void func_3(int iParam0, bool bParam1)//Position - 0x67E
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_18__.func_205();
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
	__LIB_38__.func_136(iVar0, 0);
	MISC::SET_BIT(&Global_78567, 1);
	if (Global_112473[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		__LIB_0__.func_56(&(Global_112473[iVar0 /*10*/].f_9));
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
	__LIB_32__.func_577(iVar0, 1, 0, 0);
	__LIB_0__.func_46(0, 0);
	MemCopy(&sVar1, {__LIB_0__.func_339(iVar0)}, 4);
	__LIB_0__.func_44(&sVar1, __LIB_26__.func_250());
	func_31();
	if (BitTest(Global_113386.f_10016.f_25, 3))
	{
		__LIB_0__.func_18();
	}
	__LIB_35__.func_897();
	if (iParam0 == 210 || iParam0 == 211)
	{
		__LIB_24__.func_943(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		__LIB_24__.func_943(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		__LIB_24__.func_943(iParam0, 0, 0);
	}
	__LIB_0__.func_533();
}

void func_31()//Position - 0x1835
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
			iVar3 = __LIB_18__.func_168(iVar1);
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
				if (func_149(iVar1, 14, iVar2))
				{
					func_32(iVar1, 14, iVar2);
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

int func_32(int iParam0, int iParam1, int iParam2)//Position - 0x18F6
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_149(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { __LIB_18__.func_180(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_32(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_32(iParam0, 14, uVar5[iVar3]))
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
		uVar6 = { __LIB_18__.func_180(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__.func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
		}
	}
	if (func_75(iParam0, iVar0, &iVar7, 0))
	{
		func_35(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_33(iParam0, iVar0, &iVar7))
	{
		func_35(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_33(int iParam0, int iParam1, int iParam2)//Position - 0x1AB2
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_149(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x1B79
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
		Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__.func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_20__.func_322(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_6__.func_795(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_6__.func_795(iParam0, 9);
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
			iVar7 = __LIB_6__.func_788(iParam0, 1);
			if (!__LIB_6__.func_780(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_6__.func_788(iParam0, 0);
			if (!__LIB_6__.func_779(iVar10, 14, iVar8, -1) && !__LIB_6__.func_827(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_6__.func_788(iParam0, 2);
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
			uVar11 = { __LIB_18__.func_180(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, uVar11[iVar0], -1) };
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
							uVar12 = { __LIB_18__.func_247(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_20__.func_322(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_40__.func_943(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
							__LIB_0__.func_211(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_20__.func_322(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_40__.func_943(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, func_41(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_75(iParam0, iVar10, &iVar4, 1))
							{
								func_35(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_35(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_35__.func_896(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_35(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_35(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_35(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_35(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_35(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_18__.func_247(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_20__.func_322(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_943(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_20__.func_322(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__.func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__.func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_39__.func_857(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_75(iParam0, iVar10, &iVar4, 0))
		{
			func_35(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_33(iParam0, iVar10, &iVar4))
		{
			func_35(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_41(int iParam0, int iParam1, int iParam2)//Position - 0x2BB6
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
				if (func_149(iParam0, iParam1, iVar0))
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
				if (func_149(iParam0, iParam1, iVar1))
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
				return __LIB_6__.func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__.func_795(iParam0, iParam1);
		}
	}
	return -99;
}

int func_75(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x92C2
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_149(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_149(int iParam0, int iParam1, int iParam2)//Position - 0x1FA15
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_18__.func_180(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_149(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_149(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_149(iParam0, 14, iVar4))
										{
											if (!__LIB_24__.func_955(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__.func_795(iParam0, iVar2);
						Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_24__.func_955(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
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
		uVar8 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_149(iParam0, 14, uVar8[iVar7]))
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
	else if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_247()//Position - 0x2833D
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		__LIB_11__.func_797("Trying to set Josh component variation");
		if (__LIB_0__.func_121(Local_81.f_28[0]))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Josh", Local_81.f_28[0], 0);
		}
	}
	switch (iLocal_83)
	{
		case 0:
			if (__LIB_18__.func_170(1, 1093140480, 0))
			{
				STREAMING::REQUEST_ANIM_DICT("rcmjosh1@impatient");
				VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Josh1Driveaway");
				if (__LIB_0__.func_121(Local_81.f_28[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_81.f_28[0], "Josh", 0, 0, 0);
				}
				if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
				}
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1140.8501f, 263.47137f, 63.357758f, -1205.4403f, 412.15738f, 78.258896f, 43.75f, false, false, true);
				MISC::CLEAR_AREA_OF_VEHICLES(-1146.306f, 295.98312f, 66.136116f, 9f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-1143.2444f, 280.2762f, 65.41892f, 12f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-1152.426f, 313.61572f, 67.104294f, 12f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-1165.9656f, 332.6786f, 68.81f, 12f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-1178.7288f, 346.45724f, 70.046745f, 12f, false, false, false, false, false, false, 0);
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1140.8501f, 263.47137f, 63.357758f, -1205.4403f, 412.15738f, 78.258896f, 43.75f, false, false, false, false, false, 0, 0);
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (__LIB_1__.func_183(iVar0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -1115.9844f, 285.59244f, 61.942406f, -1097.5992f, 285.1346f, 66.346695f, 33f, false, true, 0))
					{
						Var1 = { -1098.87f, 280.88f, 63.47f };
						fVar2 = 85.98f;
					}
					else
					{
						Var1 = { -1095.2307f, 279.3389f, 62.7919f };
						fVar2 = 84.67f;
					}
				}
				else
				{
					Var1 = { -1095.2307f, 279.3389f, 62.7919f };
					fVar2 = 84.67f;
				}
				__LIB_26__.func_252();
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 0f, 0);
				RECORDING::REPLAY_START_EVENT(1);
				CUTSCENE::START_CUTSCENE(0);
				SYSTEM::WAIT(0);
				CAM::STOP_GAMEPLAY_HINT(false);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), false))
				{
					__LIB_11__.func_797("Locked left gate open?");
					OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1107.01f, 289.38f, 64.76f, true, 90f, false);
				}
				__LIB_32__.func_755(-1115.9844f, 285.59244f, 61.942406f, -1097.5992f, 285.1346f, 66.346695f, 33f, Var1, fVar2, 3f, 6f, 3f, 1, 1, 1, 0, 0);
				func_249(-1104.93f, 291.25f, 64.3f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				iLocal_83 = 1;
			}
			break;
		case 1:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				RECORDING::REPLAY_STOP_EVENT();
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 8f, 0);
				__LIB_11__.func_797("Done Trevor exit");
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Josh", 0))
			{
				__LIB_11__.func_797("Exit state for Josh...");
				if (!iLocal_94)
				{
					__LIB_11__.func_797("Played lead-out on Josh exit state");
					__LIB_10__.func_701(PLAYER::PLAYER_PED_ID(), -1104.65f, 289.02f, 63.25f, 16.6717f, 0, 1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					if (__LIB_1__.func_197(Local_81.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_85))
					{
						iLocal_87 = PED::CREATE_SYNCHRONIZED_SCENE(Local_88, Local_89, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_81.f_28[0], iLocal_87, "rcmjosh1leadinout", "leadout_josh", 1000f, -8f, 25, 0, 1000f, 16);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_85, iLocal_87, "leadout_gate", "rcmjosh1leadinout", 8f, 8f, 0, 1000f);
						__LIB_11__.func_797("Done Josh leadout anim on Josh exit state");
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_85);
						PED::FORCE_PED_MOTION_STATE(Local_81.f_28[0], joaat("MotionState_Idle"), false, 1, true);
						iLocal_94 = 1;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(true))
			{
				__LIB_11__.func_797("Exit state for camera...");
				if (!iLocal_94)
				{
					__LIB_11__.func_797("Played lead-out on camera exit state");
					__LIB_10__.func_701(PLAYER::PLAYER_PED_ID(), -1104.65f, 289.02f, 63.25f, 16.6717f, 0, 1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					if (__LIB_1__.func_197(Local_81.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_85))
					{
						iLocal_87 = PED::CREATE_SYNCHRONIZED_SCENE(Local_88, Local_89, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_81.f_28[0], iLocal_87, "rcmjosh1leadinout", "leadout_josh", 1000f, -8f, 25, 0, 1000f, 16);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_85, iLocal_87, "leadout_gate", "rcmjosh1leadinout", 8f, 8f, 0, 1000f);
						__LIB_11__.func_797("Done Josh leadout anim on cam exit state cutscene");
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_85);
						PED::FORCE_PED_MOTION_STATE(Local_81.f_28[0], joaat("MotionState_Idle"), false, 1, true);
						iLocal_94 = 1;
					}
				}
			}
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				iLocal_92 = 1;
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
				iLocal_93 = MISC::GET_GAME_TIMER();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), false))
				{
					ENTITY::REMOVE_MODEL_HIDE(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), false);
					OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1107.01f, 289.38f, 64.76f, true, 0f, false);
				}
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1101.62f, 290.36f, 64.76f, 5f, joaat("prop_lrggate_01c_r"), false))
				{
					ENTITY::REMOVE_MODEL_HIDE(-1101.62f, 290.36f, 64.76f, 5f, joaat("prop_lrggate_01c_r"), false);
					OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_r"), -1101.62f, 290.36f, 64.76f, true, 0f, false);
				}
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				__LIB_11__.func_797("cutscene not active...");
				if (!iLocal_94)
				{
					__LIB_11__.func_797("Played lead-out on not cutscene active");
					__LIB_10__.func_701(PLAYER::PLAYER_PED_ID(), -1104.65f, 289.02f, 63.25f, 16.6717f, 0, 1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					if (__LIB_1__.func_197(Local_81.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_85))
					{
						iLocal_87 = PED::CREATE_SYNCHRONIZED_SCENE(Local_88, Local_89, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_81.f_28[0], iLocal_87, "rcmjosh1leadinout", "leadout_josh", 8f, -8f, 25, 0, 1000f, 16);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_85, iLocal_87, "leadout_gate", "rcmjosh1leadinout", 8f, 8f, 0, 1000f);
						__LIB_11__.func_797("Done Josh leadout anim on non active cutscene");
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_85);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_81.f_28[0], false, false);
						iLocal_94 = 1;
					}
				}
				iLocal_83 = 2;
			}
			break;
		case 2:
			__LIB_32__.func_576(1, 1, 1, 1);
			iLocal_82 = 2;
			iLocal_83 = 0;
			break;
	}
}

void func_249(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x28A20
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_26__.func_258(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_18__.func_173())
			{
				case 0:
					if (func_149(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_149(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_149(PLAYER::PLAYER_PED_ID(), 8, 1) || func_149(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_149(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam4 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(__LIB_0__.func_85(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
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
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_34 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__.func_84(500, 0);
		}
	}
}

void func_271()//Position - 0x299CA
{
	__LIB_24__.func_930();
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		__LIB_11__.func_797("Trying to set Josh component variation");
		if (__LIB_0__.func_121(Local_81.f_28[0]))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Josh", Local_81.f_28[0], 0);
		}
	}
	switch (iLocal_83)
	{
		case 0:
			if (!__LIB_0__.func_2(0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1115.0707f, 279.6581f, 62.421844f, -1092.4285f, 284.13983f, 67.31652f, 15.75f, false, true, 0))
			{
				__LIB_11__.func_797("Doing setup for leadin");
				__LIB_0__.func_203(&uLocal_97, 2, PLAYER::PLAYER_PED_ID(), "Trevor", 0, 1);
				__LIB_0__.func_203(&uLocal_97, 5, Local_81.f_28[0], "Josh", 0, 1);
				STREAMING::REQUEST_ANIM_DICT("rcmjosh1leadinout");
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh1leadinout"))
				{
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), false))
					{
						OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1107.01f, 289.38f, 64.76f, false, 0f, false);
					}
					iLocal_85 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), true, false, true);
					__LIB_26__.func_258(1);
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("JOSH_1_INT_CONCAT", 14, 8);
					iLocal_83 = 1;
				}
			}
			else
			{
				__LIB_11__.func_797("Skipping setup for leadin (wrong area)");
				STREAMING::REQUEST_ANIM_DICT("rcmjosh1leadinout");
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), false))
				{
					OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1107.01f, 289.38f, 64.76f, false, 0f, false);
				}
				iLocal_85 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), true, false, true);
				iLocal_83 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__.func_2(0))
			{
				if (!bLocal_90)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1115.0707f, 279.6581f, 62.421844f, -1092.4285f, 284.13983f, 67.31652f, 15.75f, false, true, 0))
					{
						if (__LIB_1__.func_197(Local_81.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_85))
						{
							iLocal_86 = PED::CREATE_SYNCHRONIZED_SCENE(Local_88, Local_89, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_81.f_28[0], iLocal_86, "rcmjosh1leadinout", "leadin_josh", 8f, -8f, 25, 0, 1000f, 0);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_85, iLocal_86, "leadin_gate", "rcmjosh1leadinout", 8f, 8f, 0, 1000f);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_81.f_28[0], -1, 0, 2);
							TASK::TASK_LOOK_AT_ENTITY(Local_81.f_28[0], PLAYER::PLAYER_PED_ID(), 4000, 2060, 2);
							__LIB_11__.func_797("Done Josh leadin anim");
							bLocal_90 = true;
						}
					}
					else
					{
						if (!__LIB_0__.func_2(0) && !bLocal_90)
						{
							__LIB_11__.func_797("Cannot play lead-in, re-requesting cutscene with new sections");
							CUTSCENE::REMOVE_CUTSCENE();
							CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("JOSH_1_INT_CONCAT", 13, 8);
						}
						__LIB_11__.func_797("Replay in progress, skipping leadin");
						iLocal_83 = 2;
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_86))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_86) > 0.15f)
					{
						if (!iLocal_91)
						{
							if (__LIB_37__.func_799(&uLocal_97, "JOSH1AU", "JOSH1_LEADIN", 8, 0, 0, 0))
							{
								__LIB_11__.func_797("Leadin convo done");
								iLocal_91 = 1;
							}
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_86) > 0.9f)
					{
						__LIB_11__.func_797("Leadin anim done, launch cutscene");
						iLocal_83 = 2;
					}
					if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_81.f_28[0], 1) <= 2.5f)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					}
				}
				else
				{
					__LIB_11__.func_797("Leadin not playing, launch cutscene");
					iLocal_83 = 2;
				}
			}
			else
			{
				if (!__LIB_0__.func_2(0) && !bLocal_90)
				{
					__LIB_11__.func_797("Cannot play lead-in, re-requesting cutscene with new sections");
					CUTSCENE::REMOVE_CUTSCENE();
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("JOSH_1_INT_CONCAT", 13, 8);
				}
				__LIB_11__.func_797("Replay in progress, skipping leadin");
				iLocal_83 = 2;
			}
			break;
		case 2:
			iLocal_82 = 1;
			iLocal_83 = 0;
			break;
	}
}

int func_299(var uParam0)//Position - 0x2AAC4
{
	int iVar0[2];
	int iVar1;
	bool bVar2;
	iVar0[0] = uLocal_78;
	iVar0[1] = iLocal_79;
	switch (iLocal_77)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 1;
			uParam0->f_15 = 9f;
			StringCopy(&(uParam0->f_9), "JOSH_1_INT_CONCAT", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_11__.func_794(&(uParam0->f_48), "rcmjosh1", "idle", 0);
			iLocal_77 = 1;
			break;
		case 1:
			if (!__LIB_10__.func_716(&iVar0) || !__LIB_20__.func_273(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_77 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!__LIB_26__.func_256(&(uParam0->f_28[0]), 58, -1104.72f, 291.02f, 64.39f, 138.35f, "JOSH LAUNCHER RC", 1))
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				func_301(&(uParam0->f_35[0]), 1);
			}
			if (!__LIB_29__.func_803(1, 1))
			{
				bVar2 = false;
			}
			if (bVar2)
			{
				iLocal_77 = 3;
			}
			break;
		case 3:
			PATHFIND::SET_PED_PATHS_IN_AREA(-1112.67f, 287.38f, 62.85f, -1096.41f, 297.5f, 65.59f, false, 0);
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

void func_301(int* iParam0, bool bParam1)//Position - 0x2AC9F
{
	struct<3> Var0;
	float fVar1;
	if (bParam1)
	{
		Var0 = { -1129.18f, 300.55f, 65.92f };
		fVar1 = 86.97f;
	}
	else
	{
		Var0 = { -1139.759f, 291.483f, 66.327f };
		fVar1 = 6.077003f;
	}
	__LIB_20__.func_649(iParam0, iLocal_79, Var0, fVar1);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, 4);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam0, 3);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, false, 0);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(*iParam0, true);
}

void func_312()//Position - 0x2B001
{
	__LIB_26__.func_252();
	if (__LIB_26__.func_257())
	{
		__LIB_11__.func_797("...Random Character Script was triggered so additional cleanup required");
	}
	__LIB_0__.func_124(&(Local_81.f_28[0]), 1, 1, 1);
	__LIB_32__.func_757(&Local_81, 1, 0, 0);
	PATHFIND::SET_PED_PATHS_IN_AREA(-1112.67f, 287.38f, 62.85f, -1096.41f, 297.5f, 65.59f, true, 0);
	PATHFIND::DISABLE_NAVMESH_IN_AREA(-1112.67f, 287.38f, 62.85f, -1096.41f, 297.5f, 65.59f, false);
	CAM::DESTROY_ALL_CAMS(false);
	TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	SCRIPT::TERMINATE_THIS_THREAD();
}

