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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	struct<22> Local_60 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 3, -1, 0, 0, 0, -1861623876, 0 } ;
	var uLocal_61 = 0;
	struct<3> Local_62[32];
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	bool bLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 16;
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
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	struct<21> Local_237 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_146(ScriptParam_237))
		{
			func_140();
		}
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_140();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() != bLocal_67)
		{
			func_140();
		}
		if (NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()) != Local_60.f_17)
		{
			func_140();
		}
		NETWORK::NETWORK_PREVENT_SCRIPT_HOST_MIGRATION();
		switch (__LIB_1__::func_447(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_128())
				{
					if (__LIB_1__::func_446() == 1)
					{
						func_126();
						Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 1;
					}
					else if (__LIB_1__::func_446() == 4)
					{
						Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
					}
				}
				break;
			case 1:
				if (__LIB_1__::func_446() == 1)
				{
					func_108();
				}
				else if (__LIB_1__::func_446() == 4)
				{
					Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			case 3:
				__LIB_1__::func_399(&(Local_60.f_21));
				if (__LIB_1__::func_398(&(Local_60.f_21)))
				{
					Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			case 2:
				Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			case 4:
				func_140();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (__LIB_1__::func_446())
			{
				case 0:
					if (func_78())
					{
						Local_60.f_0 = 1;
					}
					break;
				case 1:
					func_38();
					if (func_1())
					{
						Local_60.f_0 = 4;
					}
					break;
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1B7
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x1CB
{
	if (BitTest(uLocal_63, 8))
	{
		if (!__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!BitTest(Local_60.f_1, 9))
			{
				MISC::SET_BIT(&(Local_60.f_1), 9);
			}
			return 0;
		}
		else if (BitTest(Local_60.f_1, 9))
		{
			return 1;
		}
	}
	if (Local_60.f_12 == 0 || Local_60.f_12 == 1)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_4))
		{
			if (!__LIB_0__::func_939(Local_60.f_2))
			{
				return 1;
			}
			if (__LIB_0__::func_951(Local_60.f_3))
			{
				return 1;
			}
			if (Local_60.f_12 > 0)
			{
				return 1;
			}
		}
		if (BitTest(uLocal_63, 8))
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_60.f_6, 250f, 250f, 250f, false, true, 0))
			{
				if (Local_60.f_18 == 1)
				{
					func_13();
				}
				return 1;
			}
			if (Local_60.f_18 == 1)
			{
				if ((((__LIB_2__::func_100(PLAYER::PLAYER_ID()) && __LIB_1__::func_769() != 151) || __LIB_1__::func_386(PLAYER::PLAYER_ID(), 146)) || __LIB_12__::func_623()) || __LIB_0__::func_945())
				{
					func_13();
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4))
					{
						__LIB_1__::func_445(&(Local_60.f_4));
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_13()//Position - 0x40B
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4))
	{
		if (Global_262145.f_20333 /* Tunable: -156036296 */ > 0)
		{
			__LIB_2__::func_561(Global_262145.f_20333 /* Tunable: -156036296 */, 0);
			__LIB_3__::func_79(Global_262145.f_20333 /* Tunable: -156036296 */, 14, 2, 1);
		}
	}
}

void func_38()//Position - 0x16BD
{
	switch (Local_60.f_12)
	{
		case 0:
			if (Local_60.f_18)
			{
				func_77();
			}
			else
			{
				func_72();
			}
			if (func_42())
			{
				func_41();
				Local_60.f_12 = 1;
			}
			break;
		case 1:
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4))
			{
				func_40(Local_60.f_4, 18);
				if (Local_60.f_15 == 3)
				{
					if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_5))
					{
						Local_60.f_15 = 2;
					}
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
				{
					__LIB_1__::func_387(&(Local_60.f_2));
				}
				else if (Local_60.f_13 == 1)
				{
					Local_60.f_13 = 0;
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_3))
				{
					__LIB_1__::func_387(&(Local_60.f_3));
				}
				else if (Local_60.f_14 == 1)
				{
					Local_60.f_14 = 0;
				}
			}
			break;
		case 2:
			break;
	}
}

