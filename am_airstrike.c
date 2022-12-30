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
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_61 = { 0, 0, 0 } ;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 16;
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
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	var uLocal_237 = 0;
	struct<57> Local_238 = { 0, 0, 0, -1281684762, 0, 0, -163714847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_239 = 0;
	struct<5> Local_240[2];
	struct<21> Local_241 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_116(ScriptParam_241);
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_103();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			__LIB_0__::func_467();
			switch (func_101(NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				case 0:
					if (func_100() > 0)
					{
						Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 2;
					}
					break;
				case 2:
					func_99();
					if (func_100() == 3)
					{
						Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 3;
					}
					break;
				case 3:
					func_103();
					break;
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				switch (func_100())
				{
					case 0:
						Local_238.f_0 = 2;
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

void func_1()//Position - 0x129
{
	switch (Local_238.f_1)
	{
		case 0:
			func_53();
			break;
		case 1:
			__LIB_0__::func_467();
			break;
	}
	if (Local_238.f_2.f_2 == 3 && iLocal_57 == 0)
	{
		Local_238.f_0 = 3;
	}
	func_45();
	if (Local_238.f_53 && Local_238.f_50 < 10)
	{
		func_13();
	}
	if (Local_238.f_50 >= 10)
	{
		if (!__LIB_0__::func_864(&uLocal_65))
		{
			__LIB_0__::func_795(&uLocal_65, 0, 0);
		}
		else if (__LIB_0__::func_937(&uLocal_65, 10000, 0))
		{
			Local_238.f_0 = 3;
		}
	}
	if (__LIB_0__::func_945())
	{
		Local_238.f_0 = 3;
	}
	if (!BitTest(Global_44241, 10))
	{
		if (Local_238.f_55 == 1)
		{
			if (!Local_238.f_56)
			{
				if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || __LIB_0__::func_1("AIRSTRIKE_1" /* GXT: Throw a Flare to mark an area for the Airstrike to hit. If you do not mark an area with a Flare before the jet arrives it will leave without deploying any bombs. */)) || __LIB_0__::func_1("AIRSTRIKE_2" /* GXT: JET RANGE */)) || __LIB_0__::func_1("AIRSTRIKE_4" /* GXT: Throw a flare to mark an area for the airstrike to hit. If you do not mark an area with a flare before the jet arrives it will leave without deploying any bombs. You cannot throw flares while piloting an air vehicle. */))
				{
					__LIB_0__::func_151("AIRSTRIKE_3" /* GXT: If you throw a flare in an interior the jet will not be able to see it and will not deploy any bombs. */, -1);
					Local_238.f_56 = 1;
				}
			}
		}
	}
	if (bLocal_52)
	{
		if (!__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
		{
			Local_238.f_0 = 3;
		}
	}
	else if (__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0) || __LIB_1__::func_381())
	{
		Local_238.f_0 = 3;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		Local_238.f_0 = 3;
	}
	if (Global_2788199.f_224 || __LIB_0__::func_927(PLAYER::PLAYER_ID()))
	{
		Local_238.f_0 = 3;
	}
}

void func_13()//Position - 0x42B
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar3 = 200;
	if (BitTest(Global_44241, 10))
	{
		iVar0 = 0;
		iVar3 = 300;
	}
	if (__LIB_0__::func_86(Local_61))
	{
		if (__LIB_0__::func_939(Local_238.f_2))
		{
			Local_61 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_238.f_2), true) };
			Local_61.f_2 = (Local_61.f_2 - 5f);
		}
	}
	switch (Local_238.f_50)
	{
		case 0:
			if (!__LIB_0__::func_864(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("WEAPON_AIRSTRIKE_ROCKET"), PLAYER::PLAYER_PED_ID(), true, false, -1f, iVar0, true, true, 0, false, 0, 0, 0);
					__LIB_0__::func_795(&(Local_238.f_51), 0, 0);
					iLocal_57 = 1;
					MISC::SET_BIT(&uLocal_237, Local_238.f_50);
					if (__LIB_15__::func_305())
					{
						if (__LIB_1__::func_35())
						{
							__LIB_0__::func_787(&uLocal_69, "HS4FAUD", "HS4F_SAAIP1", 12, 0, 0, 0);
						}
					}
				}
			}
			else if (__LIB_0__::func_937(&(Local_238.f_51), 750, 0))
			{
				__LIB_0__::clearF_1Prop(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		case 1:
			if (!__LIB_0__::func_864(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("WEAPON_AIRSTRIKE_ROCKET"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, 0, false, 0, 0, 0);
					__LIB_0__::func_795(&(Local_238.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_237, Local_238.f_50);
				}
			}
			else if (__LIB_0__::func_937(&(Local_238.f_51), 500, 0))
			{
				__LIB_0__::clearF_1Prop(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		case 2:
			if (!__LIB_0__::func_864(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("WEAPON_AIRSTRIKE_ROCKET"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, 0, false, 0, 0, 0);
					__LIB_0__::func_795(&(Local_238.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_237, Local_238.f_50);
				}
			}
			else if (__LIB_0__::func_937(&(Local_238.f_51), 500, 0))
			{
				__LIB_0__::clearF_1Prop(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		case 3:
			if (!__LIB_0__::func_864(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("WEAPON_AIRSTRIKE_ROCKET"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, 0, false, 0, 0, 0);
					__LIB_0__::func_795(&(Local_238.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_237, Local_238.f_50);
				}
			}
			else if (__LIB_0__::func_937(&(Local_238.f_51), 750, 0))
			{
				__LIB_0__::clearF_1Prop(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		case 4:
			if (!__LIB_0__::func_864(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("WEAPON_AIRSTRIKE_ROCKET"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, 0, false, 0, 0, 0);
					__LIB_0__::func_795(&(Local_238.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_237, Local_238.f_50);
				}
			}
			else if (__LIB_0__::func_937(&(Local_238.f_51), 500, 0))
			{
				__LIB_0__::clearF_1Prop(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		case 5:
			if (!__LIB_0__::func_864(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("WEAPON_AIRSTRIKE_ROCKET"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, 0, false, 0, 0, 0);
					__LIB_0__::func_795(&(Local_238.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_237, Local_238.f_50);
				}
			}
			else if (__LIB_0__::func_937(&(Local_238.f_51), 750, 0))
			{
				__LIB_0__::clearF_1Prop(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		case 6:
			if (!__LIB_0__::func_864(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("WEAPON_AIRSTRIKE_ROCKET"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, 0, false, 0, 0, 0);
					__LIB_0__::func_795(&(Local_238.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_237, Local_238.f_50);
				}
			}
			else if (__LIB_0__::func_937(&(Local_238.f_51), 500, 0))
			{
				__LIB_0__::clearF_1Prop(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		case 7:
			if (!__LIB_0__::func_864(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("WEAPON_AIRSTRIKE_ROCKET"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, 0, false, 0, 0, 0);
					__LIB_0__::func_795(&(Local_238.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_237, Local_238.f_50);
				}
			}
			else if (__LIB_0__::func_937(&(Local_238.f_51), 500, 0))
			{
				__LIB_0__::clearF_1Prop(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		case 8:
			if (!__LIB_0__::func_864(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("WEAPON_AIRSTRIKE_ROCKET"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, 0, false, 0, 0, 0);
					__LIB_0__::func_795(&(Local_238.f_51), 0, 0);
					MISC::SET_BIT(&uLocal_237, Local_238.f_50);
				}
			}
			else if (__LIB_0__::func_937(&(Local_238.f_51), 500, 0))
			{
				__LIB_0__::clearF_1Prop(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		case 9:
			if (!__LIB_0__::func_864(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), false, false);
					Var2.f_2 = (Var2.f_2 - 25f);
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var1, Var2, iVar3, true, joaat("WEAPON_AIRSTRIKE_ROCKET"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), true, false, -1f, iVar0, true, false, 0, false, 0, 0, 0);
					Local_238.f_50++;
					iLocal_57 = 0;
					MISC::SET_BIT(&uLocal_237, Local_238.f_50);
				}
			}
			break;
	}
}

void func_45()//Position - 0x1818
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	if (__LIB_0__::func_939(Local_238.f_2))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_238.f_2);
		Var2 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
	}
	if (!iLocal_59)
	{
		if (!__LIB_0__::func_86(Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2))
		{
			Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 };
		}
		else if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
	}
	if (iLocal_58 && !BitTest(Global_44241, 10))
	{
		if (!iLocal_59)
		{
			if (__LIB_0__::func_939(Local_238.f_2))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_60, 75f, 75f, 1000f, false, true, 0))
				{
					fLocal_62 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Var1, false);
				}
				else
				{
					iLocal_59 = 1;
				}
			}
			else
			{
				iLocal_59 = 1;
			}
		}
		else
		{
			fLocal_62 = (fLocal_62 - 3.75f);
		}
		iVar3 = SYSTEM::FLOOR(fLocal_62);
		if (fLocal_62 <= 200f)
		{
			iVar4 = 6;
		}
		else
		{
			iVar4 = 1;
		}
		if (fLocal_62 >= 0f)
		{
			__LIB_16__::func_623(iVar3, "AIRSTRIKE_2" /* GXT: JET RANGE */, -1, iVar4, 2, 0, "AIRSTRIKE_6" /* GXT: ~1~ m */, 0, 0f, 0, 0, iVar4, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
		}
	}
}

void func_53()//Position - 0x1CA6
{
	struct<3> Var0;
	bool bVar1;
	func_97();
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!iLocal_56 && !BitTest(Global_44241, 10))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) <= 0)
				{
					bVar1 = !__LIB_0__::func_329();
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_FLARE"), 1, bVar1, bVar1);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_FLARE"), bVar1);
					iLocal_56 = 1;
				}
			}
			else if (BitTest(Global_44241, 10) || MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_FLARE"), 100f, &(Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), true))
			{
				if (BitTest(Global_44241, 10))
				{
					Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				}
				else if (__LIB_0__::func_78(Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0f, 0f, 0f, 0))
				{
					Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = { Var0 };
				}
				if (__LIB_0__::func_1("AIRSTRIKE_1" /* GXT: Throw a Flare to mark an area for the Airstrike to hit. If you do not mark an area with a Flare before the jet arrives it will leave without deploying any bombs. */))
				{
					HUD::CLEAR_HELP(true);
				}
				if (!iLocal_55)
				{
					if (!__LIB_0__::func_951(Local_238.f_2.f_3))
					{
						if (__LIB_0__::func_939(Local_238.f_2))
						{
							func_93();
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_238.f_2.f_3));
							TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_238.f_2.f_3), iLocal_49);
							VEHICLE::SET_TASK_VEHICLE_GOTO_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(NETWORK::NET_TO_VEH(Local_238.f_2), SYSTEM::ROUND(50f));
							iLocal_55 = 1;
						}
					}
				}
			}
			else if (!iLocal_54 && !BitTest(Global_44241, 10))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (func_92(PLAYER::PLAYER_PED_ID()))
					{
						__LIB_0__::func_151("AIRSTRIKE_4" /* GXT: Throw a flare to mark an area for the airstrike to hit. If you do not mark an area with a flare before the jet arrives it will leave without deploying any bombs. You cannot throw flares while piloting an air vehicle. */, -1);
					}
					else
					{
						__LIB_0__::func_151("AIRSTRIKE_1" /* GXT: Throw a Flare to mark an area for the Airstrike to hit. If you do not mark an area with a Flare before the jet arrives it will leave without deploying any bombs. */, -1);
					}
					iLocal_54 = 1;
				}
			}
		}
	}
	func_63();
	func_54();
}

