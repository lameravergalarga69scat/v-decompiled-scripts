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
	int iLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	struct<61> Local_41 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	bool bLocal_45 = 0;
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
	char* sLocal_59 = NULL;
	char* sLocal_60 = NULL;
	char* sLocal_61 = NULL;
	char* sLocal_62 = NULL;
	var uLocal_63 = 16;
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
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	int iLocal_228 = 0;
	struct<3> Local_229 = { 0, 0, 0 } ;
	struct<61> Local_230 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_44 = 2;
	iLocal_47 = -1;
	iLocal_49 = -1;
	iLocal_50 = -1;
	iLocal_51 = 4;
	sLocal_59 = "Trevor";
	sLocal_60 = "Maude";
	sLocal_61 = "maude_chair";
	sLocal_62 = "maude_laptop";
	Local_41 = { ScriptParam_230 };
	__LIB_14__::func_801(&Local_41);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_41.f_59))
	{
		PED::TAKE_OWNERSHIP_OF_SYNCHRONIZED_SCENE(Local_41.f_59);
		iLocal_47 = Local_41.f_59;
	}
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_14__::func_872(1);
		func_467();
	}
	func_465();
	if (__LIB_0__::func_323())
	{
		func_364();
	}
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_Maude", 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_42 == 0)
			{
				func_265();
			}
			else if (iLocal_42 == 1)
			{
				func_27();
			}
			else if (iLocal_42 == 2)
			{
				func_1();
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x11F
{
	char* sVar0;
	sVar0 = 0;
	switch (iLocal_43)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			func_21(0);
			if (__LIB_0__::func_75())
			{
				__LIB_0__::func_325();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_55, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_56, false);
			}
			if (iLocal_44 == 1)
			{
				STREAMING::REQUEST_ANIM_DICT("special_ped@maude@exit_flee");
				if (__LIB_0__::func_692(iLocal_58))
				{
					__LIB_0__::func_221(&uLocal_63, 3);
					__LIB_14__::func_731(iLocal_58, 0);
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_58))
					{
						if (__LIB_0__::func_725(iLocal_58, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 35f, 1))
						{
							AUDIO::STOP_PED_SPEAKING(iLocal_58, false);
							__LIB_0__::func_709(iLocal_58, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
						}
					}
				}
				if (func_10())
				{
					iLocal_46 = 1;
				}
				sVar0 = "MAUDE_F1";
			}
			else if (iLocal_44 == 0)
			{
				sVar0 = "MAUDE_F2";
			}
			if (iLocal_44 == 2)
			{
				__LIB_14__::func_872(1);
			}
			else
			{
				__LIB_14__::func_880(sVar0, 1);
			}
			iLocal_43 = 1;
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				func_3(1);
				func_467();
			}
			else if (iLocal_44 == 1)
			{
				if (__LIB_0__::func_692(iLocal_58))
				{
					if (!iLocal_46)
					{
						STREAMING::REQUEST_ANIM_DICT("special_ped@maude@exit_flee");
						if (func_10())
						{
							iLocal_46 = 1;
						}
					}
					else if (__LIB_0__::func_692(iLocal_58))
					{
						if (!__LIB_6__::func_572(iLocal_58, joaat("SCRIPT_TASK_SMART_FLEE_PED")))
						{
							if (!PED::IS_PED_FLEEING(iLocal_58))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_58, "special_ped@maude@exit_flee", "female_Flee_Table_Left_Maude", 3))
								{
									PED::SET_PED_FLEE_ATTRIBUTES(iLocal_58, 2, false);
									PED::SET_PED_FLEE_ATTRIBUTES(iLocal_58, 64, false);
									PED::SET_PED_FLEE_ATTRIBUTES(iLocal_58, 128, false);
									PED::SET_PED_FLEE_ATTRIBUTES(iLocal_58, 8, false);
									PED::SET_PED_FLEE_ATTRIBUTES(iLocal_58, 1, false);
									PED::SET_PED_FLEE_ATTRIBUTES(iLocal_58, 32, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_58, 5, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_58, 17, true);
									TASK::TASK_SMART_FLEE_PED(iLocal_58, PLAYER::PLAYER_PED_ID(), 50f, -1, false, false);
									PED::SET_PED_KEEP_TASK(iLocal_58, true);
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_3(bool bParam0)//Position - 0x311
{
	__LIB_0__::func_0(&iLocal_58);
	__LIB_0__::func_122(&iLocal_56, 0);
	__LIB_0__::func_122(&iLocal_57, 0);
	if (bParam0)
	{
		__LIB_0__::func_123(&iLocal_54);
		__LIB_0__::func_123(&iLocal_55);
	}
	else
	{
		__LIB_0__::func_122(&iLocal_54, 0);
		__LIB_0__::func_122(&iLocal_55, 0);
	}
}

int func_10()//Position - 0x476
{
	int iVar0;
	if (__LIB_0__::func_692(iLocal_58))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_58, "special_ped@maude@base", "base", 3))
		{
			if (!PED::IS_PED_RAGDOLL(iLocal_58) || TASK::IS_PED_GETTING_UP(iLocal_58))
			{
				STREAMING::REQUEST_ANIM_DICT("special_ped@maude@exit_flee");
				if (STREAMING::HAS_ANIM_DICT_LOADED("special_ped@maude@exit_flee"))
				{
					iLocal_50 = PED::CREATE_SYNCHRONIZED_SCENE(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_50, false);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_50, false);
					if (__LIB_6__::func_572(iLocal_58, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_58, -1000f, true);
					}
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_58, iLocal_50, "special_ped@maude@exit_flee", "female_Flee_Table_Left_Maude", 1000f, -4f, 4626, 0, 1000f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_58, false, false);
					if (__LIB_0__::func_121(iLocal_54))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54, "special_ped@maude@base", "base_chair", 3))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_54, -16f, false);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_54, iLocal_50, "Female_Flee_Table_Left_Maude_Chair", "special_ped@maude@exit_flee", 16f, -4f, iVar0, 1000f);
					}
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
	return 0;
}