void func_40(int iParam0, int iParam1)//Position - 0x17A3
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	float fVar7;
	float fVar8;
	HUD::GET_HUD_COLOUR(iParam1, &iVar3, &iVar4, &iVar5, &uVar6);
	fVar2 = 0.5f;
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_OBJ(iParam0)), &Var0, &Var1);
	fVar7 = ((Var1.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var1.f_2 - fVar7);
	if (fVar2 <= (fVar8 + 0.1f))
	{
		fVar2 = (fVar8 + 0.4f);
	}
	GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(iParam0), true) + Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar3, iVar4, iVar5, 100, true, true, 2, false, 0, 0, false);
}

void func_41()//Position - 0x1849
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_64))
	{
		iLocal_64 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_OBJ(Local_60.f_4));
		if (Local_60.f_18)
		{
			HUD::SET_BLIP_SPRITE(iLocal_64, 84);
			HUD::SET_BLIP_SCALE(iLocal_64, 1.2f);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_64, "AMD_BLIPBALL" /* GXT: Ballistic Armor and Minigun */);
		}
		else
		{
			HUD::SET_BLIP_SPRITE(iLocal_64, 351);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_64, "AMD_BLIPN" /* GXT: Ammo Crate */);
			HUD::SET_BLIP_SCALE(iLocal_64, 0.7f);
		}
		HUD::SET_BLIP_COLOUR(iLocal_64, 2);
		HUD::SET_BLIP_ALPHA(iLocal_64, 120);
	}
}

int func_42()//Position - 0x18BD
{
	if (!BitTest(Local_60.f_1, 7))
	{
		if (__LIB_0__::func_939(Local_60.f_2))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_VEH(Local_60.f_2), Local_60.f_6, 5f, 5f, 600f, false, true, 0))
			{
				MISC::SET_BIT(&(Local_60.f_1), 7);
			}
		}
	}
	else if (func_128())
	{
		if (func_45())
		{
			if (func_43())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_43()//Position - 0x191F
{
	STREAMING::REQUEST_MODEL(Local_60.f_19.f_1);
	if (STREAMING::HAS_MODEL_LOADED(Local_60.f_19.f_1))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_19) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4))
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				if (__LIB_1__::func_671(&(Local_60.f_19), Local_60.f_19.f_1, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_60.f_4), true) - Vector(5f, 0f, 0f), 1, 1, 1, 0, 0, 0, 0))
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_60.f_19, true);
					ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_60.f_19), ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_60.f_4)));
					ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_60.f_4), NETWORK::NET_TO_OBJ(Local_60.f_19), 0, 0f, 0f, 0.25f, 0f, 0f, 0f, false, false, true, false, 2, true, 0);
					OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_60.f_19), true);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(Local_60.f_19), false);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_60.f_19));
					ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_60.f_19), 0f, 0f, -0.2f);
					PHYSICS::SET_DISABLE_BREAKING(NETWORK::NET_TO_OBJ(Local_60.f_19), true);
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_19))
	{
		return 0;
	}
	return 1;
}