void func_54()//Position - 0x1E3B
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	switch (Local_238.f_2.f_2)
	{
		case 0:
			__LIB_1__::func_390();
			break;
		case 1:
			__LIB_1__::func_390();
			break;
		case 2:
			if (__LIB_0__::func_939(Local_238.f_2))
			{
				iLocal_58 = 1;
				iVar0 = NETWORK::NET_TO_VEH(Local_238.f_2);
				if (!HUD::DOES_BLIP_EXIST(iLocal_47))
				{
					iLocal_47 = HUD::ADD_BLIP_FOR_ENTITY(iVar0);
					HUD::SET_BLIP_SPRITE(iLocal_47, 16);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_47, func_60());
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_47, false);
				}
				else
				{
					HUD::SET_BLIP_ROTATION(iLocal_47, SYSTEM::CEIL(ENTITY::GET_ENTITY_HEADING(iVar0)));
				}
				if (!iLocal_53)
				{
					if (!__LIB_0__::func_86(Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2))
					{
						Var3 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 };
					}
					else
					{
						Var3 = { Local_60 };
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, ENTITY::GET_ENTITY_COORDS(iVar0, true), true) <= (60f * 5f))
					{
						AUDIO::PLAY_STREAM_FROM_VEHICLE(NETWORK::NET_TO_VEH(Local_238.f_2));
						iLocal_53 = 1;
					}
				}
				if (!iLocal_235 && !BitTest(Global_44241, 10))
				{
					if (!Local_238.f_54)
					{
						if (!__LIB_0__::func_951(Local_238.f_2.f_3))
						{
							if (!__LIB_0__::func_86(Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_0__::func_85(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_238.f_2.f_3), true), false) <= 250f)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, ENTITY::GET_ENTITY_COORDS(iVar0, true), true) >= (60f * 2.5f))
									{
										if (__LIB_15__::func_305())
										{
											if (__LIB_1__::func_35())
											{
												__LIB_0__::func_787(&uLocal_69, "HS4FAUD", "HS4F_SAACI1", 12, 0, 0, 0);
											}
											else
											{
												__LIB_0__::func_960(&uLocal_69, "CT_AUD", "MPCT_ASarr", 12, 0, 0, 0);
											}
										}
										iLocal_235 = 1;
									}
								}
							}
						}
					}
				}
				if (Local_238.f_50 < 10)
				{
					if (!Local_238.f_53)
					{
						if (!__LIB_0__::func_86(Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2))
						{
							if (func_57() == 2)
							{
								if (!__LIB_0__::func_864(&uLocal_63))
								{
									__LIB_0__::func_795(&uLocal_63, 0, 0);
								}
								else if (__LIB_0__::func_937(&uLocal_63, 7500, 0))
								{
									Local_238.f_53 = 1;
								}
								Var1 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 - Vector(1000f, 25f, 25f) };
								Var2 = { Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(1000f, 25f, 25f) };
								Var1.f_2 = -200f;
								Var2.f_2 = 1500f;
								if (ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 75f, 75f, 1000f, false, true, 0) && MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var2, joaat("WEAPON_FLARE"), false))
								{
									Local_238.f_53 = 1;
								}
							}
							else if (func_57() == 1)
							{
								Local_238.f_53 = 1;
								Local_238.f_50 = 100;
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_60, 75f, 75f, 1000f, false, true, 0))
						{
							Local_238.f_53 = 1;
							Local_238.f_50 = 100;
							Local_238.f_54 = 1;
							if (!iLocal_236 && !BitTest(Global_44241, 10))
							{
								if (__LIB_15__::func_305())
								{
									if (!__LIB_1__::func_35())
									{
										__LIB_0__::func_960(&uLocal_69, "CT_AUD", "MPCT_ASflr", 12, 0, 0, 0);
									}
								}
								iLocal_236 = 1;
							}
						}
					}
				}
			}
			if (!__LIB_0__::func_939(Local_238.f_2) || __LIB_0__::func_951(Local_238.f_2.f_3))
			{
				func_55();
			}
			break;
		case 3:
			__LIB_1__::func_390();
			break;
	}
}

