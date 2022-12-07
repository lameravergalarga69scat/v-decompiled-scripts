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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	struct<3> Local_52 = { 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 16;
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
	int* iLocal_223 = NULL;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	struct<2> Local_228 = { 0, 5 } ;
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
	var uLocal_244 = 5;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<42> Var0;
	int iVar1[3];
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	iLocal_49 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_50 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_52 = { 0f, 0f, 0f };
	iLocal_227 = -1;
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	__LIB_29__::func_777(&Var0);
	Local_52 = { ScriptParam_228.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		if (Var0.f_0 != -1)
		{
			if (Global_112473[Var0.f_0 /*10*/].f_9 != -1)
			{
				__LIB_0__::func_135("Relinquishing candidate id...");
				__LIB_0__::func_56(&(Global_112473[Var0.f_0 /*10*/].f_9));
			}
		}
		func_270(&Var0, 1);
	}
	iVar1[0] = 58;
	iVar1[1] = 59;
	iVar1[2] = 62;
	if (!__LIB_37__::func_336(&iVar1, &Var0, Local_52, 1f))
	{
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_259(Var0.f_0))
	{
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_37__::func_329(Var0.f_0))
	{
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_8__::func_915(43))
	{
		__LIB_0__::func_135("SP_MISSION_LAMAR is available... [TERMINATING]");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else if (__LIB_8__::func_915(47))
	{
		__LIB_0__::func_135("SP_MISSION_MICHAEL_2 is available... [TERMINATING]");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else if (__LIB_8__::func_915(40))
	{
		__LIB_0__::func_135("SP_MISSION_FRANKLIN_0 is available... [TERMINATING]");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else if (__LIB_8__::func_915(41))
	{
		__LIB_0__::func_135("SP_MISSION_FRANKLIN_1 is available... [TERMINATING]");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (!func_255(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			__LIB_0__::func_135("Player out of range [TERMINATING]");
			func_270(&Var0, 1);
		}
	}
	MISC::CLEAR_AREA(Local_52, 5f, true, false, false, false);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!__LIB_41__::func_981(&Var0, 1) || __LIB_37__::func_329(Var0.f_0))
		{
			func_270(&Var0, 1);
		}
		if (__LIB_8__::func_915(43))
		{
			__LIB_0__::func_135("SP_MISSION_LAMAR became available... [TERMINATING]");
			func_270(&Var0, 1);
		}
		else if (__LIB_8__::func_915(47))
		{
			__LIB_0__::func_135("SP_MISSION_MICHAEL_2 became available... [TERMINATING]");
			func_270(&Var0, 1);
		}
		else if (__LIB_8__::func_915(40))
		{
			__LIB_0__::func_135("SP_MISSION_FRANKLIN_0 became available... [TERMINATING]");
			func_270(&Var0, 1);
		}
		else if (__LIB_8__::func_915(41))
		{
			__LIB_0__::func_135("SP_MISSION_FRANKLIN_1 became available... [TERMINATING]");
			func_270(&Var0, 1);
		}
		__LIB_37__::func_326(Var0.f_0);
		__LIB_37__::func_333(&iLocal_227, &(Var0.f_9), Local_52);
		func_186(&Var0);
		if (__LIB_41__::func_978(&Var0, 0))
		{
			if (!__LIB_42__::func_853(&Var0))
			{
				func_270(&Var0, 1);
			}
			if (__LIB_29__::func_757(&Var0))
			{
				func_270(&Var0, 0);
			}
		}
	}
}

void func_186(var uParam0)//Position - 0xC8DF
{
	float fVar0;
	if (__LIB_0__::func_200() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		return;
	}
	if (!iLocal_56)
	{
		STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_1@franklin_1a");
		STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_1@franklin_1b");
		STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_1@franklin_1c");
		STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_2@franklin_2a");
		STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_2@franklin_2b");
		STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_2@franklin_2c");
		STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_3@franklin_3a");
		STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_3@franklin_3b");
		STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_4@franklin_4a");
		STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_4@franklin_4b");
		STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_4@franklin_4c");
		if ((((((((((STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_1@franklin_1a") && STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_1@franklin_1b")) && STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_1@franklin_1c")) && STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_2@franklin_2a")) && STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_2@franklin_2b")) && STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_2@franklin_2c")) && STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_3@franklin_3a")) && STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_3@franklin_3b")) && STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_4@franklin_4a")) && STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_4@franklin_4b")) && STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_4@franklin_4c"))
		{
			iLocal_56 = 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_52);
		if (fVar0 < (20f * 20f) && iLocal_56)
		{
			switch (iLocal_57)
			{
				case 0:
					if (!__LIB_0__::func_75())
					{
						__LIB_0__::func_203(&uLocal_58, 3, uParam0->f_28[0], "TONYA", 0, 1);
						if (*uParam0 == 58)
						{
							__LIB_35__::func_984(&uLocal_58, "TOWAUD", "TONYA_BECK_1", 4, 0, 0, 0);
							if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0], false))
							{
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_54);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_5@franklin_5a", "hey_franklin_0", 2f, -4f, -1, 262144, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_5@franklin_5b", "hey_franklin_1", 4f, -4f, -1, 262144, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_5@franklin_5c", "hey_franklin_2", 4f, -4f, -1, 262144, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 2f, -2f, -1, 262145, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_54);
								TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], iLocal_54);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
							}
						}
						else if (*uParam0 == 59)
						{
							__LIB_36__::func_30(&uLocal_58, "TOWAUD", "TONYA_BECK2", "TONYA_BECK2_1", 4, 0, 0);
							if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0], false))
							{
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_54);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_5@franklin_5a", "hey_franklin_0", 4f, -4f, -1, 262144, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_5@franklin_5b", "hey_franklin_1", 4f, -4f, -1, 262144, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_5@franklin_5c", "hey_franklin_2", 4f, -4f, -1, 262144, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 4f, -4f, -1, 262145, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_54);
								TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], iLocal_54);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
							}
						}
						else if (*uParam0 == 62)
						{
							__LIB_36__::func_30(&uLocal_58, "TOWAUD", "TONYA_BECKON", "TONYA_BECKON_1", 4, 0, 0);
							if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0], false))
							{
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_54);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_5@franklin_5a", "hey_franklin_0", 4f, -4f, -1, 262144, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_5@franklin_5b", "hey_franklin_1", 4f, -4f, -1, 262144, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_5@franklin_5c", "hey_franklin_2", 4f, -4f, -1, 262144, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 4f, -4f, -1, 262145, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_54);
								TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], iLocal_54);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
							}
						}
						if (!__LIB_0__::func_736(&iLocal_223))
						{
							__LIB_18__::func_276(&iLocal_223);
						}
						else
						{
							__LIB_6__::func_892(&iLocal_223);
						}
						iLocal_57 = 1;
						iLocal_226 = 0;
					}
					break;
				case 1:
					if (!__LIB_0__::func_75())
					{
						if (__LIB_0__::func_736(&iLocal_223))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0], false))
							{
								TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 4);
							}
							__LIB_6__::func_892(&iLocal_223);
							iLocal_57 = 2;
						}
					}
					break;
				case 2:
					if (__LIB_0__::func_736(&iLocal_223))
					{
						if (__LIB_7__::func_78(&iLocal_223) > MISC::GET_RANDOM_FLOAT_IN_RANGE(9f, 15f))
						{
							iLocal_226++;
							switch (iLocal_226)
							{
								case 1:
									if (*uParam0 == 58)
									{
										__LIB_35__::func_984(&uLocal_58, "TOWAUD", "TONYA_BECK_2", 4, 0, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0], false))
										{
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_54);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_4@franklin_4a", "whats_wrong_with_you_0", 2f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_4@franklin_4b", "whats_wrong_with_you_1", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_4@franklin_4c", "whats_wrong_with_you_2", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 2f, -2f, -1, 262145, 0f, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_54);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], iLocal_54);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											iLocal_57 = 1;
										}
									}
									else if (*uParam0 == 59)
									{
										__LIB_36__::func_30(&uLocal_58, "TOWAUD", "TONYA_BECK2", "TONYA_BECK2_2", 4, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0], false))
										{
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_54);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_4@franklin_4a", "whats_wrong_with_you_0", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_4@franklin_4b", "whats_wrong_with_you_1", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_4@franklin_4c", "whats_wrong_with_you_2", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 4f, -4f, -1, 262145, 0f, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_54);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], iLocal_54);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											iLocal_57 = 1;
										}
									}
									else if (*uParam0 == 62)
									{
										__LIB_36__::func_30(&uLocal_58, "TOWAUD", "TONYA_BECKON", "TONYA_BECKON_2", 4, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0], false))
										{
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_54);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_4@franklin_4a", "whats_wrong_with_you_0", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_4@franklin_4b", "whats_wrong_with_you_1", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_4@franklin_4c", "whats_wrong_with_you_2", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 4f, -4f, -1, 262145, 0f, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_54);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], iLocal_54);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											iLocal_57 = 1;
										}
									}
									break;
								case 2:
									if (*uParam0 == 58)
									{
										__LIB_35__::func_984(&uLocal_58, "TOWAUD", "TONYA_BECK_3", 4, 0, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0], false))
										{
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_54);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_1@franklin_1a", "seriously_franklin_get_your_fat_0", 2f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_1@franklin_1b", "seriously_franklin_get_your_fat_1", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_1@franklin_1c", "seriously_franklin_get_your_fat_2", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 2f, -2f, -1, 262145, 0f, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_54);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], iLocal_54);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											iLocal_57 = 1;
										}
									}
									else if (*uParam0 == 59)
									{
										__LIB_36__::func_30(&uLocal_58, "TOWAUD", "TONYA_BECK2", "TONYA_BECK2_3", 4, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0], false))
										{
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_54);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_1@franklin_1a", "seriously_franklin_get_your_fat_0", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_1@franklin_1b", "seriously_franklin_get_your_fat_1", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_1@franklin_1c", "seriously_franklin_get_your_fat_2", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 4f, -4f, -1, 262145, 0f, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_54);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], iLocal_54);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											iLocal_57 = 1;
										}
									}
									else if (*uParam0 == 62)
									{
										__LIB_36__::func_30(&uLocal_58, "TOWAUD", "TONYA_BECKON", "TONYA_BECKON_3", 4, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0], false))
										{
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_54);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_1@franklin_1a", "seriously_franklin_get_your_fat_0", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_1@franklin_1b", "seriously_franklin_get_your_fat_1", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_1@franklin_1c", "seriously_franklin_get_your_fat_2", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 4f, -4f, -1, 262145, 0f, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_54);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], iLocal_54);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											iLocal_57 = 1;
										}
									}
									break;
								case 3:
									if (*uParam0 == 58)
									{
										__LIB_35__::func_984(&uLocal_58, "TOWAUD", "TONYA_BECK_4", 4, 0, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0], false))
										{
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_54);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_3@franklin_3a", "dont_be_actin_like_you_dont_know_me_0", 2f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_3@franklin_3b", "dont_be_actin_like_you_dont_know_me_1", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 2f, -2f, -1, 262145, 0f, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_54);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], iLocal_54);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											iLocal_57 = 1;
										}
									}
									else if (*uParam0 == 59)
									{
										__LIB_36__::func_30(&uLocal_58, "TOWAUD", "TONYA_BECK2", "TONYA_BECK2_4", 4, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0], false))
										{
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_54);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_3@franklin_3a", "dont_be_actin_like_you_dont_know_me_0", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_3@franklin_3b", "dont_be_actin_like_you_dont_know_me_1", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 4f, -4f, -1, 262145, 0f, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_54);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], iLocal_54);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											iLocal_57 = 1;
										}
									}
									else if (*uParam0 == 62)
									{
										__LIB_36__::func_30(&uLocal_58, "TOWAUD", "TONYA_BECKON", "TONYA_BECKON_4", 4, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0], false))
										{
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_54);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_3@franklin_3a", "dont_be_actin_like_you_dont_know_me_0", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_3@franklin_3b", "dont_be_actin_like_you_dont_know_me_1", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 4f, -4f, -1, 262145, 0f, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_54);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], iLocal_54);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											iLocal_57 = 1;
										}
									}
									break;
								case 4:
									if (*uParam0 == 58)
									{
										__LIB_35__::func_984(&uLocal_58, "TOWAUD", "TONYA_BECK_5", 4, 0, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0], false))
										{
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_54);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_2@franklin_2a", "seriously_franklin_im_tonya_0", 2f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_2@franklin_2b", "seriously_franklin_im_tonya_1", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_2@franklin_2c", "seriously_franklin_im_tonya_2", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 2f, -2f, -1, 262145, 0f, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_54);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], iLocal_54);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											iLocal_57 = 1;
										}
									}
									else if (*uParam0 == 59)
									{
										__LIB_36__::func_30(&uLocal_58, "TOWAUD", "TONYA_BECK2", "TONYA_BECK2_5", 4, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0], false))
										{
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_54);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_2@franklin_2a", "seriously_franklin_im_tonya_0", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_2@franklin_2b", "seriously_franklin_im_tonya_1", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_2@franklin_2c", "seriously_franklin_im_tonya_2", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 4f, -4f, -1, 262145, 0f, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_54);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], iLocal_54);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											iLocal_57 = 1;
										}
									}
									else if (*uParam0 == 62)
									{
										__LIB_36__::func_30(&uLocal_58, "TOWAUD", "TONYA_BECKON", "TONYA_BECKON_5", 4, 0, 0);
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_28[0], false))
										{
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_54);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_2@franklin_2a", "seriously_franklin_im_tonya_0", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_2@franklin_2b", "seriously_franklin_im_tonya_1", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@franklin_2@franklin_2c", "seriously_franklin_im_tonya_2", 4f, -4f, -1, 262144, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 4f, -4f, -1, 262145, 0f, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_54);
											TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], iLocal_54);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_54);
											iLocal_57 = 1;
										}
									}
									break;
							}
							if (iLocal_226 > 4)
							{
								iLocal_226 = 1;
								iLocal_57 = 1;
							}
						}
					}
					break;
				case 3:
					break;
				}
			}
	}
}

