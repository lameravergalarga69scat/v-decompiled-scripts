#region Local Var
	int iLocal_0 = 0;
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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	struct<3> Local_46 = { 0, 0, 0 } ;
	struct<3> Local_47 = { 0, 0, 0 } ;
	struct<3> Local_48[6];
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
	float fLocal_51 = 0f;
	float fLocal_52[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_64[2] = { 0, 0 };
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 16;
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
	var uLocal_241 = 0;
	struct<2> Local_242 = { 0, 5 } ;
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
	var uLocal_258 = 5;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	iLocal_0 = 3;
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_47 = { 2194.1345f, 5593.2783f, 53.703827f };
	Local_49 = { 2203.2703f, 5549.918f, 93.09485f };
	Local_50 = { 2199.6294f, 5640.293f, 52.23926f };
	fLocal_51 = 81.5f;
	Local_46 = { ScriptParam_242.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_142();
	}
	if (__LIB_42__.func_567(Local_46, -1, 0, 0, 0))
	{
		__LIB_35__.func_176(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_60) || (__LIB_35__.func_175() && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_46, 500f, 500f, 500f, false, true, 0)))
		{
			if (!__LIB_35__.func_175())
			{
				if (__LIB_40__.func_735())
				{
					func_142();
				}
			}
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_DS", 0);
			switch (iLocal_44)
			{
				case 0:
					if (__LIB_41__.func_467())
					{
						func_142();
					}
					func_96();
					iLocal_54 = 1;
					break;
				case 1:
					func_24();
					break;
				case 2:
					func_1();
					break;
			}
		}
		else
		{
			func_142();
		}
	}
}

void func_1()//Position - 0x18C
{
	if (iLocal_54 && !iLocal_53)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("RE20_FAIL");
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_23(0);
		}
		iLocal_71 = 0;
		while (iLocal_71 < 6)
		{
			if (!PED::IS_PED_INJURED(iLocal_63[iLocal_71]))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_68[iLocal_71]))
				{
					HUD::REMOVE_BLIP(&(uLocal_68[iLocal_71]));
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_63[iLocal_71]));
			}
			iLocal_71++;
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		if (bLocal_55)
		{
			__LIB_39__.func_549(18, 7, 0);
		}
		else
		{
			__LIB_39__.func_549(18, 1, 0);
		}
		iLocal_53 = 1;
	}
	if (SYSTEM::VDIST(__LIB_0__.func_85(PLAYER::PLAYER_ID()), Local_46) > 150f)
	{
		func_142();
	}
}

void func_23(int iParam0)//Position - 0x850
{
	Global_113386.f_24995.f_7 = iParam0;
}

void func_24()//Position - 0x863
{
	func_71();
	func_70();
	switch (iLocal_45)
	{
		case 0:
			if (OBJECT::DOES_PICKUP_EXIST(iLocal_65))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_66))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_49, Local_50, fLocal_51, false, true, 0))
					{
						func_67();
						if (!bLocal_61)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("RE20_FADE_RADIO_OUT");
							iLocal_76 = MISC::GET_GAME_TIMER();
							bLocal_61 = true;
						}
						if (!__LIB_35__.func_175())
						{
							__LIB_40__.func_733(1);
						}
					}
				}
			}
			if (bLocal_61)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_76) > 6000)
				{
					if (!iLocal_62)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("RE20_START");
						iLocal_62 = 1;
					}
				}
			}
			break;
		case 1:
			if ((((PED::IS_PED_INJURED(iLocal_63[0]) && PED::IS_PED_INJURED(iLocal_63[1])) && PED::IS_PED_INJURED(iLocal_63[2])) && PED::IS_PED_INJURED(iLocal_63[3])) && PED::IS_PED_INJURED(iLocal_63[4]))
			{
				func_25();
			}
			else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_46, 100f, 100f, 100f, false, true, 0))
			{
				func_25();
			}
			break;
	}
	iLocal_71 = 0;
	while (iLocal_71 < 6)
	{
		if (PED::IS_PED_INJURED(iLocal_63[iLocal_71]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_68[iLocal_71]))
			{
				HUD::REMOVE_BLIP(&(uLocal_68[iLocal_71]));
			}
		}
		iLocal_71++;
	}
}