int func_45()//Position - 0x1ACB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = joaat("prop_box_ammo02a");
	if (Local_60.f_18 == 1)
	{
		iVar0 = joaat("ex_prop_adv_case_sm");
	}
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(joaat("p_cargo_chute_s"));
	if (STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(joaat("p_cargo_chute_s")))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_5))
		{
			if (__LIB_0__::func_939(Local_60.f_2) && NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 2, 0))
			{
				iVar1 = 200;
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4))
				{
					iVar2 = 0;
					iVar3 = joaat("PICKUP_AMMO_BULLET_MP");
					if (Local_60.f_18 == 1)
					{
						iVar3 = joaat("PICKUP_WEAPON_MINIGUN");
					}
					if (Local_60.f_18 == 0)
					{
						MISC::SET_BIT(&iVar2, 12);
					}
					else
					{
						MISC::SET_BIT(&iVar2, 12);
					}
					Local_60.f_4 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_AMBIENT_PICKUP(iVar3, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_60.f_2), true) - Vector(3f, 0f, 0f), iVar2, iVar1, iVar0, true, true));
					if (Local_60.f_18 == 1)
					{
						func_71(NETWORK::NET_TO_OBJ(Local_60.f_4));
						OBJECT::SET_ONLY_ALLOW_AMMO_COLLECTION_WHEN_LOW(false);
					}
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_60.f_4), true);
					OBJECT::SET_OBJECT_FORCE_VEHICLES_TO_AVOID(NETWORK::NET_TO_OBJ(Local_60.f_4), true);
					OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_60.f_4), true);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(Local_60.f_4), false);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_60.f_4));
					func_70();
					iVar4 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iVar4, "Crate_Beeps", NETWORK::NET_TO_OBJ(Local_60.f_4), "MP_CRATE_DROP_SOUNDS", true, 0);
					Local_60.f_16 = AUDIO::GET_NETWORK_ID_FROM_SOUND_ID(iVar4);
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_5))
				{
					if (__LIB_1__::func_671(&(Local_60.f_5), joaat("p_cargo_chute_s"), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_60.f_2), true) - Vector(2f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_60.f_5, true);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_60.f_5), NETWORK::NET_TO_OBJ(Local_60.f_4), 0, 0f, 0f, 0.1f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_60.f_5), true);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(Local_60.f_5), false);
						ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_OBJ(Local_60.f_5), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, false, false, false, 0f, 0);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_OBJ(Local_60.f_5));
					}
				}
				func_68();
				if (!BitTest(uLocal_63, 15))
				{
					if (!Local_60.f_18)
					{
						__LIB_0__::func_222(&uLocal_72, 3, NETWORK::NET_TO_PED(Local_60.f_3), "FM_Pilot_Ammo", 0, 1);
						__LIB_0__::func_960(&uLocal_72, "CT_AUD", "MPCT_AMOinc", 12, 0, 0, 1);
					}
					MISC::SET_BIT(&uLocal_63, 15);
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_5))
	{
		return 1;
	}
	return 0;
}

int func_68()//Position - 0x26A7
{
	if (__LIB_2__::func_79())
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_66))
		{
			iLocal_66 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY("scr_crate_drop_beacon", NETWORK::NET_TO_OBJ(Local_60.f_4), 0f, 0f, 0.2f, 0f, 0f, 0f, 1f, false, false, false, 1f, 1f, 1f, 0f);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(iLocal_66, 0.8f, 0.18f, 0.19f, false);
		}
	}
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_66))
	{
		return 0;
	}
	return 1;
}

void func_70()//Position - 0x2731
{
	if (AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16) != -1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16)))
			{
				AUDIO::STOP_SOUND(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16));
			}
			AUDIO::RELEASE_SOUND_ID(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16));
		}
		else
		{
			if (!AUDIO::HAS_SOUND_FINISHED(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16)))
			{
				AUDIO::STOP_SOUND(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16));
			}
			AUDIO::RELEASE_SOUND_ID(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16));
		}
	}
}