int func_255(int iParam0)//Position - 0xFC34
{
	if (!func_256(iParam0))
	{
		return 0;
	}
	iLocal_53 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_52 - Vector(10f, 10f, 10f), Local_52 + Vector(10f, 10f, 10f), false, true, true, true);
	iLocal_55 = 1;
	__LIB_0__::func_135("Created initial scene");
	return 1;
}

int func_256(var uParam0)//Position - 0xFC88
{
	bool bVar0;
	int iVar1;
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 11f;
			uParam0->f_27 = 0;
			if (*uParam0 == 58)
			{
				StringCopy(&(uParam0->f_9), "tonya_mcs_1", 24);
			}
			else if (*uParam0 == 59)
			{
				StringCopy(&(uParam0->f_9), "tonya_mcs_2", 24);
			}
			else if (*uParam0 == 62)
			{
				StringCopy(&(uParam0->f_9), "tonya_mcs_3", 24);
			}
			STREAMING::REQUEST_MODEL(joaat("IG_Tonya"));
			STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@intro");
			STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@base");
			STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_5@franklin_5a");
			STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_5@franklin_5b");
			STREAMING::REQUEST_ANIM_DICT("special_ped@tonya@franklin_5@franklin_5c");
			iLocal_51 = 1;
			break;
		case 1:
			if (((((!STREAMING::HAS_MODEL_LOADED(joaat("IG_Tonya")) || !STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@intro")) || !STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@base")) || !STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_5@franklin_5a")) || !STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_5@franklin_5b")) || !STREAMING::HAS_ANIM_DICT_LOADED("special_ped@tonya@franklin_5@franklin_5c"))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar0 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				uParam0->f_28[0] = PED::CREATE_PED(5, joaat("IG_Tonya"), -16.53f, -1473.12f, 29.61f, 319.56f, true, true);
				if (__LIB_0__::func_121(uParam0->f_28[0]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_28[0], true, 1);
					PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("IG_Tonya"), true);
					PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_28[0], false);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_28[0], false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 185, true);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 0, 0, 0);
				}
				else
				{
					bVar0 = false;
				}
			}
			if (bVar0)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_121(uParam0->f_28[0]) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@intro", "idle_intro", 4f, -4f, -1, 262144, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "special_ped@tonya@base", "base", 4f, -4f, -1, 262145, 0f, false, false, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], iVar1);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 4);
			}
			MISC::CLEAR_AREA_OF_OBJECTS(-16.53f, -1473.12f, 29.61f, 1f, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Tonya"));
			return 1;
			break;
	}
	return 0;
}