void func_21(bool bParam0)//Position - 0x92B
{
	struct<6> Var0;
	if (__LIB_0__::func_75())
	{
		Var0 = { __LIB_0__::func_486() };
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "MAUDE_loiter"))
		{
			if (bParam0)
			{
				__LIB_0__::func_638();
			}
			else
			{
				__LIB_0__::func_429();
			}
		}
	}
}

void func_27()//Position - 0x9E8
{
	struct<3> Var0;
	struct<3> Var1;
	switch (iLocal_43)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_56))
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(2727.4f, 4145.56f, 43.68f, 10f, joaat("prop_table_03b"), false))
				{
					iLocal_56 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(2727.4f, 4145.56f, 43.68f, 10f, joaat("prop_table_03b"), true, false, true);
					if (__LIB_0__::func_121(iLocal_56))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_56, 2727.4f, 4145.56f, 43.68f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_56, -92.17f);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_56, true);
					}
				}
			}
			if (__LIB_0__::func_692(iLocal_58))
			{
				if (!PED::IS_PED_HEADTRACKING_PED(iLocal_58, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_58, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
				PED::SET_PED_KEEP_TASK(iLocal_58, true);
			}
			HUD::REQUEST_ADDITIONAL_TEXT("MAUDE1", 0);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				__LIB_0__::func_229("MAUDE_01", 7500, 0);
				iLocal_52 = MISC::GET_GAME_TIMER();
				iLocal_43 = 1;
			}
			break;
		case 1:
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (__LIB_0__::func_692(iLocal_58))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_58, false) };
				if (!func_246(0))
				{
					if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) > 14400f)
					{
						if (!CAM::IS_SPHERE_VISIBLE(Var0, 2.5f) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_58))
						{
							iLocal_43 = 2;
						}
					}
					else
					{
						func_242(Var0, Var1, 18000, 1101004800);
					}
				}
				else
				{
					iLocal_44 = 1;
					iLocal_42 = 2;
					iLocal_43 = 0;
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
			{
				iLocal_44 = 0;
				iLocal_42 = 2;
				iLocal_43 = 0;
			}
			break;
		case 2:
			func_21(0);
			if (__LIB_0__::func_501("MAUDE_01", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("MAUDE_01");
			}
			__LIB_0__::func_0(&iLocal_58);
			func_28();
			break;
	}
}

