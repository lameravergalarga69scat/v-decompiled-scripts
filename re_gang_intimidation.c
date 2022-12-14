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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	struct<3> Local_46 = { 0, 0, 0 } ;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 16;
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
	int iLocal_218[3] = { 0, 0, 0 };
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	struct<3> Local_221 = { 0, 0, 0 } ;
	struct<3> Local_222[3];
	float fLocal_223[3] = { 0f, 0f, 0f };
	struct<3> Local_224 = { 0, 0, 0 } ;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	var uLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	bool bLocal_235 = 0;
	struct<3> Local_236 = { 0, 0, 0 } ;
	struct<2> Local_237 = { 0, 5 } ;
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
	var uLocal_253 = 5;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	struct<6> Var1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	bool bVar7;
	int iVar8;
	struct<3> Var9;
	float fVar10;
	int iVar11[3];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
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
	iVar0 = 0;
	Var1 = 3;
	iVar2 = 0;
	iLocal_49 = 3;
	Local_221 = { ScriptParam_237.f_1[0 /*3*/] };
	Local_222[0 /*3*/] = { 1283.85f, -1622.501f, 53.2255f };
	fLocal_223[0] = 198.9926f;
	Local_222[1 /*3*/] = { 1286.6545f, -1627f, 53.225f };
	fLocal_223[1] = 22.3073f;
	Local_222[2 /*3*/] = { 1286.4518f, -1624.7819f, 53.225f };
	fLocal_223[2] = 49.6773f;
	Var9 = { 1298.3907f, -1580.895f, 50.7937f };
	fVar10 = 332.006f;
	Local_224 = { 1277.7249f, -1617.8971f, 53.2254f };
	if (__LIB_0__::func_680())
	{
		Var1[0] = joaat("G_M_Y_MexGoon_02");
		Var1[1] = joaat("G_M_Y_MexGoon_02");
		Var1[2] = joaat("G_M_Y_MexGoon_02");
		Var1.f_4 = joaat("A_F_Y_EastSA_03");
	}
	else
	{
		Var1[0] = joaat("G_M_Y_MexGoon_02");
		Var1[1] = joaat("G_M_Y_MexGoon_02");
		Var1[2] = joaat("G_M_Y_MexGoon_02");
		Var1.f_4 = joaat("A_F_Y_EastSA_03");
	}
	Var1.f_5 = "amb_sit_wall_m";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_152(Var1, iVar8, &iVar11, iVar12);
	}
	if (__LIB_39__::func_387(Local_221, -1, 0, 0, 0))
	{
		__LIB_39__::func_334(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_115(1, Var1);
	while (iVar0 != 7)
	{
		SYSTEM::WAIT(0);
		iVar13 = 600;
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			iVar13 = 0;
			iVar0 = 7;
			func_152(Var1, iVar8, &iVar11, iVar12);
		}
		if (!__LIB_39__::func_333())
		{
			if (__LIB_39__::func_340())
			{
				iVar13 = 0;
				iVar0 = 7;
				func_152(Var1, iVar8, &iVar11, iVar12);
			}
		}
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_GI", 0);
		switch (iVar0)
		{
			case 0:
				if (__LIB_39__::func_386())
				{
					iVar13 = 0;
					iVar0 = 7;
					func_152(Var1, iVar8, &iVar11, iVar12);
				}
				if (func_115(1, Var1))
				{
					iVar13 = 0;
					iVar0 = 2;
				}
				break;
			case 2:
				if (func_90(3))
				{
					__LIB_15__::func_806(1);
					iVar0 = 4;
				}
				else
				{
					iVar0 = 6;
				}
				iVar13 = 0;
				break;
			case 4:
				iVar13 = 0;
				PED::ADD_SCENARIO_BLOCKING_AREA(Local_224 - Vector(10f, 30f, 30f), Local_224 + Vector(10f, 30f, 30f), false, true, true, true);
				PED::SET_PED_NON_CREATION_AREA(Local_224 - Vector(50f, 50f, 50f), Local_224 + Vector(100f, 100f, 100f));
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_224 - Vector(15f, 15f, 15f), Local_224 + Vector(15f, 15f, 15f), false, true);
				MISC::SET_BIT(&uVar3, 4);
				MISC::SET_BIT(&uVar3, 1);
				MISC::SET_BIT(&uVar3, 5);
				PED::ADD_RELATIONSHIP_GROUP("GangOne", &iLocal_47);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_47, joaat("PLAYER"));
				iVar12 = PED::CREATE_PED(12, Var1.f_4, Var9, fVar10, true, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar12, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var1.f_4);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar12, iLocal_47);
				PED::SET_PED_CAN_BE_TARGETTED(iVar12, false);
				PED::SET_PED_COMPONENT_VARIATION(iVar12, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar12, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar12, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar12, 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar12, 8, 1, 1, 0);
				AUDIO::SET_AMBIENT_VOICE_NAME(iVar12, "G_F_Y_Vagos_01_LATINO_MINI_02");
				if (__LIB_0__::func_683() == 0)
				{
					__LIB_0__::func_222(&uLocal_53, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				}
				else if (__LIB_0__::func_683() == 1)
				{
					__LIB_0__::func_222(&uLocal_53, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				}
				else if (__LIB_0__::func_683() == 2)
				{
					__LIB_0__::func_222(&uLocal_53, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				}
				__LIB_0__::func_222(&uLocal_53, 3, iVar12, "REGIFemale", 0, 1);
				__LIB_0__::func_222(&uLocal_53, 4, iVar11[2], "REGIMale", 0, 1);
				TASK::TASK_PLAY_ANIM(iVar12, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 49, 0f, false, false, false);
				if (!HUD::DOES_BLIP_EXIST(iLocal_219))
				{
				}
				iVar14 = 0;
				while (iVar14 <= (iLocal_49 - 1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11[iVar14]))
					{
						iVar11[iVar14] = PED::CREATE_PED(12, Var1[iVar14], Local_222[iVar14 /*3*/], fLocal_223[iVar14], true, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar11[iVar14], true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var1[iVar14]);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar11[iVar14], iLocal_47);
						PED::SET_PED_CONFIG_FLAG(iVar11[iVar14], 42, true);
						WEAPON::GIVE_WEAPON_TO_PED(iVar11[iVar14], func_86(), -1, true, true);
						PED::SET_PED_COMBAT_MOVEMENT(iVar11[iVar14], 2);
						PED::SET_PED_COMBAT_RANGE(iVar11[iVar14], 0);
						PED::SET_PED_ACCURACY(iVar11[iVar14], 13);
						PED::SET_PED_MONEY(iVar11[iVar14], MISC::GET_RANDOM_INT_IN_RANGE(200, 500));
					}
					iVar14++;
				}
				WEAPON::GIVE_WEAPON_TO_PED(iVar11[0], joaat("WEAPON_SAWNOFFSHOTGUN"), 40, true, true);
				iLocal_50 = PED::CREATE_SYNCHRONIZED_SCENE(1283.205f, -1622.71f, 54.299f, 0f, 0f, 103.68f, 2);
				if (!PED::IS_PED_INJURED(iVar11[0]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(iVar11[0], iLocal_50, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_b", 4f, -4f, 17, 0, 1000f, 0);
				}
				if (!PED::IS_PED_INJURED(iVar11[1]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(iVar11[1], iLocal_50, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_c", 4f, -4f, 17, 0, 1000f, 0);
				}
				if (!PED::IS_PED_INJURED(iVar11[2]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(iVar11[2], iLocal_50, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_d", 4f, -4f, 17, 0, 1000f, 0);
				}
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_50, true);
				iLocal_228 = 1;
				iVar0 = 5;
				break;
			case 5:
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
				PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
				if (iVar2 < 3)
				{
					if ((((((((func_79(&iVar11, &uVar6, &uVar5, &uVar4, uVar3, bVar7, 1075838976, 0) || __LIB_39__::func_353(iVar11[0], 0)) || __LIB_39__::func_353(iVar11[1], 0)) || __LIB_39__::func_353(iVar11[2], 0)) || MISC::IS_BULLET_IN_AREA(Local_222[0 /*3*/], 40f, true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Local_222[0 /*3*/] - Vector(25f, 25f, 25f), Local_222[0 /*3*/] + Vector(25f, 25f, 25f), joaat("WEAPON_SMOKEGRENADE"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Local_222[0 /*3*/] - Vector(25f, 25f, 25f), Local_222[0 /*3*/] + Vector(25f, 25f, 25f), joaat("WEAPON_GRENADE"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Local_222[0 /*3*/] - Vector(25f, 25f, 25f), Local_222[0 /*3*/] + Vector(25f, 25f, 25f), joaat("WEAPON_GRENADELAUNCHER"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Local_222[0 /*3*/] - Vector(25f, 25f, 25f), Local_222[0 /*3*/] + Vector(25f, 25f, 25f), joaat("WEAPON_STICKYBOMB"), true))
					{
						iVar15 = 0;
						while (iVar15 < iVar11)
						{
							if (!PED::IS_PED_INJURED(iVar11[iVar15]))
							{
								__LIB_0__::func_429();
								if (!PED::IS_PED_INJURED(iVar11[iVar15]))
								{
									TASK::CLEAR_PED_TASKS(iVar11[iVar15]);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000, 2048, 2);
									TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
									TASK::TASK_PERFORM_SEQUENCE(iVar11[iVar15], iLocal_48);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
									PED::SET_PED_KEEP_TASK(iVar11[iVar15], true);
								}
							}
							iVar15++;
						}
						if (!PED::IS_PED_INJURED(iVar12))
						{
							if (!PED::IS_PED_INJURED(iVar12))
							{
								TASK::CLEAR_PED_TASKS(iVar12);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000, 2048, 2);
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
								TASK::TASK_PERFORM_SEQUENCE(iVar12, iLocal_48);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
								PED::SET_PED_KEEP_TASK(iVar12, true);
							}
						}
						iLocal_227 = 1;
					}
				}
				else
				{
					iVar16 = 0;
					while (iVar16 < iVar11)
					{
						if (!PED::IS_PED_INJURED(iVar11[iVar16]))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar11[iVar16], PLAYER::PLAYER_PED_ID(), true))
							{
								__LIB_0__::func_429();
								iVar2 = 6;
							}
						}
						else
						{
							__LIB_0__::func_429();
							iVar2 = 6;
						}
						iVar16++;
					}
				}
				if (iLocal_226)
				{
					iVar0 = 6;
				}
				if (iLocal_52)
				{
					if (!__LIB_0__::func_75())
					{
						iVar2 = 6;
					}
				}
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					iVar13 = 0;
					iVar0 = 6;
					break;
				}
				if (func_74(Local_221, 150))
				{
					iVar0 = 6;
					break;
				}
				if (iVar0 != 6)
				{
					if (func_1(&iVar2, Var1, iVar12, &iVar11, &iVar13, &iVar8) || iLocal_227)
					{
						iVar0 = 6;
						break;
					}
				}
				break;
			case 6:
				iVar13 = 0;
				func_152(Var1, iVar8, &iVar11, iVar12);
				iVar0 = 7;
				break;
				break;
			case 7:
				iVar13 = 0;
				break;
		}
		if (iVar0 != 7)
		{
		}
	}
	func_152(Var1, iVar8, &iVar11, iVar12);
}

int func_1(int iParam0, struct<6> Param1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x8FD
{
	int iVar0;
	if (*iParam0 >= 3)
	{
		if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_51))
		{
			if ((!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_236, 9f, 9f, 9f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1276.21f, -1613.05f, 53f, 9f, 9f, 9f, false, true, 0)) || TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
			{
				*iParam0 = 6;
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (func_60(iParam2, iParam3))
			{
				if (bLocal_235)
				{
					*iParam0 = 2;
				}
				if (!PED::IS_PED_INJURED(iParam2))
				{
					PED::SET_PED_RESET_FLAG(iParam2, 247, true);
					if (!__LIB_39__::func_353(iParam2, 0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam2, 15f, 15f, 15f, false, true, 0))
						{
							if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && PED::CAN_PED_SEE_HATED_PED(iParam2, PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam2)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam2))
								{
									TASK::CLEAR_PED_SECONDARY_TASK(iParam2);
									TASK::TASK_LOOK_AT_ENTITY(iParam2, PLAYER::PLAYER_PED_ID(), 5000, 1024, 2);
									__LIB_0__::func_429();
									SYSTEM::WAIT(1000);
									__LIB_0__::func_787(&uLocal_53, "REGIAU", "REGIN_ARM", 4, 0, 0, 0);
									iVar0 = 0;
									while (iVar0 < *iParam3)
									{
										if (!PED::IS_PED_INJURED((*iParam3)[iVar0]))
										{
											TASK::CLEAR_PED_SECONDARY_TASK((*iParam3)[iVar0]);
											TASK::TASK_SMART_FLEE_PED((*iParam3)[iVar0], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
											PED::SET_PED_KEEP_TASK((*iParam3)[iVar0], true);
										}
										iVar0++;
									}
									if (!PED::IS_PED_INJURED(iParam2))
									{
										TASK::TASK_SMART_FLEE_PED(iParam2, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
										PED::SET_PED_KEEP_TASK(iParam2, true);
									}
									iLocal_227 = 1;
								}
							}
						}
					}
					else
					{
						__LIB_0__::func_325();
						if (!PED::IS_PED_INJURED(iParam2))
						{
							TASK::CLEAR_PED_TASKS(iParam2);
							TASK::TASK_SMART_FLEE_PED(iParam2, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
							PED::SET_PED_KEEP_TASK(iParam2, true);
						}
						iLocal_227 = 1;
					}
				}
				if ((PED::IS_PED_INJURED((*iParam3)[0]) || PED::IS_PED_INJURED((*iParam3)[1])) || PED::IS_PED_INJURED((*iParam3)[2]))
				{
					func_42(iParam3, iParam2);
				}
				if (PED::IS_PED_INJURED(iParam2))
				{
					if (iLocal_234 > 2)
					{
						func_42(iParam3, iParam2);
					}
					else
					{
						*iParam0 = 9;
					}
				}
				else if (PED::IS_PED_RAGDOLL(iParam2))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam2, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", 3))
					{
						TASK::STOP_ANIM_TASK(iParam2, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", -8f);
					}
				}
			}
			else
			{
				*iParam0 = 9;
			}
			break;
		case 2:
			GRAPHICS::DRAW_DEBUG_LINE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_224, 0, 0, 255, 255);
			TASK::TASK_PAUSE(PLAYER::PLAYER_PED_ID(), 1000);
			Local_236 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (!PED::IS_PED_INJURED((*iParam3)[1]))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_218[1]))
				{
				}
				AUDIO::TRIGGER_MUSIC_EVENT("RE28_OS");
				iLocal_51 = PED::CREATE_SYNCHRONIZED_SCENE(1283.205f, -1622.71f, 54.299f, 0f, 0f, 103.68f, 2);
				if (!PED::IS_PED_INJURED((*iParam3)[0]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE((*iParam3)[0], iLocal_51, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_b", 4f, -4f, 17, 0, 1000f, 0);
				}
				if (!PED::IS_PED_INJURED((*iParam3)[1]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE((*iParam3)[1], iLocal_51, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_c", 4f, -4f, 16, 0, 1000f, 0);
				}
				if (!PED::IS_PED_INJURED((*iParam3)[2]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE((*iParam3)[2], iLocal_51, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_d", 4f, -4f, 17, 0, 1000f, 0);
				}
				*iParam0 = 3;
			}
			break;
		case 3:
			*iParam4 = 0;
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_51))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_51) > 0.3f)
				{
					if (!PED::IS_PED_INJURED((*iParam3)[0]))
					{
						PED::SET_PED_RESET_FLAG((*iParam3)[0], 156, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(0f, 0f, 1f), PLAYER::PLAYER_PED_ID(), 2f, false, 3.5f, 5f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 25000, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
						TASK::TASK_PERFORM_SEQUENCE((*iParam3)[0], iLocal_48);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
						iLocal_48 = 0;
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_51) > 0.35f)
				{
					if (!PED::IS_PED_INJURED((*iParam3)[1]))
					{
						PED::SET_PED_RESET_FLAG((*iParam3)[1], 156, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 2f, false, 5f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 25000, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
						TASK::TASK_PERFORM_SEQUENCE((*iParam3)[1], iLocal_48);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
						iLocal_48 = 0;
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_51) > 0.275f)
				{
					if (!PED::IS_PED_INJURED((*iParam3)[2]))
					{
						PED::SET_PED_RESET_FLAG((*iParam3)[2], 156, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 2f, false, 3.5f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 25000, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
						TASK::TASK_PERFORM_SEQUENCE((*iParam3)[2], iLocal_48);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
						iLocal_48 = 0;
					}
				}
			}
			if (!PED::IS_PED_INJURED((*iParam3)[2]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY((*iParam3)[2], PLAYER::PLAYER_PED_ID(), 4f, 4f, 2f, false, true, 0))
				{
					__LIB_38__::func_603(iLocal_219);
					__LIB_38__::func_603(iLocal_220);
					func_37(iParam3);
					if (!PED::IS_PED_INJURED((*iParam3)[0]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(0f, 0f, 1f), PLAYER::PLAYER_PED_ID(), 2f, false, 3.5f, 5f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 25000, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
						TASK::TASK_PERFORM_SEQUENCE((*iParam3)[0], iLocal_48);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
						iLocal_48 = 0;
					}
					if (!PED::IS_PED_INJURED((*iParam3)[1]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 2f, false, 5f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 25000, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
						TASK::TASK_PERFORM_SEQUENCE((*iParam3)[1], iLocal_48);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
						iLocal_48 = 0;
					}
					if (!PED::IS_PED_INJURED((*iParam3)[2]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 2f, false, 3.5f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 25000, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
						TASK::TASK_PERFORM_SEQUENCE((*iParam3)[2], iLocal_48);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
						iLocal_48 = 0;
					}
					iLocal_230 = MISC::GET_GAME_TIMER();
					*iParam0 = 4;
				}
			}
			break;
		case 4:
			if (func_35(Param1, (*iParam3)[2], iParam3))
			{
				__LIB_38__::func_603(iLocal_218[2]);
			}
			else if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				*iParam0 = 6;
			}
			break;
		case 6:
			if (!iLocal_229)
			{
				__LIB_0__::func_429();
				SYSTEM::WAIT(0);
				__LIB_0__::func_787(&uLocal_53, "REGIAU", "REGIN_WARN2", 4, 0, 0, 0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
				func_37(iParam3);
				func_42(iParam3, iParam2);
				__LIB_38__::func_603(iLocal_220);
				__LIB_38__::func_603(iLocal_219);
				iLocal_229 = 1;
			}
			func_34(iParam3);
			func_33(iParam3);
			if (func_32(iParam3))
			{
				*iParam5 = 1;
				if (!PED::IS_PED_INJURED(iParam2))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam2, 8f, 8f, 8f, false, true, 0))
					{
						__LIB_0__::func_787(&uLocal_53, "REGIAU", "REGIN_SORRY", 4, 0, 0, 0);
					}
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_220))
				{
				}
				while (__LIB_0__::func_75())
				{
					SYSTEM::WAIT(0);
				}
				while (!__LIB_0__::func_109())
				{
					SYSTEM::WAIT(0);
				}
				func_5(-1, 0);
				__LIB_14__::func_557();
				return 1;
				*iParam0 = 9;
			}
			break;
		case 8:
			break;
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_5(int iParam0, int iParam1)//Position - 0x1118
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
			__LIB_39__::func_335(__LIB_39__::func_320(iParam0, iParam1), Local_46.f_0, Local_46.f_1);
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

int func_32(var uParam0)//Position - 0x2420
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
		{
			if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_33(var uParam0)//Position - 0x245E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			__LIB_38__::func_603(iLocal_218[iVar0]);
		}
		iVar0++;
	}
}

void func_34(var uParam0)//Position - 0x2493
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	if (iLocal_233 == 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_49 - 1))
		{
			if (!PED::IS_PED_INJURED((*uParam0)[iVar2]))
			{
				iVar0++;
				iVar1 = iVar2;
			}
			iVar2++;
		}
		if (iVar0 == 1)
		{
			if (!PED::IS_PED_INJURED((*uParam0)[iVar1]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar1], 0, true);
				PED::SET_PED_COMBAT_RANGE((*uParam0)[iVar1], 0);
				iLocal_233 = 1;
			}
		}
	}
}