void func_71(int iParam0)//Position - 0x27A3
{
	int iVar0;
	MISC::SET_BIT(&iVar0, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	OBJECT::BLOCK_PLAYERS_FOR_AMBIENT_PICKUP(iParam0, iVar0);
}

void func_72()//Position - 0x27BD
{
	int iVar0;
	if (!BitTest(uLocal_63, 11))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			iVar0 = __LIB_0__::func_369(1191, -1, 0);
			if (!BitTest(iVar0, 10))
			{
				__LIB_0__::func_151("AMD_HELP1" /* GXT: ~s~An ammo crate ~HUD_COLOUR_GREEN~~BLIP_GANG_ATTACK_PACKAGE~ ~s~will be dropped at your GPS location.~n~Be sure to make it a secluded location to stop other players stealing it. */, -1);
				MISC::SET_BIT(&iVar0, 10);
				__LIB_0__::func_413(1191, iVar0, -1, 1, 0);
				MISC::SET_BIT(&uLocal_63, 11);
			}
			else if (!BitTest(iVar0, 11))
			{
				__LIB_0__::func_151("AMD_HELP2" /* GXT: ~s~Ammo crates ~HUD_COLOUR_GREEN~~BLIP_GANG_ATTACK_PACKAGE~ ~s~will add ammo to your equipped weapon only.~n~You will not pick up the ammo crate if you do not need ammo for your current or last equipped weapon. */, -1);
				MISC::SET_BIT(&iVar0, 11);
				__LIB_0__::func_413(1191, iVar0, -1, 1, 0);
				MISC::SET_BIT(&uLocal_63, 11);
			}
			else
			{
				MISC::SET_BIT(&uLocal_63, 11);
			}
		}
	}
}

void func_77()//Position - 0x2903
{
	int iVar0;
	if (!BitTest(uLocal_63, 17))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			iVar0 = __LIB_0__::func_369(1191, -1, 0);
			if (!BitTest(iVar0, 24))
			{
				__LIB_0__::func_151("BALD_HELP1" /* GXT: ~s~A crate ~HUD_COLOUR_GREEN~~BLIP_RAMPAGE~ ~s~containing the Ballistic Armor and Minigun has been dispatched. */, -1);
				MISC::SET_BIT(&iVar0, 24);
				__LIB_0__::func_413(1191, iVar0, -1, 1, 0);
				MISC::SET_BIT(&uLocal_63, 17);
			}
			else if (!BitTest(iVar0, 25))
			{
				__LIB_0__::func_151("BALD_HELP2" /* GXT: ~s~The crate ~HUD_COLOUR_GREEN~~BLIP_RAMPAGE~ ~s~will equip the Ballistic Armor and Minigun. */, -1);
				MISC::SET_BIT(&iVar0, 25);
				__LIB_0__::func_413(1191, iVar0, -1, 1, 0);
				MISC::SET_BIT(&uLocal_63, 17);
			}
			else
			{
				MISC::SET_BIT(&uLocal_63, 17);
			}
		}
	}
}

int func_78()//Position - 0x2991
{
	if (__LIB_0__::func_799(joaat("cuban800")) && __LIB_0__::func_799(joaat("S_M_M_Pilot_02")))
	{
		if (__LIB_0__::func_937(&uLocal_70, 4000, 0))
		{
			if (func_81() && func_79())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_79()//Position - 0x29D5
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_3) && __LIB_0__::func_799(joaat("S_M_M_Pilot_02"))) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		if (__LIB_0__::func_939(Local_60.f_2))
		{
			if (__LIB_0__::func_930(&(Local_60.f_3), Local_60.f_2, 22, joaat("S_M_M_Pilot_02"), -1, 1, 1, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_60.f_3), true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_60.f_3), Global_1837194);
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_60.f_3), 0);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_60.f_3), true);
				ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_60.f_3), SYSTEM::ROUND((200f * Global_262145.f_164 /* Tunable: AI_HEALTH */)), 0);
				func_126();
				TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_60.f_3), iLocal_65);
				VEHICLE::SET_TASK_VEHICLE_GOTO_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(NETWORK::NET_TO_VEH(Local_60.f_2), SYSTEM::ROUND(50f));
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_3))
	{
		return 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Pilot_02"));
	return 1;
}

int func_81()//Position - 0x2B46
{
	struct<3> Var0;
	float fVar1;
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		if (__LIB_0__::func_799(joaat("cuban800")))
		{
			func_100(&Var0, &fVar1);
			if (__LIB_1__::func_408(Var0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				if (__LIB_0__::func_957(&(Local_60.f_2), joaat("cuban800"), Var0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_60.f_2), 2);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_60.f_2), false);
					ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_60.f_2), true);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_60.f_2));
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_60.f_2), 60f);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_60.f_2));
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_60.f_2), true, true, false);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(NETWORK::NET_TO_VEH(Local_60.f_2), false);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_60.f_2), false);
					VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_60.f_2), 3);
					VEHICLE::OPEN_BOMB_BAY_DOORS(NETWORK::NET_TO_VEH(Local_60.f_2));
					if (Local_60.f_18 == 1)
					{
						ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_VEH(Local_60.f_2), true, false, true, false, false, false, false, false);
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		return 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cuban800"));
	return 1;
}

