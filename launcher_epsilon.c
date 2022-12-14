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
	var uLocal_52 = 0;
	var uLocal_53 = 0;
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
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	struct<3> Local_234[3];
	struct<2> Local_235 = { 0, 5 } ;
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
	var uLocal_251 = 5;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<42> Var0;
	struct<3> Var1;
	int iVar2;
	int iVar3[8];
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
	uLocal_52 = __LIB_15__::func_955(60);
	uLocal_53 = __LIB_15__::func_955(14);
	iLocal_56 = -1;
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	__LIB_37__::func_582();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var1 = { 0f, 0f, 0f };
	iVar2 = 1;
	__LIB_37__::func_581(&Var0);
	Var1 = { ScriptParam_235.f_1[0 /*3*/] };
	iVar3[0] = 9;
	iVar3[1] = 10;
	iVar3[2] = 11;
	iVar3[3] = 12;
	iVar3[4] = 13;
	iVar3[5] = 14;
	iVar3[6] = 15;
	iVar3[7] = 16;
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
		func_479(&Var0, 1);
	}
	if (!__LIB_37__::func_631(&iVar3, &Var0, Var1, 5f))
	{
		__LIB_37__::func_588();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_467(Var0.f_0))
	{
		__LIB_37__::func_588();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_37__::func_594(Var0.f_0))
	{
		__LIB_37__::func_588();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (!func_434(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			__LIB_0__::func_135("Player out of range [TERMINATING]");
			func_479(&Var0, 1);
		}
	}
	MISC::CLEAR_AREA(Var1, Var0.f_15, true, false, false, false);
	if (Var0.f_0 == 11)
	{
		__LIB_0__::func_222(&uLocal_58, 3, Var0.f_28[0], "MARNIE", 0, 1);
	}
	if (Var0.f_0 == 12)
	{
		__LIB_0__::func_222(&uLocal_58, 4, Var0.f_28[0], "MARNIE", 0, 1);
		__LIB_0__::func_222(&uLocal_58, 5, Var0.f_28[1], "JIMMYBOSTON", 0, 1);
		iLocal_223 = MISC::GET_GAME_TIMER();
		func_432();
	}
	if (Var0.f_0 == 13)
	{
		__LIB_0__::func_222(&uLocal_58, 4, Var0.f_28[0], "MARNIE", 0, 1);
	}
	if (Var0.f_0 == 16)
	{
		__LIB_0__::func_222(&uLocal_58, 4, Var0.f_28[0], "EPSGUARD5", 0, 1);
		__LIB_0__::func_222(&uLocal_58, 5, Var0.f_28[1], "EPSGUARD6", 0, 1);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!__LIB_43__::func_539(&Var0, 1))
		{
			if (Var0.f_0 == 16 && BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				__LIB_0__::func_135("Epsilon 8 kicking off! [TERMINATING]");
				__LIB_37__::func_650(&Var0);
				func_410();
			}
			if (Var0.f_0 == 14)
			{
				__LIB_0__::func_364(37, 1);
			}
			func_479(&Var0, 1);
		}
		if (Var0.f_0 == 10)
		{
			func_393();
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 237.92598f, 360.29916f, 103.65152f, 244.6899f, 357.82773f, 107.322365f, 4.75f, false, true, 0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
		}
		else if (Var0.f_0 == 11)
		{
			if (__LIB_0__::func_121(Var0.f_28[0]))
			{
				if (!PED::IS_PED_FLEEING(Var0.f_28[0]) && !PED::IS_PED_RAGDOLL(Var0.f_28[0]))
				{
					__LIB_37__::func_629(&Var0, Var1, "EPS3AUD", "EP3_AMB", 3, "MARNIE", 500, 1101004800);
				}
				if (__LIB_42__::func_556(Var0.f_28[0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("rcmepsilonism3"))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_227);
						TASK::TASK_PLAY_ANIM(0, "rcmepsilonism3", "outro", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_227);
						TASK::TASK_PERFORM_SEQUENCE(Var0.f_28[0], iLocal_227);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(Var0.f_28[0], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
					}
					PED::SET_PED_KEEP_TASK(Var0.f_28[0], true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Var0.f_28[0]));
					func_479(&Var0, 1);
				}
			}
		}
		else if (Var0.f_0 == 12)
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_0__::func_135("Can request assets for cutscene entity in Eps 4");
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy_Boston", 1, 0, 0, 0);
			}
			func_371();
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1826.6212f, 4698.7344f, 41.36862f, 1831.1576f, 4680.1914f, 32.426258f, 16.5f, false, true, 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!__LIB_6__::func_572(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), 1827.34f, 4697.22f, 38.02f, 1f, 20000, 0.25f, 1, 40000f);
					}
				}
			}
			func_369();
		}
		else if (Var0.f_0 == 13)
		{
			if (__LIB_0__::func_121(Var0.f_28[0]))
			{
				if (!PED::IS_PED_FLEEING(Var0.f_28[0]) && !PED::IS_PED_RAGDOLL(Var0.f_28[0]))
				{
					if (__LIB_37__::func_668(&Var0, Var1, "EPS5AUD", "EP5_AMB", 4, "MARNIE", 1500))
					{
						__LIB_0__::func_135("Triggered Mary Ann Eps 5 conv");
					}
				}
				if (__LIB_42__::func_556(Var0.f_28[0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					if (__LIB_0__::func_75())
					{
						__LIB_0__::func_135("Killed Eps 5 conversation (threat)");
						__LIB_0__::func_325();
					}
					TASK::TASK_SMART_FLEE_PED(Var0.f_28[0], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
					PED::SET_PED_KEEP_TASK(Var0.f_28[0], true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Var0.f_28[0]));
					func_479(&Var0, 1);
				}
			}
		}
		else if (Var0.f_0 == 14)
		{
			func_362(&Var0);
		}
		else if (Var0.f_0 == 15)
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_0__::func_135("Can request assets for cutscene entity in Eps 7");
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy_Boston", 1, 0, 0, 0);
			}
		}
		else if (Var0.f_0 == 16)
		{
			func_348();
		}
		__LIB_37__::func_592(Var0.f_0);
		__LIB_37__::func_623(&iLocal_56, &(Var0.f_9), Var1);
		func_338(&Var0, &iVar2);
		if (__LIB_37__::func_637(&Var0, 0))
		{
			if (!func_174(&Var0))
			{
				func_171(&Var0, &iVar2);
			}
			else
			{
				if (__LIB_37__::func_566(Var0.f_0))
				{
					__LIB_37__::func_590(Var0.f_0, &iLocal_226);
				}
				if (!__LIB_43__::func_907(&Var0))
				{
					func_479(&Var0, 1);
				}
				if (__LIB_37__::func_562(&Var0))
				{
					func_479(&Var0, 0);
				}
			}
		}
	}
}

