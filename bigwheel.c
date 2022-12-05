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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 16;
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
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	char* sLocal_160 = NULL;
	int iLocal_161 = 0;
	struct<7> Local_162[16];
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	float fLocal_165 = 0f;
	struct<3> Local_166 = { 0, 0, 0 } ;
	struct<3> Local_167 = { 0, 0, 0 } ;
	float fLocal_168 = 0f;
	float fLocal_169 = 0f;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	bool bLocal_176 = 0;
	int iLocal_177 = 0;
	struct<22> Local_178 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_189 = 2;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 2;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 2;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = -1027211264;
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
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_158 = joaat("prop_ld_ferris_wheel");
	iLocal_159 = joaat("prop_ferris_car_01");
	sLocal_160 = "MISSFINALE_C2IG_5";
	fLocal_164 = 0f;
	fLocal_165 = 2f;
	Local_166 = { -1663.97f, -1126.7f, 30.7f };
	Local_167 = { 0.5f, 0.5f, -1.94f };
	fLocal_168 = 13f;
	fLocal_169 = 260f;
	iLocal_171 = -1;
	iLocal_172 = -1;
	iLocal_173 = -1;
	iLocal_174 = -1;
	bLocal_176 = true;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_211(0);
	}
	MISC::SET_MISSION_FLAG(true);
	func_31();
	MISC::SET_BIT(&Global_78567, 6);
	while (true)
	{
		__LIB_0__.func_524(PLAYER::PLAYER_PED_ID());
		__LIB_0__.func_91();
		__LIB_0__.func_186();
		func_24();
		if (iLocal_229 == 0)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
			{
				__LIB_10__.func_696(500, 0);
				iLocal_229 = 1;
			}
		}
		else if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_211(1);
		}
		if (iLocal_163 >= 1)
		{
			func_211(1);
		}
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 1)
		{
			func_19(&(Local_162[1 /*7*/]), 1132593152);
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 236 /*INPUT_SCRIPT_SELECT*/))
		{
			if (iLocal_228 == 0)
			{
				func_15(1);
			}
			else
			{
				func_8();
			}
		}
		if (iLocal_228 == 1)
		{
			if (bLocal_176 == 0)
			{
				__LIB_32__.func_617(&uLocal_211);
			}
			else
			{
				__LIB_7__.func_112(&Local_178, 1, 1, 0, 0, 1045220557, 0, 1065353216, 0);
				CAM::SET_CAM_ROT(Local_178.f_0, ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2) + Local_178.f_14, 2);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_8()//Position - 0xB88
{
	if (__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_26__.func_293(&uLocal_211);
		__LIB_2__.func_32(&Local_178, 0, 1);
		__LIB_20__.func_325(&uLocal_188, &uLocal_227, 0, 0, 1, 1);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		iLocal_228 = 0;
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_FERRIS_WHALE"))
		{
			AUDIO::STOP_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE");
		}
		AUDIO::START_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW");
	}
}

void func_15(bool bParam0)//Position - 0xE40
{
	struct<3> Var0;
	if (__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()))
	{
		if (bParam0)
		{
			__LIB_10__.func_835(&uLocal_227, 0);
		}
		Local_178.f_20 = 160;
		Local_178.f_21 = 20;
		if (bLocal_176)
		{
			Var0 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, -0.25f, 0f) };
			__LIB_10__.func_838(&Local_178, Var0, ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2), 50f, Local_178.f_20, Local_178.f_21, 3, 1101004800, 0, 0, -1082130432, 0);
			CAM::ATTACH_CAM_TO_PED_BONE(Local_178.f_0, PLAYER::PLAYER_PED_ID(), 31086, 0f, -0.25f, 0f, true);
		}
		else
		{
			__LIB_10__.func_837(&uLocal_211, 1);
			__LIB_20__.func_326(&uLocal_211, 0, 3000);
		}
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW"))
		{
			AUDIO::STOP_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW");
		}
		AUDIO::START_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	iLocal_228 = 1;
}