void func_28()//Position - 0xBA8
{
	__LIB_0__::func_697("BBONDS_UNLOCK" /* GXT: Bail bond missions are now available. Trevor will receive emails from Maude with further details. */, 1, 0, -1, 10000, 4, 0, 0, 1);
	__LIB_0__::func_712(62, 2, 1);
	func_29(107, 1);
	func_467();
}

void func_29(int iParam0, bool bParam1)//Position - 0xBD5
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

void func_57()//Position - 0x1D87
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
				if (func_175(iVar1, 14, iVar2))
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

int func_58(int iParam0, int iParam1, int iParam2)//Position - 0x1E48
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
	if (!func_175(iParam0, iParam1, iParam2))
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

int func_59(int iParam0, int iParam1, int iParam2)//Position - 0x2004
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_175(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x20CB
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

int func_67(int iParam0, int iParam1, int iParam2)//Position - 0x3108
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
				if (func_175(iParam0, iParam1, iVar0))
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
				if (func_175(iParam0, iParam1, iVar1))
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

int func_101(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x98B3
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_175(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_175(int iParam0, int iParam1, int iParam2)//Position - 0x1FF07
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
				if (!func_175(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_175(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_175(iParam0, 14, iVar4))
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
			if (!func_175(iParam0, 14, uVar8[iVar7]))
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

int func_242(struct<3> Param0, struct<3> Param1, int iParam2, float fParam3)//Position - 0x27824
{
	if (iLocal_53 < iLocal_51)
	{
		if (!__LIB_0__::func_75())
		{
			if (SYSTEM::VDIST2(Param1, Param0) < (fParam3 * fParam3))
			{
				if (MISC::GET_GAME_TIMER() - iLocal_52) > (iParam2 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000))
				{
					__LIB_0__::func_222(&uLocal_63, 3, iLocal_58, "MAUDE", 0, 1);
					__LIB_14__::func_654(&uLocal_63, "MAUDEAU", "MAUDE_loiter", 7, 0, 0);
					iLocal_52 = MISC::GET_GAME_TIMER();
					iLocal_53++;
					return 1;
				}
			}
		}
		else
		{
			iLocal_52 = MISC::GET_GAME_TIMER();
		}
	}
	return 0;
}

int func_246(bool bParam0)//Position - 0x279CA
{
	if (__LIB_0__::func_692(iLocal_58))
	{
		if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_58) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_58)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(iLocal_58))
		{
			return 1;
		}
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58))
			{
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_56))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_55))
				{
					return 1;
				}
			}
		}
		if (PED::HAS_PED_RECEIVED_EVENT(iLocal_58, 61))
		{
			return 1;
		}
		if (PED::IS_PED_RAGDOLL(iLocal_58))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_58, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
			{
				return 1;
			}
		}
		if (PED::HAS_PED_RECEIVED_EVENT(iLocal_58, 51))
		{
			return 1;
		}
		if (__LIB_37__::func_636(iLocal_58, 1126825984))
		{
			return 1;
		}
		if (__LIB_14__::func_858(iLocal_58, 1, 0, 0, 0))
		{
			return 1;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_58, true), 15f))
		{
			return 1;
		}
		if (PED::HAS_PED_RECEIVED_EVENT(iLocal_58, 73))
		{
			return 1;
		}
		if (bParam0)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_265()//Position - 0x28399
{
	int iVar0;
	switch (iLocal_43)
	{
		case 0:
			__LIB_14__::func_851("MAUDE_MCS_1", 0);
			if (__LIB_0__::func_121(iLocal_58))
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_60, iLocal_58, 0);
				}
			}
			__LIB_14__::func_862();
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (func_352())
				{
					if (__LIB_14__::func_740(1, 1093140480, 0))
					{
						__LIB_14__::func_800(&Local_41, 0, 1);
						__LIB_14__::func_878(&iLocal_58, &(Local_41.f_28[0]));
						__LIB_14__::func_878(&iLocal_54, &(Local_41.f_41[0]));
						__LIB_14__::func_878(&iLocal_55, &(Local_41.f_41[1]));
						func_343();
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_59, 0, 0, 0);
						if (__LIB_0__::func_121(iLocal_58))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_58, sLocal_60, 0, 0, 0);
						}
						if (__LIB_0__::func_121(iLocal_54))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_54, sLocal_61, 0, 0, 0);
						}
						if (__LIB_0__::func_121(iLocal_55))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_55, sLocal_62, 0, 0, 0);
						}
						RECORDING::REPLAY_START_EVENT(4);
						CUTSCENE::START_CUTSCENE(0);
						SYSTEM::WAIT(0);
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							CAM::STOP_GAMEPLAY_HINT(false);
						}
						__LIB_14__::func_841();
						func_338(2727.58f, 4144.19f, 43.95f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						func_279();
						func_278(31, 1, 0);
						func_277();
						bLocal_45 = false;
						iLocal_43 = 1;
					}
				}
				else
				{
					__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				}
			}
			else
			{
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
			}
			break;
		case 1:
			if (__LIB_0__::func_121(iLocal_54))
			{
				if (__LIB_0__::func_692(iLocal_58))
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_60, 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_61, 0))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("special_ped@maude@base"))
						{
							iLocal_47 = PED::CREATE_SYNCHRONIZED_SCENE(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_47, true);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_47, false);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_58, iLocal_47, "special_ped@maude@base", "base", 1000f, -8f, 4688, 0, 1000f, 0);
							iVar0 = 0;
							iVar0 = 16;
							iVar0 = 64;
							iVar0 = 512;
							iVar0 = 4096;
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_54, iLocal_47, "base_chair", "special_ped@maude@base", 1000f, -8f, iVar0, 1000f);
							PED::SET_PED_KEEP_TASK(iLocal_58, true);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_59, 0))
			{
				RECORDING::REPLAY_STOP_EVENT();
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED() && CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
				bLocal_45 = true;
			}
			if (!bLocal_45)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				iLocal_43 = 2;
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(false);
			}
			else
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(false);
				}
				__LIB_17__::func_551(1, 1, 1, 1);
				func_266();
				iLocal_42 = 1;
				iLocal_43 = 0;
			}
			break;
	}
}

