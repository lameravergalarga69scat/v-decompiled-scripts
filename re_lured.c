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
	int iLocal_46 = 0;
	struct<3> Local_47 = { 0, 0, 0 } ;
	struct<3> Local_48 = { 0, 0, 0 } ;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<3> Local_51 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	float fLocal_53 = 0f;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 16;
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
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	bool bLocal_229 = 0;
	bool bLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	struct<2> Local_238 = { 0, 5 } ;
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 5;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
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
	Local_47 = { ScriptParam_238.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_179();
	}
	if (__LIB_42__::func_567(Local_47, -1, 0, 0, 0))
	{
		__LIB_35__::func_176(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || bLocal_229)
		{
			if (!__LIB_35__::func_175())
			{
				if (__LIB_40__::func_735())
				{
					func_179();
				}
			}
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_LU", 0);
			switch (iLocal_44)
			{
				case 0:
					if (__LIB_41__::func_467())
					{
						func_179();
					}
					if (iLocal_45)
					{
						iLocal_44 = 1;
						iLocal_46 = 1;
					}
					else
					{
						func_117();
					}
					break;
				case 1:
					if (!bLocal_229)
					{
						if (!iLocal_228)
						{
							func_104();
						}
						else if (!iLocal_232)
						{
							func_103();
							func_102();
						}
						func_91();
						if (!PED::IS_PED_INJURED(iLocal_55))
						{
							PED::SET_PED_RESET_FLAG(iLocal_55, 247, true);
						}
					}
					else
					{
						PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
						if (!iLocal_232)
						{
							func_58();
						}
						else if (!iLocal_233)
						{
							func_57();
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_56))
					{
						PED::SET_PED_RESET_FLAG(iLocal_56, 156, true);
					}
					func_36();
					__LIB_0__::func_371();
					func_1();
					break;
			}
		}
		else
		{
			func_179();
		}
	}
}

void func_1()//Position - 0x191
{
	if (bLocal_229)
	{
		if (PED::IS_PED_INJURED(iLocal_56))
		{
			func_3();
		}
		else if (bLocal_230)
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_56, 100f, 100f, 100f, false, true, 0))
			{
				func_2();
			}
		}
		else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_56, 100f, 100f, 100f, false, true, 0))
		{
			func_3();
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(iLocal_55))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_55))
			{
				func_2();
			}
		}
		if (PED::IS_PED_INJURED(iLocal_55))
		{
			if (!PED::IS_PED_INJURED(iLocal_56))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_56, iLocal_61);
				PED::SET_PED_KEEP_TASK(iLocal_56, true);
			}
			func_2();
		}
		if (PED::IS_PED_INJURED(iLocal_56))
		{
			if (!PED::IS_PED_INJURED(iLocal_55))
			{
				TASK::CLEAR_PED_TASKS(iLocal_55);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_55, iLocal_61);
				PED::SET_PED_KEEP_TASK(iLocal_55, true);
			}
			func_2();
		}
	}
	if (PED::IS_PED_INJURED(iLocal_55))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_57))
		{
			HUD::REMOVE_BLIP(&iLocal_57);
		}
	}
	if (PED::IS_PED_INJURED(iLocal_56))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_58))
		{
			HUD::REMOVE_BLIP(&iLocal_58);
		}
	}
}

void func_2()//Position - 0x301
{
	func_179();
}

void func_3()//Position - 0x30D
{
	while (__LIB_0__::func_75())
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_0__::func_109())
	{
		SYSTEM::WAIT(0);
	}
	__LIB_40__::func_739(-1, 0);
	__LIB_20__::func_174();
	func_179();
}