void func_19(var uParam0, float fParam1)//Position - 0x1116
{
	char* sVar0;
	if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
	}
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	uParam0->f_1 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, fParam1, 2);
	PED::SET_SYNCHRONIZED_SCENE_ORIGIN(uParam0->f_1, 0f, 0f, 0f, 0f, 0f, fParam1, 2);
	PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_1, uParam0->f_3, -1);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_1, true);
	if (__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_KEEP_TASK(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 118, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 208, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), true);
		ENTITY::SET_ENTITY_LOD_DIST(PLAYER::PLAYER_PED_ID(), 1000);
		sVar0 = func_21(iLocal_170);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_1, sLocal_160, sVar0, 1000f, -8f, 0, 0, 1000f, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
		}
	}
	return;
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), true);
	PED::SET_PED_KEEP_TASK(PLAYER::PLAYER_PED_ID(), true);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 118, false);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 208, true);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 0, func_20(fParam1), 0f, 0f, fParam1, false, false, false, false, 2, true, 0);
	TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_160, func_21(iLocal_170), 1000f, -8f, -1, 1, 0f, false, false, false);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
}

Vector3 func_20(float fParam0)//Position - 0x1262
{
	struct<3> Var0;
	Var0.f_0 = (SYSTEM::SIN(fParam0) * Local_167.f_0);
	Var0.f_1 = (SYSTEM::COS(fParam0) * Local_167.f_1);
	Var0.f_2 = Local_167.f_2;
	return Var0;
}

char* func_21(int iParam0)//Position - 0x1293
{
	switch (iParam0)
	{
		case 0:
			return "Stand_Idle_1_PEDA";
			break;
		case 1:
			return "Stand_Idle_1_PEDB";
			break;
		case 2:
			return "Stand_Idle_2_PEDA";
			break;
		case 3:
			return "Stand_Idle_2_PEDB";
			break;
	}
	return __LIB_0__.func_459();
}

void func_24()//Position - 0x131E
{
	int iVar0;
	struct<3> Var1;
	fLocal_164 = (fLocal_164 + (fLocal_165 * SYSTEM::TIMESTEP()));
	if (fLocal_164 >= 360f)
	{
		fLocal_164 = (fLocal_164 - 360f);
		iLocal_163++;
	}
	if (__LIB_0__.func_524(iLocal_161))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_161, Local_166, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_161, (-fLocal_164 - (360f / 16f)), 0f, 0f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_161, true);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		if (__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		AUDIO::SET_AUDIO_SCENE_VARIABLE("FAIRGROUND_RIDES_FERRIS_WHALE", "HEIGHT", (Var1.f_2 - fLocal_168));
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_25(&(Local_162[iVar0 /*7*/]));
		iVar0++;
	}
}

void func_25(var uParam0)//Position - 0x13DF
{
	struct<3> Var0;
	Var0 = { func_27(uParam0->f_2) };
	if (__LIB_0__.func_121(uParam0->f_3))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_3, Var0, true, false, false, true);
		ENTITY::SET_ENTITY_LOD_DIST(uParam0->f_3, 1000);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_3, true);
	}
}

Vector3 func_27(int iParam0)//Position - 0x1443
{
	float fVar0;
	fVar0 = ((360f / SYSTEM::TO_FLOAT(16)) * SYSTEM::TO_FLOAT(iParam0));
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_161, 0f, (15.3f * SYSTEM::SIN(fVar0)), (-15.3f * SYSTEM::COS(fVar0)));
}

