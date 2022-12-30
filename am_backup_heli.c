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
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
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
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	float fLocal_58 = 0f;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61[3] = { 0f, 0f, 0f };
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
	struct<2> Local_227 = { 0, 0 } ;
	var uLocal_228 = 745926877;
	var uLocal_229 = 0;
	var uLocal_230 = 3;
	var uLocal_231 = 0;
	var uLocal_232 = -839953400;
	var uLocal_233 = 0;
	var uLocal_234 = -839953400;
	var uLocal_235 = 0;
	var uLocal_236 = -839953400;
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
	int iLocal_248[2] = { 0, 0 };
	struct<21> Local_249 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_58 = -1f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_109(ScriptParam_249);
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_96();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			__LIB_0__::func_467();
			func_93();
			switch (func_92(NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				case 0:
					if (func_91() > 0)
					{
						iLocal_248[NETWORK::PARTICIPANT_ID_TO_INT()] = 2;
					}
					break;
				case 2:
					func_59();
					if (func_91() == 3)
					{
						iLocal_248[NETWORK::PARTICIPANT_ID_TO_INT()] = 3;
					}
					break;
				case 3:
					func_96();
					break;
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				switch (func_91())
				{
					case 0:
						Local_227.f_0 = 2;
						break;
					case 2:
						func_1();
						break;
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()//Position - 0x12D
{
	func_7();
	if (Local_227.f_1.f_2 == 5)
	{
		Local_227.f_0 = 3;
	}
	if (__LIB_0__::func_864(&(Local_227.f_1.f_19)))
	{
		if (__LIB_0__::func_937(&(Local_227.f_1.f_19), 20000, 0))
		{
			Local_227.f_0 = 3;
		}
	}
	if (__LIB_0__::func_945())
	{
		Local_227.f_0 = 3;
	}
	if (bLocal_48)
	{
		if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			Local_227.f_0 = 3;
		}
	}
	else if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		Local_227.f_0 = 3;
	}
	if (__LIB_1__::func_24())
	{
		Local_227.f_0 = 3;
	}
}

void func_7()//Position - 0x261
{
	switch (Local_227.f_1.f_2)
	{
		case 0:
			func_58(1);
			break;
		case 1:
			if (func_38())
			{
				if (func_25())
				{
					__LIB_0__::func_795(&(Local_227.f_1.f_17), 0, 0);
					func_58(2);
				}
			}
			break;
		case 2:
			func_16();
			func_14();
			if (!__LIB_0__::func_939(Local_227.f_1))
			{
				if ((__LIB_0__::func_951(Local_227.f_1.f_3[0 /*2*/]) && __LIB_0__::func_951(Local_227.f_1.f_3[1 /*2*/])) && __LIB_0__::func_951(Local_227.f_1.f_3[2 /*2*/]))
				{
					func_58(5);
				}
			}
			else if (__LIB_0__::func_951(Local_227.f_1.f_3[0 /*2*/]))
			{
				if (__LIB_0__::func_951(Local_227.f_1.f_3[1 /*2*/]) && __LIB_0__::func_951(Local_227.f_1.f_3[2 /*2*/]))
				{
					func_58(5);
				}
			}
			else if (__LIB_0__::func_951(Local_227.f_1.f_3[1 /*2*/]) && __LIB_0__::func_951(Local_227.f_1.f_3[2 /*2*/]))
			{
				func_58(3);
			}
			else
			{
				if (__LIB_0__::func_864(&(Local_227.f_1.f_17)))
				{
					if (__LIB_0__::func_937(&(Local_227.f_1.f_17), 120000, 0))
					{
						func_58(3);
					}
				}
				if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 0))
				{
					func_58(3);
				}
				if (bLocal_52)
				{
					func_58(3);
				}
				if (__LIB_1__::func_386(PLAYER::PLAYER_ID(), 136))
				{
					func_58(3);
				}
			}
			break;
		case 3:
			func_16();
			if (!__LIB_0__::func_939(Local_227.f_1))
			{
				if ((__LIB_0__::func_951(Local_227.f_1.f_3[0 /*2*/]) && __LIB_0__::func_951(Local_227.f_1.f_3[1 /*2*/])) && __LIB_0__::func_951(Local_227.f_1.f_3[2 /*2*/]))
				{
					func_58(5);
				}
			}
			else if (__LIB_0__::func_951(Local_227.f_1.f_3[0 /*2*/]))
			{
				if (__LIB_0__::func_951(Local_227.f_1.f_3[1 /*2*/]) && __LIB_0__::func_951(Local_227.f_1.f_3[2 /*2*/]))
				{
					func_58(5);
				}
			}
			break;
		case 5:
			break;
	}
}

