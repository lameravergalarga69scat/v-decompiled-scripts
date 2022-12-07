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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	struct<62> Local_37 = { 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 16;
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
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	char[] cLocal_213[8] = 0;
	var uLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	var uLocal_220[2] = { 0, 0 };
	var uLocal_221[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_222[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_223[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_211 = -1;
	iLocal_212 = -1;
	StringCopy(&cLocal_213, "PMGAUD", 8);
	iLocal_215 = -1;
	iLocal_216 = -1;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		__LIB_30__::func_728(2);
		func_61();
	}
	func_54();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (__LIB_0__::func_75())
		{
			iLocal_212 = -1;
		}
		else if (iLocal_212 == -1)
		{
			iLocal_212 = MISC::GET_GAME_TIMER();
		}
		func_1();
	}
}

void func_1()//Position - 0xBF
{
	struct<2> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	switch (iLocal_36)
	{
		case 0:
			HUD::REQUEST_ADDITIONAL_TEXT("PGANG", 0);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				iVar1 = 0;
				while (iVar1 <= 5)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_225[iVar1]))
					{
						uLocal_221[iVar1] = Global_112096.f_225[iVar1];
						Global_112096.f_225[iVar1] = 0;
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_221[iVar1], true, true);
						if (iLocal_226 == 0)
						{
							iLocal_226 = ENTITY::GET_ENTITY_MODEL(uLocal_221[iVar1]);
						}
						if (!PED::IS_PED_INJURED(uLocal_221[iVar1]))
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_221[iVar1], iLocal_224);
							PED::SET_PED_COMBAT_MOVEMENT(uLocal_221[iVar1], 1);
							PED::SET_PED_COMBAT_RANGE(uLocal_221[iVar1], 0);
							PED::SET_PED_ACCURACY(uLocal_221[iVar1], 5);
							PED::SET_PED_TARGET_LOSS_RESPONSE(uLocal_221[iVar1], 1);
							__LIB_11__::func_168(uLocal_221[iVar1], 20f, 5f, 90f, -80f, 80f);
							if (iLocal_45 == 0)
							{
								PED::SET_PED_COMBAT_MOVEMENT(uLocal_221[iVar1], 2);
							}
							uLocal_223[iVar1] = __LIB_6__::func_850(uLocal_221[iVar1], 1, 145);
						}
					}
					iVar1++;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_222[iVar1]))
					{
						uLocal_220[iVar1] = Global_112096.f_222[iVar1];
						Global_112096.f_222[iVar1] = 0;
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_220[iVar1], true, true);
						if (iLocal_225 == 0)
						{
							iLocal_225 = ENTITY::GET_ENTITY_MODEL(uLocal_220[iVar1]);
						}
					}
					iVar1++;
				}
				StringCopy(&Var0, "START_", 16);
				StringConCat(&Var0, &(Local_37.f_61), 16);
				__LIB_0__::func_210(&Var0, 7500, 1);
				iLocal_36++;
			}
			break;
		case 1:
			bVar3 = true;
			iVar1 = 0;
			while (iVar1 <= 5)
			{
				if (!bVar2)
				{
					if (uLocal_222[iVar1] > 0)
					{
						bVar2 = true;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_221[iVar1]) && !PED::IS_PED_INJURED(uLocal_221[iVar1]))
				{
					bVar3 = false;
				}
				iVar1++;
			}
			if (bVar2)
			{
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			}
			if (bVar3)
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (!iLocal_217)
					{
						__LIB_0__::func_210("LOSE_WANTED" /* GXT: Lose the Cops. */, 7500, 1);
						iLocal_217 = 1;
					}
				}
				else
				{
					func_47();
				}
			}
			break;
	}
	switch (iLocal_45)
	{
		case 1:
			func_45();
			break;
		case 0:
			func_9();
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_221[iVar1]))
		{
			if (PED::IS_PED_INJURED(uLocal_221[iVar1]))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_221[iVar1]));
			}
			else if (__LIB_0__::func_529(uLocal_221[iVar1], __LIB_30__::func_723(__LIB_30__::func_726()), 1) > 100f && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), uLocal_221[iVar1], 1) > 300f)
			{
				func_4();
			}
			else if (iLocal_219 && __LIB_0__::func_529(uLocal_221[iVar1], __LIB_30__::func_723(__LIB_30__::func_726()), 1) > 50f)
			{
				if (__LIB_11__::func_692())
				{
					if (!iLocal_218)
					{
						StringCopy(&Var0, "ESC_", 16);
						StringConCat(&Var0, &(Local_37.f_61), 16);
						__LIB_0__::func_210(&Var0, 7500, 1);
						iLocal_218 = 1;
					}
				}
			}
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_223[iVar1]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_221[iVar1]) || PED::IS_PED_INJURED(uLocal_221[iVar1]))
			{
				HUD::REMOVE_BLIP(&(uLocal_223[iVar1]));
			}
		}
		iVar1++;
	}
}