int func_35(struct<6> Param0, int iParam1, var uParam2)//Position - 0x24FF
{
	switch (iLocal_231)
	{
		case 0:
			if (__LIB_16__::func_299(iLocal_230, 0))
			{
				if (!__LIB_0__::func_75())
				{
					if (__LIB_0__::func_683() == 0)
					{
						__LIB_0__::func_787(&uLocal_53, "REGIAU", "REGIN_MONEYM", 4, 0, 0, 0);
						iLocal_231 = 1;
					}
					else if (__LIB_0__::func_683() == 1)
					{
						__LIB_0__::func_787(&uLocal_53, "REGIAU", "REGIN_MONEYF", 4, 0, 0, 0);
						iLocal_231 = 1;
					}
					else if (__LIB_0__::func_683() == 2)
					{
						__LIB_0__::func_787(&uLocal_53, "REGIAU", "REGIN_MONEYT", 4, 0, 0, 0);
						iLocal_231 = 1;
					}
				}
				iLocal_48 = 0;
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(iParam1))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 || ENTITY::IS_ENTITY_AT_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, false, true, 0))
				{
					if (!__LIB_0__::func_75())
					{
						__LIB_0__::func_787(&uLocal_53, "REGIAU", "REGIN_KILL", 4, 0, 0, 0);
						SYSTEM::SETTIMERA(0);
						iLocal_52 = 1;
						iLocal_231 = 4;
					}
				}
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED((*uParam2)[2]))
			{
				if (!PED::IS_PED_INJURED((*uParam2)[0]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
					TASK::TASK_STAND_STILL(0, 700);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_222[0 /*3*/], 1f, -1, 0.25f, 0, 40000f);
					TASK::TASK_ACHIEVE_HEADING(0, fLocal_223[0], 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, Param0.f_5, "sit_down_idle_01", Local_222[0 /*3*/], 0f, 0f, fLocal_223[0], 1000f, -4f, -1, 1, 0f, 2, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
					TASK::TASK_PERFORM_SEQUENCE((*uParam2)[0], iLocal_48);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
					iLocal_48 = 0;
				}
				if (!PED::IS_PED_INJURED((*uParam2)[1]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
					TASK::TASK_STAND_STILL(0, 200);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_222[1 /*3*/], 1f, -1, 0.25f, 0, 40000f);
					TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
					TASK::TASK_PERFORM_SEQUENCE((*uParam2)[1], iLocal_48);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
					iLocal_48 = 0;
				}
				if (!PED::IS_PED_INJURED((*uParam2)[2]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
					TASK::TASK_STAND_STILL(0, 1000);
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, (*uParam2)[0], 0f, -0.5f, 0f, 1f, 10000, 0.1f, true);
					TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
					TASK::TASK_PERFORM_SEQUENCE((*uParam2)[2], iLocal_48);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
					iLocal_48 = 0;
				}
			}
			iLocal_231 = 3;
			break;
		case 3:
			if (!__LIB_0__::func_75())
			{
				if (__LIB_0__::func_683() == 0)
				{
					__LIB_0__::func_787(&uLocal_53, "REGIAU", "REGIN_REALM", 4, 0, 0, 0);
				}
				else if (__LIB_0__::func_683() == 1)
				{
					__LIB_0__::func_787(&uLocal_53, "REGIAU", "REGIN_REALF", 4, 0, 0, 0);
				}
				else if (__LIB_0__::func_683() == 2)
				{
					__LIB_0__::func_787(&uLocal_53, "REGIAU", "REGIN_REALT", 4, 0, 0, 0);
				}
				iLocal_231 = 4;
			}
			break;
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_37(var uParam0)//Position - 0x27E0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_218[iVar0]))
		{
			if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
			{
				iLocal_218[iVar0] = __LIB_0__::func_666((*uParam0)[iVar0], 1, 145);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY((*uParam0)[iVar0], true, 0f);
			}
		}
		iVar0++;
	}
}