void func_55()//Position - 0x2179
{
	int iVar0;
	if (!__LIB_0__::func_951(Local_238.f_2.f_3))
	{
		if (__LIB_1__::func_388(Local_238.f_2.f_3))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_238.f_2.f_3))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_238.f_2.f_3);
				ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
			}
		}
	}
}

int func_57()//Position - 0x21E1
{
	if (Local_238.f_55 == 1)
	{
		return Local_238.f_55;
	}
	else if (Local_238.f_55 == 2)
	{
		return Local_238.f_55;
	}
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0.5f, 0f, 0f)))
	{
		Local_238.f_55 = 1;
		return Local_238.f_55;
	}
	Local_238.f_55 = 2;
	return Local_238.f_55;
}

char* func_60()//Position - 0x229D
{
	if (__LIB_0__::func_622())
	{
		return "PA_AIRSTRIKE_BLIP" /* GXT: Bomber */;
	}
	return "AIRSTRIKE_5" /* GXT: Airstrike */;
}

void func_63()//Position - 0x22DA
{
	switch (Local_238.f_2.f_2)
	{
		case 0:
			func_91(1);
			break;
		case 1:
			if (func_64())
			{
				func_91(2);
			}
			break;
		case 2:
			if (!__LIB_0__::func_939(Local_238.f_2))
			{
				if (__LIB_0__::func_951(Local_238.f_2.f_3))
				{
					func_91(3);
				}
			}
			else if (__LIB_0__::func_951(Local_238.f_2.f_3))
			{
				func_91(3);
			}
			break;
		case 3:
			break;
	}
}

