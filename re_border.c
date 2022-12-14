#region Local Var
	var uLocal_0 = 0;
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
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	struct<3> Local_46 = { 0, 0, 0 } ;
	struct<3> Local_47 = { 0, 0, 0 } ;
	struct<3> Local_48 = { 0, 0, 0 } ;
	struct<3> Local_49 = { 0, 0, 0 } ;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57[3] = { 0, 0, 0 };
	int iLocal_58[3] = { 0, 0, 0 };
	int iLocal_59[3] = { 0, 0, 0 };
	int iLocal_60[3] = { 0, 0, 0 };
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63[3] = { 0, 0, 0 };
	int iLocal_64[3] = { 0, 0, 0 };
	var uLocal_65[3] = { 0, 0, 0 };
	int iLocal_66 = 0;
	char* sLocal_67 = NULL;
	var uLocal_68 = 16;
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
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	struct<2> Local_233 = { 0, 5 } ;
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
	var uLocal_249 = 5;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	Local_47 = { 928.0903f, 1733.12f, 165.1067f };
	Local_48 = { 2374.21f, 316.6781f, 180.4001f };
	Local_49 = { -804.8174f, 4051.37f, 159.6384f };
	Local_46 = { ScriptParam_233.f_1[0 /*3*/] };
	func_146();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_134();
	}
	if (func_133())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_39__::func_345(Local_46, 29, bLocal_50, 0, 0))
	{
		__LIB_39__::func_334(29);
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
			Var0 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
			PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Var0.f_0 - 2000f), (Var0.f_1 - 2000f), (Var0.f_0 + 2000f), (Var0.f_1 + 2000f));
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (!__LIB_39__::func_333())
		{
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				if (!__LIB_39__::func_333())
				{
					if (__LIB_39__::func_340())
					{
						func_134();
					}
				}
				RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_BP", 0);
				switch (iLocal_45)
				{
					case 0:
						if (func_72())
						{
							SYSTEM::SETTIMERA(15000);
							iLocal_51 = 1;
							iLocal_45 = 1;
						}
						break;
					case 1:
						if (!__LIB_39__::func_333())
						{
							__LIB_39__::func_336(1);
						}
						break;
				}
			}
			else
			{
				func_134();
			}
		}
		else
		{
			func_58();
			func_57();
			if (func_56())
			{
				func_34();
				if (func_33())
				{
					func_2();
				}
			}
			else if (iLocal_62 < 3)
			{
				func_2();
			}
			else
			{
				func_1();
			}
		}
	}
}

void func_1()//Position - 0x1EE
{
	func_134();
}

void func_2()//Position - 0x1FA
{
	__LIB_0__::func_109();
	__LIB_14__::func_557();
	__LIB_39__::func_382(29, bLocal_50);
	func_134();
}