void func_266()//Position - 0x28659
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (!__LIB_0__::func_121(iVar0))
	{
		iVar0 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Local_229, 10f, 0, 16390);
		if (!__LIB_0__::func_121(iVar0))
		{
			return;
		}
	}
	VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, true, true, false);
}

int func_277()//Position - 0x289F8
{
	STREAMING::REQUEST_ANIM_DICT("special_ped@maude@base");
	HUD::REQUEST_ADDITIONAL_TEXT("MAUDE1", 0);
	if (STREAMING::HAS_ANIM_DICT_LOADED("special_ped@maude@base") && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		return 1;
	}
	return 0;
}

void func_278(int iParam0, bool bParam1, bool bParam2)//Position - 0x28A29
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { 2711.1978f, 4134.4253f, 32.90168f };
	Var1 = { 2739.9814f, 4155.2207f, 50.28859f };
	switch (iParam0)
	{
		case 31:
			if (bParam1)
			{
				iLocal_40 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var1, false, true, true, true);
				PED::SET_PED_NON_CREATION_AREA(Var0, Var1);
				PATHFIND::SET_ROADS_IN_AREA(2697.2224f, 4119.8936f, 42.79107f, 2746.0396f, 4162.9736f, 43.62732f, false, true);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var1, false, true);
				if (bParam2)
				{
					VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Var0, Var1, 0);
					MISC::CLEAR_AREA(2728.3328f, 4144.778f, 43.29292f, 7.5f, true, false, false, false);
				}
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_40, false);
				PED::CLEAR_PED_NON_CREATION_AREA();
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var1, true, true);
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(2697.2224f, 4119.8936f, 42.79107f, 2746.0396f, 4162.9736f, 43.62732f, 1);
			}
			break;
	}
}