void func_100(var uParam0, var uParam1)//Position - 0x352B
{
	float fVar0;
	*uParam0 = { __LIB_1__::func_406(Local_60.f_6 + Vector(200f, 0f, 0f), (400f / 2f), 400f, (200f / 2f)) };
	*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D((Local_60.f_6 - *uParam0), (Local_60.f_6.f_1 - uParam0->f_1));
	fVar0 = PATHFIND::GET_APPROX_HEIGHT_FOR_AREA((*uParam0 - 400f), (uParam0->f_1 - 400f), (*uParam0 + 400f), (uParam0->f_1 + 400f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
}

void func_108()//Position - 0x373B
{
	func_117();
	switch (Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			if (Local_60.f_12 > 0)
			{
				Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			break;
		case 1:
			func_113();
			func_109();
			break;
		case 2:
			func_140();
			break;
	}
}

void func_109()//Position - 0x3790
{
	int iVar0;
	int iVar1;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4))
	{
		if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
		{
			iVar1 = __LIB_2__::func_85(PLAYER::PLAYER_PED_ID());
			if (((((((((((((((((iVar1 == joaat("WEAPON_UNARMED") || iVar1 == joaat("WEAPON_FLARE")) || iVar1 == joaat("WEAPON_KNIFE")) || iVar1 == joaat("WEAPON_NIGHTSTICK")) || iVar1 == joaat("WEAPON_BAT")) || iVar1 == joaat("WEAPON_HAMMER")) || iVar1 == joaat("WEAPON_GOLFCLUB")) || iVar1 == joaat("WEAPON_CROWBAR")) || iVar1 == joaat("WEAPON_MOLOTOV")) || iVar1 == joaat("WEAPON_GRENADE")) || iVar1 == joaat("WEAPON_GRENADELAUNCHER")) || iVar1 == joaat("WEAPON_GRENADELAUNCHER_SMOKE")) || iVar1 == joaat("WEAPON_PETROLCAN")) || iVar1 == joaat("WEAPON_RPG")) || iVar1 == joaat("WEAPON_SMOKEGRENADE")) || iVar1 == joaat("WEAPON_STICKYBOMB")) || iVar1 == joaat("WEAPON_BZGAS")) || iVar1 == joaat("WEAPON_BOTTLE"))
			{
				iVar1 = Global_1574580;
			}
			WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), iVar1, &iVar0);
			if ((func_111(iVar1) && __LIB_4__::func_847(iVar1)) && WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar1) < iVar0)
			{
			}
			else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (!BitTest(uLocal_63, 12))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (Local_60.f_18)
						{
							__LIB_0__::func_151("BALD_HELP3" /* GXT: ~s~Collect the nearby crate ~HUD_COLOUR_GREEN~~BLIP_RAMPAGE~ ~s~to equip the Ballistic Armor and Minigun. */, -1);
						}
						else
						{
							__LIB_0__::func_151("AMD_HELP3" /* GXT: ~s~To pick up the ammo crate ~HUD_COLOUR_GREEN~~BLIP_GANG_ATTACK_PACKAGE~ ~s~you need to equip a weapon that requires ammo.~n~If you are unarmed ammo will be added to your last weapon if possible. */, -1);
						}
						MISC::SET_BIT(&uLocal_63, 12);
					}
				}
				else if (!BitTest(uLocal_63, 13))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_4))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_OBJ(Local_60.f_4), 10f, 10f, 10f, false, true, 0))
							{
								if (__LIB_0__::func_937(&uLocal_68, 20000, 0))
								{
									if (!Local_60.f_18)
									{
										__LIB_0__::func_151("AMD_HELP3" /* GXT: ~s~To pick up the ammo crate ~HUD_COLOUR_GREEN~~BLIP_GANG_ATTACK_PACKAGE~ ~s~you need to equip a weapon that requires ammo.~n~If you are unarmed ammo will be added to your last weapon if possible. */, -1);
									}
									MISC::SET_BIT(&uLocal_63, 13);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_111(int iParam0)//Position - 0x3A39
{
	if (iParam0 == joaat("WEAPON_FLARE"))
	{
		return 0;
	}
	return 1;
}

void func_113()//Position - 0x3A64
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_4))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_60.f_4) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_60.f_4) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_5))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_60.f_5) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_60.f_5) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					if (__LIB_0__::func_953(Local_60.f_4) && __LIB_0__::func_953(Local_60.f_5))
					{
						if (!BitTest(uLocal_63, 8))
						{
							if (BitTest(uLocal_63, 7))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_OBJ(Local_60.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									MISC::SET_BIT(&uLocal_63, 8);
									__LIB_1__::func_445(&(Local_60.f_5));
									if (Local_60.f_18 == 1)
									{
										func_71(NETWORK::NET_TO_OBJ(Local_60.f_4));
									}
								}
							}
						}
						if (!BitTest(uLocal_63, 7))
						{
							if (BitTest(uLocal_63, 6))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_OBJ(Local_60.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									MISC::SET_BIT(&uLocal_63, 7);
								}
							}
						}
						if (!BitTest(uLocal_63, 6))
						{
							PHYSICS::SET_DAMPING(NETWORK::NET_TO_OBJ(Local_60.f_4), 2, 0.0245f);
							if (func_114())
							{
								ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_OBJ(Local_60.f_5), "P_cargo_chute_S_crumple", "P_cargo_chute_S", 1000f, false, false, false, 0f, 0);
								MISC::SET_BIT(&uLocal_63, 6);
								if (HUD::DOES_BLIP_EXIST(iLocal_64))
								{
									HUD::SET_BLIP_ALPHA(iLocal_64, 255);
								}
							}
						}
					}
				}
			}
			if (!BitTest(uLocal_63, 14))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_19))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_60.f_19) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_60.f_19) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
					{
						if (__LIB_0__::func_953(Local_60.f_19))
						{
							PHYSICS::SET_DAMPING(NETWORK::NET_TO_OBJ(Local_60.f_19), 2, 0.1f);
							if (OBJECT::HAS_OBJECT_BEEN_BROKEN(NETWORK::NET_TO_OBJ(Local_60.f_19), 0))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_4))
								{
									ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_60.f_4), true, true);
									if (Local_60.f_18 == 1)
									{
										func_71(NETWORK::NET_TO_OBJ(Local_60.f_4));
									}
								}
								MISC::SET_BIT(&uLocal_63, 14);
							}
						}
						if (!BitTest(Local_60.f_1, 8) && BitTest(uLocal_63, 8))
						{
							if (__LIB_0__::func_953(Local_60.f_19))
							{
								if (!ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(NETWORK::NET_TO_OBJ(Local_60.f_19)) && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(NETWORK::NET_TO_OBJ(Local_60.f_19)))
								{
									if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(NETWORK::NET_TO_OBJ(Local_60.f_19)))
									{
										bVar0 = true;
									}
									else if (!ENTITY::IS_ENTITY_IN_AIR(NETWORK::NET_TO_OBJ(Local_60.f_19)) && ENTITY::IS_ENTITY_STATIC(NETWORK::NET_TO_OBJ(Local_60.f_19)))
									{
										bVar0 = true;
									}
									if (bVar0)
									{
										PHYSICS::SET_DISABLE_BREAKING(NETWORK::NET_TO_OBJ(Local_60.f_19), false);
										MISC::SET_BIT(&(Local_60.f_1), 8);
									}
									if (Local_60.f_18 == 1)
									{
										func_71(NETWORK::NET_TO_OBJ(Local_60.f_4));
									}
								}
							}
						}
					}
				}
			}
			Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_60.f_4), true) };
			if (Var1.f_2 < -50f && !ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_60.f_4)))
			{
				if (__LIB_0__::func_953(Local_60.f_4))
				{
					ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_60.f_4), Local_60.f_6, true, false, false, true);
					if (Local_60.f_18 == 1)
					{
						func_71(NETWORK::NET_TO_OBJ(Local_60.f_4));
					}
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_4))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_19) && ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(Local_60.f_4)))
				{
					iVar2 = NETWORK::NET_TO_OBJ(Local_60.f_19);
				}
				else
				{
					iVar2 = NETWORK::NET_TO_OBJ(Local_60.f_4);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (!BitTest(uLocal_63, 16))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iVar2) >= 0.9f)
					{
						if (AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16) != -1)
						{
							AUDIO::SET_VARIABLE_ON_SOUND(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16), "Crate_Underwater", 1f);
						}
						MISC::SET_BIT(&uLocal_63, 16);
					}
				}
				else if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iVar2) < 0.9f)
				{
					if (AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16) != -1)
					{
						AUDIO::SET_VARIABLE_ON_SOUND(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_60.f_16), "Crate_Underwater", 0f);
					}
					MISC::CLEAR_BIT(&uLocal_63, 16);
				}
			}
		}
	}
}

