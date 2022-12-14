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
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	struct<3> Local_64 = { 0, 0, 0 } ;
	float fLocal_65 = 0f;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
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
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	float fLocal_235 = 0f;
	int iLocal_236 = 0;
	int* iLocal_237 = NULL;
	var uLocal_238 = 0;
	int* iLocal_239 = NULL;
	var uLocal_240 = 0;
	int iLocal_241 = 0;
	int* iLocal_242 = NULL;
	int* iLocal_243 = NULL;
	struct<3> Local_244 = { 0, 0, 0 } ;
	int iLocal_245 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
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
	iLocal_44 = 1;
	iLocal_45 = 65;
	iLocal_46 = 49;
	iLocal_47 = 64;
	Local_64 = { -1124.3922f, -514.70013f, 33.21493f };
	fLocal_65 = 200f;
	Local_66 = { 2490f, 3777f, 2402.879f };
	Local_67 = { -2052f, 3237f, 1450.078f };
	fLocal_235 = 3f;
	iLocal_236 = 2;
	iLocal_245 = joaat("S_M_M_Security_01");
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_77();
	}
	__LIB_0__::func_694(30);
	if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
	{
		while (bVar0 == 0)
		{
			bVar0 = ((MISC::GET_MISSION_FLAG() == 0 && __LIB_14__::func_466() == 0) && __LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_64, fLocal_65, 1));
			func_67();
		}
	}
	__LIB_0__::func_681(65, 0);
	func_65(1);
	func_64(joaat("akuma"), 1);
	func_64(iLocal_245, 1);
	while (true)
	{
		__LIB_0__::func_715(PLAYER::PLAYER_PED_ID());
		Local_244 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			func_63(&uLocal_233);
			func_3(&uLocal_234);
			if (__LIB_0__::func_875(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 7, 0, 0))
			{
				__LIB_0__::func_681(65, 1);
				__LIB_0__::func_693(30);
				func_77();
			}
		}
		func_67();
	}
}

void func_3(var uParam0)//Position - 0xF3B
{
	bool bVar0;
	float fVar1;
	int iVar2;
	switch (*uParam0)
	{
		case 0:
			func_59(&iLocal_239);
			__LIB_0__::func_681(65, 0);
			__LIB_0__::func_0(&iLocal_243);
			*uParam0++;
			break;
		case 1:
			if (__LIB_16__::func_882(PLAYER::PLAYER_PED_ID(), -1210.2365f, -579.875f, 26.332148f, -1204.7253f, -586.3573f, 29.567726f, 6f))
			{
				fLocal_235 = 0.25f;
				*uParam0++;
				return;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				fVar1 = MISC::ACOS(__LIB_0__::func_992(Local_244, 0.73f, 0.683f, -0.013f));
				if (MISC::ABSF(fVar1) < 25f)
				{
					if (__LIB_16__::func_882(iVar2, -1211.7739f, -580.92993f, 26.33095f, -1208.1272f, -585.3617f, 29.660564f, 4.5f))
					{
						fLocal_235 = 3f;
						*uParam0++;
					}
				}
			}
			break;
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				__LIB_0__::func_213(iVar2, fLocal_235, iLocal_236, 1056964608, 0, 1, 0);
			}
			else
			{
				TASK::TASK_STAND_STILL(PLAYER::PLAYER_PED_ID(), -1);
			}
			if (func_52(-1210.1525f, -578.0859f, 26.7238f))
			{
				__LIB_0__::func_222(&uLocal_68, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				if (__LIB_0__::func_680())
				{
					bVar0 = __LIB_15__::func_870(&uLocal_68, "AMSOLAU", "AMSOL_HERE", 8, 0, 0, 0);
				}
				else
				{
					bVar0 = __LIB_15__::func_870(&uLocal_68, "AMSOLAU", "AMSOL_WORK", 8, 0, 0, 0);
				}
				if (bVar0)
				{
					*uParam0++;
				}
			}
			else
			{
				*uParam0++;
			}
			break;
		case 3:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_0__::func_213(iVar2, fLocal_235, iLocal_236, 1056964608, 0, 1, 0))
				{
					*uParam0++;
					return;
				}
			}
			*uParam0++;
			break;
		case 4:
			if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				*uParam0++;
			}
			break;
		case 5:
			func_5(0);
			*uParam0++;
			break;
		case 6:
			func_4(&iLocal_239, -1206.8398f, -583.2034f, 26.1738f, 311.4116f);
			*uParam0++;
			break;
		case 7:
			if (!__LIB_16__::func_882(PLAYER::PLAYER_PED_ID(), -1210.2365f, -579.875f, 26.332148f, -1204.7253f, -586.3573f, 29.567726f, 6f))
			{
				func_59(&iLocal_239);
				*uParam0++;
			}
			break;
		case 8:
			if (iLocal_241 == 0)
			{
				func_77();
			}
			break;
	}
}