void func_25()//Position - 0x9A9
{
	__LIB_0__.func_151("DRUG_BLIP_END" /* GXT: Try coming back in a week or so to see if they have made more takings. */, -1);
	AUDIO::TRIGGER_MUSIC_EVENT("RE20_END");
	func_23(1);
	while (__LIB_0__.func_75())
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_0__.func_109())
	{
		SYSTEM::WAIT(0);
	}
	bLocal_55 = true;
	__LIB_40__.func_739(-1, 0);
	__LIB_20__.func_174();
	iLocal_44 = 2;
}

void func_67()//Position - 0x22F0
{
	if (HUD::DOES_BLIP_EXIST(iLocal_66))
	{
		HUD::REMOVE_BLIP(&iLocal_66);
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_65))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_67))
			{
				iLocal_67 = __LIB_11__.func_324(iLocal_65);
			}
		}
	}
}

void func_70()//Position - 0x2371
{
	if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_65))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_66))
		{
			HUD::REMOVE_BLIP(&iLocal_66);
		}
		SYSTEM::SETTIMERA(0);
		iLocal_60 = 1;
		iLocal_73 = 2;
		iLocal_45 = 1;
	}
}

void func_71()//Position - 0x239F
{
	int iVar0;
	int iVar1;
	iLocal_71 = 0;
	while (iLocal_71 < 6)
	{
		if (PED::IS_PED_INJURED(iLocal_63[iLocal_71]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_68[iLocal_71]))
			{
				HUD::REMOVE_BLIP(&(uLocal_68[iLocal_71]));
			}
			iLocal_73 = 2;
		}
		else
		{
			if ((func_95() && iLocal_73 != 2) || (iLocal_73 == 1 && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())))
			{
				__LIB_6__.func_771();
				SYSTEM::WAIT(0);
				if (func_92())
				{
					__LIB_0__.func_203(&uLocal_77, 4, iLocal_63[iLocal_71], "DRUGFARMGOON", 0, 1);
					__LIB_37__.func_799(&uLocal_77, "RECSHAU", "RECSH_BACK", 4, 0, 0, 0);
				}
				iLocal_73 = 2;
			}
			switch (iLocal_73)
			{
				case 0:
					if (!iLocal_56[iLocal_71])
					{
						if ((ENTITY::IS_ENTITY_AT_ENTITY(iLocal_63[iLocal_71], PLAYER::PLAYER_PED_ID(), 15f, 15f, 40f, false, true, 0) && PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_63[iLocal_71])) || PED::CAN_PED_SEE_HATED_PED(iLocal_63[iLocal_71], PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_49, Local_50, fLocal_51, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 2205.9185f, 5633.4546f, 55.7472f, 15f, 15f, 40f, false, true, 0))
							{
								if (!__LIB_0__.func_75())
								{
									__LIB_0__.func_203(&uLocal_77, 3, iLocal_63[iLocal_71], "SalvadorGang", 0, 1);
									__LIB_37__.func_799(&uLocal_77, "RECSHAU", "RECSH_GOAW", 4, 0, 0, 0);
								}
								iVar0 = 0;
								while (iVar0 < iLocal_63)
								{
									PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_63[iLocal_71]);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_70);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, false, 4f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
									TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_70);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_63[iVar0], iLocal_70);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_70);
									PED::SET_PED_USING_ACTION_MODE(iLocal_63[iVar0], true, -1, 0);
									iVar0++;
								}
								iLocal_56[iLocal_71] = 1;
								iLocal_76 = MISC::GET_GAME_TIMER();
								iLocal_73 = 1;
							}
						}
					}
					break;
				case 1:
					iVar1 = 0;
					while (iVar1 < iLocal_63)
					{
						if (!iLocal_56[iVar1])
						{
							PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_63[iLocal_71]);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_70);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, false, 4f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_70);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_63[iVar1], iLocal_70);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_70);
							PED::SET_PED_USING_ACTION_MODE(iLocal_63[iVar1], true, -1, 0);
							iLocal_56[iVar1] = 1;
						}
						iVar1++;
					}
					if (!PED::IS_PED_INJURED(iLocal_63[iLocal_71]))
					{
						if (!PED::IS_PED_FACING_PED(iLocal_63[iLocal_71], PLAYER::PLAYER_PED_ID(), 50f))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_63[iLocal_71], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							PED::SET_PED_KEEP_TASK(iLocal_63[iLocal_71], true);
						}
					}
					if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
					{
						if (iLocal_74 == 0)
						{
							iLocal_74 = MISC::GET_GAME_TIMER();
						}
						else
						{
							iLocal_75 = MISC::GET_GAME_TIMER();
						}
					}
					else
					{
						iLocal_75 = 0;
						iLocal_74 = 0;
					}
					if (iLocal_56[iLocal_71] && !iLocal_57)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_76) > 6000)
						{
							if (!__LIB_0__.func_75())
							{
								__LIB_0__.func_203(&uLocal_77, 3, iLocal_63[iLocal_71], "SalvadorGang", 0, 1);
								__LIB_37__.func_799(&uLocal_77, "RECSHAU", "RECSH_GOAW", 4, 0, 0, 0);
								iLocal_57 = 1;
							}
						}
					}
					if (iLocal_56[iLocal_71] && !iLocal_58)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_76) > 12000)
						{
							if (!__LIB_0__.func_75())
							{
								__LIB_0__.func_203(&uLocal_77, 3, iLocal_63[iLocal_71], "SalvadorGang", 0, 1);
								__LIB_37__.func_799(&uLocal_77, "RECSHAU", "RECSH_GOAW", 4, 0, 0, 0);
								iLocal_58 = 1;
							}
						}
					}
					if (iLocal_56[iLocal_71])
					{
						if (((MISC::GET_GAME_TIMER() - iLocal_76) > 18000 || (iLocal_75 - iLocal_74) > 5000) || PED::IS_PED_IN_COMBAT(iLocal_63[iLocal_71], 0))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_49, Local_50, fLocal_51, false, true, 0) || ENTITY::IS_ENTITY_AT_ENTITY(iLocal_63[iLocal_71], PLAYER::PLAYER_PED_ID(), 15f, 15f, 5f, false, true, 0))
							{
								__LIB_6__.func_771();
								SYSTEM::WAIT(0);
								if (func_92())
								{
									__LIB_0__.func_203(&uLocal_77, 4, iLocal_63[iLocal_71], "DRUGFARMGOON", 0, 1);
									__LIB_37__.func_799(&uLocal_77, "RECSHAU", "RECSH_BACK", 4, 0, 0, 0);
								}
								else
								{
									__LIB_0__.func_203(&uLocal_77, 3, iLocal_63[iLocal_71], "SalvadorGang", 0, 1);
									__LIB_37__.func_799(&uLocal_77, "RECSHAU", "RECSH_FIRE", 4, 0, 0, 0);
								}
								iLocal_73 = 2;
							}
							else
							{
								if (!PED::IS_PED_IN_COMBAT(iLocal_63[iLocal_71], 0))
								{
									TASK::CLEAR_PED_TASKS(iLocal_63[iLocal_71]);
									if (!PED::IS_PED_INJURED(iLocal_63[0]))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_70);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2205.769f, 5631.985f, 55.553f, 1f, -1, 0.25f, 0, 40000f);
										TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2214.833f, 5635.6274f, 55.0029f, 8000);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2222.2588f, 5613.22f, 53.5576f, 1f, -1, 0.25f, 0, 40000f);
										TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2221.9507f, 5593.6255f, 52.9483f, 10000);
										TASK::SET_SEQUENCE_TO_REPEAT(iLocal_70, true);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_70);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_63[0], iLocal_70);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_70);
										PED::SET_PED_USING_ACTION_MODE(iLocal_63[0], false, -1, 0);
									}
									if (!PED::IS_PED_INJURED(iLocal_63[1]))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_70);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2210.5842f, 5580.6836f, 52.8132f, 1f, -1, 0.25f, 0, 40000f);
										TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2205.466f, 5583.631f, 52.8682f, 8000);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2203.0386f, 5567.4077f, 52.7996f, 1f, -1, 0.25f, 0, 40000f);
										TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2199.4983f, 5560.702f, 52.8606f, 10000);
										TASK::SET_SEQUENCE_TO_REPEAT(iLocal_70, true);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_70);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_63[1], iLocal_70);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_70);
										PED::SET_PED_USING_ACTION_MODE(iLocal_63[1], false, -1, 0);
									}
									if (!PED::IS_PED_INJURED(iLocal_63[2]))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_70);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2199.6792f, 5590.673f, 52.7784f, 1f, -1, 0.25f, 0, 40000f);
										TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2210.6458f, 5593.5757f, 52.8312f, 8000);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2232.7615f, 5593.5635f, 53.0542f, 1f, -1, 0.25f, 0, 40000f);
										TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2237.9163f, 5599.5894f, 53.2311f, 12000);
										TASK::SET_SEQUENCE_TO_REPEAT(iLocal_70, true);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_70);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_63[2], iLocal_70);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_70);
										PED::SET_PED_USING_ACTION_MODE(iLocal_63[2], false, -1, 0);
									}
									if (!PED::IS_PED_INJURED(iLocal_63[3]) && !PED::IS_PED_INJURED(iLocal_63[4]))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_70);
										TASK::TASK_GO_TO_ENTITY(0, iLocal_63[4], -1, 2f, 1f, 2f, 0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_63[4], 0);
										TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_70);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_63[3], iLocal_70);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_70);
										PED::SET_PED_USING_ACTION_MODE(iLocal_63[3], false, -1, 0);
									}
									if (!PED::IS_PED_INJURED(iLocal_63[4]))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_70);
										TASK::TASK_GO_TO_ENTITY(0, iLocal_63[3], -1, 2f, 1f, 2f, 0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_63[3], 0);
										TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_70);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_63[4], iLocal_70);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_70);
										PED::SET_PED_USING_ACTION_MODE(iLocal_63[4], false, -1, 0);
									}
									if (!PED::IS_PED_INJURED(iLocal_63[5]))
									{
										TASK::TASK_GUARD_CURRENT_POSITION(iLocal_63[5], 0f, 3f, true);
										PED::SET_PED_USING_ACTION_MODE(iLocal_63[5], false, -1, 0);
									}
								}
								iVar1 = 0;
								while (iVar1 < iLocal_56)
								{
									iLocal_56[iVar1] = 0;
									iVar1++;
								}
								iLocal_56[iLocal_71] = 0;
								iLocal_73 = 0;
							}
						}
					}
					break;
				case 2:
					func_67();
					iLocal_71 = 0;
					while (iLocal_71 < 6)
					{
						if (!PED::IS_PED_INJURED(iLocal_63[iLocal_71]))
						{
							if (!PED::IS_PED_IN_COMBAT(iLocal_63[iLocal_71], 0))
							{
								PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_63[iLocal_71]);
								TASK::TASK_COMBAT_PED(iLocal_63[iLocal_71], PLAYER::PLAYER_PED_ID(), 0, 16);
								PED::SET_PED_KEEP_TASK(iLocal_63[iLocal_71], true);
								if (!HUD::DOES_BLIP_EXIST(uLocal_68[iLocal_71]))
								{
									uLocal_68[iLocal_71] = __LIB_6__.func_850(iLocal_63[iLocal_71], 1, 145);
								}
							}
						}
						if (!iLocal_59)
						{
							if (!__LIB_0__.func_75())
							{
								__LIB_0__.func_203(&uLocal_77, 3, iLocal_63[iLocal_71], "SalvadorGang", 0, 1);
								__LIB_37__.func_799(&uLocal_77, "RECSHAU", "RECSH_STASH", 4, 0, 0, 0);
								iLocal_59 = 1;
							}
						}
						iLocal_71++;
					}
					break;
				}
		}
		iLocal_71++;
	}
}