void func_42(var uParam0, int iParam1)//Position - 0x2955
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			TASK::TASK_COMBAT_PED((*uParam0)[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
			PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar0], 0, true);
			PED::SET_PED_KEEP_TASK((*uParam0)[iVar0], true);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		TASK::CLEAR_PED_SECONDARY_TASK(iParam1);
		TASK::TASK_COWER(iParam1, -1);
		PED::SET_PED_KEEP_TASK(iParam1, true);
	}
}

int func_60(int iParam0, var uParam1)//Position - 0x3125
{
	switch (iLocal_234)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1272.8779f, -1532.8402f, 36.4104f, 1339.482f, -1623.6365f, 71.4792f, 105.1875f, false, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 15f, 15f, 15f, false, true, 0))
				{
					if (!__LIB_39__::func_333())
					{
						__LIB_39__::func_336(1);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_219))
					{
						__LIB_38__::func_603(iLocal_219);
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_220))
					{
						iLocal_220 = __LIB_0__::func_666(iParam0, 0, 145);
						HUD::SHOW_HEIGHT_ON_BLIP(iLocal_220, false);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) < 5f)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 10f, 10f, 10f, false, true, 0))
								{
									TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 1024, 2);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
									TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_48);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
									if (HUD::DOES_BLIP_EXIST(iLocal_220))
									{
										HUD::SHOW_HEIGHT_ON_BLIP(iLocal_220, true);
									}
									WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
									if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
									{
										__LIB_0__::func_325();
										SYSTEM::WAIT(0);
										__LIB_0__::func_787(&uLocal_53, "REGIAU", "REGIN_LR1F", 4, 0, 0, 0);
										iLocal_234 = 1;
									}
								}
							}
							else if (iLocal_225 == 0)
							{
								__LIB_0__::func_787(&uLocal_53, "REGIAU", "REGIN_CAR", 4, 0, 0, 0);
								if (!PED::IS_PED_INJURED(iParam0))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 1024, 2);
									TASK::TASK_PLAY_ANIM(0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", 2f, -2f, -1, 49, 0f, false, false, false);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
									TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_48);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
								}
								iLocal_225 = 1;
							}
						}
						else
						{
							__LIB_0__::func_325();
							SYSTEM::WAIT(0);
							__LIB_0__::func_787(&uLocal_53, "REGIAU", "REGIN_POLICE", 4, 0, 0, 0);
							if (!PED::IS_PED_INJURED(iParam0))
							{
								TASK::CLEAR_PED_TASKS(iParam0);
								TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
								PED::SET_PED_KEEP_TASK(iParam0, true);
								iLocal_226 = 1;
							}
						}
					}
					else if (!PED::IS_PED_INJURED(iParam0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 8f, 8f, 8f, false, true, 0))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 1024, 2);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
							TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_48);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
							if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
							{
								__LIB_0__::func_325();
								SYSTEM::WAIT(0);
								__LIB_0__::func_787(&uLocal_53, "REGIAU", "REGIN_LR1F", 4, 0, 0, 0);
								iLocal_234 = 1;
							}
						}
					}
				}
			}
			if (!PED::IS_PED_INJURED((*uParam1)[2]))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1273.098f, -1604.1722f, 53.1535f, 1276.5682f, -1615.1274f, 56.7879f, 10f, false, true, 0) && !func_63())
				{
					iLocal_234 = 3;
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1298.5461f, -1617.742f, 53.2254f, 1262.868f, -1629.3601f, 64.2894f, 30.4375f, false, true, 0))
				{
					func_62(iParam0, uParam1);
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED((*uParam1)[2]))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1273.098f, -1604.1722f, 53.1535f, 1276.5682f, -1615.1274f, 56.7879f, 10f, false, true, 0) && !func_63())
				{
					iLocal_234 = 3;
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1298.5461f, -1617.742f, 53.2254f, 1262.868f, -1629.3601f, 64.2894f, 30.4375f, false, true, 0))
				{
					func_62(iParam0, uParam1);
				}
			}
			if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				MISC::CLEAR_AREA_OF_VEHICLES(Local_224, 13f, false, false, false, false, false, false, 0);
				TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
				if (!PED::IS_PED_INJURED(iParam0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_224, 2f, 20000, 0.25f, 0, 32.2195f);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1024, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
					TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_48);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
					iLocal_48 = 0;
					if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 6f, 6f, 6f, false, true, 0)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
					}
				}
				iLocal_234 = 2;
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(iParam0) && !__LIB_0__::func_75())
			{
				if (__LIB_0__::func_787(&uLocal_53, "REGIAU", "REGIN_LR1G", 4, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_234 = 3;
				}
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1273.098f, -1604.1722f, 53.1535f, 1276.5682f, -1615.1274f, 56.7879f, 10f, false, true, 0) && !func_63())
			{
				func_61(iParam0);
				iLocal_234 = 4;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1298.5461f, -1617.742f, 53.2254f, 1262.868f, -1629.3601f, 64.2894f, 30.4375f, false, true, 0))
			{
				func_62(iParam0, uParam1);
			}
			else if (!PED::IS_PED_INJURED(iParam0))
			{
				if (SYSTEM::TIMERA() > 8000 && ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_224, 3f, 3f, 3f, false, true, 0))
				{
					if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 60f))
					{
						if (__LIB_0__::func_680())
						{
							TASK::TASK_PLAY_ANIM(iParam0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_a", 2f, -2f, -1, 48, 0f, false, false, false);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(iParam0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 0, 0f, false, false, false);
						}
						__LIB_0__::func_787(&uLocal_53, "REGIAU", "REGIN_HERE", 4, 0, 0, 0);
						SYSTEM::SETTIMERA(0);
					}
				}
				if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						func_62(iParam0, uParam1);
					}
				}
			}
			break;
		case 4:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
				TASK::TASK_STAND_STILL(0, 500);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_224, 2f, 20000, 0.25f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
				iLocal_48 = 0;
			}
			__LIB_0__::func_429();
			SYSTEM::WAIT(0);
			if (!__LIB_0__::func_75())
			{
				__LIB_0__::func_787(&uLocal_53, "REGIAU", "REGIN_THRT", 4, 0, 0, 0);
				iLocal_234 = 5;
			}
			break;
		case 5:
			func_37(uParam1);
			__LIB_38__::func_603(iLocal_220);
			bLocal_235 = true;
			return 1;
			break;
	}
	return 1;
}