void func_36()//Position - 0x16F1
{
	if (!bLocal_229)
	{
		if (func_56())
		{
			iLocal_232 = 1;
			if (!PED::IS_PED_INJURED(iLocal_56))
			{
				TASK::CLEAR_PED_TASKS(iLocal_56);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_56, iLocal_61);
				PED::SET_PED_KEEP_TASK(iLocal_56, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_55))
			{
				TASK::CLEAR_PED_TASKS(iLocal_55);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_55, iLocal_61);
				PED::SET_PED_KEEP_TASK(iLocal_55, true);
			}
			func_2();
		}
	}
	else if (!iLocal_232 && !bLocal_230)
	{
		if ((func_56() || WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_56, false), 12f, 12f, 5f, false, true, 0))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_54, joaat("PLAYER"));
			if (!PED::IS_PED_INJURED(iLocal_56))
			{
				TASK::CLEAR_PED_TASKS(iLocal_56);
				TASK::TASK_COMBAT_PED(iLocal_56, PLAYER::PLAYER_PED_ID(), 0, 16);
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_56, 15f, 15f, 15f, false, true, 0))
				{
					__LIB_6__::func_771();
					SYSTEM::WAIT(0);
					__LIB_37__::func_799(&uLocal_62, "lurinau", "lurin_fucked", 4, 0, 0, 0);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_55))
			{
				TASK::CLEAR_PED_TASKS(iLocal_55);
				TASK::TASK_COMBAT_PED(iLocal_55, PLAYER::PLAYER_PED_ID(), 0, 16);
			}
			iLocal_232 = 1;
		}
	}
}

int func_56()//Position - 0x2003
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { 30f, 30f, 30f };
	Var1 = { -30f, -30f, -30f };
	if (!PED::IS_PED_INJURED(iLocal_55) && !PED::IS_PED_INJURED(iLocal_56))
	{
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_55, 31086, 0f, 0f, 0f), 30f, true))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_55, 30f, 30f, 30f, false, true, 0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_55) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_56)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_55)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_56))
			{
				if (PED::CAN_PED_SEE_HATED_PED(iLocal_55, PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_56, PLAYER::PLAYER_PED_ID()))
				{
					__LIB_6__::func_771();
					SYSTEM::WAIT(0);
					__LIB_37__::func_799(&uLocal_62, "lurinau", "lurin_gun", 4, 0, 0, 0);
					return 1;
				}
			}
		}
		Var0 = { Var0 + PED::GET_PED_BONE_COORDS(iLocal_55, 31086, 0f, 0f, 0f) };
		Var1 = { Var1 + PED::GET_PED_BONE_COORDS(iLocal_55, 31086, 0f, 0f, 0f) };
		if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("WEAPON_SMOKEGRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("WEAPON_GRENADE"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("WEAPON_STICKYBOMB"), true))
		{
			return 1;
		}
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_55, 31086, 0f, 0f, 0f), 3f))
		{
			return 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("bulldozer")))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_55) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_56))
				{
					return 1;
				}
			}
			if (((PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("annihilator"))) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("buzzard"))) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("lazer")))
			{
				return 1;
			}
		}
		if (PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(iLocal_55, false) - Local_49, ENTITY::GET_ENTITY_COORDS(iLocal_55, false) + Local_49) || VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(iLocal_55, false) - Local_49, ENTITY::GET_ENTITY_COORDS(iLocal_55, false) + Local_49))
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 894.1762f, -1048.2943f, 41.828f, 15f, 21.5625f, 10f, false, true, 0))
	{
		__LIB_6__::func_771();
		SYSTEM::WAIT(0);
		__LIB_37__::func_799(&uLocal_62, "lurinau", "lurin_other", 4, 0, 0, 0);
		return 1;
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_47, 15f, 15f, 15f, false, true, 0))
	{
		if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
		{
			__LIB_6__::func_771();
			return 1;
		}
	}
	else if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
	{
		PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
		__LIB_6__::func_771();
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_47, 40f, 40f, 40f, false, true, 0))
	{
		if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), true))
		{
			__LIB_6__::func_771();
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), true))
		{
			__LIB_6__::func_771();
			return 1;
		}
	}
	return 0;
}

void func_57()//Position - 0x237A
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -734.9749f, -728.4423f, 29.4985f, 2f, 6f, 2f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -663.9312f, -725.6195f, 28.2592f, 2f, 6f, 2f, false, true, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_56))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
			TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_56, iLocal_61);
			PED::SET_PED_KEEP_TASK(iLocal_56, true);
		}
		if (!PED::IS_PED_INJURED(iLocal_55))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
			TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_55, iLocal_61);
			PED::SET_PED_KEEP_TASK(iLocal_55, true);
		}
		iLocal_233 = 1;
	}
}