bool func_92()//Position - 0x34E0
{
	return Global_113386.f_24995.f_7;
}

int func_95()//Position - 0x3522
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_64)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_64[iVar0], false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_64[iVar0], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_63)
	{
		if (!PED::IS_PED_INJURED(iLocal_63[iVar0]))
		{
			if (PED::CAN_PED_SEE_HATED_PED(iLocal_63[iVar0], PLAYER::PLAYER_PED_ID()))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_63[iVar0]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_63[iVar0]))
				{
					return 1;
				}
			}
			if ((((((MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_63[iVar0], true), 5f, true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), true)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63[iVar0])) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_63[iVar0], true) - Vector(15f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(iLocal_63[iVar0], true) + Vector(15f, 15f, 15f), joaat("WEAPON_SMOKEGRENADE"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_63[iVar0], true) - Vector(15f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(iLocal_63[iVar0], true) + Vector(15f, 15f, 15f), joaat("WEAPON_GRENADE"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_63[iVar0], true) - Vector(15f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(iLocal_63[iVar0], true) + Vector(15f, 15f, 15f), joaat("WEAPON_GRENADELAUNCHER"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_63[iVar0], true) - Vector(15f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(iLocal_63[iVar0], true) + Vector(15f, 15f, 15f), joaat("WEAPON_STICKYBOMB"), true))
			{
				return 1;
			}
		}
		iVar0++;
	}
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_49, Local_50, fLocal_51))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_49, Local_50, fLocal_51, false, true, 0))
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 2202.4976f, 5603.4243f, 52.7476f, 20f, 20f, 20f, false, true, 0))
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 15f)
		{
			return 1;
		}
	}
	return 0;
}