int func_33()//Position - 0x159C
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(iLocal_63[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_34()//Position - 0x15CC
{
	int iVar0;
	if (!__LIB_0__::func_75())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!PED::IS_PED_INJURED(iLocal_63[iVar0]))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_63[iVar0], false)) < 400f)
				{
					if (!iLocal_52)
					{
						if (iLocal_61 == 2)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 2f)
							{
								iLocal_52 = 1;
								iLocal_61 = 3;
							}
							else if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 1f)
							{
								iLocal_52 = 1;
								iLocal_61 = 3;
							}
						}
						if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_63[iVar0])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_63[iVar0]))
						{
							iLocal_52 = 1;
							iLocal_55 = 1;
							iLocal_54 = 1;
							iLocal_61 = 3;
						}
					}
					if (!iLocal_52 || iLocal_61 < 3)
					{
						if (SYSTEM::TIMERA() > 5000)
						{
							if (!TASK::IS_PED_IN_WRITHE(iLocal_63[iVar0]))
							{
								__LIB_0__::func_221(&uLocal_68, 1);
								__LIB_0__::func_222(&uLocal_68, 1, iLocal_63[iVar0], "BorderPatrol", 0, 1);
								if (iLocal_61 == 0)
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (__LIB_0__::func_680())
										{
											__LIB_0__::func_787(&uLocal_68, "REBORAU", "REBOR_INS1", 4, 0, 0, 0);
										}
										else
										{
											__LIB_0__::func_787(&uLocal_68, "REBORAU", "REBOR_INS2", 4, 0, 0, 0);
										}
										iLocal_61++;
									}
									else
									{
										__LIB_0__::func_787(&uLocal_68, "REBORAU", "REBOR_INS2", 4, 0, 0, 0);
									}
								}
								else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									__LIB_0__::func_787(&uLocal_68, "REBORAU", "REBOR_STOP", 4, 0, 0, 0);
									iLocal_61++;
								}
								else
								{
									__LIB_0__::func_787(&uLocal_68, "REBORAU", "REBOR_PULL", 4, 0, 0, 0);
								}
								iLocal_53 = 1;
								iLocal_61++;
								if (iLocal_61 >= 3)
								{
									iLocal_52 = 1;
								}
								SYSTEM::SETTIMERA(0);
							}
						}
					}
					else if (!iLocal_54)
					{
						if (!__LIB_0__::func_75() && !TASK::IS_PED_IN_WRITHE(iLocal_63[iVar0]))
						{
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_66, joaat("PLAYER"));
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_63[iVar0], 2, true);
							__LIB_0__::func_221(&uLocal_68, 1);
							__LIB_0__::func_222(&uLocal_68, 1, iLocal_63[iVar0], "BorderPatrol", 0, 1);
							if (__LIB_0__::func_683() == 0)
							{
								__LIB_0__::func_787(&uLocal_68, "REBORAU", "REBOR_ATTM", 4, 0, 0, 0);
							}
							else if (__LIB_0__::func_683() == 1)
							{
								__LIB_0__::func_787(&uLocal_68, "REBORAU", "REBOR_ATTF", 4, 0, 0, 0);
							}
							else if (__LIB_0__::func_683() == 2)
							{
								__LIB_0__::func_787(&uLocal_68, "REBORAU", "REBOR_ATTT", 4, 0, 0, 0);
							}
							iLocal_54 = 1;
							iLocal_52 = 1;
							SYSTEM::SETTIMERA(0);
						}
					}
					else if (!__LIB_0__::func_75())
					{
						if (!iLocal_56)
						{
							if (__LIB_0__::func_683() == 0)
							{
								__LIB_0__::func_787(&uLocal_68, "REBORAU", "REBOR_REACTM", 4, 0, 0, 0);
							}
							else if (__LIB_0__::func_683() == 1)
							{
								__LIB_0__::func_787(&uLocal_68, "REBORAU", "REBOR_REACTF", 4, 0, 0, 0);
							}
							else if (__LIB_0__::func_683() == 2)
							{
								__LIB_0__::func_787(&uLocal_68, "REBORAU", "REBOR_REACTT", 4, 0, 0, 0);
							}
							iLocal_56 = 1;
						}
						if (SYSTEM::TIMERA() > 5000 && !TASK::IS_PED_IN_WRITHE(iLocal_63[iVar0]))
						{
							__LIB_0__::func_221(&uLocal_68, 1);
							__LIB_0__::func_222(&uLocal_68, 1, iLocal_63[iVar0], "BorderPatrol", 0, 1);
							if (__LIB_0__::func_683() == 0)
							{
								__LIB_0__::func_787(&uLocal_68, "REBORAU", "REBOR_CONM", 4, 0, 0, 0);
							}
							else if (__LIB_0__::func_683() == 1)
							{
								__LIB_0__::func_787(&uLocal_68, "REBORAU", "REBOR_CONF", 4, 0, 0, 0);
							}
							else if (__LIB_0__::func_683() == 2)
							{
								__LIB_0__::func_787(&uLocal_68, "REBORAU", "REBOR_COTT", 4, 0, 0, 0);
							}
							SYSTEM::SETTIMERA(0);
						}
					}
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_56()//Position - 0x21AB
{
	int iVar0;
	iLocal_62 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(iLocal_63[iVar0]))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_63[iVar0], false)) < 62500f)
			{
				return 1;
			}
			else
			{
				iLocal_62++;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_57()//Position - 0x2205
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(iLocal_63[iVar0]))
		{
			if (!iLocal_55)
			{
				if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_63[iVar0])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_63[iVar0]))
				{
					iLocal_52 = 1;
					iLocal_55 = 1;
					iLocal_54 = 1;
					iLocal_61 = 3;
				}
			}
			if (iLocal_54 || iLocal_55)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_63[iVar0], false))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !iLocal_57[iVar0])
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_64[iVar0], false))
						{
							TASK::TASK_VEHICLE_MISSION(iLocal_63[iVar0], iLocal_64[iVar0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0 + 10, 30f, 786469, 10f, 5f, true);
						}
						if (!iLocal_55)
						{
							SYSTEM::WAIT(MISC::GET_RANDOM_INT_IN_RANGE(400, 800));
						}
						else
						{
							SYSTEM::WAIT(0);
						}
						if (!PED::IS_PED_INJURED(iLocal_63[iVar0]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_63[iVar0], false))
							{
								TASK::TASK_DRIVE_BY(iLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 1000f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								PED::SET_PED_KEEP_TASK(iLocal_63[iVar0], true);
							}
						}
						iLocal_58[iVar0] = 0;
						iLocal_57[iVar0] = 1;
					}
					else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !iLocal_58[iVar0])
					{
						if (!PED::IS_PED_INJURED(iLocal_63[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_64[iVar0], false))
						{
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_63[iVar0], iLocal_64[iVar0], PLAYER::PLAYER_PED_ID(), iVar0 + 10, 30f, 786469, 10f, 5f, true);
							if (!iLocal_55)
							{
								SYSTEM::WAIT(MISC::GET_RANDOM_INT_IN_RANGE(400, 800));
							}
							else
							{
								SYSTEM::WAIT(0);
							}
							if (!PED::IS_PED_INJURED(iLocal_63[iVar0]))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_63[iVar0], false))
								{
									TASK::TASK_DRIVE_BY(iLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 1000f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
									PED::SET_PED_KEEP_TASK(iLocal_63[iVar0], true);
								}
							}
							iLocal_57[iVar0] = 0;
							iLocal_58[iVar0] = 1;
						}
					}
				}
				else if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_63[iVar0], false))
				{
					TASK::TASK_COMBAT_PED(iLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_KEEP_TASK(iLocal_63[iVar0], true);
				}
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_63[iVar0], false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !iLocal_59[iVar0])
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_63[iVar0], joaat("SCRIPT_TASK_VEHICLE_CHASE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_63[iVar0], joaat("SCRIPT_TASK_VEHICLE_CHASE")) != 0)
					{
						TASK::CLEAR_PED_TASKS(iLocal_63[iVar0]);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_64[iVar0], false))
						{
							TASK::TASK_VEHICLE_MISSION(iLocal_63[iVar0], iLocal_64[iVar0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0 + 10, 30f, 786469, 10f, 5f, true);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
						}
						iLocal_60[iVar0] = 0;
						iLocal_59[iVar0] = 1;
					}
				}
				else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !iLocal_60[iVar0])
				{
					if ((!PED::IS_PED_INJURED(iLocal_63[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_DEAD(iLocal_64[iVar0], false))
					{
						TASK::CLEAR_PED_TASKS(iLocal_63[iVar0]);
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_63[iVar0], iLocal_64[iVar0], PLAYER::PLAYER_PED_ID(), iVar0 + 10, 30f, 786469, 10f, 5f, true);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
						iLocal_59[iVar0] = 0;
						iLocal_60[iVar0] = 1;
					}
				}
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_63[iVar0], false))
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), 1f, 0f, 0f, 2f, -1, 0.1f, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_63[iVar0]))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(iLocal_63[iVar0]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_63[iVar0], false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_63[iVar0], 0, 0);
					}
					if (!PED::IS_PED_IN_COMBAT(iLocal_63[iVar0], 0))
					{
						TASK::TASK_COMBAT_PED(iLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_63[iVar0], false))
			{
				if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 13f)
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), PED::GET_VEHICLE_PED_IS_IN(iLocal_63[iVar0], false)))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_63[iVar0], 3);
					}
					else
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_63[iVar0], 1);
					}
				}
				else
				{
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_63[iVar0], 1);
				}
			}
			if (func_133())
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[iVar0]))
		{
			iLocal_55 = 1;
			iLocal_54 = 1;
		}
		iVar0++;
	}
}