void func_4()//Position - 0x457
{
	__LIB_30__::func_728(2);
	func_61();
}

void func_9()//Position - 0x6C1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[16];
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_221[iVar0]) && !PED::IS_PED_INJURED(uLocal_221[iVar0]))
		{
			switch (uLocal_222[iVar0])
			{
				case 0:
					if (func_43(iVar0))
					{
						iLocal_211 = 0;
						uLocal_222[iVar0]++;
					}
					break;
				case 1:
					iVar2 = 0;
					iVar1 = 0;
					while (iVar1 <= 5)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_221[iVar1]) && !PED::IS_PED_INJURED(uLocal_221[iVar1]))
						{
							iVar2++;
						}
						iVar1++;
					}
					if (iVar2 <= 2)
					{
						uLocal_222[iVar0]++;
					}
					break;
				case 2:
					break;
			}
			if (uLocal_222[iVar0] > 0)
			{
				iVar3 = 0;
				WEAPON::GET_CURRENT_PED_WEAPON(uLocal_221[iVar0], &iVar3, true);
				if (iVar3 == joaat("WEAPON_MOLOTOV"))
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(uLocal_221[iVar0], joaat("WEAPON_MICROSMG"), false))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(uLocal_221[iVar0], joaat("WEAPON_MICROSMG"), true);
					}
					else
					{
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_221[iVar0], joaat("WEAPON_MICROSMG"), -1, true, true);
					}
				}
			}
			switch (uLocal_222[iVar0])
			{
				case 0:
					__LIB_37__::func_500(uLocal_221[iVar0], Local_37[iVar0 /*10*/].f_4);
					break;
				case 1:
					if (!__LIB_0__::func_583(uLocal_221[iVar0], joaat("SCRIPT_TASK_COMBAT"), 1))
					{
						TASK::TASK_COMBAT_PED(uLocal_221[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					break;
				case 2:
					if (!__LIB_0__::func_583(uLocal_221[iVar0], joaat("SCRIPT_TASK_SMART_FLEE_PED"), 1))
					{
						TASK::TASK_SMART_FLEE_PED(uLocal_221[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, true, false);
					}
					break;
				}
		}
		iVar0++;
	}
	switch (iLocal_211)
	{
		case 0:
			if (__LIB_11__::func_693())
			{
				iVar4 = func_36();
				if (iVar4 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_221[iVar4]))
				{
					__LIB_6__::func_834(uLocal_221[iVar4], "SUSPECT_SPOTTED", 10);
					StringCopy(&cVar5, "", 16);
					iLocal_211++;
				}
			}
			break;
		case 1:
			if (__LIB_11__::func_693())
			{
				cVar5 = { __LIB_40__::func_703("START") };
				if (__LIB_37__::func_799(&uLocal_46, &cLocal_213, &cVar5, 8, 0, 0, 0))
				{
					StringCopy(&cVar5, "", 16);
					iLocal_211++;
				}
			}
			break;
		case 2:
			if (__LIB_11__::func_693())
			{
				iVar4 = func_36();
				if (iVar4 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_221[iVar4]))
				{
					__LIB_6__::func_834(uLocal_221[iVar4], "SHOUT_THREATEN", 10);
					StringCopy(&cVar5, "", 16);
					iLocal_211++;
				}
			}
			break;
		case 3:
			if ((__LIB_11__::func_693() && (MISC::GET_GAME_TIMER() - iLocal_212) > 3000) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_6__::func_834(PLAYER::PLAYER_PED_ID(), "BLIND_RAGE", 10);
				iLocal_211++;
			}
			break;
		case 4:
			if (__LIB_11__::func_693() && (MISC::GET_GAME_TIMER() - iLocal_212) > 1000)
			{
				iVar4 = func_36();
				if (iVar4 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_221[iVar4]))
				{
					if (uLocal_222[iVar4] == 2)
					{
						__LIB_6__::func_834(uLocal_221[iVar4], "GENERIC_INSULT", 10);
						StringCopy(&cVar5, "", 16);
						iLocal_211 = (iLocal_211 - 1);
					}
					else
					{
						__LIB_6__::func_834(uLocal_221[iVar4], "SHOUT_THREATEN", 10);
						StringCopy(&cVar5, "", 16);
						iLocal_211 = (iLocal_211 - 1);
					}
				}
			}
			break;
	}
}