void func_171(var uParam0, int iParam1)//Position - 0xBF22
{
	if (*iParam1)
	{
		switch (*uParam0)
		{
			case 15:
				__LIB_0__::func_135("Need to wear robes to launch Epsilon 7...");
				__LIB_8__::func_159("BADSUIT_HELP" /* GXT: Michael needs to wear the ~a~ outfit to start this mission. */, "OUTFIT_P0_11" /* GXT: Epsilon Robes */, -1);
				*iParam1 = 0;
				break;
			case 16:
				__LIB_0__::func_135("Need robes and $ to launch Epsilon 8...");
				func_172("NOCASH_HELP" /* GXT: Michael needs his ~a~ outfit and $~1~ to start this mission. */, "OUTFIT_P0_11" /* GXT: Epsilon Robes */, 50000, -1);
				*iParam1 = 0;
				break;
			default:
				__LIB_0__::func_135("Tried to show help text for invalid mission");
				break;
			}
	}
}

void func_172(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0xBF8B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam3);
}

int func_174(var uParam0)//Position - 0xBFCB
{
	switch (*uParam0)
	{
		case 15:
			return func_322(*uParam0);
			break;
		case 16:
			if (__LIB_0__::func_2(0))
			{
				__LIB_15__::func_948(joaat("Player_Zero"), 12, 28, 1);
				func_320(joaat("Player_Zero"), 12, 28, 1, 1);
				func_207(PLAYER::PLAYER_PED_ID(), 12, 28, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				__LIB_14__::func_593(0, 1, 50000, 0, 0);
			}
			if (__LIB_12__::func_295(0) >= 50000 || Global_113386.f_18574.f_387 == 1)
			{
				return func_322(*uParam0);
			}
			else
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_207(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0xD444
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
										func_207(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_207(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_217(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_216(iParam0, iVar10, &iVar4, 1))
							{
								func_207(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_207(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_207(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_207(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_207(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_207(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_207(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_207(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_207(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_207(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_216(iParam0, iVar10, &iVar4, 0))
		{
			func_207(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_208(iParam0, iVar10, &iVar4))
		{
			func_207(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_208(int iParam0, int iParam1, int iParam2)//Position - 0xDC54
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_209(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_209(int iParam0, int iParam1, int iParam2)//Position - 0xDCE0
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
				if (!func_209(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_209(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_209(iParam0, 14, iVar4))
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
			if (!func_209(iParam0, 14, uVar8[iVar7]))
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

int func_216(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xE7A0
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_209(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_217(int iParam0, int iParam1, int iParam2)//Position - 0xE836
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
				if (func_209(iParam0, iParam1, iVar0))
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
				if (func_209(iParam0, iParam1, iVar1))
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

int func_320(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x2B7A1
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
			if (iParam1 == 12)
			{
				iVar0 = 1;
				if (iParam0 == joaat("Player_Zero"))
				{
					if (iParam2 == 31)
					{
						iVar0 = 0;
					}
				}
				if (iVar0 == 1)
				{
					uVar3 = { __LIB_0__::func_459(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_320(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_948(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_320(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_15__::func_948(iParam0, 14, uVar4[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
		}
		if (iParam4 == 1 && bParam3 == 1)
		{
			switch (iParam0)
			{
				case joaat("Player_Zero"):
					break;
				case joaat("Player_One"):
					switch (iParam1)
					{
						case 3:
							if (iParam2 >= 176 && iParam2 <= 191)
							{
								iVar5 = (227 + Global_78130[1 /*14*/].f_4);
								func_320(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_320(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_320(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_320(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_320(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_320(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_320(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_320(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_320(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_320(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_320(iParam0, 14, iVar5, 1, 0);
							}
							break;
					}
					break;
				case joaat("Player_Two"):
					switch (iParam1)
					{
						case 4:
							if (iParam2 >= 81 && iParam2 <= 90)
							{
								iVar5 = (94 + Global_78130[1 /*14*/].f_4);
								func_320(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_320(iParam0, 14, 17, 1, 0);
							}
							break;
					}
					break;
				}
		}
		return 1;
	}
	return 0;
}

int func_322(int iParam0)//Position - 0x2BC19
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 15:
				if (func_209(PLAYER::PLAYER_PED_ID(), 12, 8))
				{
					return 1;
				}
				break;
			case 16:
				if (func_209(PLAYER::PLAYER_PED_ID(), 12, 8) || func_209(PLAYER::PLAYER_PED_ID(), 12, 28))
				{
					return 1;
				}
				break;
			default:
				return 1;
				break;
			}
	}
	return 0;
}

void func_338(var uParam0, int iParam1)//Position - 0x2CE38
{
	if (!*iParam1)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uParam0->f_17[0 /*3*/], true) > 25f)
				{
					__LIB_0__::func_135("Resetting help text flag as player has moved out of range...");
					*iParam1 = 1;
				}
			}
		}
	}
}

void func_348()//Position - 0x2D1FB
{
	switch (iLocal_57)
	{
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_223) > 20000)
			{
				iLocal_57 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -726.45f, 33.33f, 43.23f, 1) < 9f)
			{
				if (__LIB_16__::func_5(&uLocal_58, "EPS8AU", "EPS8_AMB1", 7, 0, 0, 0))
				{
					iLocal_57 = 2;
				}
			}
			if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -666.55f, 49.19f, 42.08f, 1) < 9f)
			{
				if (__LIB_16__::func_5(&uLocal_58, "EPS8AU", "EPS8_AMB2", 7, 0, 0, 0))
				{
					iLocal_57 = 2;
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_75())
			{
				iLocal_223 = MISC::GET_GAME_TIMER();
				iLocal_57 = 0;
			}
			break;
	}
}

void func_362(int iParam0)//Position - 0x2D99F
{
	if (__LIB_0__::func_121(iParam0->f_28[0]))
	{
		switch (iLocal_232)
		{
			case 0:
				iLocal_233 = 0;
				Local_234[0 /*3*/] = { -2887.15f, 3197.88f, 10.17f };
				Local_234[1 /*3*/] = { -2888.92f, 3203.76f, 10.6f };
				Local_234[2 /*3*/] = { -2895.37f, 3199.37f, 10.03f };
				STREAMING::REQUEST_ANIM_DICT("rcmepsilonism6");
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmepsilonism6"))
				{
					TASK::TASK_PLAY_ANIM(iParam0->f_28[0], "rcmepsilonism6", "cultist_upperstatic", 8f, -8f, -1, 49, 0f, false, false, false);
					iLocal_232 = 1;
					__LIB_0__::func_135("Initialised Eps 6 Tom state machine");
				}
				break;
			case 1:
				if (!__LIB_6__::func_572(iParam0->f_28[0], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0->f_28[0], Local_234[iLocal_233 /*3*/], 1f, 20000, 0.25f, 0, 40000f);
					__LIB_0__::func_135("Eps 6: Nav tasking Tom...");
					iLocal_232 = 2;
				}
				break;
			case 2:
				if (__LIB_0__::func_724(iParam0->f_28[0], Local_234[iLocal_233 /*3*/], 1) <= 1.2f)
				{
					iLocal_232 = 3;
					__LIB_0__::func_135("Eps 6: Tom at coord; do idle anim");
				}
				break;
			case 3:
				TASK::CLEAR_PED_TASKS(iParam0->f_28[0]);
				TASK::TASK_PLAY_ANIM(iParam0->f_28[0], "rcmepsilonism6", "cultist_idle_a", 16f, -2f, -1, 131072, 0f, false, false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_28[0], false, false);
				iLocal_232 = 4;
				__LIB_0__::func_135("Eps 6: Done Tom idle anim");
				break;
			case 4:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_28[0], "rcmepsilonism6", "cultist_idle_a", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0->f_28[0], "rcmepsilonism6", "cultist_idle_a") >= 0.98f)
					{
						if (iLocal_233 >= 2)
						{
							iLocal_233 = 0;
						}
						else
						{
							iLocal_233++;
						}
						TASK::TASK_PLAY_ANIM(iParam0->f_28[0], "rcmepsilonism6", "cultist_upperstatic", 16f, -8f, -1, 49, 0f, false, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_28[0], false, false);
						iLocal_232 = 1;
						__LIB_0__::func_135("Eps 6: Tom idle anim >0.98");
					}
				}
				else
				{
					if (iLocal_233 >= 2)
					{
						iLocal_233 = 0;
					}
					else
					{
						iLocal_233++;
					}
					TASK::TASK_PLAY_ANIM(iParam0->f_28[0], "rcmepsilonism6", "cultist_upperstatic", 8f, -8f, -1, 49, 0f, false, false, false);
					iLocal_232 = 1;
					__LIB_0__::func_135("Eps 6: Tom idle anim not playing");
				}
				break;
			}
	}
}

void func_369()//Position - 0x2DD71
{
	switch (iLocal_57)
	{
		case 0:
			iLocal_57 = 1;
			break;
		case 1:
			if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), 1826.45f, 4699.58f, 38.15f, 1) <= 25f && iLocal_224 == 0)
			{
				if (__LIB_16__::func_5(&uLocal_58, "EPS4AUD", "EPS4_AMBJ", 8, 0, 0, 0))
				{
					iLocal_57 = 2;
					iLocal_224 = 1;
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_75())
			{
				iLocal_57 = 0;
			}
			else if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), 1826.45f, 4699.58f, 38.15f, 1) >= 28f)
			{
				__LIB_0__::func_325();
				iLocal_57 = 0;
			}
			break;
	}
}

void func_371()//Position - 0x2DE4F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_228, "SET_COLOUR");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_228, "SET_DISTANCE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(10f);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	HUD::SET_TEXT_RENDER_ID(iLocal_229);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_228, 0.1f, 0.24f, 0.21f, 0.51f, 100, 100, 100, 255, 0);
	if ((MISC::GET_GAME_TIMER() - iLocal_230) > 1250)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(iLocal_231, "IDLE_BEEP_NPC", 1827.06f, 4700.52f, 39.16f, "EPSILONISM_04_SOUNDSET", false, 0, false);
		iLocal_230 = MISC::GET_GAME_TIMER();
	}
}

void func_393()//Position - 0x2E92F
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_225)
			{
				__LIB_16__::func_319(109, 0);
				iLocal_225 = 0;
			}
		}
		else if (!iLocal_225)
		{
			__LIB_16__::func_319(109, 1);
			iLocal_225 = 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 244.96692f, 374.6696f, 104.45791f, 239.61191f, 360.3045f, 107.75234f, 9.0625f, false, true, 0))
	{
		Global_8141 = 1;
	}
	else
	{
		Global_8141 = 0;
	}
}

void func_410()//Position - 0x329A6
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_54, joaat("PLAYER"));
	if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -726.45f, 33.33f, 43.23f, 1) <= __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -666.55f, 49.19f, 42.08f, 1))
	{
		__LIB_16__::func_5(&uLocal_58, "EPS8AU", "EPS8_AMA1", 8, 0, 0, 0);
	}
	else
	{
		__LIB_16__::func_5(&uLocal_58, "EPS8AU", "EPS8_AMA2", 8, 0, 0, 0);
	}
}

void func_432()//Position - 0x33B60
{
	iLocal_228 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("digiscanner");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_228))
	{
		SYSTEM::WAIT(0);
	}
	if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("digiscanner"))
	{
		HUD::REGISTER_NAMED_RENDERTARGET("digiscanner", false);
	}
	HUD::LINK_NAMED_RENDERTARGET(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_DIGISCANNER")));
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("digiscanner"))
	{
		iLocal_229 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("digiscanner");
	}
	iLocal_231 = AUDIO::GET_SOUND_ID();
	iLocal_230 = MISC::GET_GAME_TIMER();
}

int func_434(int iParam0)//Position - 0x33C68
{
	switch (*iParam0)
	{
		case 9:
			if (!func_465(iParam0))
			{
				return 0;
			}
			break;
		case 10:
			if (!func_456(iParam0))
			{
				return 0;
			}
			break;
		case 11:
			if (!func_454(iParam0))
			{
				return 0;
			}
			break;
		case 12:
			if (!func_452(iParam0))
			{
				return 0;
			}
			break;
		case 13:
			if (!func_446(iParam0))
			{
				return 0;
			}
			break;
		case 14:
			if (!func_445(iParam0))
			{
				return 0;
			}
			break;
		case 15:
			if (!__LIB_37__::func_628(iParam0))
			{
				return 0;
			}
			break;
		case 16:
			if (!func_438(iParam0))
			{
				return 0;
			}
			break;
	}
	if (*iParam0 == 12)
	{
		iLocal_55 = __LIB_17__::func_30();
	}
	else if (*iParam0 == 15)
	{
		iLocal_55 = func_436();
		MISC::CLEAR_AREA_OF_PEDS(538.45f, 3079.61f, 39.27f, 75f, 0);
	}
	else if (*iParam0 == 16)
	{
		iLocal_55 = __LIB_37__::func_627();
	}
	__LIB_0__::func_135("Created initial scene");
	return 1;
}

int func_436()//Position - 0x33DB0
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(529.7899f, 3067.5781f, 37.8313f, 545.8693f, 3098.9985f, 43.0209f, false, true, true, true);
}

int func_438(var uParam0)//Position - 0x33E0C
{
	int iVar0[3];
	int iVar1;
	iVar0[0] = joaat("landstalker");
	iVar0[1] = joaat("tailgater");
	iVar0[2] = joaat("S_M_M_HighSec_01");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -670.9681f, 53.530624f, 40.04339f };
			uParam0->f_17[1 /*3*/] = { -723.7632f, 34.054497f, 46.970173f };
			uParam0->f_24 = 19.75f;
			uParam0->f_27 = 1;
			uParam0->f_26 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "EP_8_RCM", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			__LIB_17__::func_22(&(uParam0->f_35[0]), iVar0[0], -686.5046f, 43.9098f, 42.2067f, 296.81f);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 3);
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 157, 157);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_35[0], 0, 0);
			VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(uParam0->f_35[0], true);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uParam0->f_35[0], 0);
			__LIB_17__::func_22(&(uParam0->f_35[1]), iVar0[1], -697.32153f, 39.0406f, 42.867363f, -66.98854f);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[1], 3);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_35[1], "K1FFL0M");
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[1], 157, 157);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_35[1], 0, 0);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uParam0->f_35[1], 0);
			__LIB_17__::func_39(&(uParam0->f_28[0]), iVar0[2], -726.4555f, 33.335682f, 43.22695f, -147.8099f, 26);
			WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[0], joaat("WEAPON_SMG"), -1, false, false);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			PED::SET_PED_LEG_IK_MODE(uParam0->f_28[0], 2);
			TASK::TASK_START_SCENARIO_IN_PLACE(uParam0->f_28[0], "WORLD_HUMAN_GUARD_STAND", 0, false);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 1, 0, 0);
			__LIB_17__::func_39(&(uParam0->f_28[1]), iVar0[2], -666.5512f, 49.197594f, 42.071537f, -171.68027f, 26);
			WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[1], joaat("WEAPON_SMG"), -1, false, false);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[1], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			PED::SET_PED_LEG_IK_MODE(uParam0->f_28[1], 2);
			TASK::TASK_START_SCENARIO_IN_PLACE(uParam0->f_28[1], "WORLD_HUMAN_GUARD_STAND", 0, false);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
			__LIB_17__::func_39(&(uParam0->f_28[2]), iVar0[2], -690f, 42f, 42f, 0f, 26);
			__LIB_17__::func_39(&(uParam0->f_28[3]), iVar0[2], -690f, 42f, 43f, 0f, 26);
			PED::SET_PED_INTO_VEHICLE(uParam0->f_28[2], uParam0->f_35[0], -1);
			PED::SET_PED_INTO_VEHICLE(uParam0->f_28[3], uParam0->f_35[0], 0);
			WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[2], joaat("WEAPON_COMBATPISTOL"), -1, false, false);
			WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[3], joaat("WEAPON_MICROSMG"), -1, false, false);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 11, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 4, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 11, 0, 1, 0);
			PED::ADD_RELATIONSHIP_GROUP("gang", &iLocal_54);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], iLocal_54);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[1], iLocal_54);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[2], iLocal_54);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[3], iLocal_54);
			PED::SET_PED_CAN_EVASIVE_DIVE(uParam0->f_28[0], false);
			PED::SET_PED_CAN_EVASIVE_DIVE(uParam0->f_28[1], false);
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