int func_64()//Position - 0x2355
{
	if (!__LIB_0__::func_864(&uLocal_67))
	{
		__LIB_0__::func_795(&uLocal_67, 0, 0);
	}
	else if (__LIB_0__::func_799(Local_238.f_2.f_1) && __LIB_0__::func_799(Local_238.f_2.f_3.f_1))
	{
		if (__LIB_0__::func_937(&uLocal_67, 3000, 0))
		{
			if (func_68() && func_65())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_65()//Position - 0x23B2
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_238.f_2.f_3) && __LIB_0__::func_799(Local_238.f_2.f_3.f_1)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_238.f_2))
	{
		if (__LIB_0__::func_939(Local_238.f_2))
		{
			if (__LIB_0__::func_930(&(Local_238.f_2.f_3), Local_238.f_2, 22, Local_238.f_2.f_3.f_1, -1, 1, 1, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_238.f_2.f_3), true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_238.f_2.f_3), Global_1837194);
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_238.f_2.f_3), 0);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_238.f_2.f_3), true);
				func_66();
				TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_238.f_2.f_3), iLocal_48);
				VEHICLE::SET_TASK_VEHICLE_GOTO_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(NETWORK::NET_TO_VEH(Local_238.f_2), SYSTEM::ROUND(50f));
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_238.f_2.f_3))
	{
		return 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_238.f_2.f_3.f_1);
	return 1;
}