int func_36()//Position - 0x156A
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	iVar0 = -1;
	fVar2 = 999999f;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_221[iVar1]) && !PED::IS_PED_INJURED(uLocal_221[iVar1]))
		{
			fVar3 = __LIB_0__::func_76(uLocal_221[iVar1], PLAYER::PLAYER_PED_ID(), 1);
			if (fVar3 < 30f && fVar3 < fVar2)
			{
				iVar0 = iVar1;
				fVar2 = fVar3;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_43(int iParam0)//Position - 0x18C1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uLocal_221[iVar0]) && !PED::IS_PED_INJURED(uLocal_221[iVar0])) && uLocal_222[iVar0] > 0)
		{
			iLocal_219 = 1;
		}
		iVar0++;
	}
	if (((((((((((__LIB_0__::func_517(Global_112096.f_35, 134217728) || PED::CAN_PED_SEE_HATED_PED(uLocal_221[iParam0], PLAYER::PLAYER_PED_ID())) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), uLocal_221[iParam0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uLocal_221[iParam0])) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uLocal_221[iParam0], true), 15f, true)) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(uLocal_221[iParam0], true), 15f, true, true)) || FIRE::IS_EXPLOSION_IN_SPHERE(21, ENTITY::GET_ENTITY_COORDS(uLocal_221[iParam0], true), 15f)) || FIRE::IS_EXPLOSION_IN_SPHERE(10, ENTITY::GET_ENTITY_COORDS(uLocal_221[iParam0], true), 15f)) || FIRE::IS_EXPLOSION_IN_SPHERE(7, ENTITY::GET_ENTITY_COORDS(uLocal_221[iParam0], true), 15f)) || FIRE::IS_EXPLOSION_IN_SPHERE(0, ENTITY::GET_ENTITY_COORDS(uLocal_221[iParam0], true), 15f)) || FIRE::IS_EXPLOSION_IN_SPHERE(1, ENTITY::GET_ENTITY_COORDS(uLocal_221[iParam0], true), 15f)) || iLocal_219)
	{
		return 1;
	}
	return 0;
}

