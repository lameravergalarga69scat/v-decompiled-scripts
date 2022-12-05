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
	struct<4> Local_35[10];
	bool bLocal_36 = 0;
	var uLocal_37 = 0;
	struct<3> Local_38 = { 0, 0, 0 } ;
	struct<3> Local_39 = { 0, 0, 0 } ;
	var uLocal_40 = 0;
	char* sLocal_41 = NULL;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = -1;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 1000;
	var uLocal_52 = 1000;
	var uLocal_53 = 0;
	struct<61> Local_54 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_55 = 0;
	int* iLocal_56 = NULL;
	struct<3> Local_57 = { 0, 0, 0 } ;
	float fLocal_58 = 0f;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int* iLocal_61 = NULL;
	int* iLocal_62 = NULL;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 16;
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
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	struct<3> Local_239 = { 0, 0, 0 } ;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	struct<61> Local_244 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
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
	Local_38 = { -1593.813f, 5221.2354f, 1.94482f };
	Local_39 = { -1603.9861f, 5243.6235f, 4.940323f };
	uLocal_40 = __LIB_0__.func_282(16);
	sLocal_41 = "rcmabigail";
	iLocal_55 = joaat("asea");
	Local_57 = { -1573.7334f, 5164.508f, 18.5576f };
	fLocal_58 = 175.9451f;
	Local_239 = { -1014.0543f, -2474.0132f, 19.1091f };
	Local_54 = { ScriptParam_244 };
	__LIB_20__.func_264(&Local_54);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__.func_135("Force cleanup [TERMINATING]");
		func_481(1);
		__LIB_0__.func_272(1);
	}
	if (__LIB_0__.func_121(Local_54.f_28[0]))
	{
		iLocal_61 = Local_54.f_28[0];
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_61, true, true);
	}
	__LIB_0__.func_270();
	if (__LIB_0__.func_170())
	{
		iVar0 = __LIB_0__.func_269();
		if (Global_94618 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				func_464(-1595.201f, 5217.4946f, 3.0009f, 208.2675f, 1, 0);
				func_385(1);
				break;
			}
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_WLB", 0);
		__LIB_35__.func_898(Local_54.f_9, 0, 0, 0, 0, 0);
		if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
		{
			switch (iLocal_59)
			{
				case 0:
					func_361();
					break;
				case 1:
					func_301();
					break;
				case 2:
					func_272();
					break;
				case 3:
					func_270();
					break;
				case 4:
					func_9();
					break;
				case 5:
					func_1();
					break;
				}
		}
	}
}

void func_1()//Position - 0x1E9
{
	switch (iLocal_60)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			__LIB_0__.func_137(&uLocal_42, 0, 0);
			__LIB_0__.func_523(&iLocal_62);
			func_481(1);
			iLocal_60 = 1;
			break;
		case 1:
			if (__LIB_0__.func_204())
			{
				__LIB_0__.func_0(&iLocal_61);
				__LIB_11__.func_32(&iLocal_56);
				__LIB_0__.func_272(1);
			}
			break;
	}
}

void func_9()//Position - 0x47B
{
	switch (iLocal_60)
	{
		case 0:
			func_268();
			if (__LIB_0__.func_121(iLocal_56))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_56, 1);
			}
			iLocal_60 = 1;
			break;
		case 1:
			func_238();
			if (!__LIB_0__.func_121(iLocal_61))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) == 0)
				{
					iLocal_60 = 2;
				}
				else
				{
					func_237(3);
				}
			}
			else if (__LIB_8__.func_538(PLAYER::PLAYER_PED_ID(), iLocal_61) > 250f)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) == 0)
				{
					iLocal_60 = 2;
				}
				else
				{
					func_237(3);
				}
			}
			else
			{
				if (!__LIB_4__.func_465(iLocal_61, joaat("SCRIPT_TASK_SMART_FLEE_PED")))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
				}
				if (iLocal_230 == 0)
				{
					if (((!__LIB_0__.func_75() && __LIB_0__.func_508(iLocal_61, PLAYER::PLAYER_PED_ID(), 20f, 1)) && !PED::IS_PED_RAGDOLL(iLocal_61)) && __LIB_37__.func_799(&uLocal_65, "SONARAU", "SONAR_SHOOTS", 7, 0, 0, 0))
					{
						iLocal_230 = 1;
					}
				}
				else if (((((iLocal_238 < 15 && !__LIB_0__.func_75()) && (MISC::GET_GAME_TIMER() - iLocal_235) > 10000) && __LIB_0__.func_508(iLocal_61, PLAYER::PLAYER_PED_ID(), 20f, 1)) && !PED::IS_PED_RAGDOLL(iLocal_61)) && __LIB_37__.func_799(&uLocal_65, "SONARAU", "SONAR_CHASE", 7, 0, 0, 0))
				{
					iLocal_235 = MISC::GET_GAME_TIMER();
					iLocal_238++;
				}
			}
			break;
		case 2:
			func_10();
			break;
	}
}

void func_10()//Position - 0x5F6
{
	__LIB_0__.func_202(322, 1);
	__LIB_0__.func_272(1);
}