int func_445(var uParam0)//Position - 0x34484
{
	int iVar0[2];
	int iVar1;
	int iVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	sVar3 = "rcmepsilonism6";
	iVar0[0] = joaat("velum");
	iVar0[1] = joaat("IG_TomEpsilon");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -2869.424f, 3170.774f, 1.954f };
			uParam0->f_17[1 /*3*/] = { -2918.701f, 3217.056f, 32.294f };
			uParam0->f_24 = 94.5f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			STREAMING::REQUEST_ANIM_DICT(sVar3);
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar3))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				iVar2 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(-2892.93f, 3192.37f, 11.66f, 11f, iVar0[0], 16390);
				if (__LIB_0__::func_121(iVar2))
				{
					uParam0->f_35[0] = iVar2;
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
				}
				else
				{
					MISC::CLEAR_AREA_OF_VEHICLES(-2892.93f, 3192.37f, 11.66f, 11f, false, false, false, false, false, false, 0);
					__LIB_17__::func_22(&(uParam0->f_35[0]), iVar0[0], -2892.93f, 3192.37f, 11.66f, -132.35f);
				}
			}
			__LIB_0__::func_364(37, 0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[0], true);
				VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_35[0]);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 0);
				VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 157, 157);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_35[0], 157, 5);
				VEHICLE::SET_VEHICLE_LIVERY(uParam0->f_35[0], 3);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(uParam0->f_35[0], false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_35[0], true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 3);
				if (Global_78564)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2907.29f, 3215.91f, 9.86f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 215.2149f);
					}
				}
			}
			else
			{
				bVar4 = false;
			}
			__LIB_17__::func_39(&(uParam0->f_28[0]), iVar0[1], -2881.7554f, 3188.1252f, 10.1136f, 254.1723f, 26);
			if (__LIB_0__::func_121(uParam0->f_28[0]) && __LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
			{
				iVar5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
				WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[0], joaat("WEAPON_DIGISCANNER"), -1, true, true);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
				PED::SET_PED_DIES_WHEN_INJURED(uParam0->f_28[0], true);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_28[0], false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 185, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 188, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 132, true);
				AUDIO::STOP_PED_SPEAKING(uParam0->f_28[0], true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], iVar5);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], false);
			}
			else
			{
				bVar4 = false;
			}
			if (bVar4)
			{
				iLocal_51 = 3;
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

int func_446(var uParam0)//Position - 0x347C3
{
	int iVar0[1];
	int iVar1;
	bool bVar2;
	int iVar3;
	iVar0[0] = uLocal_52;
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 638.1478f, 106.12842f, 87.36301f };
			uParam0->f_17[1 /*3*/] = { 646.6449f, 129.22662f, 93.149765f };
			uParam0->f_24 = 12.5f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "EP_5_RCM", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_17__::func_28(&(uParam0->f_48), "rcm_epsilonism5", "ep_5_rcm_marnie_strokes_wall", 0);
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !__LIB_14__::func_856(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_37__::func_630(&(uParam0->f_28[0]), 60, 636.58f, 119.68f, 90.56f, 80.62f, "EPSILON LAUNCHER RC", 1) && __LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
				{
					iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], iVar3);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 132, true);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				iLocal_51 = 3;
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