void func_279()//Position - 0x28B29
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	Var0 = { 2728.995f, 4143.165f, 41.02986f };
	Var1 = { 2719.126f, 4144.6914f, 47.88543f };
	fVar3 = 13f;
	Var2 = { 3f, 11f, 6f };
	if (__LIB_14__::func_742(Var2, 0))
	{
		__LIB_14__::func_592(Var0, Var1, fVar3, 2719.87f, 4143.46f, 43.46f, 261.91f, 1, 1, 1, 0, 0);
		__LIB_14__::func_785(2719.87f, 4143.46f, 43.46f, 261.91f, 0, 145);
		Local_229 = { 2719.87f, 4143.46f, 43.46f };
	}
	else
	{
		__LIB_14__::func_592(Var0, Var1, fVar3, 2710.6646f, 4149.075f, 42.7026f, 180.9488f, 1, 1, 1, 0, 0);
		__LIB_14__::func_785(2710.6646f, 4149.075f, 42.7026f, 180.9488f, 0, 145);
		Local_229 = { 2710.6646f, 4149.075f, 42.7026f };
	}
}

void func_338(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x2FC77
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_14__::func_747(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_0__::func_683())
			{
				case 0:
					if (func_175(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_61(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_175(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_61(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_175(PLAYER::PLAYER_PED_ID(), 8, 1) || func_175(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_61(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_175(PLAYER::PLAYER_PED_ID(), 8, 4))
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
			iLocal_36 = 0;
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_36 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__::func_84(500, 0);
		}
	}
}

void func_343()//Position - 0x2FEE3
{
	struct<3> Var0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		Var0 = { 2727.29f, 4145.9f, 44.16f };
		iVar1 = joaat("prop_radio_01");
		if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Var0, 150f, 1))
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Var0, 10f, iVar1, false))
			{
				iLocal_57 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var0, 10f, iVar1, true, false, true);
			}
		}
	}
}

int func_352()//Position - 0x30370
{
	if ((__LIB_0__::func_323() || __LIB_0__::func_2(0)) || __LIB_0__::func_324())
	{
		return 1;
	}
	if (iLocal_48 == 0)
	{
		if (__LIB_0__::func_121(Local_41.f_28[0]))
		{
			if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_41.f_28[0], 7f, 1))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_41.f_28[0], 0f, 0f, 0f, true, -1, 2000, 2000, 0);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.8f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0.1f);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
				CAM::SET_GAMEPLAY_HINT_FOV(35f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(PLAYER::PLAYER_PED_ID(), Local_41.f_28[0], 0f, 1.2f, 0f, 1f, -1, 0.1f, true);
				}
				iLocal_49 = MISC::GET_GAME_TIMER();
			}
			else
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_41.f_28[0], 0);
				}
				iLocal_49 = -1;
			}
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_41.f_28[0], 4000, 0, 2);
		}
		iLocal_48++;
	}
	else if (iLocal_48 == 1)
	{
		if ((iLocal_49 == -1 || (MISC::GET_GAME_TIMER() - iLocal_49) > 3000) || (__LIB_0__::func_121(Local_41.f_28[0]) && __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_41.f_28[0], 4.5f, 1)))
		{
			return 1;
		}
	}
	return 0;
}