void func_14(int iParam0, int iParam1, int iParam2)//Position - 0x7B2
{
	bool bVar0;
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		__LIB_0__.func_521((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113386.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113386.f_10194[iParam0 /*12*/].f_6 == 11 || Global_113386.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113386.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_113386.f_10194[iParam0 /*12*/].f_10 = iParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_15();
	}
}

void func_15()//Position - 0x898
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	iVar0 = 0;
	Global_113122 = 0;
	Global_113123 = 0;
	Global_113124 = 0;
	Global_113125 = 0;
	Global_113126 = 0;
	Global_113127 = 0;
	Global_113128 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113386.f_10194.f_3853;
	Global_113386.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113386.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113386.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113122++;
					fVar1 = (fVar1 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				case 3:
					Global_113123++;
					fVar2 = (fVar2 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				case 5:
					Global_113124++;
					fVar3 = (fVar3 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				case 7:
					Global_113125++;
					fVar4 = (fVar4 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				case 9:
					Global_113126++;
					fVar5 = (fVar5 + (Global_113386.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				case 11:
					Global_113127++;
					fVar6 = (fVar6 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				case 13:
					Global_113128++;
					fVar7 = (fVar7 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113105 > 0)
	{
		if (Global_113122 == Global_113105)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113106 > 0)
	{
		if (Global_113123 == Global_113106)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113107 > 0)
	{
		if (Global_113124 == Global_113107)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113108 > 0)
	{
		if (Global_113125 == Global_113108)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113109 > 0)
	{
		if (((Global_113126 == Global_113109 || (Global_113109 * 10 / Global_113126) < 41) || Global_113126 > Global_113112) || Global_113126 == Global_113112)
		{
			if (!BitTest(Global_113386.f_10194.f_3856, 14))
			{
				if (Global_113126 == Global_113109)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113109, 0);
					MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113110 > 0)
	{
		if (Global_113127 == Global_113110)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113111 > 0)
	{
		if (Global_113128 == Global_113111)
		{
			fVar7 = 5f;
		}
	}
	Global_113386.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113126 > Global_113112 || Global_113126 == Global_113112)
	{
		iVar9 = Global_113112;
	}
	else
	{
		iVar9 = Global_113126;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113122, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113105, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113123, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113106, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113124, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113107, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113125, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113108, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113112, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_113128 + Global_113127), true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_113111 + Global_113110), true);
	Global_113129 = (Global_113122 * 100 / Global_113105);
	Global_113131 = ((Global_113124 + Global_113123) * 100 / (Global_113107 + Global_113106));
	Global_113130 = ((Global_113125 + iVar9) * 100 / (Global_113108 + Global_113112));
	Global_113132 = ((Global_113127 + Global_113128) * 100 / (Global_113110 + Global_113111));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113386.f_10194.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113129, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113130, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113131, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113386.f_10194.f_3853))
	{
		__LIB_0__.func_4(13, SYSTEM::FLOOR(Global_113386.f_10194.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78319)
		{
			if (__LIB_0__.func_3() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					__LIB_0__.func_203();
				}
			}
		}
	}
}

void func_39()//Position - 0x17BD
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
				if (func_157(iVar1, 14, iVar2))
				{
					func_40(iVar1, 14, iVar2);
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

int func_40(int iParam0, int iParam1, int iParam2)//Position - 0x187E
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
	Global_78130[1 /*14*/] = { func_92(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_157(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { __LIB_0__.func_210(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_40(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { func_85(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_40(iParam0, 14, uVar5[iVar3]))
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
		uVar6 = { __LIB_0__.func_210(iVar0, 0) };
		Global_78130[1 /*14*/] = { func_92(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__.func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
		}
	}
	if (__LIB_0__.func_209(iParam0, iVar0, &iVar7, 0))
	{
		func_43(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_41(iParam0, iVar0, &iVar7))
	{
		func_43(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_41(int iParam0, int iParam1, int iParam2)//Position - 0x1A3A
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_157(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_43(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x1B01
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
		Global_78130[1 /*14*/] = { func_92(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__.func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		func_75(iParam1);
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
			iVar7 = func_72(iParam0, 1);
			if (!__LIB_6__.func_780(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = func_72(iParam0, 0);
			if (!__LIB_6__.func_779(iVar10, 14, iVar8, -1) && !__LIB_6__.func_827(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = func_72(iParam0, 2);
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
			uVar11 = { __LIB_0__.func_210(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { func_92(iVar10, iVar0, uVar11[iVar0], -1) };
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
							uVar12 = { func_85(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { func_92(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__.func_757(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							func_75(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_51(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_43(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_75(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_51(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_43(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { func_92(iVar10, iVar0, __LIB_0__.func_319(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (__LIB_0__.func_209(iParam0, iVar10, &iVar4, 1))
							{
								func_43(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__.func_210(iVar10, 0) };
						func_43(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { func_92(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (func_47(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_43(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_92(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (func_47(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_43(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_92(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (func_47(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_43(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_92(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (func_47(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_43(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_92(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (func_47(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_43(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { func_85(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { func_92(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__.func_757(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			func_75(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_51(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_43(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__.func_757(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		func_75(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_51(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_43(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = func_51(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_43(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_44(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (__LIB_0__.func_209(iParam0, iVar10, &iVar4, 0))
		{
			func_43(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_41(iParam0, iVar10, &iVar4))
		{
			func_43(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

void func_44(int iParam0, int iParam1, int iParam2)//Position - 0x2311
{
	int iVar0;
	int iVar1;
	if (iParam0 == joaat("Player_Zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("Player_One"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		iVar0 = 4;
	}
	if (__LIB_0__.func_523(iParam0, 12, iVar0))
	{
		if (__LIB_0__.func_20(iParam0, iParam1, iParam2))
		{
			iVar1 = __LIB_0__.func_19(iParam0);
			if (iParam1 == 3)
			{
				Global_113386.f_2363.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_113386.f_2363.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_47(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0x24A1
{
	var uVar0;
	int iVar1;
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_85(iParam0, (*uParam4)[13]) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 1;
			}
			iVar1++;
		}
	}
	if (__LIB_0__.func_21(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("Player_Zero"))
	{
		if (__LIB_6__.func_780(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_6__.func_779(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (__LIB_6__.func_827(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("Player_One"))
	{
		if (__LIB_6__.func_780(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_6__.func_779(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (__LIB_6__.func_827(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (__LIB_6__.func_780(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_6__.func_779(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (__LIB_6__.func_827(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2EE6
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
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = __LIB_6__.func_795(iParam0, 1);
				iVar0 = __LIB_0__.func_24(iParam1, iParam3, iVar1);
				break;
			case 1:
				iVar2 = __LIB_6__.func_795(iParam0, 2);
				iVar0 = __LIB_0__.func_24(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		__LIB_0__.func_211(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		__LIB_0__.func_212(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (__LIB_0__.func_23(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("Player_Zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									case 37:
										iVar0 = 17;
										break;
									case 38:
										iVar0 = 18;
										break;
									case 39:
										iVar0 = 18;
										break;
									case 40:
										iVar0 = 19;
										break;
									case 41:
										iVar0 = 19;
										break;
									case 42:
										iVar0 = 20;
										break;
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!__LIB_6__.func_829(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!__LIB_6__.func_829(iParam0, 3, 135, 150))
									{
										iVar0 = func_54(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									case 61:
										iVar0 = 3;
										break;
									case 16:
										iVar0 = 1;
										break;
									case 114:
										iVar0 = 15;
										break;
									case 115:
										iVar0 = 17;
										break;
									case 116:
										iVar0 = 16;
										break;
									case 117:
										iVar0 = 18;
										break;
									case 118:
										iVar0 = 20;
										break;
									case 119:
										iVar0 = 19;
										break;
									case 125:
										iVar0 = 21;
										break;
									case 120:
										iVar0 = 22;
										break;
									case 124:
										iVar0 = 23;
										break;
									case 126:
										iVar0 = 24;
										break;
									case 121:
										iVar0 = 25;
										break;
									case 127:
										iVar0 = 26;
										break;
									case 128:
										iVar0 = 27;
										break;
									case 85:
										iVar0 = 6;
										break;
									case 77:
										iVar0 = 7;
										break;
									case 78:
										iVar0 = 8;
										break;
									case 79:
										iVar0 = 9;
										break;
									case 80:
										iVar0 = 10;
										break;
									case 81:
										iVar0 = 11;
										break;
									case 82:
										iVar0 = 12;
										break;
									case 83:
										iVar0 = 13;
										break;
									case 84:
										iVar0 = 14;
										break;
									case 21:
										iVar0 = 31;
										break;
									case 22:
										iVar0 = 30;
										break;
									case 23:
										iVar0 = 29;
										break;
									case 24:
										iVar0 = 28;
										break;
									case 25:
										iVar0 = 33;
										break;
									case 26:
										iVar0 = 35;
										break;
									case 27:
										iVar0 = 34;
										break;
									case 28:
										iVar0 = 32;
										break;
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			case joaat("Player_One"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									case 90:
										iVar0 = 1;
										break;
									case 268:
										iVar0 = 3;
										break;
									case 269:
										iVar0 = 5;
										break;
									case 270:
										iVar0 = 4;
										break;
									case 271:
										iVar0 = 6;
										break;
									case 272:
										iVar0 = 8;
										break;
									case 273:
										iVar0 = 7;
										break;
									case 279:
										iVar0 = 9;
										break;
									case 274:
										iVar0 = 10;
										break;
									case 278:
										iVar0 = 11;
										break;
									case 280:
										iVar0 = 12;
										break;
									case 275:
										iVar0 = 13;
										break;
									case 281:
										iVar0 = 14;
										break;
									case 282:
										iVar0 = 15;
										break;
									case 107:
										iVar0 = 16;
										break;
									case 108:
										iVar0 = 17;
										break;
									case 109:
										iVar0 = 18;
										break;
									case 110:
										iVar0 = 19;
										break;
									case 111:
										iVar0 = 20;
										break;
									case 112:
										iVar0 = 21;
										break;
									case 113:
										iVar0 = 22;
										break;
									case 114:
										iVar0 = 23;
										break;
									case 115:
										iVar0 = 24;
										break;
									case 116:
										iVar0 = 25;
										break;
									case 117:
										iVar0 = 52;
										break;
									case 118:
										iVar0 = 27;
										break;
									case 119:
										iVar0 = 28;
										break;
									case 120:
										iVar0 = 29;
										break;
									case 121:
										iVar0 = 30;
										break;
									case 122:
										iVar0 = 31;
										break;
									case 296:
										iVar0 = 32;
										break;
									case 297:
										iVar0 = 33;
										break;
									case 298:
										iVar0 = 34;
										break;
									case 299:
										iVar0 = 35;
										break;
									case 300:
										iVar0 = 36;
										break;
									case 301:
										iVar0 = 37;
										break;
									case 302:
										iVar0 = 38;
										break;
									case 309:
										iVar0 = 39;
										break;
									case 310:
										iVar0 = 40;
										break;
									case 311:
										iVar0 = 41;
										break;
									case 312:
										iVar0 = 42;
										break;
									case 313:
										iVar0 = 43;
										break;
									case 314:
										iVar0 = 44;
										break;
									case 315:
										iVar0 = 45;
										break;
									case 316:
										iVar0 = 46;
										break;
									case 317:
										iVar0 = 51;
										break;
									default:
										iVar0 = 0;
										break;
								}
								break;
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!__LIB_6__.func_829(iParam0, 3, 209, 222))
									{
										iVar0 = func_54(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!__LIB_6__.func_829(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_54(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_54(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_54(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_54(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!__LIB_6__.func_829(iParam0, 3, 176, 191) && !__LIB_6__.func_829(iParam0, 3, 227, 242))
									{
										iVar0 = func_54(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = __LIB_6__.func_795(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = __LIB_6__.func_795(iParam0, 11);
								iVar5 = func_53(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = __LIB_6__.func_795(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!__LIB_0__.func_22(joaat("Player_One"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = __LIB_6__.func_795(iParam0, 8);
								iVar8 = __LIB_6__.func_795(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_53(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_53(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = __LIB_6__.func_795(iParam0, 11);
								iVar0 = func_53(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			case joaat("Player_Two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									case 81:
										iVar0 = 5;
										break;
									case 82:
										iVar0 = 6;
										break;
									case 83:
										iVar0 = 7;
										break;
									case 84:
										iVar0 = 10;
										break;
									case 85:
										iVar0 = 9;
										break;
									case 86:
										iVar0 = 8;
										break;
									case 92:
										iVar0 = 22;
										break;
									case 87:
										iVar0 = 23;
										break;
									case 91:
										iVar0 = 24;
										break;
									case 93:
										iVar0 = 25;
										break;
									case 88:
										iVar0 = 26;
										break;
									case 94:
										iVar0 = 27;
										break;
									case 120:
										iVar0 = 11;
										break;
									case 121:
										iVar0 = 13;
										break;
									case 122:
										iVar0 = 14;
										break;
									case 124:
										iVar0 = 12;
										break;
									case 126:
										iVar0 = 18;
										break;
									case 128:
										iVar0 = 17;
										break;
									case 130:
										iVar0 = 19;
										break;
									case 131:
										iVar0 = 16;
										break;
									case 134:
										iVar0 = 15;
										break;
									case 135:
										iVar0 = 20;
										break;
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3D7D
{
	int iVar0;
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_54(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_54(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_54(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4045
{
	int iVar0;
	int iVar1;
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (__LIB_0__.func_523(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_72(int iParam0, int iParam1)//Position - 0x5B47
{
	int iVar0;
	int iVar1;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return __LIB_0__.func_29(iParam1);
	}
	iVar1 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	return __LIB_20__.func_577(iParam0, iVar0, iVar1, iParam1);
}

void func_75(int iParam0)//Position - 0x5C44
{
	if (BitTest(Global_78130[1 /*14*/].f_6, 1) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		__LIB_0__.func_31(iParam0, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 2, Global_78130[1 /*14*/].f_1, 1, 0);
	}
	if (BitTest(Global_78130[1 /*14*/].f_6, 1) && BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_76(Global_2883588, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_76(Global_2883588, 2, 1, 1, -1);
		}
		else
		{
			func_76(Global_2883588, 2, 1, 1, -1);
		}
	}
}

void func_76(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x5CF0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = Global_78127;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (__LIB_0__.func_30(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = __LIB_0__.func_207(iVar2, iVar0, 0);
		MISC::SET_BIT(&iVar3, iVar1);
		func_77(iVar2, iVar3, iVar0, 1, 0);
	}
}

void func_77(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x5D3A
{
	int iVar0;
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][__LIB_0__.func_206(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

struct<10> func_85(int iParam0, int iParam1)//Position - 0x9408
{
	int iVar0;
	struct<10> Var1;
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 31:
					__LIB_0__.func_34(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					__LIB_0__.func_34(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					__LIB_0__.func_34(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					__LIB_0__.func_34(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					__LIB_0__.func_34(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					__LIB_0__.func_34(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					__LIB_0__.func_34(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					__LIB_0__.func_34(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					__LIB_0__.func_34(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					__LIB_0__.func_34(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 9:
					__LIB_0__.func_34(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_86(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 31:
					__LIB_0__.func_34(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					__LIB_0__.func_34(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					__LIB_0__.func_34(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					__LIB_0__.func_34(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					__LIB_0__.func_34(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					__LIB_0__.func_34(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					__LIB_0__.func_34(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					__LIB_0__.func_34(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					__LIB_0__.func_34(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					__LIB_0__.func_34(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_86(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 31:
					__LIB_0__.func_34(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					__LIB_0__.func_34(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					__LIB_0__.func_34(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					__LIB_0__.func_34(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					__LIB_0__.func_34(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					__LIB_0__.func_34(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					__LIB_0__.func_34(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					__LIB_0__.func_34(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					__LIB_0__.func_34(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					__LIB_0__.func_34(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_86(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 31:
					__LIB_0__.func_34(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					__LIB_0__.func_34(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					__LIB_0__.func_34(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					__LIB_0__.func_34(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					__LIB_0__.func_34(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					__LIB_0__.func_34(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					__LIB_0__.func_34(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					__LIB_0__.func_34(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					__LIB_0__.func_34(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					__LIB_0__.func_34(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 9:
					__LIB_0__.func_34(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 10:
					__LIB_0__.func_34(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 11:
					__LIB_0__.func_34(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 12:
					__LIB_0__.func_34(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 13:
					__LIB_0__.func_34(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 14:
					__LIB_0__.func_34(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 15:
					__LIB_0__.func_34(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 16:
					__LIB_0__.func_34(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 17:
					__LIB_0__.func_34(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 18:
					__LIB_0__.func_34(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 19:
					__LIB_0__.func_34(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 20:
					__LIB_0__.func_34(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 21:
					__LIB_0__.func_34(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 22:
					__LIB_0__.func_34(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 23:
					__LIB_0__.func_34(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 24:
					__LIB_0__.func_34(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_86(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 31:
					__LIB_0__.func_34(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					__LIB_0__.func_34(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					__LIB_0__.func_34(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					__LIB_0__.func_34(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					__LIB_0__.func_34(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					__LIB_0__.func_34(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					__LIB_0__.func_34(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					__LIB_0__.func_34(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					__LIB_0__.func_34(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					__LIB_0__.func_34(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 9:
					__LIB_0__.func_34(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 10:
					__LIB_0__.func_34(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 11:
					__LIB_0__.func_34(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 12:
					__LIB_0__.func_34(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 13:
					__LIB_0__.func_34(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				case 14:
					__LIB_0__.func_34(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 15:
					__LIB_0__.func_34(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 16:
					__LIB_0__.func_34(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 17:
					__LIB_0__.func_34(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 18:
					__LIB_0__.func_34(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 19:
					__LIB_0__.func_34(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 20:
					__LIB_0__.func_34(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 21:
					__LIB_0__.func_34(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 22:
					__LIB_0__.func_34(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 23:
					__LIB_0__.func_34(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_86(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_86(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9D37
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var2;
	int iVar3;
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("Player_Zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("Player_One"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("Player_Two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("MP_M_Freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("MP_F_Freemode_01"))
		{
			iVar0 = 4;
		}
		FILES::GET_SHOP_PED_OUTFIT(iParam2, &Var1);
		if (!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(Var1.f_1, iVar3, &Var2) && Var2.f_2 != -1)
				{
					if ((Var2.f_0 != 0 && Var2.f_0 != -1) && Var2.f_0 != joaat("0"))
					{
						(*iParam0)[Var2.f_2] = __LIB_11__.func_513(iParam1, Var2.f_0, 14, iVar0);
					}
					else if (Var2.f_1 != -1)
					{
						(*iParam0)[Var2.f_2] = Var2.f_1;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_89(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xBCF1
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var2;
	struct<2> Var3;
	int iVar4;
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("Player_Zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("Player_One"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("Player_Two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("MP_M_Freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("MP_F_Freemode_01"))
	{
		iVar0 = 4;
	}
	FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar0, false);
	FILES::GET_SHOP_PED_QUERY_OUTFIT((iParam2 - iParam3), &Var1);
	if (!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
	{
		iVar4 = 0;
		while (iVar4 < Var1.f_4)
		{
			if (FILES::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(Var1.f_1, iVar4, &Var2))
			{
				if ((Var2.f_0 != 0 && Var2.f_0 != -1) && Var2.f_0 != joaat("0"))
				{
					if (Var2.f_2 == 10)
					{
						FILES::INIT_SHOP_PED_COMPONENT(&Var3);
						FILES::GET_SHOP_PED_COMPONENT(Var2.f_0, &Var3);
						if (Var2.f_0 != Var3.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var2.f_2 == 10 && uParam0->f_16)
					{
						(*uParam0)[__LIB_0__.func_33(Var2.f_2)] = Var2.f_0;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[__LIB_0__.func_33(Var2.f_2)] = __LIB_11__.func_513(iParam1, Var2.f_0, __LIB_0__.func_33(Var2.f_2), iVar0);
					}
				}
				else if (Var2.f_1 != -1)
				{
					(*uParam0)[__LIB_0__.func_33(Var2.f_2)] = Var2.f_1;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

struct<14> func_92(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xBFFC
{
	__LIB_0__.func_41();
	if (iParam0 == joaat("Player_Zero"))
	{
		func_138(iParam1, iParam2);
	}
	else if (iParam0 == joaat("Player_One"))
	{
		func_119(iParam1, iParam2);
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		func_93(iParam1, iParam2);
	}
	return Global_78130[0 /*14*/];
}

void func_93(int iParam0, int iParam1)//Position - 0xC052
{
	switch (iParam0)
	{
		case 0:
			__LIB_0__.func_156(iParam1);
			break;
		case 2:
			func_117(iParam1);
			break;
		case 3:
			__LIB_0__.func_148(iParam1);
			break;
		case 4:
			__LIB_0__.func_147(iParam1);
			break;
		case 6:
			__LIB_0__.func_146(iParam1);
			break;
		case 5:
			func_111(iParam1);
			break;
		case 8:
			func_110(iParam1);
			break;
		case 9:
			func_109(iParam1);
			break;
		case 10:
			func_108(iParam1);
			break;
		case 1:
			__LIB_0__.func_145(iParam1);
			break;
		case 7:
			func_106(iParam1);
			break;
		case 11:
			func_105(iParam1);
			break;
		case 12:
			func_104(iParam1);
			break;
		case 13:
			func_103(iParam1);
			break;
		case 14:
			func_94(iParam1);
			break;
	}
}

void func_94(int iParam0)//Position - 0xC142
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_78130[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1" /* GXT: Specs Pest Shades */, 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2" /* GXT: Dix Charcoal Glasses */, 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1" /* GXT: Dix Brown Glasses */, 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2" /* GXT: Dix Black Glasses */, 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 55;
			iVar5 = 10;
			break;
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3" /* GXT: Dix Checked Glasses */, 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 52;
			iVar5 = 10;
			break;
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4" /* GXT: Dix White Glasses */, 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 54;
			iVar5 = 10;
			break;
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5" /* GXT: Dix Red Glasses */, 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 54;
			iVar5 = 10;
			break;
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6" /* GXT: Dix Maroon Glasses */, 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 55;
			iVar5 = 10;
			break;
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7" /* GXT: Dix Yellow Glasses */, 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 55;
			iVar5 = 10;
			break;
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8" /* GXT: Dix Spring Glasses */, 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 58;
			iVar5 = 10;
			break;
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9" /* GXT: Dix Fall Glasses */, 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 58;
			iVar5 = 10;
			break;
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3" /* GXT: Tung Charcoal Shades */, 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1" /* GXT: Tung White Shades */, 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2" /* GXT: Tung Ash Shades */, 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3" /* GXT: Tung Red Shades */, 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4" /* GXT: Tung Blue Shades */, 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5" /* GXT: Tung Black Shades */, 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6" /* GXT: Tung Orange Tint Shades */, 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7" /* GXT: Tung Purple Tint Shades */, 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8" /* GXT: Tung Hornet Shades */, 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9" /* GXT: Tung Two-Tone Shades */, 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 10;
			break;
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar5 = 10;
			break;
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 10;
			break;
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0" /* GXT: OG Black Shades */, 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 60;
			iVar5 = 10;
			break;
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1" /* GXT: OG Ash Shades */, 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2" /* GXT: OG Red Shades */, 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 50;
			iVar5 = 10;
			break;
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3" /* GXT: OG Yellow Shades */, 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 59;
			iVar5 = 10;
			break;
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4" /* GXT: OG Brown Shades */, 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 55;
			iVar5 = 10;
			break;
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5" /* GXT: OG Gray Shades */, 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 55;
			iVar5 = 10;
			break;
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6" /* GXT: OG Blue Shades */, 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7" /* GXT: OG Smoke Shades */, 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 59;
			iVar5 = 10;
			break;
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8" /* GXT: OG Orange Shades */, 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 79;
			iVar5 = 10;
			break;
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9" /* GXT: OG Slate Shades */, 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 79;
			iVar5 = 10;
			break;
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0" /* GXT: Steel Aviators */, 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 150;
			iVar5 = 10;
			break;
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1" /* GXT: Slate Aviators */, 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			iVar5 = 10;
			break;
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2" /* GXT: Gold Aviators */, 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 10;
			break;
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3" /* GXT: Silver Two-Tone Aviators */, 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 175;
			iVar5 = 10;
			break;
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4" /* GXT: Aluminum Aviators */, 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5" /* GXT: Bronze Two-Tone Aviators */, 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6" /* GXT: Brown Two-Tone Aviators */, 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7" /* GXT: Black Aviators */, 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 195;
			iVar5 = 10;
			break;
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8" /* GXT: Silver Aviators */, 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 210;
			iVar5 = 10;
			break;
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9" /* GXT: Smoke Aviators */, 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 215;
			iVar5 = 10;
			break;
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0" /* GXT: Krepp Gold Shades */, 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1" /* GXT: Krepp Gray Shades */, 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 10;
			break;
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2" /* GXT: Krepp Slate Shades */, 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 169;
			iVar5 = 10;
			break;
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3" /* GXT: Krepp Black Shades */, 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 169;
			iVar5 = 10;
			break;
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4" /* GXT: Krepp White Shades */, 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5" /* GXT: Krepp Silver Shades */, 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 175;
			iVar5 = 10;
			break;
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6" /* GXT: Krepp Ash Shades */, 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 175;
			iVar5 = 10;
			break;
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7" /* GXT: Krepp Brown Shades */, 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 189;
			iVar5 = 10;
			break;
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8" /* GXT: Krepp Beige Shades */, 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 195;
			iVar5 = 10;
			break;
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9" /* GXT: Krepp Coffee Shades */, 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 195;
			iVar5 = 10;
			break;
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0" /* GXT: Broker Black Shades */, 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 49;
			iVar5 = 10;
			break;
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1" /* GXT: Broker Purple Shades */, 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2" /* GXT: Broker Brown Shades */, 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 52;
			iVar5 = 10;
			break;
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3" /* GXT: Broker Orange Shades */, 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 55;
			iVar5 = 10;
			break;
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4" /* GXT: Broker Gray Shades */, 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5" /* GXT: Broker Striped Shades */, 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 58;
			iVar5 = 10;
			break;
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6" /* GXT: Broker Beige Shades */, 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 60;
			iVar5 = 10;
			break;
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7" /* GXT: Broker Ash Shades */, 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 63;
			iVar5 = 10;
			break;
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8" /* GXT: Broker Charcoal Shades */, 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 65;
			iVar5 = 10;
			break;
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9" /* GXT: Broker Gradient Shades */, 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 68;
			iVar5 = 10;
			break;
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0" /* GXT: Hockey Mask */, 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0" /* GXT: Black Hat */, 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar5 = 0;
			break;
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar5 = 0;
			break;
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar5 = 0;
			break;
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar5 = 0;
			break;
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar5 = 0;
			break;
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar5 = 0;
			break;
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar5 = 0;
			break;
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar5 = 0;
			break;
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar5 = 0;
			break;
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar5 = 0;
			break;
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar5 = 0;
			break;
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar5 = 0;
			break;
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar5 = 0;
			break;
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar5 = 0;
			break;
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar5 = 0;
			break;
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar5 = 0;
			break;
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0" /* GXT: Green Monster Mask */, 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1" /* GXT: Red Monster Mask */, 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0" /* GXT: Pig Mask */, 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1" /* GXT: Dark Pig Mask */, 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0" /* GXT: Silver Skull Mask */, 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1" /* GXT: Bone Skull Mask */, 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0" /* GXT: Space Monkey Mask */, 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0" /* GXT: White Hockey Mask */, 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1" /* GXT: Red Hockey Mask */, 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0" /* GXT: Ape Mask */, 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1" /* GXT: Dark Ape Mask */, 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0" /* GXT: Carnival Orange Mask */, 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1" /* GXT: Carnival White Mask */, 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2" /* GXT: Carnival Blue Mask */, 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0" /* GXT: Hawk and Little Baseball Cap */, 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar1 = 20;
			iVar5 = 0;
			break;
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1" /* GXT: Taco Bomb Baseball Cap */, 16);
			iVar3 = 26;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			break;
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2" /* GXT: Nut House Baseball Cap */, 16);
			iVar3 = 26;
			iVar4 = 2;
			iVar1 = 25;
			iVar5 = 0;
			break;
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3" /* GXT: Rusty Brown's Baseball Cap */, 16);
			iVar3 = 26;
			iVar4 = 3;
			iVar1 = 22;
			iVar5 = 0;
			break;
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4" /* GXT: Bishop's Chicken Baseball Cap */, 16);
			iVar3 = 26;
			iVar4 = 4;
			iVar1 = 20;
			iVar5 = 0;
			break;
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5" /* GXT: 24/7 Baseball Cap */, 16);
			iVar3 = 26;
			iVar4 = 5;
			iVar1 = 25;
			iVar5 = 0;
			break;
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6" /* GXT: iFruit 80s Baseball Cap */, 16);
			iVar3 = 26;
			iVar4 = 6;
			iVar1 = 28;
			iVar5 = 0;
			break;
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7" /* GXT: Blarneys Baseball Cap */, 16);
			iVar3 = 26;
			iVar4 = 7;
			iVar1 = 24;
			iVar5 = 0;
			break;
		case 79:
			StringCopy(&Var2, "PROPS_P1_H26_8" /* GXT: Pisswasser Baseball Cap */, 16);
			iVar3 = 26;
			iVar4 = 8;
			iVar1 = 25;
			iVar5 = 0;
			break;
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9" /* GXT: RON Baseball Cap */, 16);
			iVar3 = 26;
			iVar4 = 9;
			iVar1 = 22;
			iVar5 = 0;
			break;
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10" /* GXT: Logger Light Baseball Cap */, 16);
			iVar3 = 26;
			iVar4 = 10;
			iVar1 = 18;
			iVar5 = 0;
			break;
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11" /* GXT: Meteorite Baseball Cap */, 16);
			iVar3 = 26;
			iVar4 = 11;
			iVar1 = 20;
			iVar5 = 0;
			break;
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12" /* GXT: Dusche Gold Baseball Cap */, 16);
			iVar3 = 26;
			iVar4 = 12;
			iVar1 = 24;
			iVar5 = 0;
			break;
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13" /* GXT: Barracho Baseball Cap */, 16);
			iVar3 = 26;
			iVar4 = 13;
			iVar1 = 22;
			iVar5 = 0;
			break;
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14" /* GXT: Vespucci Beach Baseball Cap */, 16);
			iVar3 = 26;
			iVar4 = 14;
			iVar1 = 25;
			iVar5 = 0;
			break;
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15" /* GXT: Orang-O-Tang Baseball Cap */, 16);
			iVar3 = 26;
			iVar4 = 15;
			iVar1 = 25;
			iVar5 = 0;
			break;
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		default:
			func_102(iVar7, iParam0, 155, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_95(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xD376
{
	var uVar0;
	int iVar1;
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = __LIB_0__.func_40(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (MISC::GET_HASH_KEY(sParam3) != MISC::GET_HASH_KEY("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			MISC::SET_BIT(&(uParam0->f_6), 5);
		}
		MISC::SET_BIT(&(uParam0->f_6), 1);
		MISC::SET_BIT(&(uParam0->f_6), 2);
		MISC::SET_BIT(&(uParam0->f_6), 6);
		if (__LIB_0__.func_39(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("REBREATHER"), 0))
			{
				MISC::SET_BIT(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_99(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_99(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_99(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_99(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_99(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_99(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		if (FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589))
		{
			MISC::CLEAR_BIT(&(uParam0->f_6), 1);
			MISC::CLEAR_BIT(&(uParam0->f_6), 0);
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		MISC::SET_BIT(&(uParam0->f_6), 5);
		if (__LIB_0__.func_31(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
		}
		if (__LIB_0__.func_31(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
		if (!__LIB_0__.func_31(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (__LIB_0__.func_39(14))
			{
				return;
			}
			uVar0 = __LIB_0__.func_207(__LIB_0__.func_38(iParam1, uParam0->f_2), Global_78127, 0);
			if (BitTest(uVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 1);
			}
			uVar0 = __LIB_0__.func_207(__LIB_0__.func_37(iParam1, uParam0->f_2), Global_78127, 0);
			if (BitTest(uVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 2);
			}
			if (__LIB_0__.func_36(iParam1, uParam0->f_2, &iVar1))
			{
				uVar0 = __LIB_0__.func_207(iVar1, Global_78127, 0);
				if (!BitTest(uVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
}

int func_99(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0xE315
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	iVar0 = Global_78127;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (__LIB_0__.func_30(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3))
	{
		uVar3 = __LIB_0__.func_207(iVar2, iVar0, 0);
		return BitTest(uVar3, uVar1);
	}
	return 0;
}

void func_102(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xE436
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<10> Var9;
	int iVar10;
	int iVar11;
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_78130[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar3 = (iParam1 - iParam2);
		if (iVar3 >= 0)
		{
			iVar4 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar1, false);
			if (iVar4 > iVar3)
			{
				FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar3, &Var2);
				Global_2883588 = Var2.f_1;
				Global_2883589 = Var2.f_0;
				func_95(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_95(&(Global_78130[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var5);
		iVar7 = (iParam1 - iParam2);
		if (iVar7 >= 0)
		{
			iVar8 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, true, -1, -1);
			if (iVar8 > iVar7)
			{
				FILES::GET_SHOP_PED_QUERY_PROP(iVar7, &Var5);
				if (Var5.f_6 == 0)
				{
					iVar6 = 9;
				}
				else if (Var5.f_6 == 1)
				{
					iVar6 = 10;
				}
				else if (Var5.f_6 == 2)
				{
					iVar6 = 2;
				}
				else if (Var5.f_6 == 3)
				{
					iVar6 = 3;
				}
				else if (Var5.f_6 == 4)
				{
					iVar6 = 4;
				}
				else if (Var5.f_6 == 5)
				{
					iVar6 = 5;
				}
				else if (Var5.f_6 == 6)
				{
					iVar6 = 6;
				}
				else if (Var5.f_6 == 7)
				{
					iVar6 = 7;
				}
				else if (Var5.f_6 == 8)
				{
					iVar6 = 8;
				}
				else
				{
					iVar6 = -1;
				}
				Global_2883588 = Var5.f_1;
				Global_2883589 = Var5.f_0;
				func_95(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var5.f_1, joaat("OUTFIT_ONLY"), 0), iVar6, 2, Var5.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var9);
		if (iParam3 != -1 && Global_78300)
		{
			FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var9);
			Global_2883588 = Var9.f_1;
			Global_2883589 = Var9.f_0;
			func_95(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var9.f_1 != 0);
			return;
		}
		iVar10 = (iParam1 - iParam2);
		if (iVar10 >= 0)
		{
			iVar11 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, false, -1, __LIB_0__.func_33(iParam0));
			if (iVar11 > iVar10)
			{
				FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar10, &Var9);
				Global_2883588 = Var9.f_1;
				Global_2883589 = Var9.f_0;
				func_95(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var9.f_1 != 0);
				return;
			}
		}
	}
}

void func_103(int iParam0)//Position - 0xE6BC
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_78130[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		default:
			func_102(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_104(int iParam0)//Position - 0xE809
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_78130[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0" /* GXT: White T-Shirt, Sweatpants */, 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5" /* GXT: Dock Worker */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6" /* GXT: Highway Patrol */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7" /* GXT: Golf */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8" /* GXT: Tennis */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10" /* GXT: Scuba Land */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12" /* GXT: Stealth */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13" /* GXT: Triathlon */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14" /* GXT: Underwear */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15" /* GXT: Security */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16" /* GXT: Toilet */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17" /* GXT: Prologue */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18" /* GXT: Tuxedo */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19" /* GXT: Pink Ladies Sweats */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20" /* GXT: Blue Boiler Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21" /* GXT: Navy Boiler Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22" /* GXT: Gray Boiler Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23" /* GXT: Green Boiler Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24" /* GXT: Hunting */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25" /* GXT: White T-Shirt, Cargo Pants */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26" /* GXT: Denim Jacket, Jeans */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27" /* GXT: Ludendorff */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28" /* GXT: Beige Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 119;
			break;
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29" /* GXT: Blue Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 99;
			break;
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30" /* GXT: Brown Plaid Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 129;
			break;
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44" /* GXT: Burgundy Cheap Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 125;
			break;
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45" /* GXT: Murky Plaid Cheap Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 120;
			break;
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46" /* GXT: Mint Plaid Cheap Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 139;
			break;
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47" /* GXT: Green Plaid Cheap Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 149;
			break;
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48" /* GXT: Blue-Gray Cheap Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 145;
			break;
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49" /* GXT: Caramel Cheap Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 140;
			break;
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50" /* GXT: Mocha Cheap Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 135;
			break;
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31" /* GXT: Gray Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32" /* GXT: Sand Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33" /* GXT: Charcoal Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34" /* GXT: Off-White Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35" /* GXT: Cream Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36" /* GXT: Black Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37" /* GXT: Ash Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38" /* GXT: Red T-Shirt, Cargo Pants */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39" /* GXT: Amethyst Polo Shirt, Jeans */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40" /* GXT: White T-Shirt, Camo Pants */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41" /* GXT: Moto-X */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42" /* GXT: White Tank Top, Sweatpants */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43" /* GXT: White T-Shirt, Jeans */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12" /* GXT: Stealth */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		default:
			func_102(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_105(int iParam0)//Position - 0xED16
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_78130[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		default:
			func_102(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_106(int iParam0)//Position - 0xED8A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_78130[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		default:
			func_102(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_108(int iParam0)//Position - 0xEEE4
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_78130[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			break;
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			break;
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 9;
			break;
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 6;
			break;
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		default:
			func_102(iVar7, iParam0, 33, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_109(int iParam0)//Position - 0xF226
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_78130[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0" /* GXT: Red Wrestler Mask */, 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 125;
			break;
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1" /* GXT: Green Wrestler Mask */, 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 150;
			break;
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2" /* GXT: Patriot Wrestler Mask */, 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 175;
			break;
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3" /* GXT: Domino Wrestler Mask */, 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 85;
			break;
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4" /* GXT: Gray Wrestler Mask */, 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 150;
			break;
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5" /* GXT: Phoenix Wrestler Mask */, 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 175;
			break;
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0" /* GXT: Green Monster Mask */, 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 270;
			break;
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1" /* GXT: Red Monster Mask */, 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 270;
			break;
		default:
			func_102(iVar7, iParam0, 17, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_110(int iParam0)//Position - 0xF42E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_78130[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0" /* GXT: Black Digital Watch */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1" /* GXT: White Digital Watch */, 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		default:
			func_102(iVar7, iParam0, 18, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_111(int iParam0)//Position - 0xF64E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_78130[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		default:
			func_102(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_116(int iParam0)//Position - 0x1187B
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_78130[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0" /* GXT: White T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1" /* GXT: Yellow T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 25;
			break;
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2" /* GXT: Dusche Gold T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3" /* GXT: Charcoal T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 15;
			break;
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4" /* GXT: Cerveza Barracho T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 25;
			break;
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5" /* GXT: Liberty City Wrath T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 25;
			break;
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6" /* GXT: Pump & Run T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 22;
			break;
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7" /* GXT: Atomic T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8" /* GXT: LS Nuclear Power T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9" /* GXT: Zancudo T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 20;
			break;
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10" /* GXT: West Coast Classics T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 24;
			break;
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11" /* GXT: BC Talk Radio T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 26;
			break;
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12" /* GXT: Animal Ark T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 28;
			break;
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13" /* GXT: Rimmers T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 29;
			break;
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14" /* GXT: Paperclips T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 22;
			break;
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15" /* GXT: Pop's Pills T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 20;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0" /* GXT: Los Santos Tank Top */, 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 35;
			break;
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1" /* GXT: Del Perro Pier Tank Top */, 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 22;
			break;
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2" /* GXT: San Andreas Tank Top */, 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 25;
			break;
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3" /* GXT: Love Fist Tank Top */, 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 38;
			break;
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4" /* GXT: Space Monkey Tank Top 1 */, 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 40;
			break;
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5" /* GXT: Space Monkey Tank Top 2 */, 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 40;
			break;
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6" /* GXT: Space Monkey Tank Top 3 */, 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 40;
			break;
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7" /* GXT: Space Monkey Tank Top 4 */, 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 40;
			break;
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8" /* GXT: Space Monkey Tank Top 5 */, 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 40;
			break;
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0" /* GXT: Rearwall Black Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1" /* GXT: Crevis Green Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 500;
			break;
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2" /* GXT: Rearwall Fluoro Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 560;
			break;
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3" /* GXT: Rearwall Coffee Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 600;
			break;
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu" /* GXT: Crevis Yellow Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 650;
			break;
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu" /* GXT: Eris Yellow Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 500;
			break;
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu" /* GXT: Crevis Red Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 560;
			break;
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7" /* GXT: Rearwall Red Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 500;
			break;
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8" /* GXT: Crevis Blue Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 650;
			break;
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9" /* GXT: Eris Gray Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 540;
			break;
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10" /* GXT: Eris Red Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 690;
			break;
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11" /* GXT: Eris Olive Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 560;
			break;
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12" /* GXT: Eris Aqua Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 590;
			break;
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13" /* GXT: Eris Blue Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 690;
			break;
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14" /* GXT: Crevis Gray Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 540;
			break;
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15" /* GXT: Eris Tan Down Jacket */, 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 500;
			break;
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0" /* GXT: Red Floral Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1" /* GXT: Amethyst Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2" /* GXT: Turquoise Striped Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 25;
			break;
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3" /* GXT: Pink Striped Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 27;
			break;
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4" /* GXT: Mustard Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 22;
			break;
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5" /* GXT: Orange Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 350;
			break;
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6" /* GXT: Topaz Striped Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 27;
			break;
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7" /* GXT: Mint Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 370;
			break;
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8" /* GXT: Navy Striped Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 25;
			break;
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9" /* GXT: Green Striped Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 22;
			break;
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10" /* GXT: Turquoise Two-Tone Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 25;
			break;
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11" /* GXT: Brown Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 11;
			break;
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12" /* GXT: Pink Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 22;
			break;
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13" /* GXT: Green Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 27;
			break;
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14" /* GXT: Aqua Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 25;
			break;
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15" /* GXT: Brown Striped Polo Shirt */, 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 27;
			break;
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0" /* GXT: Mint Floral Dress */, 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1" /* GXT: Pink Dress */, 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 39;
			break;
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2" /* GXT: White Floral Dress */, 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 42;
			break;
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3" /* GXT: Purple Zebra Dress */, 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 49;
			break;
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4" /* GXT: Cream Dress */, 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 35;
			break;
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5" /* GXT: Space Monkey Dress 1 */, 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 50;
			break;
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6" /* GXT: Space Monkey Dress 2 */, 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 50;
			break;
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7" /* GXT: Space Monkey Dress 3 */, 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 50;
			break;
		case 79:
			StringCopy(&Var2, "TORSO_P2_14_0" /* GXT: Black Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1" /* GXT: Silver Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 88;
			break;
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2" /* GXT: Ammu-Nation Camo Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 60;
			break;
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3" /* GXT: LSGC Urban Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 80;
			break;
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4" /* GXT: LSGC Gray Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 70;
			break;
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5" /* GXT: Ammu-Nation A Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 80;
			break;
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6" /* GXT: Blauser Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 70;
			break;
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7" /* GXT: LSGC Forest Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 90;
			break;
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8" /* GXT: Penetrators Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 95;
			break;
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9" /* GXT: Crevis Fluorescent Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10" /* GXT: Blue Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 95;
			break;
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11" /* GXT: Green Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 110;
			break;
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12" /* GXT: LS Jardineros Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 98;
			break;
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13" /* GXT: Ash 18 Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 88;
			break;
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14" /* GXT: Red Mist XI Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 98;
			break;
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15" /* GXT: Eris Charcoal Hoodie */, 16);
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 110;
			break;
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0" /* GXT: Tennis Shirt */, 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0" /* GXT: Bare Chest */, 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0" /* GXT: Pink Jacket */, 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0" /* GXT: Blue Denim Jacket */, 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1" /* GXT: Black Denim Jacket */, 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 520;
			break;
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2" /* GXT: Gray Denim Jacket */, 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 490;
			break;
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3" /* GXT: Brown Denim Jacket */, 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 450;
			break;
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4" /* GXT: Faded Denim Jacket */, 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 420;
			break;
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5" /* GXT: Ash Denim Jacket */, 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 420;
			break;
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0" /* GXT: Denim Shirt */, 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 85;
			break;
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1" /* GXT: Faded Denim Shirt */, 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 85;
			break;
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2" /* GXT: Black Shirt */, 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 75;
			break;
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3" /* GXT: Gray Check Shirt */, 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 68;
			break;
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4" /* GXT: Brown Check Shirt */, 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 68;
			break;
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5" /* GXT: Red Check Shirt */, 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 78;
			break;
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6" /* GXT: Brown Shirt */, 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 85;
			break;
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7" /* GXT: Khaki Shirt */, 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 68;
			break;
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8" /* GXT: Red Plaid Shirt */, 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 75;
			break;
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9" /* GXT: Brown Plaid Shirt */, 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 75;
			break;
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10" /* GXT: Green Check Shirt */, 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 78;
			break;
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11" /* GXT: Maroon Check Shirt */, 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 75;
			break;
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12" /* GXT: Gray Shirt */, 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 75;
			break;
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13" /* GXT: Blue Check Shirt */, 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 75;
			break;
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14" /* GXT: Blue Two-Tone Shirt */, 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 78;
			break;
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15" /* GXT: Navy Shirt */, 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 78;
			break;
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0" /* GXT: Burgundy Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 40;
			break;
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1" /* GXT: Purple Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 32;
			break;
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2" /* GXT: Crimson Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 32;
			break;
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3" /* GXT: Tan Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 32;
			break;
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4" /* GXT: Flames Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 4;
			break;
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5" /* GXT: Skull Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 38;
			break;
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6" /* GXT: Pale Blue Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 35;
			break;
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7" /* GXT: Scarab Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 38;
			break;
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8" /* GXT: Cream Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 29;
			break;
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9" /* GXT: Cube Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 32;
			break;
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10" /* GXT: Beige Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 29;
			break;
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11" /* GXT: Blue Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 35;
			break;
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12" /* GXT: Yellow Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 32;
			break;
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13" /* GXT: Pink Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 35;
			break;
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14" /* GXT: White Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 32;
			break;
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15" /* GXT: Black Bowling Shirt */, 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 40;
			break;
		default:
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_117(int iParam0)//Position - 0x1277B
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_78130[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0" /* GXT: Trailer Cut */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1" /* GXT: Frozen */, 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0" /* GXT: Clean Razor */, 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0" /* GXT: Randal */, 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0" /* GXT: Side Shed */, 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0" /* GXT: Grown Out */, 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0" /* GXT: Mullet */, 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0" /* GXT: Shaved 2 */, 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0" /* GXT: Swept Back */, 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		default:
			func_102(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_119(int iParam0, int iParam1)//Position - 0x1299F
{
	switch (iParam0)
	{
		case 0:
			func_137(iParam1);
			break;
		case 2:
			func_136(iParam1);
			break;
		case 3:
			__LIB_18__.func_171(iParam1);
			break;
		case 4:
			func_131(iParam1);
			break;
		case 6:
			func_130(iParam1);
			break;
		case 5:
			func_129(iParam1);
			break;
		case 8:
			func_128(iParam1);
			break;
		case 9:
			func_127(iParam1);
			break;
		case 10:
			func_126(iParam1);
			break;
		case 1:
			func_125(iParam1);
			break;
		case 7:
			func_124(iParam1);
			break;
		case 11:
			func_123(iParam1);
			break;
		case 12:
			func_122(iParam1);
			break;
		case 13:
			func_121(iParam1);
			break;
		case 14:
			func_120(iParam1);
			break;
	}
}

void func_120(int iParam0)//Position - 0x12A8F
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0" /* GXT: De Koch Diamond Studs */, 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 4590;
			iVar5 = 2;
			break;
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1" /* GXT: De Koch Obsidian Studs */, 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 4100;
			iVar5 = 2;
			break;
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2" /* GXT: De Koch Sapphire Studs */, 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 3850;
			iVar5 = 2;
			break;
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3" /* GXT: De Koch Opal Studs */, 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 1850;
			iVar5 = 2;
			break;
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4" /* GXT: De Koch Platinum Studs */, 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5250;
			iVar5 = 2;
			break;
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5" /* GXT: De Koch Garnet Studs */, 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6" /* GXT: De Koch Jasper Studs */, 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7" /* GXT: De Koch Aquamarine Studs */, 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 5050;
			iVar5 = 2;
			break;
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0" /* GXT: Vankhov Diamond Studs */, 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 2500;
			iVar5 = 2;
			break;
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1" /* GXT: Vankhov Emerald Studs */, 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 1950;
			iVar5 = 2;
			break;
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2" /* GXT: Vankhov Quartz Studs */, 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 3900;
			iVar5 = 2;
			break;
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3" /* GXT: Vankhov Obsidian Studs */, 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 3550;
			iVar5 = 2;
			break;
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4" /* GXT: Vankhov Platinum Studs */, 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 4500;
			iVar5 = 2;
			break;
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5" /* GXT: Vankhov Agate Studs */, 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6" /* GXT: Vankhov Jade Studs */, 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7" /* GXT: Vankhov Onyx Studs */, 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2950;
			iVar5 = 2;
			break;
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0" /* GXT: Orange Tint Contour Shades */, 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1" /* GXT: Slate Contour Shades */, 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2" /* GXT: Gray Contour Shades */, 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3" /* GXT: Brown Contour Shades */, 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4" /* GXT: Burgundy Contour Shades */, 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5" /* GXT: Chocolate Contour Shades */, 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6" /* GXT: Black Contour Shades */, 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7" /* GXT: Purple Tint Contour Shades */, 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8" /* GXT: Blue-Gray Contour Shades */, 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9" /* GXT: White Contour Shades */, 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2" /* GXT: Swimming Goggles */, 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3" /* GXT: Racer Shades */, 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0" /* GXT: Stank Slate Shades */, 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 120;
			iVar5 = 10;
			break;
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1" /* GXT: Broker Ash Shades */, 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 128;
			iVar5 = 10;
			break;
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2" /* GXT: Broker Chocolate Shades */, 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 130;
			iVar5 = 10;
			break;
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3" /* GXT: Stank Black Shades */, 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 140;
			iVar5 = 10;
			break;
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4" /* GXT: Broker Black Shades */, 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 145;
			iVar5 = 10;
			break;
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5" /* GXT: Stank Green Tint Shades */, 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 135;
			iVar5 = 10;
			break;
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6" /* GXT: Stank Blue Tint Shades */, 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 138;
			iVar5 = 10;
			break;
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0" /* GXT: Black Aviator Shades */, 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1" /* GXT: White Aviator Shades */, 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 112;
			iVar5 = 10;
			break;
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2" /* GXT: Brown Aviator Shades */, 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 10;
			break;
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3" /* GXT: Gray Aviator Shades */, 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 118;
			iVar5 = 10;
			break;
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4" /* GXT: Two-Tone Aviator Shades */, 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 10;
			break;
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5" /* GXT: Bone Aviator Shades */, 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 125;
			iVar5 = 10;
			break;
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6" /* GXT: Red Aviator Shades */, 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 128;
			iVar5 = 10;
			break;
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7" /* GXT: Silver Aviator Shades */, 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 138;
			iVar5 = 10;
			break;
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8" /* GXT: Charcoal Aviator Shades */, 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 140;
			iVar5 = 10;
			break;
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9" /* GXT: Gold Aviator Shades */, 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0" /* GXT: Tinted Aviator Glasses */, 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1" /* GXT: Silver Aviator Glasses */, 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 55;
			iVar5 = 10;
			break;
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2" /* GXT: Sepia Aviator Glasses */, 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 58;
			iVar5 = 10;
			break;
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3" /* GXT: Blue Aviator Glasses */, 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 58;
			iVar5 = 10;
			break;
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4" /* GXT: Yellow Aviator Glasses */, 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5" /* GXT: Gray Aviator Glasses */, 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 62;
			iVar5 = 10;
			break;
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6" /* GXT: Black Aviator Glasses */, 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7" /* GXT: Slate Aviator Glasses */, 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8" /* GXT: Smoke Aviator Glasses */, 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 68;
			iVar5 = 10;
			break;
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9" /* GXT: Gold Aviator Glasses */, 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 72;
			iVar5 = 10;
			break;
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0" /* GXT: Suburban Black Shades */, 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 10;
			break;
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1" /* GXT: Suburban Teal Shades */, 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 149;
			iVar5 = 10;
			break;
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2" /* GXT: Suburban Tortoiseshell Shades */, 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 139;
			iVar5 = 10;
			break;
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3" /* GXT: Suburban Orange Shades */, 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 149;
			iVar5 = 10;
			break;
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4" /* GXT: Fuque White Shades */, 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 10;
			break;
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5" /* GXT: Fuque Camo Shades */, 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 138;
			iVar5 = 10;
			break;
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6" /* GXT: Fuque Yellow Shades */, 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 10;
			break;
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7" /* GXT: Fuque Burgundy Shades */, 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 145;
			iVar5 = 10;
			break;
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8" /* GXT: Fuque Funky Shades */, 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 159;
			iVar5 = 10;
			break;
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9" /* GXT: Fuque Squared Shades */, 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0" /* GXT: Gold T-Bone Shades */, 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 198;
			iVar5 = 10;
			break;
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1" /* GXT: Silver T-Bone Shades */, 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 210;
			iVar5 = 10;
			break;
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2" /* GXT: Two-Tone T-Bone Shades */, 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 185;
			iVar5 = 10;
			break;
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3" /* GXT: Green T-Bone Shades */, 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 10;
			break;
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4" /* GXT: Brown T-Bone Shades */, 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 190;
			iVar5 = 10;
			break;
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5" /* GXT: Peach T-Bone Shades */, 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 200;
			iVar5 = 10;
			break;
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6" /* GXT: Gray T-Bone Shades */, 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 208;
			iVar5 = 10;
			break;
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7" /* GXT: Orange T-Bone Shades */, 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 210;
			iVar5 = 10;
			break;
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0" /* GXT: Yellow Mono Shades */, 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1" /* GXT: Gray Mono Shades */, 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 185;
			iVar5 = 10;
			break;
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2" /* GXT: Hornet Mono Shades */, 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 190;
			iVar5 = 10;
			break;
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3" /* GXT: Copper Mono Shades */, 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 178;
			iVar5 = 10;
			break;
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4" /* GXT: Blue Mono Shades */, 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5" /* GXT: Sepia Mono Shades */, 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 168;
			iVar5 = 10;
			break;
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6" /* GXT: White Mono Shades */, 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 170;
			iVar5 = 10;
			break;
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7" /* GXT: Orange Tint Mono Shades */, 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 175;
			iVar5 = 10;
			break;
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8" /* GXT: Blue Tint Mono Shades */, 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 170;
			iVar5 = 10;
			break;
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9" /* GXT: Smoke Mono Shades */, 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 178;
			iVar5 = 10;
			break;
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0" /* GXT: Gold Triptych Shades */, 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 140;
			iVar5 = 10;
			break;
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1" /* GXT: Gray Triptych Shades */, 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 145;
			iVar5 = 10;
			break;
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2" /* GXT: Silver Triptych Shades */, 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 150;
			iVar5 = 10;
			break;
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3" /* GXT: Two-Tone Triptych Shades */, 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 165;
			iVar5 = 10;
			break;
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4" /* GXT: Copper Triptych Shades */, 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 168;
			iVar5 = 10;
			break;
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5" /* GXT: Black Triptych Shades */, 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 178;
			iVar5 = 10;
			break;
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6" /* GXT: White Triptych Shades */, 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 160;
			iVar5 = 10;
			break;
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0" /* GXT: Hockey Mask */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0" /* GXT: Gray Flat Cap */, 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar5 = 0;
			break;
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar5 = 0;
			break;
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar5 = 0;
			break;
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar5 = 0;
			break;
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar5 = 0;
			break;
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar5 = 0;
			break;
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar5 = 0;
			break;
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar5 = 0;
			break;
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0" /* GXT: Green Monster Mask */, 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1" /* GXT: Red Monster Mask */, 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0" /* GXT: Pig Mask */, 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1" /* GXT: Dark Pig Mask */, 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0" /* GXT: Silver Skull Mask */, 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1" /* GXT: Bone Skull Mask */, 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0" /* GXT: Space Monkey Mask */, 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0" /* GXT: White Hockey Mask */, 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1" /* GXT: Red Hockey Mask */, 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0" /* GXT: Ape Mask */, 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1" /* GXT: Dark Ape Mask */, 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0" /* GXT: Carnival Orange Mask */, 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1" /* GXT: Carnival White Mask */, 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2" /* GXT: Carnival Blue Mask */, 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0" /* GXT: Toe Shoes Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1" /* GXT: Yeti Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar5 = 0;
			break;
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2" /* GXT: OG Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar5 = 0;
			break;
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3" /* GXT: Magnetics Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar5 = 0;
			break;
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4" /* GXT: LS Red Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar5 = 0;
			break;
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5" /* GXT: Los Santos Charcoal Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar5 = 0;
			break;
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6" /* GXT: Stank Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar5 = 0;
			break;
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7" /* GXT: Los Santos Gray Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar5 = 0;
			break;
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8" /* GXT: Perseus Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar5 = 0;
			break;
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9" /* GXT: Feud Slate Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar5 = 0;
			break;
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10" /* GXT: Feud Black Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar5 = 0;
			break;
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11" /* GXT: LS Black Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar5 = 0;
			break;
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12" /* GXT: LS Corkers Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar5 = 0;
			break;
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13" /* GXT: LS White Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar5 = 0;
			break;
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14" /* GXT: Feud Green Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar5 = 0;
			break;
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15" /* GXT: LS Olive Fitted Cap */, 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar5 = 0;
			break;
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar5 = 0;
			break;
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar5 = 0;
			break;
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar5 = 0;
			break;
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar5 = 0;
			break;
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar5 = 0;
			break;
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0" /* GXT: Toe Shoes Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 30;
			iVar5 = 0;
			break;
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1" /* GXT: Yeti Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			break;
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2" /* GXT: OG Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 32;
			iVar5 = 0;
			break;
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3" /* GXT: Magnetics Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 35;
			iVar5 = 0;
			break;
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4" /* GXT: LS Red Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 38;
			iVar5 = 0;
			break;
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5" /* GXT: Los Santos Charcoal Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 42;
			iVar5 = 0;
			break;
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6" /* GXT: Stank Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 42;
			iVar5 = 0;
			break;
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7" /* GXT: Los Santos Gray Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 40;
			iVar5 = 0;
			break;
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8" /* GXT: Perseus Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 45;
			iVar5 = 0;
			break;
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9" /* GXT: Feud Slate Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 48;
			iVar5 = 0;
			break;
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10" /* GXT: Feud Black Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 25;
			iVar5 = 0;
			break;
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11" /* GXT: LS Black Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 25;
			iVar5 = 0;
			break;
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12" /* GXT: LS Corkers Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 28;
			iVar5 = 0;
			break;
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13" /* GXT: LS White Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 28;
			iVar5 = 0;
			break;
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14" /* GXT: Feud Green Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 30;
			iVar5 = 0;
			break;
		case 79:
			StringCopy(&Var2, "PROPS_P1_H19_15" /* GXT: LS Olive Fitted Cap */, 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 35;
			iVar5 = 0;
			break;
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		default:
			func_102(iVar7, iParam0, 175, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_121(int iParam0)//Position - 0x13F5C
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		default:
			func_102(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_122(int iParam0)//Position - 0x140A4
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0" /* GXT: Blue Shirt, Jeans */, 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2" /* GXT: White Tuxedo */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4" /* GXT: Golf */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7" /* GXT: Scuba Land */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10" /* GXT: Stealth */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11" /* GXT: Triathlon */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12" /* GXT: Fireman */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13" /* GXT: Exterminator */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15" /* GXT: Black Boiler Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16" /* GXT: Skydiving */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17" /* GXT: Tuxedo */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18" /* GXT: Blue Boiler Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19" /* GXT: Navy Boiler Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20" /* GXT: Gray Boiler Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21" /* GXT: Green Boiler Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22" /* GXT: Ash Hoodie, Sweatpants */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23" /* GXT: Yellow Check Shirt, Jeans */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24" /* GXT: Gray Plaid Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25" /* GXT: Black Hoodie, Jeans */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26" /* GXT: Track Jacket, Jeans */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27" /* GXT: Off-White Shirt, Jeans */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28" /* GXT: Gray Plaid 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29" /* GXT: Ash Plaid 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30" /* GXT: Charcoal Plaid 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31" /* GXT: Tan Plaid 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4650;
			break;
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32" /* GXT: Slate 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33" /* GXT: Ash 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34" /* GXT: Stone 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35" /* GXT: Oatmeal 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36" /* GXT: Navy Plaid Piped 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37" /* GXT: Off-White 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38" /* GXT: Red Piped 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39" /* GXT: Gray Piped 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40" /* GXT: Navy 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41" /* GXT: Russet Piped 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42" /* GXT: Green 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43" /* GXT: Beige 3 Piece Suit */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47" /* GXT: Underwear */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48" /* GXT: LS Black Hoodie, Jeans */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49" /* GXT: Gray Hoodie, Jeans */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10" /* GXT: Stealth */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50" /* GXT: Moto X */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51" /* GXT: U.R. Jersey, Fatigues */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52" /* GXT: U.R. OG Tee, Bike Leathers */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53" /* GXT: Uptown Riders Longsleeve, Camos */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54" /* GXT: U.R. Jacket, Baggies */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		default:
			func_102(iVar7, iParam0, 47, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_123(int iParam0)//Position - 0x145AE
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0" /* GXT: Silver Plaid Vest */, 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1" /* GXT: Ash Vest */, 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2" /* GXT: Navy Vest */, 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3" /* GXT: Colorful Plaid Vest */, 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4" /* GXT: Beige Vest */, 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5" /* GXT: Black Vest */, 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6" /* GXT: Gray Plaid Vest */, 16);
			iVar3 = 3;
			iVar4 = 6;
			break;
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7" /* GXT: Jade Plaid Vest */, 16);
			iVar3 = 3;
			iVar4 = 7;
			break;
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8" /* GXT: Beige Plaid Vest */, 16);
			iVar3 = 3;
			iVar4 = 8;
			break;
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9" /* GXT: Brown Plaid Vest */, 16);
			iVar3 = 3;
			iVar4 = 9;
			break;
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10" /* GXT: Brown Vest */, 16);
			iVar3 = 3;
			iVar4 = 10;
			break;
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11" /* GXT: White Plaid Vest */, 16);
			iVar3 = 3;
			iVar4 = 11;
			break;
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12" /* GXT: Pearl Plaid Vest */, 16);
			iVar3 = 3;
			iVar4 = 12;
			break;
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13" /* GXT: Warm Gray Vest */, 16);
			iVar3 = 3;
			iVar4 = 13;
			break;
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14" /* GXT: Topaz Vest */, 16);
			iVar3 = 3;
			iVar4 = 14;
			break;
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15" /* GXT: Plum Vest */, 16);
			iVar3 = 3;
			iVar4 = 15;
			break;
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0" /* GXT: Silver Plaid Vest */, 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1" /* GXT: Ash Vest */, 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2" /* GXT: Navy Vest */, 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3" /* GXT: Colorful Plaid Vest */, 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4" /* GXT: Beige Vest */, 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5" /* GXT: Black Vest */, 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6" /* GXT: Gray Plaid Vest */, 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7" /* GXT: Jade Plaid Vest */, 16);
			iVar3 = 4;
			iVar4 = 7;
			break;
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8" /* GXT: Beige Plaid Vest */, 16);
			iVar3 = 4;
			iVar4 = 8;
			break;
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9" /* GXT: Brown Plaid Vest */, 16);
			iVar3 = 4;
			iVar4 = 9;
			break;
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10" /* GXT: Brown Vest */, 16);
			iVar3 = 4;
			iVar4 = 10;
			break;
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11" /* GXT: White Plaid Vest */, 16);
			iVar3 = 4;
			iVar4 = 11;
			break;
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12" /* GXT: Pearl Plaid Vest */, 16);
			iVar3 = 4;
			iVar4 = 12;
			break;
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13" /* GXT: Warm Gray Vest */, 16);
			iVar3 = 4;
			iVar4 = 13;
			break;
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14" /* GXT: Topaz Vest */, 16);
			iVar3 = 4;
			iVar4 = 14;
			break;
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15" /* GXT: Plum Vest */, 16);
			iVar3 = 4;
			iVar4 = 15;
			break;
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0" /* GXT: White Shirt */, 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0" /* GXT: White Shirt */, 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1" /* GXT: Two-Tone Shirt */, 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0" /* GXT: Charcoal Hoodie */, 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0" /* GXT: White T-Shirt */, 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0" /* GXT: Blue Shirt */, 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0" /* GXT: White T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1" /* GXT: Crevis T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 48;
			break;
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2" /* GXT: Yeti T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 35;
			break;
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3" /* GXT: Sweatbox T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 32;
			break;
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4" /* GXT: Trey Baker T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 35;
			break;
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5" /* GXT: Black T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 48;
			break;
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6" /* GXT: Fruntalot T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 52;
			break;
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7" /* GXT: Kingz of Los Santos T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 38;
			break;
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8" /* GXT: Ten Off The Chain T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 42;
			break;
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9" /* GXT: Gray T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 38;
			break;
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10" /* GXT: Green T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 35;
			break;
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11" /* GXT: Camo T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 48;
			break;
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12" /* GXT: Yeti Rainbow T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 42;
			break;
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13" /* GXT: Feud Banded T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 45;
			break;
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14" /* GXT: Yogarishima T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 45;
			break;
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15" /* GXT: Feud Gray T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 49;
			break;
		default:
			func_102(iVar7, iParam0, 63, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_124(int iParam0)//Position - 0x14C17
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		default:
			func_102(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_125(int iParam0)//Position - 0x14C8A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0" /* GXT: Clean Shave */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0" /* GXT: Full Van Dyke */, 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0" /* GXT: Methodical */, 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0" /* GXT: Full Spartan */, 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0" /* GXT: Stubble */, 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		default:
			func_102(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_126(int iParam0)//Position - 0x14D5A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 6;
			break;
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 7;
			break;
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 8;
			break;
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 9;
			break;
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 10;
			break;
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 11;
			break;
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 12;
			break;
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 13;
			break;
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 14;
			break;
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 15;
			break;
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		default:
			func_102(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_127(int iParam0)//Position - 0x15255
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0" /* GXT: Red Wrestler Mask */, 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 125;
			break;
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1" /* GXT: Green Wrestler Mask */, 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 150;
			break;
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2" /* GXT: Patriot Wrestler Mask */, 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 175;
			break;
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3" /* GXT: Domino Wrestler Mask */, 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 85;
			break;
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4" /* GXT: Gray Wrestler Mask */, 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 150;
			break;
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5" /* GXT: Phoenix Wrestler Mask */, 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 175;
			break;
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		default:
			func_102(iVar7, iParam0, 12, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_128(int iParam0)//Position - 0x153E6
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0" /* GXT: Bandana */, 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0" /* GXT: Silver Tie */, 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 195;
			break;
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1" /* GXT: Gold Tie */, 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 195;
			break;
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2" /* GXT: Cream Tie */, 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 195;
			break;
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3" /* GXT: Blue Diamond Tie */, 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 250;
			break;
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4" /* GXT: Blue Spotted Tie */, 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 250;
			break;
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5" /* GXT: White Spotted Tie */, 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 250;
			break;
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6" /* GXT: Dark Gray Tie */, 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 195;
			break;
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7" /* GXT: Gray Striped Tie */, 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 250;
			break;
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8" /* GXT: Silver Striped Tie */, 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 250;
			break;
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9" /* GXT: Red Striped Tie */, 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 250;
			break;
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10" /* GXT: Bronze Striped Tie */, 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 250;
			break;
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11" /* GXT: White Diamond Tie */, 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 195;
			break;
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12" /* GXT: Black Diamond Tie */, 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 250;
			break;
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0" /* GXT: Purple Tie */, 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1" /* GXT: Cream Tie */, 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2" /* GXT: Beige Tie */, 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3" /* GXT: Ash Tie */, 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4" /* GXT: White Diamond Tie */, 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5" /* GXT: Gray Diamond Tie */, 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6" /* GXT: Beige Striped Tie */, 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7" /* GXT: Red Striped Tie */, 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8" /* GXT: Russet Wool Tie */, 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9" /* GXT: Gray Striped Tie */, 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10" /* GXT: Gray Wool Tie */, 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11" /* GXT: Off-White Tie */, 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12" /* GXT: Blue Diamond Tie */, 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13" /* GXT: Brown Wool Tie */, 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14" /* GXT: Gray Textured Tie */, 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15" /* GXT: Amethyst Tie */, 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0" /* GXT: Purple Tie */, 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1" /* GXT: Cream Tie */, 16);
			iVar3 = 16;
			iVar4 = 1;
			break;
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2" /* GXT: Beige Tie */, 16);
			iVar3 = 16;
			iVar4 = 2;
			break;
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3" /* GXT: Ash Tie */, 16);
			iVar3 = 16;
			iVar4 = 3;
			break;
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4" /* GXT: White Diamond Tie */, 16);
			iVar3 = 16;
			iVar4 = 4;
			break;
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5" /* GXT: Gray Diamond Tie */, 16);
			iVar3 = 16;
			iVar4 = 5;
			break;
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6" /* GXT: Beige Striped Tie */, 16);
			iVar3 = 16;
			iVar4 = 6;
			break;
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7" /* GXT: Red Striped Tie */, 16);
			iVar3 = 16;
			iVar4 = 7;
			break;
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8" /* GXT: Russet Wool Tie */, 16);
			iVar3 = 16;
			iVar4 = 8;
			break;
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9" /* GXT: Gray Striped Tie */, 16);
			iVar3 = 16;
			iVar4 = 9;
			break;
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10" /* GXT: Gray Wool Tie */, 16);
			iVar3 = 16;
			iVar4 = 10;
			break;
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11" /* GXT: Off-White Tie */, 16);
			iVar3 = 16;
			iVar4 = 11;
			break;
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12" /* GXT: Blue Diamond Tie */, 16);
			iVar3 = 16;
			iVar4 = 12;
			break;
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13" /* GXT: Brown Wool Tie */, 16);
			iVar3 = 16;
			iVar4 = 13;
			break;
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14" /* GXT: Gray Textured Tie */, 16);
			iVar3 = 16;
			iVar4 = 14;
			break;
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15" /* GXT: Amethyst Tie */, 16);
			iVar3 = 16;
			iVar4 = 15;
			break;
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0" /* GXT: Purple Tie */, 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1" /* GXT: Cream Tie */, 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2" /* GXT: Beige Tie */, 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3" /* GXT: Ash Tie */, 16);
			iVar3 = 17;
			iVar4 = 3;
			break;
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4" /* GXT: White Diamond Tie */, 16);
			iVar3 = 17;
			iVar4 = 4;
			break;
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5" /* GXT: Gray Diamond Tie */, 16);
			iVar3 = 17;
			iVar4 = 5;
			break;
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6" /* GXT: Beige Striped Tie */, 16);
			iVar3 = 17;
			iVar4 = 6;
			break;
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7" /* GXT: Red Striped Tie */, 16);
			iVar3 = 17;
			iVar4 = 7;
			break;
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8" /* GXT: Russet Wool Tie */, 16);
			iVar3 = 17;
			iVar4 = 8;
			break;
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9" /* GXT: Gray Striped Tie */, 16);
			iVar3 = 17;
			iVar4 = 9;
			break;
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10" /* GXT: Gray Wool Tie */, 16);
			iVar3 = 17;
			iVar4 = 10;
			break;
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11" /* GXT: Off-White Tie */, 16);
			iVar3 = 17;
			iVar4 = 11;
			break;
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12" /* GXT: Blue Diamond Tie */, 16);
			iVar3 = 17;
			iVar4 = 12;
			break;
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13" /* GXT: Brown Wool Tie */, 16);
			iVar3 = 17;
			iVar4 = 13;
			break;
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14" /* GXT: Gray Textured Tie */, 16);
			iVar3 = 17;
			iVar4 = 14;
			break;
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15" /* GXT: Amethyst Tie */, 16);
			iVar3 = 17;
			iVar4 = 15;
			break;
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		default:
			func_102(iVar7, iParam0, 77, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_129(int iParam0)//Position - 0x15BD5
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		default:
			func_102(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_130(int iParam0)//Position - 0x15CDE
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0" /* GXT: White Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1" /* GXT: All White Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 80;
			break;
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2" /* GXT: Charcoal Two-Tone Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 80;
			break;
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3" /* GXT: Yellow Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 89;
			break;
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4" /* GXT: Gray Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 45;
			break;
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5" /* GXT: Black Two-Tone Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 35;
			break;
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6" /* GXT: Gray Two-Tone Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 89;
			break;
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7" /* GXT: Lemon Accent Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 95;
			break;
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8" /* GXT: Two-Tone Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 115;
			break;
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9" /* GXT: Cyan Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10" /* GXT: Cyan Accent Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 145;
			break;
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11" /* GXT: Fluorescent Athletic Shoes */, 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 145;
			break;
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0" /* GXT: Work Boots */, 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0" /* GXT: Desert Round-Toe Boots */, 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1" /* GXT: Coffee Round-Toe Boots */, 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 180;
			break;
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2" /* GXT: Chocolate Round-Toe Boots */, 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 80;
			break;
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3" /* GXT: Gray Round-Toe Boots */, 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 200;
			break;
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4" /* GXT: Slate Round-Toe Boots */, 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 220;
			break;
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5" /* GXT: Copper Round-Toe Boots */, 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 235;
			break;
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0" /* GXT: Gray Snake Shoes */, 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 870;
			break;
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1" /* GXT: Black Shoes */, 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 870;
			break;
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2" /* GXT: White Snake Shoes */, 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 870;
			break;
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3" /* GXT: Gray Crocodile Shoes */, 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 1275;
			break;
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4" /* GXT: Alligator Shoes */, 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 1275;
			break;
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5" /* GXT: Brown Crocodile Shoes */, 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 1275;
			break;
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6" /* GXT: Rattlesnake Shoes */, 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 1275;
			break;
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7" /* GXT: Gray Python Shoes */, 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 1275;
			break;
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8" /* GXT: Two-Tone Crocodile Shoes */, 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 1275;
			break;
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0" /* GXT: Black Brogues */, 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0" /* GXT: Two-Tone Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1" /* GXT: Orange Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 50;
			break;
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2" /* GXT: Black Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 50;
			break;
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3" /* GXT: Desert Green Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 50;
			break;
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4" /* GXT: Mint Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 50;
			break;
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5" /* GXT: Freeway Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 50;
			break;
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6" /* GXT: Animal Fashion Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 50;
			break;
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7" /* GXT: Feud Classic Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 50;
			break;
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8" /* GXT: Cacao Blend Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 50;
			break;
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9" /* GXT: Magnetics Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 50;
			break;
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10" /* GXT: Blue Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 50;
			break;
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11" /* GXT: White Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 50;
			break;
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12" /* GXT: Winter Camo Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 50;
			break;
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13" /* GXT: Forest Camo Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 50;
			break;
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14" /* GXT: Soft Seas Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 50;
			break;
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15" /* GXT: Latte Sneakers */, 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 50;
			break;
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0" /* GXT: White Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1" /* GXT: Green Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 25;
			break;
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2" /* GXT: Two-Tone Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 20;
			break;
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3" /* GXT: Black Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 24;
			break;
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4" /* GXT: Blue Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 25;
			break;
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5" /* GXT: Orange Accent Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 27;
			break;
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6" /* GXT: Red Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 29;
			break;
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7" /* GXT: Orange Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 27;
			break;
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8" /* GXT: Mocha Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 25;
			break;
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9" /* GXT: Black Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 30;
			break;
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10" /* GXT: Fresh Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 28;
			break;
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11" /* GXT: Green Skate Sneakers */, 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 30;
			break;
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0" /* GXT: Black Oxfords */, 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0" /* GXT: Gray Skate Shoes */, 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 155;
			break;
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1" /* GXT: White Skate Shoes */, 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 155;
			break;
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2" /* GXT: Chestnut Skate Shoes */, 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 165;
			break;
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3" /* GXT: Jade Accent Skate Shoes */, 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 170;
			break;
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4" /* GXT: Two-Tone Skate Shoes */, 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 160;
			break;
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5" /* GXT: Red Piped Skate Shoes */, 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 165;
			break;
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6" /* GXT: Red Skate Shoes */, 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 170;
			break;
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7" /* GXT: Beige Skate Shoes */, 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 160;
			break;
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0" /* GXT: Black Leather Loafers */, 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 720;
			break;
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1" /* GXT: Gray Leather Loafers */, 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 680;
			break;
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2" /* GXT: Cream Leather Loafers */, 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 650;
			break;
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3" /* GXT: Brown Leather Loafers */, 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 670;
			break;
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4" /* GXT: White Leather Loafers */, 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 700;
			break;
		case 79:
			StringCopy(&Var2, "FEET_P1_16_5" /* GXT: Russet Leather Loafers */, 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 680;
			break;
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6" /* GXT: White Snakeskin Loafers */, 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 720;
			break;
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7" /* GXT: Rattlesnake Loafers */, 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 740;
			break;
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8" /* GXT: Brown Snakeskin Loafers */, 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 760;
			break;
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9" /* GXT: Zebra Two-Tone Loafers */, 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 780;
			break;
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10" /* GXT: Pale Reptile Loafers */, 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 750;
			break;
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11" /* GXT: Tan Alligator Loafers */, 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 700;
			break;
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0" /* GXT: All Black Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 790;
			break;
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1" /* GXT: Chocolate Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			break;
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2" /* GXT: Chestnut Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 860;
			break;
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3" /* GXT: Tan Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 750;
			break;
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4" /* GXT: White Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 790;
			break;
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5" /* GXT: Ash Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 840;
			break;
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6" /* GXT: Gray Two-Tone Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 820;
			break;
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7" /* GXT: Beige Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 800;
			break;
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8" /* GXT: Topaz Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 850;
			break;
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9" /* GXT: Black Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 870;
			break;
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10" /* GXT: Lime Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 720;
			break;
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11" /* GXT: Hawthorn Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 740;
			break;
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12" /* GXT: Coffee Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 800;
			break;
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13" /* GXT: Gray Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 750;
			break;
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14" /* GXT: Cream Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 770;
			break;
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15" /* GXT: Navy Oxfords */, 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 860;
			break;
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0" /* GXT: Black Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 850;
			break;
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1" /* GXT: Red Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 800;
			break;
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2" /* GXT: Brown Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 780;
			break;
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3" /* GXT: Green Stripe Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 890;
			break;
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4" /* GXT: Green Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 820;
			break;
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5" /* GXT: Copper Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6" /* GXT: Copper Two-Tone Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 870;
			break;
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7" /* GXT: Navy Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 930;
			break;
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8" /* GXT: Blue Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 880;
			break;
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9" /* GXT: Beige Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 900;
			break;
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10" /* GXT: White Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 920;
			break;
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11" /* GXT: Tan Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 970;
			break;
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12" /* GXT: Black Snakeskin Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 990;
			break;
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13" /* GXT: Two-Tone Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 960;
			break;
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14" /* GXT: Brown Snakeskin Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 980;
			break;
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15" /* GXT: Gray Slip-Ons */, 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 950;
			break;
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0" /* GXT: Brown Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 110;
			break;
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1" /* GXT: Navy Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 115;
			break;
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2" /* GXT: Coffee Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 120;
			break;
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3" /* GXT: Burgundy Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 110;
			break;
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4" /* GXT: Blue Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 125;
			break;
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5" /* GXT: Woodland Camo Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 128;
			break;
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6" /* GXT: Black Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 135;
			break;
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7" /* GXT: Tan Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 130;
			break;
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8" /* GXT: Purple Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 145;
			break;
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9" /* GXT: Brown Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 110;
			break;
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10" /* GXT: Chocolate Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 120;
			break;
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11" /* GXT: Green Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 150;
			break;
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12" /* GXT: Ash Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 125;
			break;
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13" /* GXT: Olive Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 120;
			break;
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14" /* GXT: Two-Tone Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 130;
			break;
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15" /* GXT: Yellow Wingtips */, 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 110;
			break;
		default:
			func_102(iVar7, iParam0, 134, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_131(int iParam0)//Position - 0x16C01
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0" /* GXT: Cream Cargo Shorts */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1" /* GXT: Sand Cargo Shorts */, 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 32;
			break;
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2" /* GXT: Navy Cargo Shorts */, 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 38;
			break;
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3" /* GXT: Olive Cargo Shorts */, 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 44;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0" /* GXT: Black Tuxedo Pants */, 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0" /* GXT: Gray Golf Pants */, 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1" /* GXT: Cream Golf Pants */, 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 690;
			break;
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2" /* GXT: Tan Plaid Golf Pants */, 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 720;
			break;
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3" /* GXT: Tartan Golf Pants */, 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 850;
			break;
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4" /* GXT: Charcoal Plaid Golf Pants */, 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 850;
			break;
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5" /* GXT: Dark Plaid Golf Pants */, 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 740;
			break;
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6" /* GXT: Brown Plaid Golf Pants */, 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 750;
			break;
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7" /* GXT: Slate Golf Pants */, 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 790;
			break;
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0" /* GXT: Slate Baggy Jeans */, 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1" /* GXT: Blue Baggy Jeans */, 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 145;
			break;
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2" /* GXT: Gray Baggy Jeans */, 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 140;
			break;
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3" /* GXT: Pale Blue Baggy Jeans */, 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 148;
			break;
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4" /* GXT: Black Baggy Jeans */, 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5" /* GXT: Blue-Green Baggy Jeans */, 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 154;
			break;
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6" /* GXT: Faded Baggy Jeans */, 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 158;
			break;
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0" /* GXT: Beige Chinos */, 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 820;
			break;
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1" /* GXT: Olive Chinos */, 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 820;
			break;
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2" /* GXT: Black Chinos */, 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 850;
			break;
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3" /* GXT: Off-White Chinos */, 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4" /* GXT: Gray Chinos */, 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 920;
			break;
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5" /* GXT: Navy Chinos */, 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 950;
			break;
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0" /* GXT: Silver Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1" /* GXT: Gray Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 45;
			break;
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2" /* GXT: Topaz Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 48;
			break;
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3" /* GXT: Ash Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 45;
			break;
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4" /* GXT: Slate Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 48;
			break;
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5" /* GXT: Olive Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 52;
			break;
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6" /* GXT: Jade Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 55;
			break;
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7" /* GXT: Dark Green Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 58;
			break;
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8" /* GXT: Teal Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 60;
			break;
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9" /* GXT: Brown Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 58;
			break;
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10" /* GXT: Kingz Green Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 62;
			break;
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11" /* GXT: Gray Stripe Sweatpants */, 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 65;
			break;
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0" /* GXT: White Shorts */, 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0" /* GXT: Gray Plaid Pants */, 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1" /* GXT: Silver Plaid Pants */, 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2" /* GXT: Charcoal Plaid Pants */, 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3" /* GXT: Tan Plaid Pants */, 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4" /* GXT: Charcoal Pants */, 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5" /* GXT: Ash Pants */, 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6" /* GXT: Beige Pants */, 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7" /* GXT: Cream Pants */, 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8" /* GXT: Navy Plaid Pants */, 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9" /* GXT: Off-White Pants */, 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10" /* GXT: White Pants */, 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11" /* GXT: Subtle Blue Pants */, 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12" /* GXT: Navy Pants */, 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13" /* GXT: Rust Pants */, 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14" /* GXT: Green Pants */, 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15" /* GXT: Tan Pants */, 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0" /* GXT: Combat Pants */, 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0" /* GXT: White Boxers */, 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1" /* GXT: Gray Boxers */, 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 160;
			break;
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2" /* GXT: Black Boxers */, 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 180;
			break;
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3" /* GXT: Kings Ash Boxers */, 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 180;
			break;
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4" /* GXT: Feud Green Boxers */, 16);
			iVar3 = 18;
			iVar4 = 4;
			break;
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5" /* GXT: Feud White Boxers */, 16);
			iVar3 = 18;
			iVar4 = 5;
			break;
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0" /* GXT: Black Tuxedo Pants */, 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 79:
			StringCopy(&Var2, "LEGS_P1_20_0" /* GXT: Indigo Jeans */, 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 118;
			break;
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1" /* GXT: Black Jeans */, 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 120;
			break;
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2" /* GXT: Gray Faded Jeans */, 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 128;
			break;
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3" /* GXT: Navy Jeans */, 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 128;
			break;
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4" /* GXT: Brown Jeans */, 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 130;
			break;
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5" /* GXT: Blue Jeans */, 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 145;
			break;
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6" /* GXT: Olive Jeans */, 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 138;
			break;
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7" /* GXT: Black Faded Jeans */, 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 132;
			break;
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8" /* GXT: Coffee Jeans */, 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 148;
			break;
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0" /* GXT: Indigo Skinny Jeans */, 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 118;
			break;
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1" /* GXT: Black Skinny Jeans */, 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 118;
			break;
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2" /* GXT: Aqua Skinny Jeans */, 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 118;
			break;
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3" /* GXT: Brown Skinny Jeans */, 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 129;
			break;
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4" /* GXT: Blue Skinny Jeans */, 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 135;
			break;
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5" /* GXT: Red Skinny Jeans */, 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 135;
			break;
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6" /* GXT: Gray Skinny Jeans */, 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 118;
			break;
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7" /* GXT: Green Skinny Jeans */, 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 118;
			break;
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8" /* GXT: Coffee Skinny Jeans */, 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 118;
			break;
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0" /* GXT: LS Panic Charcoal Shorts */, 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 55;
			break;
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1" /* GXT: LS Panic Yellow Shorts */, 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 55;
			break;
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2" /* GXT: Prolaps White Shorts */, 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 59;
			break;
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3" /* GXT: Prolaps Blue Shorts */, 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 59;
			break;
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4" /* GXT: LC Salamanders Red Shorts */, 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 65;
			break;
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5" /* GXT: LC Salamanders Green Shorts */, 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 65;
			break;
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6" /* GXT: LS Shrimps Gray Shorts */, 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 69;
			break;
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7" /* GXT: LS Shrimps White Shorts */, 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 69;
			break;
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8" /* GXT: LOB Gray Shorts */, 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 75;
			break;
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9" /* GXT: LOB Blue Shorts */, 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 75;
			break;
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10" /* GXT: LOB Green Shorts */, 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 65;
			break;
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11" /* GXT: LOB Tan Shorts */, 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 65;
			break;
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12" /* GXT: LOB Orange Shorts */, 16);
			iVar3 = 22;
			iVar4 = 12;
			iVar1 = 65;
			break;
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13" /* GXT: LOB Pale Blue Shorts */, 16);
			iVar3 = 22;
			iVar4 = 13;
			iVar1 = 65;
			break;
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0" /* GXT: Broker White Shorts */, 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 38;
			break;
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1" /* GXT: Broker Black Shorts */, 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 38;
			break;
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2" /* GXT: Broker Gray Shorts */, 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 28;
			break;
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3" /* GXT: Broker Navy Shorts */, 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 34;
			break;
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4" /* GXT: Broker Green Shorts */, 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 36;
			break;
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5" /* GXT: Broker Brown Shorts */, 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 32;
			break;
		default:
			func_102(iVar7, iParam0, 117, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_133(int iParam0)//Position - 0x178F4
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0" /* GXT: Gray Plaid Jacket */, 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar6 = 3;
			break;
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1" /* GXT: Ash Plaid Jacket */, 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar6 = 3;
			break;
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2" /* GXT: Charcoal Plaid Jacket */, 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar6 = 3;
			break;
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3" /* GXT: Tan Plaid Jacket */, 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar6 = 3;
			break;
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4" /* GXT: Slate Jacket */, 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar6 = 3;
			break;
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5" /* GXT: Silver Jacket */, 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar6 = 3;
			break;
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6" /* GXT: Stone Jacket */, 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar6 = 3;
			break;
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7" /* GXT: Cream Jacket */, 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar6 = 3;
			break;
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8" /* GXT: Navy Plaid Piped Jacket */, 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar6 = 3;
			break;
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9" /* GXT: Off-White Jacket */, 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar6 = 3;
			break;
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10" /* GXT: Red Piped Jacket */, 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar6 = 3;
			break;
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11" /* GXT: Gray Piped Jacket */, 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar6 = 3;
			break;
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12" /* GXT: Navy Jacket */, 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar6 = 3;
			break;
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13" /* GXT: Russet Piped Jacket */, 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar6 = 3;
			break;
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14" /* GXT: Green Jacket */, 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar6 = 3;
			break;
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15" /* GXT: Beige Jacket */, 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar6 = 3;
			break;
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0" /* GXT: Navy Plaid Vest */, 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1" /* GXT: Gray Plaid Vest */, 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2" /* GXT: Silver Plaid Vest */, 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3" /* GXT: Charcoal Vest */, 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4" /* GXT: Plum Plaid Vest */, 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5" /* GXT: All Ash Vest */, 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6" /* GXT: Silverback Vest */, 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7" /* GXT: Gray Subtle Plaid Vest */, 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8" /* GXT: Green Plaid Vest */, 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9" /* GXT: Ash Plaid Vest */, 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10" /* GXT: Stone Plaid Vest */, 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11" /* GXT: Charcoal Plaid Vest */, 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12" /* GXT: White Vest */, 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13" /* GXT: Gray Vest */, 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14" /* GXT: Silver Light Plaid Vest */, 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15" /* GXT: All Silver Vest */, 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0" /* GXT: Gray Tuxedo Jacket */, 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar6 = 1;
			break;
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0" /* GXT: Brown Shooting Vest */, 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 150;
			break;
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1" /* GXT: Woodland Shooting Vest */, 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 160;
			break;
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2" /* GXT: Taupe Shooting Vest */, 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 150;
			break;
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3" /* GXT: Brown Woven Shooting Vest */, 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 150;
			break;
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4" /* GXT: Field Shooting Vest */, 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 160;
			break;
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5" /* GXT: Forest Shooting Vest */, 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 160;
			break;
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0" /* GXT: Silver Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 88;
			break;
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1" /* GXT: Ammu-Nation Camo Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 60;
			break;
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2" /* GXT: LSGC Gray Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 70;
			break;
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3" /* GXT: LSGC Urban Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 80;
			break;
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4" /* GXT: LSGC Forest Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 90;
			break;
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5" /* GXT: Ammu-Nation A Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 80;
			break;
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6" /* GXT: Blauser Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 70;
			break;
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7" /* GXT: Penetrators Orange Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 95;
			break;
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8" /* GXT: Crevis Fluorescent Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 105;
			break;
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9" /* GXT: Blue Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 95;
			break;
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10" /* GXT: Green Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 110;
			break;
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11" /* GXT: LS Jardineros Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 98;
			break;
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12" /* GXT: Ash 18 Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 88;
			break;
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13" /* GXT: Red Mist XI Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 98;
			break;
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14" /* GXT: Eris Charcoal Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 110;
			break;
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15" /* GXT: OG Hoodie */, 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 98;
			break;
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0" /* GXT: White V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 250;
			break;
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1" /* GXT: Ash V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 270;
			break;
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2" /* GXT: Black V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 280;
			break;
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3" /* GXT: Brown V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 275;
			break;
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4" /* GXT: Olive V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 290;
			break;
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5" /* GXT: Corkers V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 35;
			break;
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6" /* GXT: Feud V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 35;
			break;
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7" /* GXT: Magnetics V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 35;
			break;
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8" /* GXT: Mint V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 295;
			break;
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9" /* GXT: Harsh Souls V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 35;
			break;
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10" /* GXT: Trey Baker V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 10;
			iVar1 = 35;
			break;
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11" /* GXT: Fuque V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 11;
			iVar1 = 35;
			break;
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12" /* GXT: Fellowship V Neck T-Shirt */, 16);
			iVar3 = 29;
			iVar4 = 12;
			break;
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0" /* GXT: Green Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 1750;
			break;
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1" /* GXT: Gray Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 1920;
			break;
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2" /* GXT: Slate Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 1890;
			break;
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3" /* GXT: Blue Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4" /* GXT: Red Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 1750;
			break;
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5" /* GXT: Charcoal Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 1990;
			break;
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6" /* GXT: White Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 1820;
			break;
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7" /* GXT: Silver Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 1990;
			break;
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8" /* GXT: Pale Blue Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 8;
			iVar1 = 1920;
			break;
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9" /* GXT: Aqua Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 9;
			iVar1 = 1850;
			break;
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10" /* GXT: Gray Two-Tone Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 10;
			iVar1 = 1990;
			break;
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11" /* GXT: Pink Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 11;
			iVar1 = 1790;
			break;
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12" /* GXT: Yellow Cardigan */, 16);
			iVar3 = 30;
			iVar4 = 12;
			iVar1 = 1790;
			break;
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0" /* GXT: LS Panic Gray Jersey */, 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 69;
			break;
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1" /* GXT: LS Panic Yellow Jersey */, 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 75;
			break;
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2" /* GXT: Penetrators White Jersey */, 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 75;
			break;
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3" /* GXT: Penetrators Blue Jersey */, 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 79;
			break;
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4" /* GXT: LC Salamanders Red Jersey */, 16);
			iVar3 = 31;
			iVar4 = 4;
			iVar1 = 79;
			break;
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5" /* GXT: LC Salamanders Green Jersey */, 16);
			iVar3 = 31;
			iVar4 = 5;
			iVar1 = 89;
			break;
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6" /* GXT: LS Shrimps Gray Jersey */, 16);
			iVar3 = 31;
			iVar4 = 6;
			iVar1 = 85;
			break;
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7" /* GXT: LS Shrimps White Jersey */, 16);
			iVar3 = 31;
			iVar4 = 7;
			iVar1 = 85;
			break;
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8" /* GXT: Uptown Riders Jersey */, 16);
			iVar3 = 31;
			iVar4 = 8;
			break;
		default:
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_135(int iParam0)//Position - 0x19188
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0" /* GXT: White Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1" /* GXT: Black Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2" /* GXT: Gray Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 180;
			break;
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3" /* GXT: Feud Green Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 22;
			break;
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4" /* GXT: Fruntalot Jade Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 20;
			break;
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5" /* GXT: Fruntalot Brown Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 18;
			break;
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6" /* GXT: Broker Blue Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 19;
			break;
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7" /* GXT: Kingz Green Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8" /* GXT: Broker Gray Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9" /* GXT: Harsh Souls Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 19;
			break;
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10" /* GXT: Sweatbox Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 19;
			break;
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11" /* GXT: White Ringer Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 18;
			break;
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12" /* GXT: Rearwall Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 20;
			break;
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13" /* GXT: Feud 3 Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 22;
			break;
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14" /* GXT: Kingz Charcoal Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 19;
			break;
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15" /* GXT: Feud White Tank Top */, 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 22;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			iVar6 = 4;
			break;
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			iVar6 = 4;
			break;
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			iVar6 = 4;
			break;
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			iVar6 = 4;
			break;
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			iVar6 = 4;
			break;
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0" /* GXT: White Tuxedo Jacket */, 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0" /* GXT: White OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 20;
			iVar6 = 2;
			break;
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1" /* GXT: Black OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 22;
			iVar6 = 2;
			break;
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2" /* GXT: Ash OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 20;
			iVar6 = 2;
			break;
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3" /* GXT: LC Swingers OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 25;
			iVar6 = 2;
			break;
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4" /* GXT: Corkers Red OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 23;
			iVar6 = 2;
			break;
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5" /* GXT: Corkers Green OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 25;
			iVar6 = 2;
			break;
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6" /* GXT: Uptown Riders OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 28;
			iVar6 = 2;
			break;
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7" /* GXT: Feud White OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 26;
			iVar6 = 2;
			break;
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8" /* GXT: Salamanders OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 24;
			iVar6 = 2;
			break;
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9" /* GXT: LC Rampage OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 27;
			iVar6 = 2;
			break;
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10" /* GXT: Dust Devils OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 29;
			iVar6 = 2;
			break;
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11" /* GXT: LS Gray OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 28;
			iVar6 = 2;
			break;
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12" /* GXT: Los Santos Black OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 25;
			iVar6 = 2;
			break;
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13" /* GXT: Los Santos White OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 22;
			iVar6 = 2;
			break;
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14" /* GXT: Pounders OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 27;
			iVar6 = 2;
			break;
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15" /* GXT: Feud Black OG T-Shirt */, 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 29;
			iVar6 = 2;
			break;
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0" /* GXT: Pine Striped Sweater */, 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar6 = 3;
			break;
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1" /* GXT: Yellow Sweater */, 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2" /* GXT: Blue Sweater */, 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3" /* GXT: Sand Striped Sweater */, 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4" /* GXT: Silver Sweater */, 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5" /* GXT: Gray Sweater */, 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6" /* GXT: Navy Argyle Sweater */, 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7" /* GXT: Sand Sweater */, 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8" /* GXT: Salmon Pink Sweater */, 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9" /* GXT: Turquoise Sweater */, 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10" /* GXT: Green Sweater */, 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11" /* GXT: Amethyst Sweater */, 16);
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12" /* GXT: Yellow Argyle Sweater */, 16);
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13" /* GXT: Gray Two-Tone Sweater */, 16);
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14" /* GXT: Sand Argyle Sweater */, 16);
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15" /* GXT: Charcoal Sweater */, 16);
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0" /* GXT: Ash Shirt */, 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 98;
			break;
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1" /* GXT: Gray Shirt */, 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 98;
			break;
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2" /* GXT: Black Shirt */, 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 110;
			break;
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3" /* GXT: Silver Shirt */, 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 110;
			break;
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4" /* GXT: White Shirt */, 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 118;
			break;
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5" /* GXT: Olive Shirt */, 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 120;
			break;
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6" /* GXT: Navy Shirt */, 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 120;
			break;
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7" /* GXT: Red Shirt */, 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 129;
			break;
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8" /* GXT: Tan Check Shirt */, 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 125;
			break;
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9" /* GXT: Beige Gingham Shirt */, 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 125;
			break;
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10" /* GXT: Gray Gingham Shirt */, 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 129;
			break;
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11" /* GXT: Gray Check Shirt */, 16);
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 129;
			break;
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12" /* GXT: Blue Shirt */, 16);
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 135;
			break;
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13" /* GXT: Off-White Shirt */, 16);
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 139;
			break;
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14" /* GXT: Pastel Check Shirt */, 16);
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 145;
			break;
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15" /* GXT: Fruity Check Shirt */, 16);
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 145;
			break;
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0" /* GXT: Blue Shirt */, 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1" /* GXT: Yellow Check Shirt */, 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2" /* GXT: Off-White Striped Shirt */, 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3" /* GXT: Off-White Shirt */, 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4" /* GXT: Red Check Shirt */, 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 30;
			break;
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5" /* GXT: Charcoal Shirt */, 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 38;
			break;
		case 79:
			StringCopy(&Var2, "TORSO_P1_8_6" /* GXT: Blue Check Shirt */, 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 32;
			break;
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7" /* GXT: Gingham Shirt */, 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 30;
			break;
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8" /* GXT: Aqua Check Shirt */, 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 33;
			break;
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9" /* GXT: Orange Shirt */, 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 35;
			break;
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10" /* GXT: Mint Check Shirt */, 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 35;
			break;
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11" /* GXT: Dark Gray Check Shirt */, 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 38;
			break;
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12" /* GXT: Purple Check Shirt */, 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 33;
			break;
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13" /* GXT: Olive Shirt */, 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 35;
			break;
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14" /* GXT: Cream Shirt */, 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 38;
			break;
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15" /* GXT: Fruity Check Shirt */, 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 32;
			break;
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0" /* GXT: White Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1" /* GXT: Gray Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 59;
			break;
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2" /* GXT: Black Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3" /* GXT: Ten Off Yellow Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 25;
			break;
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4" /* GXT: Kingz Of Los Santos Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 29;
			break;
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5" /* GXT: Yeti Rainbow Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 27;
			break;
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6" /* GXT: Ten Off Red Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 25;
			break;
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7" /* GXT: Trey Baker Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 27;
			break;
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8" /* GXT: Stank Striped Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 28;
			break;
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9" /* GXT: Feud Olive Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 30;
			break;
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10" /* GXT: Yeti Gray Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 29;
			break;
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11" /* GXT: Yogarishima Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 27;
			break;
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12" /* GXT: Yeti Camo Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 29;
			break;
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13" /* GXT: Crevis White Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 32;
			break;
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14" /* GXT: Yeti Blue Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 30;
			break;
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15" /* GXT: Uptown Ryders Longsleeve */, 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 28;
			break;
		default:
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_136(int iParam0)//Position - 0x19DC7
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0" /* GXT: Fade */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1" /* GXT: Triple Rails */, 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2" /* GXT: Side Shaded */, 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3" /* GXT: Wavy Siderows */, 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar6 = 3;
			break;
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4" /* GXT: Snakes */, 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar6 = 3;
			break;
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5" /* GXT: Tramlines */, 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar6 = 3;
			break;
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6" /* GXT: The King Fresh */, 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar6 = 3;
			break;
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7" /* GXT: Star Kutz */, 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar6 = 3;
			break;
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8" /* GXT: Tigerized */, 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar6 = 3;
			break;
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9" /* GXT: Abstraction */, 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar6 = 3;
			break;
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10" /* GXT: Shutters */, 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar6 = 3;
			break;
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11" /* GXT: Berms */, 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar6 = 3;
			break;
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12" /* GXT: Mellowplex */, 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar6 = 3;
			break;
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13" /* GXT: The Feud */, 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14" /* GXT: Business on Top */, 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar6 = 3;
			break;
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15" /* GXT: Wild Palm */, 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar6 = 3;
			break;
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0" /* GXT: Lo Fro */, 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar6 = 3;
			break;
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0" /* GXT: Blowout */, 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar6 = 3;
			break;
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0" /* GXT: Cornrows */, 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar6 = 3;
			break;
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0" /* GXT: Shape-up */, 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		default:
			func_102(iVar7, iParam0, 21, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_137(int iParam0)//Position - 0x1A03F
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_78130[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		default:
			func_102(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_138(int iParam0, int iParam1)//Position - 0x1A17B
{
	switch (iParam0)
	{
		case 0:
			func_155(iParam1);
			break;
		case 2:
			func_154(iParam1);
			break;
		case 3:
			func_151(iParam1);
			break;
		case 4:
			func_150(iParam1);
			break;
		case 6:
			func_149(iParam1);
			break;
		case 5:
			func_148(iParam1);
			break;
		case 8:
			func_147(iParam1);
			break;
		case 9:
			__LIB_2__.func_328(iParam1);
			break;
		case 10:
			func_145(iParam1);
			break;
		case 1:
			__LIB_18__.func_205(iParam1);
			break;
		case 7:
			func_143(iParam1);
			break;
		case 11:
			func_142(iParam1);
			break;
		case 12:
			__LIB_6__.func_758(iParam1);
			break;
		case 13:
			func_140(iParam1);
			break;
		case 14:
			func_139(iParam1);
			break;
	}
}

void func_139(int iParam0)//Position - 0x1A26B
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1" /* GXT: Blue Baseball Cap */, 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2" /* GXT: White Hockey Mask */, 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 11;
			break;
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12" /* GXT: Black Knitted Hat */, 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0" /* GXT: Green Monster Mask */, 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1" /* GXT: Red Monster Mask */, 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0" /* GXT: Pig Mask */, 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1" /* GXT: Dark Pig Mask */, 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0" /* GXT: Silver Skull Mask */, 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1" /* GXT: Bone Skull Mask */, 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0" /* GXT: Space Monkey Mask */, 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0" /* GXT: White Hockey Mask */, 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1" /* GXT: Red Hockey Mask */, 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0" /* GXT: Ape Mask */, 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1" /* GXT: Dark Ape Mask */, 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0" /* GXT: Carnival Orange Mask */, 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1" /* GXT: Carnival White Mask */, 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2" /* GXT: Carnival Blue Mask */, 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar5 = 0;
			break;
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0" /* GXT: Black-Rimmed Glasses */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3" /* GXT: Copper Sports Shades */, 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4" /* GXT: Enema Brown Glasses */, 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 58;
			iVar5 = 10;
			break;
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1" /* GXT: Enema Gray Glasses */, 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 56;
			iVar5 = 10;
			break;
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2" /* GXT: Enema Black Glasses */, 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 60;
			iVar5 = 10;
			break;
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3" /* GXT: Enema Tortoiseshell Glasses */, 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 65;
			iVar5 = 10;
			break;
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4" /* GXT: Enema Coffee Glasses */, 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 62;
			iVar5 = 10;
			break;
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5" /* GXT: Enema Walnut Glasses */, 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 10;
			break;
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6" /* GXT: Enema Silver Accent Glasses */, 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 68;
			iVar5 = 10;
			break;
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7" /* GXT: Enema Smoke Glasses */, 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5" /* GXT: Farshtunken Gold Aviators */, 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 10;
			break;
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1" /* GXT: Farshtunken Purple Aviators */, 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2" /* GXT: Farshtunken Silver Aviators */, 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 72;
			iVar5 = 10;
			break;
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3" /* GXT: Farshtunken Gray Aviators */, 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 70;
			iVar5 = 10;
			break;
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4" /* GXT: Farshtunken Blue Aviators */, 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 74;
			iVar5 = 10;
			break;
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5" /* GXT: Farshtunken Tinted Aviators */, 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 78;
			iVar5 = 10;
			break;
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6" /* GXT: Farshtunken Steel Aviators */, 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 82;
			iVar5 = 10;
			break;
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7" /* GXT: Farshtunken Sepia Aviators */, 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 85;
			iVar5 = 10;
			break;
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8" /* GXT: Farshtunken Black Aviators */, 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 85;
			iVar5 = 10;
			break;
		case 79:
			StringCopy(&Var2, "PROPS_P0_E5_9" /* GXT: Farshtunken Smoke Aviators */, 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar5 = 10;
			break;
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6" /* GXT: Tung Charcoal Shades */, 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 69;
			iVar5 = 10;
			break;
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1" /* GXT: Tung Ash Shades */, 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2" /* GXT: Tung Gray Shades */, 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 69;
			iVar5 = 10;
			break;
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3" /* GXT: Tung Red Shades */, 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 69;
			iVar5 = 10;
			break;
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4" /* GXT: Tung Blue Shades */, 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 69;
			iVar5 = 10;
			break;
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5" /* GXT: Tung Yellow Shades */, 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 69;
			iVar5 = 10;
			break;
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6" /* GXT: Tung Black Shades */, 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 69;
			iVar5 = 10;
			break;
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7" /* GXT: Tung Rosy Shades */, 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 69;
			iVar5 = 10;
			break;
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8" /* GXT: Tung Hornet Shades */, 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 69;
			iVar5 = 10;
			break;
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9" /* GXT: Tung Two-Tone Shades */, 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 69;
			iVar5 = 10;
			break;
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7" /* GXT: Swimming Goggles */, 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 10;
			break;
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8" /* GXT: Rimmers Azure Aviators */, 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 170;
			iVar5 = 10;
			break;
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1" /* GXT: Rimmers Smoke Aviators */, 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 175;
			iVar5 = 10;
			break;
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2" /* GXT: Rimmers Yellow Aviators */, 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 180;
			iVar5 = 10;
			break;
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3" /* GXT: Rimmers Topaz Aviators */, 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 185;
			iVar5 = 10;
			break;
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4" /* GXT: Rimmers Tinted Aviators */, 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 189;
			iVar5 = 10;
			break;
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5" /* GXT: Rimmers Steel Aviators */, 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 195;
			iVar5 = 10;
			break;
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6" /* GXT: Rimmers Indigo Aviators */, 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 235;
			iVar5 = 10;
			break;
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7" /* GXT: Rimmers Chocolate Aviators */, 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 245;
			iVar5 = 10;
			break;
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8" /* GXT: Rimmers Sepia Aviators */, 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 250;
			iVar5 = 10;
			break;
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9" /* GXT: Rimmers Slate Aviators */, 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 275;
			iVar5 = 10;
			break;
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10" /* GXT: Rimmers Gold Aviators */, 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 280;
			iVar5 = 10;
			break;
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11" /* GXT: Rimmers Blue Aviators */, 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 295;
			iVar5 = 10;
			break;
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9" /* GXT: Hawaiian Snow Black Shades */, 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 179;
			iVar5 = 10;
			break;
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1" /* GXT: Hawaiian Snow Charcoal Shades */, 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 159;
			iVar5 = 10;
			break;
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2" /* GXT: Hawaiian Snow Ash Shades */, 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 165;
			iVar5 = 10;
			break;
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3" /* GXT: Hawaiian Snow Gray Shades */, 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 155;
			iVar5 = 10;
			break;
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4" /* GXT: Hawaiian Snow Tan Shades */, 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5" /* GXT: Hawaiian Snow Tortoiseshell Shades */, 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6" /* GXT: Hawaiian Snow Walnut Shades */, 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7" /* GXT: Hawaiian Snow Marbled Shades */, 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 225;
			iVar5 = 10;
			break;
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		default:
			func_102(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_140(int iParam0)//Position - 0x1AFC9
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		default:
			func_102(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_142(int iParam0)//Position - 0x1B6A9
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0" /* GXT: Ash T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1" /* GXT: White T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2" /* GXT: Gray T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3" /* GXT: Charcoal T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4" /* GXT: Green T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 4;
			break;
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5" /* GXT: Blue T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 5;
			break;
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0" /* GXT: Charcoal Henley */, 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 390;
			break;
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1" /* GXT: Gray Henley */, 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 390;
			break;
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2" /* GXT: Black Henley */, 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 420;
			break;
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3" /* GXT: Beige Henley */, 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 420;
			break;
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4" /* GXT: Brown Henley */, 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 490;
			break;
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5" /* GXT: Navy Henley */, 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 490;
			break;
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6" /* GXT: Navy Striped Henley */, 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 540;
			break;
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7" /* GXT: Gray Striped Henley */, 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 540;
			break;
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8" /* GXT: Gray Wool Henley */, 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 550;
			break;
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9" /* GXT: Charcoal Striped Henley */, 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 540;
			break;
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0" /* GXT: Charcoal V Neck */, 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 850;
			break;
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1" /* GXT: Beige V Neck */, 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 850;
			break;
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2" /* GXT: Black V Neck */, 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 890;
			break;
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3" /* GXT: Olive V Neck */, 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 890;
			break;
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4" /* GXT: Gray V Neck */, 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 920;
			break;
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5" /* GXT: Brown V Neck */, 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 920;
			break;
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6" /* GXT: Black Striped V Neck */, 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 950;
			break;
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7" /* GXT: Gray Diamond V Neck */, 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 980;
			break;
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8" /* GXT: Brown Striped V Neck */, 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 1050;
			break;
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9" /* GXT: Silver Diamond V Neck */, 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 1100;
			break;
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0" /* GXT: Black Vest, White Shirt */, 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1890;
			break;
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1" /* GXT: Black Vest, Black Shirt */, 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1820;
			break;
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2" /* GXT: Black Vest, Gray Shirt */, 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 1820;
			break;
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3" /* GXT: Black Vest, Blue Shirt */, 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4" /* GXT: Black Vest, Pink Shirt */, 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 1850;
			break;
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5" /* GXT: Ash Vest, White Shirt */, 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 1900;
			break;
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6" /* GXT: Ash Vest, Black Shirt */, 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 1920;
			break;
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7" /* GXT: Ash Vest, Gray Shirt */, 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 1980;
			break;
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8" /* GXT: Ash Vest, Blue Shirt */, 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 2100;
			break;
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9" /* GXT: Ash Vest, Pink Shirt */, 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 2120;
			break;
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10" /* GXT: Blue Vest, White Shirt */, 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 2000;
			break;
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11" /* GXT: Blue Vest, Black Shirt */, 16);
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 2200;
			break;
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12" /* GXT: Blue Vest, Gray Shirt */, 16);
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 2280;
			break;
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13" /* GXT: Blue Vest, Blue Shirt */, 16);
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 2300;
			break;
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14" /* GXT: Blue Vest, Pink Shirt */, 16);
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 2350;
			break;
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15" /* GXT: Stone Vest, White Shirt */, 16);
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 2280;
			break;
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0" /* GXT: Bare Chest */, 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		default:
			func_102(iVar7, iParam0, 45, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_143(int iParam0)//Position - 0x1BBD1
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		default:
			func_102(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_145(int iParam0)//Position - 0x1BD14
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			break;
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			break;
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			break;
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			break;
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 2;
			break;
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 3;
			break;
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 4;
			break;
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 5;
			break;
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 6;
			break;
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 7;
			break;
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8" /* GXT: Del Perro Pier T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 8;
			break;
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9" /* GXT: Los Santos T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 9;
			break;
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10" /* GXT: Sharkies Bites T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 10;
			break;
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11" /* GXT: Muscle Peach T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 11;
			break;
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12" /* GXT: Coral Reefers T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 12;
			break;
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13" /* GXT: SmokeBomb T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 13;
			break;
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14" /* GXT: The Big Puffa T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 14;
			break;
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15" /* GXT: Lob-Star T-Shirt */, 16);
			iVar3 = 10;
			iVar4 = 15;
			break;
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			break;
		default:
			func_102(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_147(int iParam0)//Position - 0x1C421
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&Var2, "SPEC_P0_10" /* GXT: Watch and Bracelet */, 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&Var2, "SPEC_P0_16" /* GXT: Leather Watch */, 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			bVar0 = true;
			break;
		default:
			func_102(iVar7, iParam0, 24, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_148(int iParam0)//Position - 0x1C6E1
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		default:
			func_102(iVar7, iParam0, 14, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_149(int iParam0)//Position - 0x1C89C
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0" /* GXT: Black Leather Shoes */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1" /* GXT: Brown Leather Shoes */, 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 665;
			break;
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2" /* GXT: Charcoal Leather Shoes */, 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 620;
			break;
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3" /* GXT: Gray Leather Shoes */, 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 540;
			break;
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4" /* GXT: Sand Leather Shoes */, 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 580;
			break;
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5" /* GXT: Blue Suede Shoes */, 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 650;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0" /* GXT: Dress Loafers */, 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0" /* GXT: Ash Skate Shoes */, 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1" /* GXT: Black Skate Shoes */, 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 64;
			break;
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2" /* GXT: White Skate Shoes */, 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 56;
			break;
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3" /* GXT: Red Skate Shoes */, 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 69;
			break;
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4" /* GXT: Plaid Skate Shoes */, 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 59;
			break;
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5" /* GXT: Striped Skate Shoes */, 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 62;
			break;
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6" /* GXT: Coffee Skate Shoes */, 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 74;
			break;
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7" /* GXT: Camo Skate Shoes */, 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 68;
			break;
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8" /* GXT: Tropical Skate Shoes */, 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 72;
			break;
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9" /* GXT: Green Skate Shoes */, 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 70;
			break;
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0" /* GXT: Chocolate Boat Shoes */, 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 48;
			break;
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1" /* GXT: Teal Boat Shoes */, 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2" /* GXT: Black Boat Shoes */, 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 55;
			break;
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3" /* GXT: Chestnut Boat Shoes */, 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 75;
			break;
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4" /* GXT: Tan Boat Shoes */, 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 65;
			break;
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5" /* GXT: Gray Boat Shoes */, 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 68;
			break;
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6" /* GXT: Red Boat Shoes */, 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7" /* GXT: Slate Boat Shoes */, 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 68;
			break;
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0" /* GXT: All Black Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1" /* GXT: Chocolate Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2" /* GXT: Chestnut Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3" /* GXT: Tan Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4" /* GXT: White Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5" /* GXT: Ash Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6" /* GXT: Gray Two-Tone Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7" /* GXT: Beige Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8" /* GXT: Topaz Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9" /* GXT: Black Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10" /* GXT: Lime Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11" /* GXT: Hawthorn Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12" /* GXT: Coffee Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13" /* GXT: Gray Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14" /* GXT: Cream Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15" /* GXT: Navy Oxfords */, 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0" /* GXT: Black Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1" /* GXT: Red Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2" /* GXT: Brown Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3" /* GXT: Green Stripe Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4" /* GXT: Green Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5" /* GXT: Copper Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6" /* GXT: Copper Two-Tone Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7" /* GXT: Navy Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8" /* GXT: Blue Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9" /* GXT: Beige Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10" /* GXT: White Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11" /* GXT: Tan Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12" /* GXT: Black Snakeskin Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13" /* GXT: Two-Tone Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14" /* GXT: Brown Snakeskin Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15" /* GXT: Gray Slip-Ons */, 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0" /* GXT: Brown Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1" /* GXT: Navy Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2" /* GXT: Coffee Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3" /* GXT: Burgundy Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4" /* GXT: Blue Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5" /* GXT: Woodland Camo Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6" /* GXT: Black Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7" /* GXT: Tan Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		case 79:
			StringCopy(&Var2, "FEET_P0_20_8" /* GXT: Purple Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9" /* GXT: Brown Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10" /* GXT: Chocolate Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11" /* GXT: Green Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12" /* GXT: Ash Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13" /* GXT: Olive Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14" /* GXT: Two-Tone Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15" /* GXT: Yellow Wingtips */, 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0" /* GXT: Black Leather Loafers */, 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 720;
			break;
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1" /* GXT: Gray Leather Loafers */, 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 680;
			break;
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2" /* GXT: Cream Leather Loafers */, 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 650;
			break;
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3" /* GXT: Brown Leather Loafers */, 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 670;
			break;
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4" /* GXT: White Leather Loafers */, 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 700;
			break;
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5" /* GXT: Russet Leather Loafers */, 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 680;
			break;
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6" /* GXT: White Snakeskin Loafers */, 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 720;
			break;
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7" /* GXT: Rattlesnake Loafers */, 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 740;
			break;
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8" /* GXT: Brown Snakeskin Loafers */, 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 760;
			break;
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9" /* GXT: Zebra Two-Tone Loafers */, 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 780;
			break;
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10" /* GXT: Pale Reptile Loafers */, 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 750;
			break;
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11" /* GXT: Tan Alligator Loafers */, 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 700;
			break;
		default:
			func_102(iVar7, iParam0, 99, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_150(int iParam0)//Position - 0x1D3E2
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0" /* GXT: Gray Pants */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0" /* GXT: Gray Pants */, 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2" /* GXT: Charcoal Pants */, 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3" /* GXT: Slate Pants */, 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4" /* GXT: Topaz Pants */, 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5" /* GXT: Pale Blue Pants */, 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6" /* GXT: Cream Pants */, 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7" /* GXT: Olive Pants */, 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8" /* GXT: Off-White Pants */, 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9" /* GXT: Navy Pants */, 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10" /* GXT: Beige Pants */, 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11" /* GXT: Smoke Pants */, 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12" /* GXT: Blue-Gray Pants */, 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13" /* GXT: Ash Pants */, 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14" /* GXT: Sand Pants */, 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15" /* GXT: Black Pants */, 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0" /* GXT: Off-White Chinos */, 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 115;
			break;
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1" /* GXT: Camel Chinos */, 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 115;
			break;
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2" /* GXT: Ash Chinos */, 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 128;
			break;
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3" /* GXT: Olive Chinos */, 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 118;
			break;
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4" /* GXT: Brown Chinos */, 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 125;
			break;
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5" /* GXT: Black Chinos */, 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 128;
			break;
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6" /* GXT: Charcoal Chinos */, 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 128;
			break;
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7" /* GXT: White Chinos */, 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 125;
			break;
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0" /* GXT: Cream Cargo Shorts */, 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 68;
			break;
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1" /* GXT: Khaki Cargo Shorts */, 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 68;
			break;
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2" /* GXT: Camo Cargo Shorts */, 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 68;
			break;
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3" /* GXT: Gray Cargo Shorts */, 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 68;
			break;
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4" /* GXT: White Cargo Shorts */, 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 68;
			break;
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0" /* GXT: Gray Golf Pants */, 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1" /* GXT: Cream Golf Pants */, 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 550;
			break;
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2" /* GXT: Brown Golf Pants */, 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 650;
			break;
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3" /* GXT: Tartan Golf Pants */, 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 875;
			break;
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4" /* GXT: Charcoal Plaid Golf Pants */, 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 820;
			break;
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5" /* GXT: Green Plaid Golf Pants */, 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 720;
			break;
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6" /* GXT: Brown Plaid Golf Pants */, 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 750;
			break;
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7" /* GXT: Slate Golf Pants */, 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 850;
			break;
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0" /* GXT: Beige Shorts */, 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1" /* GXT: Yellow Shorts */, 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2" /* GXT: Blue Shorts */, 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 48;
			break;
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3" /* GXT: Brown Leafy Shorts */, 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 38;
			break;
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4" /* GXT: Tropical Shorts */, 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 38;
			break;
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5" /* GXT: Aqua Vintage Shorts */, 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 42;
			break;
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6" /* GXT: Bright Two-Tone Shorts */, 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7" /* GXT: Red Floral Shorts */, 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 46;
			break;
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8" /* GXT: Navy Floral Shorts */, 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 46;
			break;
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9" /* GXT: Blue Floral Shorts */, 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 46;
			break;
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10" /* GXT: Orange Shorts */, 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 68;
			break;
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11" /* GXT: White Striped Shorts */, 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 58;
			break;
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12" /* GXT: Charcoal Shorts */, 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar1 = 50;
			break;
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13" /* GXT: Gray Shorts */, 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar1 = 68;
			break;
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14" /* GXT: Candy Surf Shorts */, 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar1 = 68;
			break;
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15" /* GXT: Undersea Shorts */, 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar1 = 42;
			break;
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0" /* GXT: White Striped Boxers */, 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1" /* GXT: Blue Boxers */, 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 250;
			break;
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2" /* GXT: Ash Boxers */, 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 250;
			break;
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3" /* GXT: Blue Striped Boxers */, 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 290;
			break;
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4" /* GXT: White Boxers */, 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 270;
			break;
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5" /* GXT: Charcoal Boxers */, 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 270;
			break;
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6" /* GXT: Red Heart Boxers */, 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 15;
			break;
		case 79:
			StringCopy(&Var2, "LEGS_P0_18_7" /* GXT: Blue Heart Boxers */, 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 12;
			break;
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0" /* GXT: Blue Casual Jeans */, 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1" /* GXT: Black Casual Jeans */, 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 118;
			break;
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2" /* GXT: Faded Casual Jeans */, 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 110;
			break;
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0" /* GXT: Tan Pants */, 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1" /* GXT: Charcoal Pants */, 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 95;
			break;
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2" /* GXT: Brown Pants */, 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 95;
			break;
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3" /* GXT: Ash Pants */, 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 98;
			break;
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0" /* GXT: Smart Jeans */, 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 140;
			break;
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0" /* GXT: White Tennis Shorts */, 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1" /* GXT: Lobon Tennis Shorts */, 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 150;
			break;
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2" /* GXT: Plaid Tennis Shorts */, 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 130;
			break;
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0" /* GXT: Beige Shorts, Bare Feet */, 16);
			iVar3 = 27;
			iVar4 = 0;
			break;
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0" /* GXT: Pale Blue Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 45;
			break;
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1" /* GXT: Beige Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 48;
			break;
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2" /* GXT: Cream Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 48;
			break;
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3" /* GXT: Olive Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 52;
			break;
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4" /* GXT: Blue Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 52;
			break;
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5" /* GXT: Off-White Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 55;
			break;
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6" /* GXT: Gray Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 55;
			break;
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7" /* GXT: Charcoal Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 55;
			break;
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8" /* GXT: Pink Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 58;
			break;
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9" /* GXT: Beige Plaid Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 58;
			break;
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10" /* GXT: Pastel Plaid Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 60;
			break;
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11" /* GXT: Orange Plaid Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 60;
			break;
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12" /* GXT: Gray Plaid Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 62;
			break;
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13" /* GXT: Blue Striped Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 62;
			break;
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14" /* GXT: Murky Plaid Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 65;
			break;
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15" /* GXT: Pastel Check Bermudas */, 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 65;
			break;
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 29;
			iVar4 = 0;
			break;
		default:
			func_102(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_151(int iParam0)//Position - 0x1E014
{
	if (iParam0 < 60)
	{
		func_153(iParam0);
	}
	else
	{
		func_152(iParam0);
	}
	if (Global_78130[0 /*14*/].f_2 == -1)
	{
		func_102(3, iParam0, 181, -1);
	}
}

void func_152(int iParam0)//Position - 0x1E049
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0" /* GXT: Rearwall Black Gilet */, 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 120;
			break;
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1" /* GXT: Fruntalot Red Gilet */, 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 120;
			break;
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2" /* GXT: Yeti Blue Gilet */, 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 120;
			break;
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3" /* GXT: Rearwall Brown Gilet */, 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			break;
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4" /* GXT: Rearwall Orange Gilet */, 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 120;
			break;
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5" /* GXT: Rearwall Green Gilet */, 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 120;
			break;
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0" /* GXT: Purple Golf Shirt */, 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1" /* GXT: Orange Golf Shirt */, 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 20;
			break;
		case 79:
			StringCopy(&Var2, "TORSO_P0_16_2" /* GXT: Burgundy Golf Shirt */, 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 24;
			break;
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3" /* GXT: Yellow Golf Shirt */, 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 22;
			break;
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4" /* GXT: Blue Golf Shirt */, 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 25;
			break;
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5" /* GXT: Mint Golf Shirt */, 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 25;
			break;
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6" /* GXT: Brown Golf Shirt */, 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 22;
			break;
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7" /* GXT: Crimson Golf Shirt */, 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 27;
			break;
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0" /* GXT: Blue-Gray Polo Shirt */, 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1" /* GXT: Olive Polo Shirt */, 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2" /* GXT: Red Polo Shirt */, 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3" /* GXT: Black Polo Shirt */, 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 48;
			break;
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4" /* GXT: White Polo Shirt */, 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 40;
			break;
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5" /* GXT: Blue Polo Shirt */, 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 45;
			break;
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0" /* GXT: Off-White Tank Top */, 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1" /* GXT: White Tank Top */, 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 190;
			break;
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2" /* GXT: Ash Tank Top */, 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 190;
			break;
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3" /* GXT: Gray Tank Top */, 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 190;
			break;
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4" /* GXT: Black Tank Top */, 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 210;
			break;
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0" /* GXT: Blue Denim Shirt */, 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1" /* GXT: Deep Black Shirt */, 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2" /* GXT: Russet Shirt */, 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 55;
			break;
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3" /* GXT: Green Cord Shirt */, 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4" /* GXT: Gray Shirt */, 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 99;
			break;
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5" /* GXT: Fresh Check Shirt */, 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 49;
			break;
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6" /* GXT: Southern Plaid Shirt */, 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 120;
			break;
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7" /* GXT: Sunrise Yellow Shirt */, 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 45;
			break;
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8" /* GXT: White Shirt */, 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 115;
			break;
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9" /* GXT: Stone Shirt */, 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 105;
			break;
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10" /* GXT: Earth Plaid Shirt */, 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 90;
			break;
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11" /* GXT: Green Check Shirt */, 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 95;
			break;
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12" /* GXT: Country Plaid Shirt */, 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 39;
			break;
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13" /* GXT: Orange Tight Check Shirt */, 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 95;
			break;
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14" /* GXT: Bright Blue Plaid Shirt */, 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 35;
			break;
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15" /* GXT: Blue Check Shirt */, 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 95;
			break;
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0" /* GXT: Gray Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1" /* GXT: Ammu-Nation Camo Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 60;
			break;
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2" /* GXT: LSGC Gray Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 70;
			break;
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3" /* GXT: LSGC Urban Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4" /* GXT: LSGC Forest Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 90;
			break;
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5" /* GXT: Ammu-Nation A Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6" /* GXT: Blauser Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 70;
			break;
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7" /* GXT: Penetrators Orange Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 95;
			break;
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8" /* GXT: Crevis Fluorescent Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 105;
			break;
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9" /* GXT: Blue Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 95;
			break;
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10" /* GXT: Green Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 110;
			break;
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11" /* GXT: LS Jardineros Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 98;
			break;
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12" /* GXT: Ash 18 Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 88;
			break;
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13" /* GXT: Red Mist XI Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 98;
			break;
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14" /* GXT: Eris Charcoal Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 14;
			iVar1 = 110;
			break;
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15" /* GXT: OG Hoodie */, 16);
			iVar3 = 21;
			iVar4 = 15;
			iVar1 = 98;
			break;
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0" /* GXT: Distressed Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1" /* GXT: Black Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 4950;
			break;
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2" /* GXT: Chestnut Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 4195;
			break;
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3" /* GXT: Oxblood Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3195;
			break;
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4" /* GXT: Vintage Black Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 2950;
			break;
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5" /* GXT: Brown Leather Jacket */, 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 3950;
			break;
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0" /* GXT: Silver Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1" /* GXT: Gray-Green Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2" /* GXT: Slate Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 3200;
			break;
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3" /* GXT: Gray Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 3200;
			break;
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4" /* GXT: Blue Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 3200;
			break;
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5" /* GXT: Pale Blue Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 3200;
			break;
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6" /* GXT: White Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar1 = 3200;
			break;
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7" /* GXT: Warm Gray Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar1 = 3200;
			break;
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8" /* GXT: Cream Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar1 = 3200;
			break;
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9" /* GXT: Midnight Blue Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar1 = 3200;
			break;
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10" /* GXT: Off-White Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar1 = 3200;
			break;
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11" /* GXT: Charcoal Wool Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar1 = 3200;
			break;
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12" /* GXT: Charcoal Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar1 = 3200;
			break;
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13" /* GXT: Ash Plaid Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar1 = 3200;
			break;
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14" /* GXT: Beige Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar1 = 3200;
			break;
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15" /* GXT: Brown Sports Coat */, 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar1 = 3200;
			break;
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0" /* GXT: Charcoal Sweater */, 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 1350;
			break;
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1" /* GXT: Gray Sweater */, 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 1400;
			break;
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2" /* GXT: Beige Sweater */, 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 1200;
			break;
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3" /* GXT: Red Sweater */, 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4" /* GXT: Pale Blue Sweater */, 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 1350;
			break;
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5" /* GXT: Pale Amethyst Sweater */, 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 1300;
			break;
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6" /* GXT: Blue Sweater */, 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 1380;
			break;
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7" /* GXT: Pale Jade Sweater */, 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 1340;
			break;
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8" /* GXT: Orange Sweater */, 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 1380;
			break;
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9" /* GXT: Lemon Sweater */, 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 1250;
			break;
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0" /* GXT: Pale Blue Shirt */, 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 840;
			break;
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1" /* GXT: Pink Shirt */, 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 840;
			break;
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2" /* GXT: White Shirt */, 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 840;
			break;
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3" /* GXT: Gray Shirt */, 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 840;
			break;
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4" /* GXT: Charcoal Shirt */, 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 840;
			break;
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5" /* GXT: Blue Shirt */, 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 840;
			break;
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6" /* GXT: Topaz Shirt */, 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 840;
			break;
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7" /* GXT: Black Shirt */, 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 840;
			break;
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0" /* GXT: Bare Chested */, 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0" /* GXT: Eris White Sweater Vest */, 16);
			iVar3 = 28;
			iVar4 = 0;
			break;
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1" /* GXT: Lobon Sweater Vest */, 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 130;
			break;
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2" /* GXT: Eris Blue Sweater Vest */, 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 110;
			break;
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0" /* GXT: Gray Jacket */, 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 290;
			break;
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1" /* GXT: Black Jacket */, 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 320;
			break;
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0" /* GXT: Red Check Winter Shirt */, 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 59;
			break;
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1" /* GXT: Blue Check Winter Shirt */, 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 55;
			break;
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2" /* GXT: Black Winter Shirt */, 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 59;
			break;
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3" /* GXT: Brown Check Winter Shirt */, 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 49;
			break;
		default:
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_153(int iParam0)//Position - 0x1EDDC
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0" /* GXT: Gray Jacket */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0" /* GXT: Gray Jacket */, 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2" /* GXT: Charcoal Jacket */, 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 3500;
			break;
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3" /* GXT: Slate Jacket */, 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4" /* GXT: Topaz Jacket */, 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5" /* GXT: Pale Blue Jacket */, 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6" /* GXT: Cream Jacket */, 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7" /* GXT: Olive Jacket */, 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8" /* GXT: Off-White Jacket */, 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9" /* GXT: Navy Jacket */, 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10" /* GXT: Beige Jacket */, 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11" /* GXT: Smoke Jacket */, 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12" /* GXT: Blue-Gray Jacket */, 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13" /* GXT: Ash Jacket */, 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14" /* GXT: Sand Jacket */, 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15" /* GXT: Black Jacket */, 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 20;
			break;
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 18;
			break;
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 22;
			break;
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 25;
			break;
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4" /* GXT: Suburban Yellow T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 19;
			break;
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5" /* GXT: Rearwall Slate T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 20;
			break;
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6" /* GXT: Rearwall Blue T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 22;
			break;
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7" /* GXT: Rearwall Gray T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 18;
			break;
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8" /* GXT: Suburban Navy T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 39;
			break;
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9" /* GXT: Suburban Russet T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 32;
			break;
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10" /* GXT: Suburban Orange T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 35;
			break;
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11" /* GXT: Suburban Gray T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 35;
			break;
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12" /* GXT: White T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 210;
			break;
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13" /* GXT: Forest Green T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 250;
			break;
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14" /* GXT: Pale Blue T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 290;
			break;
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15" /* GXT: Ash T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 310;
			break;
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0" /* GXT: Brown Shooting Vest */, 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1" /* GXT: Woodland Shooting Vest */, 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 160;
			break;
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2" /* GXT: Taupe Shooting Vest */, 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 150;
			break;
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3" /* GXT: Brown Woven Shooting Vest */, 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 150;
			break;
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4" /* GXT: Field Shooting Vest */, 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 160;
			break;
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5" /* GXT: Forest Shooting Vest */, 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 160;
			break;
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0" /* GXT: Blue-Gray Shirt */, 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1" /* GXT: White Shirt */, 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 52;
			break;
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2" /* GXT: Camel Shirt */, 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 52;
			break;
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3" /* GXT: Black Shirt */, 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 55;
			break;
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4" /* GXT: Citrus Hawaiian Shirt */, 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 55;
			break;
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5" /* GXT: Orange Grove Shirt */, 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 58;
			break;
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6" /* GXT: Parrot Print Shirt */, 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 58;
			break;
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7" /* GXT: Blue Geometric Shirt */, 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 62;
			break;
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8" /* GXT: Gray Patterned Shirt */, 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 65;
			break;
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9" /* GXT: Peach Patterned Shirt */, 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 65;
			break;
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10" /* GXT: Tropical Shirt */, 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 68;
			break;
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11" /* GXT: Navy Floral Shirt */, 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 68;
			break;
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12" /* GXT: Lime Plaid Shirt */, 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 55;
			break;
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13" /* GXT: Brown Patterned Shirt */, 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 62;
			break;
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14" /* GXT: Vintage Hawaiian Shirt */, 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 58;
			break;
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15" /* GXT: Blue Plaid Shirt */, 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 58;
			break;
		default:
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_154(int iParam0)//Position - 0x1F45E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0" /* GXT: Lexington */, 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0" /* GXT: The Wood */, 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0" /* GXT: Clippered Cut */, 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0" /* GXT: Grown Out */, 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0" /* GXT: Slicker */, 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		default:
			func_102(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_155(int iParam0)//Position - 0x1F544
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_78130[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		default:
			func_102(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_95(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

int func_157(int iParam0, int iParam1, int iParam2)//Position - 0x1F6B3
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
	Global_78130[1 /*14*/] = { func_92(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_0__.func_210(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_157(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { func_85(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_157(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { func_92(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_157(iParam0, 14, iVar4))
										{
											if (!func_47(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
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
						Global_78130[2 /*14*/] = { func_92(iVar0, iVar2, iVar1, -1) };
						if (!func_47(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
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
		uVar8 = { func_85(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_157(iParam0, 14, uVar8[iVar7]))
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

void func_168(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1FFE9
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, true);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
	PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
	MISC::SET_TIME_SCALE(1f);
	__LIB_0__.func_55();
	__LIB_0__.func_54(1, 1);
	__LIB_11__.func_683();
	__LIB_18__.func_172();
	__LIB_0__.func_50(30000);
	if (iParam1 == 1)
	{
		__LIB_0__.func_152(iParam0, bParam2, bParam3);
	}
	HUD::SET_MISSION_NAME(false, 0);
}

void func_183(int iParam0, bool bParam1)//Position - 0x217E2
{
	struct<26> Var0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<6> Var4;
	int iVar5;
	int iVar6;
	struct<6> Var7;
	int iVar8;
	int iVar9;
	__LIB_6__.func_773(iParam0, &Var0);
	if (!MISC::ARE_STRINGS_EQUAL(&(Var0.f_16), ""))
	{
		while (!__LIB_0__.func_72(&(Var0.f_16)))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (Var0.f_22 != 0)
	{
		__LIB_0__.func_71(Var0.f_22, 0);
	}
	func_201(iParam0, Global_78588);
	if (!bParam1)
	{
		iVar1 = __LIB_0__.func_65(iParam0);
		if (iVar1 != 0)
		{
			if (!AUDIO::IS_MISSION_NEWS_STORY_UNLOCKED(iVar1))
			{
				AUDIO::UNLOCK_MISSION_NEWS_STORY(iVar1);
			}
		}
	}
	if (Var0.f_24 != -1)
	{
		bVar2 = true;
		if (Var0.f_5 != 4)
		{
			iVar3 = 0;
			while (iVar3 < 63)
			{
				iVar5 = iVar3;
				if (iVar5 != iParam0)
				{
					__LIB_6__.func_773(iVar5, &Var4);
					if (Var4.f_5 == Var0.f_5)
					{
						if (!BitTest(Global_113386.f_18574[iVar5 /*6*/], 3))
						{
							bVar2 = false;
						}
						if (!BitTest(Global_113386.f_18574[iVar5 /*6*/], 0))
						{
							func_188(iVar5);
						}
					}
				}
				iVar3++;
			}
		}
		if (bVar2)
		{
			func_188(Var0.f_24);
		}
	}
	else if (Var0.f_25 != 4)
	{
		iVar6 = 0;
		while (iVar6 < 63)
		{
			iVar8 = iVar6;
			if (iVar8 != iParam0)
			{
				__LIB_6__.func_773(iVar8, &Var7);
				if (Var7.f_5 == Var0.f_25)
				{
					func_188(iVar8);
				}
			}
			iVar6++;
		}
	}
	if (!BitTest(Global_113386.f_18574[iParam0 /*6*/], 3))
	{
		MISC::SET_BIT(&(Global_113386.f_18574[iParam0 /*6*/]), 3);
		Global_112473[iParam0 /*10*/].f_5 = 1;
		__LIB_20__.func_261(iParam0);
		iVar9 = __LIB_0__.func_57(iParam0);
		if (iVar9 != 322)
		{
			func_14(iVar9, 0, 0);
		}
	}
}

void func_188(int iParam0)//Position - 0x2205C
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return;
	}
	func_189(iParam0);
	MISC::SET_BIT(&(Global_113386.f_18574[iParam0 /*6*/]), 0);
}

void func_189(int iParam0)//Position - 0x2208F
{
	switch (iParam0)
	{
		case 30:
			func_193(22, 1, 0, 1, 0);
			break;
		case 15:
			__LIB_6__.func_770(37, 0);
			break;
		default:
			break;
	}
}

void func_193(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x2217C
{
	if (iParam0 != 198)
	{
		if (Global_78319)
		{
			Global_42586.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_113386.f_7261.f_227[iParam0] = iParam1;
		}
		Global_39592[iParam0] = iParam2;
		Global_39791[iParam0] = 1;
		__LIB_6__.func_792(iParam0, bParam3, iParam4, 0);
		__LIB_0__.func_212(iParam0, iParam1);
	}
}

void func_201(int iParam0, bool bParam1)//Position - 0x264FA
{
	switch (iParam0)
	{
		case 46:
			func_202(4, bParam1);
			break;
		case 16:
			func_202(6, bParam1);
			break;
		case 37:
			func_202(17, bParam1);
			break;
		case 31:
			func_202(16, bParam1);
			break;
	}
}

void func_202(int iParam0, bool bParam1)//Position - 0x2654B
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!__LIB_0__.func_70(iParam0))
		{
			MISC::SET_BIT(&(Global_113386.f_26434), iVar0);
			if (!bParam1)
			{
				__LIB_0__.func_68(__LIB_0__.func_69(iParam0));
				if (!__LIB_0__.func_67(68))
				{
					__LIB_0__.func_160("DI_HLP_STRY" /* GXT: Story characters become available in Rockstar Editor's 'Director Mode' as the GTAV story progresses. */, 2, 0, 20000, 10000, 7, 0, 208, 0);
				}
			}
		}
	}
}

void func_237(int iParam0)//Position - 0x2747E
{
	iLocal_59 = iParam0;
	iLocal_60 = 0;
}

void func_238()//Position - 0x2748D
{
	if (__LIB_0__.func_121(iLocal_61))
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_242) > 1000)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			func_239(&uLocal_42, iLocal_61, "ABGAIL2_HINT", 0, 1, 1, 1);
		}
	}
	else
	{
		__LIB_0__.func_137(&uLocal_42, 0, 0);
	}
}

void func_239(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x274CF
{
	func_240(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_240(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x274EC
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		__LIB_0__.func_137(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_241(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_241(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x27524
{
	int iVar0;
	int iVar1;
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */;
		}
		else
		{
			iVar0 = "FM_IHELP_HNT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;
		}
	}
	if (__LIB_0__.func_1(iVar0))
	{
		__LIB_0__.func_184();
	}
	if (__LIB_0__.func_309(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), true);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (__LIB_26__.func_362(uParam0, bParam5, bParam7, 0))
			{
				func_257(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (__LIB_26__.func_89(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!__LIB_0__.func_1(iVar0))
							{
								__LIB_0__.func_151(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
								{
									__LIB_0__.func_303(1);
								}
							}
						}
					}
				}
			}
			else if (__LIB_26__.func_89(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
					{
						if (!__LIB_0__.func_1(iVar0))
						{
							__LIB_0__.func_151(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
							{
								__LIB_0__.func_303(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam3))
			{
				if (__LIB_0__.func_1(sParam3))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
					{
						__LIB_0__.func_137(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						__LIB_0__.func_137(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						__LIB_0__.func_137(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						__LIB_0__.func_137(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						__LIB_0__.func_137(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					__LIB_0__.func_137(uParam0, iVar0, 1);
				}
			}
			if (!__LIB_26__.func_362(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !__LIB_0__.func_302(uParam0))
				{
					__LIB_18__.func_200(uParam0);
				}
			}
		}
	}
	else
	{
		__LIB_0__.func_137(uParam0, iVar0, 0);
	}
}

void func_257(var uParam0, int iParam1, struct<3> Param2, int iParam3)//Position - 0x27F10
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (Global_1581357 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		__LIB_0__.func_137(uParam0, 0, 0);
	}
	if (__LIB_0__.func_78(Param2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!__LIB_6__.func_925())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == joaat("VEHICLE_HIGH_ZOOM_HINT_HELPER"))
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, true, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

void func_268()//Position - 0x285BA
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_62) && __LIB_0__.func_121(iLocal_61))
	{
		iLocal_62 = __LIB_10__.func_711(iLocal_61, 1, 0, 5);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_62) && HUD::GET_BLIP_COLOUR(iLocal_62) != 1)
	{
		HUD::SET_BLIP_AS_FRIENDLY(iLocal_62, false);
		HUD::SET_BLIP_COLOUR(iLocal_62, 1);
	}
}

void func_270()//Position - 0x28658
{
	switch (iLocal_60)
	{
		case 0:
			iLocal_60 = 1;
			break;
		case 1:
			func_238();
			if (!__LIB_0__.func_121(iLocal_61))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
				iLocal_232 = 1;
				__LIB_0__.func_523(&iLocal_62);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) == 0)
				{
					iLocal_60 = 2;
				}
			}
			else
			{
				if (((iLocal_232 == 0 && !__LIB_0__.func_75()) && __LIB_0__.func_508(iLocal_61, PLAYER::PLAYER_PED_ID(), 20f, 1)) && __LIB_37__.func_799(&uLocal_65, "SONARAU", "SONAR_ARRIVE", 7, 0, 0, 0))
				{
					iLocal_232 = 1;
					func_268();
				}
				if (__LIB_8__.func_538(PLAYER::PLAYER_PED_ID(), iLocal_61) > 250f)
				{
					iLocal_60 = 2;
				}
			}
			if ((iLocal_233 == 0 && iLocal_232 == 1) && !__LIB_0__.func_75())
			{
				if (__LIB_0__.func_121(iLocal_61))
				{
					PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				__LIB_0__.func_210("ABGAIL2_WANTED", 7500, 1);
				iLocal_233 = 1;
			}
			break;
		case 2:
			func_10();
			break;
	}
}

void func_272()//Position - 0x28783
{
	switch (iLocal_60)
	{
		case 0:
			iLocal_243 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(2.99f, 5194.44f, -1578.62f) - Vector(10f, 10f, 10f), Vector(2.99f, 5194.44f, -1578.62f) + Vector(10f, 10f, 10f), false, true, true, true);
			func_300();
			if (__LIB_0__.func_121(iLocal_61))
			{
				func_298();
				if (__LIB_1__.func_183(iLocal_56))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_62))
					{
						iLocal_62 = __LIB_10__.func_711(iLocal_61, 1, 0, 5);
					}
					func_297(&iLocal_62, "", "", &iLocal_63, &iLocal_64, 1, 0);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_236);
					if (!PED::IS_PED_IN_VEHICLE(iLocal_61, iLocal_56, false))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1579.27f, 5194.96f, 2.99f, 1f, 20000, 0.25f, 1, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1567.85f, 5178.12f, 14.78f, 1f, 20000, 0.25f, 1, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1571.85f, 5181.21f, 16.88f, 1f, 20000, 0.25f, 1, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1579.01f, 5174.08f, 18.57f, 1f, 20000, 0.25f, 1, 40000f);
						TASK::TASK_ENTER_VEHICLE(0, iLocal_56, 20000, -1, 1f, 1, 0);
					}
					TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, iLocal_56, Local_239, 20f, 786469, 10f);
					TASK::TASK_VEHICLE_PARK(0, iLocal_56, Local_239, 49.567f, 3, 10f, false);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_56, 256);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_236);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_61, iLocal_236);
				}
				else
				{
					TASK::TASK_WANDER_STANDARD(iLocal_61, 40000f, 0);
				}
			}
			iLocal_234 = MISC::GET_GAME_TIMER();
			iLocal_60 = 1;
			break;
		case 1:
			func_238();
			if (!__LIB_0__.func_121(iLocal_61))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) == 0)
				{
					iLocal_60 = 2;
				}
				else
				{
					func_237(3);
				}
			}
			else if (__LIB_8__.func_538(PLAYER::PLAYER_PED_ID(), iLocal_61) > 250f)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) == 0)
				{
					iLocal_60 = 2;
				}
				else
				{
					func_237(3);
				}
			}
			else if (func_277())
			{
				func_275();
				func_237(4);
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_61, Local_239, 5f, 5f, 5f, false, true, 0))
			{
				func_237(3);
			}
			else
			{
				func_273(&iLocal_62, "", "", &iLocal_63, iLocal_64, 0);
				if (iLocal_231 == 0)
				{
					if (((__LIB_0__.func_121(iLocal_56) && PED::IS_PED_IN_VEHICLE(iLocal_61, iLocal_56, true)) && __LIB_0__.func_508(iLocal_61, PLAYER::PLAYER_PED_ID(), 20f, 1)) && __LIB_37__.func_799(&uLocal_65, "SONARAU", "SONAR_INCAR", 7, 0, 0, 0))
					{
						iLocal_231 = 1;
					}
					if (((((iLocal_237 < 7 && !__LIB_0__.func_75()) && (MISC::GET_GAME_TIMER() - iLocal_234) > 10000) && __LIB_0__.func_508(iLocal_61, PLAYER::PLAYER_PED_ID(), 20f, 1)) && !PED::IS_PED_RAGDOLL(iLocal_61)) && __LIB_37__.func_799(&uLocal_65, "SONARAU", "SONAR_FOLLOW", 7, 0, 0, 0))
					{
						iLocal_234 = MISC::GET_GAME_TIMER();
						iLocal_237++;
					}
				}
			}
			break;
		case 2:
			func_10();
			break;
	}
}

void func_273(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x28AB5
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		if ((MISC::GET_GAME_TIMER() - *iParam3) > 500)
		{
			if (HUD::GET_BLIP_COLOUR(*iParam0) == 1)
			{
				HUD::SET_BLIP_COLOUR(*iParam0, 3);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "BLIP_FRIEND" /* GXT: Friend */);
				if ((MISC::GET_GAME_TIMER() - iParam4) < 7500 && iParam5)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || __LIB_0__.func_405(sParam1, 0, 0))
					{
						__LIB_0__.func_210(sParam2, 7500, 0);
					}
				}
				*iParam3 = MISC::GET_GAME_TIMER();
			}
			else
			{
				HUD::SET_BLIP_COLOUR(*iParam0, 1);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "BLIP_ENEMY" /* GXT: Enemy */);
				if ((MISC::GET_GAME_TIMER() - iParam4) < 7500 && iParam5)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || __LIB_0__.func_405(sParam2, 0, 0))
					{
						__LIB_0__.func_210(sParam1, 7500, 0);
					}
				}
				*iParam3 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if ((MISC::GET_GAME_TIMER() - iParam4) > 7500)
	{
		if (__LIB_0__.func_405(sParam1, 0, 0))
		{
			HUD::CLEAR_THIS_PRINT(sParam1);
		}
		if (__LIB_0__.func_405(sParam2, 0, 0))
		{
			HUD::CLEAR_THIS_PRINT(sParam2);
		}
	}
}

void func_275()//Position - 0x28BCE
{
	Global_20471 = 0;
	__LIB_0__.func_163();
}

int func_277()//Position - 0x28BFF
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		return 1;
	}
	if (__LIB_0__.func_121(iLocal_56))
	{
		if (__LIB_38__.func_135(iLocal_61, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return 1;
		}
		if (PED::IS_PED_BEING_JACKED(iLocal_61))
		{
			return 1;
		}
		if (__LIB_0__.func_121(iLocal_56))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_61, iLocal_56, false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
			if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_56, 0, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_56, 1, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_56, 4, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_56, 5, false))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_297(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x2962B
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		if (bParam5)
		{
			HUD::SET_BLIP_COLOUR(*iParam0, 1);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "BLIP_ENEMY" /* GXT: Enemy */);
			if (iParam6 && !__LIB_0__.func_75())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || __LIB_0__.func_405(sParam2, 0, 0))
				{
					__LIB_0__.func_210(sParam1, 7500, 0);
				}
			}
		}
		else
		{
			HUD::SET_BLIP_COLOUR(*iParam0, 3);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "BLIP_FRIEND" /* GXT: Friend */);
			if (iParam6 && !__LIB_0__.func_75())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || __LIB_0__.func_405(sParam1, 0, 0))
				{
					__LIB_0__.func_210(sParam2, 7500, 0);
				}
			}
		}
		*iParam3 = MISC::GET_GAME_TIMER();
		*iParam4 = MISC::GET_GAME_TIMER();
	}
}

void func_298()//Position - 0x296D7
{
	if (__LIB_0__.func_121(iLocal_61))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_61, true);
		__LIB_0__.func_203(&uLocal_65, 3, iLocal_61, "ABIGAIL", 0, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 128, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 4, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 1024, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_61, 281, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_61, 29, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_61, 116, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_61, 118, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_61, true);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(iLocal_61, false);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_61, false);
	}
}

void func_300()//Position - 0x297EE
{
	if (!__LIB_0__.func_121(iLocal_56))
	{
		iLocal_56 = VEHICLE::CREATE_VEHICLE(iLocal_55, Local_57, fLocal_58, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_55);
	}
	if (__LIB_0__.func_121(iLocal_56))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_56, 3);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_56, 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_55, true);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_56, true);
	}
}

void func_301()//Position - 0x2983C
{
	switch (iLocal_60)
	{
		case 0:
			__LIB_26__.func_478("ABIGAIL_MCS_2", 0);
			func_275();
			iLocal_240 = 0;
			iLocal_241 = 0;
			iLocal_60 = 1;
			break;
		case 1:
			switch (iLocal_241)
			{
				case 0:
					if (__LIB_18__.func_170(1, 1093140480, 0))
					{
						if (__LIB_0__.func_121(iLocal_61))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_61, "ABIGAIL", 0, 0, 0);
						}
						__LIB_26__.func_252();
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::REPLAY_START_EVENT(4);
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
						iLocal_241++;
					}
					break;
				case 1:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						__LIB_32__.func_742(-950.64136f, -1507.6007f, 4.17325f, -953.2579f, -1500.4388f, 4.17084f, 8f, -970.3301f, -1526.626f, 4.0877f, 306.1f, 1, 1, 1, 0, 0);
						func_342(-1592.84f, 5214.04f, 3.01f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, false, false, false, false, false, false, 0);
						__LIB_0__.func_84(500, 0);
						STREAMING::REMOVE_ANIM_DICT("rcmabigail");
						iLocal_241++;
					}
					break;
				case 2:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("ABIGAIL", __LIB_0__.func_282(16)) && __LIB_0__.func_121(iLocal_61))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_61, -1579.27f, 5194.96f, 2.99f, 1f, 20000, 0.25f, 1, 40000f);
						}
						if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
						{
							iLocal_240 = 1;
						}
					}
					else
					{
						RECORDING::REPLAY_STOP_EVENT();
						if (iLocal_240 == 1)
						{
							if (__LIB_0__.func_121(iLocal_61))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_61);
								__LIB_10__.func_701(iLocal_61, -1587.11f, 5204.18f, 3.02f, 210.9196f, 0, 1);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_61, -1579.27f, 5194.96f, 2.99f, 1f, 20000, 0.25f, 1, 40000f);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_61, false, false);
							}
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(500);
						}
						__LIB_0__.func_84(500, 1);
						__LIB_32__.func_576(1, 1, 1, 1);
						__LIB_10__.func_700(&Local_54, 0, 1);
						func_302(0, 1, 10, 0, 0);
						iLocal_242 = MISC::GET_GAME_TIMER();
						func_237(2);
					}
					break;
			}
			break;
	}
}

void func_302(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x29A69
{
	int iVar0;
	int iVar1;
	if (__LIB_0__.func_183(iParam0) == 3)
	{
		return;
	}
	if (__LIB_0__.func_183(iParam0) == 4)
	{
		return;
	}
	func_303(__LIB_0__.func_183(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, true);
	}
}

int func_303(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x29B3B
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	__LIB_0__.func_182();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					__LIB_0__.func_181(99, 1);
					__LIB_0__.func_180(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 1:
					__LIB_0__.func_180(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 2:
					__LIB_0__.func_180(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_312(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_310(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							__LIB_0__.func_180(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 1:
							__LIB_0__.func_180(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 2:
							__LIB_0__.func_180(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_310(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							__LIB_0__.func_180(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 1:
							__LIB_0__.func_180(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 2:
							__LIB_0__.func_180(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							__LIB_0__.func_180(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 1:
							__LIB_0__.func_180(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 2:
							__LIB_0__.func_180(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							__LIB_0__.func_180(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 1:
							__LIB_0__.func_180(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 2:
							__LIB_0__.func_180(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									__LIB_0__.func_180(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 1:
									__LIB_0__.func_180(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 2:
									__LIB_0__.func_180(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									__LIB_0__.func_180(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 1:
									__LIB_0__.func_180(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 2:
									__LIB_0__.func_180(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_310(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									__LIB_0__.func_180(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 1:
									__LIB_0__.func_180(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 2:
									__LIB_0__.func_180(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									__LIB_0__.func_180(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 1:
									__LIB_0__.func_180(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 2:
									__LIB_0__.func_180(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							__LIB_6__.func_852(iParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					__LIB_0__.func_181(95, iParam3);
					break;
				case 1:
					__LIB_0__.func_181(97, iParam3);
					break;
				case 2:
					__LIB_0__.func_181(96, iParam3);
					break;
			}
			__LIB_0__.func_181(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_306(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_306(bVar1);
	}
	iVar5 = (Global_60328[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60328[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60328[iVar2] = 2147483647;
				}
				else
				{
					Global_60328[iVar2] = (Global_60328[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					__LIB_0__.func_180(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 1:
					__LIB_0__.func_180(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 2:
					__LIB_0__.func_180(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		case 0:
			if (!bParam4)
			{
				if ((Global_60328[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60328[iVar2];
			Global_60328[iVar2] = (Global_60328[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113386.f_20564.f_233[iVar2 /*69*/]++;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_1++;
		if (Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	__LIB_0__.func_178(iParam0);
	if (Global_43052 == 15)
	{
		__LIB_0__.func_177(0);
	}
	return 1;
}

void func_306(bool bParam0)//Position - 0x2A416
{
	bool bVar0;
	char cVar1[64];
	if (bParam0 == 8)
	{
		__LIB_0__.func_521(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		__LIB_0__.func_521(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		__LIB_0__.func_521(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		__LIB_0__.func_521(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_77(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_77(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_77(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_77(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_77(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_77(8277, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_113386.f_20564.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_113386.f_20564.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_113386.f_20564.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /* GXT: You have redeemed your promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(__LIB_0__.func_179(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

int func_310(int iParam0)//Position - 0x2A6C4
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
	int iVar11;
	if (iParam0 == 8)
	{
		return __LIB_0__.func_137(129, -1);
	}
	if (iParam0 == 9)
	{
		return __LIB_0__.func_137(135, -1);
	}
	if (iParam0 == 10)
	{
		return __LIB_0__.func_137(136, -1);
	}
	if (iParam0 == 11)
	{
		return __LIB_0__.func_137(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = __LIB_0__.func_207(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = __LIB_0__.func_207(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = __LIB_0__.func_207(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = __LIB_0__.func_207(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = __LIB_0__.func_207(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = __LIB_0__.func_207(8277, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_113386.f_20564.f_471, iParam0);
	}
	return BitTest(Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_10, iParam0);
}

int func_312(bool bParam0)//Position - 0x2A886
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), iVar1, true);
		__LIB_0__.func_4(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_313(27, 1);
	return 1;
}

int func_313(int iParam0, int iParam1)//Position - 0x2A93D
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_314(iParam0, iParam1);
}

int func_314(int iParam0, int iParam1)//Position - 0x2A958
{
	if (__LIB_0__.func_39(14) && !__LIB_0__.func_146(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32209 != 0 && !Global_78319)
	{
		return 0;
	}
	if (__LIB_0__.func_145(&Global_4541529))
	{
		if (__LIB_6__.func_822(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (__LIB_20__.func_272(&Global_4541529, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void func_342(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x2B205
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
					if (func_157(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_43(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_157(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_43(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_157(PLAYER::PLAYER_PED_ID(), 8, 1) || func_157(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_43(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_157(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_43(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

void func_361()//Position - 0x2C106
{
	HUD::REQUEST_ADDITIONAL_TEXT("ABGAIL2", 0);
	STREAMING::REQUEST_MODEL(iLocal_55);
	if ((!__LIB_0__.func_75() && HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) && STREAMING::HAS_MODEL_LOADED(iLocal_55))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_55, true);
		if (__LIB_0__.func_121(Local_54.f_35[0]))
		{
			iLocal_56 = Local_54.f_35[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_56, true, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_55);
		}
		iLocal_59 = 1;
	}
	else
	{
		__LIB_24__.func_930();
	}
}

void func_385(int iParam0)//Position - 0x2CD4F
{
	__LIB_0__.func_268(0, 0, 0);
	func_462(1, 1);
	__LIB_0__.func_0(&iLocal_61);
	__LIB_11__.func_32(&iLocal_56);
	__LIB_0__.func_272(0);
	__LIB_0__.func_270();
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, true, false, false, false);
	switch (iParam0)
	{
		case 0:
			func_391(-1590.9642f, 5211.717f, 3.0098f, 37.4745f, 0f, 0f, 0f, 0f, -1596.09f, 5218.102f, 3.045f, 125.5f, -1584.0127f, 5158.5386f, 18.6057f, 210.5309f);
			func_237(1);
			break;
		case 1:
			func_391(-1595.201f, 5217.4946f, 3.0009f, 208.2675f, -1580.2358f, 5169.5854f, 18.5846f, 189.4926f, -1587.11f, 5204.18f, 3.02f, -143.87f, Local_57, fLocal_58);
			func_237(2);
			break;
		case 2:
			func_391(0f, 0f, 0f, 0f, -1580.2358f, 5169.5854f, 18.5846f, 189.4926f, 0f, 0f, 0f, 0f, Local_57, fLocal_58);
			func_237(2);
			break;
		case 3:
			func_391(0f, 0f, 0f, 0f, -973.0429f, -2405.9248f, 19.1698f, 151.3282f, 0f, 0f, 0f, 0f, -982.942f, -2422.9114f, 19.1683f, 148.0451f);
			iLocal_231 = 1;
			iLocal_237 = 7;
			func_237(2);
			break;
	}
	if (!__LIB_0__.func_295())
	{
		__LIB_20__.func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1112014848, 12, 5000, 0, 0);
	}
	func_387(0, -1, 1);
	__LIB_32__.func_751(1, 1, 1);
}

void func_387(int iParam0, int iParam1, int iParam2)//Position - 0x2CF1D
{
	if (__LIB_0__.func_170() && __LIB_0__.func_295())
	{
		while (Global_100436 != 6)
		{
			SYSTEM::WAIT(0);
		}
		MISC::SET_GAME_PAUSED(false);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		__LIB_0__.func_6(0);
	}
}

void func_391(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3, struct<3> Param4, float fParam5, struct<3> Param6, float fParam7)//Position - 0x2D070
{
	int* iVar0;
	if (__LIB_0__.func_86(Param0))
	{
		while (!func_396(&iVar0, 0, Param2, fParam3, 1, 0))
		{
			SYSTEM::WAIT(0);
		}
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, -1);
		__LIB_0__.func_106(&iVar0);
	}
	else if (!__LIB_0__.func_170())
	{
		__LIB_10__.func_701(PLAYER::PLAYER_PED_ID(), Param0, fParam1, 0, 1);
	}
	STREAMING::REQUEST_MODEL(iLocal_55);
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_55))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_392(&iLocal_61, 16, Param4, fParam5, "RC ABIGAIL 2", 1))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_56 = VEHICLE::CREATE_VEHICLE(iLocal_55, Param6, fParam7, true, true, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_55, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_55);
	func_300();
	if (__LIB_0__.func_86(Param4))
	{
		PED::SET_PED_INTO_VEHICLE(iLocal_61, iLocal_56, -1);
	}
}

int func_392(int* iParam0, int iParam1, struct<3> Param2, float fParam3, char* sParam4, int iParam5)//Position - 0x2D138
{
	if (func_393(iParam0, iParam1, Param2, fParam3, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
				PED::SET_PED_MONEY(*iParam0, 0);
				if (iParam5 == 1)
				{
					PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
				}
			}
			PED::SET_PED_NAME_DEBUG(*iParam0, sParam4);
		}
		return 1;
	}
	return 0;
}

int func_393(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x2D194
{
	int iVar0;
	if (!__LIB_0__.func_43(iParam1))
	{
		iVar0 = __LIB_0__.func_282(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
			if (iVar0 == joaat("IG_LamarDavis"))
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(*iParam0, 3) == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(*iParam0, 5, 2, 0, 0);
				}
			}
			__LIB_2__.func_328(*iParam0, iParam1);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_396(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)//Position - 0x2D2A0
{
	int iVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	if (__LIB_0__.func_43(iParam1))
	{
		Var2.f_11 = 12;
		Var2.f_31 = 49;
		Var2.f_81 = 2;
		__LIB_0__.func_120(iParam1, &Var2, iParam5);
		if (Var2.f_0 == 0)
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var2.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_113386.f_2363.f_539.f_4316) && Global_113386.f_9085.f_99.f_58[131])
		{
			Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/] == Var2.f_0)
		{
			STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/], Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_7, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar3 + 1, !Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_11[iVar3]);
					iVar3++;
				}
				if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (__LIB_0__.func_283(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_84, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_85, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_93, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_94, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_454(iParam0, &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						__LIB_6__.func_845(iParam0);
					}
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
				}
				__LIB_9__.func_801(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/] == Var2.f_0)
		{
			STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/], Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_7, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar4 + 1, !Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_11[iVar4]);
					iVar4++;
				}
				if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (__LIB_0__.func_283(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_84, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_85, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_93, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_94, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_454(iParam0, &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						__LIB_6__.func_845(iParam0);
					}
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
				}
				__LIB_9__.func_801(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var2.f_0);
			if (STREAMING::HAS_MODEL_LOADED(Var2.f_0))
			{
				bVar5 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var2.f_0, Param2, fParam3, true, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				StringCopy(&cVar6, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var2.f_5, Var2.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var2.f_7, Var2.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar7 + 1, !Var2.f_11[iVar7]);
					iVar7++;
				}
				if (Var2.f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var2.f_24);
				}
				if (__LIB_0__.func_283(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var2.f_27));
					if (Var2.f_26 >= 0 && Var2.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var2.f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var2.f_84, Var2.f_85, Var2.f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var2.f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var2.f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Var2.f_93, Var2.f_94, Var2.f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Var2.f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Var2.f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Var2.f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Var2.f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var2.f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var2.f_89);
				}
				if (Var2.f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var2.f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_90);
						}
					}
				}
				func_454(iParam0, &(Var2.f_31), &(Var2.f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (iParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bagger") && !Global_113386.f_9085.f_99.f_58[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						__LIB_6__.func_845(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_113386.f_2363.f_539.f_4316) && Global_113386.f_9085.f_99.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("tailgater"))
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
					Global_113386.f_2363.f_539.f_4316 = 1;
					func_397(iParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var2.f_0);
				}
				if (bVar5)
				{
					__LIB_9__.func_801(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_397(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2E0C0
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	if ((__LIB_0__.func_43(iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
	{
		if (iParam2 > Global_113386.f_2363.f_539.f_2407)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			__LIB_35__.func_888(*iParam1, iParam0);
		}
		if (VEHICLE::GET_NUM_MOD_KITS(*iParam1) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(*iParam1, 0);
		}
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/] = ENTITY::GET_ENTITY_MODEL(*iParam1);
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam1, &iVar1))
		{
			Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1 = ENTITY::GET_ENTITY_MODEL(iVar1);
		}
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3 = ENTITY::GET_ENTITY_HEALTH(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 2);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 3);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 4);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 5);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 6);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 7);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 8);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 9);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 10);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 11);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 12);
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam1, false))
		{
			iVar2 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		StringCopy(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam1), 16);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam1);
		VEHICLE::GET_VEHICLE_COLOURS(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87 = VEHICLE::GET_VEHICLE_WINDOW_TINT(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89 = VEHICLE::GET_VEHICLE_LIVERY(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(*iParam1);
		VEHICLE::GET_VEHICLE_NEON_COLOUR(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 2))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 3))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 0))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 1))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_113386.f_2363.f_539.f_4317[iParam0] = 10;
		if (VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) >= 0 && __LIB_20__.func_262(*iParam1, 0, &uVar0))
		{
			__LIB_0__.func_107(iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_113386.f_20118[iParam0 /*43*/].f_40 = 1;
				Global_113386.f_20118[iParam0 /*43*/] = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
				Global_113386.f_20118[iParam0 /*43*/].f_3 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_113386.f_20118[iParam0 /*43*/].f_4 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_113386.f_20118[iParam0 /*43*/].f_5 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_113386.f_20118[iParam0 /*43*/].f_6 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_113386.f_20118[iParam0 /*43*/].f_10 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_113386.f_20118[iParam0 /*43*/].f_16 = !Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_113386.f_20118[iParam0 /*43*/].f_19 = { Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_113386.f_20118[iParam0 /*43*/].f_23 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_113386.f_20118[iParam0 /*43*/].f_7 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_113386.f_20118[iParam0 /*43*/].f_8 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_113386.f_20118[iParam0 /*43*/].f_9 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_113386.f_20118[iParam0 /*43*/].f_11 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_113386.f_20118[iParam0 /*43*/].f_12 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_113386.f_20118[iParam0 /*43*/].f_13 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_113386.f_20118[iParam0 /*43*/].f_14 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_113386.f_20118[iParam0 /*43*/].f_15 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_113386.f_20118[iParam0 /*43*/].f_18 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_113386.f_20118[iParam0 /*43*/].f_17 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_113386.f_20118[iParam0 /*43*/].f_24 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 11) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_25 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 12) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_26 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 4) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_27 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 23) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_28 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 14) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_29 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 16) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_30 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 15) + 1;
				Global_113386.f_20118[iParam0 /*43*/].f_32 = VEHICLE::GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(*iParam1);
				Global_113386.f_20118[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1);
				Global_113386.f_20118[iParam0 /*43*/].f_33[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 0);
				Global_113386.f_20118[iParam0 /*43*/].f_33[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 1);
				Global_113386.f_20118[iParam0 /*43*/].f_33[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 2);
				Global_113386.f_20118[iParam0 /*43*/].f_33[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 3);
				Global_113386.f_20118[iParam0 /*43*/].f_39 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*iParam1);
				Global_113386.f_20118[iParam0 /*43*/].f_31 = __LIB_0__.func_265(*iParam1);
				Global_113386.f_20118[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(*iParam1);
				VEHICLE::GET_VEHICLE_MOD_COLOR_1(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				__LIB_6__.func_776(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_113386.f_20118[iParam0 /*43*/].f_1));
				VEHICLE::GET_VEHICLE_MOD_COLOR_2(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				__LIB_6__.func_776(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_113386.f_20118[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_454(var uParam0, var uParam1, var uParam2)//Position - 0x35E2A
{
	int iVar0;
	int iVar1;
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, 255);
				}
				else
				{
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar1 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (__LIB_6__.func_759(*uParam0, iVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (__LIB_0__.func_174(ENTITY::GET_ENTITY_MODEL(*uParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*uParam0, 24) != __LIB_0__.func_173(*uParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, __LIB_0__.func_173(*uParam0, ((*uParam1)[38] - 1)), false);
	}
	__LIB_0__.func_172(uParam0);
	if (__LIB_0__.func_266(*uParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*uParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
	}
	return 1;
}

void func_462(bool bParam0, bool bParam1)//Position - 0x364E6
{
	if (bParam0)
	{
		__LIB_0__.func_268(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_342(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_464(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x36578
{
	if (__LIB_0__.func_170())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		MISC::CLEAR_BIT(&(Global_100441.f_20), 2);
		MISC::SET_GAME_PAUSED(true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		Global_100437 = { Param0 };
		Global_100440 = fParam1;
		Global_100436 = 1;
		if (iParam2 == 1)
		{
			MISC::SET_BIT(&(Global_100441.f_20), 14);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_100441.f_20), 14);
		}
		if (iParam3 == 1)
		{
			MISC::SET_BIT(&(Global_100441.f_20), 24);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_100441.f_20), 24);
		}
		__LIB_0__.func_6(1);
	}
}

void func_481(bool bParam0)//Position - 0x368FC
{
	int iVar0;
	__LIB_6__.func_769();
	if (!__LIB_0__.func_134())
	{
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
		if (Global_94616 == Global_100478)
		{
			Global_113386.f_18574[iVar0 /*6*/].f_4++;
		}
		Global_94616 = Global_100478;
		if (bParam0)
		{
			__LIB_0__.func_152(iVar0, 1, 0);
			func_482(SCRIPT::GET_THIS_SCRIPT_NAME(), iVar0);
		}
		else
		{
			if (Global_112473[iVar0 /*10*/].f_9 == -1)
			{
			}
			else
			{
				__LIB_0__.func_56(&(Global_112473[iVar0 /*10*/].f_9));
			}
			func_168(iVar0, 1, 1, 0);
		}
		Global_112473[iVar0 /*10*/].f_6 = 1;
	}
}

void func_482(char* sParam0, int iParam1)//Position - 0x369CC
{
	if (Global_100441 != 12)
	{
		if (__LIB_0__.func_171(sParam0, 6, iParam1))
		{
			Global_100441.f_1 = iParam1;
		}
	}
}