int func_452(var uParam0)//Position - 0x34ADC
{
	int iVar0[2];
	int iVar1;
	bool bVar2;
	int iVar3;
	iVar0[0] = uLocal_52;
	iVar0[1] = uLocal_53;
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 11.5f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "EP_4_RCM_CONCAT", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_17__::func_28(&(uParam0->f_48), "rcm_epsilonism4", "ep_4_rcm_marnie_base_marnie", "ep_4_rcm_marnie_lookaround_marnie");
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !__LIB_14__::func_856(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar2 = true;
			if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
			{
				iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_37__::func_630(&(uParam0->f_28[0]), 60, 1826.13f, 4698.88f, 38.92f, 21.63f, "EPSILON LAUNCHER RC - MARNIE", 1))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], iVar3);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 132, true);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[1]))
			{
				if (__LIB_37__::func_630(&(uParam0->f_28[1]), 55, 1827.24f, 4699.76f, 39.09f, 57.09f, "EPSILON LAUNCHER RC - JIMMY", 1))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[1], iVar3);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[1], 132, true);
					PED::SET_PED_PROP_INDEX(uParam0->f_28[1], 1, 0, 0, false);
					TASK::CLEAR_PED_TASKS(uParam0->f_28[1]);
					WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[1], joaat("WEAPON_DIGISCANNER"), -1, true, true);
					TASK::TASK_PLAY_ANIM(uParam0->f_28[1], "rcm_epsilonism4", "ep_4_rcm_jimmyboston_base_jb", 8f, -8f, -1, 1, 0f, false, false, false);
					__LIB_14__::func_659(uParam0->f_28[1], 1827.24f, 4699.76f, 39.09f, 57.09f, 1, 1);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				iLocal_51 = 3;
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