void func_58()//Position - 0x2450
{
	if (!bLocal_230)
	{
		if (!PED::IS_PED_INJURED(iLocal_56))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_56, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), 2.8f, 2.8f, 2.8f, false, true, 0))
			{
				if (!iLocal_231)
				{
					iLocal_236 = 500;
					__LIB_6__::func_771();
					SYSTEM::WAIT(0);
					if (__LIB_9__::func_231(__LIB_18__::func_173()) >= iLocal_236)
					{
						__LIB_40__::func_982(__LIB_18__::func_173(), 1, iLocal_236);
						iLocal_237 = iLocal_236;
						__LIB_37__::func_799(&uLocal_62, "lurinau", "lurin_mugtha", 4, 0, 0, 0);
					}
					else if (__LIB_9__::func_231(__LIB_18__::func_173()) <= 0)
					{
						iLocal_237 = 0;
						__LIB_37__::func_799(&uLocal_62, "lurinau", "lurin_mugnom", 4, 0, 0, 0);
					}
					else
					{
						iLocal_237 = __LIB_9__::func_231(__LIB_18__::func_173());
						__LIB_40__::func_982(__LIB_18__::func_173(), 1, __LIB_9__::func_231(__LIB_18__::func_173()));
						__LIB_37__::func_799(&uLocal_62, "lurinau", "lurin_mugtha", 4, 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_56))
					{
						PED::SET_PED_MONEY(iLocal_56, iLocal_237);
					}
					iLocal_231 = 1;
				}
				if (!PED::IS_PED_INJURED(iLocal_56))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_56, iLocal_61);
					PED::SET_PED_KEEP_TASK(iLocal_56, true);
					if (!PED::IS_PED_INJURED(iLocal_55))
					{
						TASK::CLEAR_PED_TASKS(iLocal_55);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_55, iLocal_61);
						PED::SET_PED_KEEP_TASK(iLocal_55, true);
					}
					bLocal_230 = true;
				}
			}
		}
	}
}

void func_91()//Position - 0x38FB
{
	if (!PED::IS_PED_INJURED(iLocal_56))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 873.9561f, -1050.8057f, 33.0066f, 4.75f, 1.9f, 1f, false, true, 0))
		{
			if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				PED::SET_PED_DUCKING(iLocal_56, false);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_56, joaat("WEAPON_PISTOL"), 200, true, true);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					__LIB_6__::func_771();
					SYSTEM::WAIT(0);
					__LIB_37__::func_799(&uLocal_62, "lurinau", "lurin_other", 4, 0, 0, 0);
					func_2();
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_PLAY_ANIM(0, "random@mugging5", "ig_1_guy_enter_stickup", 2f, -2f, -1, 0, 0f, false, false, false);
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 2f, false, 2.3f, 4f, true, true, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 500, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
				}
				TASK::TASK_PERFORM_SEQUENCE(iLocal_56, iLocal_61);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_57, false);
				iLocal_58 = __LIB_6__::func_850(iLocal_56, 1, 145);
				AUDIO::TRIGGER_MUSIC_EVENT("RE35_OS");
				SYSTEM::WAIT(500);
				if (!PED::IS_PED_INJURED(iLocal_55))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_55, joaat("WEAPON_PISTOL"), 200, true, true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_52, PLAYER::PLAYER_PED_ID(), 2f, false, 0f, 4f, true, 512, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_55, iLocal_61);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
				}
				if (!PED::IS_PED_INJURED(iLocal_56))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_56, -1, 2048, 2);
					TASK::TASK_PAUSE(0, 1000);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_61);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
					__LIB_8__::func_770(1);
				}
				__LIB_6__::func_771();
				SYSTEM::WAIT(0);
				__LIB_37__::func_799(&uLocal_62, "lurinau", "lurin_mugger", 4, 0, 0, 0);
				SYSTEM::SETTIMERA(0);
				bLocal_229 = true;
			}
			else
			{
				TASK::CLEAR_PED_TASKS(iLocal_56);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_56, iLocal_61);
				PED::SET_PED_KEEP_TASK(iLocal_56, true);
				if (!PED::IS_PED_INJURED(iLocal_55))
				{
					TASK::CLEAR_PED_TASKS(iLocal_55);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_55, iLocal_61);
					PED::SET_PED_KEEP_TASK(iLocal_55, true);
				}
				__LIB_6__::func_771();
				SYSTEM::WAIT(0);
				__LIB_37__::func_799(&uLocal_62, "lurinau", "lurin_gun", 4, 0, 0, 0);
				func_2();
			}
		}
	}
}