void func_14()//Position - 0x524
{
	if (Global_2703735.f_3689)
	{
		__LIB_1__::func_395(1, 600000);
		bLocal_52 = true;
	}
	if (Global_2703735.f_3688 >= 250f)
	{
		__LIB_1__::func_395(1, 600000);
		bLocal_52 = true;
	}
}

void func_16()//Position - 0x590
{
	iLocal_56 = 0;
	iLocal_57 = 0;
	if (__LIB_0__::func_939(Local_227.f_1))
	{
		iLocal_56++;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_227.f_1)))
	{
		__LIB_1__::func_387(&(Local_227.f_1));
		iLocal_56++;
	}
	if (__LIB_0__::func_951(Local_227.f_1.f_3[0 /*2*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_227.f_1.f_3[0 /*2*/]))
		{
			__LIB_1__::func_387(&(Local_227.f_1.f_3[0 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (__LIB_0__::func_951(Local_227.f_1.f_3[1 /*2*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_227.f_1.f_3[1 /*2*/]))
		{
			__LIB_1__::func_387(&(Local_227.f_1.f_3[1 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (__LIB_0__::func_951(Local_227.f_1.f_3[2 /*2*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_227.f_1.f_3[2 /*2*/]))
		{
			__LIB_1__::func_387(&(Local_227.f_1.f_3[2 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) != iLocal_56)
	{
		if (__LIB_1__::func_690(iLocal_56, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_56);
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != iLocal_57)
	{
		if (__LIB_2__::func_99(iLocal_57, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(iLocal_57);
		}
	}
}

int func_25()//Position - 0x92A
{
	if (__LIB_0__::func_799(Local_227.f_1.f_1))
	{
		if (__LIB_0__::func_799(Local_227.f_1.f_3[0 /*2*/].f_1))
		{
			if (!__LIB_0__::func_939(Local_227.f_1))
			{
				if (__LIB_0__::func_957(&(Local_227.f_1), Local_227.f_1.f_1, Local_227.f_1.f_10, 0f, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0))
				{
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_227.f_1));
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_227.f_1), true, true, false);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_227.f_1));
					ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_227.f_1), true);
					__LIB_2__::func_838(NETWORK::NET_TO_VEH(Local_227.f_1), 4);
					Global_2703735.f_3683 = NETWORK::NET_TO_VEH(Local_227.f_1);
					if (__LIB_0__::func_930(&(Local_227.f_1.f_3[0 /*2*/]), Local_227.f_1, 4, Local_227.f_1.f_3[0 /*2*/].f_1, -1, 1, 1, 1))
					{
						__LIB_3__::func_435(Local_227.f_1.f_3[0 /*2*/]);
						func_26(NETWORK::NET_TO_PED(Local_227.f_1.f_3[0 /*2*/]), 0, 0, 1);
						NETWORK::NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(NETWORK::NET_TO_PED(Local_227.f_1.f_3[0 /*2*/]), PLAYER::PLAYER_ID());
						__LIB_2__::func_838(NETWORK::NET_TO_PED(Local_227.f_1.f_3[0 /*2*/]), 4);
						Global_2703735.f_3684[0] = NETWORK::NET_TO_PED(Local_227.f_1.f_3[0 /*2*/]);
						if (__LIB_0__::func_930(&(Local_227.f_1.f_3[1 /*2*/]), Local_227.f_1, 4, Local_227.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							__LIB_3__::func_435(Local_227.f_1.f_3[1 /*2*/]);
							func_26(NETWORK::NET_TO_PED(Local_227.f_1.f_3[1 /*2*/]), 1, 1, 1);
							NETWORK::NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(NETWORK::NET_TO_PED(Local_227.f_1.f_3[1 /*2*/]), PLAYER::PLAYER_ID());
							__LIB_2__::func_838(NETWORK::NET_TO_PED(Local_227.f_1.f_3[1 /*2*/]), 4);
							Global_2703735.f_3684[1] = NETWORK::NET_TO_PED(Local_227.f_1.f_3[1 /*2*/]);
							if (__LIB_0__::func_930(&(Local_227.f_1.f_3[2 /*2*/]), Local_227.f_1, 4, Local_227.f_1.f_3[2 /*2*/].f_1, 2, 1, 1, 1))
							{
								__LIB_3__::func_435(Local_227.f_1.f_3[2 /*2*/]);
								func_26(NETWORK::NET_TO_PED(Local_227.f_1.f_3[2 /*2*/]), 2, 1, 1);
								NETWORK::NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(NETWORK::NET_TO_PED(Local_227.f_1.f_3[2 /*2*/]), PLAYER::PLAYER_ID());
								__LIB_2__::func_838(NETWORK::NET_TO_PED(Local_227.f_1.f_3[2 /*2*/]), 4);
								Global_2703735.f_3684[2] = NETWORK::NET_TO_PED(Local_227.f_1.f_3[2 /*2*/]);
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_26(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xB62
{
	WEAPON::GIVE_DELAYED_WEAPON_TO_PED(iParam0, joaat("WEAPON_ASSAULTRIFLE"), 300, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, false);
	PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
	PED::SET_PED_COMBAT_ABILITY(iParam0, 1);
	PED::SET_PED_COMBAT_RANGE(iParam0, 2);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam0, true);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, true);
	PED::SET_PED_SEEING_RANGE(iParam0, (fLocal_61[iParam1] + 100f));
	PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, 400f);
	PED::SET_COMBAT_FLOAT(iParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			ENTITY::SET_ENTITY_MAX_HEALTH(iParam0, 250);
			ENTITY::SET_ENTITY_HEALTH(iParam0, 250, 0);
			PED::SET_PED_ARMOUR(iParam0, 250);
		}
	}
	else
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
	}
}

int func_38()//Position - 0x1010
{
	struct<3> Var0;
	if (__LIB_0__::func_86(Local_227.f_1.f_10))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Var0 = { __LIB_1__::func_657(__LIB_0__::func_85(PLAYER::PLAYER_ID()), 0f, (-200f * SYSTEM::SIN((SYSTEM::TO_FLOAT(Local_227.f_1.f_15) * 30f))), (200f * SYSTEM::COS((SYSTEM::TO_FLOAT(Local_227.f_1.f_15) * 30f))), 0f) };
				Var0.f_2 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(Var0.f_0, Var0.f_1);
				Var0.f_2 = (Var0.f_2 + 30f);
				if (__LIB_1__::func_408(Var0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Local_227.f_1.f_10 = { Var0 };
					return 1;
				}
				else
				{
					Local_227.f_1.f_15++;
					if (Local_227.f_1.f_15 >= 12)
					{
						Local_227.f_1.f_15 = 0;
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_58(int iParam0)//Position - 0x1801
{
	Local_227.f_1.f_2 = iParam0;
}

void func_59()//Position - 0x1811
{
	func_89();
	func_60();
}

void func_60()//Position - 0x1821
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (Local_227.f_1.f_2)
	{
		case 0:
			__LIB_1__::func_390();
			break;
		case 1:
			__LIB_1__::func_390();
			break;
		case 2:
			if (__LIB_0__::func_939(Local_227.f_1))
			{
				iVar1 = NETWORK::NET_TO_VEH(Local_227.f_1);
				if (!HUD::DOES_BLIP_EXIST(iLocal_47))
				{
					iLocal_47 = HUD::ADD_BLIP_FOR_ENTITY(iVar1);
					HUD::SET_BLIP_SPRITE(iLocal_47, 422);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_47, false);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_47, "MPCT_MERRY3" /* GXT: Backup Helicopter */);
					__LIB_1__::func_540(&iLocal_47, 1);
				}
				if (__LIB_1__::func_388(Local_227.f_1))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_227.f_1))
					{
						if (__LIB_3__::func_434())
						{
							if (!VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(iVar1))
							{
								VEHICLE::SET_VEHICLE_SEARCHLIGHT(iVar1, true, false);
							}
						}
						else if (VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(iVar1))
						{
							VEHICLE::SET_VEHICLE_SEARCHLIGHT(iVar1, false, false);
						}
					}
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_227.f_1.f_3[0 /*2*/]))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_227.f_1.f_3[0 /*2*/]);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						iVar2 = TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar1);
						if (iVar2 != 23 || fLocal_61[0] != fLocal_58)
						{
							if (__LIB_1__::func_388(Local_227.f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_227.f_1.f_3[0 /*2*/]))
								{
									fLocal_61[0] = fLocal_58;
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
									func_26(iVar0, 0, 0, 0);
									VEHICLE::SET_HELI_BLADES_FULL_SPEED(iVar1);
									VEHICLE::SET_VEHICLE_ENGINE_ON(iVar1, true, true, false);
									if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
									{
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
										{
											TASK::TASK_HELI_MISSION(iVar0, iVar1, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 23, 20f, 40f, -1f, SYSTEM::CEIL(fLocal_61[0]), 10, -1f, 0);
										}
									}
								}
							}
						}
						if (!iLocal_50)
						{
							if (SYSTEM::VDIST(__LIB_0__::func_85(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_227.f_1), true)) <= 50f)
							{
								__LIB_0__::func_960(&uLocal_62, "CT_AUD", "MPCT_HBarr", 12, 0, 0, 0);
								iLocal_50 = 1;
							}
						}
					}
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_227.f_1.f_3[1 /*2*/]))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_227.f_1.f_3[1 /*2*/]);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!PED::IS_PED_IN_COMBAT(iVar0, 0) || fLocal_61[1] != fLocal_58)
						{
							if (__LIB_1__::func_388(Local_227.f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_227.f_1.f_3[1 /*2*/]))
								{
									fLocal_61[1] = fLocal_58;
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
									func_26(iVar0, 1, 0, 0);
								}
							}
						}
					}
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_227.f_1.f_3[2 /*2*/]))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_227.f_1.f_3[2 /*2*/]);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!PED::IS_PED_IN_COMBAT(iVar0, 0) || fLocal_61[2] != fLocal_58)
						{
							if (__LIB_1__::func_388(Local_227.f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_227.f_1.f_3[2 /*2*/]))
								{
									fLocal_61[2] = fLocal_58;
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
									func_26(iVar0, 2, 0, 0);
								}
							}
						}
					}
				}
			}
			if (!__LIB_0__::func_939(Local_227.f_1) || __LIB_0__::func_951(Local_227.f_1.f_3[0 /*2*/]))
			{
				func_61();
			}
			break;
		case 3:
			__LIB_1__::func_390();
			if (!__LIB_0__::func_864(&(Local_227.f_1.f_19)))
			{
				__LIB_0__::func_795(&(Local_227.f_1.f_19), 0, 0);
			}
			if (__LIB_0__::func_939(Local_227.f_1))
			{
				iVar1 = NETWORK::NET_TO_VEH(Local_227.f_1);
				if (!__LIB_0__::func_951(Local_227.f_1.f_3[0 /*2*/]))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_227.f_1.f_3[0 /*2*/]);
					if (iLocal_53 == 0)
					{
						if (__LIB_1__::func_388(Local_227.f_1))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_227.f_1.f_3[0 /*2*/]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
								TASK::CLEAR_PED_TASKS(iVar0);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Global_1837194);
								if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
								{
									if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
									{
										TASK::TASK_HELI_MISSION(iVar0, iVar1, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1f, 0);
										PED::SET_PED_KEEP_TASK(iVar0, true);
										iLocal_53 = 1;
									}
								}
							}
						}
					}
				}
				if (!__LIB_0__::func_951(Local_227.f_1.f_3[1 /*2*/]))
				{
					if (iLocal_54 == 0)
					{
						iVar0 = NETWORK::NET_TO_PED(Local_227.f_1.f_3[1 /*2*/]);
						if (__LIB_1__::func_388(Local_227.f_1))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_227.f_1.f_3[1 /*2*/]))
							{
								TASK::CLEAR_PED_TASKS(iVar0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
								PED::SET_PED_KEEP_TASK(iVar0, true);
								iLocal_54 = 1;
							}
						}
					}
					if (!iLocal_51)
					{
						if (SYSTEM::VDIST(__LIB_0__::func_85(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_227.f_1), true)) <= 50f)
						{
							__LIB_0__::func_960(&uLocal_62, "CT_AUD", "MPCT_HBleav", 12, 0, 0, 0);
							iLocal_51 = 1;
						}
					}
				}
				if (!__LIB_0__::func_951(Local_227.f_1.f_3[2 /*2*/]))
				{
					if (iLocal_55 == 0)
					{
						iVar0 = NETWORK::NET_TO_PED(Local_227.f_1.f_3[2 /*2*/]);
						if (__LIB_1__::func_388(Local_227.f_1))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_227.f_1.f_3[2 /*2*/]))
							{
								TASK::CLEAR_PED_TASKS(iVar0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
								PED::SET_PED_KEEP_TASK(iVar0, true);
								iLocal_55 = 1;
							}
						}
					}
				}
			}
			if (!__LIB_0__::func_939(Local_227.f_1) || __LIB_0__::func_951(Local_227.f_1.f_3[0 /*2*/]))
			{
				func_61();
			}
			break;
		case 5:
			__LIB_1__::func_390();
			break;
	}
}