void func_66()//Position - 0x2497
{
	if (!iLocal_50)
	{
		if (__LIB_0__::func_939(Local_238.f_2))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
			TASK::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_238.f_2), 0, 0, Local_60 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, SYSTEM::CEIL((50f + 5f)), 2.8E-44f, true);
			TASK::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_238.f_2), 0, 0, Local_238.f_2.f_14, 4, 60f, 25f, -1f, SYSTEM::CEIL((50f + 5f)), 2.8E-44f, true);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
			iLocal_50 = 1;
		}
	}
}

int func_68()//Position - 0x25AF
{
	struct<3> Var0;
	float fVar1;
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_238.f_2))
	{
		if (__LIB_0__::func_799(Local_238.f_2.f_1))
		{
			if (AUDIO::LOAD_STREAM("AIRSTRIKE_FLYOVER", 0))
			{
				func_86(&Var0, &fVar1);
				if (__LIB_1__::func_408(Var0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (__LIB_0__::func_957(&(Local_238.f_2), Local_238.f_2.f_1, Var0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						Local_238.f_2.f_14 = { Var0 * Vector(0f, -1f, -1f) };
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_238.f_2), 2);
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_238.f_2), false);
						ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_238.f_2), true);
						PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_238.f_2));
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_238.f_2), 60f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_238.f_2), true, true, false);
						VEHICLE::SET_VEHICLE_EXTENDED_REMOVAL_RANGE(NETWORK::NET_TO_VEH(Local_238.f_2), 1000);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_238.f_2), false);
						VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_238.f_2), 3);
						VEHICLE::OPEN_BOMB_BAY_DOORS(NETWORK::NET_TO_VEH(Local_238.f_2));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_238.f_2.f_1);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_86(var uParam0, var uParam1)//Position - 0x2F52
{
	float fVar0;
	*uParam0 = { __LIB_1__::func_406(Local_60 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
	fVar0 = PATHFIND::GET_APPROX_HEIGHT_FOR_AREA((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = __LIB_0__::func_932(*uParam0, Local_60);
}

void func_91(int iParam0)//Position - 0x3082
{
	if (iParam0 == 3)
	{
		Global_2815059.f_4457 = 0;
	}
	Local_238.f_2.f_2 = iParam0;
}

int func_92(int iParam0)//Position - 0x30A0
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_HELI(iParam0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_93()//Position - 0x30D6
{
	if (!iLocal_51)
	{
		if (__LIB_0__::func_939(Local_238.f_2))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
			TASK::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_238.f_2), 0, 0, Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, SYSTEM::CEIL((50f + 5f)), 2.8E-44f, true);
			TASK::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_238.f_2), 0, 0, Local_238.f_2.f_14, 4, 60f, 25f, -1f, SYSTEM::CEIL((50f + 5f)), 2.8E-44f, true);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
			iLocal_51 = 1;
		}
	}
}