void func_61(int iParam0)//Position - 0x3809
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::CLEAR_PED_TASKS(iParam0);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1286.037f, -1623.2074f, 53.2297f, 2f, -1, 0.25f, 0, 40000f);
		TASK::TASK_COWER(0, -1);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_48);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
		iLocal_48 = 0;
		PED::SET_PED_CAN_BE_TARGETTED(iParam0, true);
		__LIB_38__::func_603(iLocal_220);
	}
}

void func_62(int iParam0, var uParam1)//Position - 0x3872
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!PED::IS_PED_INJURED((*uParam1)[iVar0]) && !PED::IS_PED_INJURED(iParam0))
		{
			if ((PED::CAN_PED_SEE_HATED_PED((*uParam1)[iVar0], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), (*uParam1)[iVar0])) || PED::CAN_PED_SEE_HATED_PED(iParam0, PLAYER::PLAYER_PED_ID()))
			{
				__LIB_0__::func_429();
				if (!PED::IS_PED_INJURED((*uParam1)[iVar0]))
				{
					TASK::CLEAR_PED_TASKS((*uParam1)[iVar0]);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000, 2048, 2);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
					TASK::TASK_PERFORM_SEQUENCE((*uParam1)[iVar0], iLocal_48);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
					PED::SET_PED_KEEP_TASK((*uParam1)[iVar0], true);
				}
				if (!PED::IS_PED_INJURED(iParam0))
				{
					TASK::CLEAR_PED_TASKS(iParam0);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000, 2048, 2);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
					TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_48);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
					PED::SET_PED_KEEP_TASK(iParam0, true);
				}
				iLocal_227 = 1;
			}
		}
		else
		{
			__LIB_0__::func_429();
			if (!PED::IS_PED_INJURED((*uParam1)[iVar0]))
			{
				TASK::CLEAR_PED_TASKS((*uParam1)[iVar0]);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000, 2048, 2);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
				TASK::TASK_PERFORM_SEQUENCE((*uParam1)[iVar0], iLocal_48);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
				PED::SET_PED_KEEP_TASK((*uParam1)[iVar0], true);
			}
			if (!PED::IS_PED_INJURED(iParam0))
			{
				TASK::CLEAR_PED_TASKS(iParam0);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000, 2048, 2);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_48);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
				PED::SET_PED_KEEP_TASK(iParam0, true);
			}
			iLocal_227 = 1;
		}
		iVar0++;
	}
}