void func_96()//Position - 0x3795
{
	int iVar0;
	STREAMING::REQUEST_MODEL(joaat("G_M_Y_SalvaGoon_01"));
	STREAMING::REQUEST_MODEL(joaat("bobcatxl"));
	STREAMING::REQUEST_MODEL(joaat("prop_cash_case_01"));
	if ((STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_SalvaGoon_01")) && STREAMING::HAS_MODEL_LOADED(joaat("bobcatxl"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cash_case_01")))
	{
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_46 - Vector(20f, 50f, 50f), Local_46 + Vector(20f, 50f, 50f), false, true, true, true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bobcatxl"), true);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		iLocal_64[0] = VEHICLE::CREATE_VEHICLE(joaat("bobcatxl"), 2209.1704f, 5572.8975f, 52.7565f, 255.5161f, true, true, false);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_64[0], true, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_64[0], 5f);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_64[0], 1, true);
		iLocal_64[1] = VEHICLE::CREATE_VEHICLE(joaat("bobcatxl"), 2195.473f, 5607.5063f, 52.5648f, 168.4012f, true, true, false);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_64[1], true, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_64[1], 1, false);
		iVar0 = 0;
		MISC::SET_BIT(&iVar0, 1);
		iLocal_65 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_MONEY_CASE"), Local_47, -1.368082f, 0.230633f, 176.87486f, iVar0, MISC::GET_RANDOM_INT_IN_RANGE(40000, 100000), 2, true, joaat("prop_cash_case_01"));
		Local_48[0 /*3*/] = { 2205.769f, 5631.985f, 55.553f };
		fLocal_52[0] = 352.2203f;
		Local_48[1 /*3*/] = { 2210.5842f, 5580.6836f, 52.8132f };
		fLocal_52[1] = 300.5012f;
		Local_48[2 /*3*/] = { 2201.3025f, 5589.2793f, 52.9354f };
		fLocal_52[2] = 53.1602f;
		Local_48[3 /*3*/] = { 2202.5352f, 5613.3667f, 52.6781f };
		fLocal_52[3] = 70f;
		Local_48[4 /*3*/] = { 2200.764f, 5614.076f, 52.6852f };
		fLocal_52[4] = 53f;
		Local_48[5 /*3*/] = { 2193.714f, 5595.456f, 52.7615f };
		fLocal_52[5] = 338.8346f;
		PED::ADD_RELATIONSHIP_GROUP("DrugCult", &iLocal_69);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_69, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("COP"), iLocal_69);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_69, joaat("PLAYER"));
		iLocal_71 = 0;
		while (iLocal_71 < 6)
		{
			iLocal_63[iLocal_71] = PED::CREATE_PED(26, joaat("G_M_Y_SalvaGoon_01"), Local_48[iLocal_71 /*3*/], fLocal_52[iLocal_71], true, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_63[iLocal_71], true);
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_63[iLocal_71], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_63[iLocal_71], 50, true);
			PED::SET_PED_COMBAT_RANGE(iLocal_63[iLocal_71], 0);
			PED::SET_PED_ACCURACY(iLocal_63[iLocal_71], 13);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_63[iLocal_71], iLocal_69);
			iLocal_72 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (iLocal_72 == 0)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_63[iLocal_71], joaat("WEAPON_SAWNOFFSHOTGUN"), -1, true, true);
			}
			else if (iLocal_72 == 1)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_63[iLocal_71], joaat("WEAPON_MICROSMG"), -1, true, true);
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_63[iLocal_71], joaat("WEAPON_ASSAULTRIFLE"), -1, true, true);
			}
			PED::SET_PED_CONFIG_FLAG(iLocal_63[iLocal_71], 42, true);
			__LIB_0__.func_203(&uLocal_77, 3, iLocal_63[iLocal_71], "SalvadorGang", 0, 1);
			iLocal_71++;
		}
		if (!PED::IS_PED_INJURED(iLocal_63[0]))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_70);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2205.769f, 5631.985f, 55.553f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2214.833f, 5635.6274f, 55.0029f, 8000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2215.9932f, 5613.299f, 53.6157f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2221.9507f, 5593.6255f, 52.9483f, 10000);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_70, true);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_70);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_63[0], iLocal_70);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_70);
		}
		PED::SET_PED_NAME_DEBUG(iLocal_63[0], "piDrugCult[0]");
		if (!PED::IS_PED_INJURED(iLocal_63[1]))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_70);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2210.5842f, 5580.6836f, 52.8132f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2205.466f, 5583.631f, 52.8682f, 8000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2203.0386f, 5567.4077f, 52.7996f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2199.4983f, 5560.702f, 52.8606f, 10000);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_70, true);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_70);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_63[1], iLocal_70);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_70);
		}
		PED::SET_PED_NAME_DEBUG(iLocal_63[1], "piDrugCult[1]");
		if (!PED::IS_PED_INJURED(iLocal_63[2]))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_70);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2201.0137f, 5589.357f, 52.9573f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2210.6458f, 5593.5757f, 52.8312f, 8000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2229.6667f, 5598.368f, 53.2195f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2237.9163f, 5599.5894f, 53.2311f, 12000);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_70, true);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_70);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_63[2], iLocal_70);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_70);
		}
		PED::SET_PED_NAME_DEBUG(iLocal_63[2], "piDrugCult[2]");
		if (!PED::IS_PED_INJURED(iLocal_63[3]) && !PED::IS_PED_INJURED(iLocal_63[4]))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_70);
			TASK::TASK_GO_TO_ENTITY(0, iLocal_63[4], -1, 2f, 1f, 2f, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_63[4], 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_70);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_63[3], iLocal_70);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_70);
		}
		PED::SET_PED_NAME_DEBUG(iLocal_63[3], "piDrugCult[3]");
		if (!PED::IS_PED_INJURED(iLocal_63[4]))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_70);
			TASK::TASK_GO_TO_ENTITY(0, iLocal_63[3], -1, 2f, 1f, 2f, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_63[3], 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_70);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_63[4], iLocal_70);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_70);
		}
		PED::SET_PED_NAME_DEBUG(iLocal_63[4], "piDrugCult[4]");
		TASK::TASK_GUARD_CURRENT_POSITION(iLocal_63[5], 0f, 3f, true);
		PED::SET_PED_NAME_DEBUG(iLocal_63[5], "piDrugCult[5]");
		iLocal_66 = __LIB_0__.func_392(Local_47, 0);
		HUD::SET_BLIP_SPRITE(iLocal_66, 140);
		__LIB_0__.func_151("DRUG_BLIP_START" /* GXT: This is a Weed Farm - you can raid it and steal their takings. */, -1);
		iLocal_44 = 1;
	}
}

void func_142()//Position - 0x6EEA
{
	if (iLocal_54)
	{
		if (!iLocal_53)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("RE20_FAIL");
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_23(0);
			}
			iLocal_71 = 0;
			while (iLocal_71 < 6)
			{
				if (!PED::IS_PED_INJURED(iLocal_63[iLocal_71]))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_68[iLocal_71]))
					{
						HUD::REMOVE_BLIP(&(uLocal_68[iLocal_71]));
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_63[iLocal_71]));
				}
				iLocal_71++;
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			MISC::ENABLE_DISPATCH_SERVICE(3, true);
			if (bLocal_55)
			{
				__LIB_39__.func_549(18, 7, 0);
			}
			else
			{
				__LIB_39__.func_549(18, 1, 0);
			}
		}
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	}
	__LIB_41__.func_466(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