void func_102()//Position - 0x3E9D
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, false))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_55, 15f, 15f, 15f, false, true, 0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!__LIB_0__::func_75())
				{
					if (iLocal_235 == 0)
					{
						__LIB_37__::func_799(&uLocal_62, "lurinau", "lurin_girlta", 4, 0, 0, 0);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						iLocal_235++;
						SYSTEM::SETTIMERB(0);
					}
					if ((SYSTEM::TIMERB() > 3500 && iLocal_235 == 1) && !__LIB_0__::func_75())
					{
						__LIB_37__::func_799(&uLocal_62, "lurinau", "lurin_girltb", 4, 0, 0, 0);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						iLocal_235++;
						SYSTEM::SETTIMERB(0);
					}
					if ((SYSTEM::TIMERB() > 7000 && iLocal_235 == 2) && !__LIB_0__::func_75())
					{
						SYSTEM::SETTIMERB(0);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						__LIB_37__::func_799(&uLocal_62, "lurinau", "lurin_girlch", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
	}
}

void func_103()//Position - 0x3FB5
{
	if (!PED::IS_PED_INJURED(iLocal_55))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && PED::CAN_PED_SEE_HATED_PED(iLocal_55, PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(iLocal_55);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_55, iLocal_61);
				PED::SET_PED_KEEP_TASK(iLocal_55, true);
				if (!PED::IS_PED_INJURED(iLocal_56))
				{
					TASK::CLEAR_PED_TASKS(iLocal_56);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_56, iLocal_61);
					PED::SET_PED_KEEP_TASK(iLocal_56, true);
				}
				__LIB_6__::func_771();
				SYSTEM::WAIT(0);
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
				{
					__LIB_37__::func_799(&uLocal_62, "lurinau", "lurin_gun", 4, 0, 0, 0);
				}
				else if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 2))
				{
					__LIB_37__::func_799(&uLocal_62, "lurinau", "lurin_other", 4, 0, 0, 0);
				}
				func_2();
			}
		}
	}
}

void func_104()//Position - 0x40C5
{
	if (!__LIB_35__::func_175())
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, false))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_47, 65f, 60f, 60f, false, true, 0) || Global_113381)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_59))
				{
					HUD::REMOVE_BLIP(&iLocal_59);
				}
				iLocal_57 = __LIB_6__::func_850(iLocal_55, 0, 145);
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57, false);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				__LIB_40__::func_733(1);
			}
		}
	}
	if (!iLocal_227)
	{
		if (!PED::IS_PED_INJURED(iLocal_55))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_55, 25f, 25f, 25f, false, true, 0) && __LIB_35__::func_175())
			{
				if (__LIB_37__::func_799(&uLocal_62, "lurinau", "lurin_help2", 4, 0, 0, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2064, 2);
					TASK::TASK_PLAY_ANIM(0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_b", 4f, -4f, -1, 49, 0f, false, false, false);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_55, iLocal_61);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
					iLocal_227 = 1;
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, false))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_55, 15f, 15f, 15f, false, true, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		}
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_55, 8f, 8f, 8f, false, true, 0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_228 = 1;
				if (HUD::DOES_BLIP_EXIST(iLocal_57))
				{
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57, true);
				}
				TASK::CLEAR_PED_TASKS(iLocal_55);
				__LIB_37__::func_799(&uLocal_62, "lurinau", "lurin_help", 4, 0, 0, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, false))
				{
					SYSTEM::SETTIMERB(0);
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_55);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2064, 2);
					TASK::TASK_STAND_STILL(0, 1000);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_51, 2f, -1, 0.25f, 512, 80.1325f);
					TASK::TASK_PLAY_ANIM(0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_b", 4f, -4f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_55, iLocal_61);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
					Local_49 = { 40f, 40f, 30f };
				}
			}
			else if (!iLocal_234)
			{
				__LIB_6__::func_833();
				SYSTEM::WAIT(0);
				if (!__LIB_0__::func_75())
				{
					if (!PED::IS_PED_INJURED(iLocal_55))
					{
						__LIB_37__::func_799(&uLocal_62, "lurinau", "lurin_girlca", 4, 0, 0, 0);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 3076, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_55, iLocal_61);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
						iLocal_234 = 1;
					}
				}
			}
		}
	}
}