void func_61()//Position - 0x1D02
{
	int iVar0;
	if (!__LIB_0__::func_951(Local_227.f_1.f_3[0 /*2*/]))
	{
		if (__LIB_1__::func_388(Local_227.f_1.f_3[0 /*2*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_227.f_1.f_3[0 /*2*/]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_227.f_1.f_3[0 /*2*/]);
				ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
			}
		}
	}
	if (!__LIB_0__::func_951(Local_227.f_1.f_3[1 /*2*/]))
	{
		if (__LIB_1__::func_388(Local_227.f_1.f_3[1 /*2*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_227.f_1.f_3[1 /*2*/]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_227.f_1.f_3[1 /*2*/]);
				ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
			}
		}
	}
	if (!__LIB_0__::func_951(Local_227.f_1.f_3[2 /*2*/]))
	{
		if (__LIB_1__::func_388(Local_227.f_1.f_3[2 /*2*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_227.f_1.f_3[2 /*2*/]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_227.f_1.f_3[2 /*2*/]);
				ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
			}
		}
	}
}

void func_89()//Position - 0x29BC
{
	if (!iLocal_49)
	{
		if (!__LIB_0__::func_951(Local_227.f_1.f_3[0 /*2*/]))
		{
			__LIB_0__::func_222(&uLocal_62, 3, NETWORK::NET_TO_PED(Local_227.f_1.f_3[0 /*2*/]), "FM_HBACK", 1, 1);
			iLocal_49 = 1;
		}
	}
}