void func_4(int* iParam0, struct<3> Param1, float fParam2)//Position - 0x11E7
{
	iParam0->f_1 = VEHICLE::CREATE_VEHICLE(joaat("akuma"), Param1, fParam2, true, true, false);
	if (__LIB_0__::func_715(iParam0->f_1))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_1, true);
		ENTITY::SET_ENTITY_COLLISION(iParam0->f_1, false, false);
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_1, false, false);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0->f_1, false, true, false);
		*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0->f_1, 26, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), -1, true, true);
		if (__LIB_0__::func_715(*iParam0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
			ENTITY::SET_ENTITY_VISIBLE(*iParam0, false, false);
			AUDIO::STOP_PED_SPEAKING(*iParam0, true);
		}
	}
}

void func_5(int iParam0)//Position - 0x1273
{
	__LIB_0__::func_681(65, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1039.5043f, -477.7876f, 35.329666f, -1062.4445f, -469.56848f, 40.62086f, 13f, 1);
	func_6(135, iParam0);
	func_6(136, iParam0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1039.5043f, -477.7876f, 35.329666f, -1062.4445f, -469.56848f, 40.62086f, 13f, 1);
	func_6(137, iParam0);
	func_6(138, iParam0);
}

void func_6(int iParam0, int iParam1)//Position - 0x12F2
{
	__LIB_16__::func_319(iParam0, iParam1);
	MISC::SET_BIT(&(Global_38421[(iParam0 / 32)]), (iParam0 % 32));
	Global_38884[iParam0] = iParam1;
	Global_113386.f_7261[iParam0] = iParam1;
}