int func_114()//Position - 0x3E16
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_19))
	{
		if (!ENTITY::IS_ENTITY_IN_AIR(NETWORK::NET_TO_OBJ(Local_60.f_19)))
		{
			iVar0 = 1;
		}
		if (OBJECT::HAS_OBJECT_BEEN_BROKEN(NETWORK::NET_TO_OBJ(Local_60.f_19), 0))
		{
			iVar0 = 1;
		}
		if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_60.f_19)))
		{
			iVar0 = 1;
		}
		if (func_115())
		{
			iVar0 = 1;
		}
		if (iVar0 == 1)
		{
			if (__LIB_0__::func_953(Local_60.f_19))
			{
				PHYSICS::SET_DISABLE_BREAKING(NETWORK::NET_TO_OBJ(Local_60.f_19), false);
				return 1;
			}
		}
	}
	return 0;
}

int func_115()//Position - 0x3E8E
{
	float fVar0;
	fVar0 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_60.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	fVar0 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_60.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	return 0;
}

void func_117()//Position - 0x3F0F
{
	int iVar0;
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0);
	if (Local_60.f_13 != iVar0)
	{
		if (Local_60.f_13 > 0 || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
		{
			if (Local_60.f_13 < iVar0 || __LIB_1__::func_690(Local_60.f_13, 0, 1))
			{
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(Local_60.f_13);
			}
		}
	}
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0);
	if (Local_60.f_14 != iVar0)
	{
		if (Local_60.f_14 > 0 || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_3))
		{
			if (Local_60.f_14 < iVar0 || __LIB_2__::func_99(Local_60.f_14, 0, 1))
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_60.f_14);
			}
		}
	}
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0);
	if (Local_60.f_15 != iVar0)
	{
		if (Local_60.f_15 < iVar0 || __LIB_2__::func_852(Local_60.f_15, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_60.f_15);
		}
	}
}