int func_454(var uParam0)//Position - 0x34D5E
{
	int iVar0[1];
	int iVar1;
	struct<3> Var2;
	float fVar3;
	bool bVar4;
	int iVar5;
	Var2 = { 1843.82f, 4705.74f, 38.8f };
	fVar3 = __LIB_0__::func_503(1.99f);
	iVar0[0] = uLocal_52;
	switch (iLocal_51)
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
			__LIB_17__::func_28(&(uParam0->f_48), "rcmepsilonism3", "base_loop", 0);
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !__LIB_14__::func_856(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar4 = true;
			MISC::CLEAR_AREA_OF_PEDS(Var2, 35f, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_37__::func_630(&(uParam0->f_28[0]), 60, Var2, fVar3, "EPSILON LAUNCHER RC - MARNIE", 1))
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
				iLocal_51 = 3;
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

int func_456(var uParam0)//Position - 0x34F35
{
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 246.81818f, 374.06854f, 103.12333f };
			uParam0->f_17[1 /*3*/] = { 241.98058f, 360.87244f, 108.8699f };
			uParam0->f_24 = 9f;
			uParam0->f_15 = 2f;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "EP_2_RCM", 24);
			if (Global_78564)
			{
				__LIB_0__::func_681(86, 1);
			}
			iLocal_51 = 1;
			break;
		case 1:
			if (!OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(241.3607f, 361.0345f, 105.8884f, 4f, joaat("v_ilev_epsstoredoor"), false))
			{
				return 0;
			}
			iLocal_51 = 3;
			break;
		case 3:
			__LIB_16__::func_319(109, 0);
			__LIB_11__::func_816(11, 0);
			return 1;
			break;
	}
	return 0;
}