void func_31()//Position - 0x14FC
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	__LIB_8__.func_770(1);
	__LIB_10__.func_705(&uLocal_40, 0, iLocal_158);
	__LIB_10__.func_705(&uLocal_40, 1, iLocal_159);
	__LIB_10__.func_706(&uLocal_40, 2, 2, sLocal_160, 0);
	__LIB_10__.func_706(&uLocal_40, 3, 4, "SCRIPT\FERRIS_WHALE_01", 0);
	__LIB_10__.func_706(&uLocal_40, 4, 4, "SCRIPT\FERRIS_WHALE_02", 0);
	while (!__LIB_20__.func_327(&uLocal_40))
	{
		SYSTEM::WAIT(0);
	}
	func_68(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	MISC::CLEAR_AREA_OF_PROJECTILES(Local_166, 60f, 0);
	FIRE::STOP_FIRE_IN_RANGE(Local_166, 60f);
	if (!CAM::DOES_CAM_EXIST(iLocal_177))
	{
		iLocal_177 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -1659.4457f, -1120.8329f, 12.9255f, -3.6667f, 0f, 56.0716f, 50.1098f, true, 2);
		CAM::SET_CAM_PARAMS(iLocal_177, -1659.4457f, -1120.8329f, 12.9255f, -3.6667f, 0f, 56.0716f, 50.1098f, 0, 1, 1, 2);
		CAM::SET_CAM_ACTIVE(iLocal_177, true);
		CAM::SET_CAM_PARAMS(iLocal_177, -1659.1097f, -1120.7518f, 12.9489f, -5.5053f, 0f, 56.0716f, 50.1098f, 7000, 1, 1, 2);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		iLocal_175 = MISC::GET_GAME_TIMER() + 6000;
	}
	if (__LIB_0__.func_524(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
	{
		if (__LIB_30__.func_917(PLAYER::GET_PLAYERS_LAST_VEHICLE(), joaat("bagger")))
		{
			__LIB_32__.func_742(-1663.7396f, -1111.4716f, 11.591353f, -1663.5123f, -1139.9479f, 24.017221f, 16.5f, -1673.8156f, -1133.745f, 12.0226f, 92.5556f, 1, 1, 1, 0, 0);
		}
		else if (__LIB_30__.func_917(PLAYER::GET_PLAYERS_LAST_VEHICLE(), joaat("sandking")))
		{
			__LIB_32__.func_742(-1663.7396f, -1111.4716f, 11.591353f, -1663.5123f, -1139.9479f, 24.017221f, 16.5f, -1684.36f, -1129.6064f, 12.1347f, 105.6507f, 1, 1, 1, 0, 0);
		}
		else
		{
			__LIB_32__.func_742(-1663.7396f, -1111.4716f, 11.591353f, -1663.5123f, -1139.9479f, 24.017221f, 16.5f, -1570.8074f, -1022.1135f, 12.018f, 215.3015f, 1, 1, 1, 0, 0);
		}
	}
	if (__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		__LIB_10__.func_698(PLAYER::PLAYER_PED_ID(), -1668.4982f, -1125.6273f, 12.0699f);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 44.1132f);
	}
	__LIB_18__.func_191(64, 1, 0, 1, 0);
	__LIB_20__.func_435(&uLocal_188, -1703.854f, -1082.2223f, 42.006f, -8.3096f, 0f, -111.8213f, 0, 0);
	func_33();
	if (__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	}
	while (MISC::GET_GAME_TIMER() < iLocal_175)
	{
		SYSTEM::WAIT(0);
	}
	SYSTEM::WAIT(0);
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
	{
		func_15(0);
	}
	else
	{
		func_8();
	}
	__LIB_0__.func_151("FGND_SWTCHCAM" /* GXT: Press ~INPUT_SCRIPT_SELECT~ to change view.~n~Press ~INPUT_CONTEXT~ or ~INPUT_SKIP_CUTSCENE~ to skip the ride. */, -1);
	iLocal_171 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_171, "GENERATOR", iLocal_161, "THE_FERRIS_WHALE_SOUNDSET", false, 0);
	iLocal_173 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_173, "SLOW_SQUEAK", iLocal_161, "THE_FERRIS_WHALE_SOUNDSET", false, 0);
	iLocal_174 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_174, "SLOW_SQUEAK", Local_162[1 /*7*/].f_3, "THE_FERRIS_WHALE_SOUNDSET", false, 0);
	iLocal_172 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_172, "CARRIAGE", Local_162[1 /*7*/].f_3, "THE_FERRIS_WHALE_SOUNDSET", false, 0);
}