void func_97()//Position - 0x31E6
{
	char* sVar0;
	if (!iLocal_234 && __LIB_15__::func_305())
	{
		if (!__LIB_0__::func_951(Local_238.f_2.f_3))
		{
			sVar0 = "FM_Pilot_Air";
			if (__LIB_1__::func_35())
			{
				sVar0 = "HS4_AIRSTRIKE1";
			}
			__LIB_0__::func_222(&uLocal_69, 3, NETWORK::NET_TO_PED(Local_238.f_2.f_3), sVar0, 1, 1);
			iLocal_234 = 1;
		}
	}
}

void func_99()//Position - 0x32CF
{
	Global_2815059.f_4456 = Local_238.f_53;
}

int func_100()//Position - 0x32E2
{
	return Local_238.f_0;
}

int func_101(int iParam0)//Position - 0x32EC
{
	return Local_240[iParam0 /*5*/];
}

void func_103()//Position - 0x3303
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_238.f_2.f_3) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_238.f_2))
	{
		if (__LIB_0__::func_939(Local_238.f_2) && !__LIB_0__::func_951(Local_238.f_2.f_3))
		{
			TASK::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_238.f_2.f_3), NETWORK::NET_TO_VEH(Local_238.f_2), 0, PLAYER::PLAYER_PED_ID(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 5.6E-43f, 5.6E-43f, true);
		}
	}
	__LIB_0__::func_954(__LIB_0__::func_943(1, 1), 11, __LIB_0__::getMinusOneOrNull());
	__LIB_0__::func_202();
}

void func_116(struct<21> Param0)//Position - 0x3563
{
	__LIB_0__::func_935(__LIB_1__::func_32(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_238, 58, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_240, 11, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!__LIB_0__::func_934())
	{
		func_103();
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		Local_60 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	}
	if (__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
	{
		bLocal_52 = true;
	}
	__LIB_1__::func_392(64, 1);
	Local_240[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 0;
}