void func_117()//Position - 0x48F0
{
	func_119();
	STREAMING::REQUEST_MODEL(joaat("A_M_M_Tramp_01"));
	STREAMING::REQUEST_MODEL(joaat("A_F_M_SkidRow_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_wallet_01_s"));
	STREAMING::REQUEST_ANIM_DICT("random@mugging5");
	STREAMING::REQUEST_ANIM_DICT("random@gang_intimidation@");
	AUDIO::PREPARE_MUSIC_EVENT("RE35_OS");
	while ((((!STREAMING::HAS_MODEL_LOADED(joaat("A_F_M_SkidRow_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Tramp_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_wallet_01_s"))) || !STREAMING::HAS_ANIM_DICT_LOADED("random@mugging5")) || !STREAMING::HAS_ANIM_DICT_LOADED("random@gang_intimidation@"))
	{
		SYSTEM::WAIT(0);
	}
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_47 - Vector(10f, 30f, 30f), Local_47 + Vector(10f, 30f, 30f), false, true, true, true);
	PED::ADD_RELATIONSHIP_GROUP("mugger", &iLocal_54);
	iLocal_55 = PED::CREATE_PED(19, joaat("A_F_M_SkidRow_01"), Local_50, 79.765f, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_55, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_55, 185, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_55, 128, true);
	AUDIO::STOP_PED_SPEAKING(iLocal_55, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_55, iLocal_54);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_54, joaat("PLAYER"));
	TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
	TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 3076, 2);
	TASK::TASK_PLAY_ANIM(0, "random@mugging5", "ig_1_girl_agitated_loop", 2f, -2f, -1, 1, 0f, false, false, false);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_55, iLocal_61);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_61);
	iLocal_56 = PED::CREATE_PED(7, joaat("A_M_M_Tramp_01"), Local_48, fLocal_53, true, true);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_56, "A_M_M_TRAMP_01_BLACK_MINI_01");
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_56, 128, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_56, true, 0f);
	AUDIO::STOP_PED_SPEAKING(iLocal_56, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_56, iLocal_54);
	TASK::TASK_LOOK_AT_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
	__LIB_0__::func_203(&uLocal_62, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	__LIB_0__::func_203(&uLocal_62, 4, iLocal_55, "HOBOFEMALE", 0, 1);
	__LIB_0__::func_203(&uLocal_62, 5, iLocal_56, "HOBOMALE", 0, 1);
	iLocal_45 = 1;
}

void func_119()//Position - 0x4B77
{
	Local_48 = { 879.8144f, -1047.4327f, 32.0067f };
	fLocal_53 = 237.0934f;
	Local_50 = { 862.9633f, -1049.8569f, 28.5362f };
	Local_49 = { 15f, 15f, 15f };
	Local_51 = { 881.1367f, -1050.706f, 32.0067f };
	Local_52 = { 876.7977f, -1052.5198f, 32.0067f };
}

void func_179()//Position - 0x7F41
{
	if (iLocal_46)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		__LIB_8__::func_770(0);
		AUDIO::CANCEL_MUSIC_EVENT("RE35_OS");
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		OBJECT::DELETE_OBJECT(&uLocal_60);
		if (!PED::IS_PED_INJURED(iLocal_55))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
			TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_55, iLocal_61);
			PED::SET_PED_KEEP_TASK(iLocal_55, true);
		}
		if (!PED::IS_PED_INJURED(iLocal_56))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_61);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
			TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_61);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_56, iLocal_61);
			PED::SET_PED_KEEP_TASK(iLocal_56, true);
		}
	}
	Global_113381 = 0;
	__LIB_41__::func_466(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