void func_33()//Position - 0x187E
{
	int iVar0;
	__LIB_18__.func_191(64, 1, 0, 1, 0);
	iLocal_161 = OBJECT::CREATE_OBJECT(iLocal_158, 0f, 1f, 2f, true, true, false);
	ENTITY::SET_ENTITY_COORDS(iLocal_161, Local_166, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_161, fLocal_164, 0f, 0f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_161, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_161, 1000);
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		AUDIO::START_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	iLocal_230 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_34(&(Local_162[iVar0 /*7*/]), iVar0, iVar0 == 1);
		func_25(&(Local_162[iVar0 /*7*/]));
		iVar0++;
	}
}

void func_34(var uParam0, int iParam1, bool bParam2)//Position - 0x190E
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	float fVar4;
	func_38(uParam0);
	uParam0->f_2 = iParam1;
	uParam0->f_3 = OBJECT::CREATE_OBJECT(iLocal_159, 0f, 1f, 2f, true, true, false);
	func_25(uParam0);
	if (bParam2 == 1)
	{
		func_19(uParam0, fLocal_169);
		*uParam0 = 1;
		return;
	}
	if (iLocal_230 >= 8)
	{
		return;
	}
	if (!func_37(uParam0->f_2))
	{
		return;
	}
	fVar4 = func_36(iLocal_230);
	uParam0->f_1 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, fVar4, 2);
	PED::SET_SYNCHRONIZED_SCENE_ORIGIN(uParam0->f_1, 0f, 0f, 0f, 0f, 0f, fVar4, 2);
	PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_1, uParam0->f_3, -1);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_1, true);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
		if (iVar2 != 0)
		{
			uParam0->f_4[iVar0] = PED::CREATE_RANDOM_PED(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true));
			if (__LIB_0__.func_524(uParam0->f_4[iVar0]))
			{
				PED::SET_PED_KEEP_TASK(uParam0->f_4[iVar0], true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_4[iVar0], 118, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_4[iVar0], 208, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_4[iVar0], true);
				ENTITY::SET_ENTITY_LOD_DIST(uParam0->f_4[iVar0], 1000);
				iVar1 = func_35(iLocal_230, iVar0);
				sVar3 = func_21(iVar1);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_4[iVar0], uParam0->f_1, sLocal_160, sVar3, 1000f, -8f, 0, 0, 1000f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_4[iVar0], false, false);
				}
			}
		}
		iVar0++;
	}
	*uParam0 = 1;
	iLocal_230++;
}