int func_465(var uParam0)//Position - 0x385FB
{
	int iVar0[1];
	int iVar1;
	bool bVar2;
	iVar0[0] = joaat("bison");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 3;
			uParam0->f_17[0 /*3*/] = { -1626.97f, 4205.64f, 83.01f };
			uParam0->f_15 = 17f;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "EP_1_RCM_Concat", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_17__::func_22(&(uParam0->f_35[0]), iVar0[0], -1619.53f, 4204.1f, 83.3f, 77.92f);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 2);
					VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 27, 27);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[0], true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[0], 5f);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
			AUDIO::SET_AMBIENT_ZONE_STATE("AZ_EPSILONISM_01_HILLS", true, false);
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

int func_467(int iParam0)//Position - 0x387B2
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
	if (!func_468(iParam0))
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_100441.f_11 == 6)
	{
		if (Global_100441 < 9)
		{
			__LIB_0__::func_432(iParam0, &sVar0);
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

int func_468(int iParam0)//Position - 0x38870
{
	var uVar0;
	__LIB_0__::func_432(iParam0, &uVar0);
	if (!__LIB_0__::func_215(4))
	{
		if (__LIB_0__::func_781(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_0__::func_767() && !__LIB_0__::func_766())
	{
		return 0;
	}
	if (__LIB_37__::func_580(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = __LIB_0__::func_775();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!__LIB_0__::func_774(iParam0))
	{
		if (!__LIB_37__::func_579(iParam0))
		{
			return 0;
		}
		if (!__LIB_37__::func_578(iParam0))
		{
			return 0;
		}
		if (__LIB_0__::func_720(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_469(5))
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

int func_469(int iParam0)//Position - 0x38931
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
			if (func_469(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_14__::func_623(iParam0, &sVar1);
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95479[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_100493.f_373 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_479(int iParam0, bool bParam1)//Position - 0x38CCD
{
	char* sVar0;
	if (bParam1)
	{
		__LIB_0__::func_135("Cleaning up launcher script entities [TERMINATING]");
		__LIB_14__::func_871(iParam0, 0, 0, 0);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_226))
	{
		HUD::REMOVE_BLIP(&iLocal_226);
	}
	if (iLocal_56 != -1)
	{
		__LIB_0__::func_135("SCRIPT TERMINATING: Ending off-mission cutscene request");
		__LIB_37__::func_331(&iLocal_56);
	}
	if ((*iParam0 == 12 || *iParam0 == 15) || *iParam0 == 16)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_55, false);
	}
	__LIB_37__::func_619(&(iParam0->f_48));
	switch (*iParam0)
	{
		case 9:
			AUDIO::SET_AMBIENT_ZONE_STATE("AZ_EPSILONISM_01_HILLS", false, false);
			break;
		case 14:
			STREAMING::REMOVE_ANIM_DICT("rcmepsilonism6");
			break;
	}
	switch (*iParam0)
	{
		case 11:
			sVar0 = "EP3_RCM_L2";
			break;
		case 12:
			__LIB_37__::func_595("EPS4_AMBM");
			sVar0 = "EPS4_AMBJ";
			break;
		case 16:
			__LIB_37__::func_595("EPS8_AMB1");
			sVar0 = "EPS8_AMB2";
			break;
	}
	__LIB_37__::func_595(sVar0);
	if (bParam1)
	{
		__LIB_37__::func_592(*iParam0);
	}
	Global_8141 = 0;
	__LIB_37__::func_588();
	__LIB_0__::func_135("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}