void func_45()//Position - 0x1A3D
{
	int iVar0;
	var uVar1[2];
	int iVar2;
	char cVar3[24];
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	char cVar13[16];
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_220[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_220[iVar0], false))
		{
			iVar2 = 0;
			while (iVar2 <= 5)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_221[iVar2]) && !PED::IS_PED_INJURED(uLocal_221[iVar2]))
				{
					if (Local_37[iVar2 /*10*/].f_8 != -1 && Local_37[iVar2 /*10*/].f_8 == iVar0)
					{
						if (!PED::IS_PED_IN_VEHICLE(uLocal_221[iVar2], uLocal_220[iVar0], false))
						{
							uVar1[iVar0]++;
						}
					}
				}
				iVar2++;
			}
		}
		StringCopy(&cVar3, "iPedsGettingToVeh[", 24);
		StringIntConCat(&cVar3, iVar0, 24);
		StringConCat(&cVar3, "]: ", 24);
		StringIntConCat(&cVar3, uVar1[iVar0], 24);
		GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar3, 0.05f, (0.25f + (IntToFloat(iVar0) * 0.025f)), 0f, 255, 255, 255, 255);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_221[iVar0]) && !PED::IS_PED_INJURED(uLocal_221[iVar0]))
		{
			switch (uLocal_222[iVar0])
			{
				case 0:
					if (func_43(iVar0))
					{
						iLocal_211 = 0;
						uLocal_222[iVar0]++;
					}
					break;
				case 1:
					if (Local_37[iVar0 /*10*/].f_8 == -1)
					{
						if (!PED::GET_PED_CONFIG_FLAG(uLocal_221[iVar0], 286, true))
						{
							PED::SET_PED_CONFIG_FLAG(uLocal_221[iVar0], 286, true);
						}
					}
					else
					{
						bVar5 = false;
						if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_221[iVar0], false))
						{
							iVar6 = PED::GET_VEHICLE_PED_IS_IN(uLocal_221[iVar0], false);
							iVar4 = 0;
							while (iVar4 <= 1)
							{
								if (!bVar5)
								{
									if (uLocal_220[iVar4] == iVar6)
									{
										if (uVar1[iVar4] == 0)
										{
											bVar5 = true;
										}
									}
								}
								iVar4++;
							}
							if (bVar5)
							{
								if (iLocal_215 == -1 && __LIB_0__::func_306(uLocal_221[iVar0], 0) == -1)
								{
									iLocal_215 = iVar0;
								}
								uLocal_222[iVar0]++;
							}
						}
					}
					break;
				case 2:
					if (iLocal_215 != -1)
					{
						iLocal_216 = iLocal_215;
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_221[iLocal_215]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_221[iLocal_215], false))
							{
								iVar7 = PED::GET_VEHICLE_PED_IS_IN(uLocal_221[iLocal_215], false);
							}
						}
					}
					if ((((((((iLocal_215 == -1 || !ENTITY::DOES_ENTITY_EXIST(uLocal_221[iLocal_215])) || PED::IS_PED_INJURED(uLocal_221[iLocal_215])) || !ENTITY::DOES_ENTITY_EXIST(iVar7)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar7, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iVar7, 0, true)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iVar7, 1, true)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iVar7, 4, true)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iVar7, 5, true))
					{
						iVar8 = -1;
						bVar9 = false;
						iVar4 = 0;
						while (iVar4 <= 5)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_221[iVar4]) && !PED::IS_PED_INJURED(uLocal_221[iVar4]))
							{
								if (__LIB_0__::func_306(uLocal_221[iVar4], 0) == -1)
								{
									if (iVar8 == -1 || !bVar9)
									{
										bVar9 = true;
										iVar8 = iVar4;
									}
								}
								else if (!bVar9)
								{
									iVar8 = iVar4;
								}
							}
							iVar4++;
						}
						if (iVar8 != -1)
						{
							iLocal_215 = iVar8;
						}
					}
					break;
			}
			if (uLocal_222[iVar0] > 0)
			{
				iVar10 = 0;
				WEAPON::GET_CURRENT_PED_WEAPON(uLocal_221[iVar0], &iVar10, true);
				if (iVar10 == joaat("WEAPON_MOLOTOV"))
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(uLocal_221[iVar0], joaat("WEAPON_MICROSMG"), false))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(uLocal_221[iVar0], joaat("WEAPON_MICROSMG"), true);
					}
					else
					{
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_221[iVar0], joaat("WEAPON_MICROSMG"), -1, true, true);
					}
				}
			}
			switch (uLocal_222[iVar0])
			{
				case 0:
					__LIB_37__::func_500(uLocal_221[iVar0], Local_37[iVar0 /*10*/].f_4);
					break;
				case 1:
					if (Local_37[iVar0 /*10*/].f_8 == -1)
					{
						if (!__LIB_0__::func_583(uLocal_221[iVar0], joaat("SCRIPT_TASK_COMBAT"), 1))
						{
							TASK::TASK_COMBAT_PED(uLocal_221[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
					else if (uLocal_220[Local_37[iVar0 /*10*/].f_8] == 0 || Local_37[iVar0 /*10*/].f_9 == -2)
					{
					}
					else if (!PED::IS_PED_IN_VEHICLE(uLocal_221[iVar0], uLocal_220[Local_37[iVar0 /*10*/].f_8], false))
					{
						if (__LIB_0__::func_76(uLocal_221[iVar0], uLocal_220[Local_37[iVar0 /*10*/].f_8], 1) > 4f)
						{
							if (!__LIB_0__::func_583(uLocal_221[iVar0], joaat("SCRIPT_TASK_COMBAT"), 1))
							{
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(uLocal_221[iVar0], uLocal_220[Local_37[iVar0 /*10*/].f_8], 0f, 0f, 0f, 4f, false);
								TASK::TASK_COMBAT_PED(uLocal_221[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						else if (!__LIB_0__::func_583(uLocal_221[iVar0], joaat("SCRIPT_TASK_ENTER_VEHICLE"), 1))
						{
							TASK::TASK_ENTER_VEHICLE(uLocal_221[iVar0], uLocal_220[Local_37[iVar0 /*10*/].f_8], -1, Local_37[iVar0 /*10*/].f_9, 2f, 1, 0);
						}
						if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_220[Local_37[iVar0 /*10*/].f_8], false))
						{
							if (!__LIB_0__::func_583(uLocal_221[iVar0], joaat("SCRIPT_TASK_COMBAT"), 1))
							{
								TASK::TASK_COMBAT_PED(uLocal_221[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
					else if (!__LIB_0__::func_583(uLocal_221[iVar0], joaat("SCRIPT_TASK_VEHICLE_SHOOT_AT_ENTITY"), 1))
					{
						TASK::TASK_VEHICLE_SHOOT_AT_PED(uLocal_221[iVar0], PLAYER::PLAYER_PED_ID(), 20f);
					}
					break;
				case 2:
					if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_221[iVar0], false))
					{
						if (iLocal_215 == iVar0)
						{
							if (__LIB_0__::func_306(uLocal_221[iVar0], 0) != -1)
							{
								if (!__LIB_0__::func_583(uLocal_221[iVar0], joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT"), 1))
								{
									TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uLocal_221[iVar0], PED::GET_VEHICLE_PED_IS_IN(uLocal_221[iVar0], false), false);
								}
							}
							else if (!__LIB_0__::func_583(uLocal_221[iVar0], joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1) || iLocal_215 != iLocal_216)
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(uLocal_221[iVar0], PED::GET_VEHICLE_PED_IS_IN(uLocal_221[iVar0], false), PLAYER::PLAYER_PED_ID(), 8, 40f, 786468, 1000f, 0f, true);
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_221[iVar0], joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1)
							{
								if (!TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(uLocal_221[iVar0]))
								{
									TASK::TASK_DRIVE_BY(uLocal_221[iVar0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 1000f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
						}
						else if (__LIB_0__::func_306(uLocal_221[iVar0], 0) == -1)
						{
							if (!__LIB_0__::func_583(uLocal_221[iVar0], joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1) || iLocal_215 != iLocal_216)
							{
								TASK::TASK_VEHICLE_ESCORT(uLocal_221[iVar0], PED::GET_VEHICLE_PED_IS_IN(uLocal_221[iVar0], false), PED::GET_VEHICLE_PED_IS_IN(uLocal_221[iLocal_215], false), -1, 40f, 786468, -1f, 20, 20f);
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_221[iVar0], joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1)
							{
								if (!TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(uLocal_221[iVar0]))
								{
									TASK::TASK_DRIVE_BY(uLocal_221[iVar0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 1000f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
						}
						else
						{
							iVar11 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(uLocal_221[iVar0], false), -1, false);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar11) || PED::IS_PED_INJURED(iVar11))
							{
								if (!__LIB_0__::func_583(uLocal_221[iVar0], joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT"), 1))
								{
									TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uLocal_221[iVar0], PED::GET_VEHICLE_PED_IS_IN(uLocal_221[iVar0], false), false);
								}
							}
							else if (!__LIB_0__::func_583(uLocal_221[iVar0], joaat("SCRIPT_TASK_DRIVE_BY"), 1) || iLocal_215 != iLocal_216)
							{
								TASK::TASK_DRIVE_BY(uLocal_221[iVar0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 1000f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
							}
						}
					}
					break;
				}
		}
		iVar0++;
	}
	switch (iLocal_211)
	{
		case 0:
			if (__LIB_11__::func_693())
			{
				iVar12 = func_36();
				if (iVar12 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_221[iVar12]))
				{
					__LIB_6__::func_834(uLocal_221[iVar12], "SUSPECT_SPOTTED", 10);
					StringCopy(&cVar13, "", 16);
					iLocal_211++;
				}
			}
			break;
		case 1:
			if (__LIB_11__::func_693())
			{
				cVar13 = { __LIB_40__::func_703("START") };
				if (__LIB_37__::func_799(&uLocal_46, &cLocal_213, &cVar13, 8, 0, 0, 0))
				{
					StringCopy(&cVar13, "", 16);
					iLocal_211++;
				}
			}
			break;
		case 2:
			if (__LIB_11__::func_693())
			{
				iVar12 = func_36();
				if (iVar12 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_221[iVar12]))
				{
					__LIB_6__::func_834(uLocal_221[iVar12], "SHOUT_THREATEN", 10);
					StringCopy(&cVar13, "", 16);
					iLocal_211++;
				}
			}
			break;
		case 3:
			if ((__LIB_11__::func_693() && (MISC::GET_GAME_TIMER() - iLocal_212) > 3000) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_6__::func_834(PLAYER::PLAYER_PED_ID(), "BLIND_RAGE", 10);
				iLocal_211++;
			}
			break;
		case 4:
			if (__LIB_11__::func_693() && (MISC::GET_GAME_TIMER() - iLocal_212) > 1000)
			{
				iVar12 = func_36();
				if (iVar12 != -1 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_221[iVar12]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_221[iVar12], false))
					{
						__LIB_6__::func_834(uLocal_221[iVar12], "GENERIC_INSULT", 10);
						StringCopy(&cVar13, "", 16);
						iLocal_211 = (iLocal_211 - 1);
					}
					else
					{
						__LIB_6__::func_834(uLocal_221[iVar12], "SHOUT_THREATEN", 10);
						StringCopy(&cVar13, "", 16);
						iLocal_211 = (iLocal_211 - 1);
					}
				}
			}
			break;
	}
}

void func_47()//Position - 0x2422
{
	__LIB_30__::func_728(1);
	func_61();
}

void func_54()//Position - 0x25AF
{
	int iVar0;
	switch (__LIB_18__::func_173())
	{
		case 0:
			__LIB_0__::func_203(&uLocal_46, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			break;
		case 1:
			__LIB_0__::func_203(&uLocal_46, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			break;
		case 2:
			__LIB_0__::func_203(&uLocal_46, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			break;
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	PED::SET_CREATE_RANDOM_COPS(false);
	iLocal_45 = func_58();
	switch (__LIB_30__::func_726())
	{
		case 11:
			iVar0 = 0;
			break;
		case 12:
			iVar0 = 1;
			break;
		case 13:
			iVar0 = 2;
			break;
		case 14:
			iVar0 = 0;
			break;
	}
	__LIB_30__::func_729(&(Local_37[0 /*10*/]), __LIB_30__::func_726(), 0);
	__LIB_30__::func_729(&(Local_37[1 /*10*/]), __LIB_30__::func_726(), 1);
	__LIB_30__::func_729(&(Local_37[2 /*10*/]), __LIB_30__::func_726(), 2);
	__LIB_30__::func_729(&(Local_37[3 /*10*/]), __LIB_30__::func_726(), 3);
	__LIB_30__::func_729(&(Local_37[4 /*10*/]), __LIB_30__::func_726(), 4);
	__LIB_30__::func_729(&(Local_37[5 /*10*/]), __LIB_30__::func_726(), 5);
	StringCopy(&(Local_37.f_61), func_56(iVar0), 16);
	StringCopy(&(Local_37.f_65), func_55(iVar0), 16);
	PED::ADD_RELATIONSHIP_GROUP("relGang", &iLocal_224);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_224);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_224, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_224, joaat("COP"));
	switch (iVar0)
	{
		case 0:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), joaat("AMBIENT_GANG_MEXICAN"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_224, joaat("AMBIENT_GANG_MEXICAN"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_MEXICAN"), iLocal_224);
			break;
		case 1:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), joaat("AMBIENT_GANG_BALLAS"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_224, joaat("AMBIENT_GANG_BALLAS"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_BALLAS"), iLocal_224);
			break;
		case 2:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), joaat("AMBIENT_GANG_WEICHENG"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_224, joaat("AMBIENT_GANG_WEICHENG"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_WEICHENG"), iLocal_224);
			break;
	}
}

char* func_55(int iParam0)//Position - 0x279D
{
	switch (iParam0)
	{
		case 1:
			return "BALLA1";
			break;
		case 2:
			return "KOREANGUY";
			break;
		case 0:
			return "VAGOS";
			break;
		default:
			return "";
			break;
	}
	return "";
}

char* func_56(int iParam0)//Position - 0x27E8
{
	switch (iParam0)
	{
		case 1:
			return "BAL";
			break;
		case 2:
			return "KOR";
			break;
		case 0:
			return "VAG";
			break;
		default:
			return "";
			break;
	}
	return "";
}

int func_58()//Position - 0x2F9A
{
	return func_59(Global_112096.f_20, Global_112096.f_29);
}

int func_59(var uParam0, int iParam1)//Position - 0x2FB2
{
	uParam0 = uParam0;
	switch (iParam1)
	{
		case 0:
			return 0;
			break;
		case 1:
			return 1;
			break;
	}
	return 0;
}

void func_61()//Position - 0x307B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_221[iVar0]))
		{
			if (!PED::IS_PED_INJURED(uLocal_221[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_SMART_FLEE_PED(uLocal_221[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, true);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_221[iVar0]));
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_223[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_223[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_220[iVar0]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_220[iVar0]));
		}
		iVar0++;
	}
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_225, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_226, false);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	PED::SET_CREATE_RANDOM_COPS(true);
	SCRIPT::TERMINATE_THIS_THREAD();
}