int func_35(int iParam0, int iParam1)//Position - 0x1A91
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				return 2;
			}
			else
			{
				return 3;
			}
			break;
		case 3:
			if (iParam1 == 0)
			{
				return 2;
			}
			else
			{
				return 3;
			}
			break;
		case 4:
			if (iParam1 == 0)
			{
				return 2;
			}
			else
			{
				return 3;
			}
			break;
		case 5:
			if (iParam1 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 6:
			if (iParam1 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 7:
			if (iParam1 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 8:
			if (iParam1 == 0)
			{
				return 2;
			}
			else
			{
				return 3;
			}
			break;
	}
	return 0;
}

float func_36(int iParam0)//Position - 0x1B8B
{
	switch (iParam0)
	{
		case 0:
			return 180f;
			break;
		case 1:
			return 340f;
			break;
		case 2:
			return 90f;
			break;
		case 3:
			return 250f;
			break;
		case 4:
			return 300f;
			break;
		case 5:
			return 160f;
			break;
		case 6:
			return 180f;
			break;
		case 7:
			return 340f;
			break;
		case 8:
			return 90f;
			break;
	}
	return 0f;
}

int func_37(int iParam0)//Position - 0x1C34
{
	switch (iParam0)
	{
		case 0:
		case 5:
		case 2:
		case 8:
		case 14:
		case 11:
		case 15:
		case 4:
		case 9:
			return 1;
		default:
	}
	return 0;
}

void func_38(var uParam0)//Position - 0x1C7E
{
	int iVar0;
	if (uParam0->f_3 == 0)
	{
		return;
	}
	__LIB_0__.func_123(&(uParam0->f_3));
	iVar0 = 0;
	while (iVar0 < uParam0->f_4)
	{
		__LIB_0__.func_0(&(uParam0->f_4[iVar0]));
		uParam0->f_4[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_3 = 0;
}

void func_68(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x6D17
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
					if (func_187(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_71(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_187(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_71(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_187(PLAYER::PLAYER_PED_ID(), 8, 1) || func_187(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_71(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_187(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_71(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			iLocal_39 = 0;
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_39 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__.func_84(500, 0);
		}
	}
}

int func_71(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x6F24
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
										func_71(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_71(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, func_80(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_79(iParam0, iVar10, &iVar4, 1))
							{
								func_71(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_71(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_71(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_71(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_71(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_71(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_71(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_71(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_71(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_71(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_79(iParam0, iVar10, &iVar4, 0))
		{
			func_71(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_72(iParam0, iVar10, &iVar4))
		{
			func_71(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_72(int iParam0, int iParam1, int iParam2)//Position - 0x7734
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_187(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_79(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x802A
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_187(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_80(int iParam0, int iParam1, int iParam2)//Position - 0x80C0
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
				if (func_187(iParam0, iParam1, iVar0))
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
				if (func_187(iParam0, iParam1, iVar1))
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

int func_187(int iParam0, int iParam1, int iParam2)//Position - 0x24D90
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
				if (!func_187(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_187(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_187(iParam0, 14, iVar4))
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
			if (!func_187(iParam0, 14, uVar8[iVar7]))
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

void func_211(bool bParam0)//Position - 0x25A23
{
	if (bParam0)
	{
		HUD::CLEAR_HELP(true);
		__LIB_10__.func_696(500, 1);
		MISC::CLEAR_BIT(&Global_78567, 6);
	}
	func_256();
	__LIB_26__.func_354(1, 1, 1, 1);
	__LIB_8__.func_770(0);
	__LIB_10__.func_835(&uLocal_227, 0);
	__LIB_10__.func_835(&iLocal_177, 0);
	__LIB_2__.func_32(&Local_178, 0, 1);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		AUDIO::STOP_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	__LIB_0__.func_524(PLAYER::PLAYER_PED_ID());
	if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
	}
	if (__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_10__.func_698(PLAYER::PLAYER_PED_ID(), -1668.4982f, -1125.6273f, 12.0699f);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 44.1132f);
	}
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	if (bParam0)
	{
		HUD::CLEAR_HELP(true);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
		SYSTEM::WAIT(125);
		__LIB_0__.func_84(500, 0);
		__LIB_42__.func_98(8, 1);
	}
	__LIB_20__.func_328(&uLocal_40);
	__LIB_24__.func_943(303, 0, 0);
	BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE("fairgroundHub");
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_256()//Position - 0x2783E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_162.f_0)
	{
		func_38(&(Local_162[iVar0 /*7*/]));
		iVar0++;
	}
	__LIB_0__.func_524(PLAYER::PLAYER_PED_ID());
	if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		AUDIO::STOP_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW"))
	{
		AUDIO::STOP_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW");
	}
	__LIB_2__.func_29(&iLocal_174);
	__LIB_2__.func_29(&iLocal_174);
	__LIB_2__.func_29(&iLocal_171);
	__LIB_2__.func_29(&iLocal_172);
	__LIB_10__.func_698(PLAYER::PLAYER_PED_ID(), -1658.5f, -1125.5f, 13f);
	__LIB_0__.func_123(&iLocal_161);
	__LIB_18__.func_191(64, 0, 0, 1, 0);
}