int func_259(int iParam0)//Position - 0xFFF7
{
	char* sVar0;
	if (Global_78319)
	{
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_113386.f_9085 && !__LIB_0__::func_2(1))
	{
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_260(iParam0))
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_100441.f_11 == 6)
	{
		if (Global_100441 < 9)
		{
			__LIB_6__::func_773(iParam0, &sVar0);
			if (MISC::ARE_STRINGS_EQUAL(&(Global_100441.f_3), sVar0))
			{
				__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("candidate_controller")) == 0)
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_260(int iParam0)//Position - 0x100B4
{
	var uVar0;
	__LIB_6__::func_773(iParam0, &uVar0);
	if (!__LIB_6__::func_763(4))
	{
		if (__LIB_34__::func_833(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_0__::func_569() && !__LIB_0__::func_568())
	{
		return 0;
	}
	if (__LIB_29__::func_776(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = __LIB_18__::func_205();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!__LIB_6__::func_865(iParam0))
	{
		if (!__LIB_29__::func_775(iParam0))
		{
			return 0;
		}
		if (!__LIB_29__::func_774(iParam0))
		{
			return 0;
		}
		if (__LIB_0__::func_528(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_261(5))
		{
			Global_112473[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_112473[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_261(int iParam0)//Position - 0x10175
{
	int iVar0;
	char* sVar1;
	int iVar2;
	if (Global_100493.f_373 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_261(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_10__::func_605(iParam0, &sVar1);
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95479[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_100493.f_373 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_270(int iParam0, bool bParam1)//Position - 0x104EA
{
	__LIB_6__::func_771();
	if (bParam1)
	{
		__LIB_0__::func_135("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		__LIB_32__::func_757(iParam0, 0, 0, 0);
	}
	STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@intro");
	STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@base");
	if (iLocal_56)
	{
		STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_1@franklin_1a");
		STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_1@franklin_1b");
		STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_1@franklin_1c");
		STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_2@franklin_2a");
		STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_2@franklin_2b");
		STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_2@franklin_2c");
		STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_3@franklin_3a");
		STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_3@franklin_3b");
		STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_4@franklin_4a");
		STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_4@franklin_4b");
		STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_4@franklin_4c");
	}
	STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_5@franklin_5a");
	STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_5@franklin_5b");
	STREAMING::REMOVE_ANIM_DICT("special_ped@tonya@franklin_5@franklin_5c");
	if (iLocal_227 != -1)
	{
		__LIB_0__::func_135("SCRIPT TERMINATING: Ending off-mission cutscene request");
		__LIB_29__::func_764(&iLocal_227);
	}
	if (iLocal_55)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_53, false);
	}
	__LIB_0__::func_135("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}