void func_126()//Position - 0x4240
{
	if (!BitTest(uLocal_63, 10))
	{
		if (__LIB_0__::func_939(Local_60.f_2))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_65);
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, NETWORK::NET_TO_VEH(Local_60.f_2), Local_60.f_6 + Vector(50f, 0f, 0f), 60f, 0, joaat("cuban800"), 262144, 15f, -1f);
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, NETWORK::NET_TO_VEH(Local_60.f_2), Local_60.f_9, 60f, 0, joaat("cuban800"), 262144, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_65);
			MISC::SET_BIT(&uLocal_63, 10);
		}
	}
}

int func_128()//Position - 0x42CE
{
	int iVar0;
	iVar0 = joaat("prop_box_ammo02a");
	if (Local_60.f_18 == 1)
	{
		iVar0 = joaat("ex_prop_adv_case_sm");
	}
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(joaat("p_cargo_chute_s"));
	if ((STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(joaat("p_cargo_chute_s"))) && func_129())
	{
		return 1;
	}
	return 0;
}

int func_129()//Position - 0x4320
{
	STREAMING::REQUEST_ANIM_DICT("P_cargo_chute_S");
	if (STREAMING::HAS_ANIM_DICT_LOADED("P_cargo_chute_S"))
	{
		return 1;
	}
	return 0;
}