void func_58()//Position - 0x26DF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(iLocal_63[iVar0]))
		{
			if (iLocal_53 || iLocal_52)
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_65[iVar0]))
				{
					uLocal_65[iVar0] = __LIB_0__::func_666(iLocal_63[iVar0], 1, 145);
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uLocal_65[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_65[iVar0]));
		}
		iVar0++;
	}
}

int func_72()//Position - 0x2DA8
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar4 = joaat("sanchez");
	iVar5 = joaat("blazer");
	iVar6 = joaat("A_M_M_Hillbilly_02");
	STREAMING::REQUEST_MODEL(iVar6);
	STREAMING::REQUEST_MODEL(iVar4);
	STREAMING::REQUEST_MODEL(iVar5);
	if ((STREAMING::HAS_MODEL_LOADED(iVar6) && STREAMING::HAS_MODEL_LOADED(iVar4)) && STREAMING::HAS_MODEL_LOADED(iVar5))
	{
		if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_64[0], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_64[1], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_64[2], false))
		{
			return 1;
		}
		else
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, -25f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1, &Var0, &fVar1, 1, 3f, 0f);
				if (!CAM::IS_SPHERE_VISIBLE(Var0, 5f))
				{
					PED::ADD_RELATIONSHIP_GROUP("re_border badGuys", &iLocal_66);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_66, joaat("PLAYER"));
					iVar2 = 0;
					while (iVar2 < 3)
					{
						Var0.f_0 = (Var0.f_0 + SYSTEM::TO_FLOAT(iVar2));
						Var0.f_1 = (Var0.f_1 + SYSTEM::TO_FLOAT(iVar2));
						iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
						if (iVar3 > 1)
						{
							iLocal_64[iVar2] = VEHICLE::CREATE_VEHICLE(iVar4, Var0, fVar1, true, true, false);
						}
						else
						{
							iLocal_64[iVar2] = VEHICLE::CREATE_VEHICLE(iVar5, Var0, fVar1, true, true, false);
						}
						iLocal_63[iVar2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_64[iVar2], 22, iVar6, -1, true, true);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_63[iVar2], PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
						PED::SET_PED_KEEP_TASK(iLocal_63[iVar2], true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_63[iVar2], true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_63[iVar2], iLocal_66);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_63[iVar2], joaat("WEAPON_SAWNOFFSHOTGUN"), -1, true, true);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_64[iVar2], ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()));
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_63[iVar2], 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_63[iVar2], 50, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_63[iVar2], 2, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_63[iVar2], 1, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_63[iVar2], 52, true);
						PED::SET_PED_ACCURACY(iLocal_63[iVar2], 5);
						PED::SET_PED_FIRING_PATTERN(iLocal_63[iVar2], joaat("FIRING_PATTERN_SINGLE_SHOT"));
						PED::SET_PED_SHOOT_RATE(iLocal_63[iVar2], MISC::GET_RANDOM_INT_IN_RANGE(50, 100));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_63[iVar2], 1);
						PED::SET_PED_CONFIG_FLAG(iLocal_63[iVar2], 42, true);
						PED::SET_PED_HELMET(iLocal_63[iVar2], false);
						PED::SET_PED_MONEY(iLocal_63[iVar2], 233);
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_63[iVar2], "A_M_M_HILLBILLY_02_WHITE_MINI_04");
						AUDIO::STOP_PED_SPEAKING(iLocal_63[iVar2], true);
						iVar2++;
					}
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_64[0], 0);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_64[1], 1);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_64[2], 2);
				}
			}
			switch (__LIB_0__::func_683())
			{
				case 0:
					sLocal_67 = "MICHAEL";
					break;
				case 1:
					sLocal_67 = "FRANKLIN";
					break;
				case 2:
					sLocal_67 = "TREVOR";
					break;
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			__LIB_0__::func_222(&uLocal_68, 0, PLAYER::PLAYER_PED_ID(), sLocal_67, 0, 1);
			__LIB_0__::func_222(&uLocal_68, 1, iLocal_63[0], "BorderPatrol", 0, 1);
		}
	}
	return 0;
}

int func_133()//Position - 0x6373
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				if (((((PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("ambulance"))) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("firetruk"))) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())) || Global_112433 == 1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_134()//Position - 0x6407
{
	int iVar0;
	if (iLocal_51)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!PED::IS_PED_INJURED(iLocal_63[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_63[iVar0], true);
			}
			iVar0++;
		}
	}
	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		if (__LIB_39__::func_333())
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		}
	}
	__LIB_39__::func_344(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

Vector3 func_146()//Position - 0x6C57
{
	float fVar0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_47, true);
		bLocal_50 = true;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_48, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_48, true);
			bLocal_50 = 2;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_49, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_49, true);
			bLocal_50 = 3;
		}
		if (bLocal_50 == 1)
		{
			return Local_47;
		}
		else if (bLocal_50 == 2)
		{
			return Local_48;
		}
		else if (bLocal_50 == 3)
		{
			return Local_49;
		}
	}
	return 0f, 0f, 0f;
}