int func_52(struct<3> Param0)//Position - 0x5D7D
{
	int iVar0;
	int iVar1;
	var uVar2[20];
	iVar0 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar2, -1);
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_0__::func_715(uVar2[iVar1]))
		{
			if (PED::IS_PED_MODEL(uVar2[iVar1], iLocal_245))
			{
				if (__LIB_0__::func_724(uVar2[iVar1], Param0, 1) < 5f)
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

void func_59(int* iParam0)//Position - 0x6184
{
	__LIB_0__::func_0(iParam0);
	__LIB_8__::func_397(&(iParam0->f_1));
}

void func_63(var uParam0)//Position - 0x6281
{
	bool bVar0;
	float fVar1;
	int iVar2;
	switch (*uParam0)
	{
		case 0:
			func_59(&iLocal_237);
			__LIB_0__::func_681(65, 0);
			__LIB_0__::func_0(&iLocal_242);
			*uParam0++;
			break;
		case 1:
			if (__LIB_16__::func_882(PLAYER::PLAYER_PED_ID(), -1055.0461f, -469.33472f, 35.433327f, -1057.4398f, -474.97723f, 39.8187f, 12.5f))
			{
				fLocal_235 = 0.25f;
				*uParam0++;
				return;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				fVar1 = MISC::ACOS(__LIB_0__::func_992(Local_244, -0.37f, -0.927f, -0.053f));
				if (MISC::ABSF(fVar1) < 45f)
				{
					if (__LIB_16__::func_882(iVar2, -1049.3175f, -473.7472f, 34.941956f, -1059.4834f, -468.76077f, 39.94483f, 4.5f))
					{
						fLocal_235 = 1f;
						*uParam0++;
					}
				}
			}
			break;
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				__LIB_0__::func_213(iVar2, fLocal_235, iLocal_236, 1056964608, 0, 1, 0);
			}
			else
			{
				TASK::TASK_STAND_STILL(PLAYER::PLAYER_PED_ID(), -1);
			}
			if (func_52(-1051.1f, -476.1f, 37f))
			{
				__LIB_0__::func_222(&uLocal_68, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				if (__LIB_0__::func_680())
				{
					bVar0 = __LIB_15__::func_870(&uLocal_68, "AMSOLAU", "AMSOL_HERE", 8, 0, 0, 0);
				}
				else
				{
					bVar0 = __LIB_15__::func_870(&uLocal_68, "AMSOLAU", "AMSOL_WORK", 8, 0, 0, 0);
				}
				if (bVar0)
				{
					*uParam0++;
				}
			}
			else
			{
				*uParam0++;
			}
			break;
		case 3:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_0__::func_213(iVar2, fLocal_235, iLocal_236, 1056964608, 0, 1, 0))
				{
					*uParam0++;
				}
				return;
			}
			*uParam0++;
			break;
		case 4:
			if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				*uParam0++;
			}
			break;
		case 5:
			func_5(0);
			*uParam0++;
			break;
		case 6:
			func_4(&iLocal_237, -1051.9556f, -472.055f, 35.5672f, 161.4418f);
			*uParam0++;
			break;
		case 7:
			if (!__LIB_16__::func_882(PLAYER::PLAYER_PED_ID(), -1055.5137f, -474.63712f, 35.6278f, -1051.2297f, -464.41263f, 39.914795f, 9.5f))
			{
				func_59(&iLocal_237);
				*uParam0++;
			}
			break;
		case 8:
			if (iLocal_241 == 0)
			{
				func_77();
			}
			break;
	}
}

int func_64(int iParam0, int iParam1)//Position - 0x6535
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER() + 7500;
	if (iParam0 == 0)
	{
		return 0;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	if (STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	while (!STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		SYSTEM::WAIT(0);
		if (MISC::GET_GAME_TIMER() > iVar0 && !STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_65(int iParam0)//Position - 0x659A
{
	__LIB_0__::func_681(65, 0);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1039.5043f, -477.7876f, 35.329666f, -1062.4445f, -469.56848f, 40.62086f, 13f, false, false, true);
	func_6(135, iParam0);
	func_6(136, iParam0);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1039.5043f, -477.7876f, 35.329666f, -1062.4445f, -469.56848f, 40.62086f, 13f, false, false, true);
	func_6(137, iParam0);
	func_6(138, iParam0);
}

void func_67()//Position - 0x6662
{
	__LIB_0__::func_715(PLAYER::PLAYER_PED_ID());
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("solomon1")) > 0)
	{
		__LIB_0__::func_693(30);
		__LIB_0__::func_681(65, 1);
		func_77();
	}
	if (__LIB_0__::func_178(59) == 1)
	{
		__LIB_0__::func_681(65, 1);
		__LIB_0__::func_693(30);
		func_77();
	}
	if (MISC::GET_MISSION_FLAG())
	{
		func_77();
	}
	if (__LIB_14__::func_466() != 0)
	{
		func_77();
	}
	if (!__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_64, (fLocal_65 + 30f), 1))
	{
		func_77();
	}
	SYSTEM::WAIT(0);
	__LIB_0__::func_715(PLAYER::PLAYER_PED_ID());
}

void func_77()//Position - 0x6936
{
	func_59(&iLocal_237);
	func_59(&iLocal_239);
	__LIB_0__::func_124(&iLocal_242, 0, 0, 1);
	__LIB_0__::func_124(&iLocal_243, 0, 0, 1);
	__LIB_0__::func_681(65, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Security_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("akuma"));
	SCRIPT::TERMINATE_THIS_THREAD();
}