void func_364()//Position - 0x30720
{
	if (Global_94618)
	{
		__LIB_14__::func_865(&iLocal_228, 2662.6438f, 4284.5347f, 43.5787f, 19.8376f, 0, 0, 1, 0, 0, joaat("asterope"), 0, 145, 1);
		__LIB_0__::func_427(2672.462f, 4288.7773f, 43.607f, 78.1133f, 0, 0);
		func_375(1, 1);
		SYSTEM::WAIT(500);
		__LIB_0__::func_433(0, -1, 1);
		__LIB_33__::func_561(1, 1, 1);
		iLocal_42 = 1;
		iLocal_43 = 2;
		__LIB_0__::func_84(500, 1);
	}
	else
	{
		Global_78564 = 1;
		iLocal_39 = 0;
		while (!func_366(&Local_41))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_14__::func_800(&Local_41, 0, 1);
		__LIB_14__::func_801(&Local_41);
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_41.f_59))
		{
			PED::TAKE_OWNERSHIP_OF_SYNCHRONIZED_SCENE(Local_41.f_59);
			iLocal_47 = Local_41.f_59;
		}
		Global_78564 = 0;
		__LIB_14__::func_878(&iLocal_58, &(Local_41.f_28[0]));
		__LIB_14__::func_878(&iLocal_54, &(Local_41.f_41[0]));
		__LIB_14__::func_878(&iLocal_55, &(Local_41.f_41[1]));
		if (!ENTITY::DOES_ENTITY_EXIST(__LIB_14__::func_794()))
		{
			__LIB_14__::func_865(&iLocal_228, 2704.0776f, 4152.2397f, 42.2514f, 175.193f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
		}
		__LIB_0__::func_427(2718.649f, 4147.2075f, 42.7043f, 76.7892f, 0, 0);
		func_375(1, 1);
		func_279();
		func_278(31, 1, 0);
		SYSTEM::WAIT(0);
		while (!func_277())
		{
			SYSTEM::WAIT(0);
		}
		__LIB_0__::func_433(0, -1, 1);
		__LIB_33__::func_561(1, 1, 1);
		iLocal_42 = 1;
		iLocal_43 = 0;
	}
}

int func_366(var uParam0)//Position - 0x308A6
{
	int iVar0[3];
	int iVar1;
	bool bVar2;
	int iVar3;
	iVar0[0] = __LIB_2__::func_910(62);
	iVar0[1] = joaat("prop_table_03_chr");
	iVar0[2] = joaat("prop_laptop_01a");
	switch (iLocal_39)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 2729.0918f, 4143.17f, 41.36332f };
			uParam0->f_17[1 /*3*/] = { 2714.735f, 4145.3823f, 45.307323f };
			uParam0->f_24 = 12.8f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "MAUDE_MCS_1", 24);
			func_278(31, 1, 1);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			STREAMING::REQUEST_ANIM_DICT("special_ped@maude@base");
			iLocal_39 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED("special_ped@maude@base"))
			{
				return 0;
			}
			iLocal_39 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				__LIB_14__::func_807(&(uParam0->f_41[0]), iVar0[1], 2728.35f, 4145.59f, 43.3f, -91.28f);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				__LIB_14__::func_807(&(uParam0->f_41[1]), iVar0[2], 2727.686f, 4145.715f, 44.08f, 71f);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!__LIB_14__::func_842(&(uParam0->f_28[0]), 62, 2728.33f, 4145.6f, 43.89f, 89.19f, "RC MAUDE 1", 1))
				{
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				iLocal_39 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_692(uParam0->f_28[0]) && __LIB_0__::func_121(uParam0->f_41[0]))
			{
				uParam0->f_59 = PED::CREATE_SYNCHRONIZED_SCENE(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_59, true);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uParam0->f_59, false);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uParam0->f_59, "special_ped@maude@base", "base", 1000f, -4f, 4688, 0, 1000f, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], true);
				iVar3 = 0;
				iVar3 += 16;
				iVar3 += 64;
				iVar3 += 512;
				iVar3 += 4096;
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_41[0], uParam0->f_59, "base_chair", "special_ped@maude@base", 1000f, -8f, iVar3, 1000f);
			}
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

void func_375(bool bParam0, bool bParam1)//Position - 0x30DDE
{
	if (bParam0)
	{
		__LIB_33__::func_562(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_338(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_465()//Position - 0x37563
{
	iLocal_42 = 0;
	iLocal_43 = 0;
	iLocal_47 = -1;
	iLocal_48 = 0;
	iLocal_49 = -1;
	iLocal_50 = -1;
	iLocal_51 = 4;
	iLocal_52 = 0;
	iLocal_53 = 0;
	iLocal_46 = 0;
	bLocal_45 = false;
	__LIB_37__::func_511();
}

void func_467()//Position - 0x3759D
{
	__LIB_14__::func_841();
	if (__LIB_14__::func_843())
	{
		func_479();
	}
	__LIB_14__::func_871(&Local_41, 1, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_479()//Position - 0x37821
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
	func_278(31, 0, 1);
	STREAMING::REMOVE_ANIM_DICT("special_ped@maude@base");
	func_3(0);
}