int func_91()//Position - 0x2A92
{
	return Local_227.f_0;
}

int func_92(int iParam0)//Position - 0x2A9C
{
	return iLocal_248[iParam0];
}

void func_93()//Position - 0x2AAA
{
	bool bVar0;
	struct<3> Var1;
	if (fLocal_58 == -1f)
	{
		bVar0 = true;
	}
	else if (!__LIB_0__::func_864(&uLocal_59))
	{
		__LIB_0__::func_795(&uLocal_59, 0, 0);
	}
	else if (__LIB_0__::func_937(&uLocal_59, 5000, 0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Var1 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
		fLocal_58 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(Var1.f_0, Var1.f_1);
		if (fLocal_58 < 85f)
		{
			fLocal_58 = 85f;
		}
		__LIB_0__::clearF_1Prop(&uLocal_59);
	}
}

void func_96()//Position - 0x2B2E
{
	var uVar0;
	var uVar1;
	Global_2703735.f_3683 = uVar0;
	Global_2703735.f_3684[0] = uVar1;
	Global_2703735.f_3684[1] = uVar1;
	Global_2703735.f_3684[2] = uVar1;
	Global_2703735.f_3688 = 0f;
	Global_2703735.f_3689 = 0;
	__LIB_0__::func_954(__LIB_0__::func_943(1, 1), 10, __LIB_0__::getMinusOneOrNull());
	__LIB_0__::func_202();
}

void func_109(struct<21> Param0)//Position - 0x2D64
{
	__LIB_0__::func_935(__LIB_1__::func_32(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(3);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_227, 22, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&iLocal_248, 3, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!__LIB_0__::func_934())
	{
		func_96();
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		bLocal_48 = true;
	}
	__LIB_1__::func_392(62, 1);
	iLocal_248[NETWORK::PARTICIPANT_ID_TO_INT()] = 0;
}