int func_63()//Position - 0x3A56
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	return 0;
}

int func_74(struct<3> Param0, int iParam1)//Position - 0x4007
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0) > IntToFloat(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_79(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, float fParam6, int iParam7)//Position - 0x40D8
{
	int iVar0;
	fParam6 = fParam6;
	if (!bParam5)
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_80((*iParam0)[iVar0], uParam2, uParam3, uParam4, bParam5, fParam6, iParam7))
			{
				*uParam1 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_80(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5, int iParam6)//Position - 0x4121
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	bVar2 = false;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !bParam4)
	{
		if (PED::IS_PED_ON_FOOT(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !bParam4)
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			Var4 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fVar5 = SYSTEM::VDIST(Var3, Var4);
			if (!BitTest(uParam3, 3))
			{
				if (__LIB_39__::func_353(iParam0, iParam6))
				{
					__LIB_38__::func_718("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					__LIB_38__::func_718("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					__LIB_39__::func_352(iParam0);
					return 1;
				}
			}
			if (!BitTest(uParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (MISC::IS_BULLET_IN_AREA(Var4, fParam5, true))
				{
					__LIB_38__::func_718("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					__LIB_38__::func_718("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					__LIB_39__::func_352(iParam0);
					return 1;
				}
				if (MISC::IS_PROJECTILE_IN_AREA(Var4 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var4 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), false))
				{
					__LIB_38__::func_718("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					__LIB_38__::func_718("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					__LIB_39__::func_352(iParam0);
					return 1;
				}
			}
			if (!BitTest(uParam3, 2))
			{
				fVar0 = WEAPON::GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						if (fVar5 < fVar0)
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 17))
							{
								__LIB_38__::func_718("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								__LIB_38__::func_718("	aggro Ped knows player is pointing gun\n");
								__LIB_39__::func_354("		lockOnTimer = ", *uParam2);
								__LIB_38__::func_718("\n");
								__LIB_39__::func_354("		time since not LockedOn = ", (MISC::GET_GAME_TIMER() - iLocal_45));
								__LIB_38__::func_718("\n");
								bVar2 = true;
								if (MISC::GET_GAME_TIMER() > (iLocal_45 + *uParam2))
								{
									__LIB_38__::func_718("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									__LIB_39__::func_352(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!BitTest(uParam3, 0))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_38__::func_718("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					__LIB_38__::func_718("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					__LIB_39__::func_352(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_45 = MISC::GET_GAME_TIMER();
	}
	return 0;
}

int func_86()//Position - 0x43C4
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	if (iVar0 == 0)
	{
		return joaat("WEAPON_COMBATPISTOL");
	}
	else if (iVar0 == 1)
	{
		return joaat("WEAPON_COMBATPISTOL");
	}
	else if (iVar0 == 2)
	{
		return joaat("WEAPON_PISTOL");
	}
	else if (iVar0 == 3)
	{
		return joaat("WEAPON_PISTOL");
	}
	else
	{
		return joaat("WEAPON_PISTOL");
	}
	return joaat("WEAPON_PISTOL");
}

int func_90(int iParam0)//Position - 0x44E6
{
	if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		if (func_91(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_91(int iParam0)//Position - 0x4503
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		case 1:
			if (__LIB_0__::func_39(6) || __LIB_0__::func_39(7))
			{
				return 1;
			}
			else
			{
				return func_91(3);
			}
			break;
		case 2:
			return 1;
			break;
		case 3:
			if (__LIB_0__::func_215(5))
			{
				if (__LIB_0__::func_784(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_115(int iParam0, struct<5> Param1, var uParam2)//Position - 0x6A4D
{
	int iVar0;
	if (iParam0 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_49 - 1))
		{
			STREAMING::REQUEST_MODEL(Param1[iVar0]);
			iVar0++;
		}
		STREAMING::REQUEST_MODEL(Param1.f_4);
		STREAMING::REQUEST_ANIM_DICT("random@gang_intimidation@");
		AUDIO::PREPARE_MUSIC_EVENT("RE28_OS");
		if (!STREAMING::HAS_MODEL_LOADED(Param1.f_4))
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_49 - 1))
		{
			if (!STREAMING::HAS_MODEL_LOADED(Param1[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		if (STREAMING::HAS_ANIM_DICT_LOADED("random@gang_intimidation@"))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_49 - 1))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param1[iVar0]);
			iVar0++;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param1.f_4);
	}
	return 0;
}

void func_152(struct<6> Param0, int iParam1, int iParam2, int iParam3)//Position - 0x7A1A
{
	int iVar0;
	if (iParam1 == 0)
	{
	}
	if (iLocal_228)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_224 - Vector(10f, 10f, 10f), Local_224 + Vector(10f, 10f, 10f), true, true);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		__LIB_38__::func_603(iLocal_218[0]);
		__LIB_38__::func_603(iLocal_218[1]);
		__LIB_38__::func_603(iLocal_218[2]);
		iVar0 = 0;
		while (iVar0 <= (iLocal_49 - 1))
		{
			if (!PED::IS_PED_INJURED((*iParam2)[iVar0]))
			{
			}
			iVar0++;
		}
		if (!PED::IS_PED_INJURED(iParam3))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam3, false);
		}
		__LIB_15__::func_806(0);
		func_115(0, Param0);
	}
	__LIB_39__::func_344(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