void func_140()//Position - 0x4482
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (HUD::DOES_BLIP_EXIST(iLocal_64))
	{
		HUD::REMOVE_BLIP(&iLocal_64);
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 < 250)
		{
			if (iVar1 == 0)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_19))
				{
					if (OBJECT::HAS_OBJECT_BEEN_BROKEN(NETWORK::NET_TO_OBJ(Local_60.f_19), 0))
					{
						if (__LIB_0__::func_953(Local_60.f_19))
						{
							PHYSICS::SET_DISABLE_BREAKING(NETWORK::NET_TO_OBJ(Local_60.f_19), false);
							iVar1 = 1;
						}
					}
					else
					{
						iVar1 = 1;
					}
				}
				else
				{
					iVar1 = 1;
				}
			}
			if (iVar2 == 0)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_4))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(Local_60.f_4)))
					{
						if (__LIB_0__::func_953(Local_60.f_4))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_60.f_4), true, true);
							iVar2 = 1;
						}
					}
					else
					{
						iVar2 = 1;
					}
				}
				else
				{
					iVar2 = 1;
				}
			}
			if (iVar3 == 0)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_5))
				{
					if (__LIB_0__::func_953(Local_60.f_5))
					{
						__LIB_1__::func_445(&(Local_60.f_5));
						iVar3 = 1;
					}
				}
				else
				{
					iVar3 = 1;
				}
			}
			if ((iVar2 == 1 && iVar3 == 1) && iVar1 == 1)
			{
				iVar0 = 9999;
			}
			else
			{
				SYSTEM::WAIT(0);
			}
			iVar0++;
		}
		Local_60.f_0 = 4;
		__LIB_0__::func_954(__LIB_0__::func_943(1, 1), 8, __LIB_0__::getMinusOneOrNull());
	}
	func_143();
	func_70();
	func_142();
	__LIB_0__::func_202();
}

void func_142()//Position - 0x45C5
{
	if (BitTest(uLocal_63, 10))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_65);
	}
}

void func_143()//Position - 0x45DB
{
	if (iLocal_66 != 0)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_66))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_66, false);
			iLocal_66 = 0;
		}
	}
}

int func_146(struct<21> Param0)//Position - 0x469F
{
	int iVar0;
	__LIB_0__::func_935(__LIB_1__::func_32(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(2);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_60, 23, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_62, 97, 0);
	if (!__LIB_0__::func_934())
	{
		return 0;
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_60.f_17 = PLAYER::PLAYER_ID();
		Local_60.f_6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, (5f * 1.5f), 0f) };
		Local_60.f_13 = 1;
		Local_60.f_14 = 1;
		Local_60.f_15 = 3;
		Local_60.f_9 = { 0f, 0f, 500f };
		if (Param0.f_20 == 3)
		{
			Local_60.f_18 = 1;
		}
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		if (iVar0 == 1)
		{
			Local_60.f_9 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_60.f_9 = -9000f;
		}
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		if (iVar0 == 1)
		{
			Local_60.f_9.f_1 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_60.f_9.f_1 = -9000f;
		}
		if (Local_60.f_9 == 0f && Local_60.f_9.f_1 == 0f)
		{
			Local_60.f_9 = { -9000f, 5000f, 500f };
		}
	}
	bLocal_67 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	}
	return 1;
}

