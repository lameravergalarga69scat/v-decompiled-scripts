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
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
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
	struct<3> Local_60 = { 0, 0, 0 } ;
	float fLocal_61 = 0f;
	struct<3> Local_62 = { 0, 0, 0 } ;
	struct<3> Local_63 = { 0, 0, 0 } ;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	float fLocal_66 = 0f;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
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
	var uLocal_99 = 6;
	var uLocal_100 = 5;
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
	var uLocal_116 = 5;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 1;
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
	var uLocal_190 = -1;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	struct<3> Local_198[15];
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	float fLocal_203 = 0f;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	bool bLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	Local_60 = { -1124.3922f, -514.70013f, 33.21493f };
	fLocal_61 = 200f;
	Local_62 = { 2490f, 3777f, 2402.879f };
	Local_63 = { -2052f, 3237f, 1450.078f };
	fLocal_66 = ((0.05f + 0.275f) - 0.01f);
	iLocal_194 = 14;
	iLocal_195 = 3;
	iLocal_196 = 10;
	iLocal_197 = 5;
	iLocal_199 = -1;
	iLocal_200 = -1;
	fLocal_203 = 0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_1990();
	}
	__LIB_30__::func_176(0);
	__LIB_4__::func_224();
	func_1987();
	while (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("initial")) > 0)
	{
		SYSTEM::WAIT(0);
	}
	func_1986();
	func_1985(0);
	func_1984(&uLocal_122);
	func_1983(&uLocal_149);
	func_1956();
	if (__LIB_0__::func_52())
	{
		func_1954(&uLocal_134);
	}
	func_1928();
	func_1924();
	__LIB_40__::func_654();
	__LIB_29__::func_880(0);
	if (Global_113386.f_9085.f_330[0 /*6*/] && !__LIB_0__::func_573(0, 9))
	{
		__LIB_9__::func_989(0, 9, 1);
		__LIB_10__::func_604(94, 1, 0);
	}
	Global_151970 = 1;
	while (true)
	{
		iLocal_77 = MISC::GET_GAME_TIMER();
		func_1887(&uLocal_95);
		func_1885();
		func_1820(&uLocal_87);
		func_1816();
		func_1815();
		func_1795(&uLocal_98);
		func_1794();
		func_1793();
		func_1792(&uLocal_122);
		func_1783();
		func_1780();
		func_1777();
		func_1772();
		func_1752();
		func_1742(&uLocal_149);
		if (__LIB_0__::func_52())
		{
			func_1689(&uLocal_134);
		}
		func_1445();
		if (__LIB_0__::func_53())
		{
			func_1440();
		}
		func_708();
		func_505();
		if (iLocal_77 > iLocal_78)
		{
			__LIB_0__::func_182();
			func_502();
			func_500();
			func_499();
			func_104();
			iLocal_78 = iLocal_77 + 1000;
		}
		if (iLocal_77 > iLocal_79)
		{
			func_103();
			func_102();
			func_99();
			func_83();
			iLocal_79 = iLocal_77 + 5000;
		}
		func_39();
		func_2(&uLocal_190);
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x23C
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if ((MISC::GET_FRAME_COUNT() % 30) == 0)
		{
		}
		HUD::THEFEED_HIDE_THIS_FRAME();
	}
}

void func_2(var uParam0)//Position - 0x25A
{
	func_36();
	func_20();
	func_8(&(uParam0->f_1), &(uParam0->f_2));
	if (func_7())
	{
		if (GRAPHICS::GET_EXTRA_TCMODIFIER() == -1)
		{
			func_5(1, uParam0);
			func_3();
		}
		else
		{
			func_3();
		}
	}
	else if (GRAPHICS::GET_EXTRA_TCMODIFIER() != -1)
	{
		func_5(0, uParam0);
	}
}

void func_3()//Position - 0x2A9
{
	if (!__LIB_1__::func_303(PLAYER::PLAYER_PED_ID()) && !Global_31970)
	{
		GRAPHICS::REGISTER_NOIR_LENS_EFFECT();
	}
}

void func_5(bool bParam0, var uParam1)//Position - 0x327
{
	char* sVar0;
	sVar0 = "NOIR_FILTER_SOUNDS";
	if (bParam0)
	{
		GRAPHICS::SET_EXTRA_TCMODIFIER(__LIB_30__::func_388());
		AUDIO::PLAY_SOUND_FRONTEND(-1, "ON", sVar0, true);
		if (*uParam1 == -1)
		{
			*uParam1 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(*uParam1, "LOOP", sVar0, true);
		}
	}
	else
	{
		GRAPHICS::CLEAR_EXTRA_TCMODIFIER();
		AUDIO::PLAY_SOUND_FRONTEND(-1, "OFF", sVar0, true);
		AUDIO::STOP_SOUND(*uParam1);
		AUDIO::RELEASE_SOUND_ID(*uParam1);
		*uParam1 = -1;
	}
}

bool func_7()//Position - 0x3BB
{
	return (Global_113386.f_10049.f_134 == 1 || Global_113386.f_10049.f_134 == 2);
}

void func_8(var uParam0, var uParam1)//Position - 0x3DF
{
	switch (*uParam0)
	{
		case 0:
			if (__LIB_0__::func_571(134))
			{
				if (__LIB_3__::func_640(134, func_18()))
				{
					*uParam0 = 1;
					*uParam1 = MISC::GET_GAME_TIMER() + 3000;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_571(134) && *uParam1 < MISC::GET_GAME_TIMER())
			{
				__LIB_6__::func_849(0);
				__LIB_35__::func_1();
				*uParam0 = 0;
			}
			else if (!__LIB_0__::func_571(134))
			{
				*uParam0 = 0;
			}
			break;
	}
}

int func_18()//Position - 0x69A
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	switch (iVar0)
	{
		case joaat("Player_Zero"):
			return 0;
		case joaat("Player_One"):
			return 1;
		case joaat("Player_Two"):
			return 2;
		default:
	}
	return 0;
}

void func_20()//Position - 0x736
{
	if (__LIB_0__::func_2(0))
	{
		if (BitTest(Global_113386.f_10049.f_133, 6))
		{
			if (!__LIB_3__::func_640(134, func_18()))
			{
				__LIB_39__::func_413(134, func_18(), 0);
			}
		}
	}
}

void func_36()//Position - 0xC90
{
	if (Global_113386.f_10049.f_134 == 1)
	{
		func_37(2, 0);
		func_37(1, 1);
	}
	else if (Global_113386.f_10049.f_134 == 2)
	{
		func_37(1, 0);
		func_37(2, 1);
	}
	else if (Global_113386.f_10049.f_134 == 0)
	{
		func_37(1, 0);
		func_37(2, 0);
	}
}

void func_37(int iParam0, bool bParam1)//Position - 0xCE9
{
	char* sVar0;
	sVar0 = func_38(iParam0);
	if (bParam1)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sVar0))
		{
			AUDIO::START_AUDIO_SCENE(sVar0);
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sVar0))
	{
		AUDIO::STOP_AUDIO_SCENE(sVar0);
	}
}

char* func_38(int iParam0)//Position - 0xD21
{
	switch (iParam0)
	{
		case 1:
			return "FILM_NOIR_FILTER_SCENE";
		case 2:
			return "FILM_NOIR_FILTER_2_SCENE";
		default:
	}
	return "";
}

void func_39()//Position - 0xD4B
{
	if (Global_2821909)
	{
		if (Global_2821909.f_2)
		{
			if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
				{
					NETWORK::NETWORK_SESSION_VOICE_LEAVE();
					Global_2821909.f_2 = 0;
					__LIB_26__::func_418();
				}
			}
		}
	}
	if (Global_2821909.f_37)
	{
		if (__LIB_9__::func_596(2, Global_20234, 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_20255, true);
			__LIB_26__::func_418();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			__LIB_26__::func_418();
		}
		else if (__LIB_0__::func_585(Global_2821909.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2821909.f_20)))
			{
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2821909.f_20)))
				{
					__LIB_26__::func_418();
				}
			}
		}
		else
		{
			__LIB_26__::func_418();
		}
		if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&(Global_2821909.f_20)) || NETWORK::NETWORK_IS_GAMER_BLOCKED_BY_ME(&(Global_2821909.f_20)))
		{
			__LIB_26__::func_418();
		}
		if (NETWORK::NETWORK_AM_I_MUTED_BY_GAMER(&(Global_2821909.f_20)) || NETWORK::NETWORK_AM_I_BLOCKED_BY_GAMER(&(Global_2821909.f_20)))
		{
			__LIB_26__::func_418();
		}
	}
	switch (Global_2821909.f_3)
	{
		case 1:
			if (func_66(&(Global_2821909.f_20)))
			{
				if (__LIB_0__::func_53())
				{
					if (__LIB_29__::func_829(&(Global_2821909.f_20)))
					{
						if (func_52(&(Global_2821909.f_39[0 /*16*/]), 2, 1))
						{
							Global_2821909.f_3 = 2;
						}
					}
				}
				else if (func_52(&(Global_2821909.f_4), 2, 1))
				{
					Global_2821909.f_3 = 2;
				}
			}
			else
			{
				NETWORK::NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(false, 2);
				Global_2821909.f_3 = 0;
			}
			break;
		case 2:
			if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				if (__LIB_0__::func_585(Global_2821909.f_20))
				{
					if (NETWORK::NETWORK_IS_FRIEND(&(Global_2821909.f_20)))
					{
						if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2821909.f_20)))
						{
							NETWORK::NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(false, 3);
							__LIB_26__::func_418();
						}
					}
				}
				else
				{
					__LIB_26__::func_418();
				}
				if (__LIB_9__::func_596(2, Global_20235, 0))
				{
					NETWORK::NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(true, 1);
					Global_2821909.f_3 = 0;
					__LIB_38__::func_893();
					__LIB_28__::func_53();
				}
				else if (__LIB_9__::func_596(2, Global_20234, 0))
				{
					NETWORK::NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(false, 3);
					Global_2821909.f_3 = 0;
				}
			}
			else
			{
				__LIB_26__::func_418();
			}
			break;
	}
}

bool func_52(char* sParam0, int iParam1, bool bParam2)//Position - 0x20D5
{
	StringCopy(&Global_21636, sParam0, 64);
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 1;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	Global_2883585 = 0;
	return __LIB_36__::func_55("DUMMY" /* GXT: This label is here! */, iParam1, bParam2);
}

int func_66(var* uParam0)//Position - 0x2791
{
	if (Global_78319)
	{
		if (__LIB_7__::func_999() == 0)
		{
			return 0;
		}
		if (__LIB_0__::func_154(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) >= 1f)
				{
					return 0;
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	if (Global_2821909.f_1)
	{
	}
	if (Global_20472 == 1)
	{
		return 0;
	}
	if (Global_1836606)
	{
		return 0;
	}
	if (Global_2821909.f_36)
	{
		return 0;
	}
	if (__LIB_0__::func_73())
	{
		return 0;
	}
	if (((Global_43052 != 6 && Global_43052 != 8) && Global_43052 != 12) && Global_43052 != 15)
	{
		return 0;
	}
	if (__LIB_9__::func_603() && !__LIB_0__::func_39(12))
	{
		return 0;
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		return 0;
	}
	if (!__LIB_0__::func_794(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (Global_78579)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		if (!NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(uParam0) || NETWORK::NETWORK_IS_GAMER_BLOCKED_BY_ME(uParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_AM_I_MUTED_BY_GAMER(uParam0) || NETWORK::NETWORK_AM_I_BLOCKED_BY_GAMER(uParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_PLATFORM_PARTY())
	{
		if (__LIB_0__::func_53())
		{
			if (NETWORK::NETWORK_IS_IN_PLATFORM_PARTY_CHAT())
			{
				return 0;
			}
		}
		else if (__LIB_0__::func_52())
		{
			return 0;
		}
	}
	return 1;
}

void func_83()//Position - 0x2D1E
{
	if (func_98())
	{
		if (!__LIB_0__::func_368(139))
		{
			if (__LIB_0__::func_176(64))
			{
				if (__LIB_26__::func_490(1127068257, 6, 7, 97, 20000, 10000, -1, 0, -1, 0))
				{
					__LIB_0__::func_503(139, 1);
				}
			}
		}
		if (!__LIB_0__::func_368(140))
		{
			if (__LIB_0__::func_176(14))
			{
				if (__LIB_26__::func_490(359978756, 6, 7, 97, 20000, 10000, -1, 0, -1, 0))
				{
					__LIB_0__::func_503(140, 1);
				}
			}
		}
	}
	if (func_85())
	{
		if (!__LIB_0__::func_368(143))
		{
			if (__LIB_0__::func_176(2))
			{
				if (__LIB_26__::func_490(-1406368651, 6, 7, 97, 20000, 10000, -1, 0, -1, 0))
				{
					__LIB_0__::func_503(143, 1);
				}
			}
		}
		if (!__LIB_0__::func_368(141))
		{
			if (__LIB_0__::func_176(92))
			{
				if (__LIB_26__::func_490(-1093228087, 6, 7, 97, 20000, 10000, -1, 0, -1, 0))
				{
					__LIB_0__::func_503(141, 1);
				}
			}
		}
		if (!__LIB_0__::func_368(142))
		{
			if (__LIB_0__::func_176(59))
			{
				if (__LIB_26__::func_490(143441204, 6, 7, 97, 20000, 10000, -1, 0, -1, 0))
				{
					__LIB_0__::func_503(142, 1);
				}
			}
		}
	}
	if (__LIB_0__::func_277())
	{
		if (!__LIB_0__::func_368(144))
		{
			if (__LIB_0__::func_176(63))
			{
				if (__LIB_26__::func_490(-615685450, 6, 7, 97, 20000, 10000, -1, 0, -1, 0))
				{
					__LIB_0__::func_503(144, 1);
				}
			}
		}
		if (!__LIB_0__::func_368(145))
		{
			if (__LIB_0__::func_176(41))
			{
				if (__LIB_26__::func_490(1963267619, 6, 7, 97, 20000, 10000, -1, 0, -1, 0))
				{
					__LIB_0__::func_503(145, 1);
				}
			}
		}
	}
}

bool func_85()//Position - 0x2EB7
{
	return DLC::IS_DLC_PRESENT(joaat("mpluxe"));
}

bool func_98()//Position - 0x3354
{
	return DLC::IS_DLC_PRESENT(joaat("mpchristmas2"));
}

void func_99()//Position - 0x3365
{
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (!BitTest(Global_113386.f_20118.f_290, 8))
		{
			if (NETWORK::FACEBOOK_CAN_POST_TO_FACEBOOK())
			{
				if (HUD::GET_MINIMAP_FOW_DISCOVERY_RATIO() >= 0.975f)
				{
					NETWORK::FACEBOOK_POST_COMPLETED_MILESTONE(5);
					__LIB_26__::func_590(5);
					MISC::SET_BIT(&(Global_113386.f_20118.f_290), 8);
				}
			}
		}
	}
}

void func_102()//Position - 0x3456
{
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::FACEBOOK_CAN_POST_TO_FACEBOOK())
		{
			if (MISC::GET_PROFILE_SETTING(904) != 1)
			{
				if (STATS::GET_PLAYER_HAS_DRIVEN_ALL_VEHICLES())
				{
					NETWORK::FACEBOOK_POST_COMPLETED_MILESTONE(2);
					__LIB_26__::func_590(2);
					STATS::SET_HAS_POSTED_ALL_VEHICLES_DRIVEN();
				}
			}
		}
	}
}

void func_103()//Position - 0x348D
{
	if (!BitTest(Global_113386.f_20118.f_290, 0))
	{
		if (NETWORK::NETWORK_IS_SIGNED_IN())
		{
			if (NETWORK::FACEBOOK_CAN_POST_TO_FACEBOOK())
			{
				__LIB_12__::func_108("FB_NEW_ACC" /* GXT: New account linked! */);
				MISC::SET_BIT(&(Global_113386.f_20118.f_290), 0);
			}
		}
	}
}

void func_104()//Position - 0x34CA
{
	int iVar0;
	int iVar1;
	if (!Global_151971)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!__LIB_0__::func_497() || ((__LIB_0__::func_63() != -1 && __LIB_0__::func_63() != 999) && __LIB_0__::func_3() != 0))
			{
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning")) == 0)
				{
					iVar0 = __LIB_1__::func_558();
					if (!__LIB_29__::func_830(iVar0))
					{
						if (__LIB_29__::func_830(__LIB_12__::func_95(Global_113386.f_2363.f_539.f_4321)))
						{
							iVar1 = Global_113386.f_2363.f_539.f_4321;
						}
						else if (__LIB_29__::func_830(__LIB_12__::func_95(Global_113386.f_2363.f_539.f_4323)))
						{
							iVar1 = Global_113386.f_2363.f_539.f_4323;
						}
						else
						{
							iVar1 = 1;
						}
						if (!func_105(__LIB_0__::func_386(iVar1), 1))
						{
							__LIB_30__::func_176(0);
							return;
						}
					}
					else
					{
						__LIB_30__::func_176(1);
					}
				}
				else
				{
					__LIB_30__::func_176(0);
				}
			}
			else
			{
				__LIB_30__::func_176(0);
			}
		}
		else
		{
			__LIB_30__::func_176(0);
		}
	}
}

int func_105(int iParam0, bool bParam1)//Position - 0x35C7
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	Global_23011.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	bVar0 = __LIB_0__::func_388(iParam0);
	iVar1 = __LIB_12__::func_95(bVar0);
	if (iVar1 == 0)
	{
		return 1;
	}
	if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), iVar1))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar1);
	if (!STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false))
		{
			iVar3 = -1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 0, false))
		{
			iVar3 = 0;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 1, false))
		{
			iVar3 = 1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 2, false))
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = -1;
		}
	}
	else
	{
		iVar2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_491(&(Global_22965[iParam0]), bVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_176(&(Global_22965[iParam0]), bVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	__LIB_42__::func_538(&Global_22965, 0, 0, 0);
	__LIB_6__::func_846(iParam0);
	return 1;
}

int func_176(int* iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xB25B
{
	int iVar0;
	if (__LIB_0__::func_317(bParam1))
	{
		iVar0 = __LIB_12__::func_95(bParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_26__::func_535(*iParam0, bParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_483(*iParam0);
			__LIB_36__::func_54(*iParam0, 1, 0);
			__LIB_26__::func_525(*iParam0);
			__LIB_26__::func_430(*iParam0);
			func_178(*iParam0, bParam6);
			__LIB_0__::func_349(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_178(int iParam0, bool bParam1)//Position - 0xB373
{
	bool bVar0;
	bool bVar1;
	bVar0 = __LIB_20__::func_763(iParam0);
	if (__LIB_0__::func_377(bVar0))
	{
		__LIB_0__::func_376(bVar0, 0);
		func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_269(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_6__::func_843(iParam0))
		{
			__LIB_0__::func_376(bVar0, 0);
			func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_269(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (bVar0)
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[120] && !Global_113386.f_9085.f_99.f_58[122])
			{
				func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085.f_99.f_58[123])
			{
				Global_113386.f_9085.f_99.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_247(iParam0, 3, 169))
					{
						func_452(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_247(iParam0, 12, 6))
			{
				func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_247(iParam0, 12, 17))
			{
				if (!__LIB_38__::func_118(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_247(iParam0, 12, 20))
			{
				if (!__LIB_38__::func_118(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_247(iParam0, 12, 21))
			{
				if (!__LIB_38__::func_118(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_247(iParam0, 12, 22))
			{
				if (!__LIB_38__::func_118(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_247(iParam0, 12, 11))
			{
				func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_247(iParam0, 12, 10))
			{
				func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_247(iParam0, 12, 50))
			{
				func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_247(iParam0, 14, 59))
			{
				func_452(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_247(iParam0, 8, 22))
			{
				func_452(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_247(iParam0, 12, 14))
			{
				func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_247(iParam0, 12, 13))
			{
				if (!__LIB_38__::func_118(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_247(iParam0, 12, 14))
			{
				if (!__LIB_38__::func_118(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_247(iParam0, 12, 15))
			{
				if (!__LIB_38__::func_118(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_247(iParam0, 12, 4))
			{
				func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_247(iParam0, 12, 3))
			{
				func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_247(iParam0, 14, 82))
			{
				func_452(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_247(iParam0, 8, 76))
			{
				func_452(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_247(iParam0, 12, 1))
			{
				func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_247(iParam0, 12, 12))
			{
				func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_247(iParam0, 12, 15))
			{
				func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_247(iParam0, 3, 71))
				{
					func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_247(iParam0, 12, 17))
			{
				if (!__LIB_38__::func_118(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_247(iParam0, 12, 18))
			{
				if (!__LIB_38__::func_118(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_247(iParam0, 12, 19))
			{
				if (!__LIB_38__::func_118(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_247(iParam0, 12, 7))
			{
				func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_247(iParam0, 12, 6))
			{
				func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_247(iParam0, 14, 88))
			{
				func_452(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_247(iParam0, 8, 17))
			{
				func_452(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_247(iParam0, 12, 11))
			{
				func_452(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_247(int iParam0, int iParam1, int iParam2)//Position - 0x227CB
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
	Global_78130[1 /*14*/] = { __LIB_37__::func_904(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_18__::func_180(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_247(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_247(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_37__::func_904(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_247(iParam0, 14, iVar4))
										{
											if (!__LIB_24__::func_955(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__::func_795(iParam0, iVar2);
						Global_78130[2 /*14*/] = { __LIB_37__::func_904(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_24__::func_955(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
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
		uVar8 = { __LIB_18__::func_247(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_247(iParam0, 14, uVar8[iVar7]))
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
	else if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_269(int iParam0, int iParam1)//Position - 0x26E48
{
	bool bVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_20__::func_763(iParam0);
		if (__LIB_0__::func_317(bVar0))
		{
			if (bVar0 == 2)
			{
				iVar1 = func_451(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_0__::func_358(bVar0);
					func_271(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_36__::func_18(iParam0, &Var2, 1, -1);
			Global_100166[bVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_40__::func_616();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
				{
					Global_113386.f_2363.f_539[bVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[bVar0] = __LIB_0__::func_352(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][bVar0] = __LIB_6__::func_795(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][bVar0] = __LIB_6__::func_795(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					if (bVar0 == 0)
					{
						if (Global_113386.f_9085.f_99.f_58[121])
						{
							Global_113386.f_9085.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

void func_271(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x270C3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<5> Var12;
	if (!PED::IS_PED_INJURED(iParam0) || iParam5)
	{
		iVar0 = __LIB_20__::func_763(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
				{
					if (uParam1->f_39[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (__LIB_0__::func_317(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_449(iParam0, iVar1, &iVar2, 0))
			{
				func_452(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_447(iParam0, iVar1, &iVar2))
			{
				func_452(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_445(iParam0);
			__LIB_1__::func_597(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_1__::func_597(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__::func_350(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_18__::func_181(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_18__::func_186(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_277(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_277(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__::func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_277(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_18__::func_181(iVar9);
			}
			else
			{
				iVar9 = __LIB_18__::func_186(iVar9);
			}
			__LIB_1__::func_597(753, iVar9, Global_78127, 1, 0);
			__LIB_1__::func_597(2053, iVar9, Global_78127, 1, 0);
			__LIB_6__::func_905(161, 1, -1, 1);
		}
		if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
		{
			iVar10 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar11 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 1, PED::GET_PED_PROP_INDEX(iParam0, 1), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 1));
			if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0") || iVar10 == joaat("DLC_MP_ARENA_F_BERD_13_0"))
			{
				if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("ARENA_DRAW_0"), 1))
				{
					FILES::INIT_SHOP_PED_PROP(&Var12);
					if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0"))
					{
						FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_M_PEYES_0_0"), &Var12);
					}
					else
					{
						FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_F_PEYES_0_0"), &Var12);
					}
					PED::SET_PED_PROP_INDEX(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("ARENA_DRAW_0"), 1))
			{
				PED::CLEAR_PED_PROP(iParam0, 1);
			}
		}
	}
}

int func_277(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x2785F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	int iVar17;
	var uVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	float fVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	var uVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	var uVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1574990 != 4 && Global_1574990 != 5) && Global_1574990 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_78127;
	}
	Global_78128++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = -1;
	iVar11 = -1;
	if (iParam5 == 0)
	{
		Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_78128 > 1)
		{
		}
		else
		{
			func_403(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar12 = Global_2883588;
		uVar13 = Global_2883589;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar14 = 15;
		if (iParam5 == 1)
		{
			uVar14 = { Global_78173 };
		}
		else
		{
			uVar14 = { __LIB_18__::func_180(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_78130[1 /*14*/].f_6, 1))
					{
						func_403(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iVar0, uVar14[iVar0], -1) };
					if (BitTest(Global_78130[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar15 = 9;
							if (iParam5 == 1)
							{
								uVar15 = { Global_78190 };
							}
							else
							{
								uVar15 = { __LIB_18__::func_247(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_403(iVar5, iVar0, uVar14[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_277(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_403(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iVar0, func_400(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__::func_180(iVar5, 0) };
					func_277(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__::func_395();
			if (iVar17 != -1)
			{
				__LIB_18__::func_394(iVar17, 0, iParam10);
			}
			func_394(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__::func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_403(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_39__::func_749(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_277(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_403(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_277(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_385(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_277(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_277(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar19 = __LIB_0__::func_33(iParam1);
		if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar19) != Global_78130[1 /*14*/].f_3 || PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar19) != Global_78130[1 /*14*/].f_4)
		{
			iVar20 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
			iVar21 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 7, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 7), PED::GET_PED_TEXTURE_VARIATION(iParam0, 7));
			if (((iParam1 == 11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_JBIB"), 0)) || (iParam1 == 8 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_SPECIAL"), 0))) || (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_LEGS"), 0)))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 7));
			}
			if ((iParam1 == 11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("REMOVE_WITH_JBIB"), 0)) || (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("REMOVE_WITH_LEGS"), 0)))
			{
				if (iVar5 == joaat("MP_M_Freemode_01"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 15, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
				else if (iVar5 == joaat("MP_F_Freemode_01"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 2, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar22 = -1;
				if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("CREW_COL"), 11))
				{
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 0);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 1);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 2);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 3);
				}
				iVar23 = __LIB_6__::func_795(iParam0, 11);
				iVar24 = __LIB_6__::func_795(iParam0, 8);
				iVar25 = __LIB_6__::func_795(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_6__::func_795(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_384(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_39__::func_749(iParam0, iVar5, 11, iVar23, 3, 0);
					}
					switch (iVar26)
					{
						case joaat("DLC_MP_VAL_F_UPPR0_0"):
						case joaat("DLC_MP_VAL_F_UPPR0_1"):
						case joaat("DLC_MP_VAL_F_UPPR0_2"):
						case joaat("DLC_MP_VAL_F_UPPR0_3"):
						case joaat("DLC_MP_VAL_F_UPPR0_4"):
						case joaat("DLC_MP_VAL_F_UPPR0_5"):
							iVar27 = 11;
							iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
							if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("DRESS"), 0))
							{
								iVar27 = -99;
							}
							break;
					}
					if (iVar27 != -99)
					{
						iVar28 = 0;
						while (iVar28 < 18)
						{
							if (__LIB_0__::func_254(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_6__::func_795(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_277(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_6__::func_808(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_6__::func_808(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_37__::func_870(iParam0, iParam2);
							iVar31 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_277(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_277(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_6__::func_809(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_277(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__::func_870(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_6__::func_807(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__::func_252(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_420(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_420(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__::func_806(iVar5, __LIB_6__::func_795(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__::func_806(iVar5, __LIB_6__::func_795(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_277(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_277(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_277(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_32__::func_56(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_394(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_384(iVar5, func_400(iParam0, 8, -1), iParam2, func_400(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_1__::func_556(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_1__::func_556(2160, iParam10, 0);
				}
				PED::SET_PED_HAIR_TINT(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar42 = -99;
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar42 = __LIB_18__::func_181(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_18__::func_186(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_320(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__::func_795(iParam0, 11);
				iVar45 = __LIB_6__::func_795(iParam0, 4);
				iVar46 = func_384(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_39__::func_749(iParam0, iVar5, 11, iVar44, 3, 0);
				}
				switch (iVar43)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar46 = 11;
						iVar47 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar47, joaat("DRESS"), 0))
						{
							iVar46 = -99;
						}
						break;
				}
				if (iVar46 != -99)
				{
					iVar48 = 0;
					while (iVar48 < 18)
					{
						if (__LIB_0__::func_254(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_394(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__::func_795(iParam0, 11);
			if (__LIB_6__::func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__::func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_32__::func_56(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_384(iVar5, iParam2, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_6__::func_795(iParam0, 7);
				if (!__LIB_24__::func_966(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_1__::func_556(2100, iParam10, 0);
				iVar53 = __LIB_1__::func_556(2101, iParam10, 0);
				iVar54 = __LIB_1__::func_556(2102, iParam10, 0);
				fVar55 = __LIB_2__::func_97(135, iParam10);
				if (iVar5 == joaat("MP_M_Freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
				}
				else if (iVar5 == joaat("MP_F_Freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
				}
				iVar56 = 0;
				while (iVar56 < 20)
				{
					PED::SET_PED_MICRO_MORPH(iParam0, iVar56, 0f);
					iVar56++;
				}
			}
			else
			{
				__LIB_25__::func_44(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_6__::func_795(iParam0, 11);
			iVar58 = __LIB_6__::func_795(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_277(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_277(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_384(iVar5, __LIB_6__::func_795(iParam0, 8), __LIB_6__::func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_384(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_39__::func_749(iParam0, iVar5, 11, iVar57, 3, 0);
				}
				switch (iVar59)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar60 = 11;
						iVar61 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar61, joaat("DRESS"), 0))
						{
							iVar60 = -99;
						}
						break;
				}
				if (iVar60 != -99)
				{
					iVar62 = 0;
					while (iVar62 < 18)
					{
						if (__LIB_0__::func_254(iVar5, iVar60, iVar62) == iVar59)
						{
							iVar10 = iVar62;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar62++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_277(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2883588)
							{
								case joaat("DLC_MP_VAL_F_UPPR0_0"):
								case joaat("DLC_MP_VAL_F_UPPR0_1"):
								case joaat("DLC_MP_VAL_F_UPPR0_2"):
								case joaat("DLC_MP_VAL_F_UPPR0_3"):
								case joaat("DLC_MP_VAL_F_UPPR0_4"):
								case joaat("DLC_MP_VAL_F_UPPR0_5"):
									iVar10 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_384(iVar5, iVar3, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_277(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__::func_223(iParam0))
				{
					iVar63 = __LIB_6__::func_803(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_297(iParam0, 9, iVar63))
						{
							func_277(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_277(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_277(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_1__::func_556(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_18__::func_183(iParam0, iVar64), __LIB_0__::func_217(iParam0, iVar64), __LIB_0__::func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_18__::func_183(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__::func_217(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_6__::func_782(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_277(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_400(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_400(iParam0, 11, -1);
				}
				if (__LIB_6__::func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__::func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__::func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_277(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__::func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__::func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_277(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar68 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 6);
				iVar69 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 6);
				iVar70 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 6, iVar68, iVar69);
				iVar71 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
				iVar72 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
				iVar73 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar71, iVar72);
				iVar74 = __LIB_6__::func_795(iParam0, 4);
				iVar75 = __LIB_6__::func_795(iParam0, 6);
				if (__LIB_0__::func_215(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__::func_798(iVar5, iVar74, iVar70))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_277(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_277(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__::func_797(iVar5, iVar75, iVar73))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_277(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_277(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__::func_215(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__::func_797(iVar5, iVar75, iVar73))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_277(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_277(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__::func_798(iVar5, iVar74, iVar70))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_277(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_277(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_385(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_277(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_277(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_278(iParam0, &uVar4))
		{
			func_277(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_277(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_277(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_277(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_254(iVar5, func_400(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_6__::func_758(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_6__::func_758(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_277(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_278(int iParam0, var uParam1)//Position - 0x2970A
{
	int iVar0;
	int iVar1;
	*uParam1 = func_400(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_1__::func_556(754, Global_78127, 0) != -99 && __LIB_6__::func_781())
	{
		if (__LIB_0__::func_214() == 4)
		{
			return 1;
		}
		if (__LIB_1__::func_556(754, Global_78127, 0) == 0 && __LIB_1__::func_556(755, Global_78127, 0) == 0)
		{
			if (__LIB_1__::func_563(161, Global_78127))
			{
				if (__LIB_1__::func_556(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_1__::func_556(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_1__::func_556(754, Global_78127, 0);
		iVar1 = __LIB_1__::func_556(755, Global_78127, 0);
		if (!func_297(iParam0, iVar1, iVar0))
		{
			if (__LIB_1__::func_563(161, Global_78127))
			{
				*uParam1 = __LIB_1__::func_556(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_1__::func_556(753, Global_78127, 0);
			}
			__LIB_1__::func_597(754, -99, Global_78127, 1, 0);
			__LIB_1__::func_597(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_297(int iParam0, int iParam1, int iParam2)//Position - 0x2D9C7
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	struct<5> Var17;
	var uVar18;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_18__::func_180(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				case 1:
					iVar4 = 4;
					break;
				case 2:
					iVar4 = 6;
					break;
				case 3:
					iVar4 = 7;
					break;
				case 4:
					iVar4 = 8;
					break;
				case 5:
					iVar4 = 11;
					break;
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_297(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_18__::func_247(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_297(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_37__::func_856(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_297(iParam0, 14, iVar6))
										{
											if (!__LIB_24__::func_955(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
											{
												Global_2883588 = uVar2;
												Global_2883589 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = __LIB_6__::func_795(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_37__::func_856(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_24__::func_955(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
						{
							Global_2883588 = uVar2;
							Global_2883589 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != joaat("0")) && uVar8.f_16)
		{
			if (__LIB_1__::func_556(1759, Global_78127, 0) != uVar8[10])
			{
				Global_2883588 = uVar2;
				Global_2883589 = uVar3;
				return 0;
			}
		}
		Global_2883588 = uVar2;
		Global_2883589 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { __LIB_18__::func_247(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_297(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_4 || Global_78130[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_78130[1 /*14*/].f_12 == 0 && BitTest(Global_78130[1 /*14*/].f_6, 6)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HELMET"), 1)) && FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588) > 0)
		{
			iVar16 = FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588);
			iVar12 = 0;
			while (iVar12 < iVar16)
			{
				FILES::GET_VARIANT_PROP(Global_2883588, iVar12, &iVar13, &uVar14, &uVar15);
				if (iVar13 != 0 && iVar13 != joaat("0"))
				{
					FILES::INIT_SHOP_PED_PROP(&Var17);
					FILES::GET_SHOP_PED_PROP(iVar13, &Var17);
					if (Var17.f_3 == PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) && Var17.f_4 == PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78129++;
			if (Global_78129 == 1)
			{
				if (__LIB_6__::func_802(iVar0, 11, __LIB_6__::func_795(iParam0, 11), -1))
				{
					if (__LIB_6__::func_800(iVar0, 4, iParam2, &uVar18))
					{
						return func_297(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__::func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_297(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_320(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x346DE
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_25__::func_74(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__::func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_18__::func_394(iVar1, 1, iParam2);
	}
	func_321(iParam0, bParam3, 0, -1);
}

void func_321(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x3472B
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<8> Var9;
	int iVar10;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_78127;
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar2 = __LIB_0__::func_250(iParam0);
		bVar3 = func_364(iParam0, 0);
		bVar4 = __LIB_31__::func_887(iParam0);
		bVar5 = func_355(iParam0, iParam3);
		if (bParam1)
		{
			bVar4 = true;
		}
		if (bParam2)
		{
			bVar4 = false;
		}
		iVar6 = 0;
		while (iVar6 < 127)
		{
			if (__LIB_18__::func_373(iVar6, iVar0))
			{
				if (__LIB_6__::func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__::func_27(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__::func_373(123, iVar0))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar8 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar2);
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar2, iVar7, &Var9))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var9.f_0))
				{
					iVar10 = (129 + iVar7);
					if (__LIB_18__::func_373(iVar10, iVar0))
					{
						if (__LIB_25__::func_27(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__::func_993(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__::func_235(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_355(int iParam0, int iParam1)//Position - 0x43848
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar2 = __LIB_1__::func_556(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_400(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (iVar2)
						{
							case joaat("MP_Elite_M_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_M"):
							case joaat("MP_Heist4_Tee_039_M"):
							case joaat("MP_Heist4_Tee_041_M"):
							case joaat("MP_Heist4_Tee_043_M"):
							case joaat("MP_Heist4_Tee_049_M"):
							case joaat("MP_Heist4_Tee_051_M"):
							case joaat("MP_Heist4_Tee_055_M"):
							case joaat("MP_Heist4_Tee_057_M"):
							case joaat("MP_Heist4_Tee_059_M"):
							case joaat("MP_Heist4_Tee_061_M"):
							case joaat("MP_Heist4_Tee_063_M"):
							case joaat("MP_Heist4_Tee_065_M"):
							case joaat("MP_Tuner_Tee_000_M"):
							case joaat("MP_Tuner_Tee_002_M"):
							case joaat("MP_Tuner_Tee_003_M"):
							case joaat("MP_Tuner_Tee_005_M"):
							case joaat("MP_Tuner_Tee_006_M"):
							case joaat("MP_Tuner_Tee_008_M"):
							case joaat("MP_Tuner_Tee_010_M"):
								return 1;
								break;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			iVar2 = __LIB_1__::func_556(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 == 3)
			{
				if (iVar1 == 14)
				{
					return 1;
				}
			}
			else if (iVar0 > 15)
			{
				iVar5 = func_400(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (iVar2)
						{
							case joaat("MP_Elite_F_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_F"):
							case joaat("MP_Heist4_Tee_039_F"):
							case joaat("MP_Heist4_Tee_041_F"):
							case joaat("MP_Heist4_Tee_043_F"):
							case joaat("MP_Heist4_Tee_049_F"):
							case joaat("MP_Heist4_Tee_051_F"):
							case joaat("MP_Heist4_Tee_055_F"):
							case joaat("MP_Heist4_Tee_057_F"):
							case joaat("MP_Heist4_Tee_059_F"):
							case joaat("MP_Heist4_Tee_061_F"):
							case joaat("MP_Heist4_Tee_063_F"):
							case joaat("MP_Heist4_Tee_065_F"):
							case joaat("MP_Tuner_Tee_000_F"):
							case joaat("MP_Tuner_Tee_002_F"):
							case joaat("MP_Tuner_Tee_003_F"):
							case joaat("MP_Tuner_Tee_005_F"):
							case joaat("MP_Tuner_Tee_006_F"):
							case joaat("MP_Tuner_Tee_008_F"):
							case joaat("MP_Tuner_Tee_010_F"):
								return 1;
								break;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
	}
	return 0;
}

int func_364(int iParam0, bool bParam1)//Position - 0x43CA6
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
	int iVar12;
	int iVar13;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
							return 1;
							break;
						case 1:
						case 7:
						case 12:
							iVar2 = __LIB_25__::func_110(joaat("MP_M_Freemode_01"), 11, func_400(iParam0, 11, -1), 0);
							if (((iVar1 == 1 && iVar2 == 88) || (iVar1 == 7 && iVar2 == 89)) || (iVar1 == 12 && iVar2 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				case 5:
					if (!bParam1)
					{
						if (__LIB_18__::func_373(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(72, -1))
						{
						}
						else if (__LIB_18__::func_185(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_400(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
							if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_12"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar5 = func_400(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
							if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("COMBAT_TOP"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar7 = __LIB_25__::func_110(joaat("MP_F_Freemode_01"), 11, func_400(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar7 == 88) || (iVar1 == 4 && iVar7 == 89)) || (iVar1 == 9 && iVar7 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				case 3:
					switch (iVar1)
					{
						case 14:
							return 1;
							break;
					}
					break;
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_400(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
							if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HEIST_DRAW_13"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar10 = __LIB_25__::func_110(joaat("MP_F_Freemode_01"), 11, func_400(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar10 == 88) || (iVar1 == 4 && iVar10 == 89)) || (iVar1 == 9 && iVar10 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar11 = __LIB_25__::func_110(joaat("MP_F_Freemode_01"), 11, func_400(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar11 == 88) || (iVar1 == 4 && iVar11 == 89)) || (iVar1 == 9 && iVar11 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar12 = func_400(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
							if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("COMBAT_TOP"), 0))
							{
								return 1;
							}
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_384(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4CB37
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
	int iVar12;
	int iVar13;
	int iVar14;
	iVar0 = -99;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			if (iParam2 >= 237)
			{
				iVar2 = __LIB_0__::func_420(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__::func_252(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__::func_420(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__::func_252(iVar4);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				iVar0 = 14;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_PYJAMAS"), 0))
			{
				iVar0 = 6;
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
			{
				iVar0 = 1;
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_2"), 0))
			{
				iVar0 = 4;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
			{
				if (iParam1 == 240)
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_384(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 0;
					}
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 12;
			}
			else if (((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_15"), 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_24"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 4;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_7"), 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar3 == 12)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 11;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_9"), 0))
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_JACKET"), 0))
			{
				iVar0 = 12;
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_6"), 0))
			{
				iVar0 = 2;
			}
			else if (((iParam2 >= 0 && iParam2 <= 31) || iVar1 == 0) || iVar1 == 1)
			{
				iVar0 = 0;
			}
			else if ((((((((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 96 && iParam2 <= 107)) || (iParam2 >= 108 && iParam2 <= 123)) || (iParam2 >= 156 && iParam2 <= 171)) || iVar1 == 3) || iVar1 == 4) || iVar1 == 6) || iVar1 == 7) || iVar1 == 10)
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240 || iVar3 == 15)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 160 && iParam1 <= 175) || iVar3 == 10)
				{
					iVar0 = 4;
				}
				else if ((iParam1 >= 176 && iParam1 <= 191) || iVar3 == 11)
				{
					iVar0 = 12;
				}
				else if ((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 224 && iParam1 <= 239)) || iVar3 == 1) || iVar3 == 14)
				{
					iVar0 = 1;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 32 && iParam1 <= 47) || iVar3 == 2)
				{
					iVar0 = 4;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SHIRT_BRACES"), 0))
				{
					if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("CLOSED_COLLAR"), 0))
					{
						iVar0 = 4;
					}
					else
					{
						iVar0 = 1;
					}
				}
				else if ((iParam1 >= 144 && iParam1 <= 159) || iVar3 == 9)
				{
					iVar0 = 1;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0))
				{
					iVar0 = 4;
				}
				else if (iParam1 >= 241)
				{
					if (iVar4 != -1)
					{
						iVar5 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar4);
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar6, &iVar7, &iVar8, &iVar9);
							if (iVar9 == 3)
							{
								if (iVar7 != 0 && iVar7 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam0, iVar7, 3, 3);
								}
								else
								{
									iVar0 = iVar8;
								}
								iVar6 = iVar5 + 1;
							}
							iVar6++;
						}
					}
				}
			}
			else if ((iParam2 >= 172 && iParam2 <= 187) || iVar1 == 11)
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SWEAT_VEST"), 0))
				{
					iVar0 = 6;
				}
				else if ((((iParam1 >= 48 && iParam1 <= 63) || (iParam1 >= 112 && iParam1 <= 127)) || iVar3 == 3) || iVar3 == 7)
				{
					iVar0 = 11;
				}
				else if ((iParam1 >= 96 && iParam1 <= 111) || iVar3 == 6)
				{
					iVar0 = 11;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LONG_SLEEVE"), 0))
				{
					iVar0 = 12;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			else if ((iParam2 >= 140 && iParam2 <= 155) || iVar1 == 9)
			{
				iVar0 = 0;
			}
			else if (iParam2 == 236)
			{
				if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			break;
		case joaat("MP_F_Freemode_01"):
			if (iParam2 >= 256)
			{
				iVar2 = __LIB_0__::func_420(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__::func_252(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__::func_420(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__::func_252(iVar4);
				switch (iVar4)
				{
					case joaat("DLC_MP_BEACH_F_ACCS2_0"):
					case joaat("DLC_MP_BEACH_F_ACCS2_1"):
					case joaat("DLC_MP_BEACH_F_ACCS2_2"):
					case joaat("DLC_MP_BEACH_F_ACCS2_3"):
					case joaat("DLC_MP_BEACH_F_ACCS2_4"):
					case joaat("DLC_MP_BEACH_F_ACCS2_5"):
					case joaat("DLC_MP_BEACH_F_ACCS2_6"):
					case joaat("DLC_MP_BEACH_F_ACCS2_7"):
					case joaat("DLC_MP_BEACH_F_ACCS2_8"):
					case joaat("DLC_MP_BEACH_F_ACCS2_9"):
					case joaat("DLC_MP_BEACH_F_ACCS2_10"):
					case joaat("DLC_MP_BEACH_F_ACCS2_11"):
						iVar3 = 15;
						break;
					case joaat("DLC_MP_VAL_F_ACCS2_0"):
					case joaat("DLC_MP_VAL_F_ACCS2_1"):
					case joaat("DLC_MP_VAL_F_ACCS2_2"):
					case joaat("DLC_MP_VAL_F_ACCS2_3"):
					case joaat("DLC_MP_VAL_F_ACCS2_4"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_0"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_1"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_2"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_3"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_4"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_5"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_6"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_7"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_8"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_9"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_10"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_11"):
						iVar3 = 13;
						break;
					}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				iVar0 = 0;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
			{
				if ((((((((((((((((((((((((((((iParam1 >= 34 && iParam1 <= 49) || (iParam1 >= 50 && iParam1 <= 65)) || (iParam1 >= 71 && iParam1 <= 86)) || (iParam1 >= 87 && iParam1 <= 102)) || (iParam1 >= 103 && iParam1 <= 118)) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 4) || iVar3 == 5) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 15) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_0")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_1")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_2")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_3")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_4")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_5")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_6")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0))
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_384(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 14;
					}
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("OPEN_SHORT"), 0))
			{
				if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_5"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0)))
				{
					iVar0 = 9;
				}
				else
				{
					iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_6__::func_808(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LONG_SLEEVE"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_0"), 0))
			{
				iVar0 = 7;
			}
			else if ((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_2"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0)))
			{
				iVar0 = 3;
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW_DRAW_1"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = 15;
				}
			}
			else if ((((((((((((((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_0"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_6"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_7"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_8"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0)))
			{
				if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 96 && iParam2 <= 111)) || (iParam2 >= 128 && iParam2 <= 143)) || iVar1 == 1) || iVar1 == 6) || iVar1 == 8)
				{
					iVar0 = 1;
				}
				else if (((((((((((((((((((((((((((iParam2 >= 112 && iParam2 <= 127) || (iParam2 >= 160 && iParam2 <= 175)) || iVar1 == 7) || iVar1 == 10) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TAILS_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_33"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0))
				{
					iVar0 = 3;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_7"), 0))
				{
					iVar0 = 9;
				}
			}
			else if ((((((((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_0"), 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_33"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0)))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0))
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else if ((iParam2 >= 16 && iParam2 <= 31) || iVar1 == 1)
			{
				if ((((iParam1 >= 50 && iParam1 <= 65) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 5) || iVar3 == 15)
				{
					iVar0 = 5;
				}
				else if (iParam1 >= 136)
				{
					if (iVar4 != -1)
					{
						iVar10 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar4);
						iVar11 = 0;
						while (iVar11 < iVar10)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar11, &iVar12, &iVar13, &iVar14);
							if (iVar14 == 3)
							{
								if (iVar12 != 0 && iVar12 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam0, iVar12, 3, 4);
								}
								else
								{
									iVar0 = iVar13;
								}
								iVar11 = iVar10 + 1;
							}
							iVar11++;
						}
					}
				}
			}
			else if (((iParam2 >= 112 && iParam2 <= 127) || iVar1 == 7) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 6;
				}
			}
			break;
	}
	return iVar0;
}

void func_385(int iParam0)//Position - 0x4DE72
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
	int iVar12;
	int iVar13;
	bool bVar14;
	struct<5> Var15;
	int* iVar16;
	int iVar17;
	struct<5> Var18;
	int* iVar19;
	int iVar20;
	struct<5> Var21;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
	iVar3 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	iVar4 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
	iVar5 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
	iVar6 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
	iVar7 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10);
	iVar8 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 10);
	iVar9 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, iVar2);
	iVar10 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar3, iVar4);
	iVar11 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar5, iVar6);
	iVar12 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	iVar13 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 10, iVar7, iVar8);
	bVar14 = false;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOODED_JACKET"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOOD_UP"), 0))
	{
		if (!func_390(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_0__::func_258(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_257(iVar13, 11, -1))
				{
					if (__LIB_0__::func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_256(iVar13, 10, &iVar17, -1))
					{
						if (__LIB_0__::func_257(iVar17, 11, Var15.f_1))
						{
							FILES::GET_SHOP_PED_COMPONENT(iVar17, &Var18);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var18.f_3, Var18.f_4, 0);
						}
					}
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_16"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_19"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("GORKA_SUIT"), 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_M_DECL_10_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_2"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_0_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_0_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_3"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_16"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_19"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("GORKA_SUIT"), 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_F_DECL_10_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_7"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_1_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_1_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_8"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_2_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_2_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOODED_JACKET"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOOD_DOWN"), 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("FAKE_HAT"), 1))
		{
			if (__LIB_0__::func_258(iVar9, 1, 0, &iVar19))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar19, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_257(iVar13, 11, -1))
				{
					if (__LIB_0__::func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_256(iVar13, 10, &iVar20, -1))
					{
						if (__LIB_0__::func_257(iVar20, 11, Var15.f_1))
						{
							FILES::GET_SHOP_PED_COMPONENT(iVar20, &Var21);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var21.f_3, Var21.f_4, 0);
						}
					}
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_16"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_19"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("GORKA_SUIT"), 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_M_DECL_10_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_2"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_0_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_0_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_3"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_16"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_19"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("GORKA_SUIT"), 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_F_DECL_10_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_7"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_1_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_1_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_8"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_2_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_2_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("HAZ_HOOD"), 0) || __LIB_0__::func_255(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_390(iParam0, &bVar14, iVar9, iVar10, iVar12))
		{
			if (bVar14)
			{
				if (iVar0 == joaat("MP_M_Freemode_01"))
				{
					iVar5 = 15;
					iVar6 = 0;
				}
				else
				{
					iVar5 = 14;
					iVar6 = 0;
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_6_0"), &Var15);
				iVar5 = Var15.f_3;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_10_0"), &Var15);
				iVar5 = Var15.f_3;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_7_0"), &Var15);
			iVar5 = Var15.f_3;
		}
		else
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_11_0"), &Var15);
			iVar5 = Var15.f_3;
		}
		if (iVar5 != PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8) || iVar6 != PED::GET_PED_TEXTURE_VARIATION(iParam0, 8))
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iVar5, iVar6, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
		}
	}
}

int func_390(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4E83C
{
	int iVar0;
	*iParam1 = 0;
	if (iParam2 == -1)
	{
		iParam2 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	}
	if (iParam3 == -1)
	{
		iParam3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
	}
	if (iParam4 == -1)
	{
		iParam4 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HOODED_JACKET"), 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("FITTED_HOOD"), 0))
		{
			if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam4, joaat("HOOD_HAT"), 1) && PED::GET_PED_PROP_INDEX(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HOOD_COMPAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam4, joaat("HOOD_HAT"), 1))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("SKI_MASK"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("BIKER_MASK"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("BIKER_MASK"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("NIGHT_VISION"), 0))
			{
				return 0;
			}
		}
		else
		{
			if (PED::GET_PED_PROP_INDEX(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HOOD_COMPAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				return 0;
			}
		}
		return 1;
	}
	if (iVar0 == joaat("MP_M_Freemode_01"))
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HEIST_DRAW_14"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case joaat("DLC_MP_HEIST_M_BERD_21_0"):
			case joaat("DLC_MP_HEIST_M_BERD_21_1"):
			case joaat("DLC_MP_HEIST_M_BERD_21_2"):
			case joaat("DLC_MP_HEIST_M_BERD_21_3"):
			case joaat("DLC_MP_HEIST_M_BERD_21_4"):
			case joaat("DLC_MP_HEIST_M_BERD_21_5"):
			case joaat("DLC_MP_HEIST_M_BERD_21_6"):
			case joaat("DLC_MP_HEIST_M_BERD_21_7"):
			case joaat("DLC_MP_HEIST_M_BERD_21_8"):
			case joaat("DLC_MP_HEIST_M_BERD_14_0"):
			case joaat("DLC_MP_HEIST_M_BERD_14_1"):
			case joaat("DLC_MP_HEIST_M_BERD_14_2"):
			case joaat("DLC_MP_HEIST_M_BERD_14_3"):
			case joaat("DLC_MP_HEIST_M_BERD_14_4"):
			case joaat("DLC_MP_HEIST_M_BERD_14_5"):
			case joaat("DLC_MP_HEIST_M_BERD_14_6"):
			case joaat("DLC_MP_HEIST_M_BERD_14_7"):
			case joaat("DLC_MP_HEIST_M_BERD_14_8"):
			case joaat("DLC_MP_HEIST_M_BERD_14_9"):
			case joaat("DLC_MP_HEIST_M_BERD_14_10"):
			case joaat("DLC_MP_HEIST_M_BERD_14_11"):
			case joaat("DLC_MP_HEIST_M_BERD_14_12"):
			case joaat("DLC_MP_HEIST_M_BERD_14_13"):
			case joaat("DLC_MP_HEIST_M_BERD_14_14"):
			case joaat("DLC_MP_HEIST_M_BERD_14_15"):
			case joaat("DLC_MP_HEIST_M_BERD_14_16"):
			case joaat("DLC_MP_HEIST_M_BERD_14_17"):
			case joaat("DLC_MP_HEIST_M_BERD_14_18"):
			case joaat("DLC_MP_HEIST_M_BERD_14_19"):
			case joaat("DLC_MP_HEIST_M_BERD_14_20"):
			case joaat("DLC_MP_HEIST_M_BERD_14_21"):
			case joaat("DLC_MP_HEIST_M_BERD_14_22"):
			case joaat("DLC_MP_HEIST_M_BERD_14_23"):
			case joaat("DLC_MP_HEIST_M_BERD_14_24"):
			case joaat("DLC_MP_HEIST_M_BERD_14_25"):
			case joaat("DLC_MP_IND_M_BERD_4_0"):
			case joaat("DLC_MP_IND_M_BERD_4_1"):
			case joaat("DLC_MP_IND_M_BERD_3_0"):
			case joaat("DLC_MP_IND_M_BERD_3_1"):
				*iParam1 = 1;
				return 0;
				break;
		}
	}
	else
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HEIST_DRAW_15"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("SCRUFFY_BALACLAVA"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case joaat("DLC_MP_SMUG_F_BERD_8_0"):
			case joaat("DLC_MP_SMUG_F_BERD_8_1"):
			case joaat("DLC_MP_SMUG_F_BERD_8_2"):
			case joaat("DLC_MP_SMUG_F_BERD_8_3"):
			case joaat("DLC_MP_SMUG_F_BERD_8_4"):
			case joaat("DLC_MP_SMUG_F_BERD_8_5"):
			case joaat("DLC_MP_SMUG_F_BERD_8_6"):
			case joaat("DLC_MP_SMUG_F_BERD_8_7"):
			case joaat("DLC_MP_SMUG_F_BERD_8_8"):
			case joaat("DLC_MP_SMUG_F_BERD_8_9"):
			case joaat("DLC_MP_SMUG_F_BERD_8_10"):
			case joaat("DLC_MP_SMUG_F_BERD_8_11"):
			case joaat("DLC_MP_SMUG_F_BERD_8_12"):
			case joaat("DLC_MP_SMUG_F_BERD_8_13"):
			case joaat("DLC_MP_SMUG_F_BERD_8_14"):
			case joaat("DLC_MP_SMUG_F_BERD_8_15"):
			case joaat("DLC_MP_SMUG_F_BERD_8_16"):
			case joaat("DLC_MP_SMUG_F_BERD_8_17"):
			case joaat("DLC_MP_SMUG_F_BERD_8_18"):
			case joaat("DLC_MP_SMUG_F_BERD_8_19"):
			case joaat("DLC_MP_SMUG_F_BERD_8_20"):
			case joaat("DLC_MP_SMUG_F_BERD_8_21"):
			case joaat("DLC_MP_SMUG_F_BERD_8_22"):
			case joaat("DLC_MP_SMUG_F_BERD_8_23"):
			case joaat("DLC_MP_SMUG_F_BERD_8_24"):
			case joaat("DLC_MP_SMUG_F_BERD_8_25"):
			case joaat("DLC_MP_HEIST_F_BERD_23_0"):
			case joaat("DLC_MP_HEIST_F_BERD_23_1"):
			case joaat("DLC_MP_HEIST_F_BERD_23_2"):
			case joaat("DLC_MP_HEIST_F_BERD_23_3"):
			case joaat("DLC_MP_HEIST_F_BERD_23_4"):
			case joaat("DLC_MP_HEIST_F_BERD_23_5"):
			case joaat("DLC_MP_HEIST_F_BERD_23_6"):
			case joaat("DLC_MP_HEIST_F_BERD_23_7"):
			case joaat("DLC_MP_HEIST_F_BERD_23_8"):
			case joaat("DLC_MP_HEIST_F_BERD_23_9"):
			case joaat("DLC_MP_HEIST_F_BERD_22_0"):
			case joaat("DLC_MP_HEIST_F_BERD_22_1"):
			case joaat("DLC_MP_HEIST_F_BERD_22_2"):
			case joaat("DLC_MP_HEIST_F_BERD_22_3"):
			case joaat("DLC_MP_HEIST_F_BERD_22_4"):
			case joaat("DLC_MP_HEIST_F_BERD_22_5"):
			case joaat("DLC_MP_HEIST_F_BERD_22_6"):
			case joaat("DLC_MP_HEIST_F_BERD_22_7"):
			case joaat("DLC_MP_HEIST_F_BERD_22_8"):
			case joaat("DLC_MP_HEIST_F_BERD_22_9"):
			case joaat("DLC_MP_HEIST_F_BERD_22_10"):
			case joaat("DLC_MP_HEIST_F_BERD_22_11"):
			case joaat("DLC_MP_HEIST_F_BERD_22_12"):
			case joaat("DLC_MP_HEIST_F_BERD_22_13"):
			case joaat("DLC_MP_HEIST_F_BERD_22_14"):
			case joaat("DLC_MP_HEIST_F_BERD_22_15"):
			case joaat("DLC_MP_HEIST_F_BERD_22_16"):
			case joaat("DLC_MP_HEIST_F_BERD_22_17"):
			case joaat("DLC_MP_HEIST_F_BERD_22_18"):
			case joaat("DLC_MP_HEIST_F_BERD_22_19"):
			case joaat("DLC_MP_HEIST_F_BERD_22_20"):
			case joaat("DLC_MP_HEIST_F_BERD_22_21"):
			case joaat("DLC_MP_HEIST_F_BERD_21_0"):
			case joaat("DLC_MP_HEIST_F_BERD_21_1"):
			case joaat("DLC_MP_HEIST_F_BERD_21_2"):
			case joaat("DLC_MP_HEIST_F_BERD_21_3"):
			case joaat("DLC_MP_HEIST_F_BERD_21_4"):
			case joaat("DLC_MP_HEIST_F_BERD_21_5"):
			case joaat("DLC_MP_HEIST_F_BERD_21_6"):
			case joaat("DLC_MP_HEIST_F_BERD_21_7"):
			case joaat("DLC_MP_HEIST_F_BERD_21_8"):
			case joaat("DLC_MP_HEIST_F_BERD_20_0"):
			case joaat("DLC_MP_HEIST_F_BERD_20_1"):
			case joaat("DLC_MP_HEIST_F_BERD_19_0"):
			case joaat("DLC_MP_HEIST_F_BERD_19_1"):
			case joaat("DLC_MP_HEIST_F_BERD_19_2"):
			case joaat("DLC_MP_HEIST_F_BERD_19_3"):
			case joaat("DLC_MP_HEIST_F_BERD_19_4"):
			case joaat("DLC_MP_HEIST_F_BERD_19_5"):
			case joaat("DLC_MP_HEIST_F_BERD_19_6"):
			case joaat("DLC_MP_HEIST_F_BERD_19_7"):
			case joaat("DLC_MP_HEIST_F_BERD_19_8"):
			case joaat("DLC_MP_HEIST_F_BERD_19_9"):
			case joaat("DLC_MP_HEIST_F_BERD_19_10"):
			case joaat("DLC_MP_HEIST_F_BERD_18_0"):
			case joaat("DLC_MP_HEIST_F_BERD_18_1"):
			case joaat("DLC_MP_HEIST_F_BERD_18_2"):
			case joaat("DLC_MP_HEIST_F_BERD_18_3"):
			case joaat("DLC_MP_HEIST_F_BERD_18_4"):
			case joaat("DLC_MP_HEIST_F_BERD_18_5"):
			case joaat("DLC_MP_HEIST_F_BERD_18_6"):
			case joaat("DLC_MP_HEIST_F_BERD_18_7"):
			case joaat("DLC_MP_HEIST_F_BERD_18_8"):
			case joaat("DLC_MP_HEIST_F_BERD_17_0"):
			case joaat("DLC_MP_HEIST_F_BERD_17_1"):
			case joaat("DLC_MP_HEIST_F_BERD_17_2"):
			case joaat("DLC_MP_HEIST_F_BERD_17_3"):
			case joaat("DLC_MP_HEIST_F_BERD_17_4"):
			case joaat("DLC_MP_HEIST_F_BERD_17_5"):
			case joaat("DLC_MP_HEIST_F_BERD_17_6"):
			case joaat("DLC_MP_HEIST_F_BERD_17_7"):
			case joaat("DLC_MP_HEIST_F_BERD_17_8"):
			case joaat("DLC_MP_HEIST_F_BERD_17_9"):
			case joaat("DLC_MP_HEIST_F_BERD_17_10"):
			case joaat("DLC_MP_HEIST_F_BERD_14_0"):
			case joaat("DLC_MP_HEIST_F_BERD_14_1"):
			case joaat("DLC_MP_HEIST_F_BERD_14_2"):
			case joaat("DLC_MP_HEIST_F_BERD_14_3"):
			case joaat("DLC_MP_HEIST_F_BERD_14_4"):
			case joaat("DLC_MP_HEIST_F_BERD_14_5"):
			case joaat("DLC_MP_HEIST_F_BERD_14_6"):
			case joaat("DLC_MP_HEIST_F_BERD_14_7"):
			case joaat("DLC_MP_HEIST_F_BERD_14_8"):
			case joaat("DLC_MP_HEIST_F_BERD_14_9"):
			case joaat("DLC_MP_HEIST_F_BERD_14_10"):
			case joaat("DLC_MP_HEIST_F_BERD_14_11"):
			case joaat("DLC_MP_HEIST_F_BERD_14_12"):
			case joaat("DLC_MP_HEIST_F_BERD_14_13"):
			case joaat("DLC_MP_HEIST_F_BERD_14_14"):
			case joaat("DLC_MP_HEIST_F_BERD_14_15"):
			case joaat("DLC_MP_HEIST_F_BERD_14_16"):
			case joaat("DLC_MP_HEIST_F_BERD_14_17"):
			case joaat("DLC_MP_HEIST_F_BERD_14_18"):
			case joaat("DLC_MP_HEIST_F_BERD_14_19"):
			case joaat("DLC_MP_HEIST_F_BERD_14_20"):
			case joaat("DLC_MP_HEIST_F_BERD_14_21"):
			case joaat("DLC_MP_HEIST_F_BERD_14_22"):
			case joaat("DLC_MP_HEIST_F_BERD_14_23"):
			case joaat("DLC_MP_HEIST_F_BERD_14_24"):
			case joaat("DLC_MP_HEIST_F_BERD_14_25"):
			case joaat("DLC_MP_HEIST_F_BERD_13_0"):
			case joaat("DLC_MP_HEIST_F_BERD_13_1"):
			case joaat("DLC_MP_HEIST_F_BERD_13_2"):
			case joaat("DLC_MP_HEIST_F_BERD_13_3"):
			case joaat("DLC_MP_HEIST_F_BERD_12_0"):
			case joaat("DLC_MP_HEIST_F_BERD_12_1"):
			case joaat("DLC_MP_HEIST_F_BERD_12_2"):
			case joaat("DLC_MP_HEIST_F_BERD_12_3"):
			case joaat("DLC_MP_HEIST_F_BERD_7_0"):
			case joaat("DLC_MP_HEIST_F_BERD_7_1"):
			case joaat("DLC_MP_HEIST_F_BERD_5_0"):
			case joaat("DLC_MP_HEIST_F_BERD_5_1"):
			case joaat("DLC_MP_HEIST_F_BERD_4_0"):
			case joaat("DLC_MP_HEIST_F_BERD_4_1"):
			case joaat("DLC_MP_HEIST_F_BERD_0_0"):
			case joaat("DLC_MP_XMAS2_F_BERD_1_0"):
			case joaat("DLC_MP_LTS_F_BERD_0_0"):
			case joaat("DLC_MP_LTS_F_BERD_0_1"):
			case joaat("DLC_MP_LTS_F_BERD_0_2"):
			case joaat("DLC_MP_LTS_F_BERD_0_3"):
			case joaat("DLC_MP_LTS_F_BERD_0_4"):
			case joaat("DLC_MP_IND_F_BERD_4_0"):
			case joaat("DLC_MP_IND_F_BERD_4_1"):
			case joaat("DLC_MP_IND_F_BERD_3_0"):
			case joaat("DLC_MP_IND_F_BERD_3_1"):
				*iParam1 = 1;
				return 0;
				break;
			}
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_709(iVar0, 14, func_400(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_394(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x51225
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_445(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_6__::func_808(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_6__::func_795(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_6__::func_795(iParam0, 11);
				if (!__LIB_6__::func_808(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_25__::func_74(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__::func_297(iVar0, iParam2, 13) && !__LIB_25__::func_297(iVar0, iParam2, 14)) && !__LIB_25__::func_297(iVar0, iParam2, 15)) && !__LIB_25__::func_297(iVar0, iParam2, 16)) && !__LIB_25__::func_297(iVar0, iParam2, 71)) && !__LIB_25__::func_297(iVar0, iParam2, 72))
				{
					__LIB_25__::func_74(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_25__::func_110(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__::func_393(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_18__::func_394(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_400(int iParam0, int iParam1, int iParam2)//Position - 0x514D4
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_297(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_297(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return __LIB_6__::func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__::func_795(iParam0, iParam1);
		}
	}
	return -99;
}

void func_403(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x51653
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_78127 != __LIB_0__::func_5() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_37__::func_856(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
			}
			if (bParam3)
			{
				iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Global_2883588);
				iVar5 = 0;
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (iVar5 < Global_4538446)
					{
						Global_4538446[iVar5] = -1;
						Global_4538457[iVar5] = -1;
					}
					FILES::GET_VARIANT_COMPONENT(Global_2883588, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar4 != 10 && iVar4 != 9)
					{
						if (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("STOCKINGS"), 0))
						{
						}
						else if (iVar2 != 0 && iVar2 != joaat("0"))
						{
							__LIB_7__::func_86(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_403(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
						}
					}
					iVar1++;
				}
				Global_4538445++;
				if (Global_4538445 < 2)
				{
					iVar1 = 0;
					while (iVar1 < iVar5)
					{
						if (iVar1 < Global_4538446)
						{
							if (Global_4538446[iVar1] != -1)
							{
								if (iParam0 == joaat("MP_M_Freemode_01"))
								{
									func_403(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_403(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
								}
							}
						}
						iVar1++;
					}
				}
				Global_4538445 = (Global_4538445 - 1);
			}
			return;
		}
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && !BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (__LIB_0__::func_36(iParam1, Global_78130[1 /*14*/].f_2, &iVar6))
			{
				iVar7 = __LIB_1__::func_556(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_1__::func_597(iVar6, iVar7, Global_78127, 1, 0);
			}
			if (bParam3 == 1)
			{
				if (iParam0 == joaat("MP_M_Freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar8 = (75 + Global_78130[2 /*14*/].f_4);
							func_403(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_403(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_403(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_403(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_403(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_403(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_403(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_403(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_403(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_403(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_403(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_403(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_403(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
									break;
								}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == joaat("MP_F_Freemode_01"))
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_403(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_37__::func_856(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__::func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_403(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_403(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__::func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_403(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_445(int iParam0)//Position - 0x6A3B4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_0__::func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_400(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_11"), 0))
					{
						return 1;
					}
					else if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_19"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_23"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_27"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_1"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						return 1;
					}
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_0__::func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_400(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
					{
						return 1;
					}
					else if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_22"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_23"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_26"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_28"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_6"), 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_447(int iParam0, int iParam1, int iParam2)//Position - 0x6A70E
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_247(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_449(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6A7D5
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_247(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_451(int iParam0, int iParam1, int iParam2)//Position - 0x6AA95
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_247(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_247(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return __LIB_6__::func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__::func_795(iParam0, iParam1);
		}
	}
	return -99;
}

int func_452(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x6AB36
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
		Global_78130[1 /*14*/] = { __LIB_37__::func_904(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_8__::func_105(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_6__::func_795(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_6__::func_795(iParam0, 9);
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
			iVar7 = __LIB_6__::func_788(iParam0, 1);
			if (!__LIB_6__::func_780(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_6__::func_788(iParam0, 0);
			if (!__LIB_6__::func_779(iVar10, 14, iVar8, -1) && !__LIB_6__::func_827(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_6__::func_788(iParam0, 2);
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
			uVar11 = { __LIB_18__::func_180(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { __LIB_37__::func_904(iVar10, iVar0, uVar11[iVar0], -1) };
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
							uVar12 = { __LIB_18__::func_247(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { __LIB_37__::func_904(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_8__::func_105(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_40__::func_954(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_452(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
							__LIB_0__::func_211(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_8__::func_105(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_40__::func_954(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_452(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_37__::func_904(iVar10, iVar0, func_451(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_449(iParam0, iVar10, &iVar4, 1))
							{
								func_452(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_452(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_37__::func_904(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_452(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_37__::func_904(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_452(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_37__::func_904(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_452(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_37__::func_904(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_452(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_37__::func_904(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_452(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_18__::func_247(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_37__::func_904(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_8__::func_105(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__::func_954(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_452(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_8__::func_105(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__::func_954(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_452(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__::func_954(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_452(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_39__::func_836(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_449(iParam0, iVar10, &iVar4, 0))
		{
			func_452(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_447(iParam0, iVar10, &iVar4))
		{
			func_452(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

void func_483(int iParam0)//Position - 0x6E153
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bVar0 = __LIB_20__::func_763(iParam0);
	if (__LIB_0__::func_317(bVar0))
	{
		if (!Global_100362[bVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[bVar0] != 0)
			{
				if (__LIB_0__::func_352(iParam0) != Global_113386.f_2363.f_539.f_2391[bVar0])
				{
					__LIB_0__::func_358(bVar0);
					Global_113386.f_2363.f_539.f_2391[bVar0] = __LIB_0__::func_352(iParam0);
				}
			}
		}
		func_271(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[bVar0])
		{
			bVar2 = false;
			if (bVar0 == 0)
			{
				if (!__LIB_0__::func_365(49))
				{
					iVar1 = func_451(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_484(__LIB_12__::func_95(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::func_365(44))
				{
					iVar1 = func_451(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_451(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_484(__LIB_12__::func_95(0), 3, 70, 1, 0, 0, 0);
					func_484(__LIB_12__::func_95(0), 3, 71, 1, 0, 0, 0);
					func_484(__LIB_12__::func_95(0), 3, 72, 1, 0, 0, 0);
					func_484(__LIB_12__::func_95(0), 3, 73, 1, 0, 0, 0);
					func_484(__LIB_12__::func_95(0), 3, 74, 1, 0, 0, 0);
					func_484(__LIB_12__::func_95(0), 3, 75, 1, 0, 0, 0);
					func_484(__LIB_12__::func_95(0), 4, 41, 1, 0, 0, 0);
					func_484(__LIB_12__::func_95(0), 4, 42, 1, 0, 0, 0);
					func_484(__LIB_12__::func_95(0), 4, 43, 1, 0, 0, 0);
					func_484(__LIB_12__::func_95(0), 4, 44, 1, 0, 0, 0);
					func_484(__LIB_12__::func_95(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (bVar0 == 2)
			{
				iVar1 = func_451(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_0__::func_358(bVar0);
				func_271(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[bVar0] = 1;
	}
}

void func_484(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x6E3B0
{
	__LIB_38__::func_117(iParam0, iParam1, iParam2, bParam3);
	func_487(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_364(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_41__::func_398(iParam0, iParam1, iParam2, 0);
	}
}

int func_487(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x6E56B
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_37__::func_904(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
			if (iParam1 == 12)
			{
				iVar0 = 1;
				if (iParam0 == joaat("Player_Zero"))
				{
					if (iParam2 == 31)
					{
						iVar0 = 0;
					}
				}
				if (iVar0 == 1)
				{
					uVar3 = { __LIB_18__::func_180(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_487(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_38__::func_117(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__::func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_487(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_38__::func_117(iParam0, 14, uVar4[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
		}
		if (iParam4 == 1 && bParam3 == 1)
		{
			switch (iParam0)
			{
				case joaat("Player_Zero"):
					break;
				case joaat("Player_One"):
					switch (iParam1)
					{
						case 3:
							if (iParam2 >= 176 && iParam2 <= 191)
							{
								iVar5 = (227 + Global_78130[1 /*14*/].f_4);
								func_487(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_487(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_487(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_487(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_487(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_487(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_487(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_487(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_487(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_487(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_487(iParam0, 14, iVar5, 1, 0);
							}
							break;
					}
					break;
				case joaat("Player_Two"):
					switch (iParam1)
					{
						case 4:
							if (iParam2 >= 81 && iParam2 <= 90)
							{
								iVar5 = (94 + Global_78130[1 /*14*/].f_4);
								func_487(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_487(iParam0, 14, 17, 1, 0);
							}
							break;
					}
					break;
				}
		}
		return 1;
	}
	return 0;
}

int func_491(int* iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x6EB50
{
	int iVar0;
	if (__LIB_0__::func_317(bParam1))
	{
		iVar0 = __LIB_12__::func_95(bParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
			{
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, true, true);
				__LIB_26__::func_535(*iParam0, bParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_483(*iParam0);
				__LIB_36__::func_54(*iParam0, 1, 0);
				__LIB_26__::func_525(*iParam0);
				__LIB_26__::func_430(*iParam0);
				func_178(*iParam0, bParam6);
				__LIB_0__::func_349(*iParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_499()//Position - 0x6ECD1
{
	if (!iLocal_74)
	{
		if (Global_113386.f_9085)
		{
			if (!__LIB_0__::func_176(62))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bjxl"), true);
				iLocal_74 = 1;
			}
		}
	}
	else if (__LIB_0__::func_176(62) || !Global_113386.f_9085)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bjxl"), false);
		iLocal_74 = 0;
	}
}

void func_500()//Position - 0x6ED27
{
	int iVar0;
	struct<3> Var1;
	iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("submersible")) || VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("chernobog")))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (__LIB_2__::func_49(iVar0) || (Var1.f_2 < -190f && ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())))
			{
				PED::EXPLODE_PED_HEAD(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"));
			}
		}
	}
}

void func_502()//Position - 0x6EDE4
{
	if (!__LIB_9__::func_603())
	{
		if (BitTest(Global_113386.f_10016.f_25, 3))
		{
			if (!func_503())
			{
				MISC::CLEAR_BIT(&(Global_113386.f_10016.f_25), 3);
			}
		}
		else if (func_503())
		{
			MISC::SET_BIT(&(Global_113386.f_10016.f_25), 3);
		}
	}
}

int func_503()//Position - 0x6EE30
{
	__LIB_32__::func_766();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

void func_505()//Position - 0x6EECD
{
	if (REPLAY::REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP())
	{
		Global_78126 = 1;
		Global_102576 = 1;
		func_693(1);
		func_506();
		VEHICLE::SET_RANDOM_TRAINS(false);
		VEHICLE::DELETE_ALL_TRAINS();
		NETWORK::NETWORK_BLOCK_INVITES(true);
		Global_4 = 1;
		REPLAY::SET_SCRIPTS_HAVE_CLEANED_UP_FOR_REPLAY_SYSTEM();
	}
}

void func_506()//Position - 0x6EF05
{
	Global_78588 = 1;
	func_692();
	__LIB_41__::func_420();
	__LIB_30__::func_277();
	__LIB_30__::func_275();
	__LIB_39__::func_451();
	__LIB_34__::func_966();
	__LIB_41__::func_996();
	__LIB_30__::func_272();
	func_642();
	func_635();
	func_623();
	__LIB_37__::func_341();
	func_598();
	__LIB_34__::func_963();
	func_592();
	func_543();
	__LIB_37__::func_429();
	func_540();
	__LIB_41__::func_995();
	func_525();
	func_524();
	func_523();
	func_522();
	func_521();
	__LIB_34__::func_962();
	__LIB_34__::func_961();
	__LIB_30__::func_263();
	func_515();
	func_511();
	__LIB_34__::func_959();
	__LIB_30__::func_262();
	func_507();
	Global_78588 = 0;
}

void func_507()//Position - 0x6EF97
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_75250[iVar0 /*9*/].f_6 = 0;
		Global_75250[iVar0 /*9*/].f_8 = 0;
		Global_75250[iVar0 /*9*/].f_1 = 0;
		Global_75250[iVar0 /*9*/].f_7 = 0;
		iVar0++;
	}
}

void func_511()//Position - 0x7878D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 321)
	{
		Global_113386.f_10194[iVar0 /*12*/].f_5 = 0;
		iVar0++;
	}
	__LIB_6__::func_855();
}

void func_515()//Position - 0x78D15
{
	func_516();
}

void func_516()//Position - 0x78D21
{
	struct<292> Var0;
	Global_109918 = 1;
	Var0 = 3;
	Var0.f_1.f_33 = 5;
	Var0.f_1.f_43.f_33 = 5;
	Var0.f_1.f_43.f_43.f_33 = 5;
	Var0.f_130 = 3;
	Var0.f_273 = 3;
	Var0.f_277 = 3;
	Var0.f_281 = 3;
	Var0.f_285 = 3;
	Global_113386.f_20118 = { Var0 };
	Global_113386.f_20118[1 /*43*/] = joaat("buffalo2");
	Global_113386.f_20118.f_273[1] = 1;
	Global_113386.f_20118[0 /*43*/] = joaat("tailgater");
	Global_113386.f_20118[2 /*43*/] = joaat("bodhi2");
	Global_113386.f_20118.f_254.f_4 = 4;
}

void func_521()//Position - 0x790F1
{
	struct<145> Var0;
	Var0.f_1 = 8;
	Var0.f_1.f_1 = 3;
	Var0.f_1.f_1.f_4 = 2;
	Var0.f_1.f_1.f_7 = 2;
	Var0.f_1.f_1.f_11 = 3;
	Var0.f_1.f_1.f_11.f_4 = 2;
	Var0.f_1.f_1.f_11.f_7 = 2;
	Var0.f_1.f_1.f_11.f_11 = 3;
	Var0.f_1.f_1.f_11.f_11.f_4 = 2;
	Var0.f_1.f_1.f_11.f_11.f_7 = 2;
	Var0.f_1.f_1.f_11.f_11.f_11 = 3;
	Var0.f_1.f_1.f_11.f_11.f_11.f_4 = 2;
	Var0.f_1.f_1.f_11.f_11.f_11.f_7 = 2;
	Var0.f_1.f_1.f_11.f_11.f_11.f_11 = 3;
	Var0.f_1.f_1.f_11.f_11.f_11.f_11.f_4 = 2;
	Var0.f_1.f_1.f_11.f_11.f_11.f_11.f_7 = 2;
	Var0.f_1.f_1.f_11.f_11.f_11.f_11.f_11 = 3;
	Var0.f_1.f_1.f_11.f_11.f_11.f_11.f_11.f_4 = 2;
	Var0.f_1.f_1.f_11.f_11.f_11.f_11.f_11.f_7 = 2;
	Var0.f_1.f_1.f_11.f_11.f_11.f_11.f_11.f_11 = 3;
	Var0.f_1.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_4 = 2;
	Var0.f_1.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_7 = 2;
	Var0.f_1.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 3;
	Var0.f_1.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_4 = 2;
	Var0.f_1.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_7 = 2;
	Var0.f_90 = 3;
	Var0.f_111 = 3;
	Var0.f_129 = 3;
	Var0.f_135 = 2;
	Var0.f_138 = 4;
	Global_113386.f_10049 = { Var0 };
}

void func_522()//Position - 0x791C4
{
	Global_113386.f_26434 = 0;
	Global_113386.f_26434.f_1 = 0;
	Global_113386.f_26434.f_2 = 0;
	Global_113386.f_26434.f_3 = 0;
	Global_113386.f_26434.f_5 = 0;
}

void func_523()//Position - 0x791FC
{
	Global_113386.f_25073 = 0;
	Global_113386.f_25073.f_1 = 0;
	Global_113386.f_25073.f_2 = 0;
	Global_113386.f_25073.f_3 = 0;
	Global_113386.f_25073.f_4 = 0;
	Global_113386.f_25073.f_5 = 0;
	Global_113386.f_25073.f_6 = 0;
	Global_113386.f_25073.f_7 = 0;
	Global_113386.f_25073.f_8 = 0;
	Global_113386.f_25073.f_9 = 0;
	Global_113386.f_25073.f_10 = 0;
}

void func_524()//Position - 0x79270
{
	int iVar0;
	Global_113386.f_10049.f_144 = 0;
	Global_113386.f_10049.f_143 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113386.f_10049.f_138[iVar0] = 0;
		iVar0++;
	}
}

void func_525()//Position - 0x792AC
{
	func_526();
	Global_32195 = 0;
}

void func_526()//Position - 0x792BC
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (BitTest(Global_113386.f_10049.f_99, bVar0))
		{
			MISC::CLEAR_BIT(&(Global_113386.f_10049.f_99), bVar0);
		}
		bVar0++;
	}
}

void func_540()//Position - 0x79B44
{
	int iVar0;
	Global_32007 = -61000;
	Global_113377 = MISC::GET_GAME_TIMER();
	Global_113386.f_24995 = 0;
	Global_113386.f_24995.f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_113386.f_24995.f_8[iVar0] = 0;
		__LIB_0__::func_140(&(Global_113386.f_24995.f_43[iVar0]), 1999);
		iVar0++;
	}
}

void func_543()//Position - 0x79C6B
{
	func_544();
}

void func_544()//Position - 0x79C77
{
	func_563();
	__LIB_35__::func_897();
}

void func_563()//Position - 0x7A5EB
{
	__LIB_8__::func_770(0);
	__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	__LIB_30__::func_850(0);
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	MISC::CLEAR_BIT(&(Global_100441.f_20), 7);
	MISC::CLEAR_BIT(&(Global_100441.f_20), 22);
	__LIB_0__::func_128(1);
	__LIB_30__::func_849(0);
	__LIB_29__::func_834(0);
	__LIB_0__::func_129(0);
	__LIB_30__::func_848(0);
	__LIB_20__::func_237(1);
	__LIB_30__::func_847();
	func_571(0);
	func_570(0);
	__LIB_30__::func_846(0, 1);
	__LIB_30__::func_845(0);
	__LIB_34__::func_849(0);
	__LIB_29__::func_833(0);
	__LIB_30__::func_844(0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
}

void func_570(int iParam0)//Position - 0x7A9D0
{
	if (iParam0 == 1)
	{
		if (!Global_95700)
		{
			func_571(0);
			GRAPHICS::ANIMPOSTFX_PLAY("DeathFailOut", 0, false);
			MISC::SET_BIT(&(Global_100441.f_20), 1);
			CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(2);
			__LIB_30__::func_846(1, 2);
		}
	}
	else
	{
		if (BitTest(Global_100441.f_20, 1))
		{
			if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailOut"))
			{
				GRAPHICS::ANIMPOSTFX_STOP("DeathFailOut");
			}
			CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(0);
		}
		MISC::CLEAR_BIT(&(Global_100441.f_20), 1);
	}
}

void func_571(int iParam0)//Position - 0x7AA3F
{
	char* sVar0;
	switch (__LIB_26__::func_499())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!BitTest(Global_100441.f_20, 0))
		{
			GRAPHICS::ANIMPOSTFX_PLAY(sVar0, 0, false);
			MISC::SET_BIT(&(Global_100441.f_20), 0);
			CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(1);
			__LIB_30__::func_846(1, 1);
		}
	}
	else
	{
		if (BitTest(Global_100441.f_20, 0))
		{
			if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
			{
				GRAPHICS::ANIMPOSTFX_STOP(sVar0);
			}
			CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(0);
		}
		MISC::CLEAR_BIT(&(Global_100441.f_20), 0);
	}
}

void func_592()//Position - 0x7B054
{
	int iVar0;
	__LIB_29__::func_581();
	__LIB_11__::func_99(0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113386.f_20410.f_150[iVar0] = 0;
		iVar0++;
	}
	Global_113386.f_10016.f_30 = 0;
	Global_113386.f_10016.f_31 = 0;
}

void func_598()//Position - 0x7B21D
{
	int iVar0;
	SYSTEM::WAIT(0);
	Global_38410 = 1;
	__LIB_30__::func_269();
	__LIB_41__::func_419(1);
	__LIB_30__::func_267();
	iVar0 = PLAYER::PLAYER_PED_ID();
	__LIB_24__::func_939(__LIB_26__::func_499(), &iVar0);
	SYSTEM::WAIT(0);
}

void func_623()//Position - 0x8357F
{
	__LIB_41__::func_472();
}

void func_635()//Position - 0x84006
{
	func_640();
	func_638();
	func_636(&(Global_113386.f_2363.f_539), -1);
	Global_97726 = 0;
}

void func_636(var uParam0, int iParam1)//Position - 0x8402A
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113386.f_18533[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_637(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				__LIB_0__::func_17(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_97831[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_9 = 0f;
				Global_97831[iVar0 /*29*/].f_12 = 0f;
				Global_97831[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_10 = 0f;
				Global_97831[iVar0 /*29*/].f_13 = 0f;
				Global_97831[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_11 = 0f;
				Global_97831[iVar0 /*29*/].f_14 = 0f;
				Global_97831[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_26 = 0f;
				Global_97831[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_27 = 0f;
				Global_97831[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

int func_637(int iParam0, var uParam1, float fParam2)//Position - 0x841F0
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		case 9:
			return func_637(8, uParam1, fParam2);
			break;
		case 10:
			return func_637(8, uParam1, fParam2);
			break;
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.3408f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		default:
			break;
	}
	return 0;
}

void func_638()//Position - 0x84B5F
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 != 0)
			{
				__LIB_0__::func_383(3, iVar0, &uVar1, &iVar2);
				__LIB_1__::func_597(iVar2, __LIB_12__::func_411(3, iVar0, -1), -1, 1, 0);
			}
			iVar0++;
		}
		__LIB_6__::func_905(0, 1, -1, 1);
		Global_97723 = 1;
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar4 = 0;
			while (iVar4 < 8)
			{
				if (iVar4 != 0)
				{
					__LIB_0__::func_383(iVar3, iVar4, &iVar5, &uVar6);
					STATS::STAT_SET_INT(iVar5, __LIB_12__::func_411(iVar3, iVar4, -1), true);
				}
				iVar4++;
			}
			iVar3++;
		}
		Global_113386.f_2363.f_539.f_2387[0] = __LIB_12__::func_411(0, 0, -1);
		Global_113386.f_2363.f_539.f_2387[1] = __LIB_12__::func_411(1, 0, -1);
		Global_113386.f_2363.f_539.f_2387[2] = __LIB_12__::func_411(2, 0, -1);
		Global_113386.f_2363.f_539.f_2354 = 1;
		Global_97723 = 1;
	}
}

void func_640()//Position - 0x84EA0
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<11> Var3;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97754[iVar0] = 0;
		Global_97762[iVar0] = 0;
		Global_97766[iVar0] = 0;
		Global_97820[iVar0 /*3*/][0] = -1;
		Global_97820[iVar0 /*3*/][1] = -1;
		Global_113386.f_2363.f_539.f_3588[0 /*10*/][iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_113386.f_2363.f_539.f_3588[1 /*10*/][iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_113386.f_2363.f_539.f_2387[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2391[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_113386.f_2363.f_539.f_2407[iVar1 /*295*/][iVar0 /*98*/] = 0;
			Global_113386.f_2363.f_539.f_2407[iVar1 /*295*/][iVar0 /*98*/].f_1 = 0;
			StringCopy(&(Global_113386.f_2363.f_539.f_2407[iVar1 /*295*/][iVar0 /*98*/].f_27), "", 16);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 8)
		{
			Global_113386.f_2363.f_539.f_2247[iVar1 /*4*/][iVar0] = 0;
			iVar1++;
		}
		Global_113386.f_2363.f_539.f_290[iVar0] = 0f;
		Global_113386.f_2363.f_539.f_294[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2348[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2352 = 0;
		Global_113386.f_2363.f_539.f_2354 = 0;
		Global_113386.f_2363.f_539.f_4315 = 0;
		Global_113386.f_2363.f_539.f_4316 = 0;
		Global_113386.f_2363.f_539.f_4321 = 145;
		Global_113386.f_2363.f_539.f_4322 = 145;
		Global_113386.f_2363.f_539.f_4323 = 0;
		Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_113386.f_2363.f_539.f_2310[iVar0] = 0f;
		Global_113386.f_2363.f_539.f_2314[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_113386.f_2363.f_539.f_2328[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2332[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2383[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2355[iVar0] = 0f;
		Global_113386.f_2363.f_539.f_2359[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2363[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2367[iVar0] = 0f;
		Global_113386.f_2363.f_539.f_2371[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2375[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2379[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2336[iVar0] = -15;
		Global_113386.f_2363.f_539.f_2340[iVar0] = -1;
		Global_113386.f_2363.f_539.f_2344[iVar0] = -1;
		Global_113386.f_2363.f_539.f_2395[iVar0] = -99;
		Global_113386.f_2363.f_539.f_2399[iVar0] = 14;
		Global_113386.f_2363.f_539.f_2403[iVar0] = -99;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = 0;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = 0;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
		iVar1 = 0;
		while (iVar1 < 44)
		{
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/][iVar1 /*5*/].f_1 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/][iVar1 /*5*/].f_2 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/][iVar1 /*5*/].f_3 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/][iVar1 /*5*/].f_4 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/][iVar1 /*5*/] = 0;
			if (__LIB_0__::func_263(iVar1) == joaat("SLOT_UNARMED"))
			{
				Global_113386.f_2363.f_539.f_298[iVar0 /*477*/][iVar1 /*5*/] = joaat("WEAPON_UNARMED");
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 51)
		{
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/].f_221[iVar1 /*5*/].f_1 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/].f_221[iVar1 /*5*/].f_2 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/].f_221[iVar1 /*5*/].f_3 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/].f_221[iVar1 /*5*/].f_4 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/].f_221[iVar1 /*5*/] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_113386.f_2363.f_493[iVar0 /*15*/][iVar1] = 0;
			Global_113386.f_2363.f_493[iVar0 /*15*/].f_5[iVar1] = 0;
			Global_113386.f_2363.f_493[iVar0 /*15*/].f_10[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_2363.f_539.f_2241)
	{
		Global_113386.f_2363.f_539.f_2241[iVar0] = 0;
		iVar0++;
	}
	Global_113386.f_2363.f_539.f_196[0] = 77;
	Global_113386.f_2363.f_539.f_196[1] = 41;
	Global_113386.f_2363.f_539.f_196[2] = 54;
	Global_113386.f_2363.f_539.f_200[0] = 47;
	Global_113386.f_2363.f_539.f_200[1] = 14;
	Global_113386.f_2363.f_539.f_200[2] = 18;
	Global_113386.f_2363.f_539.f_2407[0 /*295*/][0 /*98*/] = 0;
	Global_113386.f_2363.f_539.f_2407[0 /*295*/][0 /*98*/].f_1 = 0;
	StringCopy(&(Global_113386.f_2363.f_539.f_2407[0 /*295*/][0 /*98*/].f_27), "", 16);
	Global_113386.f_2363.f_4863 = -1;
	Global_113386.f_2363.f_4864 = 145;
	func_1985(0);
	Global_97747 = 1;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (__LIB_6__::func_785(&Var3, iVar0, 0, 0, -1))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_493[0 /*15*/][Var3.f_9]), Var3.f_10);
			MISC::SET_BIT(&(Global_113386.f_2363.f_493[0 /*15*/].f_5[Var3.f_9]), Var3.f_10);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 39)
	{
		if (__LIB_6__::func_785(&Var3, iVar0, 1, 0, -1))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_493[1 /*15*/][Var3.f_9]), Var3.f_10);
			MISC::SET_BIT(&(Global_113386.f_2363.f_493[1 /*15*/].f_5[Var3.f_9]), Var3.f_10);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 33)
	{
		if (__LIB_6__::func_785(&Var3, iVar0, 2, 0, -1))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_493[2 /*15*/][Var3.f_9]), Var3.f_10);
			MISC::SET_BIT(&(Global_113386.f_2363.f_493[2 /*15*/].f_5[Var3.f_9]), Var3.f_10);
		}
		iVar0++;
	}
	MISC::SET_BIT(&(Global_113386.f_2363.f_493[2 /*15*/].f_10[(1 / 32)]), (1 % 32));
	Global_113386.f_2363.f_539.f_2348[0] = 1;
	Global_113386.f_2363.f_539.f_290[0] = 100f;
	iVar2 = __LIB_0__::func_42(0);
	__LIB_30__::func_697(0);
	__LIB_0__::func_358(0);
	__LIB_41__::func_398(iVar2, 12, 0, 0);
	Global_113386.f_2363.f_539.f_2348[2] = 1;
	Global_113386.f_2363.f_539.f_290[2] = 100f;
	iVar2 = __LIB_0__::func_42(2);
	__LIB_30__::func_697(2);
	__LIB_0__::func_358(2);
	__LIB_41__::func_398(iVar2, 12, 0, 0);
	Global_113386.f_2363.f_539.f_2348[1] = 1;
	Global_113386.f_2363.f_539.f_290[1] = 100f;
	iVar2 = __LIB_0__::func_42(1);
	__LIB_30__::func_697(1);
	__LIB_0__::func_358(1);
	__LIB_41__::func_398(iVar2, 12, 0, 0);
	Global_113386.f_2363.f_539.f_2352 = 1;
	Global_113386.f_2363.f_539.f_2353 = 0;
}

void func_642()//Position - 0x85F19
{
	Global_113386.f_7229.f_25 = 0;
	func_649();
	Global_113386.f_7229.f_26 = 0;
	__LIB_37__::func_430();
	Global_113386.f_7229.f_27 = 0;
	__LIB_35__::func_170();
	Global_113386.f_7229.f_28 = 0;
	Global_113386.f_7229.f_29 = 0;
	Global_113386.f_7229.f_30 = 0;
}

void func_649()//Position - 0x8644F
{
	int iVar0;
	int iVar1;
	if (!Global_113386.f_7229.f_25)
	{
		iVar0 = 0;
		while (iVar0 <= (10 - 1))
		{
			Global_113386.f_7229[iVar0] = 0;
			if (!Global_113386.f_9085 && !__LIB_0__::func_2(0))
			{
				MISC::SET_BIT(&(Global_113386.f_7229[iVar0]), 0);
			}
			MISC::SET_BIT(&(Global_113386.f_7229[iVar0]), 1);
			iVar0++;
		}
		Global_113386.f_7229.f_25 = 1;
	}
	iVar1 = 0;
	while (iVar1 <= (10 - 1))
	{
		func_650(iVar1, BitTest(Global_113386.f_7229[iVar1], 0));
		iVar1++;
	}
}

void func_650(int iParam0, bool bParam1)//Position - 0x864F0
{
	if (iParam0 == 10)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_113386.f_7229[iParam0]), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_7229[iParam0]), 0);
	}
	MISC::SET_SAVE_HOUSE(Global_95479[iParam0 /*10*/].f_8, bParam1, true);
	func_654(iParam0);
	__LIB_20__::func_320(iParam0, 0);
	__LIB_20__::func_182(iParam0);
	__LIB_40__::func_989(iParam0);
}

void func_654(int iParam0)//Position - 0x86889
{
	bool bVar0;
	if (iParam0 == 10)
	{
		return;
	}
	if (Global_95479[iParam0 /*10*/].f_7 == 263)
	{
		return;
	}
	bVar0 = false;
	if (BitTest(Global_113386.f_7229[iParam0], 0))
	{
		if (Global_95479[iParam0 /*10*/].f_9 != __LIB_26__::func_499())
		{
			bVar0 = true;
		}
		else if (!func_655(iParam0))
		{
			bVar0 = true;
		}
	}
	if (iParam0 == 5)
	{
		if (__LIB_0__::func_369(6))
		{
			bVar0 = false;
		}
	}
	if (__LIB_6__::func_854(14))
	{
		bVar0 = false;
	}
	__LIB_10__::func_604(Global_95479[iParam0 /*10*/].f_7, bVar0, 0);
}

int func_655(int iParam0)//Position - 0x86913
{
	int iVar0;
	char* sVar1;
	int iVar2;
	if (Global_100493.f_373 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_655(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_10__::func_605(iParam0, &sVar1);
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95479[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_100493.f_373 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_692()//Position - 0x879B3
{
	PLAYER::FORCE_CLEANUP(1);
	SYSTEM::WAIT(0);
	SYSTEM::WAIT(0);
	CAM::DESTROY_ALL_CAMS(false);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	Global_20209 = 0;
}

void func_693(bool bParam0)//Position - 0x879E8
{
	int iVar0;
	MISC::SET_GAME_PAUSED(false);
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) > 0)
	{
		REPLAY::SET_REPLAY_SYSTEM_PAUSED_FOR_SAVE(true);
		Global_112337 = 1;
		while (Global_112337)
		{
			SYSTEM::WAIT(0);
		}
		REPLAY::SET_REPLAY_SYSTEM_PAUSED_FOR_SAVE(false);
	}
	PLAYER::FORCE_CLEANUP(8);
	PLAYER::FORCE_CLEANUP(64);
	SYSTEM::WAIT(0);
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
	}
	if (bParam0)
	{
		while (Global_78581 != -1)
		{
			__LIB_30__::func_279();
			if (Global_78581 != -1)
			{
				PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_91229[Global_78581 /*34*/]), 2);
			}
			if (Global_43015 != 0)
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_43015, 2);
				Global_43015 = 0;
			}
			if (Global_43014 != -1)
			{
				__LIB_0__::func_56(&Global_43014);
			}
			Global_97371 = 0;
			Global_43018 = 0;
			Global_78581 = -1;
		}
		MISC::CLEAR_AREA(0f, 0f, 0f, 10000f, false, false, false, false);
		Global_97371 = 0;
		Global_43018 = 0;
		Global_78581 = -1;
		Global_43014 = -1;
		Global_43015 = 0;
		__LIB_30__::func_290();
	}
	else
	{
		while ((((Global_97371 || Global_43018) || Global_78581 != -1) || Global_43014 != -1) || Global_43015 != 0)
		{
			__LIB_30__::func_279();
			SYSTEM::WAIT(0);
			if (Global_78581 != -1)
			{
				PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_91229[Global_78581 /*34*/]), 2);
			}
			if (Global_43015 != 0)
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_43015, 2);
				Global_43015 = 0;
			}
			if (Global_43014 != -1)
			{
				__LIB_0__::func_56(&Global_43014);
			}
			Global_97371 = 0;
			Global_43018 = 0;
			Global_78581 = -1;
			SYSTEM::WAIT(0);
		}
	}
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		CUTSCENE::REMOVE_CUTSCENE();
	}
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	HUD::THEFEED_FLUSH_QUEUE();
	while (Global_78324 != -1)
	{
		if (!Global_78336)
		{
			Global_78336 = 1;
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = MISC::GET_GAME_TIMER() + 1000;
	while (CUTSCENE::IS_CUTSCENE_ACTIVE() && iVar0 > MISC::GET_GAME_TIMER())
	{
		SYSTEM::WAIT(0);
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		CUTSCENE::REMOVE_CUTSCENE();
	}
	if (iVar0 > MISC::GET_GAME_TIMER())
	{
	}
	Global_113386.f_9085 = 0;
	__LIB_36__::func_470();
	__LIB_6__::func_849(1);
	func_694();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	HUD::CLEAR_GPS_PLAYER_WAYPOINT();
	if (Global_113386.f_2363.f_539[0 /*65*/].f_13[9] == 5)
	{
		Global_113386.f_2363.f_539[0 /*65*/].f_13[9] = 0;
	}
	if (Global_113386.f_2363.f_539[1 /*65*/].f_13[8] == 1)
	{
		Global_113386.f_2363.f_539[1 /*65*/].f_13[8] = 0;
	}
	if (Global_113386.f_2363.f_539[2 /*65*/].f_13[8] == 3)
	{
		Global_113386.f_2363.f_539[2 /*65*/].f_13[8] = 0;
	}
	while (!__LIB_29__::func_830(__LIB_1__::func_558()))
	{
		STREAMING::REQUEST_MODEL(joaat("Player_Zero"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("Player_Zero")))
		{
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), joaat("Player_Zero"));
		}
		SYSTEM::WAIT(0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	}
}

void func_694()//Position - 0x87CBF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 58)
	{
		__LIB_34__::func_850(iVar0);
		iVar0++;
	}
}

void func_708()//Position - 0x880BD
{
	bool bVar0;
	bVar0 = true;
	func_709(bVar0);
}

void func_709(bool bParam0)//Position - 0x880CE
{
	bool bVar0;
	bool bVar1;
	if (MISC::GET_GAME_TIMER() < Global_2657491)
	{
		__LIB_9__::func_824();
	}
	if (!bParam0)
	{
		func_1359();
		func_1006();
		__LIB_29__::func_855();
		__LIB_34__::func_859();
	}
	if (!bParam0)
	{
		func_955();
		func_904();
		__LIB_34__::func_854();
		__LIB_37__::func_349();
	}
	func_793();
	__LIB_29__::func_841();
	__LIB_34__::func_851();
	Global_2654144 = 0;
	if (!__LIB_29__::func_840())
	{
		return;
	}
	__LIB_24__::func_696();
	bVar0 = false;
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpjoblistnew")) > 0)
	{
		if (!Global_2654144.f_1)
		{
			return;
		}
		bVar0 = true;
	}
	if (!bVar0 && !bParam0)
	{
		if (Global_2654144.f_2)
		{
			bVar0 = true;
		}
	}
	bVar1 = false;
	if (!bVar0 && !bParam0)
	{
		if (Global_22668 > 0)
		{
			bVar0 = true;
			bVar1 = true;
		}
	}
	if (!bVar0)
	{
		return;
	}
	Global_2654144 = func_712();
	Global_2654144.f_2 = 0;
	if (bVar1)
	{
		if (Global_1659409 == 0)
		{
			if (!bParam0)
			{
				if (Global_1888478.f_4 > 0)
				{
					return;
				}
			}
			__LIB_9__::func_785("[MMM][JobList] Calling Reset_New_Invites_Indicator from Maintain_MP_Joblist_Update");
			__LIB_26__::func_758();
		}
	}
}

int func_712()//Position - 0x88248
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	struct<902> Var6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bVar0 = true;
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || __LIB_0__::func_3() == 0)
	{
		bVar5 = true;
	}
	if (!bVar5)
	{
		return 0;
	}
	Var6 = 12;
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 < 12)
	{
		Var6[iVar7 /*75*/] = { Global_2653243[iVar7 /*75*/] };
		iVar7++;
	}
	Var6.f_901 = Global_1659409;
	__LIB_23__::func_976();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!__LIB_0__::func_640(PLAYER::PLAYER_ID()))
		{
			if (__LIB_23__::func_975(&Var6))
			{
				return 1;
			}
			return 0;
		}
	}
	if (__LIB_0__::func_114())
	{
		if (__LIB_23__::func_975(&Var6))
		{
			return 1;
		}
		return 0;
	}
	if (!bVar0)
	{
		iVar8 = __LIB_37__::func_343();
		if (__LIB_37__::func_342(iVar8))
		{
			if (__LIB_23__::func_975(&Var6))
			{
				return 1;
			}
			return 0;
		}
		if (!iVar8 == -1)
		{
			if (__LIB_23__::func_975(&Var6))
			{
				return 1;
			}
			return 0;
		}
		if (func_745())
		{
			if (__LIB_23__::func_975(&Var6))
			{
				return 1;
			}
			return 0;
		}
	}
	if (bVar0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!__LIB_9__::func_831() && !__LIB_0__::func_396(PLAYER::PLAYER_ID()) == 282)
			{
				if (__LIB_23__::func_975(&Var6))
				{
					return 1;
				}
				return 0;
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			bVar9 = true;
			if (func_724(&bVar9))
			{
				if (bVar9)
				{
					__LIB_28__::func_145(-1);
				}
				if (__LIB_23__::func_975(&Var6))
				{
					return 1;
				}
				return 0;
			}
		}
		if (__LIB_36__::func_741())
		{
			if (__LIB_23__::func_975(&Var6))
			{
				return 1;
			}
			return 0;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			bVar2 = __LIB_28__::func_145(-1);
			bVar3 = __LIB_23__::func_969(-1);
			bVar4 = __LIB_34__::func_104(-1);
			__LIB_34__::func_103();
		}
		else
		{
			bVar4 = __LIB_34__::func_104(-1);
		}
		if (((bVar2 || iVar1) || bVar3) || bVar4)
		{
			if (__LIB_23__::func_975(&Var6))
			{
				return 1;
			}
			return 0;
		}
	}
	if (__LIB_23__::func_975(&Var6))
	{
		return 1;
	}
	return 0;
}

int func_724(int iParam0)//Position - 0x88DCA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	*iParam0 = 1;
	if ((((((!__LIB_7__::func_268(PLAYER::PLAYER_ID(), 1, 0) && !__LIB_20__::func_968()) && !__LIB_0__::func_702(PLAYER::PLAYER_ID(), 1)) && !__LIB_0__::func_702(PLAYER::PLAYER_ID(), 21)) && !__LIB_0__::func_396(PLAYER::PLAYER_ID()) == 276) && !__LIB_0__::func_396(PLAYER::PLAYER_ID()) == 280) && !__LIB_0__::func_396(PLAYER::PLAYER_ID()) == 282)
	{
		return 0;
	}
	if (!__LIB_0__::func_154(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 1;
	}
	if (!__LIB_0__::func_640(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = Global_1853348[iVar0 /*834*/];
	iVar2 = PLAYER::PLAYER_ID();
	if (!__LIB_23__::func_973(iVar1))
	{
		return 1;
	}
	if (__LIB_0__::func_702(PLAYER::PLAYER_ID(), 21))
	{
		func_725(1, iVar2, iVar0, 134);
		*iParam0 = 0;
		return 1;
	}
	else
	{
		iVar3 = __LIB_0__::func_396(PLAYER::PLAYER_ID());
		switch (iVar3)
		{
			case 276:
			case 280:
			case 282:
				func_725(1, iVar2, iVar0, iVar3);
				*iParam0 = 0;
				return 1;
			}
		default:
	}
	func_725(1, iVar2, iVar0, iVar1);
	return 1;
}

int func_725(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x88EF6
{
	int iVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	iVar0 = Global_1853348[iParam2 /*834*/].f_36.f_2;
	uVar1 = Global_1853348[iParam2 /*834*/].f_11;
	if (((iParam3 == 134 || iParam3 == 276) || iParam3 == 280) || iParam3 == 282)
	{
		iVar0 = 40;
	}
	iParam1 = iParam1;
	bVar2 = false;
	bVar3 = iParam0 == 3;
	if (bVar3)
	{
		if (__LIB_23__::func_972(iParam2))
		{
			return 0;
		}
	}
	else if (__LIB_23__::func_971(iParam2, iParam3, iVar0, bVar2))
	{
		return 0;
	}
	if (Global_1659409 >= 12)
	{
		return 0;
	}
	if (bVar3)
	{
		Global_2653243[Global_1659409 /*75*/] = iParam0;
		Global_2653243[Global_1659409 /*75*/].f_1 = iParam2;
		Global_2653243[Global_1659409 /*75*/].f_2 = iParam3;
		Global_2653243[Global_1659409 /*75*/].f_3 = -1;
		Global_2653243[Global_1659409 /*75*/].f_4 = uVar1;
		Global_2653243[Global_1659409 /*75*/].f_25 = { Global_1880037[iParam2 /*16*/] };
		if (iParam3 == 56)
		{
			MISC::SET_BIT(&(Global_2653243[Global_1659409 /*75*/].f_5), 2);
		}
	}
	else
	{
		Global_2653243[Global_1659409 /*75*/] = iParam0;
		Global_2653243[Global_1659409 /*75*/].f_1 = iParam2;
		Global_2653243[Global_1659409 /*75*/].f_2 = iParam3;
		Global_2653243[Global_1659409 /*75*/].f_4 = iVar0;
		Global_2653243[Global_1659409 /*75*/].f_57 = Global_2657432.f_2;
		iVar4 = -1;
		if (iParam0 == 1)
		{
			if (__LIB_20__::func_968())
			{
				if (Global_1853348[iParam2 /*834*/] == 0)
				{
					iVar4 = Global_4718592.f_2;
				}
			}
			else if (__LIB_0__::func_292(PLAYER::PLAYER_ID(), 0))
			{
				switch (iParam3)
				{
					case 276:
						iVar4 = __LIB_1__::func_337(PLAYER::PLAYER_ID());
						break;
					}
				}
		}
		Global_2653243[Global_1659409 /*75*/].f_3 = iVar4;
		if (iVar0 == 40)
		{
			Global_2653243[Global_1659409 /*75*/].f_73 = 0;
			Global_2653243[Global_1659409 /*75*/].f_64 = 0;
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2653202.f_4.f_3)))
		{
			Global_2653243[Global_1659409 /*75*/].f_25 = { __LIB_19__::func_924(&(Global_2653202.f_4), 0) };
		}
		if (bVar2)
		{
			MISC::SET_BIT(&(Global_2653243[Global_1659409 /*75*/].f_5), 1);
		}
		if (BitTest(Global_1853348[iParam2 /*834*/].f_36.f_18, 7))
		{
			MISC::SET_BIT(&(Global_2653243[Global_1659409 /*75*/].f_5), 0);
		}
	}
	Global_1659409++;
	return 1;
}

int func_745()//Position - 0x897D5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar5 = 5;
	bVar6 = false;
	iVar3 = 0;
	while (iVar3 < 16)
	{
		iVar5 = __LIB_22__::func_962(iVar3);
		bVar6 = false;
		switch (iVar5)
		{
			case 0:
			case 1:
				bVar6 = true;
				break;
			case 2:
			case 3:
			case 4:
			case 5:
				bVar6 = false;
				break;
			default:
				bVar6 = false;
				break;
		}
		if (bVar6)
		{
			if (!__LIB_22__::func_959(iVar3, PLAYER::PLAYER_ID()))
			{
				if (__LIB_28__::func_146(iVar3, iVar4) || __LIB_9__::func_833(iVar3))
				{
					if (!func_749(iVar3, iVar4))
					{
						iVar0 = __LIB_9__::func_816(iVar3);
						iVar1 = __LIB_9__::func_817(iVar3);
						if (__LIB_23__::func_974(2, iVar1, iVar0))
						{
							iVar2 = 1;
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_749(int iParam0, int iParam1)//Position - 0x8993A
{
	int iVar0;
	bool bVar1;
	struct<10> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	iVar0 = __LIB_9__::func_816(iParam0);
	bVar1 = __LIB_12__::func_678(iVar0);
	Var2 = { __LIB_9__::func_816(iParam0) };
	iVar3 = __LIB_36__::func_156(&Var2);
	iVar4 = __LIB_38__::func_876(&Var2, iParam1);
	iVar5 = -1;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = 0;
	uVar10 = __LIB_12__::func_456(iParam0);
	uVar11 = __LIB_12__::func_455(iParam0);
	iVar8 = 0;
	while (iVar8 < 32)
	{
		iVar9 = PLAYER::INT_TO_PLAYERINDEX(iVar8);
		if (__LIB_0__::func_154(iVar9, 0, 1))
		{
			if (BitTest(uVar10, iVar8) || BitTest(uVar11, iVar8))
			{
				iVar6++;
				if (iVar6 >= iVar3)
				{
					return 1;
				}
				if (bVar1)
				{
					iVar5 = PLAYER::GET_PLAYER_TEAM(iVar9);
					if (iVar5 == iParam1)
					{
						iVar7++;
						if (iVar7 >= iVar4)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar8++;
	}
	return 0;
}

void func_793()//Position - 0x8AF66
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	__LIB_34__::func_853();
	__LIB_40__::func_618();
	if (Global_1659438 == 0)
	{
		return;
	}
	if (Global_1659439 >= Global_1659438)
	{
		Global_1659439 = 0;
	}
	iVar0 = Global_1659439;
	Global_1659439++;
	if (!Global_2655137[iVar0 /*99*/].f_4)
	{
		if (MISC::IS_PC_VERSION())
		{
			return;
		}
		if ((__LIB_2__::func_279() && __LIB_0__::func_706()) && !Global_22670)
		{
		}
		else
		{
			return;
		}
	}
	if (Global_2655137[iVar0 /*99*/].f_56)
	{
		if (Global_2655137[iVar0 /*99*/].f_52 == 0)
		{
			Global_2655137[iVar0 /*99*/].f_56 = 0;
		}
		else if (__LIB_15__::func_461(Global_2655137[iVar0 /*99*/].f_52, &(Global_2655137[iVar0 /*99*/].f_53)))
		{
			Global_2655137[iVar0 /*99*/].f_56 = 0;
		}
		else
		{
			return;
		}
	}
	if (Global_2655137[iVar0 /*99*/].f_47 != -1)
	{
		if (MISC::GET_GAME_TIMER() < Global_2655137[iVar0 /*99*/].f_48)
		{
			return;
		}
	}
	if (!__LIB_29__::func_848(iVar0))
	{
		if (!Global_2655137[iVar0 /*99*/].f_5 && Global_2655137[iVar0 /*99*/])
		{
			Global_2655137[iVar0 /*99*/].f_5 = 1;
			__LIB_34__::func_852();
		}
		__LIB_27__::func_811(iVar0);
		return;
	}
	iVar1 = 1;
	iVar2 = 0;
	bVar3 = false;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_2__::func_279())
		{
			iVar1 = 0;
			iVar2 = 1;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_25__::func_933())
		{
			iVar1 = 0;
			bVar3 = true;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__::func_81())
		{
			iVar1 = 0;
			bVar3 = true;
		}
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		iVar1 = 0;
		bVar3 = true;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__::func_73())
		{
			iVar1 = 0;
			bVar3 = true;
		}
	}
	if (Global_2655137[iVar0 /*99*/].f_1 != iVar1)
	{
		Global_2655137[iVar0 /*99*/].f_1 = iVar1;
	}
	if (!Global_2655137[iVar0 /*99*/].f_5)
	{
		if (__LIB_29__::func_847())
		{
			Global_2655137[iVar0 /*99*/].f_5 = 1;
		}
	}
	if (Global_2655137[iVar0 /*99*/])
	{
		func_865(iVar0);
		return;
	}
	if (__LIB_2__::func_37(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if ((__LIB_3__::func_778() || __LIB_1__::func_203()) || __LIB_1__::func_215())
	{
		return;
	}
	if (__LIB_37__::func_347())
	{
		return;
	}
	if (!Global_2655137[iVar0 /*99*/].f_1)
	{
		if (!MISC::IS_PC_VERSION())
		{
			if (!Global_22670)
			{
				if (iVar2 && !bVar3)
				{
					if (!__LIB_23__::func_450() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (__LIB_0__::func_706())
						{
							Global_22670 = 1;
							Global_2656954 = 1;
						}
					}
				}
			}
		}
		return;
	}
	Global_2655137[iVar0 /*99*/] = 1;
	func_794(iVar0, 0);
}

void func_794(int iParam0, bool bParam1)//Position - 0x8B1D7
{
	bool bVar0;
	bool bVar1;
	char cVar2[64];
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	char cVar8[16];
	bool bVar9;
	bool bVar10;
	char cVar11[64];
	struct<8> Var12;
	char* sVar13;
	struct<16> Var14[8];
	bool bVar15;
	int iVar16;
	int iVar17;
	char cVar18[64];
	var uVar19;
	char cVar20[64];
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	bVar0 = Global_2655137[iParam0 /*99*/].f_96;
	Global_2655137[iParam0 /*99*/].f_96 = 0;
	Global_2655137[iParam0 /*99*/].f_97 = 0;
	bVar1 = false;
	if ((__LIB_0__::func_3() == 0 || __LIB_0__::func_3() == -1) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		bVar1 = true;
	}
	if (!bVar1)
	{
		return;
	}
	if (__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
	{
		Global_2655137[iParam0 /*99*/].f_92 = -1;
		__LIB_34__::func_106();
		return;
	}
	if (Global_2655137[iParam0 /*99*/].f_92 == -99)
	{
		Global_2655137[iParam0 /*99*/].f_92 = -1;
		if (!bParam1)
		{
			__LIB_34__::func_106();
		}
		return;
	}
	if (__LIB_9__::func_281(PLAYER::PLAYER_ID()) || __LIB_9__::func_294(PLAYER::PLAYER_ID()))
	{
		if (!Global_2655137[iParam0 /*99*/].f_98)
		{
			if (!bParam1)
			{
				__LIB_29__::func_845();
				__LIB_34__::func_106();
			}
			return;
		}
	}
	StringCopy(&cVar2, "CHAR_DEFAULT", 64);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	iVar7 = -1;
	if (Global_2655137[iParam0 /*99*/].f_90 > 0)
	{
		bVar3 = true;
	}
	StringCopy(&cVar8, "JL_INVITE" /* GXT: ~a~ */, 16);
	bVar9 = false;
	bVar10 = false;
	StringCopy(&cVar11, func_839(Global_2655137[iParam0 /*99*/].f_50, Global_2655137[iParam0 /*99*/].f_51, -1, Global_2655137[iParam0 /*99*/].f_12), 64);
	StringCopy(&Var12, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cVar11), 64);
	sVar13 = "";
	bVar15 = false;
	if (Global_2655137[iParam0 /*99*/].f_52 != 0)
	{
		sVar13 = __LIB_12__::func_451(Global_2655137[iParam0 /*99*/].f_52, 500);
		__LIB_37__::func_346(Global_2655137[iParam0 /*99*/].f_52, &Var14);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar13))
		{
			bVar15 = true;
		}
	}
	else if (Global_2655137[iParam0 /*99*/].f_50 == 0 && Global_2655137[iParam0 /*99*/].f_51 == 7)
	{
		__LIB_37__::func_345(Global_2655137[iParam0 /*99*/].f_6, &Var14);
		bVar15 = true;
	}
	iVar16 = 0;
	iVar17 = 0;
	if (bVar3)
	{
		if (Global_2655137[iParam0 /*99*/].f_89 >= 100000)
		{
			iVar16 = (Global_2655137[iParam0 /*99*/].f_89 + 1 - 100000);
			bVar6 = true;
		}
		else if (Global_2655137[iParam0 /*99*/].f_89 >= 10000)
		{
			bVar5 = true;
			iVar7 = (Global_2655137[iParam0 /*99*/].f_89 - 10000);
		}
		else
		{
			iVar16 = Global_2655137[iParam0 /*99*/].f_89 + 1;
		}
		iVar17 = Global_2655137[iParam0 /*99*/].f_90;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2655137[iParam0 /*99*/].f_57)))
	{
		StringCopy(&cVar8, "JL_INVITE_N" /* GXT: ~a~ */, 16);
		bVar9 = true;
		if (bVar15)
		{
			StringCopy(&cVar8, "JL_INV_ND" /* GXT: ~a~~n~~a~~a~~a~~a~~a~~a~~a~~a~ */, 16);
			bVar10 = true;
			if (bVar3)
			{
				if (bVar4)
				{
					StringCopy(&cVar8, "JL_INVITE_CHND" /* GXT: Challenge: ~a~ (Job ~1~ of ~1~)~n~~a~~a~~a~~a~~a~~a~~a~~a~ */, 16);
				}
				else if (bVar5)
				{
					StringCopy(&cVar8, "JL_INVITE_H2HND" /* GXT: Head To Head: ~a~ (Jobs: ~1~), Wager $~1~~n~~a~~n~~a~~a~~a~~a~~a~~a~~a~ */, 16);
				}
				else if (bVar6)
				{
					StringCopy(&cVar8, "JL_INV_TQD" /* GXT: Qualifying Tournament: ~a~ (Job ~1~ of ~1~)~n~~a~ (~1~m)~n~~a~~a~~a~~a~~a~~a~~a~~a~ */, 16);
				}
				else
				{
					StringCopy(&cVar8, "JL_INV_PND" /* GXT: (Playlist Job ~1~ of ~1~)~n~~a~~n~~a~~a~~a~~a~~a~~a~~a~~a~ */, 16);
				}
			}
		}
		else if (bVar3)
		{
			if (bVar4)
			{
				StringCopy(&cVar8, "JL_INVITE_CHN" /* GXT: Challenge: ~a~ (Job ~1~ of ~1~) */, 16);
			}
			else if (bVar5)
			{
				StringCopy(&cVar8, "JL_INVITE_H2HN" /* GXT: Head To Head: ~a~ (Jobs: ~1~), Wager $~1~ */, 16);
			}
			else if (bVar6)
			{
				StringCopy(&cVar8, "JL_INV_TQN" /* GXT: Qualifying Tournament: ~a~ (Job ~1~ of ~1~)~n~~a~ (~1~m) */, 16);
			}
			else
			{
				StringCopy(&cVar8, "JL_INVITE_PN" /* GXT: (Playlist Job ~1~ of ~1~)~n~~a~ */, 16);
			}
		}
	}
	else if (bVar3)
	{
		if (bVar4)
		{
			StringCopy(&cVar8, "JL_INVITE_CH" /* GXT: Challenge: (Job ~1~ of ~1~) */, 16);
		}
		else if (bVar5)
		{
			StringCopy(&cVar8, "JL_INVITE_H2H" /* GXT: Head To Head: (Jobs: ~1~), Wager $~1~ */, 16);
		}
		else if (bVar6)
		{
			StringCopy(&cVar8, "JL_INV_TQ" /* GXT: Qualifying Tournament: ~a~ (Job ~1~ of ~1~) */, 16);
		}
		else
		{
			StringCopy(&cVar8, "JL_INVITE_P" /* GXT: (Playlist Job ~1~ of ~1~) */, 16);
		}
	}
	StringCopy(&cVar18, "<C>", 64);
	cVar20 = { __LIB_23__::func_968(iParam0) };
	StringConCat(&cVar18, &cVar20, 64);
	StringConCat(&cVar18, "</C>", 64);
	iVar21 = 7;
	iVar22 = 0;
	iVar23 = MISC::GET_HASH_KEY(&(Global_2655137[iParam0 /*99*/].f_6));
	__LIB_37__::func_344(&iVar21, &iVar22, iVar23, Global_2655137[iParam0 /*99*/].f_50, Global_2655137[iParam0 /*99*/].f_51, Global_2655137[iParam0 /*99*/].f_95, Global_2655137[iParam0 /*99*/].f_12, Global_2655137[iParam0 /*99*/].f_13);
	__LIB_23__::func_981();
	__LIB_39__::func_399(Global_2655137[iParam0 /*99*/].f_50, Global_2655137[iParam0 /*99*/].f_51, Global_2655137[iParam0 /*99*/].f_12, Global_2655137[iParam0 /*99*/].f_13);
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&cVar8);
	if (bVar3)
	{
		if (bVar5)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar17);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar7);
		}
		else
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar16);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar17);
		}
	}
	if (bVar9)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_2655137[iParam0 /*99*/].f_57));
		if (bVar10)
		{
			iVar24 = 0;
			iVar24 = 0;
			while (iVar24 < 8)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Var14[iVar24 /*16*/]));
				iVar24++;
			}
		}
	}
	if (!bVar3 && !bVar9)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY("");
	}
	if (!bVar3)
	{
		__LIB_29__::func_843(Global_2655137[iParam0 /*99*/].f_93, Global_2655137[iParam0 /*99*/].f_49, &Var12);
	}
	Global_2655137[iParam0 /*99*/].f_92 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_WITH_CREW_TAG_AND_ADDITIONAL_ICON(&cVar2, &cVar2, true, iVar21, &cVar18, &Var12, 1f, &uVar19, iVar22, 1);
	__LIB_29__::func_842();
	__LIB_23__::func_979(Global_2655137[iParam0 /*99*/].f_92);
	__LIB_23__::func_978();
	if (!bParam1)
	{
		__LIB_29__::func_845();
		__LIB_34__::func_106();
	}
	if (bVar0)
	{
		Global_2655137[iParam0 /*99*/].f_97 = (MISC::GET_GAME_TIMER() + 50000);
	}
	if (bParam1)
	{
		__LIB_23__::func_977();
	}
}

char* func_839(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8C8DF
{
	char* sVar0;
	char cVar1[64];
	if (__LIB_4__::func_604(iParam3))
	{
		return "AREN_SERIES" /* GXT: Arena War Series */;
	}
	switch (iParam0)
	{
		case 3:
			return "CELL_2613" /* GXT: SURVIVAL */;
		case 5:
			return "CELL_2615" /* GXT: ONE ON ONE DEATHMATCH */;
		case 6:
			return "CELL_2616" /* GXT: GANG ATTACK */;
		case 8:
			return "CELL_2618" /* GXT: PARACHUTING */;
		case 11:
			return "CELL_2620" /* GXT: GOLF */;
		case 122:
			return "CELL_PILOTS" /* GXT: FLIGHT SCHOOL */;
		case 12:
			return "CELL_2621" /* GXT: TENNIS */;
		case 13:
			return "CELL_2622" /* GXT: SHOOTING RANGE */;
		case 14:
			return "CELL_2623" /* GXT: DARTS */;
		case 15:
			return "CELL_2624" /* GXT: ARM WRESTLING */;
		case 56:
			return "CELL_2625" /* GXT: PLAYLIST LOBBY */;
		case 30:
			return "CELL_2627" /* GXT: HOLD UP */;
		case 32:
			return "CELL_2628" /* GXT: IMPROMPTU RACE */;
		case 117:
			if (iParam2 == 1)
			{
				return "BLIP_455" /* GXT: Yacht */;
			}
			else if (iParam2 == 2)
			{
				return "PM_SPAWN_OFFICE" /* GXT: Office */;
			}
			else if (iParam2 == 3)
			{
				return "PI_BIK_4_1_O1" /* GXT: Clubhouse */;
			}
			else if (iParam2 == 4)
			{
				return "PROP_OFFG" /* GXT: Office Garage */;
			}
			else if (iParam2 == 5)
			{
				return "PROP_OFFG_SHOP" /* GXT: Custom Auto Shop */;
			}
			return "CELL_2630" /* GXT: Apartment */;
			break;
		case 212:
			switch (iParam2)
			{
				case 2:
					return "BRS_BUSNS" /* GXT: Business */;
					break;
				case 1:
					return "CELL_IEWHS" /* GXT: Vehicle Warehouse */;
					break;
				case 4:
					return "CELL_BUNKER" /* GXT: Bunker */;
					break;
				case 5:
					return "CELL_ARMORYTRU" /* GXT: Mobile Operations Center */;
					break;
				case 7:
					return "CELL_HANGAR" /* GXT: Hangar */;
					break;
				case 8:
					return "CELL_ARMAIR" /* GXT: Avenger */;
					break;
				case 9:
					return "CELL_DBASE" /* GXT: Facility */;
					break;
				case 11:
					return "CELL_CLUB" /* GXT: Nightclub */;
					break;
				case 12:
					return "CELL_HTRUCK" /* GXT: Terrorbyte */;
					break;
				case 13:
					return "CELL_AGARAGE" /* GXT: Arena Workshop */;
					break;
				case 15:
					return "CELL_CASAPT" /* GXT: Penthouse */;
					break;
				case 17:
					return "CELL_ARCADE" /* GXT: Arcade */;
					break;
				case 20:
					return "CELL_SUBMARINE" /* GXT: Kosatka */;
					break;
				case 22:
					return "CELL_AUTO_SHP" /* GXT: Auto Shop */;
					break;
				case 23:
					return "CELL_CM" /* GXT: LS Car Meet */;
					break;
				case 24:
					return "CELL_FIX_HQ" /* GXT: Agency */;
					break;
				case 21:
					if (iParam1 == 1)
					{
						return "CELL_REC_A_SM" /* GXT: Studio Smoking Room */;
					}
					else
					{
						return "CELL_REC_A" /* GXT: Record A Studios */;
					}
					break;
			}
			break;
		case 257:
			return "CELL_B_PARTY" /* GXT: Cayo Perico Beach Party */;
			break;
		case 68:
			return "CELL_2630Q" /* GXT: Friend's Quick Join */;
		case 116:
			return "CELL_2629" /* GXT: KILL TARGET */;
		case 134:
			return "CELL_2631" /* GXT: TIME TRIAL */;
		case 148:
			if (__LIB_13__::func_779())
			{
				return "CELL_BIKEDM" /* GXT: Biker Deathmatch */;
			}
			else
			{
				return "CELL_BOSSVBOSS" /* GXT: Executive Deathmatch */;
			}
			break;
		case 123:
		case 234:
		case 145:
		case 0:
		case 1:
		case 2:
		case 149:
		case 261:
		case 272:
			break;
		case 276:
			switch (iParam1)
			{
				case 0:
					return "TSA_QUIT_TT" /* GXT: Quit Time Trial? */;
				case 1:
					return "TSA_QUIT_CD" /* GXT: Quit Scramble? */;
				case 2:
					return "TSA_QUIT_HH" /* GXT: Quit Head-to-Head Race? */;
				case 3:
					return "TSA_QUIT_SR" /* GXT: Quit Sprint? */;
				default:
			}
			break;
		default:
			return "CELL_250" /* GXT: ERROR! */;
	}
	StringCopy(&cVar1, "", 64);
	switch (iParam0)
	{
		case 261:
			return "IH_END_NAME" /* GXT: The Cayo Perico Heist */;
		case 149:
			return "FMMC_VCASINO" /* GXT: Casino Story */;
		case 234:
			return "FMMC_RSTAR_MHS2" /* GXT: The Doomsday Heist */;
		case 123:
			if (iParam1 == 7)
			{
				return "FMMC_RSTAR_HP" /* GXT: Setup */;
			}
			return "FMMC_RSTAR_MHST" /* GXT: Heist */;
		case 145:
			return "FMMC_RSTAR_MSL" /* GXT: Lamar */;
		case 0:
			if (iParam1 >= 0)
			{
				MemCopy(&cVar1, {__LIB_9__::func_804(iParam1, 1, 0, 0)}, 16);
				sVar0 = __LIB_0__::func_688(&cVar1);
				return sVar0;
			}
			return "CELL_2610" /* GXT: MISSION */;
		case 1:
			if (iParam1 >= 0)
			{
				MemCopy(&cVar1, {__LIB_9__::func_803(iParam1, 1, 0)}, 16);
				sVar0 = __LIB_0__::func_688(&cVar1);
				return sVar0;
			}
			return "CELL_2611" /* GXT: DEATHMATCH */;
		case 2:
			if (iParam1 >= 0)
			{
				MemCopy(&cVar1, {__LIB_9__::func_802(iParam1, 1, 0)}, 16);
				sVar0 = __LIB_0__::func_688(&cVar1);
				return sVar0;
			}
			return "CELL_2612" /* GXT: RACE */;
		case 272:
			sVar0 = __LIB_23__::func_983(iParam1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				return sVar0;
			}
			break;
	}
	return "CELL_250" /* GXT: ERROR! */;
}

void func_865(int iParam0)//Position - 0x8D579
{
	bool bVar0;
	if (Global_2655137[iParam0 /*99*/].f_97 == 0)
	{
		return;
	}
	if (MISC::GET_GAME_TIMER() < Global_2655137[iParam0 /*99*/].f_97)
	{
		return;
	}
	Global_2655137[iParam0 /*99*/].f_97 = 0;
	if (__LIB_2__::func_37(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (__LIB_3__::func_778() || __LIB_1__::func_203())
	{
		return;
	}
	if (__LIB_37__::func_347())
	{
		return;
	}
	if (SCRIPT::DOES_SCRIPT_EXIST("appMPJobListNEW") && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpjoblistnew")) > 0)
	{
		return;
	}
	if (!Global_2655137[iParam0 /*99*/].f_1)
	{
		return;
	}
	Global_2655137[iParam0 /*99*/].f_94 = Global_2657490;
	Global_2657490++;
	bVar0 = true;
	func_794(iParam0, bVar0);
}

void func_904()//Position - 0x8E29E
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	if (Global_1659440 == 0)
	{
		return;
	}
	if (Global_1659441 >= Global_1659440)
	{
		Global_1659441 = 0;
	}
	iVar0 = Global_1659441;
	bVar1 = true;
	iVar2 = __LIB_0__::func_3();
	bVar3 = iVar2 == false;
	bVar4 = Global_2656326[iVar0 /*46*/].f_7;
	Global_1659441++;
	if (Global_2656326[iVar0 /*46*/].f_42)
	{
		return;
	}
	if (bVar4)
	{
		if (!__LIB_0__::func_154(Global_2656326[iVar0 /*46*/].f_5, 0, 1))
		{
			bVar1 = false;
		}
	}
	if (bVar4)
	{
		if (bVar1)
		{
			if (bVar3)
			{
				if (__LIB_7__::func_268(Global_2656326[iVar0 /*46*/].f_5, 0, 0) && Global_2656326[iVar0 /*46*/].f_8 != 32)
				{
					bVar1 = false;
				}
			}
			else
			{
				bVar1 = false;
			}
		}
	}
	if (!bVar4)
	{
		if (bVar1)
		{
			if (__LIB_20__::func_968() && Global_2656326[iVar0 /*46*/].f_8 != 32)
			{
				bVar1 = false;
			}
		}
	}
	if (bVar4)
	{
		if (bVar1)
		{
			if (Global_2656326[iVar0 /*46*/].f_43)
			{
				bVar1 = false;
			}
		}
	}
	if (bVar1)
	{
		if (Global_2656326[iVar0 /*46*/].f_37)
		{
			if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), Global_2656326[iVar0 /*46*/].f_38))
			{
				bVar1 = false;
			}
		}
	}
	if (!bVar1)
	{
		if (!Global_2656326[iVar0 /*46*/].f_4 && Global_2656326[iVar0 /*46*/])
		{
			Global_2656326[iVar0 /*46*/].f_4 = 1;
			__LIB_34__::func_852();
		}
		__LIB_20__::func_987(iVar0);
		return;
	}
	iVar5 = 1;
	if (__LIB_2__::func_279() && Global_2656326[iVar0 /*46*/].f_8 != 32)
	{
		iVar5 = 0;
	}
	if (__LIB_25__::func_933())
	{
		if (bVar4)
		{
			if (Global_2656326[iVar0 /*46*/].f_8 != 32)
			{
				iVar5 = 0;
			}
		}
		else if (((Global_2656326[iVar0 /*46*/].f_8 == 123 || Global_2656326[iVar0 /*46*/].f_8 == 234) || Global_2656326[iVar0 /*46*/].f_8 == 149) || Global_2656326[iVar0 /*46*/].f_8 == 261)
		{
			iVar5 = 0;
		}
	}
	if (((Global_2656326[iVar0 /*46*/].f_8 == 123 || Global_2656326[iVar0 /*46*/].f_8 == 234) || Global_2656326[iVar0 /*46*/].f_8 == 149) || Global_2656326[iVar0 /*46*/].f_8 == 261)
	{
		if (__LIB_7__::func_268(PLAYER::PLAYER_ID(), 1, 0))
		{
			iVar5 = 0;
		}
	}
	if (Global_2656326[iVar0 /*46*/].f_8 == 117 || Global_2656326[iVar0 /*46*/].f_8 == 212)
	{
		if (func_923(0, 0))
		{
			iVar5 = 0;
		}
	}
	if (Global_2656326[iVar0 /*46*/].f_37)
	{
		iVar5 = 0;
	}
	if (__LIB_0__::func_81())
	{
		iVar5 = 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		iVar5 = 0;
	}
	if (Global_2656326[iVar0 /*46*/].f_3 != iVar5)
	{
		Global_2656326[iVar0 /*46*/].f_3 = iVar5;
	}
	if (!Global_2656326[iVar0 /*46*/].f_4)
	{
		if (__LIB_29__::func_847())
		{
			Global_2656326[iVar0 /*46*/].f_4 = 1;
		}
	}
	if (Global_2656326[iVar0 /*46*/])
	{
		return;
	}
	if (!Global_2656326[iVar0 /*46*/].f_3)
	{
		return;
	}
	if (__LIB_37__::func_347())
	{
		return;
	}
	Global_2656326[iVar0 /*46*/] = 1;
	func_905(iVar0);
}

void func_905(int iParam0)//Position - 0x8E5A6
{
	bool bVar0;
	struct<13> Var1;
	bool bVar2;
	int iVar3;
	char cVar4[64];
	char cVar5[16];
	bool bVar6;
	char cVar7[64];
	char cVar8[64];
	char cVar9[64];
	char[] cVar10[8];
	struct<13> Var11;
	struct<4> Var12;
	int iVar13;
	if (__LIB_0__::func_3() != 0)
	{
		return;
	}
	if (__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
	{
		Global_2656326[iParam0 /*46*/].f_26 = -1;
		__LIB_34__::func_106();
		return;
	}
	bVar0 = true;
	if (__LIB_9__::func_281(PLAYER::PLAYER_ID()) || __LIB_9__::func_294(PLAYER::PLAYER_ID()))
	{
		if (Global_2656326[iParam0 /*46*/].f_7)
		{
			Var1 = { __LIB_0__::func_604(Global_2656326[iParam0 /*46*/].f_5) };
			if (!NETWORK::NETWORK_IS_FRIEND(&Var1))
			{
				bVar0 = false;
			}
		}
		else
		{
			bVar0 = false;
		}
	}
	if (!bVar0)
	{
		__LIB_29__::func_845();
		__LIB_34__::func_106();
		return;
	}
	bVar2 = Global_2656326[iParam0 /*46*/].f_7;
	iVar3 = 0;
	if (bVar2)
	{
		iVar3 = __LIB_31__::func_929(Global_2656326[iParam0 /*46*/].f_5);
	}
	if (bVar2)
	{
		if (iVar3 == 0)
		{
			StringCopy(&cVar4, "CHAR_DEFAULT", 64);
		}
		else
		{
			StringCopy(&cVar4, PED::GET_PEDHEADSHOT_TXD_STRING(iVar3), 64);
		}
	}
	else
	{
		StringCopy(&cVar4, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(__LIB_34__::func_855(Global_2656326[iParam0 /*46*/].f_6)), 64);
	}
	StringCopy(&cVar5, "JL_RVINVITE" /* GXT: ~a~ */, 16);
	bVar6 = false;
	StringCopy(&cVar7, func_839(Global_2656326[iParam0 /*46*/].f_8, Global_2656326[iParam0 /*46*/].f_9, Global_2656326[iParam0 /*46*/].f_44, Global_2656326[iParam0 /*46*/].f_45), 64);
	StringCopy(&cVar8, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cVar7), 64);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2656326[iParam0 /*46*/].f_10)))
	{
		StringCopy(&cVar5, "JL_RVINVITE_N" /* GXT: ~a~ */, 16);
		bVar6 = true;
	}
	if (bVar2)
	{
		StringCopy(&cVar9, "<C>", 64);
		StringConCat(&cVar9, PLAYER::GET_PLAYER_NAME(Global_2656326[iParam0 /*46*/].f_5), 64);
		StringConCat(&cVar9, "</C>", 64);
		Var11 = { __LIB_0__::func_604(Global_2656326[iParam0 /*46*/].f_5) };
		if (__LIB_2__::func_180(&Var11) == __LIB_3__::func_808())
		{
			__LIB_18__::func_471(Global_2656326[iParam0 /*46*/].f_5, &cVar10);
		}
	}
	else
	{
		Var12 = { __LIB_19__::func_921(Global_2656326[iParam0 /*46*/].f_6) };
		StringConCat(&cVar9, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Var12), 64);
	}
	iVar13 = 7;
	__LIB_23__::func_981();
	__LIB_39__::func_399(Global_2656326[iParam0 /*46*/].f_8, Global_2656326[iParam0 /*46*/].f_9, Global_2656326[iParam0 /*46*/].f_45, 0);
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&cVar5);
	if (bVar6)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_2656326[iParam0 /*46*/].f_10));
	}
	else
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY("");
	}
	Global_2656326[iParam0 /*46*/].f_26 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_WITH_CREW_TAG(&cVar4, &cVar4, true, iVar13, &cVar9, &cVar8, 1f, &cVar10);
	__LIB_29__::func_842();
	__LIB_23__::func_979(Global_2656326[iParam0 /*46*/].f_26);
	__LIB_23__::func_978();
	__LIB_29__::func_845();
	__LIB_34__::func_106();
}

int func_923(bool bParam0, int iParam1)//Position - 0x8EBB3
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	bVar0 = false;
	bVar1 = false;
	if (iParam1 == 1)
	{
		bVar1 = true;
	}
	else if (iParam1 == 2)
	{
		bVar0 = true;
	}
	if (Global_1835493 != 0)
	{
		if (!bVar0 && iParam1 != 4)
		{
			if (bParam0)
			{
			}
			return 1;
		}
		else if (bVar0)
		{
			iVar2 = Global_1835493;
			MISC::CLEAR_BIT(&iVar2, 4);
			if (iVar2 > 0)
			{
				if (bParam0)
				{
				}
				return 1;
			}
		}
		else if (iParam1 == 4)
		{
			iVar3 = Global_1835493;
			MISC::CLEAR_BIT(&iVar3, 6);
			if (iVar3 > 0)
			{
				if (bParam0)
				{
				}
				return 1;
			}
		}
		else if (iParam1 == 6)
		{
			uVar4 = Global_1835493;
			MISC::CLEAR_BIT(&uVar4, 7);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 8)
		{
			uVar5 = Global_1835493;
			MISC::CLEAR_BIT(&uVar5, 8);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 9)
		{
			uVar6 = Global_1835493;
			MISC::CLEAR_BIT(&uVar6, 9);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 10)
		{
			uVar7 = Global_1835493;
			MISC::CLEAR_BIT(&uVar7, 10);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 11)
		{
			uVar8 = Global_1835493;
			MISC::CLEAR_BIT(&uVar8, 11);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 12)
		{
			uVar9 = Global_1835493;
			MISC::CLEAR_BIT(&uVar9, 12);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 13)
		{
			uVar10 = Global_1835493;
			MISC::CLEAR_BIT(&uVar10, 14);
			if (bParam0)
			{
			}
			return 1;
		}
	}
	if (((((((((((__LIB_9__::func_281(PLAYER::PLAYER_ID()) && !func_951()) && !(iParam1 == 4 && __LIB_34__::func_856(PLAYER::PLAYER_ID()))) && !(iParam1 == 3 && func_946())) && !(iParam1 == 6 && func_944())) && !(iParam1 == 7 && func_944())) && !(iParam1 == 8 && func_942())) && !(iParam1 == 9 && func_940())) && !(iParam1 == 10 && __LIB_7__::func_301())) && !(iParam1 == 11 && func_937())) && !(iParam1 == 12 && __LIB_7__::func_301())) && !(iParam1 == 13 && func_931()))
	{
		return 1;
	}
	if (__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (__LIB_0__::func_702(PLAYER::PLAYER_ID(), 21))
	{
		return 1;
	}
	if (__LIB_0__::func_702(PLAYER::PLAYER_ID(), 25))
	{
		return 1;
	}
	if (__LIB_6__::func_926() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (bParam0)
		{
		}
		return 1;
	}
	if (__LIB_1__::func_288())
	{
		return 1;
	}
	if (bVar1)
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 9 || Global_4718592.f_2 == 2)
		{
			if (bParam0)
			{
			}
			return 1;
		}
		if (Global_262145.f_15867 /* Tunable: EXEC_DISABLE_OFFICE_ENTRY */)
		{
			if (bParam0)
			{
			}
			return 1;
		}
		if (__LIB_0__::func_693(PLAYER::PLAYER_ID()) || __LIB_0__::func_694(PLAYER::PLAYER_ID()))
		{
			if (bParam0)
			{
			}
			return 1;
		}
	}
	return 0;
}

int func_931()//Position - 0x8EF97
{
	return func_932(PLAYER::PLAYER_ID());
}

int func_932(int iParam0)//Position - 0x8EFA7
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_0__::func_292(iParam0, 0))
		{
			if ((__LIB_0__::func_396(iParam0) == 237 && !func_933(iParam0)) || __LIB_0__::func_396(iParam0) == 238)
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_933(int iParam0)//Position - 0x8EFF2
{
	int iVar0;
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	iVar0 = __LIB_19__::func_800(iParam0);
	if (((((iVar0 == 0 || iVar0 == 1) || iVar0 == 2) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5)
	{
		return 1;
	}
	return 0;
}

int func_937()//Position - 0x8F0A0
{
	return func_932(PLAYER::PLAYER_ID());
}

int func_940()//Position - 0x8F0D6
{
	return func_941(PLAYER::PLAYER_ID());
}

int func_941(int iParam0)//Position - 0x8F0E6
{
	if (__LIB_0__::func_292(iParam0, 0))
	{
		if (__LIB_0__::func_396(iParam0) == 233)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_942()//Position - 0x8F10C
{
	return func_943(PLAYER::PLAYER_ID());
}

int func_943(int iParam0)//Position - 0x8F11C
{
	if (__LIB_0__::func_292(iParam0, 0))
	{
		if (__LIB_0__::func_396(iParam0) == 229)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_944()//Position - 0x8F142
{
	return func_945(PLAYER::PLAYER_ID());
}

int func_945(int iParam0)//Position - 0x8F152
{
	if (__LIB_0__::func_396(iParam0) == 225)
	{
		return 1;
	}
	return 0;
}

int func_946()//Position - 0x8F16A
{
	return func_947(PLAYER::PLAYER_ID());
}

int func_947(int iParam0)//Position - 0x8F17A
{
	int iVar0;
	if (__LIB_0__::func_292(iParam0, 0))
	{
		iVar0 = __LIB_0__::func_396(iParam0);
		if ((__LIB_2__::func_491(iVar0) || iVar0 == 293) || iVar0 == 292)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

bool func_951()//Position - 0x8F24C
{
	return __LIB_29__::func_850(PLAYER::PLAYER_ID());
}

void func_955()//Position - 0x8F460
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	__LIB_39__::func_401();
	if (Global_1659410 == 0)
	{
		return;
	}
	if (Global_1659412 >= Global_1659410)
	{
		Global_1659412 = 0;
	}
	iVar0 = Global_1659412;
	bVar1 = true;
	iVar2 = __LIB_0__::func_3();
	bVar3 = iVar2 == false;
	bVar4 = Global_2654152[iVar0 /*82*/].f_11;
	iVar5 = 0;
	iVar6 = -1;
	Global_1659412++;
	if (!Global_2654152[iVar0 /*82*/].f_67)
	{
		if (MISC::IS_PC_VERSION())
		{
			return;
		}
		if (((bVar4 && __LIB_2__::func_279()) && __LIB_0__::func_706()) && !Global_22670)
		{
		}
		else
		{
			return;
		}
	}
	if (Global_2654152[iVar0 /*82*/].f_79)
	{
		return;
	}
	if (bVar4)
	{
		if (!__LIB_0__::func_154(Global_2654152[iVar0 /*82*/].f_9, 1, 1))
		{
			bVar1 = false;
		}
	}
	if (bVar4)
	{
		if (bVar1)
		{
			if (bVar3)
			{
				if (__LIB_7__::func_268(Global_2654152[iVar0 /*82*/].f_9, 0, 0))
				{
					bVar1 = false;
				}
			}
			else
			{
				bVar1 = false;
			}
		}
	}
	if (bVar4)
	{
		if (bVar1)
		{
			if (Global_2654152[iVar0 /*82*/].f_81)
			{
				if (func_1001(Global_2654152[iVar0 /*82*/].f_9))
				{
					return;
				}
				Global_2654152[iVar0 /*82*/].f_81 = 0;
				if (func_1000(Global_2654152[iVar0 /*82*/].f_9))
				{
					bVar1 = false;
					__LIB_34__::func_858(Global_2654152[iVar0 /*82*/].f_9, 1, 0, 0);
					__LIB_23__::func_988(0);
				}
			}
		}
	}
	if (!bVar4)
	{
		if (bVar1)
		{
			if (__LIB_20__::func_968())
			{
				bVar1 = false;
			}
		}
	}
	if (bVar4)
	{
		if (bVar1)
		{
			iVar5 = __LIB_21__::func_600(Global_2654152[iVar0 /*82*/].f_9);
			if (iVar5 == 0)
			{
				bVar1 = false;
			}
			else
			{
				iVar6 = __LIB_27__::func_71(iVar5);
				if (!__LIB_29__::func_839(iVar6, Global_2654152[iVar0 /*82*/].f_9))
				{
					bVar1 = false;
				}
			}
		}
	}
	bVar7 = true;
	if (bVar1)
	{
		bVar7 = __LIB_29__::func_854(Global_2654152[iVar0 /*82*/].f_64);
		if (!bVar7)
		{
			if (!Global_2654152[iVar0 /*82*/])
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				if (!__LIB_29__::func_853(Global_2654152[iVar0 /*82*/].f_64))
				{
					bVar1 = false;
				}
			}
		}
	}
	if (bVar4)
	{
		if (bVar1)
		{
			if (Global_2654152[iVar0 /*82*/].f_80)
			{
				bVar1 = false;
				__LIB_34__::func_858(Global_2654152[iVar0 /*82*/].f_9, 1, 0, 0);
			}
		}
	}
	if (!bVar1)
	{
		if ((!Global_2654152[iVar0 /*82*/].f_4 && Global_2654152[iVar0 /*82*/]) && Global_2654152[iVar0 /*82*/].f_2)
		{
			Global_2654152[iVar0 /*82*/].f_4 = 1;
			__LIB_34__::func_852();
		}
		__LIB_20__::func_960(iVar0, 1);
		return;
	}
	if (Global_2654152[iVar0 /*82*/].f_19)
	{
		if (Global_2654152[iVar0 /*82*/].f_15 == 0)
		{
			Global_2654152[iVar0 /*82*/].f_19 = 0;
		}
		else if (__LIB_15__::func_461(Global_2654152[iVar0 /*82*/].f_15, &(Global_2654152[iVar0 /*82*/].f_16)))
		{
			Global_2654152[iVar0 /*82*/].f_19 = 0;
		}
		else
		{
			return;
		}
	}
	iVar8 = 1;
	iVar9 = 0;
	bVar10 = false;
	if (!bVar7)
	{
		iVar8 = 0;
		bVar10 = true;
	}
	if (!func_983(iVar0))
	{
		iVar8 = 0;
		bVar10 = true;
	}
	if (__LIB_2__::func_279())
	{
		iVar8 = 0;
		iVar9 = 1;
	}
	if (__LIB_25__::func_933())
	{
		iVar8 = 0;
		bVar10 = true;
	}
	if (__LIB_0__::func_81())
	{
		iVar8 = 0;
		bVar10 = true;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		iVar8 = 0;
		bVar10 = true;
	}
	if (__LIB_1__::func_288())
	{
		iVar8 = 0;
		bVar10 = true;
	}
	if (Global_2654152[iVar0 /*82*/].f_2 != iVar8)
	{
		Global_2654152[iVar0 /*82*/].f_2 = iVar8;
	}
	iVar11 = 0;
	if (!MISC::IS_PC_VERSION())
	{
		if (iVar9 && !bVar10)
		{
			if (bVar4)
			{
				iVar11 = 1;
			}
		}
	}
	func_958(iVar0, iVar11);
	if (!Global_2654152[iVar0 /*82*/].f_4)
	{
		if (__LIB_29__::func_847())
		{
			Global_2654152[iVar0 /*82*/].f_4 = 1;
		}
	}
	Global_2654152[iVar0 /*82*/].f_3 = __LIB_26__::func_743(iVar0);
}

void func_958(int iParam0, int iParam1)//Position - 0x8F997
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar0 = Global_2654152[iParam0 /*82*/].f_9;
	bVar1 = Global_2654152[iParam0 /*82*/].f_11;
	if (bVar1)
	{
		if (!__LIB_0__::func_154(iVar0, 1, 1))
		{
			return;
		}
	}
	if (Global_2654152[iParam0 /*82*/])
	{
		if (bVar1)
		{
			func_982(iVar0, 0);
		}
		func_981(iParam0);
		return;
	}
	iVar2 = 0;
	if (bVar1)
	{
		iVar2 = __LIB_31__::func_929(iVar0);
		if (iVar2 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_2654152[iParam0 /*82*/].f_53))
			{
				return;
			}
		}
	}
	if (__LIB_2__::func_37(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (__LIB_3__::func_778() || __LIB_1__::func_203())
	{
		return;
	}
	if (__LIB_37__::func_347())
	{
		return;
	}
	if (!Global_2654152[iParam0 /*82*/].f_2)
	{
		if (iParam1 && __LIB_0__::func_706())
		{
			if (!Global_22670)
			{
				if (!__LIB_23__::func_450() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					Global_22670 = 1;
					Global_2656954 = 1;
				}
			}
		}
		return;
	}
	Global_2654152[iParam0 /*82*/] = 1;
	if (__LIB_9__::func_829(iParam0))
	{
		return;
	}
	func_960(iParam0, 0);
	__LIB_23__::func_977();
	__LIB_9__::func_265();
}

void func_960(int iParam0, bool bParam1)//Position - 0x8FAC1
{
	bool bVar0;
	bool bVar1;
	struct<13> Var2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	struct<10> Var10;
	bool bVar11;
	char cVar12[64];
	char cVar13[16];
	bool bVar14;
	bool bVar15;
	char cVar16[32];
	char cVar17[64];
	struct<8> Var18;
	char* sVar19;
	struct<16> Var20[8];
	bool bVar21;
	int iVar22;
	char cVar23[16];
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	char cVar31[64];
	char[] cVar32[8];
	struct<13> Var33;
	int iVar34;
	int iVar35;
	struct<4> Var36;
	int iVar37;
	struct<3> Var38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	bVar0 = Global_2654152[iParam0 /*82*/].f_76;
	Global_2654152[iParam0 /*82*/].f_76 = 0;
	Global_2654152[iParam0 /*82*/].f_77 = 0;
	if (__LIB_0__::func_3() != 0)
	{
		return;
	}
	if (__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
	{
		Global_2654152[iParam0 /*82*/].f_54 = -1;
		__LIB_34__::func_106();
		return;
	}
	if (Global_2654152[iParam0 /*82*/].f_54 == -99)
	{
		Global_2654152[iParam0 /*82*/].f_54 = -1;
		if (!bParam1)
		{
			__LIB_34__::func_106();
		}
		return;
	}
	bVar1 = true;
	if (__LIB_9__::func_281(PLAYER::PLAYER_ID()) || __LIB_9__::func_294(PLAYER::PLAYER_ID()))
	{
		if (Global_2654152[iParam0 /*82*/].f_11)
		{
			Var2 = { __LIB_0__::func_604(Global_2654152[iParam0 /*82*/].f_9) };
			if (!NETWORK::NETWORK_IS_FRIEND(&Var2))
			{
				bVar1 = false;
			}
		}
		else
		{
			bVar1 = false;
		}
	}
	bVar3 = Global_2654152[iParam0 /*82*/].f_11;
	iVar4 = 0;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	if (!bVar3)
	{
		if (Global_2654152[iParam0 /*82*/].f_12 == 40)
		{
			iVar9 = __LIB_9__::func_793(Global_2654152[iParam0 /*82*/].f_13);
			Global_2654152[iParam0 /*82*/].f_68 = __LIB_22__::func_965(iVar9);
			Global_2654152[iParam0 /*82*/].f_69 = __LIB_6__::func_875(iVar9);
		}
		else
		{
			Var10.f_1 = -1;
			Var10.f_2 = -1;
			Var10.f_9 = -1;
			if (__LIB_21__::func_667(&(Global_2654152[iParam0 /*82*/].f_56), &Var10, 1))
			{
				Global_2654152[iParam0 /*82*/].f_68 = __LIB_27__::func_843(&Var10);
				Global_2654152[iParam0 /*82*/].f_69 = __LIB_20__::func_947(&Var10);
				Global_2654152[iParam0 /*82*/].f_74 = __LIB_20__::func_992(&Var10);
				bVar11 = __LIB_26__::func_739(&Var10);
				if (!bVar11)
				{
					Global_2654152[iParam0 /*82*/].f_71 = 1;
				}
			}
		}
	}
	if (!bVar1)
	{
		if (!bParam1)
		{
			__LIB_29__::func_845();
			__LIB_34__::func_106();
		}
		return;
	}
	if (__LIB_37__::func_350(iParam0))
	{
		return;
	}
	if (bVar3)
	{
		iVar4 = __LIB_31__::func_929(Global_2654152[iParam0 /*82*/].f_9);
		if (__LIB_6__::func_869(Global_2654152[iParam0 /*82*/].f_9))
		{
			bVar5 = true;
			if (__LIB_29__::func_852(Global_2654152[iParam0 /*82*/].f_9))
			{
				bVar8 = true;
			}
		}
	}
	if (bVar3)
	{
		if (iVar4 == 0)
		{
			StringCopy(&cVar12, "CHAR_DEFAULT", 64);
		}
		else
		{
			StringCopy(&cVar12, PED::GET_PEDHEADSHOT_TXD_STRING(iVar4), 64);
		}
	}
	else
	{
		StringCopy(&cVar12, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(__LIB_34__::func_855(Global_2654152[iParam0 /*82*/].f_10)), 64);
	}
	StringCopy(&cVar13, "JL_INVITE" /* GXT: ~a~ */, 16);
	bVar14 = false;
	bVar15 = false;
	StringCopy(&cVar16, "", 32);
	StringCopy(&cVar17, func_839(Global_2654152[iParam0 /*82*/].f_13, Global_2654152[iParam0 /*82*/].f_14, -1, Global_2654152[iParam0 /*82*/].f_62), 64);
	StringCopy(&Var18, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cVar17), 64);
	sVar19 = "";
	bVar21 = false;
	if (Global_2654152[iParam0 /*82*/].f_15 != 0 && !Global_2654152[iParam0 /*82*/].f_20)
	{
		sVar19 = __LIB_12__::func_451(Global_2654152[iParam0 /*82*/].f_15, 500);
		__LIB_37__::func_346(Global_2654152[iParam0 /*82*/].f_15, &Var20);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar19))
		{
			bVar21 = true;
		}
	}
	else if (Global_2654152[iParam0 /*82*/].f_15 == 0 && !Global_2654152[iParam0 /*82*/].f_20)
	{
		if (Global_2654152[iParam0 /*82*/].f_13 == 0 && Global_2654152[iParam0 /*82*/].f_14 == 7)
		{
			__LIB_37__::func_345(Global_2654152[iParam0 /*82*/].f_56, &Var20);
			bVar21 = true;
		}
	}
	if (!bVar3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2654152[iParam0 /*82*/].f_37)))
		{
			sVar19 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2654152[iParam0 /*82*/].f_37));
			__LIB_23__::func_982(sVar19, &Var20);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar19))
			{
				bVar21 = true;
			}
		}
	}
	if (bVar3)
	{
		if (Global_2654152[iParam0 /*82*/].f_20)
		{
			iVar22 = __LIB_36__::func_742(Global_2654152[iParam0 /*82*/].f_56);
			StringCopy(&cVar23, __LIB_12__::func_463(iVar22), 16);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar23))
			{
				sVar19 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cVar23);
				__LIB_23__::func_982(sVar19, &Var20);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar19))
				{
					bVar21 = true;
				}
			}
		}
	}
	iVar24 = 0;
	iVar25 = 0;
	iVar26 = Global_2654152[iParam0 /*82*/].f_68;
	iVar27 = Global_2654152[iParam0 /*82*/].f_69;
	bVar28 = Global_2654152[iParam0 /*82*/].f_71;
	bVar29 = false;
	if (iVar26 == iVar27)
	{
		bVar29 = true;
	}
	bVar30 = false;
	if (Global_2654152[iParam0 /*82*/].f_12 < 32)
	{
		bVar30 = true;
		if (Global_2654152[iParam0 /*82*/].f_13 == 0)
		{
			if (Global_2654152[iParam0 /*82*/].f_14 == 1 || Global_2654152[iParam0 /*82*/].f_14 == 7)
			{
				bVar30 = false;
			}
		}
	}
	if (bVar5)
	{
		iVar24 = Global_1888862[Global_2654152[iParam0 /*82*/].f_9 /*120*/].f_25;
		iVar25 = Global_1853348[Global_2654152[iParam0 /*82*/].f_9 /*834*/].f_11.f_4;
		MemCopy(&cVar16, {Global_1853348[Global_2654152[iParam0 /*82*/].f_9 /*834*/].f_17}, 8);
		if ((__LIB_12__::func_574(Global_2654152[iParam0 /*82*/].f_9) || __LIB_29__::func_851(Global_2654152[iParam0 /*82*/].f_9)) || __LIB_9__::func_828(Global_2654152[iParam0 /*82*/].f_9))
		{
			if (__LIB_9__::func_828(Global_2654152[iParam0 /*82*/].f_9))
			{
				bVar7 = true;
			}
			else
			{
				bVar6 = true;
			}
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2654152[iParam0 /*82*/].f_21)))
	{
		StringCopy(&cVar13, "JLI_PP_ND" /* GXT: ~1~ to ~1~ Players~n~~a~, ~1~m */, 16);
		bVar14 = true;
		if (bVar21)
		{
			StringCopy(&cVar13, "JLI_PP_NDD" /* GXT: ~1~ to ~1~ Players~n~~a~, ~1~m~n~~a~~a~~a~~a~~a~~a~~a~~a~ */, 16);
			bVar15 = true;
			if (bVar5)
			{
				if (bVar6)
				{
					StringCopy(&cVar13, "JL_INVITE_CHND" /* GXT: Challenge: ~a~ (Job ~1~ of ~1~)~n~~a~~a~~a~~a~~a~~a~~a~~a~ */, 16);
				}
				else if (bVar7)
				{
					StringCopy(&cVar13, "JL_INVITE_H2HND" /* GXT: Head To Head: ~a~ (Jobs: ~1~), Wager $~1~~n~~a~~n~~a~~a~~a~~a~~a~~a~~a~ */, 16);
				}
				else if (bVar8)
				{
					StringCopy(&cVar13, "JL_INV_TQD" /* GXT: Qualifying Tournament: ~a~ (Job ~1~ of ~1~)~n~~a~ (~1~m)~n~~a~~a~~a~~a~~a~~a~~a~~a~ */, 16);
				}
				else
				{
					StringCopy(&cVar13, "JL_INV_PND_DI" /* GXT: Playlist: ~a~ (Job ~1~ of ~1~)~n~~a~ (~1~m)~n~~a~~a~~a~~a~~a~~a~~a~~a~ */, 16);
				}
			}
			else if (bVar29)
			{
				if (bVar30)
				{
					StringCopy(&cVar13, "JLI_P_NDDNR" /* GXT: ~1~ Players, Non R*~n~~a~, ~1~m~n~~a~~a~~a~~a~~a~~a~~a~~a~ */, 16);
				}
				else
				{
					StringCopy(&cVar13, "JLI_P_NDD" /* GXT: ~1~ Players~n~~a~, ~1~m~n~~a~~a~~a~~a~~a~~a~~a~~a~ */, 16);
				}
			}
			else if (bVar30)
			{
				StringCopy(&cVar13, "JLI_PP_NDDNR" /* GXT: ~1~ to ~1~ Players, Non R*~n~~a~, ~1~m~n~~a~~a~~a~~a~~a~~a~~a~~a~ */, 16);
			}
			else
			{
				StringCopy(&cVar13, "JLI_PP_NDD" /* GXT: ~1~ to ~1~ Players~n~~a~, ~1~m~n~~a~~a~~a~~a~~a~~a~~a~~a~ */, 16);
			}
		}
		else if (bVar5)
		{
			if (bVar6)
			{
				StringCopy(&cVar13, "JL_INVITE_CHN" /* GXT: Challenge: ~a~ (Job ~1~ of ~1~) */, 16);
			}
			else if (bVar7)
			{
				StringCopy(&cVar13, "JL_INVITE_H2HN" /* GXT: Head To Head: ~a~ (Jobs: ~1~), Wager $~1~ */, 16);
			}
			else if (bVar8)
			{
				StringCopy(&cVar13, "JL_INV_TQN" /* GXT: Qualifying Tournament: ~a~ (Job ~1~ of ~1~)~n~~a~ (~1~m) */, 16);
			}
			else
			{
				StringCopy(&cVar13, "JL_INV_PN_DI" /* GXT: Playlist: ~a~ (Job ~1~ of ~1~)~n~~a~ (~1~m) */, 16);
			}
		}
		else if (bVar29)
		{
			if (bVar30)
			{
				StringCopy(&cVar13, "JLI_P_NDNR" /* GXT: ~1~ Players, Non R*~n~~a~, ~1~m */, 16);
			}
			else
			{
				StringCopy(&cVar13, "JLI_P_ND" /* GXT: ~1~ Players~n~~a~, ~1~m */, 16);
			}
		}
		else if (bVar30)
		{
			StringCopy(&cVar13, "JLI_PP_NDNR" /* GXT: ~1~ to ~1~ Players, Non R*~n~~a~, ~1~m */, 16);
		}
		else
		{
			StringCopy(&cVar13, "JLI_PP_ND" /* GXT: ~1~ to ~1~ Players~n~~a~, ~1~m */, 16);
		}
	}
	else if (bVar5)
	{
		if (bVar6)
		{
			StringCopy(&cVar13, "JL_INVITE_CH" /* GXT: Challenge: (Job ~1~ of ~1~) */, 16);
		}
		else if (bVar7)
		{
			StringCopy(&cVar13, "JL_INVITE_H2H" /* GXT: Head To Head: (Jobs: ~1~), Wager $~1~ */, 16);
		}
		else if (bVar8)
		{
			StringCopy(&cVar13, "JL_INV_TQ" /* GXT: Qualifying Tournament: ~a~ (Job ~1~ of ~1~) */, 16);
		}
		else
		{
			StringCopy(&cVar13, "JL_INV_P_DI" /* GXT: Playlist: ~a~ (Job ~1~ of ~1~) */, 16);
		}
	}
	if (bVar3)
	{
		StringCopy(&cVar31, "<C>", 64);
		StringConCat(&cVar31, PLAYER::GET_PLAYER_NAME(Global_2654152[iParam0 /*82*/].f_9), 64);
		StringConCat(&cVar31, "</C>", 64);
		Var33 = { __LIB_0__::func_604(Global_2654152[iParam0 /*82*/].f_9) };
		iVar34 = __LIB_2__::func_180(&Var33);
		iVar35 = __LIB_3__::func_808();
		if (iVar34 == iVar35)
		{
			__LIB_18__::func_471(Global_2654152[iParam0 /*82*/].f_9, &cVar32);
		}
	}
	else
	{
		Var36 = { __LIB_19__::func_921(Global_2654152[iParam0 /*82*/].f_10) };
		StringConCat(&cVar31, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Var36), 64);
	}
	iVar37 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var38 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
		iVar37 = SYSTEM::ROUND(MISC::GET_DISTANCE_BETWEEN_COORDS(Var38, Global_2654152[iParam0 /*82*/].f_6, true));
	}
	iVar39 = 7;
	iVar40 = 0;
	iVar41 = MISC::GET_HASH_KEY(&(Global_2654152[iParam0 /*82*/].f_56));
	__LIB_37__::func_344(&iVar39, &iVar40, iVar41, Global_2654152[iParam0 /*82*/].f_13, Global_2654152[iParam0 /*82*/].f_14, Global_2654152[iParam0 /*82*/].f_74, Global_2654152[iParam0 /*82*/].f_62, Global_2654152[iParam0 /*82*/].f_63);
	__LIB_23__::func_981();
	__LIB_39__::func_399(Global_2654152[iParam0 /*82*/].f_13, Global_2654152[iParam0 /*82*/].f_14, Global_2654152[iParam0 /*82*/].f_62, Global_2654152[iParam0 /*82*/].f_63);
	if (bVar5)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&cVar13);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&cVar16);
		if (!bVar7)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar24);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iVar25);
		if (bVar7)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_2654152[iParam0 /*82*/].f_70);
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_2654152[iParam0 /*82*/].f_21));
		if (!bVar6 && !bVar7)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar37);
		}
		if (bVar15)
		{
			iVar42 = 0;
			iVar42 = 0;
			while (iVar42 < 8)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Var20[iVar42 /*16*/]));
				iVar42++;
			}
		}
		Global_2654152[iParam0 /*82*/].f_54 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_WITH_CREW_TAG_AND_ADDITIONAL_ICON(&cVar12, &cVar12, true, iVar39, &cVar31, &Var18, 1f, &cVar32, iVar40, 1);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&cVar13);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iVar26);
		if (!bVar29)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar27);
		}
		if (bVar14)
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_2654152[iParam0 /*82*/].f_21));
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar37);
			if (bVar15)
			{
				iVar43 = 0;
				iVar43 = 0;
				while (iVar43 < 8)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Var20[iVar43 /*16*/]));
					iVar43++;
				}
			}
		}
		else
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY("");
		}
		__LIB_29__::func_843(bVar28, Global_2654152[iParam0 /*82*/].f_12, &Var18);
		Global_2654152[iParam0 /*82*/].f_54 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_WITH_CREW_TAG_AND_ADDITIONAL_ICON(&cVar12, &cVar12, true, iVar39, &cVar31, &Var18, 1f, &cVar32, iVar40, 1);
	}
	__LIB_29__::func_842();
	__LIB_23__::func_979(Global_2654152[iParam0 /*82*/].f_54);
	__LIB_23__::func_978();
	if (!bParam1)
	{
		__LIB_29__::func_845();
		__LIB_34__::func_106();
	}
	if (bVar0)
	{
		Global_2654152[iParam0 /*82*/].f_77 = (MISC::GET_GAME_TIMER() + 50000);
	}
	if (bParam1)
	{
		__LIB_23__::func_977();
	}
	__LIB_39__::func_400(iParam0);
}

void func_981(int iParam0)//Position - 0x91144
{
	bool bVar0;
	if (Global_2654152[iParam0 /*82*/].f_77 == 0)
	{
		return;
	}
	if (MISC::GET_GAME_TIMER() < Global_2654152[iParam0 /*82*/].f_77)
	{
		return;
	}
	Global_2654152[iParam0 /*82*/].f_77 = 0;
	if (__LIB_2__::func_37(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (__LIB_3__::func_778() || __LIB_1__::func_203())
	{
		return;
	}
	if (__LIB_37__::func_347())
	{
		return;
	}
	if (SCRIPT::DOES_SCRIPT_EXIST("appMPJobListNEW") && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpjoblistnew")) > 0)
	{
		return;
	}
	if (!Global_2654152[iParam0 /*82*/].f_2)
	{
		return;
	}
	Global_2654152[iParam0 /*82*/].f_73 = Global_2657490;
	Global_2657490++;
	bVar0 = true;
	func_960(iParam0, bVar0);
}

void func_982(int iParam0, bool bParam1)//Position - 0x911FB
{
	int iVar0;
	iVar0 = __LIB_18__::func_330(iParam0);
	if (iVar0 != -1)
	{
		if (!bParam1)
		{
		}
		Global_1660783[iVar0 /*5*/].f_4 = 1;
		return;
	}
	if (__LIB_2__::func_44(iParam0))
	{
		return;
	}
	__LIB_25__::func_59(iParam0, 1);
}

int func_983(int iParam0)//Position - 0x91238
{
	var uVar0;
	if (!Global_2654152[iParam0 /*82*/].f_11)
	{
		return 1;
	}
	uVar0 = Global_2654152[iParam0 /*82*/].f_9;
	return func_984(uVar0);
}

int func_984(var uParam0)//Position - 0x91264
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	iVar0 = func_987(uParam0);
	if (__LIB_12__::func_678(iVar0))
	{
		return 1;
	}
	iVar1 = uParam0;
	iVar2 = Global_2681762.f_4[iVar1 /*2*/].f_1;
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!__LIB_22__::func_958(iVar2))
	{
		return 0;
	}
	if (!__LIB_9__::func_833(iVar2))
	{
		return 0;
	}
	Var3 = { __LIB_9__::func_816(iVar2) };
	iVar4 = __LIB_36__::func_156(&Var3);
	uVar5 = __LIB_22__::func_961(iVar2);
	iVar6 = Global_2686568[iVar2 /*41*/].f_26;
	bVar7 = false;
	iVar8 = 0;
	iVar8 = 0;
	bVar7 = false;
	while (bVar7 < 32)
	{
		if (BitTest(uVar5, bVar7))
		{
			iVar8++;
		}
		bVar7++;
	}
	iVar8 = (iVar8 + iVar6);
	if (iVar8 >= iVar4)
	{
		return 0;
	}
	return 1;
}

int func_987(var uParam0)//Position - 0x91341
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	if (Global_2681762.f_4[iVar0 /*2*/] == 3)
	{
		return 0;
	}
	iVar1 = Global_2681762.f_4[iVar0 /*2*/].f_1;
	if (iVar1 == -1)
	{
		return 0;
	}
	return __LIB_9__::func_816(iVar1);
}

int func_1000(int iParam0)//Position - 0x91922
{
	struct<13> Var0;
	if (!__LIB_0__::func_53())
	{
		return 0;
	}
	Var0 = { __LIB_0__::func_604(iParam0) };
	if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
	{
		return 0;
	}
	return 1;
}

int func_1001(int iParam0)//Position - 0x9194F
{
	struct<13> Var0;
	if (!__LIB_0__::func_53())
	{
		return 0;
	}
	Var0 = { __LIB_0__::func_604(iParam0) };
	if (NETWORK::NETWORK_HAS_VIEW_GAMER_USER_CONTENT_RESULT(&Var0))
	{
		return 0;
	}
	return 1;
}

void func_1006()//Position - 0x91CCC
{
	struct<3> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	struct<6> Var5;
	if (!__LIB_29__::func_858())
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2656914.f_12)) && Global_2656914.f_19)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::THEFEED_HIDE_THIS_FRAME();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
		if (__LIB_0__::func_706() || MISC::GET_FRAME_COUNT() > Global_2656914.f_18)
		{
			__LIB_24__::func_697();
		}
		return;
	}
	if (!Global_2656914.f_1)
	{
		if (!Global_2656914.f_2)
		{
			if (!__LIB_29__::func_857())
			{
				return;
			}
			Global_2656914.f_2 = 1;
		}
	}
	if (Global_2656914.f_1)
	{
		if (!Global_2656914.f_4)
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::THEFEED_HIDE_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
			if (__LIB_0__::func_497())
			{
				return;
			}
			Var0 = { Global_2656914.f_9 };
			if (!func_1340(0, 0, 1, Global_2656914.f_5, 0, Var0.f_0, Var0.f_1, Var0.f_2, 1, 0, 0, 0, 1, 0, 0))
			{
				if (!Global_2656914.f_3)
				{
					if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
						{
							if (STREAMING::GET_PLAYER_SWITCH_STATE() > 2)
							{
								if (func_1281())
								{
									if (HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_706())
									{
										HUD::SET_FRONTEND_ACTIVE(false);
									}
									func_1203(Global_2656914.f_12, 0);
									__LIB_1__::func_741(Global_2656914.f_12);
									Global_2656914.f_3 = 1;
								}
							}
						}
					}
				}
				return;
			}
			if (!Global_2656914.f_3)
			{
				if (func_1281())
				{
					func_1203(Global_2656914.f_12, 0);
					__LIB_1__::func_741(Global_2656914.f_12);
					Global_2656914.f_3 = 1;
				}
			}
			if (__LIB_4__::func_977())
			{
				func_1172();
			}
			Global_2656914.f_4 = 1;
		}
	}
	Global_1922911 = { Global_2656914.f_6 };
	if (!Global_2656914.f_1)
	{
		if (!__LIB_18__::func_333(Global_2656914.f_9, 0f, 0, 1, 0, 0, 1, 0, 1, 0, 0))
		{
			return;
		}
	}
	if (__LIB_0__::func_788(Global_4718592.f_116524))
	{
		if (!BitTest(Global_1946250.f_2, 17))
		{
			return;
		}
	}
	if (__LIB_2__::func_871(Global_4718592.f_116524) || __LIB_2__::func_871(Global_2714762.f_6))
	{
		if (!BitTest(Global_1946250.f_6, 17))
		{
			return;
		}
	}
	if (__LIB_4__::func_602(Global_4718592.f_116524) || __LIB_4__::func_602(Global_2714762.f_7))
	{
		if (!BitTest(Global_1946250.f_7, 13))
		{
			return;
		}
	}
	if (__LIB_0__::func_247(Global_4718592.f_116524) || __LIB_0__::func_247(Global_2714762.f_8))
	{
		if (!BitTest(Global_1946250.f_8, 19))
		{
			return;
		}
	}
	if (Global_2656914.f_1)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::THEFEED_HIDE_THIS_FRAME();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
		if (__LIB_0__::func_497())
		{
			return;
		}
		if (Global_2656914.f_21)
		{
			if (__LIB_23__::func_993() == 2)
			{
				if (!__LIB_12__::func_422())
				{
					__LIB_12__::func_421(1);
				}
				iVar1 = func_1104(0, 1);
				if (iVar1 == 4)
				{
					__LIB_23__::func_832(1);
					Global_2656914.f_21 = 0;
					Global_2656914.f_22 = MISC::GET_GAME_TIMER();
					Global_2656914.f_23 = __LIB_0__::func_160();
					__LIB_37__::func_351(Global_1937518.f_4, 1, 0);
					StringCopy(&(Global_1937518.f_4), "", 24);
				}
				else if (iVar1 == 3)
				{
					if (!Global_1937518.f_43)
					{
						Global_1937518.f_43 = 1;
					}
					return;
				}
				else
				{
					bVar2 = false;
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Global_1937518.f_57)))
					{
						bVar2 = true;
					}
					else if (!__LIB_0__::func_743(PLAYER::INT_TO_PLAYERINDEX(Global_1937518.f_57)))
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						__LIB_23__::func_990();
						__LIB_23__::func_832(0);
						Global_2656914.f_21 = 0;
						Global_2656914.f_22 = MISC::GET_GAME_TIMER();
						Global_2656914.f_23 = __LIB_0__::func_160();
						__LIB_37__::func_351(Global_1937518.f_4, 1, 0);
						StringCopy(&(Global_1937518.f_4), "", 24);
					}
					return;
				}
			}
			else
			{
				bVar3 = false;
				bVar4 = true;
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_2656914.f_23))
				{
					bVar3 = true;
				}
				else if (!__LIB_0__::func_743(Global_2656914.f_23))
				{
					bVar3 = true;
				}
				if (!bVar3)
				{
					if (MISC::GET_GAME_TIMER() > Global_2656914.f_22)
					{
						bVar3 = true;
						if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
						{
							if (__LIB_2__::func_279())
							{
								bVar4 = false;
							}
						}
					}
				}
				if (bVar3)
				{
					Global_2656914.f_21 = 0;
					Global_2656914.f_22 = MISC::GET_GAME_TIMER();
					Global_2656914.f_23 = __LIB_0__::func_160();
					Var5 = { Global_1937518.f_4 };
					if (MISC::IS_STRING_NULL_OR_EMPTY(&Var5))
					{
						Var5 = { Global_2656914.f_12 };
						if (MISC::IS_STRING_NULL_OR_EMPTY(&Var5))
						{
						}
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var5))
					{
						__LIB_37__::func_351(Var5, 1, 0);
					}
					__LIB_23__::func_832(0);
					StringCopy(&(Global_1937518.f_4), "", 24);
					if (bVar4)
					{
						func_1090();
					}
				}
				return;
			}
		}
		else if (!__LIB_36__::func_455(0, 0, 0, 0, 0, 1, 0, 1, 1, 0))
		{
			if (__LIB_2__::func_835() && !__LIB_22__::func_484(PLAYER::PLAYER_ID()))
			{
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(__LIB_18__::func_569(0)))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(__LIB_18__::func_569(0), 0, true);
				}
			}
			return;
		}
	}
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(__LIB_18__::func_569(0)))
	{
		if (__LIB_2__::func_279() && !__LIB_22__::func_484(PLAYER::PLAYER_ID()))
		{
			GRAPHICS::ANIMPOSTFX_PLAY(__LIB_18__::func_569(0), 0, true);
		}
	}
	else if (!__LIB_2__::func_279() && !__LIB_0__::func_706())
	{
		__LIB_1__::func_209();
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!__LIB_0__::func_706())
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
		}
	}
	if (!__LIB_1__::func_770() && !__LIB_23__::func_853())
	{
		HUD::BUSYSPINNER_OFF();
	}
	__LIB_23__::func_989(0);
	if (!Global_2656914.f_1)
	{
		func_1203(Global_2656914.f_12, 0);
	}
	if ((((((!__LIB_0__::func_706() && Global_2725856 != 4) && Global_2725856 != 2) && Global_2725856 != 3) && Global_2725856 != 4) && Global_2725856 != 5) && Global_2725856 != 6)
	{
		__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	__LIB_24__::func_697();
	__LIB_9__::func_792();
}

void func_1090()//Position - 0x944AD
{
	int iVar0;
	iVar0 = __LIB_21__::func_600(PLAYER::PLAYER_ID());
	if (iVar0 == 0)
	{
		return;
	}
	func_1091(iVar0);
}

void func_1091(int iParam0)//Position - 0x944CE
{
	struct<3> Var0;
	if (iParam0 == 0)
	{
		return;
	}
	Var0.f_0 = 1995606767;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, func_1097());
	__LIB_27__::func_844(1995606767, iParam0, 0, -1);
}

int func_1097()//Position - 0x948A3
{
	if (Global_2681762.f_1 != __LIB_0__::func_160())
	{
		if (__LIB_0__::func_154(Global_2681762.f_1, 0, 1))
		{
			return __LIB_0__::func_679(Global_2681762.f_1);
		}
	}
	return __LIB_6__::func_900(1, 1);
}

var func_1104(bool bParam0, bool bParam1)//Position - 0x94A01
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<4> Var4[4];
	struct<4> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	uVar0 = Global_2725856;
	if (Var2.f_0 != 0f && Var3.f_0 != 0f)
	{
	}
	func_1156(__LIB_0__::func_85(PLAYER::PLAYER_ID()), &iVar6, 999);
	Var1 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
	__LIB_18__::func_422(iVar6, &Var4, -1);
	Var2 = { Var4[0 /*4*/] };
	Var3 = { Global_1312193[iVar6 /*1951*/].f_1742.f_20 };
	iVar7 = 0;
	while (iVar7 <= 2)
	{
		if (Global_1312193[iVar6 /*1951*/].f_38[iVar7 /*27*/].f_26 == 2 || Global_1312193[iVar6 /*1951*/].f_38[iVar7 /*27*/].f_26 == 1)
		{
			Var1 = { Global_1312193[iVar6 /*1951*/].f_38[iVar7 /*27*/].f_12 };
		}
		iVar7++;
	}
	if (Global_2725868 == -1)
	{
		iVar8 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		if (iVar8 > 80)
		{
			Global_2725868 = 4;
		}
		else if (iVar8 > 60)
		{
			Global_2725868 = 3;
		}
		else if (iVar8 > 40)
		{
			Global_2725868 = 2;
		}
		else if (iVar8 > 20)
		{
			Global_2725868 = 1;
		}
		else
		{
			Global_2725868 = 0;
		}
	}
	__LIB_23__::func_992(&Var5, Global_1312193[iVar6 /*1951*/].f_35, Global_2725868);
	switch (Global_2725856)
	{
		case 0:
			__LIB_12__::func_424();
			__LIB_12__::func_423();
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			Global_2725423 = { Var1 };
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (STREAMING::IS_ENTITY_FOCUS(PLAYER::PLAYER_PED_ID()))
				{
					STREAMING::CLEAR_FOCUS();
				}
			}
			Global_2725856 = 1;
			break;
		case 1:
			if (__LIB_40__::func_624(0, 0, 0, 0, 1, 0))
			{
				Global_2725856 = 2;
			}
			if (__LIB_17__::func_385())
			{
				if (bParam1)
				{
					HUD::SET_PAUSE_MENU_ACTIVE(false);
					HUD::SET_FRONTEND_ACTIVE(false);
				}
				__LIB_23__::func_991(&Global_2725863, Var5, Var5.f_3, Var5.f_6);
				if (__LIB_0__::func_706())
				{
					GRAPHICS::ANIMPOSTFX_PLAY("MenuMGHeistIn", 0, true);
				}
				else
				{
					GRAPHICS::ANIMPOSTFX_PLAY("SwitchOpenNeutralOutHeist", 0, true);
				}
				Global_2725856 = 2;
			}
			break;
		case 2:
			STREAMING::STOP_PLAYER_SWITCH();
			__LIB_0__::func_708(0);
			STREAMING::SET_FOCUS_POS_AND_VEL(Var5, Var5.f_3);
			Global_2725856 = 3;
			break;
		case 3:
			STREAMING::SET_FOCUS_POS_AND_VEL(Var5, Var5.f_3);
			__LIB_1__::func_589();
			__LIB_1__::func_210();
			GRAPHICS::DONT_RENDER_IN_GAME_UI(false);
			Global_2725856 = 4;
			break;
		case 4:
			Global_2725867 = 1;
			if (__LIB_0__::func_922() != 1)
			{
				if (__LIB_0__::func_706())
				{
					if (__LIB_4__::func_715())
					{
						__LIB_7__::func_6(0);
					}
				}
			}
			if (Global_2725857)
			{
				__LIB_12__::func_424();
				__LIB_7__::func_6(0);
				STREAMING::CLEAR_FOCUS();
				if (__LIB_4__::func_713(Global_1853197))
				{
					__LIB_38__::func_916(&Global_2725861, &Global_2725862, "hei_dlc_apart_high2_new");
				}
				else
				{
					__LIB_38__::func_916(&Global_2725861, &Global_2725862, "hei_dlc_apart_high_new");
				}
				Global_2725856 = 5;
			}
			break;
		case 5:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
				{
					if (STREAMING::IS_ENTITY_FOCUS(PLAYER::PLAYER_PED_ID()))
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 60f, 0))
				{
					__LIB_0__::func_579(&Global_2725859);
					Global_2725856 = 6;
				}
			}
			if (Global_2667225.f_2677)
			{
				__LIB_41__::func_399();
			}
			break;
		case 6:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (__LIB_2__::func_173(&Global_2725859, 25000, 0))
			{
				Global_2725856 = 7;
			}
			else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				Global_2725856 = 7;
			}
			break;
		case 7:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			if (CAM::DOES_CAM_EXIST(Global_2725863))
			{
				if (CAM::IS_CAM_ACTIVE(Global_2725863))
				{
					CAM::SET_CAM_ACTIVE(Global_2725863, false);
				}
				CAM::DESTROY_CAM(Global_2725863, true);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, true, 0);
			}
			Global_2725868 = -1;
			__LIB_12__::func_727(0);
			Global_2725856 = 8;
			if (Global_2667225.f_2677)
			{
				Global_1577988 = 1;
				__LIB_41__::func_399();
			}
			if (__LIB_12__::func_422())
			{
				__LIB_12__::func_421(0);
			}
			break;
		case 8:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (bParam0)
			{
			}
			else
			{
				__LIB_16__::func_621(0, 0, 1);
			}
			__LIB_12__::func_424();
			__LIB_12__::func_423();
			Global_2725856 = 0;
			break;
	}
	return uVar0;
}

int func_1156(struct<3> Param0, var uParam1, int iParam2)//Position - 0x9BF1C
{
	int iVar0;
	if (iParam2 != 999)
	{
		if ((OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Global_1312193[iParam2 /*1951*/].f_146.f_57[0 /*8*/], Global_1312193[iParam2 /*1951*/].f_146.f_57[0 /*8*/].f_3, Global_1312193[iParam2 /*1951*/].f_146.f_57[0 /*8*/].f_6, false, true) || (Global_1312193[iParam2 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Global_1312193[iParam2 /*1951*/].f_146.f_57[1 /*8*/], Global_1312193[iParam2 /*1951*/].f_146.f_57[1 /*8*/].f_3, Global_1312193[iParam2 /*1951*/].f_146.f_57[1 /*8*/].f_6, false, true))) || (Global_1312193[iParam2 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Global_1312193[iParam2 /*1951*/].f_146.f_57[2 /*8*/], Global_1312193[iParam2 /*1951*/].f_146.f_57[2 /*8*/].f_3, Global_1312193[iParam2 /*1951*/].f_146.f_57[2 /*8*/].f_6, false, true)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_1157(Param0, iVar0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_1157(Param0, iVar0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_1157(Param0, iVar0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_1157(Param0, iVar0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_1157(Param0, iVar0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_1157(Param0, iVar0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_1157(Param0, iVar0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_1157(Param0, iVar0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_1157(Param0, iVar0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
			iVar0++;
		}
		if (func_1157(Param0, 8, 0))
		{
			return 1;
		}
		if (func_1157(Param0, 17, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1157(struct<3> Param0, int iParam1, float fParam2)//Position - 0x9C1E1
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var2[3];
	int iVar3;
	if (iParam1 != 999)
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_2 > Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3.f_2)
			{
				Var1[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
				Var2[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
			}
			else
			{
				Var1[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
				Var2[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
			}
			Var1[iVar3 /*3*/].f_2 = (Var1[iVar3 /*3*/].f_2 + fParam2);
			Var2[iVar3 /*3*/].f_2 = (Var2[iVar3 /*3*/].f_2 - fParam2);
			iVar3++;
		}
		if (((Global_1312193[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[0 /*3*/], Var1[0 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6, false, true)) || (Global_1312193[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[1 /*3*/], Var1[1 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6, false, true))) || (Global_1312193[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[2 /*3*/], Var1[2 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6, false, true)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_1157(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_1157(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_1157(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_1157(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_1157(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_1157(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_1157(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_1157(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_1157(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_1157(Param0, 8, fParam2))
		{
			return 1;
		}
		if (func_1157(Param0, 17, fParam2))
		{
			return 1;
		}
	}
	return 0;
}

void func_1172()//Position - 0x9CCEB
{
	__LIB_14__::func_312(0);
	func_1179();
	__LIB_14__::func_314();
	__LIB_14__::func_313();
	__LIB_27__::func_94(0);
}

void func_1179()//Position - 0x9CDCC
{
	if (!__LIB_13__::func_105())
	{
		return;
	}
	STREAMING::SET_ISLAND_ENABLED("HeistIsland", false);
	__LIB_13__::func_104();
	func_1180(1);
}

void func_1180(bool bParam0)//Position - 0x9CDF2
{
	__LIB_22__::func_234(0);
	TASK::SET_SCENARIO_GROUP_ENABLED("Heist_Island_Peds", false);
	HUD::SET_USE_ISLAND_MAP(false);
	PATHFIND::SET_ALLOW_STREAM_HEIST_ISLAND_NODES(0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
	AUDIO::SET_AUDIO_FLAG("PlayerOnDLCHeist4Island", false);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_DLC_Hei4_Island_Zones", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_DLC_Hei4_Island_Disabled_Zones", true, true);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_HEI4/DLCHEI4_GENERIC_01");
	NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
	__LIB_2__::func_222();
	if (bParam0)
	{
		func_1181(1);
	}
}

void func_1181(int iParam0)//Position - 0x9CE62
{
	struct<50> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(PLAYER::PLAYER_PED_ID(), "", "");
		Var0 = 12;
		Var0.f_13 = 12;
		Var0.f_26 = 12;
		Var0.f_39 = 9;
		Var0.f_49 = 9;
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
		PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(PLAYER::PLAYER_PED_ID());
		PED::CLEAR_PED_STORED_HAT_PROP(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 0, 0, false);
		PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
		if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
		{
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
		}
		PED::CLEAR_ALL_PED_PROPS(PLAYER::PLAYER_PED_ID());
		__LIB_19__::func_680(&Var0, -1);
		func_271(PLAYER::PLAYER_PED_ID(), &Var0, 0, 0, 1, iParam0);
		iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 1, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 1), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 1));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("SHRINK_HEAD"), 0))
		{
			iVar2 = __LIB_1__::func_556(2100, -1, 0);
			iVar3 = __LIB_1__::func_556(2101, -1, 0);
			iVar4 = __LIB_1__::func_556(2102, -1, 0);
			fVar5 = __LIB_2__::func_97(135, -1);
			iVar6 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
			if (iVar6 == joaat("MP_M_Freemode_01"))
			{
				PED::SET_PED_HEAD_BLEND_DATA(PLAYER::PLAYER_PED_ID(), 0, 0, 0, iVar2, iVar3, iVar4, 0f, fVar5, 0f, false);
			}
			else if (iVar6 == joaat("MP_F_Freemode_01"))
			{
				PED::SET_PED_HEAD_BLEND_DATA(PLAYER::PLAYER_PED_ID(), 21, 0, 0, iVar2, iVar3, iVar4, 0f, fVar5, 0f, false);
			}
			iVar7 = 0;
			while (iVar7 < 20)
			{
				PED::SET_PED_MICRO_MORPH(PLAYER::PLAYER_PED_ID(), iVar7, 0f);
				iVar7++;
			}
		}
		else
		{
			__LIB_25__::func_44(PLAYER::PLAYER_PED_ID(), -1);
		}
		func_1183(0);
		func_321(PLAYER::PLAYER_PED_ID(), 0, 1, -1);
		__LIB_6__::func_371(-1326764176, __LIB_6__::func_900(1, 1));
	}
}

void func_1183(int iParam0)//Position - 0x9D03D
{
	struct<14> Var0;
	int iVar1;
	if (func_400(PLAYER::PLAYER_PED_ID(), 14, 0) != -99)
	{
		Var0 = { __LIB_37__::func_856(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, func_400(PLAYER::PLAYER_PED_ID(), 14, 0), -1) };
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || iParam0 == 1)
		{
			if (iParam0 == 0)
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			}
			switch (MISC::GET_HASH_KEY(&(Var0.f_8)))
			{
				case joaat("CLO_BUS_P_1_0"):
				case joaat("CLO_BUS_P_1_1"):
				case joaat("CLO_BUS_P_1_2"):
				case joaat("CLO_BUS_P_1_3"):
				case joaat("CLO_BUS_P_1_4"):
				case joaat("CLO_BUS_P_1_5"):
				case joaat("CLO_BUS_P_1_6"):
				case joaat("CLO_BUS_P_1_7"):
				case joaat("CLO_BUS_P_1_8"):
				case joaat("CLO_BUS_P_1_9"):
				case joaat("CLO_BUS_P_1_10"):
				case joaat("CLO_BUS_P_1_11"):
				case joaat("CLO_BUS_P_1_12"):
				case joaat("CLO_BUS_P_1_13"):
				case joaat("CLO_X2M_HT_0_0"):
				case joaat("CLO_X2M_HT_0_1"):
				case joaat("CLO_X2M_HT_0_2"):
				case joaat("CLO_X2M_HT_0_3"):
				case joaat("CLO_X2M_HT_0_4"):
				case joaat("CLO_X2M_HT_0_5"):
				case joaat("CLO_X2M_HT_0_6"):
				case joaat("CLO_X2M_HT_0_7"):
				case joaat("CLO_X2F_HT_0_0"):
				case joaat("CLO_X2F_HT_0_1"):
				case joaat("CLO_X2F_HT_0_2"):
				case joaat("CLO_X2F_HT_0_3"):
				case joaat("CLO_X2F_HT_0_4"):
				case joaat("CLO_X2F_HT_0_5"):
				case joaat("CLO_X2F_HT_0_6"):
				case joaat("CLO_X2F_HT_0_7"):
				case joaat("HT_FMM_13_0"):
				case joaat("HT_FMM_13_1"):
				case joaat("HT_FMM_13_2"):
				case joaat("HT_FMM_13_3"):
				case joaat("HT_FMM_13_4"):
				case joaat("HT_FMM_13_5"):
				case joaat("HT_FMM_13_6"):
				case joaat("HT_FMM_13_7"):
				case joaat("CLO_BBF_P2_0"):
				case joaat("CLO_BBF_P2_1"):
				case joaat("CLO_BBF_P2_2"):
				case joaat("CLO_BBF_P2_3"):
				case joaat("CLO_BBF_P2_4"):
				case joaat("CLO_BBF_P2_5"):
				case joaat("CLO_BBF_P2_6"):
					if (iParam0 == 0)
					{
						if (VEHICLE::DOES_VEHICLE_HAVE_ROOF(iVar1))
						{
							PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
						}
					}
					else
					{
						PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
					}
					break;
				}
		}
	}
}

void func_1203(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)//Position - 0x9D8BB
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		return;
	}
	iVar0 = 0;
	iVar1 = MISC::GET_HASH_KEY(&uParam0);
	iVar0 = 0;
	while (iVar0 < Global_1573885)
	{
		if (Global_2621865[iVar0 /*26*/].f_25 == iVar1)
		{
			func_1204(iVar0, bParam6);
			return;
		}
		iVar0++;
	}
}

void func_1204(int iParam0, bool bParam1)//Position - 0x9D909
{
	if (__LIB_12__::func_507(iParam0))
	{
		if (bParam1)
		{
			__LIB_20__::func_951(iParam0);
		}
		else
		{
			__LIB_12__::func_506(iParam0);
		}
		func_1207(iParam0);
	}
	__LIB_26__::func_731(iParam0);
}

void func_1207(int iParam0)//Position - 0x9D981
{
	struct<10> Var0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	if (__LIB_0__::func_3() == 999 || __LIB_0__::func_3() == -1)
	{
		return;
	}
	Var0 = { __LIB_9__::func_268(iParam0) };
	bVar1 = __LIB_12__::func_507(iParam0);
	bVar2 = __LIB_12__::func_505(iParam0);
	bVar3 = __LIB_38__::func_206(Var0, bVar2);
	if (!bVar3)
	{
		bVar4 = true;
		if (bVar4)
		{
			if (Global_1573131.f_1 < __LIB_32__::func_890(&Var0))
			{
				bVar3 = true;
			}
		}
	}
	bVar5 = false;
	if (__LIB_12__::func_503(iParam0))
	{
		if (__LIB_37__::func_354(&Var0))
		{
			bVar5 = true;
		}
	}
	if (bVar3)
	{
		if (bVar5)
		{
			bVar3 = false;
		}
	}
	bVar6 = false;
	if (!bVar3)
	{
		if (!__LIB_12__::func_502(iParam0))
		{
			bVar6 = false;
			if (bVar5)
			{
				bVar6 = true;
			}
			if (!bVar6)
			{
				bVar3 = true;
			}
		}
	}
	if (__LIB_12__::func_501(iParam0))
	{
		if (bVar3)
		{
			bVar3 = false;
		}
		else if (__LIB_12__::func_500(iParam0))
		{
			__LIB_20__::func_950(iParam0);
			__LIB_26__::func_735(iParam0);
		}
	}
	if (__LIB_12__::func_497(iParam0))
	{
		if (!__LIB_12__::func_477(iParam0))
		{
			bVar3 = true;
		}
	}
	if (__LIB_25__::func_933())
	{
		if (Global_2621540 > 0)
		{
			if (!__LIB_12__::func_496(iParam0))
			{
				bVar3 = true;
			}
		}
	}
	if (__LIB_12__::func_472(iParam0))
	{
		if (((__LIB_0__::func_738(PLAYER::PLAYER_ID()) || __LIB_12__::func_495(iParam0)) || __LIB_34__::func_862()) || __LIB_39__::func_402())
		{
			if (!bVar3)
			{
				bVar3 = true;
			}
		}
	}
	if (bVar1 == bVar3)
	{
		return;
	}
	if (bVar3)
	{
		__LIB_12__::func_494(iParam0);
		__LIB_20__::func_949(iParam0, 1);
		return;
	}
	__LIB_12__::func_493(iParam0);
	if (__LIB_37__::func_353())
	{
		func_1208(iParam0, 0, 1);
	}
}

void func_1208(int iParam0, bool bParam1, int iParam2)//Position - 0x9DB03
{
	bool bVar0;
	int iVar1;
	struct<10> Var2;
	bool bVar3;
	bool bVar4;
	if (!bParam1)
	{
		if (__LIB_12__::func_492(iParam0))
		{
			return;
		}
	}
	if (__LIB_12__::func_507(iParam0))
	{
		return;
	}
	if (Global_2653189)
	{
		if (!__LIB_34__::func_34(iParam0))
		{
			return;
		}
	}
	if (__LIB_12__::func_491(iParam0))
	{
		return;
	}
	if (__LIB_26__::func_734(iParam0))
	{
		return;
	}
	if (!__LIB_12__::func_489(iParam0))
	{
		return;
	}
	if (__LIB_12__::func_488(iParam0))
	{
		bVar0 = true;
		if (bVar0)
		{
			return;
		}
	}
	if (__LIB_12__::func_487(iParam0) || __LIB_12__::func_486(iParam0))
	{
		return;
	}
	if (__LIB_25__::func_933())
	{
		if (Global_2621540 > 0)
		{
			if (!__LIB_12__::func_496(iParam0))
			{
				return;
			}
		}
	}
	iVar1 = __LIB_12__::func_485(iParam0);
	if (HUD::GET_BLIP_INFO_ID_DISPLAY(iVar1) != 0)
	{
		return;
	}
	if (!__LIB_2__::func_17())
	{
		if (__LIB_12__::func_484(iParam0))
		{
			HUD::SET_BLIP_DISPLAY(iVar1, 5);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(iVar1, 4);
		}
	}
	if ((__LIB_12__::func_483(iParam0) || __LIB_34__::func_33(iParam0)) && (!__LIB_1__::func_113(PLAYER::PLAYER_ID(), 1) || __LIB_3__::func_646()))
	{
		HUD::SET_BLIP_AS_SHORT_RANGE(iVar1, false);
	}
	else
	{
		HUD::SET_BLIP_AS_SHORT_RANGE(iVar1, true);
	}
	if (__LIB_12__::func_481(iParam0))
	{
		Var2 = { __LIB_9__::func_268(iParam0) };
		bVar3 = __LIB_12__::func_505(iParam0);
		bVar4 = __LIB_38__::func_206(Var2, bVar3);
		if (!bVar4)
		{
			__LIB_34__::func_861(iParam0);
			__LIB_12__::func_480(iParam0);
		}
	}
	if (__LIB_12__::func_479(iParam0))
	{
		HUD::SHOW_TICK_ON_BLIP(iVar1, true);
	}
	__LIB_28__::func_82(iParam0);
}

int func_1281()//Position - 0x9ECC4
{
	struct<3> Var0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		return 0;
	}
	Var0 = { Global_2656914.f_9 };
	Var0.f_2 = (Var0.f_2 + 1f);
	__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 40960, 0);
	__LIB_5__::func_64(func_1283(PLAYER::PLAYER_ID()));
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), Var0, false, false, true);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
	if (Global_2656914.f_20)
	{
		Global_2656952 = 1;
	}
	return 1;
}

Vector3 func_1283(int iParam0)//Position - 0x9ED5D
{
	struct<3> Var0;
	if (HUD::DOES_BLIP_EXIST(Global_2678393[iParam0]))
	{
		Var0 = { __LIB_1__::func_293(Global_2678393[iParam0]) };
	}
	else if (HUD::DOES_BLIP_EXIST(Global_2678393.f_33[iParam0]) && !iParam0 == Global_2703735)
	{
		Var0 = { __LIB_1__::func_293(Global_2678393.f_33[iParam0]) };
	}
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		return Var0;
	}
	return func_1284(iParam0);
}

Vector3 func_1284(int iParam0)//Position - 0x9EDD1
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	if (Global_2676198)
	{
		if (__LIB_2__::func_87(iParam0))
		{
			Var1 = { __LIB_2__::func_86(iParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689235[iParam0 /*453*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689235[iParam0 /*453*/].f_71.f_12) > 0f)
			{
				return Global_2689235[iParam0 /*453*/].f_71.f_12;
			}
		}
	}
	if (Global_1853348[iParam0 /*834*/].f_267.f_32 > 0)
	{
		Var1 = { __LIB_1__::func_986(__LIB_1__::func_987(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32)) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	else
	{
		func_1334(__LIB_0__::func_85(iParam0), &iVar0);
		if (iVar0 > 0)
		{
			Var1 = { __LIB_1__::func_986(__LIB_1__::func_987(iVar0)) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (__LIB_0__::func_304(iParam0))
	{
		Var1 = { __LIB_19__::func_559(iParam0) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	if (__LIB_2__::func_81(iParam0))
	{
		iVar2 = __LIB_1__::func_259(iParam0);
		if (iVar2 > -1)
		{
			Var1 = { Global_1946250.f_533[iVar2 /*3*/] };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (!Global_2676198)
	{
		if (__LIB_2__::func_87(iParam0))
		{
			Var1 = { __LIB_2__::func_86(iParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689235[iParam0 /*453*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689235[iParam0 /*453*/].f_71.f_12) > 0f)
			{
				return Global_2689235[iParam0 /*453*/].f_71.f_12;
			}
		}
	}
	return __LIB_0__::func_85(iParam0);
}

void func_1334(struct<3> Param0, var uParam1)//Position - 0xA02ED
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_1157(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 34;
	iVar1 = 43;
	while (iVar0 <= iVar1)
	{
		if (func_1157(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 61;
	iVar1 = 65;
	while (iVar0 <= iVar1)
	{
		if (func_1157(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_1157(Param0, iVar0, 0))
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
		{
			*uParam1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
		}
		else if (Global_2666811.f_1 > 0)
		{
			*uParam1 = Global_2666811.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
	iVar0 = 17;
	if (func_1157(Param0, iVar0, 0))
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
		{
			*uParam1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
		}
		else if (Global_2666811.f_1 > 0)
		{
			*uParam1 = Global_2666811.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
}

int func_1340(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6, var uParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14)//Position - 0xA131D
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	Global_2727793 = MISC::GET_GAME_TIMER();
	if (((((!__LIB_1__::func_598() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !DLC::GET_IS_LOADING_SCREEN_ACTIVE()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_2727896) && !__LIB_0__::func_496() == 63)
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
		return 0;
	}
	if (!STREAMING::IS_SAFE_TO_START_PLAYER_SWITCH())
	{
		func_1352();
		__LIB_33__::func_239(1, 0);
		MISC::PREVENT_ARREST_STATE_THIS_FRAME();
		if (bParam10)
		{
			__LIB_0__::func_921(0);
			__LIB_7__::func_6(0);
		}
		return 0;
	}
	if (!__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_0__::func_81())
		{
			if (__LIB_0__::func_496() == 58)
			{
				__LIB_1__::func_594(1);
			}
			if (__LIB_1__::func_593())
			{
				if (BitTest(Global_2621446, 3))
				{
					MISC::CLEAR_BIT(&Global_2621446, 3);
				}
			}
			return 0;
		}
	}
	if (__LIB_0__::func_491() == 4)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() == 0)
		{
			__LIB_0__::func_708(0);
		}
	}
	if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_33__::func_239(1, 0);
		if (bParam10)
		{
			__LIB_0__::func_921(0);
			__LIB_7__::func_6(0);
		}
		return 0;
	}
	__LIB_8__::func_626();
	__LIB_6__::func_298();
	if (iParam9 == 0)
	{
	}
	if (!bParam11)
	{
		if (!__LIB_1__::func_592())
		{
			__LIB_1__::func_591();
		}
	}
	if (!__LIB_2__::func_283())
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE() == 1)
		{
			if (bParam1)
			{
				HUD::SET_FRONTEND_ACTIVE(false);
			}
		}
		if (Global_1585311)
		{
			if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
		}
		if (HUD::IS_ONLINE_POLICIES_MENU_ACTIVE() == 0)
		{
			if (HUD::GET_PAUSE_MENU_STATE() == 25)
			{
				HUD::CLOSE_SOCIAL_CLUB_MENU();
			}
		}
		if ((__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_3() == 0) && !__LIB_0__::func_394(CAM::GET_FINAL_RENDERED_CAM_COORD(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 10f, 0))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD(), false, false, false, false);
			bParam4 = true;
		}
		iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
		if (iVar0 != 0)
		{
			bParam4 = true;
			if (__LIB_1__::func_217())
			{
				bParam2 = false;
			}
		}
		if (Global_2725323)
		{
			if ((Global_2715699.f_6597 || __LIB_7__::func_8(-1046478848)) || __LIB_4__::func_977())
			{
				if (__LIB_24__::func_965(0))
				{
					bParam12 = true;
					if (__LIB_1__::func_590() > 800 || (__LIB_33__::func_238() && !__LIB_7__::func_7()))
					{
						if (__LIB_4__::func_715() && !__LIB_0__::func_706())
						{
							if (!CAM::IS_SCREEN_FADED_OUT())
							{
								if (!CAM::IS_SCREEN_FADING_OUT())
								{
									CAM::DO_SCREEN_FADE_OUT(800);
								}
							}
						}
					}
					__LIB_0__::func_705();
				}
			}
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && (((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19))
		{
			bParam4 = true;
			__LIB_7__::func_6(1);
			bParam2 = false;
		}
		if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
		{
			bParam4 = true;
		}
		if (CUTSCENE::IS_CUTSCENE_PLAYING() || CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			bParam4 = true;
		}
		if (bParam2 && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_16__::func_621(1, 0, 1);
		}
		if (((__LIB_4__::func_715() && ((HUD::IS_PAUSE_MENU_ACTIVE() == 0 || bParam1 == 0) || (HUD::IS_SOCIAL_CLUB_ACTIVE() && HUD::IS_WARNING_MESSAGE_ACTIVE()))) && STREAMING::IS_SAFE_TO_START_PLAYER_SWITCH()) && __LIB_6__::func_297())
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (STREAMING::IS_SRL_LOADED())
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("frogger"));
					STREAMING::END_SRL();
				}
			}
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			HUD::CLEAR_PRINTS();
			iVar2 = 0;
			if (bParam4)
			{
				iVar2 = 1;
			}
			Var3 = { uParam5, uParam6, uParam7 };
			if (iParam3 == 3)
			{
				if (__LIB_0__::func_86(Var3))
				{
					iParam3 = 1;
				}
				else if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(Var1, Var3) != 3)
				{
					iParam3 = 1;
				}
			}
			else if (iParam3 == 2)
			{
				if (__LIB_0__::func_86(Var3))
				{
					iParam3 = 1;
				}
				else if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(Var1, Var3) != 2 || STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(Var1, Var3) != 3)
				{
					iParam3 = 1;
				}
			}
			GRAPHICS::DONT_RENDER_IN_GAME_UI(true);
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			if (bParam12)
			{
				GRAPHICS::ANIMPOSTFX_STOP_ALL();
			}
			__LIB_1__::func_589();
			__LIB_1__::func_210();
			if (__LIB_0__::func_791())
			{
				if (__LIB_1__::func_588())
				{
					iVar2 = 1;
					iVar2 += 32;
					iVar2 += 16384;
					STREAMING::SWITCH_TO_MULTI_FIRSTPART(Global_1577841, iVar2, __LIB_0__::func_109());
				}
				else
				{
					return 0;
				}
			}
			else if (bParam0)
			{
				if (iParam13 || __LIB_1__::func_217())
				{
					STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 128 | 16384 || iParam14), iParam3);
				}
				else
				{
					STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 128 || iParam14), iParam3);
				}
			}
			else if (iParam13 || __LIB_1__::func_217())
			{
				STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 16384 || iParam14), iParam3);
			}
			else
			{
				STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 || iParam14), iParam3);
			}
			StringCopy(&Global_2725371, "", 32);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					StringCopy(&Global_2725371, AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			__LIB_0__::func_708(1);
			HUD::SET_BIGMAP_ACTIVE(false, false);
			if (bParam2 && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
			{
				__LIB_16__::func_621(1, 0, 1);
			}
		}
		if (__LIB_0__::func_491() == 1)
		{
			if (__LIB_0__::func_791())
			{
				if (STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED())
				{
					if (Global_2725330)
					{
						Global_2725330 = 0;
					}
					if (Global_2815059.f_6776 != -1)
					{
						__LIB_1__::func_214();
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_1577841))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1577841, false, true);
						PED::DELETE_PED(&Global_1577841);
					}
					__LIB_16__::func_621(0, 0, 1);
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						if (__LIB_0__::func_493())
						{
							GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
						}
						CAM::DO_SCREEN_FADE_IN(800);
					}
					__LIB_0__::func_708(2);
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() > 2)
					{
						__LIB_7__::func_311();
						__LIB_16__::func_621(0, 0, 1);
						if (((__LIB_1__::func_241() && LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE() == 0) && NETWORK::GET_IS_LAUNCH_FROM_LIVE_AREA() == 0) && NETWORK::GET_IS_LIVE_AREA_LAUNCH_WITH_CONTENT() == 0)
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(0);
							}
						}
					}
				}
				else if (bParam2)
				{
					if (bParam8)
					{
						__LIB_7__::func_311();
					}
					__LIB_16__::func_621(0, 0, 1);
				}
			}
			if (STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED())
			{
				if (bParam8 == 0 || __LIB_7__::func_311())
				{
					if (bParam2)
					{
						if (bParam8)
						{
							__LIB_7__::func_311();
						}
						__LIB_16__::func_621(0, 0, 1);
					}
					__LIB_0__::func_708(2);
					return 1;
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

void func_1352()//Position - 0xA1CE2
{
	int iVar0;
	struct<62> Var1;
	int iVar2;
	if (PLAYER::PLAYER_ID() != __LIB_0__::func_160())
	{
		if (__LIB_6__::func_945(PLAYER::PLAYER_ID()))
		{
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_579 = 0;
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			PED::RESET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), 0.25f);
			PED::RESET_PED_STRAFE_CLIPSET(PLAYER::PLAYER_PED_ID());
			WEAPON::SET_WEAPON_ANIMATION_OVERRIDE(PLAYER::PLAYER_PED_ID(), joaat("DEFAULT"));
			iVar0 = 2600;
			PED::SET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), iVar0);
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar0, 0);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(PLAYER::PLAYER_PED_ID(), false);
			GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(PLAYER::PLAYER_PED_ID(), "", "");
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
			PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(PLAYER::PLAYER_PED_ID());
			PED::CLEAR_PED_STORED_HAT_PROP(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 0, 0, false);
			PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
			if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
			}
			PED::CLEAR_ALL_PED_PROPS(PLAYER::PLAYER_PED_ID());
			Var1 = 12;
			Var1.f_13 = 12;
			Var1.f_26 = 12;
			Var1.f_39 = 9;
			Var1.f_49 = 9;
			iVar2 = -1;
			Var1[0] = __LIB_0__::func_228(387, iVar2);
			Var1[1] = __LIB_0__::func_228(388, iVar2);
			Var1[2] = __LIB_0__::func_228(389, iVar2);
			Var1[3] = __LIB_0__::func_228(390, iVar2);
			Var1[4] = __LIB_0__::func_228(391, iVar2);
			Var1[5] = __LIB_0__::func_228(392, iVar2);
			Var1[6] = __LIB_0__::func_228(393, iVar2);
			Var1[7] = __LIB_0__::func_228(394, iVar2);
			Var1[8] = __LIB_0__::func_228(395, iVar2);
			Var1[9] = __LIB_0__::func_228(396, iVar2);
			Var1[10] = __LIB_0__::func_228(397, iVar2);
			Var1[11] = __LIB_0__::func_228(398, iVar2);
			Var1.f_13[0] = __LIB_0__::func_228(399, iVar2);
			Var1.f_13[1] = (__LIB_0__::func_228(400, iVar2) + __LIB_0__::func_228(18092, iVar2));
			Var1.f_13[2] = __LIB_0__::func_228(401, iVar2);
			Var1.f_13[3] = (__LIB_0__::func_228(402, iVar2) + __LIB_0__::func_228(18093, iVar2));
			Var1.f_13[4] = __LIB_0__::func_228(403, iVar2);
			Var1.f_13[5] = __LIB_0__::func_228(404, iVar2);
			Var1.f_13[6] = __LIB_0__::func_228(405, iVar2);
			Var1.f_13[7] = __LIB_0__::func_228(406, iVar2);
			Var1.f_13[8] = (__LIB_0__::func_228(407, iVar2) + __LIB_0__::func_228(18094, iVar2));
			Var1.f_13[9] = __LIB_0__::func_228(408, iVar2);
			Var1.f_13[10] = __LIB_0__::func_228(409, iVar2);
			Var1.f_13[11] = (__LIB_0__::func_228(410, iVar2) + __LIB_0__::func_228(18095, iVar2));
			Var1.f_26[0] = __LIB_0__::func_228(411, iVar2);
			Var1.f_26[1] = __LIB_0__::func_228(412, iVar2);
			Var1.f_26[2] = __LIB_0__::func_228(413, iVar2);
			Var1.f_26[3] = __LIB_0__::func_228(414, iVar2);
			Var1.f_26[4] = __LIB_0__::func_228(415, iVar2);
			Var1.f_26[5] = __LIB_0__::func_228(416, iVar2);
			Var1.f_26[6] = __LIB_0__::func_228(417, iVar2);
			Var1.f_26[7] = __LIB_0__::func_228(418, iVar2);
			Var1.f_26[8] = __LIB_0__::func_228(419, iVar2);
			Var1.f_26[9] = __LIB_0__::func_228(420, iVar2);
			Var1.f_26[10] = __LIB_0__::func_228(421, iVar2);
			Var1.f_26[11] = __LIB_0__::func_228(422, iVar2);
			Var1.f_39[0] = __LIB_0__::func_228(423, iVar2);
			Var1.f_39[1] = __LIB_0__::func_228(424, iVar2);
			Var1.f_39[2] = __LIB_0__::func_228(425, iVar2);
			Var1.f_39[3] = __LIB_0__::func_228(426, iVar2);
			Var1.f_39[4] = __LIB_0__::func_228(427, iVar2);
			Var1.f_39[5] = __LIB_0__::func_228(428, iVar2);
			Var1.f_39[6] = __LIB_0__::func_228(429, iVar2);
			Var1.f_39[7] = __LIB_0__::func_228(430, iVar2);
			Var1.f_39[8] = __LIB_0__::func_228(431, iVar2);
			Var1.f_49[0] = __LIB_0__::func_228(432, iVar2);
			Var1.f_49[1] = __LIB_0__::func_228(433, iVar2);
			Var1.f_49[2] = __LIB_0__::func_228(434, iVar2);
			Var1.f_49[3] = __LIB_0__::func_228(435, iVar2);
			Var1.f_49[4] = __LIB_0__::func_228(436, iVar2);
			Var1.f_49[5] = __LIB_0__::func_228(437, iVar2);
			Var1.f_49[6] = __LIB_0__::func_228(438, iVar2);
			Var1.f_49[7] = __LIB_0__::func_228(439, iVar2);
			Var1.f_49[8] = __LIB_0__::func_228(440, iVar2);
			if (__LIB_1__::func_563(161, -1))
			{
				Var1.f_59 = __LIB_1__::func_556(2053, iVar2, 0);
			}
			else
			{
				Var1.f_59 = __LIB_1__::func_556(753, iVar2, 0);
			}
			Var1.f_60 = __LIB_1__::func_556(754, iVar2, 0);
			Var1.f_61 = __LIB_1__::func_556(755, iVar2, 0);
			func_271(PLAYER::PLAYER_PED_ID(), &Var1, 0, 0, 1, 1);
		}
	}
}

void func_1359()//Position - 0xA224A
{
	if (!__LIB_9__::func_805())
	{
		return;
	}
	Global_2657491 = MISC::GET_GAME_TIMER() + 1500;
	if (func_1362())
	{
		return;
	}
	if (__LIB_23__::func_995())
	{
		return;
	}
	if (__LIB_29__::func_858())
	{
		return;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::THEFEED_HIDE_THIS_FRAME();
	__LIB_23__::func_994();
}

int func_1362()//Position - 0xA22DE
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (!__LIB_23__::func_997())
	{
		return 0;
	}
	if (__LIB_23__::func_889(Global_2656879.f_1))
	{
		__LIB_23__::func_994();
		Global_2656879.f_20 = 1;
		func_1419();
		__LIB_19__::func_923();
		__LIB_0__::func_849();
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (!__LIB_23__::func_914(Global_2656879.f_1, &iVar0, &iVar1))
	{
		if (MISC::GET_GAME_TIMER() < Global_2656879.f_25)
		{
			return 1;
		}
		__LIB_23__::func_994();
		Global_2656879.f_20 = 1;
		__LIB_0__::func_151("RESERVE_FAIL" /* GXT: An error occurred accepting this invitation. Please try again. */, -1);
		func_1419();
		__LIB_19__::func_923();
		return 0;
	}
	uVar2 = __LIB_23__::func_891(Global_2656879.f_1);
	Global_2656879.f_1 = uVar2;
	if (!__LIB_0__::func_154(PLAYER::PLAYER_ID(), 1, 1))
	{
		func_1091(Global_2656879.f_1);
		__LIB_24__::func_697();
		__LIB_23__::func_994();
		__LIB_6__::func_849(0);
		__LIB_12__::func_729();
		__LIB_19__::func_923();
		return 0;
	}
	if (__LIB_2__::func_279())
	{
		func_1091(Global_2656879.f_1);
		__LIB_24__::func_697();
		__LIB_23__::func_994();
		__LIB_6__::func_849(0);
		func_1419();
		__LIB_19__::func_923();
		return 0;
	}
	if (Global_2656879.f_32 > -1)
	{
		__LIB_26__::func_762(Global_2656879.f_32, 0, 0);
	}
	if (Global_1659428 != 145)
	{
		Global_1659428.f_9 = 1;
	}
	func_1412(Global_2656879.f_18, &(Global_2656879.f_2), Global_2656879.f_19);
	Global_1922914 = func_1411();
	func_1364(Global_2656879.f_21, Global_2656879.f_26, Global_2656879.f_18, Global_2656879.f_19, Global_2656879.f_33, Global_2656879.f_1, 1, Global_2656879.f_34);
	__LIB_29__::func_859();
	Global_2656879.f_1 = 0;
	return 0;
}

void func_1364(struct<3> Param0, struct<6> Param1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)//Position - 0xA252B
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<3> Var8;
	float fVar9;
	bool bVar10;
	int iVar11;
	struct<13> Var12;
	var uVar13;
	if (__LIB_29__::func_858())
	{
		return;
	}
	func_1383(Param1, 0);
	if (Global_2656879.f_24 != -1)
	{
		HUD::THEFEED_REMOVE_ITEM(Global_2656879.f_24);
		__LIB_23__::func_996();
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::THEFEED_HIDE_THIS_FRAME();
	}
	if (__LIB_0__::func_788(Global_2714762.f_5) && __LIB_34__::func_868(Param1))
	{
		bVar0 = true;
	}
	if (__LIB_2__::func_871(Global_2714762.f_6) && __LIB_34__::func_867(Param1))
	{
		bVar1 = true;
	}
	if (__LIB_4__::func_602(Global_2714762.f_7) && __LIB_34__::func_866(Param1))
	{
		bVar2 = true;
	}
	if (__LIB_0__::func_247(Global_2714762.f_8) && __LIB_34__::func_865(Param1))
	{
		bVar3 = true;
	}
	if ((((((((((!MISC::IS_STRING_NULL_OR_EMPTY(&Param1) && __LIB_34__::func_864(Param1)) && !__LIB_0__::func_788(iParam7)) && !__LIB_4__::func_604(iParam7)) && !bVar0) && !__LIB_2__::func_871(iParam7)) && !bVar1) && !__LIB_4__::func_602(iParam7)) && !bVar2) && !__LIB_0__::func_247(iParam7)) && !bVar3)
	{
		Global_1835428 = { 0f, 0f, 0f };
		Global_1922911 = { Param0 };
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		__LIB_5__::func_64(Var4);
		func_1203(Param1, 0);
		__LIB_1__::func_741(Param1);
		Global_2656914 = 1;
		Global_2656914.f_19 = 1;
		Global_2656914.f_12 = { Param1 };
		Global_2656914.f_18 = MISC::GET_FRAME_COUNT() + 30;
		__LIB_9__::func_792();
		return;
	}
	if (bParam6)
	{
		if ((PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::GET_PED_PARACHUTE_STATE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) >= 0) || __LIB_0__::func_702(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
		}
		else
		{
			iVar5 = 0;
			if ((__LIB_2__::func_871(Global_2714762.f_6) || __LIB_4__::func_602(Global_2714762.f_7)) || __LIB_0__::func_247(Global_2714762.f_8))
			{
				iVar5 = 8192;
			}
			__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, iVar5, 0);
		}
	}
	else
	{
		__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 8192, 0);
	}
	iVar6 = PLAYER::PLAYER_ID();
	iVar7 = 0;
	Var8 = { 0f, 0f, 0f };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar7 = 1;
		Var8 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
	}
	fVar9 = (1.4f - 0.1f);
	if (__LIB_4__::func_602(Global_2714762.f_7))
	{
		fVar9 = 0.1f;
	}
	Global_2656914 = 1;
	Global_2656914.f_19 = 0;
	Global_2656914.f_1 = bParam6;
	Global_2656914.f_2 = 0;
	Global_2656914.f_3 = 0;
	Global_2656914.f_4 = 0;
	Global_2656914.f_6 = { Param0 };
	Global_2656914.f_9 = { __LIB_29__::func_862(iVar6, Param0, fVar9) };
	Global_2656914.f_5 = 0;
	Global_2656914.f_12 = { Param1 };
	Global_2656914.f_18 = 0;
	Global_2656914.f_20 = 0;
	Global_2656914.f_21 = 0;
	Global_2656914.f_22 = MISC::GET_GAME_TIMER();
	Global_2656914.f_23 = __LIB_0__::func_160();
	if (bParam6 && iVar7)
	{
		Global_2656914.f_5 = __LIB_18__::func_619(Var8, Global_2656914.f_9);
		if (Global_2656914.f_5 == 3)
		{
			Global_2656914.f_5 = 2;
		}
		if (Global_2656914.f_5 == 2)
		{
			if (((__LIB_7__::func_451(Var8, 99) || func_1157(Var8, 999, 0)) || __LIB_7__::func_451(Global_2656914.f_9, 99)) || func_1157(Global_2656914.f_9, 999, 0))
			{
				Global_2656914.f_5 = 1;
			}
		}
		HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("FMMC_DOWNLOAD" /* GXT: Downloading */);
		HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
	}
	Global_1835428 = { 0f, 0f, 0f };
	if (iParam2 == 0)
	{
		if (iParam3 == 1 || iParam3 == 7)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_property_int")) > 0)
			{
				if (__LIB_1__::func_155(PLAYER::PLAYER_ID(), 1, 0))
				{
					bVar10 = true;
					if (iParam4 != __LIB_0__::func_160())
					{
						if (__LIB_28__::func_843(PLAYER::PLAYER_ID(), iParam4, 1, 0))
						{
							bVar10 = false;
							__LIB_19__::func_923();
						}
					}
					if (bVar10)
					{
						Global_2656914.f_20 = 1;
					}
				}
			}
			if (iParam4 != __LIB_0__::func_160())
			{
				iVar11 = iParam4;
				Var12 = { __LIB_0__::func_604(iParam4) };
				__LIB_9__::func_811(iParam4, &uVar13);
				if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var12, &uVar13))
				{
					if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&uVar13))
					{
						iVar11 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&uVar13);
					}
				}
				__LIB_37__::func_355(iVar11, Param1, iParam5);
			}
			Global_2656914.f_21 = 1;
			Global_2656914.f_22 = (MISC::GET_GAME_TIMER() + 60000);
			Global_2656914.f_23 = iParam4;
			__LIB_34__::func_858(iParam4, 0, 0, 1);
			__LIB_37__::func_351(Global_2656914.f_12, 0, 1);
			if (__LIB_23__::func_993() == 2)
			{
				Global_1937518.f_4 = { Global_2656914.f_12 };
			}
			else
			{
				__LIB_29__::func_860(Global_2656914.f_12);
			}
		}
	}
	Global_2667224 = 0;
}

void func_1383(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)//Position - 0xA308C
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		return;
	}
	iVar0 = 0;
	iVar1 = MISC::GET_HASH_KEY(&uParam0);
	iVar0 = 0;
	while (iVar0 < Global_1573885)
	{
		if (Global_2621865[iVar0 /*26*/].f_25 == iVar1)
		{
			__LIB_34__::func_74(iVar0);
			if (iParam6 != 0)
			{
				func_1384(iVar0, iParam6);
			}
			return;
		}
		iVar0++;
	}
}

void func_1384(int iParam0, int iParam1)//Position - 0xA30E6
{
	if (iParam1 == 8)
	{
		func_1394(iParam0);
		return;
	}
	if (iParam1 == 16)
	{
		__LIB_23__::func_825(iParam0);
		return;
	}
	if (iParam1 == 5)
	{
		__LIB_37__::func_356(iParam0);
		return;
	}
	if (iParam1 == 4)
	{
		func_1385(iParam0);
		return;
	}
	Global_2621865[iParam0 /*26*/].f_1 = iParam1;
}

void func_1385(int iParam0)//Position - 0xA3138
{
	bool bVar0;
	bVar0 = true;
	func_1386(iParam0, bVar0);
	Global_2621865[iParam0 /*26*/].f_1 = 4;
}

void func_1386(int iParam0, bool bParam1)//Position - 0xA3156
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	bool bVar5;
	bVar0 = BitTest(Global_2621865[iParam0 /*26*/].f_13, 12);
	bVar1 = !bVar0;
	if (bVar1 == bParam1)
	{
		return;
	}
	Var2 = { __LIB_12__::func_470(iParam0) };
	Var3 = { __LIB_12__::func_470(iParam0) };
	fVar4 = (__LIB_23__::func_822(iParam0) + 2f);
	bVar5 = false;
	Var2.f_0 = (Var2.f_0 - fVar4);
	Var2.f_1 = (Var2.f_1 - fVar4);
	Var2.f_2 = (Var2.f_2 - 2f);
	Var3.f_0 = (Var3.f_0 + fVar4);
	Var3.f_1 = (Var3.f_1 + fVar4);
	Var3.f_2 = (Var3.f_2 + 2f);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var2, Var3, bParam1, bVar5);
	if (((!bParam1 && !__LIB_1__::func_215()) && !__LIB_0__::func_292(PLAYER::PLAYER_ID(), 0)) && !__LIB_18__::func_259(PLAYER::PLAYER_ID(), 0))
	{
		MISC::CLEAR_AREA_OF_VEHICLES(__LIB_12__::func_470(iParam0), fVar4, false, false, false, false, false, false, 0);
	}
	if (bParam1)
	{
		MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 12);
	}
	else
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 12);
	}
}

void func_1394(int iParam0)//Position - 0xA33BA
{
	__LIB_23__::func_831(iParam0);
	if (!func_1401() && !__LIB_37__::func_353())
	{
	}
	else
	{
		__LIB_37__::func_358(iParam0, 0);
		__LIB_37__::func_357(iParam0, 0);
	}
	Global_2621865[iParam0 /*26*/].f_1 = 8;
}

int func_1401()//Position - 0xA364B
{
	if (__LIB_2__::func_279() && !Global_2653150.f_10)
	{
		return 0;
	}
	if (Global_1573131.f_26.f_2)
	{
		return 0;
	}
	if (func_1403(-1, 0))
	{
		return 0;
	}
	if (__LIB_2__::func_368())
	{
		return 0;
	}
	return 1;
}

int func_1403(int iParam0, int iParam1)//Position - 0xA36A0
{
	if (__LIB_7__::func_268(PLAYER::PLAYER_ID(), 1, 0))
	{
		if ((((Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 5 || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 32) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 136) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 129) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 148)
		{
			return 1;
		}
	}
	if (Global_2653189)
	{
		if (iParam0 == -1)
		{
			return 1;
		}
		if (!__LIB_34__::func_73(iParam0) && !__LIB_34__::func_34(iParam0))
		{
			return 1;
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_CURRENT_FRONTEND_MENU_VERSION() != joaat("FE_MENU_VERSION_EMPTY_NO_BACKGROUND"))
	{
		if ((!__LIB_0__::func_739() && !__LIB_3__::func_778()) && ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (NETWORK::IS_COMMERCE_STORE_OPEN() && !MISC::IS_PC_VERSION())
	{
		return 1;
	}
	if (__LIB_6__::func_869(PLAYER::PLAYER_ID()))
	{
		if (iParam0 == -1)
		{
			return 1;
		}
		if (!__LIB_23__::func_829(iParam0))
		{
			return 1;
		}
	}
	if (__LIB_25__::func_933())
	{
		if (Global_2621540 <= 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1411()//Position - 0xA3946
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = __LIB_0__::func_160();
	if (!__LIB_0__::func_154(PLAYER::PLAYER_ID(), 1, 1))
	{
		return iVar0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return iVar0;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
	{
		return iVar0;
	}
	iVar2 = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar1, false, true);
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar1, -1, false))
	{
		iVar2++;
	}
	if (iVar2 == 1)
	{
		return iVar0;
	}
	iVar3 = -1;
	iVar5 = iVar3;
	iVar6 = 8;
	while (iVar5 <= iVar6)
	{
		iVar3 = iVar5;
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar1, iVar3, false))
		{
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, iVar3, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				if (iVar4 != PLAYER::PLAYER_PED_ID())
				{
					if (PED::IS_PED_A_PLAYER(iVar4))
					{
						return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
					}
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

void func_1412(var uParam0, char* sParam1, var uParam2)//Position - 0xA3A18
{
	struct<20> Var0;
	int iVar1;
	int iVar2;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (__LIB_0__::func_154(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				iVar1 = __LIB_6__::func_907(iVar2, 0, 0, 0);
				Var0.f_0 = -1908874529;
				Var0.f_1 = PLAYER::PLAYER_ID();
				StringCopy(&(Var0.f_2), sParam1, 64);
				Var0.f_18 = uParam0;
				Var0.f_19 = uParam2;
				if (iVar1 != 0)
				{
					SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 20, iVar1);
				}
				return;
			}
		}
	}
}

void func_1419()//Position - 0xA3C44
{
	if (Global_2653182 == 0)
	{
		__LIB_12__::func_729();
		return;
	}
	if (!__LIB_0__::func_154(PLAYER::PLAYER_ID(), 1, 1))
	{
		__LIB_12__::func_729();
	}
	if (__LIB_1__::func_155(PLAYER::PLAYER_ID(), 1, 0))
	{
		__LIB_12__::func_729();
		return;
	}
	if (!__LIB_1__::func_155(PLAYER::PLAYER_ID(), 1, 0))
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), Global_2653182, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		if (Global_2653183 != 0)
		{
			__LIB_37__::func_810(Global_2653183, 8, 3, 0);
		}
		__LIB_4__::func_67("RESTORE_WANTED" /* GXT: Your Wanted Level has been restored and you have been refunded $~1~. */, Global_2653183, -1);
		__LIB_12__::func_729();
	}
}

void func_1440()//Position - 0xA4FBA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (!iLocal_207)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				func_1442(iVar0, 1);
				iVar0++;
			}
			iLocal_201 = -30000;
			iLocal_207 = 1;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
		{
			iVar3 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar1);
			if (iVar3 == 142)
			{
				SCRIPT::GET_EVENT_DATA(0, iVar1, &iVar2, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar2)))
					{
						if (!iLocal_205)
						{
							iLocal_206 = 0;
							iLocal_205 = 1;
							if (ENTITY::IS_ENTITY_DEAD(iVar2, false) || !ENTITY::IS_ENTITY_DEAD(iVar2, false))
							{
								if (ENTITY::IS_ENTITY_IN_AIR(iVar2) || ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2), -1, false)))
								{
									iLocal_206 = 1;
								}
							}
						}
					}
					else if (ENTITY::IS_ENTITY_A_PED(iVar2))
					{
						iLocal_202 = MISC::GET_GAME_TIMER() + 1000;
						if (!PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2)))
						{
							bLocal_209 = true;
						}
						else
						{
							bLocal_209 = false;
						}
					}
				}
			}
			iVar1++;
		}
		bVar4 = false;
		switch (iLocal_193)
		{
			case 0:
				if (Local_198[0 /*3*/][0] < 5f)
				{
					if ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 5 && (MISC::GET_GAME_TIMER() - iLocal_201) > 30000) && !__LIB_9__::func_603())
					{
						iLocal_201 = MISC::GET_GAME_TIMER();
						RECORDING::RECORD_GREATEST_MOMENT(0, -5000, 8000);
					}
				}
				Local_198[0 /*3*/][0] = SYSTEM::TO_FLOAT(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()));
				iLocal_193 = 1;
				break;
			case 1:
				func_1442(1, 0);
				if ((Local_198[1 /*3*/][1] - Local_198[1 /*3*/][0]) > 1f)
				{
					if (iLocal_199 == -1)
					{
						fLocal_203 = Local_198[1 /*3*/][1];
						iLocal_199 = MISC::GET_GAME_TIMER();
					}
					if ((Local_198[1 /*3*/][1] - Local_198[1 /*3*/][0]) >= 4f)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_201) > 30000)
						{
							iLocal_201 = MISC::GET_GAME_TIMER();
							RECORDING::RECORD_GREATEST_MOMENT(1, -6000, 12000);
						}
						iLocal_199 = -1;
						Local_198[1 /*3*/][0] = Local_198[1 /*3*/][1];
					}
					if (iLocal_199 >= 0)
					{
						if (Local_198[1 /*3*/][1] > fLocal_203)
						{
							fLocal_203 = Local_198[1 /*3*/][1];
							if ((MISC::GET_GAME_TIMER() - iLocal_199) > 2000)
							{
								iLocal_199 = (MISC::GET_GAME_TIMER() - 2000);
							}
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_199) > 4000)
						{
							iLocal_199 = -1;
							Local_198[1 /*3*/][0] = Local_198[1 /*3*/][1];
						}
					}
				}
				iLocal_193 = 2;
				break;
			case 2:
				func_1442(2, 0);
				if ((Local_198[2 /*3*/][1] - Local_198[2 /*3*/][0]) > 0f)
				{
					if (iLocal_205)
					{
						if (iLocal_206)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_201) > 30000)
							{
								iLocal_201 = MISC::GET_GAME_TIMER();
								RECORDING::RECORD_GREATEST_MOMENT(2, -8000, 12000);
							}
						}
						iLocal_206 = 0;
						iLocal_205 = 0;
						Local_198[2 /*3*/][0] = Local_198[2 /*3*/][1];
					}
				}
				iLocal_193 = 11;
				break;
			case 11:
				if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 0)
				{
					if (Local_198[11 /*3*/][0] == 0f)
					{
						Local_198[11 /*3*/][1] = 100f;
						Local_198[11 /*3*/][0] = 100f;
					}
				}
				else if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1)
				{
					func_1442(11, 0);
					if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID()) < Local_198[11 /*3*/][0])
					{
						Local_198[11 /*3*/][0] = ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID());
						iLocal_201 = MISC::GET_GAME_TIMER();
						iLocal_208 = 0;
					}
				}
				else if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 3)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_201) < 10000)
							{
								if (iLocal_208 == 0)
								{
									Global_113386.f_18967.f_2 = Local_198[11 /*3*/][0];
									RECORDING::RECORD_GREATEST_MOMENT(11, -7000, 10000);
									iLocal_208 = 1;
								}
							}
							else
							{
								Local_198[11 /*3*/][0] = Global_113386.f_18967.f_2;
							}
						}
					}
					else
					{
						Local_198[11 /*3*/][0] = Global_113386.f_18967.f_2;
					}
				}
				iLocal_193 = 8;
				break;
			case 8:
				func_1442(8, 0);
				if ((Local_198[8 /*3*/][1] - Local_198[8 /*3*/][0]) > 0f)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_201) > 30000)
					{
						iLocal_201 = MISC::GET_GAME_TIMER();
						RECORDING::RECORD_GREATEST_MOMENT(8, -3000, 8000);
					}
					Local_198[8 /*3*/][0] = Local_198[8 /*3*/][1];
				}
				iLocal_193 = 0;
				break;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("golf")) > 0)
		{
			switch (iLocal_194)
			{
				case 14:
					if (__LIB_29__::func_272(64))
					{
						if (Local_198[14 /*3*/][1] == 0f)
						{
							RECORDING::RECORD_GREATEST_MOMENT(14, -15000, 18000);
							iLocal_201 = MISC::GET_GAME_TIMER();
							Local_198[14 /*3*/][1] = 1f;
						}
					}
					else
					{
						Local_198[14 /*3*/][1] = 0f;
					}
					break;
			}
		}
		else if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_210 == 0)
			{
				func_1442(5, 1);
				func_1442(7, 1);
				func_1442(9, 1);
				func_1442(6, 1);
				iLocal_210 = 1;
			}
			if (iLocal_211 == 0)
			{
				func_1442(4, 1);
				func_1442(10, 1);
				iLocal_211 = 1;
			}
			switch (iLocal_195)
			{
				case 3:
					func_1442(3, 0);
					if ((Local_198[3 /*3*/][1] - Local_198[3 /*3*/][0]) > 0f)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_201) > 30000)
						{
							if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar7, false))
							{
								if ((iVar7 == joaat("WEAPON_SNIPERRIFLE") || iVar7 == joaat("WEAPON_HEAVYSNIPER")) || iVar7 == joaat("WEAPON_MARKSMANRIFLE"))
								{
									RECORDING::RECORD_GREATEST_MOMENT(3, -4000, 8000);
									iLocal_201 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					Local_198[3 /*3*/][0] = Local_198[3 /*3*/][1];
					iLocal_195 = 12;
					break;
				case 12:
					if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						iVar5 = PED::GET_PED_SOURCE_OF_DEATH(PLAYER::PLAYER_PED_ID());
						if (ENTITY::IS_ENTITY_A_PED(iVar5))
						{
							iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5);
							if (!ENTITY::IS_ENTITY_DEAD(iVar6, false))
							{
								if ((PED::GET_PED_TYPE(iVar6) == 28 && (IntToFloat(MISC::GET_GAME_TIMER()) - Local_198[12 /*3*/][1]) > 60000f) && (MISC::GET_GAME_TIMER() - iLocal_201) > 30000)
								{
									RECORDING::RECORD_GREATEST_MOMENT(12, -8000, 12000);
									iLocal_201 = MISC::GET_GAME_TIMER();
									Local_198[12 /*3*/][1] = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
								}
							}
						}
					}
					iLocal_195 = 3;
					break;
			}
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				bVar4 = true;
				if (iLocal_210 == 0)
				{
					func_1442(5, 1);
					func_1442(7, 1);
					func_1442(9, 1);
					func_1442(6, 1);
					iLocal_210 = 1;
				}
				iLocal_211 = 0;
				switch (iLocal_196)
				{
					case 10:
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							if (ENTITY::IS_ENTITY_UPSIDEDOWN(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) < 30f)
								{
									if (Local_198[10 /*3*/][1] == 0f)
									{
										Local_198[10 /*3*/][1] = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
										Local_198[10 /*3*/][0] = 3000f;
									}
									if ((IntToFloat(MISC::GET_GAME_TIMER()) - Local_198[10 /*3*/][1]) > Local_198[10 /*3*/][0] && (MISC::GET_GAME_TIMER() - iLocal_201) > 30000)
									{
										Local_198[10 /*3*/][0] = (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) - Local_198[10 /*3*/][1]);
										RECORDING::RECORD_GREATEST_MOMENT(10, -5000, 8000);
										Local_198[10 /*3*/][1] = 0f;
										iLocal_201 = MISC::GET_GAME_TIMER();
									}
								}
								else
								{
									Local_198[10 /*3*/][1] = 0f;
								}
							}
							else
							{
								Local_198[10 /*3*/][1] = 0f;
							}
						}
						iLocal_196 = 4;
						break;
					case 4:
						func_1442(4, 0);
						if (iLocal_204)
						{
							Local_198[4 /*3*/][0] = Local_198[4 /*3*/][1];
						}
						if ((Local_198[4 /*3*/][1] - Local_198[4 /*3*/][0]) > 0f && MISC::GET_GAME_TIMER() < iLocal_202)
						{
							iVar8 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							if (((MISC::GET_GAME_TIMER() - iLocal_201) > 30000 && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar8, false)) && !bLocal_209)
							{
								RECORDING::RECORD_GREATEST_MOMENT(4, -3000, 8000);
								iLocal_201 = MISC::GET_GAME_TIMER();
							}
							Local_198[4 /*3*/][0] = Local_198[4 /*3*/][1];
						}
						iLocal_196 = 10;
						iLocal_204 = 0;
						break;
				}
			}
			else
			{
				if (iLocal_211 == 0)
				{
					func_1442(4, 1);
					func_1442(10, 1);
					iLocal_211 = 1;
				}
				iLocal_210 = 0;
				switch (iLocal_197)
				{
					case 5:
						func_1442(5, 0);
						if ((Local_198[5 /*3*/][0] - Local_198[5 /*3*/][1]) != 0f && (MISC::GET_GAME_TIMER() - iLocal_201) > 30000)
						{
							RECORDING::RECORD_GREATEST_MOMENT(5, -9000, 12000);
							iLocal_201 = MISC::GET_GAME_TIMER();
						}
						Local_198[5 /*3*/][0] = Local_198[5 /*3*/][1];
						iLocal_197 = 7;
						break;
					case 7:
						func_1442(7, 0);
						if ((Local_198[7 /*3*/][0] - Local_198[7 /*3*/][1]) != 0f && (MISC::GET_GAME_TIMER() - iLocal_201) > 30000)
						{
							RECORDING::RECORD_GREATEST_MOMENT(7, -6000, 8000);
							iLocal_201 = MISC::GET_GAME_TIMER();
						}
						Local_198[7 /*3*/][0] = Local_198[7 /*3*/][1];
						iLocal_197 = 9;
						break;
					case 9:
						func_1442(9, 0);
						if ((Local_198[9 /*3*/][1] - Local_198[9 /*3*/][0]) > 0f && (MISC::GET_GAME_TIMER() - iLocal_201) > 30000)
						{
							iLocal_201 = MISC::GET_GAME_TIMER();
							RECORDING::RECORD_GREATEST_MOMENT(9, -5000, 8000);
						}
						Local_198[9 /*3*/][0] = Local_198[9 /*3*/][1];
						iLocal_197 = 6;
						break;
					case 6:
						func_1442(6, 0);
						if ((Local_198[6 /*3*/][1] - Local_198[6 /*3*/][0]) > 1f)
						{
							if (iLocal_200 == -1)
							{
								iLocal_200 = MISC::GET_GAME_TIMER();
							}
							if ((Local_198[6 /*3*/][1] - Local_198[6 /*3*/][0]) >= 8f)
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_201) > 30000 && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 22.8f)
								{
									iLocal_201 = MISC::GET_GAME_TIMER();
									RECORDING::RECORD_GREATEST_MOMENT(6, -4000, 8000);
								}
								iLocal_200 = -1;
								Local_198[6 /*3*/][0] = Local_198[6 /*3*/][1];
							}
							if (iLocal_200 >= 0)
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_200) > 6000)
								{
									iLocal_200 = -1;
									Local_198[6 /*3*/][0] = Local_198[6 /*3*/][1];
								}
							}
						}
						iLocal_197 = 5;
						break;
					}
				}
		}
		if (!bVar4)
		{
			iLocal_204 = 1;
		}
	}
}

void func_1442(int iParam0, bool bParam1)//Position - 0xA59A9
{
	switch (iParam0)
	{
		case 0:
			Local_198[iParam0 /*3*/][1] = 0f;
			break;
		case 1:
			Local_198[iParam0 /*3*/][1] = SYSTEM::TO_FLOAT(((__LIB_0__::func_554(joaat("SP0_CARS_EXPLODED")) + __LIB_0__::func_554(joaat("SP1_CARS_EXPLODED"))) + __LIB_0__::func_554(joaat("SP2_CARS_EXPLODED"))));
			break;
		case 2:
			Local_198[iParam0 /*3*/][1] = SYSTEM::TO_FLOAT(((__LIB_0__::func_554(joaat("SP0_HELIS_EXPLODED")) + __LIB_0__::func_554(joaat("SP1_HELIS_EXPLODED"))) + __LIB_0__::func_554(joaat("SP2_HELIS_EXPLODED"))));
			break;
		case 11:
			Local_198[iParam0 /*3*/][1] = Global_113386.f_18967.f_2;
			break;
		case 8:
			Local_198[iParam0 /*3*/][1] = SYSTEM::TO_FLOAT(((__LIB_0__::func_554(joaat("SP0_THROWNTHROUGH_WINDSCREEN")) + __LIB_0__::func_554(joaat("SP1_THROWNTHROUGH_WINDSCREEN"))) + __LIB_0__::func_554(joaat("SP2_THROWNTHROUGH_WINDSCREEN"))));
			break;
		case 14:
			Local_198[iParam0 /*3*/][1] = 0f;
			break;
		case 3:
			Local_198[iParam0 /*3*/][1] = SYSTEM::TO_FLOAT(((__LIB_0__::func_554(joaat("SP0_HEADSHOTS")) + __LIB_0__::func_554(joaat("SP1_HEADSHOTS"))) + __LIB_0__::func_554(joaat("SP2_HEADSHOTS"))));
			break;
		case 12:
			Local_198[iParam0 /*3*/][1] = -60000f;
			break;
		case 10:
			Local_198[iParam0 /*3*/][1] = 0f;
			break;
		case 4:
			Local_198[iParam0 /*3*/][1] = SYSTEM::TO_FLOAT(((__LIB_0__::func_554(joaat("SP0_KILLS")) + __LIB_0__::func_554(joaat("SP1_KILLS"))) + __LIB_0__::func_554(joaat("SP2_KILLS"))));
			break;
		case 5:
			Local_198[iParam0 /*3*/][1] = SYSTEM::TO_FLOAT(((__LIB_0__::func_554(joaat("SP0_AIR_LAUNCHES_OVER_5S")) + __LIB_0__::func_554(joaat("SP1_AIR_LAUNCHES_OVER_5S"))) + __LIB_0__::func_554(joaat("SP2_AIR_LAUNCHES_OVER_5S"))));
			break;
		case 7:
			Local_198[iParam0 /*3*/][1] = SYSTEM::TO_FLOAT(((__LIB_0__::func_554(joaat("SP0_LONGEST_WHEELIE_TIME")) + __LIB_0__::func_554(joaat("SP1_LONGEST_WHEELIE_TIME"))) + __LIB_0__::func_554(joaat("SP2_LONGEST_WHEELIE_TIME"))));
			break;
		case 9:
			Local_198[iParam0 /*3*/][1] = SYSTEM::TO_FLOAT(((__LIB_0__::func_554(joaat("SP0_MOST_FLIPS_IN_ONE_JUMP")) + __LIB_0__::func_554(joaat("SP1_MOST_FLIPS_IN_ONE_JUMP"))) + __LIB_0__::func_554(joaat("SP2_MOST_FLIPS_IN_ONE_JUMP"))));
			break;
		case 6:
			Local_198[iParam0 /*3*/][1] = SYSTEM::TO_FLOAT(((__LIB_0__::func_554(joaat("SP0_NUMBER_NEAR_MISS")) + __LIB_0__::func_554(joaat("SP1_NUMBER_NEAR_MISS"))) + __LIB_0__::func_554(joaat("SP2_NUMBER_NEAR_MISS"))));
			break;
	}
	if (bParam1)
	{
		Local_198[iParam0 /*3*/][0] = Local_198[iParam0 /*3*/][1];
	}
}

void func_1445()//Position - 0xA5C2D
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	if (!Global_78319 && !Global_2703735.f_60)
	{
		bVar0 = __LIB_6__::func_763(0);
		bVar2 = false;
		if (bVar0 && !Global_78579)
		{
			func_1676(Global_112096);
			func_1662();
			bVar2 = true;
		}
		func_1646(bVar2);
		func_1525(bVar0);
		if (Global_112096 == 0)
		{
			if (!bVar0)
			{
				func_1522(0, 0);
				func_1521(1);
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_26[iVar1]))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Global_112096.f_26[iVar1], true)) > 22500f)
						{
							OBJECT::DELETE_OBJECT(&(Global_112096.f_26[iVar1]));
						}
					}
					iVar1++;
				}
			}
			if (__LIB_0__::func_517(Global_112096.f_35, 262144))
			{
				func_1522(0, 0);
			}
			if (!__LIB_0__::func_517(Global_113386.f_24904.f_65, 32768))
			{
				if (__LIB_0__::func_176(0))
				{
					Global_113386.f_24904.f_67 = __LIB_13__::func_95();
					__LIB_6__::func_896(&(Global_113386.f_24904.f_65), 32768);
				}
			}
			if (Global_113386.f_24904[1 /*4*/] == 1)
			{
				if (__LIB_26__::func_499() == 1)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						iVar3 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar3, false))
						{
							if (ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("taxi"))
							{
								if (ENTITY::IS_ENTITY_IN_AREA(iVar3, 878.2869f, -194.9633f, 77.59733f, 931.6304f, -147.05588f, 74.05599f, false, false, 0))
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar3, 1);
									VEHICLE::SET_VEHICLE_ALARM(iVar3, false);
									VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(iVar3, true);
								}
							}
						}
					}
				}
			}
		}
		if (__LIB_0__::func_517(Global_112096.f_35, 16))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 46 /*INPUT_TALK*/, true);
			func_1496(Global_112096.f_42);
		}
		if (__LIB_0__::func_517(Global_112096.f_35, 4096))
		{
			func_1495(Global_112096.f_216);
		}
		Global_112096++;
		if (Global_112096 >= 16)
		{
			Global_112096 = 0;
		}
	}
	else if (__LIB_0__::func_517(Global_112096.f_35, 67108864))
	{
		func_1446();
	}
}

void func_1446()//Position - 0xA5E38
{
	if (__LIB_0__::func_517(Global_112096.f_35, 16))
	{
		func_1463(Global_112096.f_42);
	}
	if (HUD::DOES_BLIP_EXIST(Global_112096.f_31))
	{
		HUD::REMOVE_BLIP(&(Global_112096.f_31));
	}
	func_1451(1, 1);
	func_1521(1);
	func_1522(0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_38[0]))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_112096.f_38[0], true, true);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_112096.f_38[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_38[1]))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_112096.f_38[1], true, true);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_112096.f_38[1]));
	}
	__LIB_7__::func_204(&(Global_112096.f_35), 2);
	__LIB_7__::func_204(&(Global_112096.f_35), 4);
	__LIB_7__::func_204(&(Global_112096.f_35), 8);
	__LIB_7__::func_204(&(Global_112096.f_35), 16777216);
	__LIB_7__::func_204(&(Global_112096.f_35), 16);
	__LIB_7__::func_204(&(Global_112096.f_35), 32);
	__LIB_7__::func_204(&(Global_112096.f_35), 64);
	__LIB_7__::func_204(&(Global_112096.f_35), 128);
	__LIB_7__::func_204(&(Global_112096.f_35), 256);
	__LIB_7__::func_204(&(Global_112096.f_35), 512);
	__LIB_7__::func_204(&(Global_112096.f_35), 1024);
	__LIB_7__::func_204(&(Global_112096.f_35), 2048);
	__LIB_7__::func_204(&(Global_112096.f_35), 4096);
	__LIB_7__::func_204(&(Global_112096.f_35), 8192);
	__LIB_7__::func_204(&(Global_112096.f_35), 16384);
	__LIB_7__::func_204(&(Global_112096.f_35), 32768);
	__LIB_7__::func_204(&(Global_112096.f_35), 65536);
	__LIB_7__::func_204(&(Global_112096.f_35), 131072);
	__LIB_7__::func_204(&(Global_112096.f_35), 262144);
	__LIB_7__::func_204(&(Global_112096.f_35), 524288);
	__LIB_7__::func_204(&(Global_112096.f_35), 1048576);
	__LIB_7__::func_204(&(Global_112096.f_35), 2097152);
	__LIB_7__::func_204(&(Global_112096.f_35), 4194304);
	__LIB_7__::func_204(&(Global_112096.f_35), 8388608);
	__LIB_7__::func_204(&(Global_112096.f_35), 16777216);
	__LIB_7__::func_204(&(Global_112096.f_35), 33554432);
	__LIB_7__::func_204(&(Global_112096.f_35), 67108864);
	__LIB_7__::func_204(&(Global_112096.f_35), 268435456);
	__LIB_7__::func_204(&(Global_112096.f_35), 536870912);
	func_1447();
	Global_112096.f_19 = 0;
}

void func_1447()//Position - 0xA6069
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_112096.f_37))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_112096.f_37));
		__LIB_0__::func_518(0);
	}
	__LIB_7__::func_204(&(Global_112096.f_35), 8);
	__LIB_7__::func_204(&(Global_112096.f_35), 16777216);
	Global_112096.f_24 = 0;
}

void func_1451(bool bParam0, bool bParam1)//Position - 0xA60E8
{
	int iVar0;
	if (Global_112096.f_23 >= 1)
	{
		switch (Global_112096.f_21)
		{
			case 1:
				func_1461(Global_112096.f_20, __LIB_30__::func_727(Global_112096.f_20, Global_112096.f_29));
				break;
			case 6:
				func_1460();
				break;
			case 3:
				func_1458(func_1459(Global_112096.f_20, Global_112096.f_29));
				break;
			case 4:
				func_1456(Global_112096.f_20, __LIB_30__::func_730(Global_112096.f_20, Global_112096.f_29));
				break;
			case 5:
				func_1452(Global_112096.f_20, func_1455(Global_112096.f_20, Global_112096.f_29));
				break;
			}
	}
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_222[iVar0]))
			{
				if (bParam1)
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_112096.f_222[iVar0], true, true);
				}
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_112096.f_222[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Global_112096.f_222[iVar0], false))
					{
						if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_112096.f_222[iVar0], true))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_112096.f_222[iVar0]));
						}
					}
					else
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_112096.f_222[iVar0]));
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_225[iVar0]))
			{
				if (bParam1)
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_112096.f_225[iVar0], true, true);
				}
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_112096.f_225[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Global_112096.f_225[iVar0], false))
					{
						if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_112096.f_225[iVar0], true))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Global_112096.f_225[iVar0]));
						}
					}
					else
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Global_112096.f_225[iVar0]));
					}
				}
			}
			iVar0++;
		}
	}
	Global_112096.f_23 = 0;
}

void func_1452(int iParam0, var uParam1)//Position - 0xA62BF
{
	uParam1 = uParam1;
	switch (iParam0)
	{
		case 11:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_1454(0));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_1453(0));
			break;
		case 12:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_1454(1));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_1453(1));
			break;
		case 13:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_1454(2));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_1453(2));
			break;
		case 14:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_1454(0));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_1453(0));
			break;
	}
}

int func_1453(int iParam0)//Position - 0xA633E
{
	switch (iParam0)
	{
		case 1:
			return joaat("felon");
			break;
		case 2:
			return joaat("feltzer2");
			break;
		case 0:
			return joaat("cavalcade2");
			break;
	}
	return 0;
}

int func_1454(int iParam0)//Position - 0xA6381
{
	switch (iParam0)
	{
		case 1:
			return joaat("G_M_Y_BallaOrig_01");
			break;
		case 2:
			return joaat("G_M_Y_Korean_01");
			break;
		case 0:
			return joaat("G_M_Y_MexGoon_02");
			break;
	}
	return 0;
}

int func_1455(int iParam0, int iParam1)//Position - 0xA63C4
{
	iParam0 = iParam0;
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

void func_1456(int iParam0, int iParam1)//Position - 0xA63F2
{
	if (iParam0 == iParam0)
	{
	}
	switch (iParam1)
	{
		case 0:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_EastSA_02"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_112096.f_234);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TAKINGS");
			Global_112096.f_234 = 0;
			break;
		case 1:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Paparazzi_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("vader"));
			break;
	}
}

void func_1458(int iParam0)//Position - 0xA64B5
{
	switch (iParam0)
	{
		case 1:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("U_M_M_JewelThief"));
			break;
		case 2:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_M_ChiGoon_02"));
			break;
		case 3:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_Y_GenHot_01"));
			break;
		case 4:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_MexGoon_03"));
			break;
		case 5:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Farmer_01"));
			break;
		case 6:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_Skater_02"));
			break;
		case 7:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_SouCent_04"));
			break;
		case 8:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_Y_BevHills_03"));
			break;
		case 0:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_Business_02"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_Business_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_Y_Beach_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("stretch"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("superd"));
			break;
	}
}

int func_1459(int iParam0, int iParam1)//Position - 0xA658A
{
	iParam0 = iParam0;
	return iParam1;
}

void func_1460()//Position - 0xA6598
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("stunt"));
}

void func_1461(int iParam0, int iParam1)//Position - 0xA65A9
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 10:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("pony2"));
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("pony2"), false);
			break;
		case 11:
		case 12:
		case 13:
		case 14:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("benson"));
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("benson"), false);
			break;
	}
}

void func_1463(int iParam0)//Position - 0xA670E
{
	if (CAM::DOES_CAM_EXIST(Global_112096.f_48))
	{
		CAM::DESTROY_CAM(Global_112096.f_48, false);
	}
	if (CAM::DOES_CAM_EXIST(Global_112096.f_49))
	{
		CAM::DESTROY_CAM(Global_112096.f_49, false);
	}
	__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
	Global_32216 = 0;
	__LIB_8__::func_770(0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	if (iParam0 == 2)
	{
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 25f);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_38[0]))
	{
		if (iParam0 == 2)
		{
			VEHICLE::DELETE_VEHICLE(&(Global_112096.f_38[0]));
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_112096.f_38[0]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_38[1]))
	{
		VEHICLE::DELETE_VEHICLE(&(Global_112096.f_38[1]));
	}
	func_1493(iParam0, 0);
	__LIB_11__::func_99(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("HUD_PROPERTY");
	STREAMING::NEW_LOAD_SCENE_STOP();
	if (STREAMING::STREAMVOL_IS_VALID(Global_112096.f_218))
	{
		STREAMING::STREAMVOL_DELETE(Global_112096.f_218);
	}
	if (INTERIOR::IS_VALID_INTERIOR(Global_112096.f_219))
	{
		if (INTERIOR::IS_INTERIOR_READY(Global_112096.f_219))
		{
			INTERIOR::UNPIN_INTERIOR(Global_112096.f_219);
		}
	}
	__LIB_7__::func_204(&(Global_112096.f_35), 16);
	__LIB_7__::func_204(&(Global_112096.f_35), 64);
	__LIB_40__::func_947(__LIB_26__::func_499(), __LIB_29__::func_865(iParam0), func_1491(iParam0));
	__LIB_0__::func_533();
	__LIB_6__::func_896(&(Global_112096.f_35), 16777216);
	Global_112096.f_33 = MISC::GET_GAME_TIMER() + 1500;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(800);
	}
}

int func_1491(int iParam0)//Position - 0xA7A95
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 2:
			iVar0 = 150000;
			break;
		case 9:
			iVar0 = 275000;
			break;
		case 10:
			iVar0 = 204000;
			break;
		case 1:
			iVar0 = 200000;
			break;
		case 4:
			iVar0 = 349000;
			break;
		case 3:
			iVar0 = 250000;
			break;
		case 0:
			iVar0 = 150000;
			break;
		case 8:
			iVar0 = 150000000;
			break;
		case 5:
			iVar0 = 10000000;
			break;
		case 6:
			iVar0 = 20000000;
			break;
		case 7:
			iVar0 = 30000000;
			break;
		case 11:
			iVar0 = 2000000;
			break;
		case 12:
			iVar0 = 750000;
			break;
		case 13:
			iVar0 = 80000;
			break;
		case 14:
			iVar0 = 600000;
			break;
	}
	return iVar0;
}

void func_1493(int iParam0, bool bParam1)//Position - 0xA7C7D
{
	int iVar0;
	iVar0 = func_1494(iParam0, bParam1);
	if (iVar0 != 0)
	{
		__LIB_0__::func_71(iVar0, 0);
	}
}

int func_1494(int iParam0, bool bParam1)//Position - 0xA7C9C
{
	switch (iParam0)
	{
		case 2:
			if (!bParam1)
			{
				return 19;
			}
			break;
		case 3:
			if (bParam1)
			{
				return 95;
			}
			break;
		case 0:
			if (bParam1)
			{
				return 18;
			}
			break;
	}
	return 0;
}

void func_1495(int iParam0)//Position - 0xA7CE6
{
	switch (iParam0)
	{
		case 3:
			SCRIPT::REQUEST_SCRIPT("ambient_Sonar");
			if (SCRIPT::HAS_SCRIPT_LOADED("ambient_Sonar"))
			{
				SYSTEM::START_NEW_SCRIPT("ambient_Sonar", 1424);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("ambient_Sonar");
				__LIB_7__::func_204(&(Global_112096.f_35), 4096);
			}
			break;
		case 0:
			if (Global_113386.f_19973.f_3 < 5)
			{
				Global_113386.f_19973.f_3 = 5;
			}
			SCRIPT::REQUEST_SCRIPT("controller_Towing");
			if (SCRIPT::HAS_SCRIPT_LOADED("controller_Towing"))
			{
				SYSTEM::START_NEW_SCRIPT("controller_Towing", 1424);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("controller_Towing");
				__LIB_7__::func_204(&(Global_112096.f_35), 4096);
			}
			break;
	}
}

void func_1496(int iParam0)//Position - 0xA7D8E
{
	int iVar0;
	__LIB_10__::func_115();
	if (iParam0 == 0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112096.f_38[0], false))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(Global_112096.f_38[0], true);
		}
	}
	if (!__LIB_0__::func_517(Global_112096.f_35, 32))
	{
		__LIB_8__::func_770(1);
		HUD::CLEAR_HELP(true);
		HUD::CLEAR_PRINTS();
		Global_32216 = 1;
		__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
		__LIB_11__::func_99(1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		if (!__LIB_0__::func_517(Global_112096.f_35, 2097152))
		{
			func_1516();
		}
		Global_112096.f_45 = 0;
		Global_112096.f_46 = 0;
		Global_112096.f_47 = 0;
		Global_112096.f_43 = MISC::GET_GAME_TIMER();
		if (!__LIB_0__::func_517(Global_112096.f_35, 2097152))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
			MISC::CLEAR_AREA_OF_PEDS(func_1515(iParam0), 2f, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, 0);
			FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 20f);
			if (iParam0 == 0)
			{
				func_1508(404.3845f, -1635.448f, 28.29194f, 397.61618f, -1630.0348f, 33.43343f, 4.5f, 404.29468f, -1629.5078f, 28.29194f, -127.8f, 1, 0, 1, 0, 0);
				Global_112096.f_38[0] = VEHICLE::CREATE_VEHICLE(joaat("towtruck"), 401.6467f, -1633.3079f, 29.25f, -128.47f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Global_112096.f_38[0], 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_112096.f_38[0], 5f);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_112096.f_38[0]));
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_1515(iParam0), true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_1507(iParam0));
			func_1505(iParam0, &(Global_112096.f_45));
			func_1502(iParam0, &(Global_112096.f_46));
			func_1521(1);
			__LIB_7__::func_204(&(Global_112096.f_35), 64);
			if (iParam0 == 8)
			{
				Global_112096.f_218 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-1232.2203f, -22.753672f, 47.196873f, __LIB_2__::func_162(5.359231f, 0f, 52.316067f), 100f, 12, 127);
			}
			else if (iParam0 == 4)
			{
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(1175.7f, 2639.3f, 38.1f, 20f, 0);
				Global_112096.f_219 = INTERIOR::GET_INTERIOR_AT_COORDS(1175.7f, 2639.3f, 38.1f);
				INTERIOR::PIN_INTERIOR_IN_MEMORY(Global_112096.f_219);
			}
		}
		else
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Global_112096.f_41, "Oscar", 2, joaat("CSB_Oscar"), 0);
			CUTSCENE::START_CUTSCENE(2048);
			__LIB_6__::func_896(&(Global_112096.f_35), 64);
			__LIB_7__::func_204(&(Global_112096.f_35), 128);
		}
		__LIB_7__::func_204(&(Global_112096.f_35), 256);
		HUD::REQUEST_ADDITIONAL_TEXT("PROPR", 3);
		__LIB_6__::func_896(&(Global_112096.f_35), 32);
	}
	if (!__LIB_0__::func_517(Global_112096.f_35, 256))
	{
		if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_PROPERTY", false, -1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, func_1500(iParam0), "HUD_PROPERTY_SOUNDSET", true);
			__LIB_6__::func_896(&(Global_112096.f_35), 256);
		}
	}
	if (!__LIB_0__::func_517(Global_112096.f_35, 64))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (Global_112096.f_46 < func_1499(iParam0))
			{
				func_1502(iParam0, &(Global_112096.f_46));
			}
		}
		if (__LIB_0__::func_404() && MISC::GET_GAME_TIMER() >= Global_112096.f_43 + 1000)
		{
			CAM::DO_SCREEN_FADE_OUT(800);
			while (!CAM::IS_SCREEN_FADED_OUT())
			{
				SYSTEM::WAIT(0);
			}
			func_1463(iParam0);
		}
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_repeat_controller")) > 0)
		{
			func_1463(iParam0);
		}
		else
		{
			if (!Global_112096.f_47)
			{
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					if (MISC::GET_GAME_TIMER() >= (Global_112096.f_44 - 300))
					{
						if (Global_112096.f_45 >= func_1497(iParam0))
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							Global_112096.f_47 = 1;
						}
					}
				}
			}
			if (MISC::GET_GAME_TIMER() >= Global_112096.f_44)
			{
				if (Global_112096.f_45 < func_1497(iParam0))
				{
					func_1505(iParam0, &(Global_112096.f_45));
					STREAMING::NEW_LOAD_SCENE_STOP();
					if (STREAMING::STREAMVOL_IS_VALID(Global_112096.f_218))
					{
						STREAMING::STREAMVOL_DELETE(Global_112096.f_218);
					}
				}
				else
				{
					func_1463(iParam0);
				}
			}
		}
	}
	else
	{
		if (!__LIB_0__::func_517(Global_112096.f_35, 128))
		{
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (iParam0 == 2)
				{
					iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						if (ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("cuban800"))
						{
							func_1508(2139.966f, 4771.064f, 40.04f, 2127.725f, 4795.483f, 44.119f, 25f, 2148.302f, 4808.0923f, 40.1944f, 116.6f, 1, 0, 1, 0, 0);
							func_1508(2153.3594f, 4795.989f, 40.18427f, 2147.1313f, 4800.276f, 44.07146f, 5f, 2148.302f, 4808.0923f, 40.1944f, 116.6f, 1, 0, 1, 0, 0);
						}
					}
					MISC::CLEAR_AREA_OF_VEHICLES(2136.133f, 4780.5635f, 39.9702f, 8f, false, false, false, false, false, false, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(2136.133f, 4780.5635f, 39.9702f, 100f, 0);
					FIRE::STOP_FIRE_IN_RANGE(2136.133f, 4780.5635f, 39.9702f, 100f);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(2136.133f, 4780.5635f, 39.9702f, 20f);
					Global_112096.f_38[0] = VEHICLE::CREATE_VEHICLE(joaat("cuban800"), 2136.133f, 4780.5635f, 39.9702f, 25.29f, true, true, false);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_112096.f_38[0], 5f);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Global_112096.f_38[0], 2);
					ENTITY::FREEZE_ENTITY_POSITION(Global_112096.f_38[0], true);
					Global_112096.f_38[1] = VEHICLE::CREATE_VEHICLE(joaat("dune"), 2149.73f, 4798.49f, 40.57f, 55.47f, true, true, false);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_112096.f_38[1], 5f);
				}
				func_1521(0);
				func_1516();
				func_1522(1, 0);
				__LIB_6__::func_896(&(Global_112096.f_35), 128);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Global_112096.f_41))
		{
			if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Oscar", 0)))
			{
				Global_112096.f_41 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Oscar", 0));
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
		{
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Oscar", 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_41))
			{
				PED::DELETE_PED(&(Global_112096.f_41));
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
		{
			while (CAM::IS_SCREEN_FADING_OUT())
			{
				SYSTEM::WAIT(0);
			}
			if (iParam0 == 2)
			{
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
			}
			func_1505(iParam0, &(Global_112096.f_45));
			func_1502(iParam0, &(Global_112096.f_46));
			__LIB_7__::func_204(&(Global_112096.f_35), 64);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_repeat_controller")) > 0)
		{
			CUTSCENE::STOP_CUTSCENE(false);
			func_1463(iParam0);
		}
	}
}

int func_1497(int iParam0)//Position - 0xA8480
{
	switch (iParam0)
	{
		case 2:
		case 3:
			return 3;
			break;
		case 10:
		case 9:
		case 4:
		case 1:
		case 0:
		case 8:
		case 5:
		case 6:
		case 7:
		case 11:
		case 12:
		case 13:
		case 14:
			return 2;
			break;
	}
	return 1;
}

int func_1499(int iParam0)//Position - 0xA852A
{
	switch (iParam0)
	{
		case 2:
		case 10:
		case 9:
		case 4:
		case 1:
		case 3:
		case 0:
		case 5:
		case 6:
		case 7:
		case 11:
		case 12:
		case 13:
		case 14:
			return 3;
			break;
		case 8:
			return 2;
			break;
	}
	return 1;
}

char* func_1500(int iParam0)//Position - 0xA85A2
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 7:
		case 8:
		case 11:
			return "PROPERTY_PURCHASE_LARGE";
			break;
		case 0:
		case 1:
		case 2:
		case 9:
		case 13:
			return "PROPERTY_PURCHASE_SMALL";
			break;
		default:
			return "PROPERTY_PURCHASE_MEDIUM";
			break;
	}
	return "PROPERTY_PURCHASE_MEDIUM";
}

void func_1502(int iParam0, var uParam1)//Position - 0xA8640
{
	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
	{
		if (MISC::GET_GAME_TIMER() >= Global_112096.f_43 + 10)
		{
			__LIB_0__::func_151(func_1504(iParam0, *uParam1), func_1503(iParam0, *uParam1));
			*uParam1++;
		}
	}
}

int func_1503(int iParam0, int iParam1)//Position - 0xA867D
{
	switch (iParam0)
	{
		case 14:
		case 11:
		case 12:
		case 13:
		case 5:
		case 6:
		case 7:
		case 10:
		case 0:
			switch (iParam1)
			{
				case 0:
					return 7000;
					break;
				case 1:
					return 6000;
					break;
				case 2:
					return 7000;
					break;
			}
			break;
		case 1:
		case 4:
		case 9:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return 7000;
					break;
				case 1:
					return 7000;
					break;
				case 2:
					return 7000;
					break;
			}
			break;
		case 8:
			return 7000;
			break;
	}
	return 10000;
}

char* func_1504(int iParam0, int iParam1)//Position - 0xA8760
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return "PROPR_HELP_TRAF";
					break;
				case 1:
					return "PROPR_HELP_TRAF2";
					break;
				case 2:
					return "PROPR_HELP_TRAF3";
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return "PROPR_HELP_WEED";
					break;
				case 1:
					return "PROPR_HELP_WEED2";
					break;
				case 2:
					return "PROPR_HELP_MANH";
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return "PROPR_HELP_CSCR";
					break;
				case 1:
					return "PROPR_HELP_CSCR2";
					break;
				case 2:
					return "PROPR_HELP_MANH";
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return "PROPR_HELP_CMSH";
					break;
				case 1:
					return "PROPR_HELP_CMSH2";
					break;
				case 2:
					return "PROPR_HELP_CMSH3";
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return "PROPR_HELP_TAXI";
					break;
				case 1:
					return "PROPR_HELP_TAXI2";
					break;
				case 2:
					return "PROPR_HELP_MANH";
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PROPR_HELP_SOCO";
					break;
				case 1:
					return "PROPR_HELP_SOCO2";
					break;
				case 2:
					return "PROPR_HELP_SOCO3";
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					return "PROPR_HELP_TOWI";
					break;
				case 1:
					return "PROPR_HELP_TOWI2";
					break;
				case 2:
					return "PROPR_HELP_TOWI3";
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return "PROPR_HELP_GOLF";
					break;
				case 1:
					return "PROPR_HELP_GOLF2";
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return "PROPR_HELP_CINV";
					break;
				case 1:
					return "PROPR_HELP_CINV2";
					break;
				case 2:
					return "PROPR_HELP_MANH";
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return "PROPR_HELP_CIND";
					break;
				case 1:
					return "PROPR_HELP_CIND2";
					break;
				case 2:
					return "PROPR_HELP_MANH";
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return "PROPR_HELP_CINM";
					break;
				case 1:
					return "PROPR_HELP_CINM2";
					break;
				case 2:
					return "PROPR_HELP_MANH";
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return "PROPR_HELP_BARTE";
					break;
				case 1:
					return "PROPR_HELP_BARTE2";
					break;
				case 2:
					return "PROPR_HELP_MANH";
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return "PROPR_HELP_BARPI";
					break;
				case 1:
					return "PROPR_HELP_BARPI2";
					break;
				case 2:
					return "PROPR_HELP_MANH";
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return "PROPR_HELP_BARHE";
					break;
				case 1:
					return "PROPR_HELP_BARHE2";
					break;
				case 2:
					return "PROPR_HELP_MANH";
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return "PROPR_HELP_BARHO";
					break;
				case 1:
					return "PROPR_HELP_BARHO2";
					break;
				case 2:
					return "PROPR_HELP_MANH";
					break;
			}
			break;
	}
	return "error";
}

void func_1505(int iParam0, var uParam1)//Position - 0xA8B50
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	func_1506(iParam0, *uParam1, &Var0, &Var1, &fVar2, &Var3, &Var4, &fVar5, &iVar6, &iVar7, &iVar8, &iVar9);
	if (CAM::DOES_CAM_EXIST(Global_112096.f_48))
	{
		CAM::DESTROY_CAM(Global_112096.f_48, false);
	}
	Global_112096.f_48 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
	if (CAM::DOES_CAM_EXIST(Global_112096.f_49))
	{
		CAM::DESTROY_CAM(Global_112096.f_49, false);
	}
	Global_112096.f_49 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
	CAM::SET_CAM_COORD(Global_112096.f_48, Var0);
	CAM::SET_CAM_ROT(Global_112096.f_48, Var1, 2);
	CAM::SET_CAM_FOV(Global_112096.f_48, fVar2);
	CAM::SET_CAM_COORD(Global_112096.f_49, Var3);
	CAM::SET_CAM_ROT(Global_112096.f_49, Var4, 2);
	CAM::SET_CAM_FOV(Global_112096.f_49, fVar5);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(Global_112096.f_49, Global_112096.f_48, iVar6, iVar8, iVar9);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	CAM::SHAKE_CAM(Global_112096.f_48, "HAND_SHAKE", 0.25f);
	Global_112096.f_44 = (MISC::GET_GAME_TIMER() + iVar7);
	*uParam1++;
}

void func_1506(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)//Position - 0xA8C62
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2144.5f, 4817.2f, 41.8f };
					*uParam3 = { 4f, 0f, 159.1f };
					*uParam4 = 29.9f;
					*uParam5 = { 2144.1f, 4817.3f, 41.8f };
					*uParam6 = { 4f, 0f, 159.1f };
					*uParam7 = 29.9f;
					*uParam8 = 7000;
					*uParam9 = 7000;
					*uParam10 = 2;
					*uParam11 = 0;
					break;
				case 1:
					*uParam2 = { 2135.2f, 4797f, 41f };
					*uParam3 = { 2.6f, 0f, 147.5f };
					*uParam4 = 33.6f;
					*uParam5 = { 2135.2f, 4797f, 41f };
					*uParam6 = { 2.6f, 0f, 177.3f };
					*uParam7 = 33.6f;
					*uParam8 = 7000;
					*uParam9 = 7000;
					*uParam10 = 3;
					*uParam11 = 3;
					break;
				case 2:
					*uParam2 = { 2152.5774f, 4804.0024f, 41.511604f };
					*uParam3 = { 1.33822f, -2.5E-05f, 146.94641f };
					*uParam4 = 33.6f;
					*uParam5 = { 2152.6086f, 4803.964f, 41.369118f };
					*uParam6 = { 0.19239f, -2.5E-05f, 147.10983f };
					*uParam7 = 33.6f;
					*uParam8 = 7000;
					*uParam9 = 7000;
					*uParam10 = 3;
					*uParam11 = 3;
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1179f, -1573.6f, 5f };
					*uParam3 = { 26.9f, 0f, -85.8f };
					*uParam4 = 40f;
					*uParam5 = { -1179f, -1573.6f, 5f };
					*uParam6 = { 3.6f, 0f, -85.8f };
					*uParam7 = 40f;
					*uParam8 = 7000;
					*uParam9 = 7000;
					*uParam10 = 2;
					*uParam11 = 1;
					break;
				case 1:
					if (__LIB_0__::func_196(__LIB_13__::func_95()) >= 9 && __LIB_0__::func_196(__LIB_13__::func_95()) <= 17)
					{
						*uParam2 = { -1173.6f, -1574.1f, 4.8f };
						*uParam3 = { 0.3f, 0f, -31.2f };
						*uParam4 = 40f;
						*uParam5 = { -1173.3f, -1574.2f, 4.8f };
						*uParam6 = { 0.3f, 0f, -34.5f };
						*uParam7 = 40f;
					}
					else
					{
						*uParam2 = { -1178.8439f, -1594.6912f, 4.659654f };
						*uParam3 = { 6.171611f, -0.059865f, -15.387971f };
						*uParam4 = 34.478004f;
						*uParam5 = { -1178.2212f, -1595.1124f, 4.628079f };
						*uParam6 = { 4.898221f, -0.059865f, -14.482724f };
						*uParam7 = 34.478004f;
					}
					*uParam8 = 13000;
					*uParam9 = 13000;
					*uParam10 = 0;
					*uParam11 = 0;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1570.199f, -2208.9915f, 79.814644f };
					*uParam3 = { 2.059314f, 0f, 33.527603f };
					*uParam4 = 39.708244f;
					*uParam5 = { 1569.8584f, -2199.8218f, 88.119286f };
					*uParam6 = { -1.668163f, 0f, 36.77327f };
					*uParam7 = 39.708244f;
					*uParam8 = 21000;
					*uParam9 = 7000;
					*uParam10 = 2;
					*uParam11 = 0;
					break;
				case 1:
					*uParam2 = { 1542.1124f, -2104.84f, 77.53857f };
					*uParam3 = { -2.293454f, 0f, 144.15247f };
					*uParam4 = 35.918034f;
					*uParam5 = { 1540.7041f, -2105.141f, 77.49559f };
					*uParam6 = { -1.205724f, 0f, 140.67577f };
					*uParam7 = 35.918034f;
					*uParam8 = 14000;
					*uParam9 = 14000;
					*uParam10 = 0;
					*uParam11 = 0;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1197.0616f, 2679.4482f, 39.215f };
					*uParam3 = { 2.09636f, -0.060617f, 152.33342f };
					*uParam4 = 37.221195f;
					*uParam5 = { 1195.604f, 2676.084f, 39.3348f };
					*uParam6 = { 0.201093f, -0.060612f, 152.86856f };
					*uParam7 = 37.221195f;
					*uParam8 = 10500;
					*uParam9 = 7000;
					*uParam10 = 2;
					*uParam11 = 0;
					break;
				case 1:
					*uParam2 = { 1180.3562f, 2645.0679f, 38.19546f };
					*uParam3 = { -0.360282f, -0.060618f, 139.27036f };
					*uParam4 = 42.9f;
					*uParam5 = { 1178.9906f, 2643.8623f, 38.18478f };
					*uParam6 = { -0.360282f, -0.060608f, 145.80743f };
					*uParam7 = 42.9f;
					*uParam8 = 14000;
					*uParam9 = 14000;
					*uParam10 = 0;
					*uParam11 = 0;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 912.14136f, -144.13672f, 76.251495f };
					*uParam3 = { 18.068947f, 0f, 148.57065f };
					*uParam4 = 53.540928f;
					*uParam5 = { 911.6834f, -144.88623f, 76.538055f };
					*uParam6 = { 15.969147f, 0f, 148.57065f };
					*uParam7 = 53.540928f;
					*uParam8 = 7000;
					*uParam9 = 7000;
					*uParam10 = 2;
					*uParam11 = 0;
					break;
				case 1:
					*uParam2 = { 922.43225f, -181.60172f, 74.519295f };
					*uParam3 = { 6.678218f, 0f, 71.903885f };
					*uParam4 = 39.81039f;
					*uParam5 = { 920.13336f, -185.07265f, 74.615295f };
					*uParam6 = { 4.337803f, 0f, 63.85515f };
					*uParam7 = 39.81039f;
					*uParam8 = 14000;
					*uParam9 = 14000;
					*uParam10 = 0;
					*uParam11 = 0;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1591.7255f, 5229.6367f, 4.933816f };
					*uParam3 = { 3.142932f, 0f, 165.00168f };
					*uParam4 = 37.91299f;
					*uParam5 = { -1592.9299f, 5229.475f, 4.95943f };
					*uParam6 = { 1.375998f, 0f, 166.24324f };
					*uParam7 = 37.91299f;
					*uParam8 = 7000;
					*uParam9 = 7000;
					*uParam10 = 2;
					*uParam11 = 0;
					break;
				case 1:
					*uParam2 = { -1606.4f, 5269.9f, 4.6f };
					*uParam3 = { 2.9f, -0.1f, -179.2f };
					*uParam4 = 37.234703f;
					*uParam5 = { -1606f, 5270f, 4.5f };
					*uParam6 = { -4.4f, -0.1f, -162.1f };
					*uParam7 = 37.234703f;
					*uParam8 = 7000;
					*uParam9 = 7000;
					*uParam10 = 0;
					*uParam11 = 0;
					break;
				case 2:
					*uParam2 = { -1596.6f, 5261.2f, -1.6f };
					*uParam3 = { 9.6f, 0f, 174.2f };
					*uParam4 = 37.234703f;
					*uParam5 = { -1596.4f, 5260.7f, -1.5f };
					*uParam6 = { 7.6f, 0f, 173.4f };
					*uParam7 = 37.234703f;
					*uParam8 = 7000;
					*uParam9 = 7000;
					*uParam10 = 0;
					*uParam11 = 0;
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 421.9979f, -1621.6815f, 29.605589f };
					*uParam3 = { 1.74738f, 0f, 101.34683f };
					*uParam4 = 39.30701f;
					*uParam5 = { 420.26697f, -1620.4962f, 29.645708f };
					*uParam6 = { 2.741723f, 0f, 113.30628f };
					*uParam7 = 39.30701f;
					*uParam8 = 7000;
					*uParam9 = 7000;
					*uParam10 = 2;
					*uParam11 = 0;
					break;
				case 1:
					*uParam2 = { 403.21182f, -1639.4054f, 29.650751f };
					*uParam3 = { 0.698972f, 0f, 1.880809f };
					*uParam4 = 39.30701f;
					*uParam5 = { 404.08112f, -1640.5452f, 29.636583f };
					*uParam6 = { -1.204437f, 0f, -0.188429f };
					*uParam7 = 39.30701f;
					*uParam8 = 13000;
					*uParam9 = 13000;
					*uParam10 = 0;
					*uParam11 = 0;
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1418.6703f, 50.412415f, 55.50515f };
					*uParam3 = { 7.033136f, 0f, -82.49706f };
					*uParam4 = 50f;
					*uParam5 = { -1417.5236f, 50.625343f, 58.79437f };
					*uParam6 = { 1.384808f, 0f, -83.45099f };
					*uParam7 = 50f;
					*uParam8 = 7000;
					*uParam9 = 7000;
					*uParam10 = 2;
					*uParam11 = 0;
					break;
				case 1:
					*uParam2 = { -1232.2203f, -22.753672f, 47.196873f };
					*uParam3 = { 5.359231f, 0f, 52.316067f };
					*uParam4 = 34.850487f;
					*uParam5 = { -1229.3318f, -18.98253f, 47.196873f };
					*uParam6 = { 5.35923f, 0f, 54.884293f };
					*uParam7 = 34.850487f;
					*uParam8 = 14000;
					*uParam9 = 7000;
					*uParam10 = 0;
					*uParam11 = 0;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 306.06607f, 176.82439f, 111.389626f };
					*uParam3 = { 17.968395f, 0f, -95.27823f };
					*uParam4 = 39.89075f;
					*uParam5 = { 306.95923f, 176.74185f, 108.623825f };
					*uParam6 = { -3.555486f, 0f, -95.27823f };
					*uParam7 = 39.89075f;
					*uParam8 = 14000;
					*uParam9 = 7000;
					*uParam10 = 2;
					*uParam11 = 0;
					break;
				case 1:
					*uParam2 = { 320.55856f, 155.13712f, 105.05087f };
					*uParam3 = { 5.14555f, 0f, -33.84472f };
					*uParam4 = 41.696613f;
					*uParam5 = { 328.5669f, 151.88455f, 105.05526f };
					*uParam6 = { 4.726644f, 0f, -16.290794f };
					*uParam7 = 41.696613f;
					*uParam8 = 13000;
					*uParam9 = 13000;
					*uParam10 = 0;
					*uParam11 = 0;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 403.88983f, -712.5283f, 31.6929f };
					*uParam3 = { 25.835075f, 0f, 86.99082f };
					*uParam4 = 40.421535f;
					*uParam5 = { 405.2582f, -712.6003f, 30.67275f };
					*uParam6 = { 24.829134f, 0f, 86.99082f };
					*uParam7 = 40.421535f;
					*uParam8 = 7000;
					*uParam9 = 7000;
					*uParam10 = 2;
					*uParam11 = 0;
					break;
				case 1:
					*uParam2 = { 414.81555f, -713.63293f, 31.105515f };
					*uParam3 = { 6.276255f, 0f, 85.791985f };
					*uParam4 = 44.031376f;
					*uParam5 = { 415.72827f, -713.0572f, 28.83153f };
					*uParam6 = { 10.793771f, 0f, 88.52138f };
					*uParam7 = 44.031376f;
					*uParam8 = 13000;
					*uParam9 = 13000;
					*uParam10 = 0;
					*uParam11 = 0;
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1446.8297f, -193.72018f, 58.58513f };
					*uParam3 = { -18.563808f, 0f, -117.764885f };
					*uParam4 = 39.885876f;
					*uParam5 = { -1446.6943f, -192.53339f, 53.51914f };
					*uParam6 = { -1.523578f, 0f, -122.91486f };
					*uParam7 = 39.885876f;
					*uParam8 = 7000;
					*uParam9 = 7000;
					*uParam10 = 2;
					*uParam11 = 0;
					break;
				case 1:
					*uParam2 = { -1412.543f, -184.39485f, 48.72923f };
					*uParam3 = { 9.945754f, 0f, 159.50824f };
					*uParam4 = 49.93913f;
					*uParam5 = { -1421.9781f, -182.70418f, 48.748867f };
					*uParam6 = { 10.848495f, 0f, -178.03429f };
					*uParam7 = 49.93913f;
					*uParam8 = 19000;
					*uParam9 = 13000;
					*uParam10 = 0;
					*uParam11 = 0;
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -545.3507f, 268.76566f, 83.1808f };
					*uParam3 = { 23.8552f, 1E-06f, 39.411045f };
					*uParam4 = 42.142265f;
					*uParam5 = { -546.02795f, 269.58994f, 83.65253f };
					*uParam6 = { 26.712852f, 1E-06f, 39.54536f };
					*uParam7 = 42.142265f;
					*uParam8 = 7000;
					*uParam9 = 7000;
					*uParam10 = 2;
					*uParam11 = 0;
					break;
				case 1:
					*uParam2 = { -548.0339f, 255.82123f, 85.222984f };
					*uParam3 = { 2.389024f, 0.141337f, 18.236391f };
					*uParam4 = 39.61079f;
					*uParam5 = { -554.22424f, 256.02908f, 85.303734f };
					*uParam6 = { 0.926027f, 0.141327f, 19.639772f };
					*uParam7 = 39.61079f;
					*uParam8 = 19000;
					*uParam9 = 13000;
					*uParam10 = 0;
					*uParam11 = 0;
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 225.96812f, 352.72577f, 116.24754f };
					*uParam3 = { -22.597023f, 0f, -169.90886f };
					*uParam4 = 37.96425f;
					*uParam5 = { 226.56873f, 350.289f, 115.20074f };
					*uParam6 = { -24.037203f, 0f, -175.11203f };
					*uParam7 = 37.96425f;
					*uParam8 = 10500;
					*uParam9 = 7000;
					*uParam10 = 2;
					*uParam11 = 0;
					break;
				case 1:
					*uParam2 = { 240.0168f, 358.6546f, 106.07225f };
					*uParam3 = { 7.502857f, 0.122835f, 145.4947f };
					*uParam4 = 35.19324f;
					*uParam5 = { 235.55148f, 361.13028f, 106.08626f };
					*uParam6 = { 8.327662f, 0.122835f, 152.58896f };
					*uParam7 = 35.19324f;
					*uParam8 = 13000;
					*uParam9 = 13000;
					*uParam10 = 0;
					*uParam11 = 0;
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -296.94028f, 6247.856f, 31.770643f };
					*uParam3 = { 17.16281f, -0.042345f, 10.145087f };
					*uParam4 = 43.42569f;
					*uParam5 = { -296.93304f, 6248.4707f, 31.97043f };
					*uParam6 = { 20.943153f, -0.042345f, 11.089791f };
					*uParam7 = 43.42569f;
					*uParam8 = 7000;
					*uParam9 = 7000;
					*uParam10 = 2;
					*uParam11 = 0;
					break;
				case 1:
					*uParam2 = { -306.02435f, 6241.386f, 32.556404f };
					*uParam3 = { 8.206894f, 0f, -11.017441f };
					*uParam4 = 39.44581f;
					*uParam5 = { -307.03146f, 6242.525f, 32.680546f };
					*uParam6 = { 6.869367f, 0f, 9.408159f };
					*uParam7 = 39.44581f;
					*uParam8 = 13000;
					*uParam9 = 13000;
					*uParam10 = 0;
					*uParam11 = 0;
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -2200.7383f, 4302.428f, 48.159374f };
					*uParam3 = { 22.893482f, -1E-06f, -139.61719f };
					*uParam4 = 42.40152f;
					*uParam5 = { -2200.344f, 4301.9673f, 48.955284f };
					*uParam6 = { 22.48805f, 0f, -138.37914f };
					*uParam7 = 42.40152f;
					*uParam8 = 7000;
					*uParam9 = 7000;
					*uParam10 = 2;
					*uParam11 = 0;
					break;
				case 1:
					*uParam2 = { -2197.7273f, 4295.051f, 49.726013f };
					*uParam3 = { -1.363194f, 0f, -164.52243f };
					*uParam4 = 42.40152f;
					*uParam5 = { -2199.8882f, 4290.5522f, 49.644714f };
					*uParam6 = { -1.342801f, 0f, -154.37715f };
					*uParam7 = 42.40152f;
					*uParam8 = 13000;
					*uParam9 = 13000;
					*uParam10 = 0;
					*uParam11 = 0;
					break;
			}
			break;
	}
}

float func_1507(int iParam0)//Position - 0xA9C32
{
	switch (iParam0)
	{
		case 10:
			return 122.4f;
			break;
		case 0:
			return -133.2f;
			break;
		case 1:
			return -125.3f;
			break;
		case 3:
			return -63.9f;
			break;
		case 4:
			return -48.2f;
			break;
		case 5:
			return 162.1f;
			break;
		case 6:
			return -88.8f;
			break;
		case 7:
			return 1.5f;
			break;
		case 8:
			return -165.8f;
			break;
		case 9:
			return -92.2f;
			break;
		case 11:
			return 174.7f;
			break;
		case 12:
			return -19.7f;
			break;
		case 13:
			return -138.7f;
			break;
		case 14:
			return 72.4f;
			break;
	}
	return ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
}

void func_1508(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0xA9D37
{
	func_1509(Param0, Param1, fParam2, Param3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

void func_1509(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0xA9D60
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
			iVar3 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (bParam10)
			{
				__LIB_0__::func_89(iVar0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Param0, Param1, fParam2, false, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var6 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if ((Var6.f_2 > Param0.f_2 && Var6.f_2 < Param1.f_2) || (Var6.f_2 > Param1.f_2 && Var6.f_2 < Param0.f_2))
				{
					if (__LIB_6__::func_824(iVar0, Param0, Param1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0 + Param1 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (__LIB_20__::func_323(iVar0, __LIB_26__::func_499(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!__LIB_0__::func_86(Param5))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						iVar7 = ENTITY::GET_ENTITY_MODEL(iVar0);
						VEHICLE::GET_VEHICLE_SIZE(iVar0, &Var4, &Var5);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar7))
						{
							Param5.f_0 = (Param5.f_0 + 3f);
							Param5.f_1 = (Param5.f_1 + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							Param5 = { Param5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							Param5 = { Param5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var5.f_0 - Var4.f_0) > Param5.f_0)
						{
							bVar2 = false;
						}
						else if ((Var5.f_1 - Var4.f_1) > Param5.f_1)
						{
							bVar2 = false;
						}
						else if ((Var5.f_2 - Var4.f_2) > Param5.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (bVar2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(Param3, 5f, false, false, false, false, false, false, 0);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam4);
						ENTITY::SET_ENTITY_COORDS(iVar0, Param3, true, false, false, true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
						if (bParam9)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, false, true, false);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, true);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, true), true, false, false, true);
						}
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Param0, Param1, fParam2, false, false, false, false, false, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
			}
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
			{
				ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), true, false, false, true);
			}
			iVar9 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), true, false, false, true);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), true, false, false, true);
				}
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), true, false, false, true);
				}
			}
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
	}
}

Vector3 func_1515(int iParam0)//Position - 0xAA612
{
	switch (iParam0)
	{
		case 10:
			return -1173.9841f, -1573.3711f, 3.37083f;
			break;
		case 0:
			return 410.72632f, -1624.3729f, 28.29278f;
			break;
		case 1:
			return 901.96375f, -178.59615f, 72.95532f;
			break;
		case 3:
			return -1585.4141f, 5194.8936f, 3.00912f;
			break;
		case 4:
			return 1177.8193f, 2648.6206f, 36.79923f;
			break;
		case 5:
			return 337.51617f, 171.56021f, 102.22147f;
			break;
		case 6:
			return 397.02444f, -710.33325f, 28.28472f;
			break;
		case 7:
			return -1424.1914f, -198.89491f, 46.30384f;
			break;
		case 8:
			return -1341.136f, -16.49592f, 50.81433f;
			break;
		case 9:
			return 1525.3118f, -2112.944f, 75.64257f;
			break;
		case 11:
			return -564.8738f, 271.80304f, 82.02014f;
			break;
		case 12:
			return 226.23177f, 341.2231f, 104.54834f;
			break;
		case 13:
			return -298.25507f, 6254.396f, 30.48323f;
			break;
		case 14:
			return -2199.2205f, 4296.4146f, 47.52314f;
			break;
	}
	return ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true);
}

void func_1516()//Position - 0xAA7A4
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
}

void func_1521(bool bParam0)//Position - 0xAA7FF
{
	if (__LIB_0__::func_517(Global_112096.f_35, 2097152))
	{
		if (bParam0)
		{
			CUTSCENE::REMOVE_CUTSCENE();
			STREAMING::SET_SRL_FORCE_PRESTREAM(0);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cuban800"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dune"));
		__LIB_7__::func_204(&(Global_112096.f_35), 2097152);
	}
	if (__LIB_0__::func_517(Global_112096.f_35, 33554432))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("towtruck"));
		__LIB_7__::func_204(&(Global_112096.f_35), 33554432);
	}
	if (__LIB_0__::func_517(Global_112096.f_35, 268435456))
	{
		if (STREAMING::STREAMVOL_IS_VALID(Global_112096.f_218))
		{
			STREAMING::STREAMVOL_DELETE(Global_112096.f_218);
		}
		__LIB_7__::func_204(&(Global_112096.f_35), 268435456);
	}
}

void func_1522(bool bParam0, bool bParam1)//Position - 0xAA8A8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_26[iVar0]))
		{
			if (bParam1)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_112096.f_26[iVar0], true, true);
			}
			if (bParam0)
			{
				OBJECT::DELETE_OBJECT(&(Global_112096.f_26[iVar0]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Global_112096.f_26[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		__LIB_7__::func_204(&(Global_112096.f_2[iVar0]), 64);
		iVar0++;
	}
	func_1523();
}

void func_1523()//Position - 0xAA933
{
	if (Global_112096.f_25 >= 1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_1524());
	}
	Global_112096.f_25 = 0;
}

int func_1524()//Position - 0xAA954
{
	return joaat("prop_forsale_dyn_01");
}

void func_1525(bool bParam0)//Position - 0xAA961
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	var uVar7;
	bool bVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	bool bVar19;
	char* sVar20;
	int iVar21;
	int iVar22;
	switch (Global_112096.f_19)
	{
		case 0:
			switch (Global_112096.f_24)
			{
				case 0:
					if (bParam0)
					{
						if (__LIB_0__::func_517(Global_112096.f_35, 8) || __LIB_0__::func_517(Global_112096.f_35, 16777216))
						{
							Global_112096.f_37 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
							Global_112096.f_24 = 1;
							__LIB_0__::func_518(1);
						}
					}
					break;
				case 1:
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_112096.f_37) && (MISC::GET_GAME_TIMER() >= Global_112096.f_33 + 1500 || __LIB_0__::func_517(Global_112096.f_35, 16777216)))
					{
						if (bParam0)
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_112096.f_37, "SHOW_SHARD_MIDSIZED_MESSAGE");
							if (__LIB_0__::func_517(Global_112096.f_35, 8))
							{
								__LIB_0__::func_478(func_1645(Global_112096.f_20, Global_112096.f_21, Global_112096.f_29));
								if (Global_112096.f_20 != 9 && Global_112096.f_20 != 10)
								{
									__LIB_0__::func_478(func_1644(Global_112096.f_20));
								}
							}
							else
							{
								__LIB_0__::func_478("PROPR_PURCHASED" /* GXT: PROPERTY PURCHASED */);
								__LIB_0__::func_478(func_1644(Global_112096.f_42));
							}
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
							if (__LIB_0__::func_517(Global_112096.f_35, 8))
							{
								__LIB_7__::func_204(&(Global_112096.f_35), 524288);
								__LIB_6__::func_896(&(Global_112096.f_35), 536870912);
							}
							else
							{
								__LIB_7__::func_204(&(Global_112096.f_35), 536870912);
								__LIB_6__::func_896(&(Global_112096.f_35), 524288);
							}
						}
						__LIB_7__::func_204(&(Global_112096.f_35), 8);
						__LIB_7__::func_204(&(Global_112096.f_35), 16777216);
						Global_112096.f_24 = 2;
					}
					break;
				case 2:
					if (bParam0)
					{
						if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_112096.f_37))
						{
							if (!__LIB_0__::func_517(Global_112096.f_35, 524288))
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", true);
								__LIB_6__::func_896(&(Global_112096.f_35), 524288);
							}
							else if (!__LIB_0__::func_517(Global_112096.f_35, 536870912))
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", true);
								__LIB_6__::func_896(&(Global_112096.f_35), 536870912);
							}
							GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_112096.f_37, 255, 255, 255, 255, 0);
						}
					}
					if (MISC::GET_GAME_TIMER() >= Global_112096.f_33 + 11000)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_112096.f_37, "SHARD_ANIM_OUT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						Global_112096.f_24 = 3;
					}
					if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || !bParam0)
					{
						func_1447();
					}
					break;
				case 3:
					if (bParam0)
					{
						if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_112096.f_37))
						{
							GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_112096.f_37, 255, 255, 255, 255, 0);
						}
					}
					if ((MISC::GET_GAME_TIMER() >= Global_112096.f_33 + 11500 || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || !bParam0)
					{
						func_1447();
					}
					break;
			}
			if (bParam0)
			{
				if (__LIB_0__::func_517(Global_112096.f_35, 2))
				{
					if (MISC::GET_GAME_TIMER() >= Global_112096.f_33 + 5000)
					{
						func_1643(Global_112096.f_20, Global_112096.f_21, Global_112096.f_29, &iVar0, &iVar1);
						if (__LIB_20__::func_709(joaat("TEXT_PROPERTY"), iVar0, iVar1, 3, __LIB_11__::func_913(Global_113386.f_24904[Global_112096.f_20 /*4*/]), func_1641(Global_112096.f_20), 0, 10000, -1, 0, -1, 64, 0))
						{
							Global_112096.f_220 = 0;
							__LIB_7__::func_204(&(Global_112096.f_35), 2);
						}
					}
				}
				if (__LIB_0__::func_517(Global_112096.f_35, 4))
				{
					if (MISC::GET_GAME_TIMER() >= Global_112096.f_33 + 3000 && func_1639())
					{
						func_1638(Global_112096.f_20, Global_112096.f_21, Global_112096.f_29, &iVar2, &iVar3);
						if (__LIB_20__::func_709(joaat("TEXT_PROPERTY"), iVar2, iVar3, 3, __LIB_11__::func_913(Global_113386.f_24904[Global_112096.f_20 /*4*/]), func_1641(Global_112096.f_20), 0, 10000, -1, 0, -1, 64, 0))
						{
							Global_112096.f_221 = 0;
							__LIB_7__::func_204(&(Global_112096.f_35), 4);
						}
					}
				}
			}
			if (bParam0)
			{
				iVar4 = Global_112096;
				if (Global_113386.f_24904[iVar4 /*4*/] == __LIB_26__::func_499() && __LIB_0__::func_317(__LIB_26__::func_499()))
				{
					if (__LIB_32__::func_438(Global_113386.f_24904[iVar4 /*4*/].f_1))
					{
						bVar5 = false;
						if (__LIB_32__::func_438(Global_113386.f_24904.f_67))
						{
							__LIB_7__::func_204(&(Global_113386.f_24904.f_65), 4);
							bVar5 = true;
						}
						if (__LIB_0__::func_517(Global_113386.f_24904[Global_112096.f_20 /*4*/].f_2, 2) && !__LIB_0__::func_517(Global_113386.f_24904.f_65, 4))
						{
							bVar5 = true;
						}
						if (bVar5)
						{
							func_1630(iVar4, &iVar6, &uVar7);
							if (iVar6 != 0)
							{
								Global_112096.f_20 = iVar4;
								Global_112096.f_21 = iVar6;
								Global_112096.f_29 = uVar7;
								Global_112096.f_220 = 0;
								Global_112096.f_221 = 0;
								__LIB_6__::func_896(&(Global_112096.f_35), 4194304);
								Global_112096.f_19 = 1;
							}
						}
					}
				}
			}
			else if (MISC::GET_GAME_TIMER() >= Global_112096.f_34)
			{
				func_1619();
				func_1618(2);
				Global_112096.f_34 = MISC::GET_GAME_TIMER() + 5000;
			}
			break;
		case 1:
			bVar8 = false;
			if (bParam0)
			{
				if (func_1617(Global_112096.f_21))
				{
					uVar9 = func_1616(func_1459(Global_112096.f_20, Global_112096.f_29));
					uVar10 = func_1615(func_1459(Global_112096.f_20, Global_112096.f_29));
					uVar11 = func_1614(Global_112096.f_20);
					iVar12 = 10000;
					if (func_1611(uVar9, uVar10, uVar11, 3, __LIB_32__::func_787(), func_1641(Global_112096.f_20), 8, 0, iVar12, -1, -1, 0, -1, 16448))
					{
						Global_112096.f_36 = uVar9;
						__LIB_7__::func_204(&(Global_112096.f_35), 2048);
						__LIB_7__::func_204(&(Global_112096.f_35), 8388608);
						__LIB_6__::func_896(&(Global_112096.f_35), 1024);
						bVar8 = true;
					}
				}
				else
				{
					iVar13 = 10000;
					iVar14 = 3;
					func_1610(Global_112096.f_20, Global_112096.f_21, Global_112096.f_29, &iVar15, &iVar16);
					if (__LIB_20__::func_709(joaat("TEXT_PROPERTY"), iVar15, iVar16, iVar14, __LIB_32__::func_787(), func_1641(Global_112096.f_20), 0, iVar13, -1, 0, -1, 64, 0))
					{
						Global_112096.f_36 = joaat("TEXT_PROPERTY");
						__LIB_7__::func_204(&(Global_112096.f_35), 1024);
						__LIB_6__::func_896(&(Global_112096.f_35), 8388608);
						bVar8 = true;
					}
				}
				if (bVar8)
				{
					if (Global_112096.f_21 == 6)
					{
						if (!__LIB_0__::func_517(Global_112096.f_35, 1048576))
						{
							if (!__LIB_30__::func_858(2))
							{
								__LIB_11__::func_147(2, 1);
								__LIB_6__::func_896(&(Global_112096.f_35), 1048576);
							}
						}
					}
					if (HUD::DOES_BLIP_EXIST(Global_112096.f_31))
					{
						HUD::REMOVE_BLIP(&(Global_112096.f_31));
					}
					if (__LIB_0__::func_517(Global_113386.f_24904[Global_112096.f_20 /*4*/].f_2, 2))
					{
						__LIB_7__::func_204(&(Global_113386.f_24904[Global_112096.f_20 /*4*/].f_2), 2);
						__LIB_6__::func_896(&(Global_113386.f_24904.f_65), 4);
					}
					__LIB_7__::func_204(&(Global_112096.f_35), 512);
					__LIB_6__::func_896(&(Global_112096.f_35), 4194304);
					Global_112096.f_19 = 2;
				}
			}
			else
			{
				func_1619();
			}
			break;
		case 2:
			bVar17 = false;
			if (__LIB_0__::func_517(Global_112096.f_35, 1024))
			{
				if (__LIB_11__::func_773(Global_112096.f_36))
				{
					if (func_1600(Global_112096.f_36) == 0)
					{
						__LIB_6__::func_896(&(Global_112096.f_35), 2048);
						switch (__LIB_11__::func_790())
						{
							case 1:
								__LIB_7__::func_204(&(Global_112096.f_35), 1024);
								break;
							case 2:
								break;
						}
					}
					else if (__LIB_0__::func_517(Global_112096.f_35, 2048))
					{
						if (__LIB_10__::func_863() || __LIB_2__::func_371())
						{
							__LIB_7__::func_204(&(Global_112096.f_35), 1024);
							bVar17 = true;
						}
					}
				}
				else
				{
					if (__LIB_0__::func_517(Global_112096.f_35, 2048))
					{
						__LIB_7__::func_204(&(Global_112096.f_35), 1024);
					}
					bVar17 = true;
				}
			}
			else if (__LIB_0__::func_517(Global_112096.f_35, 8388608))
			{
				if (!__LIB_11__::func_773(Global_112096.f_36))
				{
					__LIB_7__::func_204(&(Global_112096.f_35), 8388608);
				}
			}
			if (((!__LIB_0__::func_517(Global_112096.f_35, 512) && !__LIB_0__::func_517(Global_112096.f_35, 1024)) && !__LIB_0__::func_517(Global_112096.f_35, 8388608)) && !bVar17)
			{
				Global_112096.f_31 = __LIB_0__::func_392(func_1595(Global_112096.f_20, Global_112096.f_21, Global_112096.f_29), 0);
				HUD::SET_BLIP_SPRITE(Global_112096.f_31, 267);
				switch (Global_113386.f_24904[Global_112096.f_20 /*4*/])
				{
					case 0:
						HUD::SET_BLIP_COLOUR(Global_112096.f_31, 42);
						break;
					case 1:
						HUD::SET_BLIP_COLOUR(Global_112096.f_31, 43);
						break;
					case 2:
						HUD::SET_BLIP_COLOUR(Global_112096.f_31, 44);
						break;
				}
				HUD::SET_BLIP_PRIORITY(Global_112096.f_31, 7);
				HUD::SET_BLIP_FLASHES(Global_112096.f_31, true);
				HUD::SET_BLIP_FLASH_TIMER(Global_112096.f_31, 10000);
				Global_112096.f_32 = (MISC::GET_GAME_TIMER() + 300000);
				__LIB_6__::func_896(&(Global_112096.f_35), 512);
			}
			if (!__LIB_0__::func_67(6))
			{
				if (__LIB_0__::func_517(Global_112096.f_35, 512))
				{
					iVar18 = __LIB_11__::func_512("AM_H_PMFS" /* GXT: Owned properties that have requested your assistance can be helped at ~BLIP_PROPERTY~ */);
					if (iVar18 == 2)
					{
						__LIB_18__::func_203("AM_H_PMFS" /* GXT: Owned properties that have requested your assistance can be helped at ~BLIP_PROPERTY~ */, 2, 0, 3000, 10000, 7, 0, 0, 0);
					}
					else if (iVar18 == 1)
					{
						__LIB_0__::func_460(6);
					}
				}
			}
			func_1564();
			if (!func_1554())
			{
				bVar17 = true;
			}
			else if (bParam0)
			{
				bVar19 = func_1551(Global_112096.f_20, Global_112096.f_21, Global_112096.f_29);
				if (func_1549(Global_112096.f_20, Global_112096.f_21, Global_112096.f_29) || bVar19)
				{
					if (((Global_112096.f_23 == 2 && !__LIB_0__::func_517(Global_112096.f_35, 1024)) && !__LIB_0__::func_517(Global_112096.f_35, 8388608)) || bVar19)
					{
						if (bVar19)
						{
							__LIB_6__::func_896(&(Global_112096.f_35), 134217728);
						}
						else
						{
							__LIB_7__::func_204(&(Global_112096.f_35), 134217728);
						}
						__LIB_6__::func_896(&(Global_112096.f_35), 4194304);
						Global_112096.f_19 = 3;
					}
				}
				else if (MISC::GET_GAME_TIMER() >= Global_112096.f_32)
				{
					if (!__LIB_0__::func_517(Global_112096.f_35, 1024) && !__LIB_0__::func_517(Global_112096.f_35, 8388608))
					{
						bVar17 = true;
					}
				}
				if (__LIB_26__::func_499() != Global_113386.f_24904[Global_112096.f_20 /*4*/] || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					bVar17 = true;
				}
			}
			else
			{
				bVar17 = true;
			}
			if (bVar17)
			{
				Global_112096.f_220 = 2;
				if (!__LIB_0__::func_517(Global_112096.f_35, 8388608) && !__LIB_0__::func_517(Global_112096.f_35, 1024))
				{
					func_1548(2);
				}
				else
				{
					func_1548(0);
				}
				func_1619();
				func_1451(1, 0);
				if (!__LIB_0__::func_517(Global_112096.f_35, 8388608) && !__LIB_0__::func_517(Global_112096.f_35, 1024))
				{
					func_1618(1);
				}
			}
			break;
		case 3:
			sVar20 = func_1547(Global_112096.f_20, Global_112096.f_21, Global_112096.f_29);
			SCRIPT::REQUEST_SCRIPT(sVar20);
			if (SCRIPT::HAS_SCRIPT_LOADED(sVar20))
			{
				iVar21 = __LIB_18__::func_219(&(Global_112096.f_30), 6, 9, 0, 0);
				if (iVar21 == 1)
				{
					if (HUD::DOES_BLIP_EXIST(Global_112096.f_31))
					{
						HUD::REMOVE_BLIP(&(Global_112096.f_31));
					}
					func_1543(func_1544(Global_112096.f_20));
					STATS::STAT_GET_INT(__LIB_29__::func_866(Global_112096.f_20, 2), &iVar22, -1);
					iVar22++;
					STATS::STAT_SET_INT(__LIB_29__::func_866(Global_112096.f_20, 2), iVar22, true);
					func_1541(1);
					func_1451(0, 0);
					func_1540();
					func_1534(Global_112096.f_20, Global_112096.f_21, Global_112096.f_29);
					Global_112096.f_50 = SYSTEM::START_NEW_SCRIPT(sVar20, 51000);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar20);
					Global_112096.f_22 = 0;
					__LIB_6__::func_896(&(Global_112096.f_35), 4194304);
					Global_112096.f_19 = 4;
				}
				else if (iVar21 == 0)
				{
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar20);
					func_1451(1, 0);
					func_1618(3);
					func_1619();
				}
			}
			break;
		case 4:
			if (SCRIPT::IS_THREAD_ACTIVE(Global_112096.f_50))
			{
			}
			else
			{
				HUD::CLEAR_ADDITIONAL_TEXT(0, true);
				func_1541(0);
				func_1548(Global_112096.f_22);
				func_1451(1, 0);
				func_1618(0);
				func_1526(Global_112096.f_20, 0);
				func_1619();
				__LIB_0__::func_56(&(Global_112096.f_30));
			}
			break;
	}
}

void func_1526(int iParam0, int iParam1)//Position - 0xAB578
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (iParam1)
	{
		case 0:
			if (__LIB_0__::func_176(48))
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(5, 7);
			}
			else
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(7, 9);
			}
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 24);
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 60);
			break;
		case 4:
			iVar0 = 0;
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(12, 15);
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 60);
			break;
	}
	iVar3 = __LIB_13__::func_95();
	__LIB_32__::func_437(&iVar3, 0, iVar2, iVar1, iVar0, 0, 0);
	if (__LIB_20__::func_682(iVar3, Global_113386.f_24904[iParam0 /*4*/].f_1))
	{
		Global_113386.f_24904[iParam0 /*4*/].f_1 = iVar3;
	}
}

void func_1534(int iParam0, int iParam1, int iParam2)//Position - 0xAB9F1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[3];
	int iVar6[9];
	int iVar7;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = func_1539(iParam0, iParam1, iParam2);
	iVar4 = func_1537(iParam0, iParam1, iParam2);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		iVar5[iVar0] = 16384;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar6)
	{
		iVar6[iVar0] = 33554432;
		iVar0++;
	}
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 2:
					iVar6[0] = 8388608;
					iVar6[1] = 16777216;
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 1:
					iVar5[0] = 32;
					iVar5[2] = 64;
					iVar5[1] = 128;
					iVar6[0] = 2;
					iVar6[1] = 4;
					iVar6[2] = 8;
					iVar6[3] = 16;
					iVar6[4] = 32;
					iVar6[5] = 64;
					iVar6[6] = 128;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 3:
					iVar6[0] = 256;
					iVar6[1] = 512;
					iVar6[2] = 1024;
					iVar6[3] = 2048;
					iVar6[4] = 4096;
					iVar6[5] = 8192;
					iVar6[6] = 16384;
					iVar6[7] = 32768;
					iVar6[8] = 65536;
					break;
			}
			break;
		case 5:
		case 6:
		case 7:
			iVar5[0] = 2048;
			iVar5[1] = 8192;
			switch (iParam1)
			{
				case 6:
					break;
				case 4:
					iVar6[0] = 2097152;
					break;
			}
			break;
		case 11:
		case 12:
		case 13:
		case 14:
			iVar5[0] = 256;
			iVar5[1] = 512;
			iVar5[2] = 1024;
			switch (iParam1)
			{
				case 1:
					break;
				case 5:
					iVar6[0] = 131072;
					iVar6[1] = 262144;
					break;
				case 4:
					iVar6[0] = 1048576;
					iVar6[1] = 524288;
					break;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		if (iVar5[iVar0] != 16384)
		{
			if (__LIB_0__::func_517(Global_113386.f_24904.f_65, iVar5[iVar0]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 >= func_1536(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (iVar5[iVar0] != iVar3 && iVar5[iVar0] != 16384)
			{
				__LIB_7__::func_204(&(Global_113386.f_24904.f_65), iVar5[iVar0]);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < iVar6)
	{
		if (iVar6[iVar0] != 33554432)
		{
			if (__LIB_0__::func_517(Global_113386.f_24904.f_66, iVar6[iVar0]))
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	iVar7 = func_1535(iParam0, iParam1);
	if (iVar2 >= iVar7)
	{
		iVar0 = 0;
		while (iVar0 < iVar6)
		{
			if ((iVar6[iVar0] != iVar4 || iVar7 == 1) && iVar6[iVar0] != 33554432)
			{
				__LIB_7__::func_204(&(Global_113386.f_24904.f_66), iVar6[iVar0]);
			}
			iVar0++;
		}
	}
}

int func_1535(int iParam0, int iParam1)//Position - 0xABD32
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 2:
					return 2;
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 1:
					return 5;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 3:
					return 9;
					break;
			}
			break;
		case 5:
		case 6:
		case 7:
			switch (iParam1)
			{
				case 6:
					return 1;
					break;
				case 4:
					return 1;
					break;
			}
			break;
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 1:
					return 0;
					break;
				case 5:
					return 2;
					break;
				case 4:
					return 2;
					break;
			}
			break;
	}
	return 1;
}

int func_1536(int iParam0)//Position - 0xABE19
{
	switch (iParam0)
	{
		case 10:
		case 9:
		case 1:
			return 1;
			break;
		case 5:
		case 6:
		case 7:
			return 2;
			break;
		case 11:
		case 12:
		case 13:
		case 14:
			return 3;
			break;
	}
	return 0;
}

int func_1537(int iParam0, int iParam1, int iParam2)//Position - 0xABE7A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	switch (iParam0)
	{
		case 10:
			iVar0 = __LIB_30__::func_727(iParam0, iParam2);
			switch (iVar0)
			{
				case 0:
					return 2;
					break;
				case 1:
					return 4;
					break;
				case 2:
					return 8;
					break;
				case 3:
					return 16;
					break;
				case 4:
					return 32;
					break;
				case 5:
					return 64;
					break;
				case 6:
					return 128;
					break;
			}
			break;
		case 5:
		case 6:
		case 7:
			switch (iParam1)
			{
				case 4:
					iVar1 = __LIB_30__::func_730(iParam0, iParam2);
					switch (iVar1)
					{
						case 0:
							return 2097152;
							break;
					}
					break;
			}
			break;
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 4:
					iVar2 = __LIB_30__::func_730(iParam0, iParam2);
					switch (iVar2)
					{
						case 0:
							return 1048576;
							break;
						case 1:
							return 524288;
							break;
					}
					break;
				case 5:
					iVar3 = func_1455(iParam0, iParam2);
					switch (iVar3)
					{
						case 0:
							return 131072;
							break;
						case 1:
							return 262144;
							break;
					}
					break;
			}
			break;
		case 9:
			iVar4 = __LIB_30__::func_724(iParam0, iParam2);
			switch (iVar4)
			{
				case 0:
					return 8388608;
					break;
				case 1:
					return 16777216;
					break;
			}
			break;
		case 1:
			iVar5 = func_1459(iParam0, iParam2);
			switch (iVar5)
			{
				case 0:
					return 256;
					break;
				case 1:
					return 512;
					break;
				case 2:
					return 1024;
					break;
				case 3:
					return 2048;
					break;
				case 4:
					return 4096;
					break;
				case 5:
					return 8192;
					break;
				case 6:
					return 16384;
					break;
				case 7:
					return 32768;
					break;
				case 8:
					return 65536;
					break;
			}
			break;
	}
	return 33554432;
}

int func_1539(int iParam0, int iParam1, int iParam2)//Position - 0xAC108
{
	int iVar0;
	switch (iParam0)
	{
		case 10:
			iVar0 = __LIB_30__::func_727(iParam0, iParam2);
			switch (iVar0)
			{
				case 0:
				case 1:
				case 2:
					return 32;
					break;
				case 3:
				case 4:
					return 64;
					break;
				case 5:
				case 6:
					return 128;
					break;
			}
			break;
		case 5:
		case 6:
		case 7:
			switch (iParam1)
			{
				case 4:
					return 2048;
					break;
				case 6:
					return 8192;
					break;
			}
			break;
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 4:
					return 256;
					break;
				case 5:
					return 512;
					break;
				case 1:
					return 1024;
					break;
			}
			break;
	}
	return 16384;
}

void func_1540()//Position - 0xAC1FF
{
	int iVar0;
	int iVar1;
	iVar0 = func_1539(Global_112096.f_20, Global_112096.f_21, Global_112096.f_29);
	iVar1 = func_1537(Global_112096.f_20, Global_112096.f_21, Global_112096.f_29);
	if (iVar0 != 16384)
	{
		__LIB_6__::func_896(&(Global_113386.f_24904.f_65), iVar0);
	}
	if (iVar1 != 33554432)
	{
		__LIB_6__::func_896(&(Global_113386.f_24904.f_66), iVar1);
	}
}

void func_1541(bool bParam0)//Position - 0xAC267
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, !bParam0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, !bParam0);
	}
}

void func_1543(int iParam0)//Position - 0xAC673
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (HUD::DOES_BLIP_EXIST(Global_32338[iVar0 /*23*/].f_19))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		HUD::REMOVE_BLIP(&(Global_32338[iVar0 /*23*/].f_19));
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	}
}

int func_1544(int iParam0)//Position - 0xAC6C8
{
	switch (iParam0)
	{
		case 0:
			return 140;
			break;
		case 1:
			return 141;
			break;
		case 2:
			return 142;
			break;
		case 3:
			return 143;
			break;
		case 4:
			return 144;
			break;
		case 5:
			return 145;
			break;
		case 6:
			return 146;
			break;
		case 7:
			return 147;
			break;
		case 8:
			return 148;
			break;
		case 9:
			return 149;
			break;
		case 10:
			return 151;
			break;
		case 11:
			return 152;
			break;
		case 12:
			return 153;
			break;
		case 13:
			return 154;
			break;
		case 14:
			return 155;
			break;
	}
	return 140;
}

char* func_1547(int iParam0, int iParam1, int iParam2)//Position - 0xAC931
{
	switch (iParam1)
	{
		case 1:
			return "pm_delivery";
			break;
		case 2:
			return "pm_defend";
			break;
		case 4:
			return "pm_recover_stolen";
			break;
		case 5:
			return "pm_gang_attack";
			break;
		case 6:
			return "pm_plane_promotion";
			break;
		case 3:
			switch (func_1459(iParam0, iParam2))
			{
				case 0:
					return "taxi_clowncar";
					break;
				case 1:
					return "taxi_cutyouin";
					break;
				case 2:
					return "taxi_deadline";
					break;
				case 3:
					return "taxi_followcar";
					break;
				case 4:
					return "taxi_gotyounow";
					break;
				case 5:
					return "taxi_gotyourback";
					break;
				case 6:
					return "taxi_needexcitement";
					break;
				case 7:
					return "taxi_takeiteasy";
					break;
				case 8:
					return "taxi_taketobest";
					break;
			}
			break;
	}
	return "error";
}

void func_1548(int iParam0)//Position - 0xACA49
{
	switch (iParam0)
	{
		case 0:
			__LIB_7__::func_204(&(Global_112096.f_35), 2);
			__LIB_7__::func_204(&(Global_112096.f_35), 4);
			__LIB_7__::func_204(&(Global_112096.f_35), 8);
			break;
		case 1:
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			__LIB_7__::func_204(&(Global_112096.f_35), 2);
			if (Global_112096.f_20 != 1)
			{
				__LIB_6__::func_896(&(Global_112096.f_35), 8);
			}
			if ((Global_112096.f_21 == 2 || Global_112096.f_21 == 6) || Global_112096.f_21 == 5)
			{
				__LIB_6__::func_896(&(Global_112096.f_35), 4);
			}
			else
			{
				__LIB_7__::func_204(&(Global_112096.f_35), 4);
			}
			__LIB_0__::func_533();
			break;
		case 2:
			__LIB_7__::func_204(&(Global_113386.f_24904[Global_112096.f_20 /*4*/].f_2), 1);
			__LIB_7__::func_204(&(Global_112096.f_35), 4);
			__LIB_6__::func_896(&(Global_112096.f_35), 2);
			__LIB_7__::func_204(&(Global_112096.f_35), 8);
			break;
	}
	__LIB_7__::func_204(&(Global_112096.f_35), 16777216);
}

int func_1549(int iParam0, int iParam1, int iParam2)//Position - 0xACB55
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_1595(iParam0, iParam1, iParam2), func_1550(iParam0, iParam1, iParam2), false, true, 0))
	{
		return 1;
	}
	return 0;
}

Vector3 func_1550(int iParam0, int iParam1, int iParam2)//Position - 0xACB84
{
	int iVar0;
	iParam0 = iParam0;
	iParam1 = iParam1;
	iParam2 = iParam2;
	switch (iParam1)
	{
		case 1:
		case 3:
		case 6:
			if (iParam0 == 10)
			{
				iVar0 = __LIB_30__::func_727(iParam0, iParam2);
				if (iVar0 == 5)
				{
					return 150f, 150f, 150f;
				}
				else if (iVar0 == 6)
				{
					return 175f, 175f, 175f;
				}
			}
			return 65f, 65f, 65f;
			break;
		case 4:
			return 120f, 120f, 120f;
			break;
		case 5:
			return 100f, 100f, 100f;
			break;
		case 2:
			switch (iParam0)
			{
				case 9:
					return 180f, 180f, 180f;
					break;
			}
			break;
	}
	return 200f, 200f, 200f;
}

int func_1551(int iParam0, int iParam1, int iParam2)//Position - 0xACC7A
{
	switch (iParam1)
	{
		case 4:
			return func_1553(iParam0, __LIB_30__::func_730(iParam0, iParam2));
			break;
		case 5:
			return func_1552(iParam0, func_1455(iParam0, iParam2));
			break;
	}
	return 0;
}

int func_1552(int iParam0, var uParam1)//Position - 0xACCBE
{
	int iVar0;
	iParam0 = iParam0;
	uParam1 = uParam1;
	iVar0 = 0;
	while (iVar0 < Global_112096.f_225)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_225[iVar0]))
		{
			if (PED::IS_PED_INJURED(Global_112096.f_225[iVar0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_112096.f_225[iVar0], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112096.f_222)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_222[iVar0]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112096.f_222[iVar0], false))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1553(var uParam0, int iParam1)//Position - 0xACD64
{
	uParam0 = uParam0;
	iParam1 = iParam1;
	if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_225[0]))
	{
		if (PED::IS_PED_INJURED(Global_112096.f_225[0]))
		{
			if (iParam1 != 1)
			{
				return 1;
			}
		}
		else if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_112096.f_225[0], PLAYER::PLAYER_PED_ID(), true) || PED::HAS_PED_RECEIVED_EVENT(Global_112096.f_225[0], 124)) || PED::HAS_PED_RECEIVED_EVENT(Global_112096.f_225[0], 125)) || PED::HAS_PED_RECEIVED_EVENT(Global_112096.f_225[0], 126))
		{
			return 1;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_225[1]))
	{
		if (PED::IS_PED_INJURED(Global_112096.f_225[1]))
		{
			if (iParam1 != 1)
			{
				return 1;
			}
		}
		else if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_112096.f_225[1], PLAYER::PLAYER_PED_ID(), true) || PED::HAS_PED_RECEIVED_EVENT(Global_112096.f_225[1], 124)) || PED::HAS_PED_RECEIVED_EVENT(Global_112096.f_225[1], 125)) || PED::HAS_PED_RECEIVED_EVENT(Global_112096.f_225[1], 126))
		{
			return 1;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_222[0]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112096.f_222[0], false) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_112096.f_222[0], PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	return 0;
}

int func_1554()//Position - 0xACEC3
{
	if (Global_112096.f_23 == 2)
	{
		switch (Global_112096.f_21)
		{
			case 1:
				return func_1563(Global_112096.f_20, __LIB_30__::func_727(Global_112096.f_20, Global_112096.f_29));
				break;
			case 6:
				return func_1562();
				break;
			case 3:
				return func_1561(func_1459(Global_112096.f_20, Global_112096.f_29));
				break;
			case 4:
				func_1560(Global_112096.f_20, __LIB_30__::func_730(Global_112096.f_20, Global_112096.f_29));
				break;
			case 5:
				func_1555(Global_112096.f_20, func_1455(Global_112096.f_20, Global_112096.f_29));
				break;
			}
	}
	return 1;
}

int func_1555(int iParam0, var uParam1)//Position - 0xACF7F
{
	struct<5> Var0;
	int iVar1;
	iParam0 = iParam0;
	uParam1 = uParam1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_225[iVar1]) && !PED::IS_PED_INJURED(Global_112096.f_225[iVar1]))
		{
			__LIB_30__::func_729(&Var0, iParam0, iVar1);
			__LIB_37__::func_500(Global_112096.f_225[iVar1], Var0.f_4);
		}
		iVar1++;
	}
	return 1;
}

int func_1560(var uParam0, int iParam1)//Position - 0xAD999
{
	uParam0 = uParam0;
	iParam1 = iParam1;
	if (iParam1 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_225[0]))
		{
			if (PED::IS_PED_INJURED(Global_112096.f_225[0]))
			{
				return 0;
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_225[1]))
		{
			if (PED::IS_PED_INJURED(Global_112096.f_225[1]))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_1561(int iParam0)//Position - 0xAD9FB
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_225[0]))
			{
				if (PED::IS_PED_INJURED(Global_112096.f_225[0]))
				{
					return 0;
				}
				else if (PED::IS_PED_FLEEING(Global_112096.f_225[0]))
				{
					return 0;
				}
			}
			break;
		case 0:
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_225[iVar0]))
				{
					if (PED::IS_PED_INJURED(Global_112096.f_225[iVar0]))
					{
						return 0;
					}
					else if (PED::IS_PED_FLEEING(Global_112096.f_225[iVar0]))
					{
						return 0;
					}
				}
				iVar0++;
			}
			break;
	}
	return 1;
}

int func_1562()//Position - 0xADAD2
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_222[0]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112096.f_222[0], false))
		{
			return 0;
		}
	}
	return 1;
}

int func_1563(var uParam0, int iParam1)//Position - 0xADB01
{
	uParam0 = uParam0;
	iParam1 = iParam1;
	if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_222[0]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112096.f_222[0], false))
		{
			return 0;
		}
	}
	return 1;
}

void func_1564()//Position - 0xADB38
{
	bool bVar0;
	switch (Global_112096.f_23)
	{
		case 0:
			switch (Global_112096.f_21)
			{
				case 1:
					func_1585(Global_112096.f_20, __LIB_30__::func_727(Global_112096.f_20, Global_112096.f_29));
					break;
				case 6:
					func_1584();
					break;
				case 3:
					func_1583(func_1459(Global_112096.f_20, Global_112096.f_29));
					break;
				case 4:
					func_1582(Global_112096.f_20, __LIB_30__::func_730(Global_112096.f_20, Global_112096.f_29));
					break;
				case 5:
					func_1581(Global_112096.f_20, func_1455(Global_112096.f_20, Global_112096.f_29));
					break;
			}
			Global_112096.f_23 = 1;
			break;
		case 1:
			bVar0 = true;
			switch (Global_112096.f_21)
			{
				case 1:
					bVar0 = func_1580(Global_112096.f_20, __LIB_30__::func_727(Global_112096.f_20, Global_112096.f_29));
					break;
				case 6:
					bVar0 = func_1579();
					break;
				case 3:
					bVar0 = func_1578(func_1459(Global_112096.f_20, Global_112096.f_29));
					break;
				case 4:
					bVar0 = func_1577(Global_112096.f_20, __LIB_30__::func_730(Global_112096.f_20, Global_112096.f_29));
					break;
				case 5:
					bVar0 = func_1576(Global_112096.f_20, func_1455(Global_112096.f_20, Global_112096.f_29));
					break;
			}
			if (bVar0)
			{
				switch (Global_112096.f_21)
				{
					case 1:
						func_1572(Global_112096.f_20, __LIB_30__::func_727(Global_112096.f_20, Global_112096.f_29));
						break;
					case 6:
						func_1571();
						break;
					case 3:
						func_1570(func_1459(Global_112096.f_20, Global_112096.f_29));
						break;
					case 4:
						func_1567(Global_112096.f_20, __LIB_30__::func_730(Global_112096.f_20, Global_112096.f_29));
						break;
					case 5:
						func_1565(Global_112096.f_20, func_1455(Global_112096.f_20, Global_112096.f_29));
						break;
				}
				Global_112096.f_23 = 2;
			}
			break;
		case 2:
			break;
	}
}

void func_1565(int iParam0, var uParam1)//Position - 0xADD60
{
	char cVar0[16];
	int iVar1;
	struct<3> Var2[2];
	float fVar3[2];
	struct<10> Var4[6];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	uParam1 = uParam1;
	switch (iParam0)
	{
		case 11:
			iVar1 = 0;
			Var2[0 /*3*/] = { -546.25f, 307.1572f, 82.0203f };
			fVar3[0] = 292.7172f;
			Var2[1 /*3*/] = { -553.0233f, 305.0579f, 82.2847f };
			fVar3[1] = 215.8545f;
			break;
		case 12:
			iVar1 = 1;
			Var2[0 /*3*/] = { 239.7992f, 339.1508f, 104.4417f };
			fVar3[0] = 207.3874f;
			Var2[1 /*3*/] = { 228.0525f, 346.2598f, 104.3948f };
			fVar3[1] = 246.0324f;
			break;
		case 13:
			iVar1 = 2;
			Var2[0 /*3*/] = { -318.1871f, 6254.513f, 30.3558f };
			fVar3[0] = 213.6937f;
			Var2[1 /*3*/] = { -327.4945f, 6264.954f, 30.3986f };
			fVar3[1] = 260.5945f;
			break;
		case 14:
			iVar1 = 0;
			Var2[0 /*3*/] = { -2208.0652f, 4268.6445f, 46.8024f };
			fVar3[0] = 31.6846f;
			Var2[1 /*3*/] = { -2201.4014f, 4261.4736f, 46.9114f };
			fVar3[1] = 6.3115f;
			break;
	}
	__LIB_30__::func_729(&(Var4[0 /*10*/]), iParam0, 0);
	__LIB_30__::func_729(&(Var4[1 /*10*/]), iParam0, 1);
	__LIB_30__::func_729(&(Var4[2 /*10*/]), iParam0, 2);
	__LIB_30__::func_729(&(Var4[3 /*10*/]), iParam0, 3);
	__LIB_30__::func_729(&(Var4[4 /*10*/]), iParam0, 4);
	__LIB_30__::func_729(&(Var4[5 /*10*/]), iParam0, 5);
	iVar5 = 0;
	while (iVar5 <= 5)
	{
		Global_112096.f_225[iVar5] = PED::CREATE_PED(26, func_1454(iVar1), Var4[iVar5 /*10*/], Var4[iVar5 /*10*/].f_3, true, true);
		StringCopy(&cVar0, "GANG_", 16);
		StringIntConCat(&cVar0, iVar5, 16);
		PED::SET_PED_NAME_DEBUG(Global_112096.f_225[iVar5], &cVar0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_112096.f_225[iVar5], true);
		WEAPON::GIVE_WEAPON_TO_PED(Global_112096.f_225[iVar5], Var4[iVar5 /*10*/].f_7, -1, true, true);
		PED::SET_PED_USING_ACTION_MODE(Global_112096.f_225[iVar5], true, -1, "DEFAULT_ACTION");
		iVar5++;
	}
	func_1566(iVar1, &iVar6, &iVar7, &iVar8, &iVar9);
	iVar5 = 0;
	while (iVar5 <= 1)
	{
		Global_112096.f_222[iVar5] = VEHICLE::CREATE_VEHICLE(func_1453(iVar1), Var2[iVar5 /*3*/], fVar3[iVar5], true, true, false);
		VEHICLE::SET_VEHICLE_COLOURS(Global_112096.f_222[iVar5], iVar6, iVar7);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_112096.f_222[iVar5], iVar8, iVar9);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Global_112096.f_222[iVar5], true, true, false);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_112096.f_222[iVar5], true, 1);
		iVar5++;
	}
}

int func_1566(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xAE01B
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = 142;
			*uParam2 = 0;
			*uParam3 = 148;
			*uParam4 = 156;
			return 1;
			break;
		case 2:
			*uParam1 = 0;
			*uParam2 = 15;
			*uParam3 = 0;
			*uParam4 = 156;
			return 1;
			break;
		case 0:
			*uParam1 = 6;
			*uParam2 = 6;
			*uParam3 = 111;
			*uParam4 = 156;
			return 1;
			break;
	}
	return 0;
}

void func_1567(int iParam0, int iParam1)//Position - 0xAE089
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	switch (iParam0)
	{
		case 5:
			Var1 = { 327.6613f, 163.5656f, 102.4007f };
			if (__LIB_35__::func_96(iParam0, Var0))
			{
				fVar2 = 70.3316f;
			}
			else
			{
				fVar2 = 246.2252f;
			}
			break;
		case 6:
			Var1 = { 400.8661f, -713.4232f, 28.1488f };
			if (__LIB_35__::func_96(iParam0, Var0))
			{
				fVar2 = 198.4031f;
			}
			else
			{
				fVar2 = 340.8739f;
			}
			break;
		case 7:
			if (__LIB_35__::func_96(iParam0, Var0))
			{
				Var1 = { -1409.2603f, -198.7362f, 46.0458f };
				fVar2 = 220.3334f;
			}
			else
			{
				Var1 = { -1436.8124f, -199.6595f, 46.4139f };
				fVar2 = 127.0303f;
			}
			break;
		case 11:
			Var1 = { -565.181f, 268.2033f, 81.8987f };
			if (__LIB_35__::func_96(iParam0, Var0))
			{
				fVar2 = 95.9266f;
			}
			else
			{
				fVar2 = 257.7337f;
			}
			break;
		case 12:
			Var1 = { 227.1843f, 347.07f, 104.4053f };
			if (__LIB_35__::func_96(iParam0, Var0))
			{
				fVar2 = 254.2722f;
			}
			else
			{
				fVar2 = 53.2505f;
			}
			break;
		case 13:
			Var1 = { -293.9433f, 6249.701f, 30.2897f };
			if (__LIB_35__::func_96(iParam0, Var0))
			{
				fVar2 = 148.9658f;
			}
			else
			{
				fVar2 = 298.0306f;
			}
			break;
		case 14:
			Var1 = { -2208.389f, 4288.6763f, 47.1738f };
			if (__LIB_35__::func_96(iParam0, Var0))
			{
				fVar2 = 342.7601f;
			}
			else
			{
				fVar2 = 133.1666f;
			}
			break;
	}
	iVar3 = 0;
	iVar4 = -1;
	iVar5 = 0;
	iVar6 = 0;
	bVar7 = false;
	switch (iParam1)
	{
		case 0:
			iVar3 = Global_112096.f_234;
			iVar5 = joaat("A_M_M_EastSA_02");
			break;
		case 1:
			iVar3 = joaat("vader");
			iVar5 = joaat("A_M_M_Paparazzi_01");
			iVar6 = joaat("A_M_M_Paparazzi_01");
			iVar4 = 3;
			break;
	}
	MISC::CLEAR_AREA_OF_VEHICLES(Var1, 30f, false, false, false, false, false, false, 0);
	Global_112096.f_222[0] = VEHICLE::CREATE_VEHICLE(iVar3, Var1, fVar2, true, true, false);
	if (iVar4 != -1)
	{
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Global_112096.f_222[0], iVar4);
	}
	VEHICLE::SET_VEHICLE_ENGINE_ON(Global_112096.f_222[0], true, true, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar3, true);
	Global_112096.f_225[0] = PED::CREATE_PED_INSIDE_VEHICLE(Global_112096.f_222[0], 26, iVar5, -1, true, true);
	if (iVar5 == joaat("A_M_M_Paparazzi_01"))
	{
		PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 9, 0, 0, 0);
		ENTITY::SET_ENTITY_HEALTH(Global_112096.f_225[0], 400, 0);
	}
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_112096.f_225[0], true, 1);
	PED::SET_PED_CONFIG_FLAG(Global_112096.f_225[0], 42, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_112096.f_225[0], true);
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar3))
	{
		if (bVar7)
		{
			PED::SET_PED_HELMET(Global_112096.f_225[0], true);
			PED::GIVE_PED_HELMET(Global_112096.f_225[0], true, 4096, -1);
		}
		else
		{
			PED::SET_PED_HELMET(Global_112096.f_225[0], false);
		}
	}
	if (iVar6 != 0)
	{
		Global_112096.f_225[1] = PED::CREATE_PED_INSIDE_VEHICLE(Global_112096.f_222[0], 26, iVar6, 0, true, true);
		PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[1], 9, 0, 0, 0);
		ENTITY::SET_ENTITY_HEALTH(Global_112096.f_225[1], 400, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_112096.f_225[1], true, 1);
		if (iVar6 == joaat("A_M_M_Paparazzi_01"))
		{
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[1], 9, 0, 0, 0);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_112096.f_225[1], true);
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar3))
		{
			if (bVar7)
			{
				PED::SET_PED_HELMET(Global_112096.f_225[1], true);
				PED::GIVE_PED_HELMET(Global_112096.f_225[1], true, 4096, -1);
			}
			else
			{
				PED::SET_PED_HELMET(Global_112096.f_225[1], false);
			}
		}
	}
}

void func_1570(int iParam0)//Position - 0xAE6B1
{
	switch (iParam0)
	{
		case 1:
			Global_112096.f_225[0] = PED::CREATE_PED(26, joaat("U_M_M_JewelThief"), -1042.9464f, -2689.5498f, 12.7572f, 116.1366f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 8, 0, 0, 0);
			break;
		case 2:
			Global_112096.f_225[0] = PED::CREATE_PED(26, joaat("G_M_M_ChiGoon_02"), 1971.2462f, 3741.517f, 31.3268f, 180.6f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 8, 1, 1, 0);
			break;
		case 3:
			Global_112096.f_225[0] = PED::CREATE_PED(26, joaat("A_F_Y_GenHot_01"), 1358.8215f, -1547.3961f, 53.7793f, 41.1334f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 2, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 4, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 8, 1, 0, 0);
			break;
		case 4:
			Global_112096.f_225[0] = PED::CREATE_PED(26, joaat("G_M_Y_MexGoon_03"), -1612.2349f, 189.1934f, 58.9435f, 196.3547f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 8, 0, 1, 0);
			break;
		case 5:
			Global_112096.f_225[0] = PED::CREATE_PED(26, joaat("A_M_M_Farmer_01"), 11.8607f, -1123.48f, 27.6801f, 202f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 4, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 0, 0, 2, 0);
			break;
		case 6:
			Global_112096.f_225[0] = PED::CREATE_PED(26, joaat("A_M_Y_Skater_02"), -496.0739f, -336.6628f, 33.5017f, 256f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 4, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 0, 0, 1, 0);
			break;
		case 7:
			Global_112096.f_225[0] = PED::CREATE_PED(26, joaat("A_M_Y_SouCent_04"), 58.8213f, 293.848f, 109.6124f, 135.3f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 0, 1, 0, 0);
			break;
		case 8:
			Global_112096.f_225[0] = PED::CREATE_PED(26, joaat("A_F_Y_BevHills_03"), -412.0875f, 1171.3588f, 324.8176f, 0f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 0, 0, 1, 0);
			break;
		case 0:
			Global_112096.f_225[0] = PED::CREATE_PED(26, joaat("A_M_Y_Business_02"), -1284.3666f, 295.74365f, 63.83044f, -178.76f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[0], 8, 1, 0, 0);
			Global_112096.f_225[1] = PED::CREATE_PED(26, joaat("A_M_Y_Business_02"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_112096.f_225[0], 0.5f, 0.5f, 0f), 21.77f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[1], 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[1], 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[1], 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[1], 4, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[1], 8, 0, 0, 0);
			Global_112096.f_225[2] = PED::CREATE_PED(26, joaat("A_M_Y_Business_02"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_112096.f_225[0], 0.5f, -0.5f, 0f), -147.25f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[2], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[2], 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[2], 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[2], 4, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_112096.f_225[2], 8, 0, 3, 0);
			Global_112096.f_225[3] = PED::CREATE_PED(26, joaat("A_F_Y_Beach_01"), -1283.4502f, 299.3781f, 63.9305f, 151.9095f, true, true);
			Global_112096.f_225[4] = PED::CREATE_PED(26, joaat("A_F_Y_Beach_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_112096.f_225[3], 1f, 1f, 0f), 90.5877f, true, true);
			Global_112096.f_225[5] = PED::CREATE_PED(26, joaat("A_F_Y_Beach_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_112096.f_225[3], -1f, 1f, 0f), 163.5411f, true, true);
			Global_112096.f_225[6] = PED::CREATE_PED(26, joaat("A_F_Y_Beach_01"), -1282.8298f, 306.2308f, 63.9354f, 163.5411f, true, true);
			Global_112096.f_225[7] = PED::CREATE_PED(26, joaat("A_M_Y_Business_01"), -1280.987f, 305.4652f, 63.9499f, 90.5877f, true, true);
			Global_112096.f_222[0] = VEHICLE::CREATE_VEHICLE(joaat("stretch"), -1290.7235f, 284.893f, 63.7823f, 55.6864f, true, true, false);
			Global_112096.f_222[1] = VEHICLE::CREATE_VEHICLE(joaat("superd"), -1288.9644f, 296.9287f, 63.8537f, 67.6169f, true, true, false);
			break;
	}
}

void func_1571()//Position - 0xAECF5
{
	MISC::CLEAR_AREA(-1085.2794f, -2970.5725f, 12.9457f, 30f, true, false, false, false);
	Global_112096.f_222[0] = VEHICLE::CREATE_VEHICLE(joaat("stunt"), -1085.2794f, -2970.5725f, 12.9457f, 121.2244f, true, true, false);
}

void func_1572(int iParam0, int iParam1)//Position - 0xAED42
{
	int iVar0;
	switch (iParam0)
	{
		case 10:
			Global_112096.f_222[0] = VEHICLE::CREATE_VEHICLE(joaat("pony2"), __LIB_37__::func_499(iParam0, iParam1), __LIB_30__::func_725(iParam0, iParam1), true, true, false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112096.f_222[0], false))
			{
				VEHICLE::SET_VEHICLE_CAN_BREAK(Global_112096.f_222[0], false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_112096.f_222[0], 5f);
			}
			break;
		case 11:
		case 12:
		case 13:
		case 14:
			Global_112096.f_222[0] = VEHICLE::CREATE_VEHICLE(joaat("benson"), __LIB_37__::func_499(iParam0, iParam1), __LIB_30__::func_725(iParam0, iParam1), true, true, false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112096.f_222[0], false))
			{
				VEHICLE::SET_VEHICLE_CAN_BREAK(Global_112096.f_222[0], false);
				iVar0 = 1;
				while (iVar0 <= 8)
				{
					VEHICLE::SET_VEHICLE_EXTRA(Global_112096.f_222[0], iVar0, true);
					iVar0++;
				}
				VEHICLE::SET_VEHICLE_EXTRA(Global_112096.f_222[0], 2, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_112096.f_222[0], 5f);
			}
			break;
	}
}

int func_1576(int iParam0, var uParam1)//Position - 0xAF2F9
{
	uParam1 = uParam1;
	switch (iParam0)
	{
		case 11:
			if (STREAMING::HAS_MODEL_LOADED(func_1454(0)) && STREAMING::HAS_MODEL_LOADED(func_1453(0)))
			{
				return 1;
			}
			break;
		case 12:
			if (STREAMING::HAS_MODEL_LOADED(func_1454(1)) && STREAMING::HAS_MODEL_LOADED(func_1453(1)))
			{
				return 1;
			}
			break;
		case 13:
			if (STREAMING::HAS_MODEL_LOADED(func_1454(2)) && STREAMING::HAS_MODEL_LOADED(func_1453(2)))
			{
				return 1;
			}
			break;
		case 14:
			if (STREAMING::HAS_MODEL_LOADED(func_1454(0)) && STREAMING::HAS_MODEL_LOADED(func_1453(0)))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1577(int iParam0, int iParam1)//Position - 0xAF3A9
{
	if (iParam0 == iParam0)
	{
	}
	switch (iParam1)
	{
		case 0:
			if ((STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_EastSA_02")) && STREAMING::HAS_MODEL_LOADED(Global_112096.f_234)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TAKINGS", false, -1))
			{
				return 1;
			}
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Paparazzi_01")) && STREAMING::HAS_MODEL_LOADED(joaat("vader")))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1578(int iParam0)//Position - 0xAF41F
{
	switch (iParam0)
	{
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(joaat("U_M_M_JewelThief")))
			{
				return 1;
			}
			break;
		case 2:
			if (STREAMING::HAS_MODEL_LOADED(joaat("G_M_M_ChiGoon_02")))
			{
				return 1;
			}
			break;
		case 3:
			if (STREAMING::HAS_MODEL_LOADED(joaat("A_F_Y_GenHot_01")))
			{
				return 1;
			}
			break;
		case 4:
			if (STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_MexGoon_03")))
			{
				return 1;
			}
			break;
		case 5:
			if (STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Farmer_01")))
			{
				return 1;
			}
			break;
		case 6:
			if (STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_Skater_02")))
			{
				return 1;
			}
			break;
		case 7:
			if (STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_SouCent_04")))
			{
				return 1;
			}
			break;
		case 8:
			if (STREAMING::HAS_MODEL_LOADED(joaat("A_F_Y_BevHills_03")))
			{
				return 1;
			}
			break;
		case 0:
			if ((((STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_Business_02")) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_Business_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("A_F_Y_Beach_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("stretch"))) && STREAMING::HAS_MODEL_LOADED(joaat("superd")))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1579()//Position - 0xAF548
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("stunt")))
	{
		return 0;
	}
	return 1;
}

int func_1580(int iParam0, int iParam1)//Position - 0xAF562
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 10:
			if (!STREAMING::HAS_MODEL_LOADED(joaat("pony2")))
			{
				return 0;
			}
			break;
		case 11:
		case 12:
		case 13:
		case 14:
			if (!STREAMING::HAS_MODEL_LOADED(joaat("benson")))
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_1581(int iParam0, var uParam1)//Position - 0xAF5BC
{
	uParam1 = uParam1;
	switch (iParam0)
	{
		case 11:
			STREAMING::REQUEST_MODEL(func_1454(0));
			STREAMING::REQUEST_MODEL(func_1453(0));
			PED::SET_PED_MODEL_IS_SUPPRESSED(func_1454(0), true);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_1453(0), true);
			break;
		case 12:
			STREAMING::REQUEST_MODEL(func_1454(1));
			STREAMING::REQUEST_MODEL(func_1453(1));
			PED::SET_PED_MODEL_IS_SUPPRESSED(func_1454(1), true);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_1453(1), true);
			break;
		case 13:
			STREAMING::REQUEST_MODEL(func_1454(2));
			STREAMING::REQUEST_MODEL(func_1453(2));
			PED::SET_PED_MODEL_IS_SUPPRESSED(func_1454(2), true);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_1453(2), true);
			break;
		case 14:
			STREAMING::REQUEST_MODEL(func_1454(0));
			STREAMING::REQUEST_MODEL(func_1453(0));
			PED::SET_PED_MODEL_IS_SUPPRESSED(func_1454(0), true);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_1453(0), true);
			break;
	}
}

void func_1582(int iParam0, int iParam1)//Position - 0xAF68B
{
	if (iParam0 == iParam0)
	{
	}
	switch (iParam1)
	{
		case 0:
			if (Global_112096.f_234 == 0)
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
				{
					case 0:
						Global_112096.f_234 = joaat("futo");
						break;
					case 1:
						Global_112096.f_234 = joaat("phoenix");
						break;
					case 2:
						Global_112096.f_234 = joaat("sultan");
						break;
					}
			}
			STREAMING::REQUEST_MODEL(Global_112096.f_234);
			STREAMING::REQUEST_MODEL(joaat("A_M_M_EastSA_02"));
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TAKINGS", false, -1);
			break;
		case 1:
			STREAMING::REQUEST_MODEL(joaat("A_M_M_Paparazzi_01"));
			STREAMING::REQUEST_MODEL(joaat("vader"));
			break;
	}
}

void func_1583(int iParam0)//Position - 0xAF735
{
	switch (iParam0)
	{
		case 1:
			STREAMING::REQUEST_MODEL(joaat("U_M_M_JewelThief"));
			break;
		case 2:
			STREAMING::REQUEST_MODEL(joaat("G_M_M_ChiGoon_02"));
			break;
		case 3:
			STREAMING::REQUEST_MODEL(joaat("A_F_Y_GenHot_01"));
			break;
		case 4:
			STREAMING::REQUEST_MODEL(joaat("G_M_Y_MexGoon_03"));
			break;
		case 5:
			STREAMING::REQUEST_MODEL(joaat("A_M_M_Farmer_01"));
			break;
		case 6:
			STREAMING::REQUEST_MODEL(joaat("A_M_Y_Skater_02"));
			break;
		case 7:
			STREAMING::REQUEST_MODEL(joaat("A_M_Y_SouCent_04"));
			break;
		case 8:
			STREAMING::REQUEST_MODEL(joaat("A_F_Y_BevHills_03"));
			break;
		case 0:
			STREAMING::REQUEST_MODEL(joaat("A_M_Y_Business_02"));
			STREAMING::REQUEST_MODEL(joaat("A_M_Y_Business_01"));
			STREAMING::REQUEST_MODEL(joaat("A_F_Y_Beach_01"));
			STREAMING::REQUEST_MODEL(joaat("stretch"));
			STREAMING::REQUEST_MODEL(joaat("superd"));
			break;
	}
}

void func_1584()//Position - 0xAF80A
{
	STREAMING::REQUEST_MODEL(joaat("stunt"));
}

void func_1585(int iParam0, int iParam1)//Position - 0xAF81B
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 10:
			STREAMING::REQUEST_MODEL(joaat("pony2"));
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("pony2"), true);
			break;
		case 11:
		case 12:
		case 13:
		case 14:
			STREAMING::REQUEST_MODEL(joaat("benson"));
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("benson"), true);
			break;
	}
}

Vector3 func_1595(int iParam0, int iParam1, int iParam2)//Position - 0xAFCAA
{
	switch (iParam1)
	{
		case 1:
			return __LIB_37__::func_499(iParam0, __LIB_30__::func_727(iParam0, iParam2));
			break;
		case 3:
			return func_1596(iParam0, func_1459(iParam0, iParam2));
			break;
		case 6:
			return -1085.2794f, -2970.5725f, 12.9457f;
			break;
	}
	return __LIB_30__::func_723(iParam0);
}

Vector3 func_1596(int iParam0, int iParam1)//Position - 0xAFD0E
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1284.3666f, 295.74365f, 63.83044f;
					break;
				case 1:
					return -1042.9464f, -2689.5498f, 12.7572f;
					break;
				case 2:
					return 1971.2462f, 3741.517f, 31.3268f;
					break;
				case 3:
					return 1358.8215f, -1547.3961f, 53.7793f;
					break;
				case 4:
					return -1612.2349f, 189.1934f, 58.9435f;
					break;
				case 5:
					return 11.8607f, -1123.48f, 27.6801f;
					break;
				case 6:
					return -496.0739f, -336.6628f, 33.5017f;
					break;
				case 7:
					return 58.8213f, 293.848f, 109.6124f;
					break;
				case 8:
					return -412.0875f, 1171.3588f, 324.8176f;
					break;
			}
			break;
	}
	return __LIB_30__::func_723(iParam0);
}

int func_1600(int iParam0)//Position - 0xAFE5D
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = 0;
	while (iVar1 < Global_113386.f_7688.f_136)
	{
		if (Global_113386.f_7688[iVar1 /*15*/] == iParam0)
		{
			return func_1605(iParam0, iVar0);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_113386.f_7688.f_764)
	{
		if (Global_113386.f_7688.f_651[iVar1 /*14*/] == iParam0)
		{
			return func_1603(iParam0, iVar0);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_113386.f_7688.f_866)
	{
		if (Global_113386.f_7688.f_765[iVar1 /*10*/] == iParam0)
		{
			return func_1601(iParam0, iVar0);
		}
		iVar1++;
	}
	return 6;
}

int func_1601(int iParam0, int iParam1)//Position - 0xAFF13
{
	struct<10> Var0;
	bool bVar1;
	Var0 = { __LIB_29__::func_867(iParam0) };
	if (Var0.f_0 != iParam0)
	{
		return 6;
	}
	if (!__LIB_0__::func_317(__LIB_26__::func_499()))
	{
		return 6;
	}
	bVar1 = false;
	if (BitTest(Var0.f_2, __LIB_26__::func_499()))
	{
		bVar1 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (bVar1)
	{
		if (Var0.f_3 < Global_113386.f_7688.f_919[__LIB_26__::func_499()])
		{
			return 5;
		}
	}
	if (Var0.f_6 != 144)
	{
		if (Global_43604[Var0.f_6] > iParam1)
		{
			return 3;
		}
	}
	if (Global_43603 > iParam1)
	{
		return 2;
	}
	return 1;
}

int func_1603(int iParam0, int iParam1)//Position - 0xAFFF7
{
	struct<14> Var0;
	bool bVar1;
	Var0 = { __LIB_29__::func_868(iParam0) };
	if (Var0.f_0 != iParam0)
	{
		return 6;
	}
	if (!__LIB_0__::func_317(__LIB_26__::func_499()))
	{
		return 6;
	}
	bVar1 = false;
	if (BitTest(Var0.f_2, __LIB_26__::func_499()))
	{
		bVar1 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (bVar1)
	{
		if (Var0.f_3 < Global_113386.f_7688.f_919[__LIB_26__::func_499()])
		{
			return 5;
		}
	}
	if (Global_43604[Var0.f_6] > iParam1)
	{
		return 3;
	}
	if (Global_43603 > iParam1)
	{
		return 2;
	}
	return 1;
}

int func_1605(int iParam0, int iParam1)//Position - 0xB00D4
{
	struct<15> Var0;
	bool bVar1;
	Var0 = { __LIB_29__::func_869(iParam0) };
	if (Var0.f_0 != iParam0)
	{
		return 6;
	}
	if (!__LIB_0__::func_317(__LIB_26__::func_499()))
	{
		return 1;
	}
	if (Global_43599 != -1)
	{
		if (Global_113386.f_7688[Global_43599 /*15*/] == iParam0)
		{
			return 0;
		}
	}
	bVar1 = false;
	if (BitTest(Var0.f_2, __LIB_26__::func_499()))
	{
		bVar1 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (bVar1)
	{
		if (Var0.f_3 < Global_113386.f_7688.f_919[__LIB_26__::func_499()])
		{
			return 5;
		}
	}
	if (Global_43604[Var0.f_6] > iParam1)
	{
		return 3;
	}
	if (Global_43603 > iParam1)
	{
		return 2;
	}
	return 1;
}

void func_1610(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)//Position - 0xB02FD
{
	int iVar0;
	int iVar1;
	iParam0 = iParam0;
	iVar1 = 0;
	switch (iParam1)
	{
		case 1:
			switch (__LIB_30__::func_727(iParam0, iParam2))
			{
				case 0:
				case 1:
				case 2:
					*uParam3 = 53;
					iVar0 = 3;
					break;
				case 3:
				case 4:
					*uParam3 = 53;
					iVar0 = 3;
					break;
				case 5:
				case 6:
					*uParam3 = 53;
					iVar1 = 3;
					iVar0 = 5;
					break;
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
				case 13:
					*uParam3 = 54;
					iVar0 = 6;
					break;
			}
			break;
		case 2:
			*uParam3 = 58;
			iVar0 = 2;
			break;
		case 5:
			*uParam3 = 55;
			iVar0 = 6;
			break;
		case 4:
			switch (__LIB_30__::func_730(iParam0, iParam2))
			{
				case 0:
					*uParam3 = 56;
					iVar0 = 3;
					break;
				case 1:
					*uParam3 = 57;
					iVar0 = 3;
					break;
			}
			break;
		case 6:
			*uParam3 = 60;
			iVar0 = 3;
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(iVar1, iVar0))
	{
		case 0:
			*uParam4 = 33;
			break;
		case 1:
			*uParam4 = 34;
			break;
		case 2:
			*uParam4 = 35;
			break;
		case 3:
			*uParam4 = 36;
			break;
		case 4:
			*uParam4 = 37;
			break;
		case 5:
			*uParam4 = 38;
			break;
	}
}

int func_1611(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0xB0478
{
	struct<15> Var0;
	bool bVar1;
	if (__LIB_0__::func_2(0))
	{
		return 0;
	}
	if (iParam7 < 0)
	{
		return 0;
	}
	if (iParam8 < 0)
	{
		return 0;
	}
	if (iParam10 == 76)
	{
		return 0;
	}
	if (iParam11 == 235)
	{
		return 0;
	}
	if (bParam5 < 3)
	{
		if (BitTest(iParam4, bParam5))
		{
			return 0;
		}
	}
	if (iParam6 < 3)
	{
		if (iParam6 != bParam5)
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (Global_113386.f_7688.f_136 < 9)
	{
		Var0.f_0 = uParam0;
		if (Global_113386.f_7688.f_911 == Var0.f_0)
		{
			Global_113386.f_7688.f_911 = -1;
		}
		Var0.f_3 = __LIB_0__::func_522(iParam3);
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam7);
		Var0.f_5 = iParam8;
		Var0.f_1 = iParam13;
		Var0.f_2 = iParam4;
		Var0.f_6 = bParam5;
		Var0.f_14 = iParam6;
		Var0.f_10 = iParam9;
		Var0.f_12 = uParam1;
		Var0.f_13 = uParam2;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		Var0.f_9 = iParam12;
		MISC::SET_BIT(&(Var0.f_1), 1);
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		if (iParam9 != -1)
		{
			MISC::SET_BIT(&(Var0.f_1), 11);
		}
		else if (iParam3 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_113386.f_7688[Global_113386.f_7688.f_136 /*15*/] = { Var0 };
		Global_113386.f_7688.f_136++;
		bVar1 = false;
		while (bVar1 < 3)
		{
			if (BitTest(iParam4, bVar1))
			{
				__LIB_12__::func_132(bVar1);
			}
			bVar1++;
		}
		return 1;
	}
	return 0;
}

int func_1614(int iParam0)//Position - 0xB06FD
{
	switch (iParam0)
	{
		case 1:
			switch (__LIB_26__::func_499())
			{
				case 0:
					return 7;
					break;
				case 2:
					return 11;
					break;
				case 1:
					return 9;
					break;
			}
			break;
	}
	return 22;
}

int func_1615(int iParam0)//Position - 0xB0749
{
	switch (iParam0)
	{
		case 0:
			return 20;
			break;
		case 1:
			return 18;
			break;
		case 2:
			return 14;
			break;
		case 3:
			return 15;
			break;
		case 4:
			return 19;
			break;
		case 5:
			return 16;
			break;
		case 6:
			return 13;
			break;
		case 7:
			return 12;
			break;
		case 8:
			return 17;
			break;
	}
	return 22;
}

int func_1616(int iParam0)//Position - 0xB07D8
{
	switch (iParam0)
	{
		case 0:
			return -1240893790;
			break;
		case 1:
			return 1357642229;
			break;
		case 2:
			return 1752783247;
			break;
		case 3:
			return 1016954269;
			break;
		case 4:
			return -767033321;
			break;
		case 5:
			return -456311088;
			break;
		case 6:
			return -100973682;
			break;
		case 7:
			return 738411510;
			break;
		case 8:
			return 2129099422;
			break;
	}
	return -1;
}

int func_1617(int iParam0)//Position - 0xB0881
{
	switch (iParam0)
	{
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_1618(int iParam0)//Position - 0xB089E
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bVar3 = true;
	switch (iParam0)
	{
		case 0:
			if (__LIB_0__::func_176(48))
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(3, 5);
			}
			else
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(6, 7);
			}
			break;
		case 1:
			if (__LIB_0__::func_176(48))
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(3, 5);
			}
			else
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(6, 7);
			}
			break;
		case 2:
			iVar0 = 0;
			bVar3 = false;
			iVar1 = 0;
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 60);
			break;
		case 3:
			iVar0 = 0;
			break;
	}
	if (bVar3)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 24);
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 60);
	}
	iVar4 = __LIB_13__::func_95();
	__LIB_32__::func_437(&iVar4, 0, iVar2, iVar1, iVar0, 0, 0);
	if (__LIB_20__::func_682(iVar4, Global_113386.f_24904.f_67))
	{
		Global_113386.f_24904.f_67 = iVar4;
	}
}

void func_1619()//Position - 0xB096A
{
	if (__LIB_0__::func_517(Global_112096.f_35, 4194304))
	{
		if (HUD::DOES_BLIP_EXIST(Global_112096.f_31))
		{
			HUD::REMOVE_BLIP(&(Global_112096.f_31));
		}
		if (__LIB_11__::func_773(Global_112096.f_36))
		{
			__LIB_36__::func_57(Global_112096.f_36);
		}
		if (__LIB_0__::func_517(Global_112096.f_35, 1048576))
		{
			__LIB_11__::func_647(2, 1);
			__LIB_7__::func_204(&(Global_112096.f_35), 1048576);
		}
		Global_112096.f_33 = MISC::GET_GAME_TIMER();
		Global_112096.f_19 = 0;
		__LIB_7__::func_204(&(Global_112096.f_35), 4194304);
	}
}

int func_1630(int iParam0, var uParam1, var uParam2)//Position - 0xB0FC8
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bVar1 = false;
	if (__LIB_0__::func_368(130) && !__LIB_0__::func_368(131))
	{
		if ((iParam0 == 5 || iParam0 == 6) || iParam0 == 7)
		{
			bVar1 = true;
		}
		else if ((iParam0 == 11 || iParam0 == 12) || iParam0 == 9)
		{
			if (Global_113386.f_24904[iParam0 /*4*/] != 1)
			{
				bVar1 = true;
			}
		}
	}
	if (!bVar1)
	{
		iVar2 = 0;
		while (iVar2 < func_1536(iParam0))
		{
			iVar0 = func_1636(iParam0, iVar2);
			iVar3 = 0;
			while (iVar3 < func_1635(iParam0, iVar0))
			{
				if (func_1634(iParam0, iVar0, iVar3))
				{
					if (func_1631(iParam0, iVar0, iVar3))
					{
						*uParam1 = iVar0;
						*uParam2 = iVar3;
						return 1;
					}
				}
				iVar3++;
			}
			iVar2++;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_1631(int iParam0, int iParam1, int iParam2)//Position - 0xB10A6
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	struct<3> Var3;
	bVar2 = false;
	if (iParam1 != 1)
	{
		switch (iParam0)
		{
			case 11:
			case 12:
				Var0 = { -2541f, -3646f, 0f };
				Var1 = { 1934f, 1495f, 0f };
				bVar2 = true;
				break;
			case 13:
				Var0 = { -3142f, 5278f, 0f };
				Var1 = { 4200f, 7722f, 0f };
				bVar2 = true;
				break;
			case 14:
				Var0 = { -3447f, 2447f, 0f };
				Var1 = { 4200f, 5368f, 0f };
				bVar2 = true;
				break;
			}
	}
	Var3 = { func_1595(iParam0, iParam1, iParam2) };
	if (!bVar2)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var3, func_1633(iParam0, iParam1, iParam2), false, false, 0))
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var3, func_1632(iParam0, iParam1, iParam2), false, false, 0))
			{
				return 1;
			}
		}
	}
	else if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, false, false, 0))
	{
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var3, func_1632(iParam0, iParam1, iParam2), false, false, 0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_1632(int iParam0, int iParam1, int iParam2)//Position - 0xB11CE
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	iParam2 = iParam2;
	switch (iParam1)
	{
		case 3:
			return 150f, 150f, 150f;
			break;
	}
	return 200f, 200f, 200f;
}

Vector3 func_1633(int iParam0, int iParam1, int iParam2)//Position - 0xB1213
{
	int iVar0;
	iParam2 = iParam2;
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 1:
					iVar0 = __LIB_30__::func_727(iParam0, iParam2);
					if (iVar0 == 3)
					{
						return 2000f, 2000f, 2000f;
					}
					else
					{
						return 1250f, 1250f, 1250f;
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 3:
					break;
			}
			break;
		case 6:
		case 5:
		case 7:
			switch (iParam1)
			{
				case 6:
					return 2000f, 2000f, 2000f;
					break;
			}
			break;
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 1:
					iVar0 = __LIB_30__::func_727(iParam0, iParam2);
					if (iVar0 == 7)
					{
						return 2000f, 2000f, 2000f;
					}
					else if (iVar0 == 8)
					{
						return 1500f, 1500f, 1500f;
					}
					break;
			}
			break;
	}
	return 1000f, 1000f, 1000f;
}

int func_1634(int iParam0, int iParam1, int iParam2)//Position - 0xB133E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = func_1539(iParam0, iParam1, iParam2);
	iVar1 = func_1537(iParam0, iParam1, iParam2);
	bVar2 = false;
	if ((iVar0 == 16384 || !__LIB_0__::func_517(Global_113386.f_24904.f_65, iVar0)) && (iVar1 == 33554432 || !__LIB_0__::func_517(Global_113386.f_24904.f_66, iVar1)))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_1635(int iParam0, int iParam1)//Position - 0xB13BA
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 1:
					return 7;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 2:
					return 2;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 3:
					return 9;
					break;
			}
			break;
		case 5:
		case 6:
		case 7:
			switch (iParam1)
			{
				case 4:
					return 1;
					break;
				case 6:
					return 1;
					break;
			}
			break;
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 4:
					return 2;
					break;
				case 1:
					if (iParam0 == 11 || iParam0 == 12)
					{
						return 5;
					}
					else
					{
						return 2;
					}
					break;
				case 5:
					return 2;
					break;
			}
			break;
	}
	return 0;
}

int func_1636(int iParam0, int iParam1)//Position - 0xB14BB
{
	switch (iParam0)
	{
		case 10:
			return 1;
			break;
		case 9:
			return 2;
			break;
		case 1:
			return 3;
			break;
		case 5:
		case 6:
		case 7:
			switch (iParam1)
			{
				case 0:
					return 4;
					break;
				case 1:
					return 6;
					break;
			}
			break;
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 4;
					break;
				case 1:
					return 1;
					break;
				case 2:
					return 5;
					break;
			}
			break;
	}
	return 1;
}

void func_1638(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0xB1583
{
	int iVar0;
	int iVar1;
	uParam0 = uParam0;
	uParam2 = uParam2;
	iVar1 = 0;
	switch (iParam1)
	{
		case 2:
			*uParam3 = 58;
			iVar0 = 1;
			break;
		case 5:
			*uParam3 = 55;
			iVar0 = 6;
			break;
		case 6:
			*uParam3 = 60;
			iVar0 = 3;
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(iVar1, iVar0))
	{
		case 0:
			*uParam4 = 39;
			break;
		case 1:
			*uParam4 = 40;
			break;
		case 2:
			*uParam4 = 41;
			break;
		case 3:
			*uParam4 = 42;
			break;
		case 4:
			*uParam4 = 43;
			break;
		case 5:
			*uParam4 = 44;
			break;
	}
}

int func_1639()//Position - 0xB1631
{
	if (Global_112096.f_21 == 1)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), __LIB_30__::func_723(Global_112096.f_20), 120f, 120f, 120f, false, false, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_1641(int iParam0)//Position - 0xB17AA
{
	switch (iParam0)
	{
		case 1:
			return 113;
			break;
		case 5:
			return 114;
			break;
		case 6:
			return 115;
			break;
		case 7:
			return 116;
			break;
		case 9:
			return 117;
			break;
		case 10:
			return 118;
			break;
		case 11:
			return 119;
			break;
		case 12:
			return 120;
			break;
		case 13:
			return 121;
			break;
		case 14:
			return 122;
			break;
	}
	return 122;
}

void func_1643(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)//Position - 0xB187E
{
	int iVar0;
	int iVar1;
	iParam0 = iParam0;
	iVar1 = 0;
	switch (iParam1)
	{
		case 1:
			switch (__LIB_30__::func_727(iParam0, iParam2))
			{
				case 0:
				case 1:
				case 2:
					*uParam3 = 53;
					iVar0 = 3;
					break;
				case 3:
				case 4:
					*uParam3 = 53;
					iVar0 = 3;
					break;
				case 5:
				case 6:
					*uParam3 = 53;
					iVar0 = 3;
					break;
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
				case 13:
					*uParam3 = 54;
					iVar0 = 5;
					break;
			}
			break;
		case 2:
			*uParam3 = 58;
			iVar0 = 1;
			break;
		case 3:
			*uParam3 = 59;
			if (Global_112096.f_220 == 0)
			{
				iVar1 = 0;
				iVar0 = 5;
			}
			else
			{
				iVar1 = 5;
				iVar0 = 8;
			}
			break;
		case 5:
			*uParam3 = 55;
			iVar0 = 3;
			break;
		case 4:
			switch (__LIB_30__::func_730(iParam0, iParam2))
			{
				case 0:
					*uParam3 = 56;
					iVar0 = 3;
					break;
				case 1:
					*uParam3 = 57;
					if (Global_112096.f_220 == 1)
					{
						iVar1 = 3;
						iVar0 = 6;
					}
					else
					{
						iVar1 = 0;
						iVar0 = 3;
					}
					break;
			}
			break;
		case 6:
			*uParam3 = 60;
			iVar0 = 3;
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(iVar1, iVar0))
	{
		case 0:
			*uParam4 = 45;
			break;
		case 1:
			*uParam4 = 46;
			break;
		case 2:
			*uParam4 = 47;
			break;
		case 3:
			*uParam4 = 48;
			break;
		case 4:
			*uParam4 = 49;
			break;
		case 5:
			*uParam4 = 50;
			break;
		case 6:
			*uParam4 = 51;
			break;
		case 7:
			*uParam4 = 52;
			break;
	}
}

char* func_1644(int iParam0)//Position - 0xB1A50
{
	switch (iParam0)
	{
		case 2:
			return "PN_TRAF" /* GXT: McKenzie Field Hangar */;
			break;
		case 9:
			return "PN_CSCR" /* GXT: Car Scrapyard */;
			break;
		case 10:
			return "PN_WEED" /* GXT: Smoke on the Water */;
			break;
		case 1:
			return "PN_TAXI" /* GXT: Downtown Cab Co. */;
			break;
		case 4:
			return "PN_CMSH" /* GXT: Los Santos Customs */;
			break;
		case 3:
			return "PN_SOCO" /* GXT: Sonar Collections Dock */;
			break;
		case 0:
			return "PN_TOWI" /* GXT: Towing Impound */;
			break;
		case 8:
			return "PN_GOLF" /* GXT: Los Santos Golf Club */;
			break;
		case 5:
			return "PN_CINV" /* GXT: Cinema Doppler */;
			break;
		case 6:
			return "PN_CIND" /* GXT: Ten Cent Theater */;
			break;
		case 7:
			return "PN_CINM" /* GXT: Tivoli Cinema */;
			break;
		case 11:
			return "PN_BRTE" /* GXT: Tequi-la-la */;
			break;
		case 12:
			return "PN_BRPI" /* GXT: Pitchers */;
			break;
		case 13:
			return "PN_BRHE" /* GXT: The Hen House */;
			break;
		case 14:
			return "PN_BRHO" /* GXT: Hookies */;
			break;
		case 15:
			return "PN_STRP" /* GXT: Vanilla Unicorn */;
			break;
	}
	return "error";
}

char* func_1645(int iParam0, int iParam1, int iParam2)//Position - 0xB1B74
{
	switch (iParam1)
	{
		case 1:
			if (iParam0 == 10)
			{
				return "PROPR_SUC_WEED" /* GXT: WEED DELIVERED */;
			}
			else
			{
				return "PROPR_SUC_BOOD" /* GXT: BOOZE DELIVERED */;
			}
			break;
		case 2:
			return "PROPR_SUC_SCRD" /* GXT: SCRAPYARD DEFENDED */;
			break;
		case 4:
			switch (__LIB_30__::func_730(iParam0, iParam2))
			{
				case 0:
					if ((iParam0 == 5 || iParam0 == 7) || iParam0 == 6)
					{
						return "PROPR_SUC_CITR" /* GXT: CINEMA TAKINGS RECOVERED */;
					}
					else
					{
						return "PROPR_SUC_BATR" /* GXT: BAR TAKINGS RECOVERED */;
					}
					break;
				case 1:
					return "PROPR_SUC_PHOR" /* GXT: PHOTOS RECOVERED */;
					break;
			}
			break;
		case 5:
			return "PROPR_SUC_BARD" /* GXT: BAR DEFENDED */;
			break;
		case 6:
			return "PROPR_SUC_CPRO" /* GXT: CINEMA PROMOTED */;
			break;
	}
	return "error";
}

void func_1646(bool bParam0)//Position - 0xB1C3C
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	bVar0 = false;
	iVar1 = Global_112096;
	if (bParam0)
	{
		if (Global_113386.f_24904[iVar1 /*4*/] == 145)
		{
			if (__LIB_0__::func_517(Global_112096.f_2[iVar1], 2))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), __LIB_30__::func_723(iVar1)) < 22500f)
				{
					__LIB_6__::func_896(&(Global_112096.f_2[iVar1]), 4);
					AUDIO::HINT_SCRIPT_AUDIO_BANK("HUD_PROPERTY", 0, -1);
				}
				else
				{
					__LIB_7__::func_204(&(Global_112096.f_2[iVar1]), 4);
					__LIB_7__::func_204(&(Global_112096.f_2[iVar1]), 64);
				}
			}
		}
	}
	else
	{
		__LIB_7__::func_204(&(Global_112096.f_2[iVar1]), 4);
		__LIB_7__::func_204(&(Global_112096.f_2[iVar1]), 64);
	}
	iVar2 = 0;
	while (iVar2 < 16)
	{
		iVar3 = iVar2;
		if (__LIB_0__::func_517(Global_112096.f_2[iVar3], 4))
		{
			if (!__LIB_0__::func_517(Global_112096.f_2[iVar3], 64))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), __LIB_30__::func_723(iVar3)) < 22500f)
				{
					if (!__LIB_0__::func_517(Global_112096.f_35, 262144))
					{
						switch (Global_112096.f_25)
						{
							case 0:
								STREAMING::REQUEST_MODEL(func_1524());
								Global_112096.f_25 = 1;
								break;
							case 1:
								if (STREAMING::HAS_MODEL_LOADED(func_1524()))
								{
									Global_112096.f_25 = 2;
								}
								break;
							case 2:
								iVar5 = -1;
								iVar4 = 0;
								while (iVar4 < 2)
								{
									if (!ENTITY::DOES_ENTITY_EXIST(Global_112096.f_26[iVar4]))
									{
										iVar5 = iVar4;
									}
									iVar4++;
								}
								if (iVar5 >= 0)
								{
									Global_112096.f_26[iVar5] = OBJECT::CREATE_OBJECT(func_1524(), __LIB_30__::func_723(iVar3), true, true, false);
									ENTITY::SET_ENTITY_HEADING(Global_112096.f_26[iVar5], func_1661(iVar3));
									func_1523();
									__LIB_6__::func_896(&(Global_112096.f_2[iVar3]), 64);
								}
								break;
							}
						}
					}
			}
			if (!__LIB_0__::func_517(Global_112096.f_35, 2097152))
			{
				if (iVar3 == 2)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), __LIB_30__::func_723(iVar3), 50f, 50f, 50f, false, true, 0))
					{
						CUTSCENE::REQUEST_CUTSCENE("oscar_mcs_1", 8);
						STREAMING::SET_SRL_FORCE_PRESTREAM(2);
						STREAMING::REQUEST_MODEL(joaat("cuban800"));
						STREAMING::REQUEST_MODEL(joaat("dune"));
						__LIB_6__::func_896(&(Global_112096.f_35), 2097152);
					}
				}
				else
				{
					__LIB_7__::func_204(&(Global_112096.f_35), 2097152);
				}
			}
			else if (iVar3 == 2)
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), __LIB_30__::func_723(iVar3), 60f, 60f, 60f, false, true, 0))
				{
					func_1521(1);
				}
			}
			if (!__LIB_0__::func_517(Global_112096.f_35, 33554432))
			{
				if (iVar3 == 0)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), __LIB_30__::func_723(iVar3), 50f, 50f, 50f, false, true, 0))
					{
						STREAMING::REQUEST_MODEL(joaat("towtruck"));
						__LIB_6__::func_896(&(Global_112096.f_35), 33554432);
					}
				}
				else
				{
					__LIB_7__::func_204(&(Global_112096.f_35), 33554432);
				}
			}
			else if (iVar3 == 0)
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), __LIB_30__::func_723(iVar3), 60f, 60f, 60f, false, true, 0))
				{
					func_1521(1);
				}
			}
			if (!__LIB_0__::func_517(Global_112096.f_35, 268435456))
			{
				if (iVar3 == 8)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), __LIB_30__::func_723(iVar3), 20f, 20f, 20f, false, true, 0))
					{
						Global_112096.f_218 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-1418.6703f, 50.412415f, 55.50515f, __LIB_2__::func_162(7.033136f, 0f, -82.49706f), 100f, 12, 127);
						__LIB_6__::func_896(&(Global_112096.f_35), 268435456);
					}
				}
				else
				{
					__LIB_7__::func_204(&(Global_112096.f_35), 268435456);
				}
			}
			else if (iVar3 == 8)
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), __LIB_30__::func_723(iVar3), 25f, 25f, 25f, false, true, 0))
				{
					func_1521(1);
				}
			}
			if (((((((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), __LIB_30__::func_723(iVar3), 4f, 4f, 2f, false, true, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0) && bParam0) && !func_1660(iVar3)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !__LIB_0__::func_77(0)) && !__LIB_0__::func_517(Global_112096.f_35, 16)) && !PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/)) && !(__LIB_0__::func_200() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())) && !__LIB_0__::func_190())
			{
				switch (iVar3)
				{
					case 2:
						sVar6 = "PROPR_PUR_TRAF" /* GXT: McKenzie Field Hangar~n~Cost: $~a~~n~Income: $5,000 per ground shipment / $7,000 per air shipment~n~Press ~INPUT_CONTEXT~ to purchase. */;
						break;
					case 9:
						sVar6 = "PROPR_PUR_CSCR" /* GXT: Car Scrapyard~n~Cost: $~a~~n~Weekly income: $150 per destroyed car~n~Press ~INPUT_CONTEXT~ to purchase. */;
						break;
					case 10:
						sVar6 = "PROPR_PUR_WEED" /* GXT: Smoke on the Water~n~Cost: $~a~~n~Weekly income: $9,300~n~Press ~INPUT_CONTEXT~ to purchase. */;
						break;
					case 1:
						sVar6 = "PROPR_PUR_TAXI" /* GXT: Downtown Cab Co.~n~Cost: $~a~~n~Weekly income: $2,000~n~Press ~INPUT_CONTEXT~ to purchase. */;
						break;
					case 4:
						sVar6 = "PROPR_PUR_CMSH" /* GXT: Los Santos Customs~n~Cost: $~a~~n~Weekly income: $1,600~n~Press ~INPUT_CONTEXT~ to purchase. */;
						break;
					case 3:
						sVar6 = "PROPR_PUR_SOCO" /* GXT: Sonar Collections Dock~n~Cost: $~a~~n~Income: $23,000 per nuclear waste found~n~Press ~INPUT_CONTEXT~ to purchase. */;
						break;
					case 0:
						sVar6 = "PROPR_PUR_TOWI" /* GXT: Towing Impound~n~Cost: $~a~~n~Income: $500 per car towed~n~Press ~INPUT_CONTEXT~ to purchase. */;
						break;
					case 8:
						sVar6 = "PROPR_PUR_GOLF" /* GXT: Los Santos Golf Club~n~Cost: $~a~~n~Weekly income: $264,500~n~Press ~INPUT_CONTEXT~ to purchase. */;
						break;
					case 5:
						sVar6 = "PROPR_PUR_CINV" /* GXT: Cinema Doppler~n~Cost: $~a~~n~Weekly income: $132,200~n~Press ~INPUT_CONTEXT~ to purchase. */;
						break;
					case 6:
						sVar6 = "PROPR_PUR_CIND" /* GXT: Ten Cent Theater~n~Cost: $~a~~n~Weekly income: $264,000~n~Press ~INPUT_CONTEXT~ to purchase. */;
						break;
					case 7:
						sVar6 = "PROPR_PUR_CINM" /* GXT: Tivoli Cinema~n~Cost: $~a~~n~Weekly income: $142,300~n~Press ~INPUT_CONTEXT~ to purchase. */;
						break;
					case 11:
						sVar6 = "PROPR_PUR_BARTE" /* GXT: Tequi-la-la~n~Cost: $~a~~n~Weekly income: $16,500~n~Press ~INPUT_CONTEXT~ to purchase. */;
						break;
					case 12:
						sVar6 = "PROPR_PUR_BARPI" /* GXT: Pitchers~n~Cost: $~a~~n~Weekly income: $7,100~n~Press ~INPUT_CONTEXT~ to purchase. */;
						break;
					case 13:
						sVar6 = "PROPR_PUR_BARHE" /* GXT: The Hen House~n~Cost: $~a~~n~Weekly income: $920~n~Press ~INPUT_CONTEXT~ to purchase. */;
						break;
					case 14:
						sVar6 = "PROPR_PUR_BARHO" /* GXT: Hookies~n~Cost: $~a~~n~Weekly income: $4,700~n~Press ~INPUT_CONTEXT~ to purchase. */;
						break;
				}
				bVar7 = false;
				if (!__LIB_0__::func_517(Global_112096.f_35, 2097152))
				{
					bVar7 = true;
				}
				else if ((CUTSCENE::HAS_CUTSCENE_LOADED() && STREAMING::HAS_MODEL_LOADED(joaat("cuban800"))) && STREAMING::HAS_MODEL_LOADED(joaat("dune")))
				{
					bVar7 = true;
				}
				if (bVar7)
				{
					__LIB_10__::func_115();
					bVar0 = true;
					bVar8 = false;
					iVar9 = func_1657(iVar3);
					if ((iVar9 == __LIB_26__::func_499() || iVar9 == 145) && !func_1656(iVar3, __LIB_26__::func_499()))
					{
						bVar8 = true;
					}
					iVar10 = func_1491(iVar3);
					if (bVar8)
					{
						if (__LIB_9__::func_231(__LIB_26__::func_499()) >= iVar10)
						{
							if (!__LIB_0__::func_517(Global_112096.f_35, 131072))
							{
								if (!__LIB_0__::func_517(Global_112096.f_35, 8192))
								{
									__LIB_9__::func_565(sVar6, func_1654(iVar3));
									__LIB_6__::func_896(&(Global_112096.f_35), 8192);
									__LIB_7__::func_204(&(Global_112096.f_35), 16384);
									__LIB_7__::func_204(&(Global_112096.f_35), 32768);
									__LIB_7__::func_204(&(Global_112096.f_35), 65536);
								}
							}
							else if (!__LIB_0__::func_517(Global_112096.f_35, 32768))
							{
								__LIB_9__::func_565("PROPR_PUR_CONF" /* GXT: Press ~INPUT_CONTEXT~ to confirm purchase for $~a~. */, func_1654(iVar3));
								__LIB_6__::func_896(&(Global_112096.f_35), 32768);
								__LIB_7__::func_204(&(Global_112096.f_35), 16384);
								__LIB_7__::func_204(&(Global_112096.f_35), 8192);
								__LIB_7__::func_204(&(Global_112096.f_35), 65536);
							}
						}
						else if (!__LIB_0__::func_517(Global_112096.f_35, 16384))
						{
							__LIB_9__::func_565("PROPR_PUR_NOMO" /* GXT: This property costs $~a~. Earn more money to pay for it. */, func_1654(iVar3));
							__LIB_7__::func_204(&(Global_112096.f_35), 8192);
							__LIB_6__::func_896(&(Global_112096.f_35), 16384);
							__LIB_7__::func_204(&(Global_112096.f_35), 32768);
							__LIB_7__::func_204(&(Global_112096.f_35), 65536);
						}
					}
					else if (!__LIB_0__::func_517(Global_112096.f_35, 65536))
					{
						if (iVar3 == 14)
						{
							__LIB_0__::func_187("PROPR_PUR_OMAT" /* GXT: Only Michael or Franklin can purchase this property. */);
						}
						else
						{
							switch (iVar9)
							{
								case 2:
									__LIB_0__::func_187("PROPR_PUR_OTRE" /* GXT: Only Trevor can purchase this property. */);
									break;
								case 1:
									__LIB_0__::func_187("PROPR_PUR_OFRA" /* GXT: Only Franklin can purchase this property. */);
									break;
								case 0:
									__LIB_0__::func_187("PROPR_PUR_OMIC" /* GXT: Only Michael can purchase this property. */);
									break;
								}
						}
						__LIB_7__::func_204(&(Global_112096.f_35), 8192);
						__LIB_7__::func_204(&(Global_112096.f_35), 16384);
						__LIB_7__::func_204(&(Global_112096.f_35), 32768);
						__LIB_6__::func_896(&(Global_112096.f_35), 65536);
					}
					Global_112096.f_217 = iVar3;
					HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 46 /*INPUT_TALK*/, true);
					if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
					{
						if (__LIB_9__::func_231(__LIB_26__::func_499()) >= iVar10 && bVar8)
						{
							if (__LIB_0__::func_517(Global_112096.f_35, 131072))
							{
								HUD::CLEAR_HELP(true);
								Global_113386.f_24904[iVar3 /*4*/] = __LIB_26__::func_499();
								STATS::STAT_SET_BOOL(__LIB_29__::func_866(iVar3, 0), true, true);
								__LIB_6__::func_896(&(Global_113386.f_24904[iVar3 /*4*/].f_2), 2);
								func_1526(iVar3, 4);
								__LIB_6__::func_896(&(Global_113386.f_24904[iVar3 /*4*/].f_2), 1);
								switch (iVar3)
								{
									case 9:
										Global_113386.f_24904.f_68 = func_1651();
										break;
									case 3:
										Global_112096.f_216 = iVar3;
										__LIB_6__::func_896(&(Global_112096.f_35), 4096);
										break;
									case 0:
										__LIB_36__::func_57(joaat("CALL_PROP_TOWING"));
										Global_112096.f_216 = iVar3;
										__LIB_6__::func_896(&(Global_112096.f_35), 4096);
										break;
								}
								func_1493(iVar3, 1);
								if (!__LIB_0__::func_517(Global_112096.f_35, 2097152))
								{
									func_1522(1, 0);
								}
								func_1647();
								Global_112096.f_42 = iVar3;
								__LIB_7__::func_204(&(Global_112096.f_2[iVar3]), 4);
								__LIB_7__::func_204(&(Global_112096.f_2[iVar3]), 2);
								__LIB_7__::func_204(&(Global_112096.f_35), 32);
								__LIB_6__::func_896(&(Global_112096.f_35), 16);
							}
							else
							{
								__LIB_6__::func_896(&(Global_112096.f_35), 131072);
							}
						}
					}
				}
			}
		}
		if (iVar3 == Global_112096.f_217)
		{
			if (!bVar0)
			{
				if (((__LIB_0__::func_517(Global_112096.f_35, 8192) || __LIB_0__::func_517(Global_112096.f_35, 16384)) || __LIB_0__::func_517(Global_112096.f_35, 32768)) || __LIB_0__::func_517(Global_112096.f_35, 65536))
				{
					if (!__LIB_0__::func_517(Global_112096.f_35, 16))
					{
						HUD::CLEAR_HELP(true);
						__LIB_7__::func_204(&(Global_112096.f_35), 8192);
						__LIB_7__::func_204(&(Global_112096.f_35), 16384);
						__LIB_7__::func_204(&(Global_112096.f_35), 32768);
						__LIB_7__::func_204(&(Global_112096.f_35), 65536);
						__LIB_7__::func_204(&(Global_112096.f_35), 131072);
					}
				}
			}
		}
		iVar2++;
	}
}

void func_1647()//Position - 0xB2614
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iVar0 != 15)
		{
			if (Global_113386.f_24904[iVar0 /*4*/] != 145)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 5)
	{
		__LIB_24__::func_943(292, 0, 0);
	}
	if (iVar1 >= 15)
	{
		func_1648();
		if (NETWORK::FACEBOOK_CAN_POST_TO_FACEBOOK())
		{
			NETWORK::FACEBOOK_POST_COMPLETED_MILESTONE(3);
			__LIB_26__::func_590(3);
		}
	}
}

void func_1648()//Position - 0xB267E
{
	int iVar0;
	iVar0 = __LIB_0__::func_716(82);
	Global_2676732[iVar0 /*83*/] = 82;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_1651()//Position - 0xB27DD
{
	int iVar0;
	int iVar1;
	int iVar2;
	STATS::STAT_GET_INT(joaat("SP0_CARS_EXPLODED"), &iVar0, -1);
	STATS::STAT_GET_INT(joaat("SP1_CARS_EXPLODED"), &iVar1, -1);
	STATS::STAT_GET_INT(joaat("SP2_CARS_EXPLODED"), &iVar2, -1);
	return ((iVar0 + iVar1) + iVar2);
}

char* func_1654(int iParam0)//Position - 0xB2846
{
	switch (iParam0)
	{
		case 2:
			return "PROPR_CO_TRAF" /* GXT: 150,000 */;
			break;
		case 9:
			return "PROPR_CO_CSCR" /* GXT: 275,000 */;
			break;
		case 10:
			return "PROPR_CO_WEED" /* GXT: 204,000 */;
			break;
		case 1:
			return "PROPR_CO_TAXI" /* GXT: 200,000 */;
			break;
		case 4:
			return "PROPR_CO_CMSH" /* GXT: 349,000 */;
			break;
		case 3:
			return "PROPR_CO_SOCO" /* GXT: 250,000 */;
			break;
		case 0:
			return "PROPR_CO_TOWI" /* GXT: 150,000 */;
			break;
		case 8:
			return "PROPR_CO_GOLF" /* GXT: 150,000,000 */;
			break;
		case 5:
			return "PROPR_CO_CINV" /* GXT: 10,000,000 */;
			break;
		case 6:
			return "PROPR_CO_CIND" /* GXT: 20,000,000 */;
			break;
		case 7:
			return "PROPR_CO_CICO" /* GXT: 30,000,000 */;
			break;
		case 11:
			return "PROPR_CO_BARTE" /* GXT: 2,000,000 */;
			break;
		case 12:
			return "PROPR_CO_BARPI" /* GXT: 750,000 */;
			break;
		case 13:
			return "PROPR_CO_BARHE" /* GXT: 80,000 */;
			break;
		case 14:
			return "PROPR_CO_BARHO" /* GXT: 600,000 */;
			break;
		case 15:
			return "PROPR_CO_STRP";
			break;
	}
	return "error";
}

int func_1656(int iParam0, int iParam1)//Position - 0xB29C2
{
	switch (iParam0)
	{
		case 14:
			if (iParam1 == 2)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1657(int iParam0)//Position - 0xB29E5
{
	switch (iParam0)
	{
		case 2:
			return 2;
			break;
		case 4:
		case 0:
		case 10:
		case 1:
			return 1;
			break;
		case 5:
		case 6:
		case 7:
			return 0;
			break;
	}
	return 145;
}

int func_1660(int iParam0)//Position - 0xB2A6A
{
	struct<3> Var0;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	switch (iParam0)
	{
		case 10:
			if (Var0.f_0 >= -1174.958f && Var0.f_1 >= -1570.7827f)
			{
				return 1;
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2142.642f, 4794.097f, 40.052f, 2145.074f, 4788.9f, 39.97f, 2.6f, false, false, 0))
			{
				return 1;
			}
			break;
		case 6:
			if (Var0.f_1 < -708.2f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_1661(int iParam0)//Position - 0xB2B06
{
	switch (iParam0)
	{
		case 2:
			return -156.6f;
			break;
		case 9:
			return 93.5f;
			break;
		case 10:
			return -56.3f;
			break;
		case 1:
			return 60.4f;
			break;
		case 4:
			return 124.2f;
			break;
		case 3:
			return 113.5f;
			break;
		case 0:
			return 49.4f;
			break;
		case 8:
			return 32.2f;
			break;
		case 5:
			return -20.8f;
			break;
		case 6:
			return 91.7f;
			break;
		case 7:
			return 123.5f;
			break;
		case 11:
			return -4.6f;
			break;
		case 12:
			return 159.6f;
			break;
		case 13:
			return 45.6f;
			break;
		case 14:
			return -94f;
			break;
	}
	return 0f;
}

void func_1662()//Position - 0xB2C15
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	if (MISC::GET_GAME_TIMER() >= Global_112096.f_1 + 3000)
	{
		iVar0 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
		if (!__LIB_0__::func_517(Global_113386.f_24904.f_65, 2))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !__LIB_0__::func_2(0))
			{
				if (iVar0 == 1)
				{
					bVar2 = false;
					bVar3 = false;
					bVar4 = false;
					iVar1 = 0;
					while (iVar1 < 16)
					{
						iVar5 = func_1672(iVar1, 1);
						if (iVar5 == 0)
						{
							bVar2 = true;
						}
						else if (iVar5 == 2)
						{
							bVar3 = true;
						}
						else if (iVar5 == 1)
						{
							bVar4 = true;
						}
						iVar1++;
					}
					if (bVar2)
					{
						func_1663(23, 72, 0);
					}
					if (bVar3)
					{
						func_1663(24, 74, 0);
					}
					if (bVar4)
					{
						func_1663(25, 73, 0);
					}
					__LIB_6__::func_896(&(Global_113386.f_24904.f_65), 2);
				}
			}
		}
		else if (iVar0 != 1)
		{
			__LIB_7__::func_204(&(Global_113386.f_24904.f_65), 2);
		}
		Global_112096.f_1 = MISC::GET_GAME_TIMER();
	}
}

int func_1663(int iParam0, int iParam1, bool bParam2)//Position - 0xB2D01
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_11__::func_789(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_53557[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_53557[iVar0 /*203*/].f_2 = iParam0;
	Global_53557[iVar0 /*203*/].f_10[Global_53557[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_53557[iVar0 /*203*/].f_10[Global_53557[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_53557[iVar0 /*203*/].f_10[Global_53557[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_53557[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_53557[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_53557[iVar0 /*203*/].f_4[iVar1] == Global_44257[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_53557[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_53557[iVar0 /*203*/].f_4[Global_53557[iVar0 /*203*/].f_3] = Global_44257[iParam1 /*12*/].f_3;
			Global_53557[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_53557[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_53557[iVar0 /*203*/].f_4[iVar1] == Global_44257[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_53557[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_53557[iVar0 /*203*/].f_4[Global_53557[iVar0 /*203*/].f_3] = Global_44257[iParam1 /*12*/].f_2;
			Global_53557[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_53557[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_53557[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_1664(Global_53557[iVar0 /*203*/].f_4[iVar1], Global_53557[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_1664(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xB2EFD
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_47582[iParam1 /*46*/].f_42 - 1);
		if (iVar4 < 0)
		{
			return;
		}
		iVar5 = Global_47582[iParam1 /*46*/].f_32[iVar4];
		iVar2 = iVar5;
		Var3 = { __LIB_10__::func_690(Global_44257[iVar5 /*12*/].f_1) };
		if (Global_44257[iVar5 /*12*/].f_2 == iParam0 && !Global_44257[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_44257[iVar5 /*12*/].f_2;
		iVar0 = Global_53195[iParam0 /*120*/];
		bVar6 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar6 = true;
		}
		if (bVar6)
		{
			if (!Global_53195[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_44249 = (Global_44249 - 1);
						if (Global_44249 < 0)
						{
							Global_44249 = 0;
						}
						break;
					case 1:
						Global_44250 = (Global_44250 - 1);
						if (Global_44250 < 0)
						{
							Global_44250 = 0;
						}
						break;
					case 2:
						Global_44251 = (Global_44251 - 1);
						if (Global_44251 < 0)
						{
							Global_44251 = 0;
						}
						break;
					}
				}
		}
		Global_53195[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_53195[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_53195[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_53195[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_53195[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_53195[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_53195[iParam0 /*120*/];
		bVar7 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar7 = true;
		}
		if (bVar7)
		{
			if (!Global_53195[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_44249 = (Global_44249 - 1);
						if (Global_44249 < 0)
						{
							Global_44249 = 0;
						}
						break;
					case 1:
						Global_44250 = (Global_44250 - 1);
						if (Global_44250 < 0)
						{
							Global_44250 = 0;
						}
						break;
					case 2:
						Global_44251 = (Global_44251 - 1);
						if (Global_44251 < 0)
						{
							Global_44251 = 0;
						}
						break;
					}
				}
		}
		iVar8 = -1;
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < 7)
		{
			if (Global_53557[iVar9 /*203*/].f_1 == iParam1 && Global_53557[iVar9 /*203*/].f_9 > 0)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == -1)
		{
			return;
		}
		Global_53195[iParam0 /*120*/].f_18[iVar0] = Global_53557[iVar8 /*203*/].f_1;
		Global_53195[iParam0 /*120*/].f_1[iVar0] = (Global_53557[iVar8 /*203*/].f_9 - 1);
		Global_53195[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_53195[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_53195[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_53195[iParam0 /*120*/]++;
		iVar10 = Global_53195[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_53557[iVar8 /*203*/].f_10[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_44257[iVar11 /*12*/].f_2;
		if (Global_53557[iVar8 /*203*/].f_10[(Global_53557[iVar8 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_53557[iVar8 /*203*/].f_10[(Global_53557[iVar8 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { __LIB_10__::func_690(Global_44257[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_53195[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_1665(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				case 1:
					if (iVar2 == 249)
					{
						func_1665(1, iVar1, iVar2, "PW_FEED_EM_1" /* GXT: You've been nominated to take part in Southern San Andreas' premier amateur photography competition in the wildlife sector. You'll join hundreds of other young, talented... */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_1665(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				case 2:
					func_1665(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_1665(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)//Position - 0xB32D4
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	iVar0 = __LIB_26__::func_499();
	bVar1 = false;
	StringCopy(&cVar2, __LIB_10__::func_689(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1" /* GXT: Dear Mr. De Santa, please find below your weekly income from owned properties:~n~ */);
				break;
			case 73:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3" /* GXT: Dear Mr. Clinton, please find below your weekly income from owned properties:~n~ */);
				break;
			case 74:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2" /* GXT: Dear Mr. Philips, please find below your weekly income from owned properties:~n~ */);
				break;
			default:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam3);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam5);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam10);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam11);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam12))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam12);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam13))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			__LIB_10__::func_687(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar2, &cVar2, false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(__LIB_10__::func_688(iParam1)), 0));
		}
		else
		{
			__LIB_10__::func_687(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(__LIB_10__::func_688(iParam1)), 0));
		}
		switch (Global_20266)
		{
			case 0:
				StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
				Global_44249++;
				if (Global_44249 > 16)
				{
					Global_44249 = 16;
				}
				break;
			case 2:
				StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
				Global_44251++;
				if (Global_44251 > 16)
				{
					Global_44251 = 16;
				}
				break;
			case 1:
				StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
				Global_44250++;
				if (Global_44250 > 16)
				{
					Global_44250 = 16;
				}
				break;
			default:
				StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
				break;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_20255, true);
	}
}

int func_1672(int iParam0, bool bParam1)//Position - 0xB3F2B
{
	int iVar0;
	int iVar1;
	iVar0 = 145;
	if (Global_113386.f_24904[iParam0 /*4*/] != 145)
	{
		iVar1 = func_1675(iParam0);
		if (iVar1 > 0)
		{
			if (__LIB_0__::func_517(Global_113386.f_24904[iParam0 /*4*/].f_2, 1))
			{
				func_1673(iParam0, iVar1);
				iVar0 = Global_113386.f_24904[iParam0 /*4*/];
			}
			else
			{
				iVar1 = 0;
			}
		}
		switch (iParam0)
		{
			case 3:
				iVar1 = Global_113386.f_24904.f_69;
				Global_113386.f_24904.f_69 = 0;
				if (iVar1 > 0)
				{
					iVar0 = Global_113386.f_24904[iParam0 /*4*/];
				}
				break;
			case 2:
				iVar1 = Global_113386.f_24904.f_70;
				Global_113386.f_24904.f_70 = 0;
				if (iVar1 > 0)
				{
					iVar0 = Global_113386.f_24904[iParam0 /*4*/];
				}
				break;
			case 0:
				iVar1 = Global_113386.f_24904.f_71;
				Global_113386.f_24904.f_71 = 0;
				if (iVar1 > 0)
				{
					iVar0 = Global_113386.f_24904[iParam0 /*4*/];
				}
				break;
		}
		if (bParam1)
		{
			__LIB_6__::func_896(&(Global_113386.f_24904[iParam0 /*4*/].f_2), 1);
		}
		Global_113386.f_24904[iParam0 /*4*/].f_3 = iVar1;
	}
	return iVar0;
}

void func_1673(int iParam0, int iParam1)//Position - 0xB404A
{
	int iVar0;
	__LIB_42__::func_370(Global_113386.f_24904[iParam0 /*4*/], __LIB_29__::func_865(iParam0), iParam1, 0, 0);
	switch (iParam0)
	{
		case 3:
			Global_113386.f_24904.f_69 = (Global_113386.f_24904.f_69 + iParam1);
			break;
		case 2:
			Global_113386.f_24904.f_70 = (Global_113386.f_24904.f_70 + iParam1);
			break;
		case 0:
			Global_113386.f_24904.f_71 = (Global_113386.f_24904.f_71 + iParam1);
			break;
	}
	STATS::STAT_GET_INT(__LIB_29__::func_866(iParam0, 1), &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(__LIB_29__::func_866(iParam0, 1), iVar0, true);
}

int func_1675(int iParam0)//Position - 0xB41C3
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	switch (iParam0)
	{
		case 2:
			break;
		case 9:
			iVar1 = func_1651();
			iVar2 = (iVar1 - Global_113386.f_24904.f_68);
			iVar0 = iVar2 * 150;
			if (iVar0 > 5000)
			{
				iVar0 = 5000;
			}
			Global_113386.f_24904.f_68 = iVar1;
			break;
		case 4:
			iVar0 = 1600;
			break;
		case 10:
			iVar0 = 9300;
			break;
		case 1:
			iVar0 = 2000;
			break;
		case 8:
			iVar0 = 264500;
			break;
		case 5:
			iVar0 = 132200;
			break;
		case 6:
			iVar0 = 264000;
			break;
		case 7:
			iVar0 = 142300;
			break;
		case 11:
			iVar0 = 16500;
			break;
		case 12:
			iVar0 = 7100;
			break;
		case 13:
			iVar0 = 920;
			break;
		case 14:
			iVar0 = 4700;
			break;
		case 15:
			iVar0 = 5000;
			break;
	}
	return iVar0;
}

void func_1676(int iParam0)//Position - 0xB42C7
{
	if (iParam0 != 15)
	{
		if (Global_113386.f_24904[iParam0 /*4*/] == 145)
		{
			if (func_1688(iParam0))
			{
				if (!__LIB_0__::func_517(Global_112096.f_2[iParam0], 2))
				{
					__LIB_6__::func_896(&(Global_112096.f_2[iParam0]), 2);
				}
				func_1681(iParam0, 1);
			}
			else
			{
				func_1679(iParam0);
				func_1681(iParam0, 0);
				if (__LIB_0__::func_517(Global_112096.f_2[iParam0], 2))
				{
					__LIB_7__::func_204(&(Global_112096.f_2[iParam0]), 2);
				}
			}
		}
		else
		{
			func_1677(iParam0);
			func_1681(iParam0, 1);
		}
	}
}

void func_1677(int iParam0)//Position - 0xB4359
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	if (!__LIB_0__::func_517(Global_113386.f_24904[iParam0 /*4*/].f_2, 4))
	{
		bVar1 = false;
		bVar2 = false;
		switch (iParam0)
		{
			case 0:
				iVar3 = 430538716;
				bVar4 = 125;
				break;
			case 1:
				bVar1 = true;
				iVar3 = joaat("CALL_PROP_TAXI_F");
				iVar5 = 3;
				bVar4 = 113;
				break;
			case 2:
				bVar2 = true;
				break;
			case 3:
				switch (Global_113386.f_24904[iParam0 /*4*/])
				{
					case 0:
						iVar3 = -748636148;
						break;
					case 2:
						iVar3 = 353549167;
						break;
					case 1:
						iVar3 = 1400649789;
						break;
				}
				bVar4 = 127;
				break;
			case 4:
				iVar3 = 135464153;
				bVar4 = 124;
				break;
			case 5:
				iVar3 = -536513155;
				bVar4 = 114;
				break;
			case 6:
				iVar3 = 967465509;
				bVar4 = 115;
				break;
			case 7:
				bVar1 = true;
				iVar3 = joaat("CALL_PROP_CINEMA_M");
				iVar5 = 4;
				bVar4 = 116;
				break;
			case 8:
				switch (Global_113386.f_24904[iParam0 /*4*/])
				{
					case 0:
						bVar1 = true;
						iVar3 = joaat("CALL_PROP_GOLF_M");
						iVar5 = 3;
						break;
					case 2:
						bVar1 = true;
						iVar3 = joaat("CALL_PROP_GOLF_T");
						iVar5 = 3;
						break;
					case 1:
						bVar1 = true;
						iVar3 = joaat("CALL_PROP_GOLF_F");
						iVar5 = 3;
						break;
				}
				bVar4 = 123;
				break;
			case 9:
				switch (Global_113386.f_24904[iParam0 /*4*/])
				{
					case 0:
						iVar3 = -2132612619;
						break;
					case 2:
						iVar3 = -1419493641;
						break;
					case 1:
						iVar3 = -521917970;
						break;
				}
				bVar4 = 117;
				break;
			case 10:
				iVar3 = -1521020490;
				bVar4 = 118;
				break;
			case 11:
				switch (Global_113386.f_24904[iParam0 /*4*/])
				{
					case 0:
						iVar3 = 1894922981;
						break;
					case 2:
						iVar3 = 233370836;
						break;
					case 1:
						iVar3 = 984305268;
						break;
				}
				bVar4 = 119;
				break;
			case 12:
				switch (Global_113386.f_24904[iParam0 /*4*/])
				{
					case 0:
						iVar3 = -833431660;
						break;
					case 2:
						iVar3 = 372434771;
						break;
					case 1:
						iVar3 = -92983336;
						break;
				}
				bVar4 = 120;
				break;
			case 13:
				switch (Global_113386.f_24904[iParam0 /*4*/])
				{
					case 0:
						iVar3 = 1638023784;
						break;
					case 2:
						iVar3 = 2121956376;
						break;
					case 1:
						iVar3 = -452245192;
						break;
				}
				bVar4 = 121;
				break;
			case 14:
				switch (Global_113386.f_24904[iParam0 /*4*/])
				{
					case 0:
						iVar3 = 763248121;
						break;
					case 1:
						iVar3 = -720564968;
						break;
				}
				bVar4 = 122;
				break;
		}
		switch (Global_113386.f_24904[iParam0 /*4*/])
		{
			case 0:
				iVar0 = 1;
				break;
			case 1:
				iVar0 = 2;
				break;
			case 2:
				iVar0 = 4;
				break;
		}
		if (!bVar2)
		{
			if (!bVar1)
			{
				if (__LIB_26__::func_490(iVar3, 3, iVar0, bVar4, 10000, 10000, -1, 0, -1, 512))
				{
					__LIB_6__::func_896(&(Global_113386.f_24904[iParam0 /*4*/].f_2), 4);
				}
			}
			else if (__LIB_29__::func_870(iVar3, 3, iVar0, bVar4, iVar5, 0, 10000, -1, -1, 0, -1, 16448))
			{
				__LIB_6__::func_896(&(Global_113386.f_24904[iParam0 /*4*/].f_2), 4);
			}
		}
		else
		{
			__LIB_6__::func_896(&(Global_113386.f_24904[iParam0 /*4*/].f_2), 4);
		}
	}
}

void func_1679(int iParam0)//Position - 0xB4870
{
	switch (iParam0)
	{
		case 0:
			if (!__LIB_0__::func_517(Global_113386.f_24904.f_65, 8))
			{
				if (__LIB_0__::func_176(64) && __LIB_0__::func_528(62))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), __LIB_30__::func_723(0), 300f, 300f, 300f, false, false, 0))
					{
						if (__LIB_29__::func_870(joaat("CALL_PROP_TOWING"), 3, 2, 103, 3, 0, 10000, -1, -1, 0, -1, 0))
						{
							__LIB_6__::func_896(&(Global_113386.f_24904.f_65), 8);
						}
					}
				}
			}
			break;
	}
}

void func_1681(int iParam0, bool bParam1)//Position - 0xB4926
{
	int iVar0;
	int iVar1;
	if (bParam1)
	{
		if (Global_113386.f_24904[iParam0 /*4*/] != 145)
		{
			if (!__LIB_0__::func_517(Global_112096.f_2[iParam0], 32))
			{
				__LIB_10__::func_604(func_1544(iParam0), 0, 0);
				switch (Global_113386.f_24904[iParam0 /*4*/])
				{
					case 1:
						iVar0 = 43;
						break;
					case 0:
						iVar0 = 42;
						break;
					case 2:
						iVar0 = 44;
						break;
				}
				__LIB_29__::func_873(func_1544(iParam0), iVar0);
				__LIB_30__::func_826(func_1544(iParam0), 374);
				__LIB_29__::func_872(func_1544(iParam0), func_1685(iParam0, 1));
				func_1682(iParam0);
				__LIB_6__::func_896(&(Global_112096.f_2[iParam0]), 32);
				__LIB_7__::func_204(&(Global_112096.f_2[iParam0]), 8);
				__LIB_7__::func_204(&(Global_112096.f_2[iParam0]), 16);
				__LIB_10__::func_604(func_1544(iParam0), 1, 0);
			}
		}
		else
		{
			iVar1 = func_1657(iParam0);
			if ((iVar1 == __LIB_26__::func_499() || iVar1 == 145) && !func_1656(iParam0, __LIB_26__::func_499()))
			{
				if (!__LIB_0__::func_517(Global_112096.f_2[iParam0], 8))
				{
					__LIB_10__::func_604(func_1544(iParam0), 0, 0);
					__LIB_30__::func_826(func_1544(iParam0), 375);
					__LIB_29__::func_873(func_1544(iParam0), 0);
					__LIB_29__::func_872(func_1544(iParam0), func_1685(iParam0, 0));
					func_1682(iParam0);
					__LIB_7__::func_204(&(Global_112096.f_2[iParam0]), 32);
					__LIB_6__::func_896(&(Global_112096.f_2[iParam0]), 8);
					__LIB_7__::func_204(&(Global_112096.f_2[iParam0]), 16);
					__LIB_10__::func_604(func_1544(iParam0), 1, 0);
				}
			}
			else if (!__LIB_0__::func_517(Global_112096.f_2[iParam0], 16))
			{
				__LIB_10__::func_604(func_1544(iParam0), 0, 0);
				__LIB_30__::func_826(func_1544(iParam0), 375);
				__LIB_29__::func_873(func_1544(iParam0), 39);
				__LIB_29__::func_872(func_1544(iParam0), func_1685(iParam0, 0));
				func_1682(iParam0);
				__LIB_7__::func_204(&(Global_112096.f_2[iParam0]), 32);
				__LIB_7__::func_204(&(Global_112096.f_2[iParam0]), 8);
				__LIB_6__::func_896(&(Global_112096.f_2[iParam0]), 16);
				__LIB_10__::func_604(func_1544(iParam0), 1, 0);
			}
		}
	}
	else if ((__LIB_0__::func_517(Global_112096.f_2[iParam0], 8) || __LIB_0__::func_517(Global_112096.f_2[iParam0], 16)) || __LIB_0__::func_517(Global_112096.f_2[iParam0], 32))
	{
		__LIB_10__::func_604(func_1544(iParam0), 0, 0);
		__LIB_7__::func_204(&(Global_112096.f_2[iParam0]), 8);
		__LIB_7__::func_204(&(Global_112096.f_2[iParam0]), 16);
		__LIB_7__::func_204(&(Global_112096.f_2[iParam0]), 32);
	}
}

void func_1682(int iParam0)//Position - 0xB4BCE
{
	struct<3> Var0;
	if (iParam0 == 2)
	{
		if (Global_113386.f_24904[iParam0 /*4*/] == 145)
		{
			Var0 = { __LIB_30__::func_723(2) };
		}
		else
		{
			Var0 = { 2151.2502f, 4773.055f, 40.30271f };
		}
		__LIB_29__::func_871(func_1544(iParam0), Var0);
	}
}

char* func_1685(int iParam0, bool bParam1)//Position - 0xB4D07
{
	if (bParam1)
	{
		return func_1644(iParam0);
	}
	else
	{
		switch (iParam0)
		{
			case 2:
				return "B_TRF2" /* GXT: McKenzie Field Hangar: $150,000 */;
				break;
			case 9:
				return "B_CSR2" /* GXT: Car Scrapyard: $275,000 */;
				break;
			case 10:
				return "B_WED2" /* GXT: Smoke on the Water: $204,000 */;
				break;
			case 1:
				return "B_TXI2" /* GXT: Downtown Cab Co.: $200,000 */;
				break;
			case 4:
				return "B_CMS2" /* GXT: Los Santos Customs: $349,000 */;
				break;
			case 3:
				return "B_SOC2" /* GXT: Sonar Collections Dock: $250,000 */;
				break;
			case 0:
				return "B_TOW2" /* GXT: Towing Impound: $150,000 */;
				break;
			case 8:
				return "B_GLF2" /* GXT: Los Santos Golf Club: $150,000,000 */;
				break;
			case 5:
				return "B_CIV2" /* GXT: Cinema Doppler: $10,000,000 */;
				break;
			case 6:
				return "B_CID2" /* GXT: Ten Cent Theater: $20,000,000 */;
				break;
			case 7:
				return "B_CIM2" /* GXT: Tivoli Cinema: $30,000,000 */;
				break;
			case 11:
				return "B_BRT2" /* GXT: Tequi-la-la: $2,000,000 */;
				break;
			case 12:
				return "B_BRP2" /* GXT: Pitchers: $750,000 */;
				break;
			case 13:
				return "B_BRH2" /* GXT: The Hen House: $80,000 */;
				break;
			case 14:
				return "B_BHO2" /* GXT: Hookies: $600,000 */;
				break;
			}
	}
	return "error";
}

int func_1688(int iParam0)//Position - 0xB4EF7
{
	switch (iParam0)
	{
		case 4:
		case 13:
		case 14:
			if (__LIB_0__::func_176(63))
			{
				return 1;
			}
			break;
		case 5:
		case 6:
		case 7:
			if (__LIB_0__::func_368(135))
			{
				return 0;
			}
			else if (__LIB_0__::func_176(64))
			{
				return 1;
			}
			break;
		case 2:
			if (__LIB_0__::func_368(136))
			{
				return 0;
			}
			else if (__LIB_0__::func_176(63))
			{
				return 1;
			}
			break;
		case 3:
			if (__LIB_0__::func_176(74) || __LIB_0__::func_176(75))
			{
				return 1;
			}
			break;
		case 11:
			if (__LIB_0__::func_528(38) && __LIB_0__::func_176(64))
			{
				return 1;
			}
			break;
		case 0:
			if (__LIB_0__::func_517(Global_113386.f_24904.f_65, 8))
			{
				return 1;
			}
			break;
		default:
			if (__LIB_0__::func_176(64))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_1689(var uParam0)//Position - 0xB4FF3
{
	func_1740(uParam0);
	func_1738(uParam0);
	func_1736(uParam0);
	func_1734(uParam0);
	if ((MISC::GET_FRAME_COUNT() % 60) == 0)
	{
		switch (uParam0->f_4)
		{
			case 0:
				func_1729(uParam0);
				break;
			case 1:
				func_1724(uParam0);
				break;
			case 2:
				func_1717(uParam0);
				break;
			case 3:
				func_1713(uParam0);
				break;
			case 4:
				func_1709(uParam0);
				break;
			case 5:
				func_1703(uParam0);
				break;
			case 6:
				func_1699(uParam0);
				break;
			case 7:
				func_1697();
				break;
			case 8:
				func_1695();
				break;
			case 9:
				func_1690(uParam0);
				break;
		}
		uParam0->f_4++;
		if (uParam0->f_4 >= 10)
		{
			uParam0->f_4 = 0;
		}
	}
}

void func_1690(var uParam0)//Position - 0xB50D1
{
	if (uParam0->f_14)
	{
		if (!BitTest(Global_113386.f_20118.f_291, 9))
		{
			if (func_1694() >= SYSTEM::TO_FLOAT(uParam0->f_5))
			{
				func_1693(uParam0->f_5);
				if (uParam0->f_5 < 100)
				{
					uParam0->f_5 = func_1692();
				}
				else
				{
					MISC::SET_BIT(&(Global_113386.f_20118.f_291), 9);
				}
			}
		}
	}
	else
	{
		func_1691(uParam0);
	}
}

void func_1691(var uParam0)//Position - 0xB5136
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		uParam0->f_5 = func_1692();
		uParam0->f_14 = 1;
	}
}

int func_1692()//Position - 0xB5152
{
	float fVar0;
	float fVar1;
	fVar0 = func_1694();
	fVar1 = (fVar0 - (fVar0 % 5f));
	fVar1 = (fVar1 + 5f);
	if (fVar1 > 100f)
	{
		fVar1 = 100f;
	}
	return SYSTEM::ROUND(fVar1);
}

void func_1693(var uParam0)//Position - 0xB5187
{
	int iVar0;
	iVar0 = __LIB_0__::func_716(83);
	Global_2676732[iVar0 /*83*/] = 83;
	Global_2676732[iVar0 /*83*/].f_17 = uParam0;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

float func_1694()//Position - 0xB51BF
{
	return ((HUD::GET_MINIMAP_FOW_DISCOVERY_RATIO() * 100f) + 0.5f);
}

void func_1695()//Position - 0xB51D7
{
	if (!BitTest(Global_113386.f_20118.f_291, 7))
	{
		if (STATS::GET_PLAYER_HAS_DRIVEN_ALL_VEHICLES())
		{
			func_1696();
			MISC::SET_BIT(&(Global_113386.f_20118.f_291), 7);
		}
	}
}

void func_1696()//Position - 0xB5209
{
	int iVar0;
	iVar0 = __LIB_0__::func_716(62);
	Global_2676732[iVar0 /*83*/] = 62;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

void func_1697()//Position - 0xB5235
{
	int iVar0;
	int iVar1;
	if (!BitTest(Global_113386.f_20118.f_291, 6))
	{
		iVar0 = 0;
		STATS::STAT_GET_INT(joaat("SP0_SHOTS"), &iVar1, -1);
		iVar0 = (iVar0 + iVar1);
		STATS::STAT_GET_INT(joaat("SP1_SHOTS"), &iVar1, -1);
		iVar0 = (iVar0 + iVar1);
		STATS::STAT_GET_INT(joaat("SP2_SHOTS"), &iVar1, -1);
		iVar0 = (iVar0 + iVar1);
		if (iVar0 >= 500000)
		{
			func_1698();
			MISC::SET_BIT(&(Global_113386.f_20118.f_291), 6);
		}
	}
}

void func_1698()//Position - 0xB52A8
{
	int iVar0;
	iVar0 = __LIB_0__::func_716(71);
	Global_2676732[iVar0 /*83*/] = 71;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

void func_1699(var uParam0)//Position - 0xB52D4
{
	float fVar0;
	if (!BitTest(Global_113386.f_20118.f_291, 8))
	{
		fVar0 = func_1702();
		if (fVar0 >= uParam0->f_12)
		{
			func_1701(SYSTEM::ROUND(uParam0->f_12));
			uParam0->f_12 = func_1700();
			if (fVar0 >= 100f)
			{
				MISC::SET_BIT(&(Global_113386.f_20118.f_291), 8);
			}
		}
	}
}

float func_1700()//Position - 0xB532C
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = func_1702();
	fVar1 = 4f;
	fVar2 = (fVar0 - (fVar0 % fVar1));
	fVar2 = (fVar2 + fVar1);
	return fVar2;
}

void func_1701(int iParam0)//Position - 0xB5350
{
	int iVar0;
	iVar0 = __LIB_0__::func_716(78);
	Global_2676732[iVar0 /*83*/] = 78;
	Global_2676732[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

float func_1702()//Position - 0xB5388
{
	return ((SYSTEM::TO_FLOAT(MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS()) / 50f) * 100f);
}

void func_1703(var uParam0)//Position - 0xB53A4
{
	float fVar0;
	if (!BitTest(Global_113386.f_20118.f_291, 10))
	{
		fVar0 = func_1706();
		if (fVar0 >= uParam0->f_11)
		{
			func_1705(SYSTEM::ROUND(uParam0->f_11));
			uParam0->f_11 = func_1704();
			if (fVar0 >= 100f)
			{
				MISC::SET_BIT(&(Global_113386.f_20118.f_291), 10);
			}
		}
	}
}

float func_1704()//Position - 0xB53FC
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = func_1706();
	fVar1 = 4f;
	fVar2 = (fVar0 - (fVar0 % fVar1));
	fVar2 = (fVar2 + fVar1);
	return fVar2;
}

void func_1705(int iParam0)//Position - 0xB5420
{
	int iVar0;
	iVar0 = __LIB_0__::func_716(79);
	Global_2676732[iVar0 /*83*/] = 79;
	Global_2676732[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

float func_1706()//Position - 0xB5458
{
	return ((SYSTEM::TO_FLOAT(__LIB_34__::func_869()) / SYSTEM::TO_FLOAT(50)) * 100f);
}

void func_1709(var uParam0)//Position - 0xB5564
{
	int iVar0;
	iVar0 = func_1712();
	if (iVar0 >= uParam0->f_7)
	{
		func_1711(uParam0->f_7);
		uParam0->f_7 = func_1710();
	}
}

int func_1710()//Position - 0xB558B
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_1712();
	iVar1 = 25;
	iVar2 = (iVar0 - (iVar0 % iVar1));
	iVar2 = (iVar2 + iVar1);
	return iVar2;
}

void func_1711(var uParam0)//Position - 0xB55B0
{
	int iVar0;
	iVar0 = __LIB_0__::func_716(69);
	Global_2676732[iVar0 /*83*/] = 69;
	Global_2676732[iVar0 /*83*/].f_17 = uParam0;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_1712()//Position - 0xB55E8
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	STATS::STAT_GET_INT(joaat("SP0_BUSTED"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	STATS::STAT_GET_INT(joaat("SP1_BUSTED"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	STATS::STAT_GET_INT(joaat("SP2_BUSTED"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	return iVar0;
}

void func_1713(var uParam0)//Position - 0xB5631
{
	int iVar0;
	iVar0 = func_1716();
	if (iVar0 >= uParam0->f_6)
	{
		func_1715(uParam0->f_6);
		uParam0->f_6 = func_1714();
	}
}

int func_1714()//Position - 0xB5658
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_1716();
	iVar1 = 25;
	iVar2 = (iVar0 - (iVar0 % iVar1));
	iVar2 = (iVar2 + iVar1);
	return iVar2;
}

void func_1715(var uParam0)//Position - 0xB567D
{
	int iVar0;
	iVar0 = __LIB_0__::func_716(70);
	Global_2676732[iVar0 /*83*/] = 70;
	Global_2676732[iVar0 /*83*/].f_17 = uParam0;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_1716()//Position - 0xB56B5
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	STATS::STAT_GET_INT(joaat("SP0_DEATHS"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	STATS::STAT_GET_INT(joaat("SP1_DEATHS"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	STATS::STAT_GET_INT(joaat("SP2_DEATHS"), &iVar1, -1);
	iVar0 = (iVar0 + iVar1);
	return iVar0;
}

void func_1717(var uParam0)//Position - 0xB56FE
{
	float fVar0;
	fVar0 = func_1722();
	if (fVar0 >= uParam0->f_10)
	{
		if (__LIB_29__::func_180())
		{
			func_1720(SYSTEM::ROUND(uParam0->f_10));
		}
		else
		{
			func_1719(SYSTEM::ROUND(uParam0->f_10));
		}
		uParam0->f_10 = func_1718();
	}
}

float func_1718()//Position - 0xB5740
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = func_1722();
	fVar1 = 500f;
	if (__LIB_29__::func_180())
	{
		fVar1 = 1000f;
	}
	fVar2 = (fVar0 - (fVar0 % fVar1));
	fVar2 = (fVar2 + fVar1);
	return fVar2;
}

void func_1719(int iParam0)//Position - 0xB5776
{
	int iVar0;
	iVar0 = __LIB_0__::func_716(67);
	Global_2676732[iVar0 /*83*/] = 67;
	Global_2676732[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

void func_1720(int iParam0)//Position - 0xB57AE
{
	int iVar0;
	iVar0 = __LIB_0__::func_716(90);
	Global_2676732[iVar0 /*83*/] = 90;
	Global_2676732[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

float func_1722()//Position - 0xB57FB
{
	float fVar0;
	float fVar1;
	STATS::STAT_GET_FLOAT(joaat("SP0_DIST_HELI"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP1_DIST_HELI"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP2_DIST_HELI"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP0_DIST_PLANE"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP1_DIST_PLANE"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP2_DIST_PLANE"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	if (__LIB_29__::func_180())
	{
		fVar0 = (fVar0 / 1000f);
	}
	else
	{
		fVar0 = __LIB_5__::func_2(fVar0);
	}
	return fVar0;
}

void func_1724(var uParam0)//Position - 0xB58A9
{
	float fVar0;
	fVar0 = func_1728();
	if (fVar0 >= uParam0->f_9)
	{
		if (__LIB_29__::func_180())
		{
			func_1727(SYSTEM::ROUND(uParam0->f_9));
		}
		else
		{
			func_1726(SYSTEM::ROUND(uParam0->f_9));
		}
		uParam0->f_9 = func_1725();
	}
}

float func_1725()//Position - 0xB58EB
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = func_1728();
	fVar1 = 500f;
	if (__LIB_29__::func_180())
	{
		fVar1 = 1000f;
	}
	fVar2 = (fVar0 - (fVar0 % fVar1));
	fVar2 = (fVar2 + fVar1);
	return fVar2;
}

void func_1726(int iParam0)//Position - 0xB5921
{
	int iVar0;
	iVar0 = __LIB_0__::func_716(66);
	Global_2676732[iVar0 /*83*/] = 66;
	Global_2676732[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

void func_1727(int iParam0)//Position - 0xB5959
{
	int iVar0;
	iVar0 = __LIB_0__::func_716(89);
	Global_2676732[iVar0 /*83*/] = 89;
	Global_2676732[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

float func_1728()//Position - 0xB5991
{
	float fVar0;
	float fVar1;
	STATS::STAT_GET_FLOAT(joaat("SP0_DIST_CAR"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP1_DIST_CAR"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP2_DIST_CAR"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP0_DIST_BIKE"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP1_DIST_BIKE"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP2_DIST_BIKE"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP0_DIST_BICYCLE"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP1_DIST_BICYCLE"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP2_DIST_BICYCLE"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	if (__LIB_29__::func_180())
	{
		fVar0 = (fVar0 / 1000f);
	}
	else
	{
		fVar0 = __LIB_5__::func_2(fVar0);
	}
	return fVar0;
}

void func_1729(var uParam0)//Position - 0xB5A6B
{
	float fVar0;
	fVar0 = func_1733();
	if (fVar0 >= uParam0->f_8)
	{
		if (__LIB_29__::func_180())
		{
			func_1732(SYSTEM::ROUND(uParam0->f_8));
		}
		else
		{
			func_1731(SYSTEM::ROUND(uParam0->f_8));
		}
		uParam0->f_8 = func_1730();
	}
}

float func_1730()//Position - 0xB5AAD
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = func_1733();
	fVar1 = 50f;
	if (__LIB_29__::func_180())
	{
		fVar1 = 100f;
	}
	fVar2 = (fVar0 - (fVar0 % fVar1));
	fVar2 = (fVar2 + fVar1);
	return fVar2;
}

void func_1731(int iParam0)//Position - 0xB5AE3
{
	int iVar0;
	iVar0 = __LIB_0__::func_716(68);
	Global_2676732[iVar0 /*83*/] = 68;
	Global_2676732[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

void func_1732(int iParam0)//Position - 0xB5B1B
{
	int iVar0;
	iVar0 = __LIB_0__::func_716(91);
	Global_2676732[iVar0 /*83*/] = 91;
	Global_2676732[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

float func_1733()//Position - 0xB5B53
{
	float fVar0;
	float fVar1;
	STATS::STAT_GET_FLOAT(joaat("SP0_DIST_WALKING"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP1_DIST_WALKING"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP2_DIST_WALKING"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP0_DIST_RUNNING"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP1_DIST_RUNNING"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	STATS::STAT_GET_FLOAT(joaat("SP2_DIST_RUNNING"), &fVar1, -1);
	fVar0 = (fVar0 + fVar1);
	if (__LIB_29__::func_180())
	{
		fVar0 = (fVar0 / 1000f);
	}
	else
	{
		fVar0 = __LIB_5__::func_2(fVar0);
	}
	return fVar0;
}

void func_1734(var uParam0)//Position - 0xB5BF1
{
	struct<3> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (MISC::GET_GAME_TIMER() > uParam0->f_2)
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == 0)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (Var0.f_2 <= -175f)
				{
					func_1735();
					uParam0->f_2 = (MISC::GET_GAME_TIMER() + 1800000);
				}
			}
		}
	}
}

void func_1735()//Position - 0xB5C48
{
	int iVar0;
	iVar0 = __LIB_0__::func_716(84);
	Global_2676732[iVar0 /*83*/] = 84;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

void func_1736(var uParam0)//Position - 0xB5C74
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (MISC::GET_GAME_TIMER() > uParam0->f_1)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 450.49506f, 5566.205f, 806.2236f, 1f, 1f, 1.5f, false, true, 0))
			{
				func_1737();
				uParam0->f_1 = (MISC::GET_GAME_TIMER() + 1800000);
			}
		}
	}
}

void func_1737()//Position - 0xB5CC9
{
	int iVar0;
	iVar0 = __LIB_0__::func_716(80);
	Global_2676732[iVar0 /*83*/] = 80;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

void func_1738(var uParam0)//Position - 0xB5CF5
{
	if (!BitTest(Global_113386.f_20118.f_291, 0))
	{
		if (Global_113386.f_10194[uParam0->f_3 /*12*/].f_6 == 9)
		{
			if (Global_113386.f_10194[uParam0->f_3 /*12*/].f_5)
			{
				uParam0->f_3++;
			}
			else
			{
				uParam0->f_3 = 213;
			}
		}
		else
		{
			uParam0->f_3++;
		}
		if (uParam0->f_3 == 283)
		{
			func_1739();
			MISC::SET_BIT(&(Global_113386.f_20118.f_291), 0);
		}
	}
}

void func_1739()//Position - 0xB5D70
{
	int iVar0;
	iVar0 = __LIB_0__::func_716(60);
	Global_2676732[iVar0 /*83*/] = 60;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

void func_1740(var uParam0)//Position - 0xB5D9C
{
	if (!BitTest(uParam0->f_13, 0))
	{
		if (MISC::GET_GAME_TIMER() > *uParam0)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (!__LIB_9__::func_603())
				{
					if (Global_97919.f_44 != 1 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 5)
						{
							MISC::SET_BIT(&(uParam0->f_13), 0);
						}
					}
				}
			}
		}
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		MISC::CLEAR_BIT(&(uParam0->f_13), 0);
	}
	else if (Global_97919.f_44 == 1 || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		MISC::CLEAR_BIT(&(uParam0->f_13), 0);
	}
	else if (__LIB_9__::func_603())
	{
		MISC::CLEAR_BIT(&(uParam0->f_13), 0);
	}
	else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		func_1741();
		MISC::CLEAR_BIT(&(uParam0->f_13), 0);
		*uParam0 = (MISC::GET_GAME_TIMER() + 1800000);
	}
}

void func_1741()//Position - 0xB5E69
{
	int iVar0;
	iVar0 = __LIB_0__::func_716(72);
	Global_2676732[iVar0 /*83*/] = 72;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

void func_1742(var uParam0)//Position - 0xB5E95
{
	int iVar0;
	int iVar1;
	iVar0 = (MISC::GET_FRAME_COUNT() % *uParam0);
	if (FILES::GET_DLC_WEAPON_DATA(iVar0, &(uParam0->f_2)))
	{
		iVar1 = __LIB_34__::func_870(uParam0->f_2.f_1);
		if (iVar1 == 1)
		{
			func_1750(uParam0);
		}
		else if (iVar1 == 0)
		{
			func_1743(uParam0);
		}
	}
}

void func_1743(var uParam0)//Position - 0xB5EDB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	iVar0 = uParam0->f_2.f_1;
	if (func_1749(iVar0))
	{
		iVar1 = __LIB_20__::func_763(PLAYER::PLAYER_PED_ID());
		iVar2 = func_1748(uParam0);
		iVar3 = __LIB_7__::func_250(iVar0);
		bVar4 = func_1745(iVar3, uParam0->f_1);
		iVar5 = func_1744(iVar3, uParam0->f_1);
		if (BitTest(iVar2, bVar4))
		{
			MISC::CLEAR_BIT(&iVar2, bVar4);
			if (iVar5 > 0)
			{
			}
			else
			{
				switch (iVar1)
				{
					case 0:
						STATS::STAT_SET_INT(joaat("SP0_WEAP_DLC_UNLOCK_0"), iVar2, true);
						break;
					case 1:
						STATS::STAT_SET_INT(joaat("SP1_WEAP_DLC_UNLOCK_0"), iVar2, true);
						break;
					case 2:
						STATS::STAT_SET_INT(joaat("SP2_WEAP_DLC_UNLOCK_0"), iVar2, true);
						break;
					}
				}
			}
	}
}

int func_1744(int iParam0, int iParam1)//Position - 0xB5F88
{
	int iVar0;
	iVar0 = ((iParam0 - iParam1) / 32);
	return iVar0;
}

int func_1745(int iParam0, int iParam1)//Position - 0xB5F9C
{
	int iVar0;
	iVar0 = ((iParam0 - (iParam1 % 32)) % 32);
	return iVar0;
}

var func_1748(var uParam0)//Position - 0xB65A1
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = uParam0->f_2.f_1;
	iVar2 = __LIB_7__::func_250(iVar0);
	iVar3 = func_1744(iVar2, uParam0->f_1);
	iVar4 = __LIB_20__::func_763(PLAYER::PLAYER_PED_ID());
	if (iVar3 > 0)
	{
	}
	else
	{
		switch (iVar4)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("SP0_WEAP_DLC_UNLOCK_0"), &uVar1, -1);
				break;
			case 1:
				STATS::STAT_GET_INT(joaat("SP1_WEAP_DLC_UNLOCK_0"), &uVar1, -1);
				break;
			case 2:
				STATS::STAT_GET_INT(joaat("SP2_WEAP_DLC_UNLOCK_0"), &uVar1, -1);
				break;
			}
	}
	return uVar1;
}

int func_1749(int iParam0)//Position - 0xB6623
{
	if ((((((((((((((((((((((((((((((((((((((iParam0 == joaat("WEAPON_PISTOL50") || iParam0 == joaat("WEAPON_ASSAULTSMG")) || iParam0 == joaat("WEAPON_BULLPUPSHOTGUN")) || iParam0 == joaat("WEAPON_ASSAULTMG")) || iParam0 == joaat("WEAPON_ASSAULTSNIPER")) || iParam0 == joaat("WEAPON_PROGRAMMABLEAR")) || iParam0 == joaat("WEAPON_RUBBERGUN")) || iParam0 == joaat("WEAPON_LOUDHAILER")) || iParam0 == joaat("WEAPON_SPECIALCARBINE")) || iParam0 == joaat("WEAPON_BOTTLE")) || iParam0 == joaat("WEAPON_BULLPUPRIFLE")) || iParam0 == joaat("WEAPON_HEAVYPISTOL")) || iParam0 == joaat("WEAPON_SNSPISTOL")) || iParam0 == joaat("WEAPON_DAGGER")) || iParam0 == joaat("WEAPON_VINTAGEPISTOL")) || iParam0 == joaat("WEAPON_GUSENBERG")) || iParam0 == joaat("WEAPON_HARPOON")) || iParam0 == joaat("WEAPON_FLAREGUN")) || iParam0 == joaat("WEAPON_FIREWORK")) || iParam0 == joaat("WEAPON_MUSKET")) || iParam0 == joaat("WEAPON_AMRIFLE")) || iParam0 == joaat("WEAPON_CROSSBOW")) || iParam0 == joaat("WEAPON_HEAVYSHOTGUN")) || iParam0 == joaat("WEAPON_MARKSMANRIFLE")) || iParam0 == joaat("WEAPON_GARBAGEBAG")) || iParam0 == joaat("WEAPON_HANDCUFFS")) || iParam0 == joaat("WEAPON_HOMINGLAUNCHER")) || iParam0 == joaat("WEAPON_PROXMINE")) || iParam0 == joaat("WEAPON_SNOWBALL")) || iParam0 == joaat("WEAPON_COMBATPDW")) || iParam0 == joaat("WEAPON_KNUCKLE")) || iParam0 == joaat("WEAPON_MARKSMANPISTOL")) || iParam0 == joaat("WEAPON_HATCHET")) || iParam0 == joaat("WEAPON_RAILGUN")) || iParam0 == joaat("WEAPON_REVOLVER")) || iParam0 == joaat("WEAPON_SWITCHBLADE")) || iParam0 == joaat("WEAPON_EMPLAUNCHER")) || iParam0 == joaat("WEAPON_FERTILIZERCAN")) || iParam0 == joaat("WEAPON_STUNGUN_MP"))
	{
		return 1;
	}
	return 0;
}

void func_1750(var uParam0)//Position - 0xB6852
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	iVar0 = uParam0->f_2.f_1;
	if (func_1749(iVar0))
	{
		iVar1 = __LIB_20__::func_763(PLAYER::PLAYER_PED_ID());
		iVar2 = func_1748(uParam0);
		iVar3 = __LIB_7__::func_250(iVar0);
		iVar4 = func_1744(iVar3, uParam0->f_1);
		bVar5 = func_1745(iVar3, uParam0->f_1);
		if (!BitTest(iVar2, bVar5))
		{
			MISC::SET_BIT(&iVar2, bVar5);
			if (iVar4 > 0)
			{
			}
			else
			{
				switch (iVar1)
				{
					case 0:
						STATS::STAT_SET_INT(joaat("SP0_WEAP_DLC_UNLOCK_0"), iVar2, true);
						break;
					case 1:
						STATS::STAT_SET_INT(joaat("SP1_WEAP_DLC_UNLOCK_0"), iVar2, true);
						break;
					case 2:
						STATS::STAT_SET_INT(joaat("SP2_WEAP_DLC_UNLOCK_0"), iVar2, true);
						break;
					}
				}
			}
	}
}

void func_1752()//Position - 0xB6DDD
{
	if ((NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT() && NETWORK::NETWORK_IS_SIGNED_ONLINE()) && MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (!Global_152266.f_3)
		{
			if (iLocal_76)
			{
				iLocal_76 = 0;
			}
			if (__LIB_29__::func_875() == 0)
			{
			}
			else if (__LIB_29__::func_875() == 1)
			{
				Global_152266.f_3 = 1;
				iLocal_75 = 1;
			}
			else if (__LIB_29__::func_875() == 3)
			{
				Global_152266.f_3 = 1;
			}
			else if ((Global_2727222 <= 0f || MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2727222.f_19))) && (Global_2727344 <= 0f || MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2727344.f_19))))
			{
			}
			else if (func_1755(&Global_152266, 1))
			{
				Global_152266.f_3 = 1;
				iLocal_76 = 1;
			}
		}
	}
	else
	{
		if (((Global_152266.f_3 || Global_152266.f_2) || Global_152266 != 0) || Global_152266.f_1 != 0)
		{
			__LIB_34__::func_871(&Global_152266);
		}
		if (NETWORK::NETWORK_IS_SIGNED_IN() && MISC::ARE_PROFILE_SETTINGS_VALID())
		{
			if (!iLocal_76)
			{
				iLocal_75 = 1;
			}
		}
		else
		{
			if (iLocal_76)
			{
				iLocal_76 = 0;
			}
			Global_25 = 0;
		}
	}
	if (iLocal_75 && !iLocal_76)
	{
		if (NETWORK::NETWORK_IS_SIGNED_IN() && MISC::ARE_PROFILE_SETTINGS_VALID())
		{
			Global_25 = MISC::GET_PROFILE_SETTING(866);
		}
		iLocal_75 = 0;
		iLocal_76 = 1;
	}
}

int func_1755(var uParam0, bool bParam1)//Position - 0xB6F8A
{
	struct<20> Var0;
	struct<4> Var1;
	struct<4> Var2;
	char cVar3[128];
	char[] cVar4[8];
	int iVar5;
	if (uParam0->f_4 + 10 < MISC::GET_FRAME_COUNT())
	{
		__LIB_34__::func_871(uParam0);
	}
	uParam0->f_4 = MISC::GET_FRAME_COUNT();
	if ((Global_2727222 <= 0f || MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2727222.f_19))) && (Global_2727344 <= 0f || MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2727344.f_19))))
	{
		return 1;
	}
	Var0.f_19.f_1 = 4;
	Var2.f_3.f_1 = 4;
	Var2.f_0 = 927;
	Var2.f_1 = 1;
	if (!bParam1)
	{
		iVar5 = __LIB_0__::func_714(joaat("MPPLY_PLAT_UP_LB_CHECK"));
	}
	else
	{
		iVar5 = 0;
		if (MISC::ARE_PROFILE_SETTINGS_VALID())
		{
			Global_25 = MISC::GET_PROFILE_SETTING(866);
		}
	}
	if (((((BitTest(iVar5, 0) && BitTest(iVar5, 3)) && BitTest(iVar5, 6)) && BitTest(iVar5, 1)) && BitTest(iVar5, 4)) && BitTest(iVar5, 7))
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (Global_2727222 <= 0f || MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2727222.f_19)))
			{
				*uParam0 = 3;
				return 0;
			}
			cVar3 = { Global_2727222.f_19 };
			cVar4 = "ps3";
			Var2.f_3 = 1;
			StringCopy(&(Var2.f_3.f_1[0 /*16*/]), "ProductId", 32);
			StringCopy(&(Var2.f_3.f_1[0 /*16*/].f_8), "preorder_pack", 32);
			if (!BitTest(iVar5, 0))
			{
				if (func_1761(&(uParam0->f_1), &(uParam0->f_2), &Var2, &cVar3, cVar4))
				{
					__LIB_5__::func_21(&Var1, &Var2);
					if (uParam0->f_2 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var1))
					{
						if (Var1.f_3 > 0)
						{
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &Var0);
							if (STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, 0) > 0)
							{
								MISC::SET_BIT(&iVar5, 2);
								if (!bParam1)
								{
									__LIB_0__::func_779(joaat("MPPLY_PLAT_UP_LB_CHECK"), iVar5);
								}
							}
						}
						MISC::SET_BIT(&iVar5, 0);
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
					}
					uParam0->f_2 = 0;
					*uParam0 = 1;
					__LIB_1__::func_905(&(uParam0->f_1), &(uParam0->f_2), &Var2);
				}
			}
			else
			{
				uParam0->f_2 = 0;
				*uParam0 = 1;
			}
			break;
		case 1:
			cVar3 = { Global_2727222.f_19 };
			cVar4 = "ps3";
			Var2.f_3 = 1;
			StringCopy(&(Var2.f_3.f_1[0 /*16*/]), "ProductId", 32);
			StringCopy(&(Var2.f_3.f_1[0 /*16*/].f_8), "collectors_ed", 32);
			MISC::CLEAR_BIT(&Global_25, 1);
			if (!BitTest(iVar5, 3))
			{
				if (func_1761(&(uParam0->f_1), &(uParam0->f_2), &Var2, &cVar3, cVar4))
				{
					__LIB_5__::func_21(&Var1, &Var2);
					if (uParam0->f_2 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var1))
					{
						if (Var1.f_3 > 0)
						{
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &Var0);
							if (STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, 0) > 0)
							{
								MISC::SET_BIT(&iVar5, 5);
								MISC::SET_BIT(&Global_25, 1);
								if (!bParam1)
								{
									__LIB_0__::func_779(joaat("MPPLY_PLAT_UP_LB_CHECK"), iVar5);
								}
								else if (MISC::ARE_PROFILE_SETTINGS_VALID())
								{
									STATS::SET_HAS_SPECIALEDITION_CONTENT(Global_25);
								}
							}
						}
						MISC::SET_BIT(&Global_25, 5);
						STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), Global_25, true);
						MISC::SET_BIT(&iVar5, 3);
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
					}
					uParam0->f_2 = 0;
					*uParam0 = 2;
					__LIB_1__::func_905(&(uParam0->f_1), &(uParam0->f_2), &Var2);
				}
			}
			else
			{
				uParam0->f_2 = 0;
				*uParam0 = 2;
			}
			break;
		case 2:
			cVar3 = { Global_2727222.f_19 };
			cVar4 = "ps3";
			Var2.f_3 = 1;
			StringCopy(&(Var2.f_3.f_1[0 /*16*/]), "ProductId", 32);
			StringCopy(&(Var2.f_3.f_1[0 /*16*/].f_8), "special_ed", 32);
			MISC::CLEAR_BIT(&Global_25, 2);
			if (!BitTest(iVar5, 6))
			{
				if (func_1761(&(uParam0->f_1), &(uParam0->f_2), &Var2, &cVar3, cVar4))
				{
					__LIB_5__::func_21(&Var1, &Var2);
					if (uParam0->f_2 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var1))
					{
						if (Var1.f_3 > 0)
						{
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &Var0);
							if (STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, 0) > 0)
							{
								MISC::SET_BIT(&iVar5, 8);
								MISC::SET_BIT(&Global_25, 2);
								if (!bParam1)
								{
									__LIB_0__::func_779(joaat("MPPLY_PLAT_UP_LB_CHECK"), iVar5);
								}
								else if (MISC::ARE_PROFILE_SETTINGS_VALID())
								{
									STATS::SET_HAS_SPECIALEDITION_CONTENT(Global_25);
								}
							}
						}
						MISC::SET_BIT(&Global_25, 6);
						STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), Global_25, true);
						MISC::SET_BIT(&iVar5, 6);
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
					}
					uParam0->f_2 = 0;
					*uParam0 = 3;
					__LIB_1__::func_905(&(uParam0->f_1), &(uParam0->f_2), &Var2);
				}
			}
			else
			{
				uParam0->f_2 = 0;
				*uParam0 = 3;
			}
			break;
		case 3:
			if (Global_2727344 <= 0f || MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2727344.f_19)))
			{
				*uParam0 = 6;
				return 0;
			}
			cVar3 = { Global_2727344.f_19 };
			cVar4 = "xbox360";
			Var2.f_3 = 1;
			StringCopy(&(Var2.f_3.f_1[0 /*16*/]), "ProductId", 32);
			StringCopy(&(Var2.f_3.f_1[0 /*16*/].f_8), "atomic_blimp", 32);
			if (!BitTest(iVar5, 1))
			{
				if (func_1761(&(uParam0->f_1), &(uParam0->f_2), &Var2, &cVar3, cVar4))
				{
					__LIB_5__::func_21(&Var1, &Var2);
					if (uParam0->f_2 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var1))
					{
						if (Var1.f_3 > 0)
						{
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &Var0);
							if (STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, 0) > 0)
							{
								MISC::SET_BIT(&iVar5, 2);
								if (!bParam1)
								{
									__LIB_0__::func_779(joaat("MPPLY_PLAT_UP_LB_CHECK"), iVar5);
								}
							}
						}
						MISC::SET_BIT(&iVar5, 1);
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
					}
					uParam0->f_2 = 0;
					*uParam0 = 4;
					__LIB_1__::func_905(&(uParam0->f_1), &(uParam0->f_2), &Var2);
				}
			}
			else
			{
				uParam0->f_2 = 0;
				*uParam0 = 4;
			}
			break;
		case 4:
			cVar3 = { Global_2727344.f_19 };
			cVar4 = "xbox360";
			Var2.f_3 = 1;
			StringCopy(&(Var2.f_3.f_1[0 /*16*/]), "ProductId", 32);
			StringCopy(&(Var2.f_3.f_1[0 /*16*/].f_8), "collectors_ed", 32);
			MISC::CLEAR_BIT(&Global_25, 3);
			if (!BitTest(iVar5, 4))
			{
				if (func_1761(&(uParam0->f_1), &(uParam0->f_2), &Var2, &cVar3, cVar4))
				{
					__LIB_5__::func_21(&Var1, &Var2);
					if (uParam0->f_2 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var1))
					{
						if (Var1.f_3 > 0)
						{
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &Var0);
							if (STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, 0) > 0)
							{
								MISC::SET_BIT(&iVar5, 5);
								MISC::SET_BIT(&Global_25, 3);
								if (!bParam1)
								{
									__LIB_0__::func_779(joaat("MPPLY_PLAT_UP_LB_CHECK"), iVar5);
								}
								else if (MISC::ARE_PROFILE_SETTINGS_VALID())
								{
									STATS::SET_HAS_SPECIALEDITION_CONTENT(Global_25);
								}
							}
						}
						MISC::SET_BIT(&Global_25, 5);
						STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), Global_25, true);
						MISC::SET_BIT(&iVar5, 4);
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
					}
					uParam0->f_2 = 0;
					*uParam0 = 5;
					__LIB_1__::func_905(&(uParam0->f_1), &(uParam0->f_2), &Var2);
				}
			}
			else
			{
				uParam0->f_2 = 0;
				*uParam0 = 5;
			}
			break;
		case 5:
			cVar3 = { Global_2727344.f_19 };
			cVar4 = "xbox360";
			Var2.f_3 = 1;
			StringCopy(&(Var2.f_3.f_1[0 /*16*/]), "ProductId", 32);
			StringCopy(&(Var2.f_3.f_1[0 /*16*/].f_8), "special_ed", 32);
			MISC::CLEAR_BIT(&Global_25, 4);
			if (!BitTest(iVar5, 7))
			{
				if (func_1761(&(uParam0->f_1), &(uParam0->f_2), &Var2, &cVar3, cVar4))
				{
					__LIB_5__::func_21(&Var1, &Var2);
					if (uParam0->f_2 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var1))
					{
						if (Var1.f_3 > 0)
						{
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &Var0);
							if (STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, 0) > 0)
							{
								MISC::SET_BIT(&iVar5, 8);
								MISC::SET_BIT(&Global_25, 4);
								if (!bParam1)
								{
									__LIB_0__::func_779(joaat("MPPLY_PLAT_UP_LB_CHECK"), iVar5);
								}
								else if (MISC::ARE_PROFILE_SETTINGS_VALID())
								{
									STATS::SET_HAS_SPECIALEDITION_CONTENT(Global_25);
								}
							}
						}
						MISC::SET_BIT(&Global_25, 6);
						STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), Global_25, true);
						MISC::SET_BIT(&iVar5, 7);
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
					}
					uParam0->f_2 = 0;
					*uParam0 = 6;
					__LIB_1__::func_905(&(uParam0->f_1), &(uParam0->f_2), &Var2);
					if (!bParam1)
					{
						__LIB_6__::func_881(957786634, 0, 0);
					}
				}
			}
			else
			{
				uParam0->f_2 = 0;
				*uParam0 = 6;
				if (!bParam1)
				{
					__LIB_6__::func_881(957786634, 0, 0);
				}
			}
			break;
		case 6:
			return 1;
			break;
	}
	return 0;
}

int func_1761(var uParam0, var uParam1, var* uParam2, char* sParam3, char* sParam4)//Position - 0xB783E
{
	switch (*uParam0)
	{
		case 0:
			if (!__LIB_21__::func_618() && !__LIB_32__::func_431())
			{
				__LIB_5__::func_18(*uParam2);
				if (STATS::LEADERBOARDS2_READ_BY_PLAFORM(uParam2, sParam3, sParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_1772()//Position - 0xB7ACF
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar0 = false;
	bVar1 = false;
	if (Global_113386.f_10016.f_32 < 4)
	{
		if (!__LIB_6__::func_854(0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if ((!CUTSCENE::IS_CUTSCENE_PLAYING() && !__LIB_1__::func_155(PLAYER::PLAYER_ID(), 1, 1)) && !__LIB_0__::func_527())
					{
						if (CAM::IS_SCREEN_FADED_IN())
						{
							if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
									{
										if (!__LIB_0__::func_174(ENTITY::GET_ENTITY_MODEL(iVar2), 1))
										{
											iLocal_84 = iVar2;
											if (MISC::GET_GAME_TIMER() > (iLocal_86 + 120000))
											{
												if (iLocal_85 != iLocal_84)
												{
													if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar2)))
													{
														if (PAD::IS_CONTROL_ENABLED(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/))
														{
															if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || __LIB_0__::func_1("HELP_DCK" /* GXT: Use ~INPUT_VEH_DUCK~ to duck while in a vehicle. */))
															{
																bVar0 = true;
															}
														}
													}
												}
											}
											else
											{
												iLocal_85 = iLocal_84;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (bVar0)
	{
		iLocal_83++;
		if (iLocal_83 > 10)
		{
			if (__LIB_11__::func_512("HELP_DCK" /* GXT: Use ~INPUT_VEH_DUCK~ to duck while in a vehicle. */) == 2)
			{
				__LIB_18__::func_203("HELP_DCK" /* GXT: Use ~INPUT_VEH_DUCK~ to duck while in a vehicle. */, 0, 0, 1000, 10000, 7, 0, 0, 0);
			}
		}
	}
	else if (iLocal_83 > 0)
	{
		iLocal_83 = 0;
		if (__LIB_11__::func_512("HELP_DCK" /* GXT: Use ~INPUT_VEH_DUCK~ to duck while in a vehicle. */) == 0)
		{
			__LIB_19__::func_856("HELP_DCK" /* GXT: Use ~INPUT_VEH_DUCK~ to duck while in a vehicle. */, 1);
		}
		if (__LIB_0__::func_1("HELP_DCK" /* GXT: Use ~INPUT_VEH_DUCK~ to duck while in a vehicle. */))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (__LIB_0__::func_1("HELP_DCK" /* GXT: Use ~INPUT_VEH_DUCK~ to duck while in a vehicle. */))
	{
		bVar1 = true;
	}
	if (bLocal_82 && !bVar1)
	{
		Global_113386.f_10016.f_32++;
		iLocal_86 = MISC::GET_GAME_TIMER();
		iLocal_85 = iLocal_84;
		StringCopy(&Global_112029, "", 16);
	}
	bLocal_82 = bVar1;
}

void func_1777()//Position - 0xB8217
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bVar0 = false;
	bVar1 = false;
	bVar2 = false;
	if (__LIB_0__::func_39(0))
	{
		if (__LIB_9__::func_611() != 53)
		{
			if (Global_113386.f_10016.f_30 < 3)
			{
				bVar0 = true;
			}
		}
	}
	else if (Global_113386.f_10016.f_31 < 3)
	{
		if (__LIB_5__::func_741())
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						if (!CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							if (CAM::IS_SCREEN_FADED_IN())
							{
								if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || __LIB_0__::func_1("FP_COVER_HLP" /* GXT: Press ~INPUT_COVER~ to detach from cover. */))
									{
										bVar1 = true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (bVar1)
	{
		iLocal_81++;
		if (iLocal_81 > 10)
		{
			HUD::DISPLAY_HELP_TEXT_THIS_FRAME("FP_COVER_HLP" /* GXT: Press ~INPUT_COVER~ to detach from cover. */, false);
			bVar2 = true;
		}
	}
	else if (iLocal_81 > 0)
	{
		iLocal_81 = 0;
	}
	if (bLocal_80 && !bVar2)
	{
		if (__LIB_0__::func_39(0))
		{
			Global_113386.f_10016.f_30++;
		}
		else
		{
			Global_113386.f_10016.f_31++;
		}
	}
	bLocal_80 = bVar2;
}

void func_1780()//Position - 0xB835C
{
	if (!iLocal_73)
	{
		if (__LIB_0__::func_176(77))
		{
			if (__LIB_0__::func_434(11) == 8 && !__LIB_0__::func_176(84))
			{
				if (((!__LIB_8__::func_915(80) && !__LIB_0__::func_176(80)) && (!__LIB_8__::func_915(81) && !__LIB_0__::func_176(81))) && (!__LIB_8__::func_915(82) && !__LIB_0__::func_176(82)))
				{
					iLocal_73 = 1;
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gauntlet"), true);
				}
			}
		}
	}
	else if ((__LIB_8__::func_915(80) && __LIB_8__::func_915(81)) && __LIB_8__::func_915(82))
	{
		iLocal_73 = 0;
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gauntlet"), false);
	}
}

void func_1783()//Position - 0xB84A2
{
	func_1791();
	func_1787();
	func_1786();
	func_1785();
	func_1784();
}

void func_1784()//Position - 0xB84BE
{
	if (BitTest(Global_113386.f_9085.f_99.f_219[0], 19))
	{
		if (BitTest(Global_32338[65 /*23*/].f_11, 0) || BitTest(Global_32338[65 /*23*/].f_11, 15))
		{
			if ((__LIB_8__::func_915(13) || Global_113386.f_25073.f_8) || Global_113386.f_25073.f_9)
			{
				__LIB_10__::func_604(65, 0, 1);
			}
		}
		else if ((!__LIB_8__::func_915(13) && !Global_113386.f_25073.f_8) && !Global_113386.f_25073.f_9)
		{
			__LIB_10__::func_604(65, 1, 1);
		}
	}
}

void func_1785()//Position - 0xB855C
{
	if (BitTest(Global_32338[109 /*23*/].f_11, 0))
	{
		if (Global_113386.f_9085.f_99.f_58[130] && !Global_113386.f_9085.f_99.f_58[131])
		{
			__LIB_10__::func_604(109, 0, 0);
		}
	}
}

void func_1786()//Position - 0xB85A1
{
	if (BitTest(Global_32338[129 /*23*/].f_11, 0))
	{
		if (Global_112473[19 /*10*/].f_1)
		{
			__LIB_10__::func_604(129, 0, 0);
		}
	}
	if (BitTest(Global_32338[132 /*23*/].f_11, 0))
	{
		if ((__LIB_0__::func_176(16) && !__LIB_0__::func_176(65)) && Global_113386.f_24904[15 /*4*/] != 2)
		{
			__LIB_10__::func_604(132, 0, 0);
		}
	}
}

void func_1787()//Position - 0xB8609
{
	if (func_1790(68))
	{
		if (__LIB_2__::func_188(CLOCK::GET_CLOCK_HOURS(), 6, 18))
		{
			func_1788(68, 0);
		}
	}
	else if (!__LIB_2__::func_188(CLOCK::GET_CLOCK_HOURS(), 6, 18))
	{
		func_1788(68, 1);
	}
}

void func_1788(int iParam0, bool bParam1)//Position - 0xB8648
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_32338[iVar0 /*23*/].f_11, 29))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 29);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 29);
	}
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
	MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
}

int func_1790(int iParam0)//Position - 0xB8777
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return BitTest(Global_32338[iVar0 /*23*/].f_11, 29);
}

void func_1791()//Position - 0xB87B2
{
	if (func_1790(72))
	{
		if (__LIB_2__::func_188(CLOCK::GET_CLOCK_HOURS(), 20, 3))
		{
			func_1788(72, 0);
			__LIB_29__::func_872(72, "B_OFFM" /* GXT: Offroad Moto/ATV Race */);
		}
	}
	else if (!__LIB_2__::func_188(CLOCK::GET_CLOCK_HOURS(), 20, 3))
	{
		func_1788(72, 1);
		__LIB_29__::func_872(72, "B_OFFMI" /* GXT: Inactive Offroad Moto/ATV Race */);
	}
}

void func_1792(var uParam0)//Position - 0xB8807
{
	struct<10> Var0;
	bool bVar1;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!__LIB_6__::func_854(0))
		{
			Var0 = { uParam0->f_1[*uParam0 /*10*/] };
			bVar1 = false;
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0) < 900f)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0.f_3, Var0.f_6, Var0.f_9, false, true, 0))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 55 /*INPUT_DIVE*/, true);
					bVar1 = true;
				}
			}
			if (!bVar1)
			{
				*uParam0++;
				if (*uParam0 >= 1)
				{
					*uParam0 = 0;
				}
			}
		}
	}
}

void func_1793()//Position - 0xB88A5
{
	if (Global_78318)
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			Global_78318 = 0;
		}
		else if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			Global_78318 = 0;
		}
		else if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(800);
			}
		}
	}
}

void func_1794()//Position - 0xB8918
{
	if (Global_78317)
	{
		HUD::THEFEED_HIDE_THIS_FRAME();
	}
}

void func_1795(var uParam0)//Position - 0xB892B
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	char* sVar4;
	if (Global_95466 == 2)
	{
		if (SYSTEM::VDIST2(uParam0->f_2[1 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) > 2500f)
		{
			Global_95466 = 3;
		}
		if (__LIB_0__::func_2(0))
		{
			Global_95466 = 3;
		}
	}
	if (Global_95466 == 3)
	{
		if (__LIB_11__::func_918(96, &sVar0))
		{
			STREAMING::REMOVE_ANIM_DICT(&sVar0);
		}
		__LIB_34__::func_986(44);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("family_scene_f0");
		Global_95466 = 0;
	}
	if (Global_95467 == 2)
	{
		if (SYSTEM::VDIST2(uParam0->f_2[1 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) > 2500f)
		{
			Global_95467 = 3;
		}
		if (__LIB_0__::func_2(0))
		{
			Global_95467 = 3;
		}
	}
	if (Global_95467 == 3)
	{
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("family_scene_f0");
		Global_95467 = 0;
	}
	switch (*uParam0)
	{
		case 0:
			func_1812(uParam0);
			SYSTEM::WAIT(0);
			SYSTEM::SETTIMERB(0);
			*uParam0 = 1;
			break;
		case 1:
			if (SYSTEM::TIMERB() > 100)
			{
				SYSTEM::SETTIMERB(0);
				if (__LIB_40__::func_655(5))
				{
					uParam0->f_1 = 0;
					*uParam0 = 2;
				}
			}
			break;
		case 2:
			if (!__LIB_6__::func_763(0) && !__LIB_0__::func_39(17))
			{
				*uParam0 = 3;
				return;
			}
			if (__LIB_0__::func_39(14))
			{
				*uParam0 = 3;
				return;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (!Global_78588.f_1)
				{
					switch (uParam0->f_1)
					{
						case 0:
							func_1805(uParam0, 0, "family_scene_m");
							break;
						case 1:
							func_1804(uParam0, 1, "family_scene_f0");
							break;
						case 2:
							func_1804(uParam0, 2, "family_scene_f1");
							break;
						case 3:
							func_1803(uParam0, 3, "family_scene_t0");
							break;
						case 4:
							func_1799(uParam0, 4, "family_scene_t1");
							break;
						default:
							break;
					}
					uParam0->f_1++;
					if (uParam0->f_1 >= 5)
					{
						uParam0->f_1 = 0;
						*uParam0 = 1;
					}
				}
			}
			if (Global_95463 != 141)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_100162, false))
				{
					iVar1 = func_1798(Global_100162);
					if (iVar1 < 15)
					{
						if (Global_95447[iVar1] == 140)
						{
							if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_100162, true))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_100162, true, true);
							}
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Global_100163, false))
				{
					iVar2 = func_1798(Global_100163);
					if (iVar2 < 15)
					{
						if (Global_95447[iVar2] == 140)
						{
							if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_100163, true))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_100163, true, true);
							}
						}
					}
				}
			}
			break;
		case 3:
			bVar3 = false;
			if (!bVar3)
			{
				if (Global_95466 == 1 && SYSTEM::VDIST2(uParam0->f_2[1 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) < 225f)
				{
					if (__LIB_11__::func_918(96, &sVar4))
					{
						STREAMING::REQUEST_ANIM_DICT(&sVar4);
					}
					__LIB_34__::func_988(44);
					SCRIPT::REQUEST_SCRIPT("family_scene_f0");
					Global_95466 = 2;
					bVar3 = true;
				}
				if (Global_95467 == 1 && SYSTEM::VDIST2(uParam0->f_2[1 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) < 225f)
				{
					SCRIPT::REQUEST_SCRIPT("family_scene_f0");
					Global_95467 = 2;
					bVar3 = true;
				}
				if (Global_95466 == 2 || Global_95467 == 2)
				{
					bVar3 = true;
				}
			}
			if (__LIB_6__::func_763(0))
			{
				if (!bVar3)
				{
					uParam0->f_1 = 0;
					*uParam0 = 1;
				}
				else
				{
					func_1804(uParam0, 1, "family_scene_f0");
					uParam0->f_1 = 1;
					*uParam0 = 2;
				}
				return;
			}
			break;
	}
}

int func_1798(int iParam0)//Position - 0xB8CD1
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar0 == __LIB_11__::func_793(14))
	{
		return 0;
	}
	if (iVar0 == __LIB_11__::func_793(15))
	{
		return 1;
	}
	if (iVar0 == __LIB_11__::func_793(17))
	{
		return 2;
	}
	if (iVar0 == joaat("S_F_M_Maid_01"))
	{
		return 3;
	}
	if (iVar0 == joaat("S_M_M_Gardener_01"))
	{
		return 4;
	}
	if (iVar0 == joaat("IG_Denise"))
	{
		return 5;
	}
	if (iVar0 == __LIB_11__::func_793(19))
	{
		return 6;
	}
	if (iVar0 == __LIB_11__::func_793(37))
	{
		return 7;
	}
	if (iVar0 == __LIB_12__::func_95(0))
	{
		return 8;
	}
	if (iVar0 == __LIB_12__::func_95(2))
	{
		return 9;
	}
	if (iVar0 == __LIB_11__::func_793(20))
	{
		return 10;
	}
	if (iVar0 == __LIB_11__::func_793(40))
	{
		return 11;
	}
	if (iVar0 == joaat("S_F_M_Maid_01"))
	{
		return 12;
	}
	if (iVar0 == __LIB_11__::func_793(32))
	{
		return 13;
	}
	if (iVar0 == __LIB_11__::func_793(24))
	{
		return 14;
	}
	return 16;
}

void func_1799(var uParam0, int iParam1, char* sParam2)//Position - 0xB8DF2
{
	struct<4> Var0;
	if (__LIB_32__::func_791(2))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(sParam2)) <= 0)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), uParam0->f_2[iParam1 /*3*/], true) < 100f)
			{
				SCRIPT::REQUEST_SCRIPT(sParam2);
				while (!SCRIPT::HAS_SCRIPT_LOADED(sParam2))
				{
					SYSTEM::WAIT(0);
				}
				Var0 = { uParam0->f_2[iParam1 /*3*/] };
				Var0.f_3 = uParam0->f_18[iParam1];
				SYSTEM::START_NEW_SCRIPT_WITH_ARGS(sParam2, &Var0, 4, 2050);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam2);
			}
		}
	}
}

void func_1803(var uParam0, int iParam1, char* sParam2)//Position - 0xB8F65
{
	struct<4> Var0;
	if (__LIB_32__::func_791(0) || __LIB_32__::func_791(2))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(sParam2)) <= 0)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), uParam0->f_2[iParam1 /*3*/], true) < 100f)
			{
				SCRIPT::REQUEST_SCRIPT(sParam2);
				while (!SCRIPT::HAS_SCRIPT_LOADED(sParam2))
				{
					SYSTEM::WAIT(0);
				}
				Var0 = { uParam0->f_2[iParam1 /*3*/] };
				Var0.f_3 = uParam0->f_18[iParam1];
				SYSTEM::START_NEW_SCRIPT_WITH_ARGS(sParam2, &Var0, 4, 2050);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam2);
			}
		}
	}
}

void func_1804(var uParam0, int iParam1, char* sParam2)//Position - 0xB8FF4
{
	struct<4> Var0;
	if (__LIB_32__::func_791(1))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(sParam2)) <= 0)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), uParam0->f_2[iParam1 /*3*/], true) < 100f)
			{
				SCRIPT::REQUEST_SCRIPT(sParam2);
				while (!SCRIPT::HAS_SCRIPT_LOADED(sParam2))
				{
					SYSTEM::WAIT(0);
				}
				Var0 = { uParam0->f_2[iParam1 /*3*/] };
				Var0.f_3 = uParam0->f_18[iParam1];
				SYSTEM::START_NEW_SCRIPT_WITH_ARGS(sParam2, &Var0, 4, 2050);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam2);
			}
		}
	}
}

void func_1805(var uParam0, int iParam1, char* sParam2)//Position - 0xB9078
{
	struct<4> Var0;
	if (__LIB_32__::func_791(0))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(sParam2)) <= 0)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), uParam0->f_2[iParam1 /*3*/], true) < 100f)
			{
				SCRIPT::REQUEST_SCRIPT(sParam2);
				while (!SCRIPT::HAS_SCRIPT_LOADED(sParam2))
				{
					SYSTEM::WAIT(0);
				}
				Var0 = { uParam0->f_2[iParam1 /*3*/] };
				Var0.f_3 = uParam0->f_18[iParam1];
				SYSTEM::START_NEW_SCRIPT_WITH_ARGS(sParam2, &Var0, 4, 2050);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam2);
			}
		}
	}
}

void func_1812(var uParam0)//Position - 0xB98A1
{
	uParam0->f_2[0 /*3*/] = { -812.0607f, 179.5117f, 71.1531f };
	uParam0->f_2[1 /*3*/] = { -14.3064f, -1435.9974f, 30.116f };
	uParam0->f_2[2 /*3*/] = { -1.2632f, 531.587f, 174.3424f };
	uParam0->f_2[3 /*3*/] = { 1974.6129f, 3819.1438f, 32.4374f };
	uParam0->f_2[4 /*3*/] = { -1152.5707f, -1517.601f, 9.6346f };
	uParam0->f_18[0] = 222.8314f;
	uParam0->f_18[1] = 188.5817f;
	uParam0->f_18[2] = 167.2562f;
	uParam0->f_18[3] = 92.6017f;
	uParam0->f_18[4] = 90.6729f;
}

void func_1815()//Position - 0xBA314
{
	if (Global_113386.f_9085.f_99.f_58[98])
	{
		if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), false)) && !MISC::GET_IS_PLAYER_IN_ANIMAL_FORM())
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 0, false, false);
		}
	}
}

void func_1816()//Position - 0xBA376
{
	int iVar0;
	int iVar1;
	if (BitTest(Global_2100721.f_104, 0))
	{
		if (Global_2100721.f_81[Global_2100721.f_103] != 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (__LIB_0__::func_154(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Global_2100721.f_87[Global_2100721.f_103 /*3*/], true) > 250f && !__LIB_19__::func_797())
					{
						__LIB_5__::func_11(-1, Global_2100721.f_103);
					}
					else if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_2097536.f_2826))
					{
						iVar0 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_2097536.f_2826);
						if (iVar0 > 300000)
						{
							__LIB_5__::func_11(Global_2097536.f_2826, -1);
						}
					}
				}
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Global_2100721.f_87[Global_2100721.f_103 /*3*/], true) > 250f)
				{
					__LIB_5__::func_11(-1, Global_2100721.f_103);
				}
				else if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_2097536.f_2826))
				{
					iVar1 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_2097536.f_2826);
					if (iVar1 > 300000)
					{
						__LIB_5__::func_11(Global_2097536.f_2826, -1);
					}
				}
			}
		}
		Global_2100721.f_103++;
		if (Global_2100721.f_103 >= 5)
		{
			MISC::CLEAR_BIT(&(Global_2100721.f_104), 0);
		}
	}
	else
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (!BitTest(Global_2100721.f_104, 1))
			{
				__LIB_29__::func_876();
				MISC::SET_BIT(&(Global_2100721.f_104), 1);
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2100721.f_104), 1);
		}
		if (!__LIB_0__::func_649(&(Global_2100721.f_105)))
		{
			__LIB_0__::func_580(&(Global_2100721.f_105), 1, 0);
		}
		else if (__LIB_2__::func_47(&(Global_2100721.f_105), 600000, 1))
		{
			__LIB_29__::func_876();
		}
	}
}

void func_1820(var uParam0)//Position - 0xBA5C7
{
	if (uParam0->f_6)
	{
		switch (*uParam0)
		{
			case 0:
				func_1884();
				func_1883();
				func_1882();
				func_1881();
				func_1879();
				func_1878();
				break;
			case 1:
				func_1877();
				func_1875(uParam0);
				func_1874();
				func_1873();
				func_1872();
				break;
			case 2:
				func_1871();
				func_1870();
				func_1869();
				func_1868();
				func_1867();
				break;
			case 3:
				func_1865();
				func_1864();
				func_1863();
				func_1862();
				func_1859();
				func_1858();
				func_1857();
				func_1840();
				break;
		}
		*uParam0++;
		if (*uParam0 > 3)
		{
			*uParam0 = 0;
		}
		func_1839();
		func_1837();
		func_1821(uParam0);
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		uParam0->f_6 = 1;
	}
}

void func_1821(var uParam0)//Position - 0xBA699
{
	int iVar0;
	char* sVar1;
	if (HUD::HAS_DIRECTOR_MODE_BEEN_LAUNCHED_BY_CODE())
	{
		Global_112331 = 1;
		HUD::SET_DIRECTOR_MODE_LAUNCHED_BY_SCRIPT();
	}
	iVar0 = func_1824(1, 0, 119);
	if (iVar0 != uParam0->f_4)
	{
		if (iVar0 == 0)
		{
			HUD::SET_DIRECTOR_MODE_AVAILABLE(true);
		}
		else
		{
			HUD::SET_DIRECTOR_MODE_AVAILABLE(false);
		}
		uParam0->f_4 = iVar0;
	}
	if (Global_112331)
	{
		if (!__LIB_0__::func_39(14))
		{
			if (iVar0 == 0)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
				if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
				else
				{
					if (!BitTest(uParam0->f_3, 1))
					{
						__LIB_6__::func_849(1);
						if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							MISC::SET_BIT(&(uParam0->f_3), 2);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						MISC::SET_BIT(&(uParam0->f_3), 1);
					}
					if (func_1823(joaat("director_mode"), 51000))
					{
						uParam0->f_3 = 0;
						Global_112331 = 0;
					}
				}
			}
			else if ((MISC::GET_GAME_TIMER() - uParam0->f_7) >= 250)
			{
				MISC::SET_GAME_PAUSED(true);
				HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
				PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
				sVar1 = __LIB_10__::func_825(iVar0, 119);
				HUD::SET_WARNING_MESSAGE("FBR_GENERIC" /* GXT: ~a~ is not available whilst ~a~. */, 16384, 0, false, -1, "FBR_DIR_MODE" /* GXT: Director Mode */, sVar1, true, 0);
				if (!BitTest(uParam0->f_3, 0))
				{
					MISC::SET_BIT(&(uParam0->f_3), 0);
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
				{
					if (BitTest(uParam0->f_3, 0))
					{
						MISC::CLEAR_BIT(&(uParam0->f_3), 0);
					}
					ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					MISC::SET_GAME_PAUSED(false);
					uParam0->f_3 = 0;
					Global_112331 = 0;
					if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
				}
			}
		}
		else
		{
			Global_112334 = 1;
			Global_112335 = 1;
			Global_112331 = 0;
		}
	}
	else
	{
		uParam0->f_7 = MISC::GET_GAME_TIMER();
	}
}

int func_1823(int iParam0, int iParam1)//Position - 0xBA93C
{
	SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam0);
	if (SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam0))
	{
		SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(iParam0, iParam1);
		SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam0);
		return 1;
	}
	return 0;
}

int func_1824(int iParam0, bool bParam1, int iParam2)//Position - 0xBA967
{
	int iVar0;
	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return 13;
	}
	if (bParam1)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1)
		{
			return 2;
		}
	}
	if (__LIB_9__::func_603() && !__LIB_0__::func_39(14))
	{
		return 3;
	}
	if (__LIB_0__::func_511())
	{
		return 3;
	}
	if (__LIB_10__::func_834())
	{
		return 8;
	}
	if (bParam1)
	{
		if (__LIB_0__::func_526())
		{
			return 8;
		}
	}
	if (Global_97361)
	{
		return 3;
	}
	if (Global_32216)
	{
		return 8;
	}
	if (Global_32108)
	{
		return 8;
	}
	if (Global_2883694)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_2883693)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
	{
		return 3;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0)
	{
		return 3;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("creator")) > 0)
	{
		return 3;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("respawn_controller")) > 0)
	{
		return 13;
	}
	if (__LIB_0__::func_2(bParam1))
	{
		return 3;
	}
	if (PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		return 12;
	}
	if (__LIB_0__::func_517(Global_112411, 256))
	{
		return 3;
	}
	if (((__LIB_0__::func_300() || __LIB_0__::func_527()) || __LIB_37__::func_359()) || __LIB_10__::func_833())
	{
		return 5;
	}
	if (__LIB_10__::func_833())
	{
		return 5;
	}
	if (__LIB_10__::func_832())
	{
		return 5;
	}
	if (__LIB_10__::func_831())
	{
		return 5;
	}
	if (__LIB_0__::func_527())
	{
		return 5;
	}
	if (__LIB_0__::func_190() && !Global_112336)
	{
		return 8;
	}
	if (__LIB_37__::func_359())
	{
		return 5;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || __LIB_0__::func_200())
	{
		return 4;
	}
	if (__LIB_0__::func_497())
	{
		return 4;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_1827(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
			{
				return 11;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || Global_112433)
			{
				return 10;
			}
		}
	}
	if (Global_32214)
	{
		return 8;
	}
	if (Global_78317)
	{
		return 4;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
		{
			return 6;
		}
		if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		if (TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
		{
			return 8;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 7;
	}
	if (__LIB_9__::func_602())
	{
		return 8;
	}
	if (Global_31962)
	{
		return 3;
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		return 4;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, false, true, 0))
	{
		return 9;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		return 9;
	}
	if (bParam1)
	{
		if (!__LIB_20__::func_324(0))
		{
			return 8;
		}
	}
	if (PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 9;
	}
	return 0;
}

int func_1827(int iParam0)//Position - 0xBADBE
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, false, true, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		return 5;
	}
	Var0 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
	if (Global_112473[10 /*10*/].f_1)
	{
		if (SYSTEM::VDIST2(Var0, 241.9889f, 360.4732f, 105.6166f) < 2f)
		{
			return 3;
		}
	}
	if (__LIB_0__::func_176(2) && !__LIB_0__::func_176(17))
	{
		if (SYSTEM::VDIST2(Var0, -59.966286f, -1099.0055f, 25.520878f) < 8f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -61.266285f, -1096.5055f, 25.520878f, -58.433327f, -1101.1473f, 29.24937f, 1.25f, false, true))
			{
				return 9;
			}
		}
	}
	if (SYSTEM::VDIST2(Var0, -740.9346f, 5599.4263f, 40.71515f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -746.1299f, 5599.2256f, 40.475605f, -737.63196f, 5599.364f, 44.169304f, 3.375f, false, true))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(Var0, -740.9346f, 5590.4263f, 40.71515f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -746.1299f, 5590.6675f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, false, true))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(Var0, 446.32654f, 5566.35f, 780.21515f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 451.16608f, 5566.451f, 780.1703f, 442.52106f, 5566.374f, 783.98193f, 3.375f, false, true))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(Var0, 446.32654f, 5577.35f, 780.21515f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 451.16608f, 5577.8667f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, false, true))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(Var0, 128.83f, -1297.98f, 29.3f) < 2f || SYSTEM::VDIST2(Var0, 95.07f, -1284.98f, 29.3f) < 2f)
	{
		return 9;
	}
	if (SYSTEM::VDIST2(Var0, 1081.9506f, -1976.7618f, 30.47218f) < 6f && __LIB_8__::func_915(26))
	{
		return 9;
	}
	if (!iLocal_27)
	{
		func_1828(iParam0);
	}
	iVar1 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	if (iVar1 == 0)
	{
		return 0;
	}
	else if ((iVar1 == Global_112349 || iVar1 == Global_112350) || iVar1 == Global_112351)
	{
		return 9;
	}
	else if (iVar1 == Global_112340)
	{
		return 9;
	}
	else if (iVar1 == Global_112341)
	{
		return 9;
	}
	else if (iVar1 == Global_112344)
	{
		return 9;
	}
	else if (iVar1 == Global_112343)
	{
		return 9;
	}
	else if (iVar1 == Global_112345)
	{
		return 9;
	}
	else if (iVar1 == Global_112346)
	{
		return 9;
	}
	else if (iVar1 == Global_112347)
	{
		return 9;
	}
	else if (iVar1 == Global_112348)
	{
		return 9;
	}
	else if (iVar1 == Global_112352)
	{
		return 9;
	}
	else if (iVar1 == Global_112353)
	{
		return 9;
	}
	else if (iVar1 == Global_112354)
	{
		return 9;
	}
	else if (iVar1 == Global_112355)
	{
		return 9;
	}
	else if (iVar1 == Global_112356)
	{
		return 9;
	}
	else if ((iVar1 == Global_112357 || iVar1 == Global_112358) && __LIB_0__::func_176(67))
	{
		return 9;
	}
	iVar2 = 0;
	while (iVar2 <= (19 - 1))
	{
		if (iVar1 == Global_112359[iVar2])
		{
			return 9;
		}
		iVar2++;
	}
	return 0;
}

void func_1828(var uParam0)//Position - 0xBB1E6
{
	int iVar0;
	uParam0 = uParam0;
	__LIB_8__::func_787(24, &Global_112340);
	__LIB_8__::func_787(47, &Global_112341);
	__LIB_8__::func_787(10, &Global_112349);
	__LIB_8__::func_787(9, &Global_112350);
	__LIB_8__::func_787(8, &Global_112351);
	__LIB_8__::func_787(21, &Global_112352);
	__LIB_8__::func_787(11, &Global_112353);
	__LIB_8__::func_787(18, &Global_112357);
	__LIB_8__::func_787(19, &Global_112358);
	Global_112344 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-76.6618f, 6222.1914f, 32.2412f, "V_factory1");
	Global_112343 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-98.2637f, 6210.0225f, 31.924f, "V_factory2");
	Global_112345 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-115.8956f, 6179.7485f, 32.4102f, "V_factory3");
	Global_112346 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-149.8199f, 6144.9775f, 31.3353f, "V_factory4");
	Global_112347 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(16.3605f, -1100.2587f, 28.797f, "v_gun");
	Global_112348 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(125.1948f, -1284.1304f, 28.2847f, "v_strip3");
	Global_112354 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-545.5717f, 1987.1454f, 126.0262f, "cs6_08_mine_int");
	Global_112355 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2330.5984f, 2571.9353f, 45.6802f, "ch3_01_trlr_int");
	Global_112356 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= (19 - 1))
	{
		Global_112359[iVar0] = INTERIOR::GET_INTERIOR_AT_COORDS(__LIB_20__::func_506(iVar0));
		iVar0++;
	}
	iLocal_27 = 1;
}

void func_1837()//Position - 0xBB7A6
{
	if (!Global_4)
	{
		if (!func_1838() && !__LIB_0__::func_2(0))
		{
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("respawn_controller"));
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false))
			{
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("respawn_controller")) == 0)
					{
						func_1823(joaat("respawn_controller"), 1424);
					}
				}
			}
		}
		else
		{
			SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("respawn_controller"));
		}
	}
}

int func_1838()//Position - 0xBB819
{
	if ((Global_43052 == 9 || Global_43052 == 10) || Global_43052 == 5)
	{
		return Global_112035;
	}
	Global_112035 = 0;
	return 0;
}

void func_1839()//Position - 0xBB851
{
	if (__LIB_6__::func_763(0))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("code_controller")) == 0)
		{
			func_1823(joaat("code_controller"), 1424);
		}
	}
	else if (SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("code_controller")))
	{
		SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("code_controller"));
	}
}

void func_1840()//Position - 0xBB893
{
	struct<3> Var0;
	char* sVar1;
	if (!__LIB_6__::func_854(9))
	{
		if (!Global_112034)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			else
			{
				return;
			}
			sVar1 = "launcher_BasejumpHeli";
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("launcher_basejumpheli")) == 0)
			{
				if (func_1856(Var0, 209))
				{
					BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE(sVar1);
				}
			}
			sVar1 = "launcher_BasejumpPack";
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("launcher_basejumppack")) == 0)
			{
				if (func_1855(Var0, 100))
				{
					BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE(sVar1);
				}
			}
			sVar1 = "launcher_golf";
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("launcher_golf")) == 0)
			{
				if (func_1854(Var0, 209))
				{
					BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE(sVar1);
				}
			}
			sVar1 = "launcher_Hunting_Ambient";
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("launcher_hunting_ambient")) == 0)
			{
				if (func_1853(Var0, 209))
				{
					BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE(sVar1);
				}
			}
			sVar1 = "launcher_OffroadRacing";
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("launcher_offroadracing")) == 0)
			{
				if (func_1852(Var0, 209))
				{
					BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE(sVar1);
				}
			}
			sVar1 = "launcher_Racing";
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("launcher_racing")) == 0)
			{
				if (func_1851(Var0, 209))
				{
					BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE(sVar1);
				}
			}
			sVar1 = "launcher_rampage";
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("launcher_rampage")) == 0)
			{
				if (func_1850(Var0, SYSTEM::FLOOR(209f)))
				{
					BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE(sVar1);
				}
			}
			sVar1 = "launcher_pilotschool";
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("launcher_pilotschool")) == 0)
			{
				if (func_1849(Var0, 100))
				{
					BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE(sVar1);
				}
			}
			sVar1 = "launcher_range";
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("launcher_range")) == 0)
			{
				if (func_1848(Var0, 20))
				{
					BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE(sVar1);
				}
			}
			sVar1 = "launcher_stunts";
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("launcher_stunts")) == 0)
			{
				if (func_1847(Var0, 209))
				{
					BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE(sVar1);
				}
			}
			sVar1 = "launcher_tennis";
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("launcher_tennis")) == 0)
			{
				if (__LIB_29__::func_877(Var0, 100))
				{
					BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE(sVar1);
				}
			}
			sVar1 = "launcher_Triathlon";
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("launcher_triathlon")) == 0)
			{
				if (func_1845(Var0, 100))
				{
					BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE(sVar1);
				}
			}
			sVar1 = "launcher_Yoga";
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("launcher_yoga")) == 0)
			{
				if (func_1844(Var0, 20))
				{
					BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE(sVar1);
				}
			}
			sVar1 = "launcher_Darts";
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("launcher_darts")) == 0)
			{
				if (func_1841(Var0, 100))
				{
					BRAIN::REACTIVATE_NAMED_OBJECT_BRAINS_WAITING_TILL_OUT_OF_RANGE(sVar1);
				}
			}
			Global_112034 = 1;
		}
	}
	else if (Global_112034)
	{
		Global_112034 = 0;
	}
}

int func_1841(struct<3> Param0, int iParam1)//Position - 0xBBB5D
{
	float fVar0;
	fVar0 = __LIB_17__::func_377(iParam1);
	if (__LIB_1__::func_147(Param0, 1992.27f, 3050.6f, 47.89f) < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_1844(struct<3> Param0, int iParam1)//Position - 0xBBBBA
{
	float fVar0;
	fVar0 = __LIB_17__::func_377(iParam1);
	if (__LIB_1__::func_147(Param0, -790.9058f, 186.293f, 71.8351f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, 2862.152f, 5945.49f, 357.1186f) < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_1845(struct<3> Param0, int iParam1)//Position - 0xBBC10
{
	float fVar0;
	fVar0 = __LIB_17__::func_377(iParam1);
	if (__LIB_1__::func_147(Param0, 2434.415f, 4284.25f, 35.5059f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, -1230.622f, -2049.97f, 12.8882f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, 1591.686f, 3813.401f, 33.3371f) < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_1847(struct<3> Param0, int iParam1)//Position - 0xBBDDC
{
	float fVar0;
	fVar0 = __LIB_17__::func_377(iParam1);
	if (__LIB_1__::func_147(Param0, 1694.74f, 3276.502f, 41.2796f) < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_1848(struct<3> Param0, int iParam1)//Position - 0xBBE0E
{
	float fVar0;
	fVar0 = __LIB_17__::func_377(iParam1);
	if (__LIB_1__::func_147(Param0, 5.7734f, -1099.782f, 29.8447f) < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_1849(struct<3> Param0, int iParam1)//Position - 0xBBE40
{
	float fVar0;
	fVar0 = __LIB_17__::func_377(iParam1);
	if (__LIB_1__::func_147(Param0, -1154.11f, -2715.203f, 22f) < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_1850(struct<3> Param0, int iParam1)//Position - 0xBBE72
{
	float fVar0;
	fVar0 = __LIB_17__::func_377(iParam1);
	if (__LIB_1__::func_147(Param0, 908f, 3643.7f, 32.2f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, 1181.5f, -400.1f, 67.5f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, 465.1f, -1849.3f, 27.8f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, -161f, -1669.7f, 33f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, 1298.2f, 2504.14f, 21.09f) < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_1851(struct<3> Param0, int iParam1)//Position - 0xBBF34
{
	float fVar0;
	fVar0 = __LIB_17__::func_377(iParam1);
	if (__LIB_1__::func_147(Param0, -813.0546f, -2546.738f, 12.7888f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, 369.29f, 312.41f, 103.24f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, 791.5949f, -1160.856f, 27.8921f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, -1062.986f, -1153.365f, 1.129525f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, -155.8476f, -1566.98f, 34.00011f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, 3063.114f, 639.855f, 0f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, 3447.747f, 5192.996f, 0f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, 152.8052f, 3460.92f, 28f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, 621.749f, -2136.798f, 0f) < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_1852(struct<3> Param0, int iParam1)//Position - 0xBC07C
{
	float fVar0;
	fVar0 = __LIB_17__::func_377(iParam1);
	if (__LIB_1__::func_147(Param0, -1939.483f, 4443.953f, 37.3474f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, -223.6753f, 4224.644f, 43.7304f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, 2037.664f, 2137.386f, 92.7095f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, -518.3414f, 2005.449f, 204.1878f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, 1606.578f, 3841.188f, 33.2931f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, 2996.776f, 2774.085f, 43.26f) < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_1853(struct<3> Param0, int iParam1)//Position - 0xBC162
{
	float fVar0;
	fVar0 = __LIB_17__::func_377(iParam1);
	if (__LIB_1__::func_147(Param0, -1703.17f, 4664.09f, 22.31f) < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_1854(struct<3> Param0, int iParam1)//Position - 0xBC194
{
	float fVar0;
	fVar0 = __LIB_17__::func_377(iParam1);
	if (__LIB_1__::func_147(Param0, -1370.625f, 56.1227f, 52.7033f) < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_1855(struct<3> Param0, int iParam1)//Position - 0xBC1C6
{
	float fVar0;
	fVar0 = __LIB_17__::func_377(iParam1);
	if (__LIB_1__::func_147(Param0, -1237.2f, 4540.75f, 184.75f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, -92.35f, -854.3f, 39.571f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, -801.3582f, 298.8532f, 84.949f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, -120.92f, -976.05f, 295.49f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, -767.209f, 4331.832f, 147.5061f) < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_1856(struct<3> Param0, int iParam1)//Position - 0xBC288
{
	float fVar0;
	fVar0 = __LIB_17__::func_377(iParam1);
	if (__LIB_1__::func_147(Param0, -798.8392f, -1289.817f, 196.9543f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, -742.5047f, 4493.466f, 75.2206f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, 2463.904f, 1509.964f, 35.0372f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, 1208.197f, 174.5777f, 81.0003f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, 1054.534f, -179.6562f, 70.3162f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, 2517.962f, 4971.619f, 44.7057f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, -1367.687f, 4381.998f, 41.4017f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, -274.6559f, 6633.891f, 7.5426f) < fVar0)
	{
		return 1;
	}
	return 0;
}

void func_1857()//Position - 0xBC3B6
{
	struct<3> Var0;
	if ((Global_78319 == 0 && Global_31963 == 0) && !MISC::GET_MISSION_FLAG())
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (((Var0.f_0 >= -800f && Var0.f_1 >= 5300f) && Var0.f_0 <= 640f) && Var0.f_1 <= 5800f)
			{
				if (__LIB_0__::func_176(0) == 1)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cablecar")) == 0)
					{
						func_1823(joaat("cablecar"), 1424);
					}
				}
			}
		}
	}
}

void func_1858()//Position - 0xBC44E
{
	if (Global_113386.f_10049.f_135[1] != -1)
	{
		if (!Global_78319)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("photographymonkey")) == 0 && !Global_78588)
			{
				func_1823(joaat("photographymonkey"), 2050);
			}
		}
	}
}

void func_1859()//Position - 0xBC493
{
	if ((__LIB_0__::func_116() && !__LIB_0__::func_2(0)) && !__LIB_32__::func_769(0))
	{
		if (__LIB_0__::func_368(83))
		{
			if (__LIB_26__::func_499() == 1)
			{
				if ((SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("photographywildlife")) == 0 && !BitTest(Global_113386.f_10049.f_99, 0)) && !Global_78588)
				{
					func_1823(joaat("photographywildlife"), 1424);
				}
			}
		}
	}
}

void func_1862()//Position - 0xBC557
{
	if (Global_78319 == 0 && !MISC::GET_MISSION_FLAG())
	{
		if (__LIB_0__::func_368(65) == 0)
		{
			if (__LIB_0__::func_176(59) == 0)
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_solomon")) == 0)
				{
					if (__LIB_8__::func_915(59))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_60) <= (fLocal_61 * fLocal_61))
							{
								if (__LIB_26__::func_499() == 0)
								{
									func_1823(joaat("ambient_solomon"), 1424);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_1863()//Position - 0xBC5D8
{
	if (__LIB_0__::func_573(0, 8) || __LIB_0__::func_573(0, 7))
	{
		if (!__LIB_6__::func_854(9))
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("controller_races")) == 0)
			{
				func_1823(joaat("controller_races"), 1424);
			}
		}
	}
}

void func_1864()//Position - 0xBC61A
{
	if (!__LIB_6__::func_854(4))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("randomchar_controller")) == 0)
		{
			func_1823(joaat("randomchar_controller"), 1424);
		}
	}
}

void func_1865()//Position - 0xBC645
{
	if (Global_78319 == 0 && Global_31964 == 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_ufos")) == 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (Global_113386.f_10194.f_3854 == 1)
				{
					if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), Local_62, 1) < 290f || __LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), Local_63, 1) < 290f)
					{
						func_1823(joaat("ambient_ufos"), 1424);
					}
				}
			}
		}
	}
}

void func_1867()//Position - 0xBC6FE
{
	if (!__LIB_9__::func_603())
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("bootycallhandler")) == 0)
		{
			func_1823(joaat("bootycallhandler"), 1424);
		}
	}
}

void func_1868()//Position - 0xBC728
{
	if (Global_8140)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("save_anywhere")) == 0)
		{
			func_1823(joaat("save_anywhere"), 1424);
		}
	}
}

void func_1869()//Position - 0xBC750
{
	if (((((__LIB_0__::func_39(0) || __LIB_0__::func_39(3)) || __LIB_0__::func_39(2)) || __LIB_0__::func_39(4)) || __LIB_0__::func_39(9)) || __LIB_0__::func_39(10))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("replay_controller")) == 0)
		{
			func_1823(joaat("replay_controller"), 1424);
		}
	}
}

void func_1870()//Position - 0xBC7B3
{
	if (!__LIB_9__::func_603())
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("comms_controller")) == 0)
		{
			func_1823(joaat("comms_controller"), 1424);
		}
	}
}

void func_1871()//Position - 0xBC7DD
{
	if ((Global_43052 == 6 || Global_43052 == 15) || Global_96448)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("flow_help")) == 0)
		{
			func_1823(joaat("flow_help"), 128);
		}
	}
}

void func_1872()//Position - 0xBC81C
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (__LIB_6__::func_763(13))
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("animal_controller")) == 0)
			{
				func_1823(joaat("animal_controller"), 5050);
			}
		}
	}
}

void func_1873()//Position - 0xBC852
{
	if (__LIB_0__::func_2(1))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_repeat_controller")) == 0)
		{
			if (!BitTest(Global_78567, 2))
			{
				MISC::SET_GAME_PAUSED(true);
				MISC::SET_BIT(&Global_78567, 2);
			}
			if (func_1823(joaat("mission_repeat_controller"), 2050))
			{
				MISC::SET_GAME_PAUSED(false);
			}
		}
	}
}

void func_1874()//Position - 0xBC89B
{
	bool bVar0;
	int iVar1;
	if (Global_32004)
	{
		bVar0 = false;
		iVar1 = 0;
		while (iVar1 < Global_31971)
		{
			if (Global_31971[iVar1] != 0)
			{
				if ((MISC::GET_GAME_TIMER() - Global_31993[iVar1]) > 0)
				{
					if (Global_31982[iVar1])
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Global_31971[iVar1], false);
					}
					else
					{
						PED::SET_PED_MODEL_IS_SUPPRESSED(Global_31971[iVar1], false);
					}
					Global_31971[iVar1] = 0;
				}
				else
				{
					if (Global_31982[iVar1])
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Global_31971[iVar1], true);
					}
					else
					{
						PED::SET_PED_MODEL_IS_SUPPRESSED(Global_31971[iVar1], true);
					}
					bVar0 = true;
				}
			}
			iVar1++;
		}
		if (!bVar0)
		{
			Global_32004 = 0;
		}
	}
}

void func_1875(var uParam0)//Position - 0xBC93D
{
	int iVar0;
	bool bVar1;
	int iVar2;
	if (!uParam0->f_5)
	{
		uParam0->f_1 = (uParam0->f_1 + 1 % 30);
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		bVar1 = (uParam0->f_1 + iVar2 * 30);
		if (bVar1 < 8)
		{
			iVar0 = bVar1;
			if (Global_97738[bVar1])
			{
				if (!Global_97729[bVar1])
				{
					Global_97738[bVar1] = 0;
				}
			}
			else if (!Global_97729[bVar1] && !BitTest(uParam0->f_2, bVar1))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_31__::func_838(iVar0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) < 20f)
				{
					SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("wardrobe_sp"));
					MISC::SET_BIT(&(uParam0->f_2), bVar1);
					uParam0->f_5 = 1;
				}
			}
			else if (SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("wardrobe_sp")))
			{
				if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(2324) > 1)
				{
					Global_97729[bVar1] = 1;
					Global_97738[bVar1] = 1;
					MISC::CLEAR_BIT(&(uParam0->f_2), bVar1);
					SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(joaat("wardrobe_sp"), &iVar0, 5, 2324);
					SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("wardrobe_sp"));
				}
			}
		}
		iVar2++;
	}
	if (uParam0->f_5 && uParam0->f_2 == 0)
	{
		SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("wardrobe_sp"));
		uParam0->f_5 = 0;
	}
}

void func_1877()//Position - 0xBCB4C
{
	if (MISC::HAS_CODE_REQUESTED_AUTOSAVE())
	{
		__LIB_0__::func_533();
		MISC::CLEAR_CODE_REQUESTED_AUTOSAVE();
	}
	if (Global_100480.f_10 > 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("autosave_controller")) == 0)
		{
			func_1823(joaat("autosave_controller"), 1424);
		}
	}
}

void func_1878()//Position - 0xBCB88
{
	if (__LIB_0__::func_176(0))
	{
		if (BitTest(Global_113386.f_668.f_1317, 3))
		{
			if (((!__LIB_0__::func_67(57) || __LIB_0__::func_167(48, 0) != 1) || __LIB_0__::func_167(48, 1) != 1) || __LIB_0__::func_167(48, 2) != 1)
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambientblimp")) == 0)
				{
					func_1823(joaat("ambientblimp"), 1424);
				}
			}
		}
	}
}

void func_1879()//Position - 0xBCBF8
{
	if (__LIB_29__::func_878())
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("friends_controller")) == 0)
		{
			func_1823(joaat("friends_controller"), 2050);
		}
	}
}

void func_1881()//Position - 0xBCC7B
{
	if (__LIB_0__::func_116())
	{
		if (!__LIB_0__::func_573(0, 19))
		{
			if (__LIB_0__::func_176(62))
			{
				if (!Global_113386.f_25073.f_10)
				{
					__LIB_0__::func_71(23, 0);
				}
				if (__LIB_0__::func_368(136))
				{
					__LIB_0__::func_71(39, 0);
				}
			}
		}
		else if (!__LIB_6__::func_854(9))
		{
			if (!__LIB_8__::func_915(13))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Global_32338[65 /*23*/][0 /*3*/]) < 90000f)
					{
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("country_race_controller")) == 0)
						{
							func_1823(joaat("country_race_controller"), 1424);
						}
					}
					else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("country_race_controller")) == 0)
					{
						if (Global_113386.f_25073.f_9)
						{
							Global_113386.f_25073.f_9 = 0;
						}
						if (Global_113386.f_25073.f_8)
						{
							Global_113386.f_25073.f_8 = 0;
						}
					}
				}
			}
		}
	}
	else if (__LIB_0__::func_573(0, 19))
	{
		__LIB_9__::func_989(0, 19, 0);
		__LIB_10__::func_604(65, 0, 0);
	}
}

void func_1882()//Position - 0xBCD7A
{
	if (__LIB_0__::func_176(0))
	{
		if (!__LIB_0__::func_67(59))
		{
			switch (__LIB_11__::func_512("PIMENU_ACTIVATE" /* GXT: The Interaction Menu is now available by holding the ~INPUT_INTERACTION_MENU~ button. Access this menu to place quick GPS markers, select clothing accessories or to view recent mission objectives and help messages. */))
			{
				case 2:
					__LIB_18__::func_203("PIMENU_ACTIVATE" /* GXT: The Interaction Menu is now available by holding the ~INPUT_INTERACTION_MENU~ button. Access this menu to place quick GPS markers, select clothing accessories or to view recent mission objectives and help messages. */, 0, 60000, -1, 10000, 7, 0, 0, 0);
					break;
				case 1:
					__LIB_0__::func_460(59);
					break;
				}
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) == 0)
		{
			func_1823(joaat("pi_menu"), 5050);
		}
	}
}

void func_1883()//Position - 0xBCDEA
{
	bool bVar0;
	bVar0 = false;
	if (Global_78319)
	{
		bVar0 = true;
	}
	if (Global_2703735.f_60)
	{
		bVar0 = true;
	}
	if (Global_1574632.f_18 == 1)
	{
		bVar0 = true;
	}
	if (Global_2)
	{
		bVar0 = true;
	}
	if (__LIB_6__::func_763(0) && !bVar0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_controller_b")) == 0)
		{
			if (__LIB_0__::func_198() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
				HUD::DISABLE_FRONTEND_THIS_FRAME();
			}
			func_1823(joaat("player_controller_b"), 5050);
		}
	}
	else if (SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("player_controller_b")))
	{
		SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("player_controller_b"));
	}
}

void func_1884()//Position - 0xBCE80
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false))
	{
		if (!Global_113386.f_9085.f_1)
		{
			if (!Global_78588.f_1)
			{
				if (__LIB_6__::func_763(0) && !__LIB_0__::func_2(0))
				{
					if (!__LIB_0__::func_176(62))
					{
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_triggerer_a")) == 0)
						{
							func_1823(joaat("mission_triggerer_a"), 5050);
						}
					}
					else if (!__LIB_0__::func_176(38))
					{
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_triggerer_b")) == 0)
						{
							func_1823(joaat("mission_triggerer_b"), 5050);
						}
					}
					else if (!__LIB_0__::func_176(46))
					{
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_triggerer_c")) == 0)
						{
							func_1823(joaat("mission_triggerer_c"), 5050);
						}
					}
					else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_triggerer_d")) == 0)
					{
						func_1823(joaat("mission_triggerer_d"), 5050);
					}
				}
				else
				{
					if (SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("mission_triggerer_a")))
					{
						SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mission_triggerer_a"));
					}
					if (SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("mission_triggerer_b")))
					{
						SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mission_triggerer_b"));
					}
					if (SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("mission_triggerer_c")))
					{
						SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mission_triggerer_c"));
					}
					if (SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("mission_triggerer_d")))
					{
						SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mission_triggerer_d"));
					}
				}
				if (__LIB_0__::func_176(62))
				{
					if (SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("mission_triggerer_a")))
					{
						SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mission_triggerer_a"));
					}
				}
				else if (__LIB_0__::func_176(38))
				{
					if (SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("mission_triggerer_b")))
					{
						SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mission_triggerer_b"));
					}
				}
				else if (__LIB_0__::func_176(46))
				{
					if (SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("mission_triggerer_c")))
					{
						SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mission_triggerer_c"));
					}
				}
				else if (Global_113386.f_9085.f_1)
				{
					if (SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("mission_triggerer_d")))
					{
						SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mission_triggerer_d"));
					}
				}
			}
		}
	}
}

void func_1885()//Position - 0xBD038
{
	int iVar0;
	bool bVar1;
	int iVar2;
	if (__LIB_6__::func_763(3) || Global_78322)
	{
		if (Global_78313)
		{
			if (Global_78312 > 0)
			{
				iVar0 = -1;
				if (Global_78315 != -1)
				{
					iVar0 = Global_78301[func_1886(Global_78315) /*2*/].f_1;
				}
				bVar1 = false;
				iVar2 = 0;
				while (!bVar1 && iVar2 < Global_78312)
				{
					if (Global_78301[iVar2 /*2*/].f_1 > iVar0)
					{
						Global_78315 = Global_78301[iVar2 /*2*/];
						bVar1 = true;
					}
					iVar2++;
				}
			}
			else
			{
				Global_78315 = -1;
				Global_78316 = -1;
			}
			Global_78313 = 0;
		}
	}
}

int func_1886(int iParam0)//Position - 0xBD0CF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_78312)
	{
		if (Global_78301[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1887(var uParam0)//Position - 0xBD0FF
{
	bool bVar0;
	bVar0 = false;
	switch (*uParam0)
	{
		case 0:
			uParam0->f_2 = 777581/*func_1912*/;
			bVar0 = func_1910("AM_H_CNVRT" /* GXT: Hold ~INPUT_VEH_ROOF~ when stationary to raise and lower the roof. */, 27, uParam0, 0, 0, 10000, 1, 0);
			break;
		case 1:
			uParam0->f_2 = 777253/*func_1909*/;
			bVar0 = func_1910("AM_H_NOSTAM" /* GXT: You have run out of stamina. Pushing your body any harder will cause you to lose health. */, 29, uParam0, 0, 0, 10000, 1, 0);
			break;
		case 2:
			uParam0->f_2 = 776742/*func_1906*/;
			bVar0 = func_1910("AM_H_MULTWEP" /* GXT: Weapon slots can contain multiple weapons. Use ~INPUTGROUP_WEAPON_WHEEL_CYCLE~ to cycle through the different weapons in a highlighted slot. */, 30, uParam0, 0, 0, 10000, 1, 0);
			break;
		case 3:
			uParam0->f_2 = 776595/*func_1905*/;
			bVar0 = func_1910("AM_H_RADIO1" /* GXT: Hold ~INPUT_VEH_RADIO_WHEEL~ to bring up the radio wheel.~n~Then use ~INPUTGROUP_WHEEL~ to pick a station.~n~ */, 31, uParam0, 0, 0, 10000, 1, 0);
			break;
		case 4:
			uParam0->f_2 = 776441/*func_1904*/;
			bVar0 = func_1910("AM_H_RADIO2" /* GXT: Tap ~INPUT_VEH_RADIO_WHEEL~ to quickly switch to the next station. */, 32, uParam0, 0, 0, 10000, 1, 0);
			break;
		case 5:
			uParam0->f_2 = 776298/*func_1903*/;
			bVar0 = func_1910("AM_H_VROLL" /* GXT: If a vehicle rolls over use ~INPUT_VEH_MOVE_LR~ to roll it back. */, 46, uParam0, 0, 0, 10000, 1, 0);
			break;
		case 6:
			uParam0->f_2 = 776213/*func_1902*/;
			bVar0 = func_1910("AM_H_GTRA" /* GXT: Friends won't follow you onto a train. */, 49, uParam0, 1, 0, 10000, 1, 0);
			break;
		case 7:
			uParam0->f_2 = 776141/*func_1901*/;
			bVar0 = func_1910("AM_H_PROGAR" /* GXT: Press and hold ~INPUT_AIM~ to aim the Programmable A.R. then press ~INPUT_ATTACK~ to set the range.~n~Once the range has been set press ~INPUT_ATTACK~ to fire. */, 52, uParam0, 0, 0, 10000, 1, 0);
			break;
		case 8:
			uParam0->f_2 = 776067/*func_1900*/;
			bVar0 = func_1910("AM_H_SOCIAL" /* GXT: Sign up to Rockstar Games Social Club now to receive exclusive in-game rewards, including a weapon, a vehicle and access to in-game leaderboards. */, 53, uParam0, 0, 10000, 15000, 1, 0);
			break;
		case 9:
			uParam0->f_2 = 775949/*func_1899*/;
			bVar0 = func_1910("AM_H_PARA" /* GXT: Parachutes will now be automatically equipped when using helicopters or planes. */, 47, uParam0, 0, 0, 10000, 1, 0);
			break;
		case 10:
			uParam0->f_2 = 775887/*func_1898*/;
			bVar0 = func_1910("AM_H_FFRND" /* GXT: Meeting with friends can be arranged through the "Hang Out" option when making a phone call. */, 48, uParam0, 0, 0, 10000, 1, 0);
			break;
		case 11:
			uParam0->f_2 = 775756/*func_1897*/;
			bVar0 = func_1910("AM_H_ZOOMOVE" /* GXT: Allow Movement When Zoomed can be selected in the Controls Section of the Settings Menu which will allow you to move whilst sniping through scoped weapons. */, 60, uParam0, 0, 0, 10000, 1, 0);
			break;
		case 12:
			uParam0->f_2 = 775639/*func_1896*/;
			bVar0 = func_1910("AM_H_DRIVEBY" /* GXT: Gamepad Driveby Control Type can be altered in the Gamepad section of the Settings Menu. The Aim + Fire option allows you to aim and shoot independently. */, 61, uParam0, 0, 0, 10000, 1, 0);
			break;
		case 13:
			uParam0->f_2 = 775577/*func_1895*/;
			bVar0 = func_1910("TRI_NEWRC" /* GXT: New Triathlon race unlocked at ~BLIP_TRIATHLON~ */, 62, uParam0, 0, 0, 10000, 1, 0);
			break;
		case 14:
			uParam0->f_2 = 775529/*func_1893*/;
			bVar0 = func_1910("AM_H_LOGSTOCKS" /* GXT: ~g~BAWSAQ~s~ uses live stats from other players to set stock values. You must be logged in to your ~y~Social Club~s~ account to view and trade stock options. */, 63, uParam0, 0, 0, 10000, 3, 0);
			break;
		case 15:
			uParam0->f_2 = 775411/*func_1892*/;
			bVar0 = func_1910("AM_H_FP1" /* GXT: First Person gamepad controls can be altered in the Gamepad section of the Settings Menu. Here you can set your preferred First Person Control Type and Targeting Mode. */, 64, uParam0, 0, 0, 10000, 1, 0);
			break;
		case 16:
			uParam0->f_2 = 775303/*func_1891*/;
			bVar0 = func_1910("AM_H_FP2" /* GXT: First Person mode can be adjusted in the Settings Menu if you experience motion sickness. Here you can adjust the Field of View, Aim Sensitivity, Look Sensitivity and First Person Ragdoll. */, 65, uParam0, 0, 0, 10000, 1, 0);
			break;
		case 17:
			uParam0->f_2 = 775282/*func_1890*/;
			bVar0 = func_1910("AM_H_EDIT_1" /* GXT: The Rockstar Editor is now available in the Pause Menu for you to create unique videos from GTAV and GTA Online clips. First record your gameplay by holding ~INPUT_CHARACTER_WHEEL~ to select a mode and start recording. */, 66, uParam0, 0, 0, 10000, 1, 0);
			break;
		case 18:
			uParam0->f_2 = 775187/*func_1888*/;
			bVar0 = func_1910("AM_H_EDIT_2" /* GXT: 'Start Recording' will record gameplay instantly. ~n~'Action Replay' will record a clip after the event by running in the background until you're ready to save. */, 67, uParam0, 0, 0, 7500, 1, 0);
			break;
	}
	if (!bVar0)
	{
		*uParam0++;
		if (*uParam0 == 19)
		{
			*uParam0 = 0;
		}
	}
}

int func_1888()//Position - 0xBD413
{
	if (((__LIB_0__::func_176(0) && __LIB_0__::func_67(66)) && __LIB_0__::func_104(1)) && !__LIB_0__::func_67(67))
	{
		return 1;
	}
	return 0;
}

int func_1890()//Position - 0xBD472
{
	if (__LIB_0__::func_176(0))
	{
		return 1;
	}
	return 0;
}

int func_1891()//Position - 0xBD487
{
	if (__LIB_0__::func_67(64))
	{
		if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
		{
			if (Global_112033 == -1)
			{
				Global_112033 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - Global_112033) > 120000)
			{
				if (__LIB_5__::func_741() || __LIB_9__::func_610("AM_H_FP2" /* GXT: First Person mode can be adjusted in the Settings Menu if you experience motion sickness. Here you can adjust the Field of View, Aim Sensitivity, Look Sensitivity and First Person Ragdoll. */))
				{
					Global_112033 = -1;
					return 1;
				}
			}
		}
		else if (Global_112033 != -1)
		{
			Global_112033 = -1;
		}
	}
	return 0;
}

int func_1892()//Position - 0xBD4F3
{
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		if (!__LIB_0__::func_368(138))
		{
			__LIB_0__::func_503(138, 1);
		}
		if (__LIB_0__::func_176(0))
		{
			if (Global_112033 == -1)
			{
				Global_112033 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - Global_112033) > 10000)
			{
				if (__LIB_5__::func_741() || __LIB_9__::func_610("AM_H_FP1" /* GXT: First Person gamepad controls can be altered in the Gamepad section of the Settings Menu. Here you can set your preferred First Person Control Type and Targeting Mode. */))
				{
					return 1;
				}
			}
		}
	}
	else if (Global_112033 != -1)
	{
		Global_112033 = -1;
	}
	return 0;
}

int func_1893()//Position - 0xBD569
{
	if (!PLAYER::IS_PLAYER_ONLINE() && func_1894() == 4)
	{
		return 1;
	}
	return 0;
}

int func_1894()//Position - 0xBD589
{
	int iVar0;
	iVar0 = HUD::GET_CURRENT_WEBSITE_ID();
	return iVar0;
}

int func_1895()//Position - 0xBD599
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_0__::func_368(131) && Global_113386.f_20011.f_8 == 2)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1896()//Position - 0xBD5D7
{
	int iVar0;
	int iVar1;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (__LIB_0__::func_176(0))
					{
						iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
						{
							iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
							{
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

int func_1897()//Position - 0xBD64C
{
	int iVar0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (__LIB_0__::func_176(0))
					{
						if (((WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true) && iVar0 != 0) && iVar0 != joaat("WEAPON_UNARMED")) && iVar0 != joaat("OBJECT"))
						{
							if (WEAPON::GET_WEAPONTYPE_GROUP(iVar0) == joaat("GROUP_SNIPER"))
							{
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

int func_1898()//Position - 0xBD6CF
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (Global_113386.f_18103.f_396 || __LIB_0__::func_176(17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1899()//Position - 0xBD70D
{
	int iVar0;
	int iVar1;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (__LIB_0__::func_368(67))
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
					if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar1) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar1))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
							{
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

int func_1900()//Position - 0xBD783
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!__LIB_6__::func_790(1, 1))
			{
				if (__LIB_0__::func_176(1))
				{
					return 1;
				}
			}
			else
			{
				__LIB_19__::func_856("AM_H_SOCIAL" /* GXT: Sign up to Rockstar Games Social Club now to receive exclusive in-game rewards, including a weapon, a vehicle and access to in-game leaderboards. */, 0);
				__LIB_0__::func_460(53);
			}
		}
	}
	return 0;
}

int func_1901()//Position - 0xBD7CD
{
	int iVar0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
				{
					if (iVar0 == joaat("WEAPON_PROGRAMMABLEAR"))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_1902()//Position - 0xBD815
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
			PED::GET_GROUP_SIZE(iVar0, &iVar1, &iVar2);
			if (iVar1 > 1 || iVar2 > 0)
			{
				if (PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1903()//Position - 0xBD86A
{
	int iVar0;
	int iVar1;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
				if ((!VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1) && !VEHICLE::IS_THIS_MODEL_A_HELI(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(iVar1))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
						{
							if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_UPSIDEDOWN(iVar0))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_1904()//Position - 0xBD8F9
{
	int iVar0;
	if (__LIB_0__::func_67(31))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
						{
							if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (AUDIO::DOES_PLAYER_VEH_HAVE_RADIO())
								{
									if (HUD::IS_HUD_COMPONENT_ACTIVE(16))
									{
										if (!__LIB_11__::func_773(joaat("CALL_ARM2_UNLOCK")) && !__LIB_11__::func_773(742578279))
										{
											if (!__LIB_0__::func_77(0))
											{
												return 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_1905()//Position - 0xBD993
{
	int iVar0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !__LIB_6__::func_854(0))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
					{
						if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if (AUDIO::DOES_PLAYER_VEH_HAVE_RADIO())
							{
								if (!__LIB_11__::func_773(joaat("CALL_ARM2_UNLOCK")) && !__LIB_11__::func_773(742578279))
								{
									if (!__LIB_0__::func_77(0))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_1906()//Position - 0xBDA26
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (HUD::IS_HUD_COMPONENT_ACTIVE(19))
				{
					if (!__LIB_0__::func_77(0) && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
					{
						if (func_1907())
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_1907()//Position - 0xBDA7B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[17];
	iVar0 = 0;
	while (iVar0 <= (44 - 1))
	{
		iVar2 = __LIB_0__::func_263(iVar0);
		if (iVar2 != 0)
		{
			iVar3 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(PLAYER::PLAYER_PED_ID(), __LIB_0__::func_263(iVar0));
			if (iVar3 != 0)
			{
				iVar4 = WEAPON::GET_WEAPONTYPE_GROUP(iVar3);
				if (iVar4 != 0)
				{
					if (iVar3 == joaat("WEAPON_UNARMED"))
					{
						iVar4 = joaat("GROUP_MELEE");
					}
					switch (iVar4)
					{
						case joaat("GROUP_FIREEXTINGUISHER"):
						case joaat("GROUP_PETROLCAN"):
							iVar4 = joaat("GROUP_THROWN");
							break;
						case joaat("GROUP_STUNGUN"):
							iVar4 = joaat("GROUP_PISTOL");
							break;
						case joaat("GROUP_MG"):
							iVar4 = joaat("GROUP_SMG");
							break;
					}
					iVar1 = __LIB_29__::func_879(iVar4);
					if (iVar1 != -1)
					{
						uVar5[iVar1]++;
						if (uVar5[iVar1] > 1)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1909()//Position - 0xBDC25
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PLAYER::GET_PLAYER_SPRINT_TIME_REMAINING(PLAYER::PLAYER_ID()) < 5f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1910(char* sParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xBDC56
{
	if (!__LIB_0__::func_67(iParam1))
	{
		if (!__LIB_9__::func_603())
		{
			Call_Loc(uParam2->f_2);
			if (StackVal)
			{
				uParam2->f_1++;
				if (uParam2->f_1 >= 5)
				{
					switch (__LIB_11__::func_512(sParam0))
					{
						case 2:
							__LIB_18__::func_203(sParam0, iParam6, iParam4, 2500, iParam5, 7, 0, iParam7, 0);
							break;
						case 1:
							if (!func_1911(iParam1))
							{
								__LIB_0__::func_460(iParam1);
							}
							break;
						}
				}
				return 1;
			}
			else
			{
				uParam2->f_1 = 0;
				if (__LIB_9__::func_610(sParam0))
				{
					__LIB_19__::func_856(sParam0, 1);
				}
			}
		}
		else if (bParam3)
		{
			Call_Loc(uParam2->f_2);
			if (StackVal)
			{
				uParam2->f_1++;
				if (uParam2->f_1 >= 5)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							if (CAM::IS_SCREEN_FADED_IN())
							{
								if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
								{
									if (Global_97919.f_44 != 1)
									{
										__LIB_0__::func_151(sParam0, -1);
										__LIB_0__::func_460(iParam1);
										if (iParam7 != 0)
										{
											__LIB_0__::func_71(iParam7, 0);
										}
									}
								}
							}
						}
					}
				}
				return 1;
			}
			else
			{
				uParam2->f_1 = 0;
			}
		}
	}
	return 0;
}

int func_1911(int iParam0)//Position - 0xBDD59
{
	if (iParam0 == 63)
	{
		return 1;
	}
	return 0;
}

int func_1912()//Position - 0xBDD6D
{
	int iVar0;
	int iVar1;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iVar0, false) && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("voltic"))
							{
								iVar1 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iVar0);
								if (iVar1 == 0)
								{
									if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_1924()//Position - 0xBE355
{
	int iVar0;
	struct<13> Var1;
	int iVar2;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 913)
	{
		iVar2 = iVar0;
		Var1.f_4 = 0;
		func_1927(iVar2, &Var1);
		Global_63379[iVar0 /*13*/] = Var1.f_0;
		Global_63379[iVar0 /*13*/].f_2 = Var1.f_2;
		Global_63379[iVar0 /*13*/].f_3 = Var1.f_3;
		Global_63379[iVar0 /*13*/].f_4 = Var1.f_4;
		Global_63379[iVar0 /*13*/].f_5 = Var1.f_5;
		Global_63379[iVar0 /*13*/].f_6 = Var1.f_6;
		Global_63379[iVar0 /*13*/].f_7 = Var1.f_7;
		Global_63379[iVar0 /*13*/].f_8 = Var1.f_8;
		Global_63379[iVar0 /*13*/].f_9 = Var1.f_9;
		Global_63379[iVar0 /*13*/].f_10 = Var1.f_10;
		Global_63379[iVar0 /*13*/].f_11 = Var1.f_11;
		Global_63379[iVar0 /*13*/].f_12 = Var1.f_12;
		Global_63379[iVar0 /*13*/].f_1 = __LIB_29__::func_881(Global_63379[iVar0 /*13*/].f_4);
		iVar0++;
	}
	func_1925();
}

void func_1925()//Position - 0xBE437
{
	Global_91229[0 /*34*/].f_16 = 9;
	Global_91229[0 /*34*/].f_17[0] = 0;
	Global_91229[0 /*34*/].f_17[1] = 1;
	Global_91229[0 /*34*/].f_17[2] = 2;
	Global_91229[0 /*34*/].f_17[3] = 3;
	Global_91229[0 /*34*/].f_17[4] = 4;
	Global_91229[0 /*34*/].f_17[5] = 5;
	Global_91229[0 /*34*/].f_17[6] = 6;
	Global_91229[0 /*34*/].f_17[7] = 7;
	Global_91229[0 /*34*/].f_17[8] = 8;
	Global_91229[1 /*34*/].f_16 = 12;
	Global_91229[1 /*34*/].f_17[0] = 9;
	Global_91229[1 /*34*/].f_17[1] = 10;
	Global_91229[1 /*34*/].f_17[2] = 11;
	Global_91229[1 /*34*/].f_17[3] = 12;
	Global_91229[1 /*34*/].f_17[4] = 13;
	Global_91229[1 /*34*/].f_17[5] = 14;
	Global_91229[1 /*34*/].f_17[6] = 15;
	Global_91229[1 /*34*/].f_17[7] = 16;
	Global_91229[1 /*34*/].f_17[8] = 17;
	Global_91229[1 /*34*/].f_17[9] = 18;
	Global_91229[1 /*34*/].f_17[10] = 19;
	Global_91229[1 /*34*/].f_17[11] = 20;
	Global_91229[2 /*34*/].f_16 = 9;
	Global_91229[2 /*34*/].f_17[0] = 21;
	Global_91229[2 /*34*/].f_17[1] = 22;
	Global_91229[2 /*34*/].f_17[2] = 23;
	Global_91229[2 /*34*/].f_17[3] = 24;
	Global_91229[2 /*34*/].f_17[4] = 25;
	Global_91229[2 /*34*/].f_17[5] = 26;
	Global_91229[2 /*34*/].f_17[6] = 27;
	Global_91229[2 /*34*/].f_17[7] = 28;
	Global_91229[2 /*34*/].f_17[8] = 29;
	Global_91229[3 /*34*/].f_16 = 13;
	Global_91229[3 /*34*/].f_17[0] = 30;
	Global_91229[3 /*34*/].f_17[1] = 31;
	Global_91229[3 /*34*/].f_17[2] = 32;
	Global_91229[3 /*34*/].f_17[3] = 33;
	Global_91229[3 /*34*/].f_17[4] = 34;
	Global_91229[3 /*34*/].f_17[5] = 35;
	Global_91229[3 /*34*/].f_17[6] = 36;
	Global_91229[3 /*34*/].f_17[7] = 37;
	Global_91229[3 /*34*/].f_17[8] = 38;
	Global_91229[3 /*34*/].f_17[9] = 39;
	Global_91229[3 /*34*/].f_17[10] = 40;
	Global_91229[3 /*34*/].f_17[11] = 41;
	Global_91229[3 /*34*/].f_17[12] = 42;
	Global_91229[4 /*34*/].f_16 = 14;
	Global_91229[4 /*34*/].f_17[0] = 43;
	Global_91229[4 /*34*/].f_17[1] = 44;
	Global_91229[4 /*34*/].f_17[2] = 45;
	Global_91229[4 /*34*/].f_17[3] = 46;
	Global_91229[4 /*34*/].f_17[4] = 47;
	Global_91229[4 /*34*/].f_17[5] = 48;
	Global_91229[4 /*34*/].f_17[6] = 49;
	Global_91229[4 /*34*/].f_17[7] = 50;
	Global_91229[4 /*34*/].f_17[8] = 51;
	Global_91229[4 /*34*/].f_17[9] = 52;
	Global_91229[4 /*34*/].f_17[10] = 53;
	Global_91229[4 /*34*/].f_17[11] = 54;
	Global_91229[4 /*34*/].f_17[12] = 55;
	Global_91229[4 /*34*/].f_17[13] = 56;
	Global_91229[5 /*34*/].f_16 = 14;
	Global_91229[5 /*34*/].f_17[0] = 57;
	Global_91229[5 /*34*/].f_17[1] = 58;
	Global_91229[5 /*34*/].f_17[2] = 59;
	Global_91229[5 /*34*/].f_17[3] = 60;
	Global_91229[5 /*34*/].f_17[4] = 61;
	Global_91229[5 /*34*/].f_17[5] = 62;
	Global_91229[5 /*34*/].f_17[6] = 63;
	Global_91229[5 /*34*/].f_17[7] = 64;
	Global_91229[5 /*34*/].f_17[8] = 65;
	Global_91229[5 /*34*/].f_17[9] = 66;
	Global_91229[5 /*34*/].f_17[10] = 67;
	Global_91229[5 /*34*/].f_17[11] = 68;
	Global_91229[5 /*34*/].f_17[12] = 69;
	Global_91229[5 /*34*/].f_17[13] = 70;
	Global_91229[6 /*34*/].f_16 = 15;
	Global_91229[6 /*34*/].f_17[0] = 71;
	Global_91229[6 /*34*/].f_17[1] = 72;
	Global_91229[6 /*34*/].f_17[2] = 73;
	Global_91229[6 /*34*/].f_17[3] = 74;
	Global_91229[6 /*34*/].f_17[4] = 75;
	Global_91229[6 /*34*/].f_17[5] = 76;
	Global_91229[6 /*34*/].f_17[6] = 77;
	Global_91229[6 /*34*/].f_17[7] = 78;
	Global_91229[6 /*34*/].f_17[8] = 79;
	Global_91229[6 /*34*/].f_17[9] = 80;
	Global_91229[6 /*34*/].f_17[10] = 81;
	Global_91229[6 /*34*/].f_17[11] = 82;
	Global_91229[6 /*34*/].f_17[12] = 83;
	Global_91229[6 /*34*/].f_17[13] = 84;
	Global_91229[6 /*34*/].f_17[14] = 85;
	Global_91229[7 /*34*/].f_16 = 16;
	Global_91229[7 /*34*/].f_17[0] = 86;
	Global_91229[7 /*34*/].f_17[1] = 87;
	Global_91229[7 /*34*/].f_17[2] = 88;
	Global_91229[7 /*34*/].f_17[3] = 89;
	Global_91229[7 /*34*/].f_17[4] = 90;
	Global_91229[7 /*34*/].f_17[5] = 91;
	Global_91229[7 /*34*/].f_17[6] = 92;
	Global_91229[7 /*34*/].f_17[7] = 93;
	Global_91229[7 /*34*/].f_17[8] = 94;
	Global_91229[7 /*34*/].f_17[9] = 95;
	Global_91229[7 /*34*/].f_17[10] = 96;
	Global_91229[7 /*34*/].f_17[11] = 97;
	Global_91229[7 /*34*/].f_17[12] = 98;
	Global_91229[7 /*34*/].f_17[13] = 99;
	Global_91229[7 /*34*/].f_17[14] = 100;
	Global_91229[7 /*34*/].f_17[15] = 101;
	Global_91229[9 /*34*/].f_16 = 9;
	Global_91229[9 /*34*/].f_17[0] = 102;
	Global_91229[9 /*34*/].f_17[1] = 103;
	Global_91229[9 /*34*/].f_17[2] = 104;
	Global_91229[9 /*34*/].f_17[3] = 105;
	Global_91229[9 /*34*/].f_17[4] = 106;
	Global_91229[9 /*34*/].f_17[5] = 107;
	Global_91229[9 /*34*/].f_17[6] = 108;
	Global_91229[9 /*34*/].f_17[7] = 109;
	Global_91229[9 /*34*/].f_17[8] = 110;
	Global_91229[8 /*34*/].f_16 = 9;
	Global_91229[8 /*34*/].f_17[0] = 111;
	Global_91229[8 /*34*/].f_17[1] = 112;
	Global_91229[8 /*34*/].f_17[2] = 113;
	Global_91229[8 /*34*/].f_17[3] = 114;
	Global_91229[8 /*34*/].f_17[4] = 115;
	Global_91229[8 /*34*/].f_17[5] = 116;
	Global_91229[8 /*34*/].f_17[6] = 117;
	Global_91229[8 /*34*/].f_17[7] = 118;
	Global_91229[8 /*34*/].f_17[8] = 119;
	Global_91229[10 /*34*/].f_16 = 9;
	Global_91229[10 /*34*/].f_17[0] = 120;
	Global_91229[10 /*34*/].f_17[1] = 121;
	Global_91229[10 /*34*/].f_17[2] = 122;
	Global_91229[10 /*34*/].f_17[3] = 123;
	Global_91229[10 /*34*/].f_17[4] = 124;
	Global_91229[10 /*34*/].f_17[5] = 125;
	Global_91229[10 /*34*/].f_17[6] = 126;
	Global_91229[10 /*34*/].f_17[7] = 127;
	Global_91229[10 /*34*/].f_17[8] = 128;
	Global_91229[11 /*34*/].f_16 = 7;
	Global_91229[11 /*34*/].f_17[0] = 129;
	Global_91229[11 /*34*/].f_17[1] = 130;
	Global_91229[11 /*34*/].f_17[2] = 131;
	Global_91229[11 /*34*/].f_17[3] = 132;
	Global_91229[11 /*34*/].f_17[4] = 133;
	Global_91229[11 /*34*/].f_17[5] = 134;
	Global_91229[11 /*34*/].f_17[6] = 135;
	Global_91229[12 /*34*/].f_16 = 12;
	Global_91229[12 /*34*/].f_17[0] = 136;
	Global_91229[12 /*34*/].f_17[1] = 137;
	Global_91229[12 /*34*/].f_17[2] = 138;
	Global_91229[12 /*34*/].f_17[3] = 139;
	Global_91229[12 /*34*/].f_17[4] = 140;
	Global_91229[12 /*34*/].f_17[5] = 141;
	Global_91229[12 /*34*/].f_17[6] = 142;
	Global_91229[12 /*34*/].f_17[7] = 143;
	Global_91229[12 /*34*/].f_17[8] = 144;
	Global_91229[12 /*34*/].f_17[9] = 145;
	Global_91229[12 /*34*/].f_17[10] = 146;
	Global_91229[12 /*34*/].f_17[11] = 147;
	Global_91229[13 /*34*/].f_16 = 13;
	Global_91229[13 /*34*/].f_17[0] = 148;
	Global_91229[13 /*34*/].f_17[1] = 149;
	Global_91229[13 /*34*/].f_17[2] = 150;
	Global_91229[13 /*34*/].f_17[3] = 151;
	Global_91229[13 /*34*/].f_17[4] = 152;
	Global_91229[13 /*34*/].f_17[5] = 153;
	Global_91229[13 /*34*/].f_17[6] = 154;
	Global_91229[13 /*34*/].f_17[7] = 155;
	Global_91229[13 /*34*/].f_17[8] = 156;
	Global_91229[13 /*34*/].f_17[9] = 157;
	Global_91229[13 /*34*/].f_17[10] = 158;
	Global_91229[13 /*34*/].f_17[11] = 159;
	Global_91229[13 /*34*/].f_17[12] = 160;
	Global_91229[14 /*34*/].f_16 = 11;
	Global_91229[14 /*34*/].f_17[0] = 161;
	Global_91229[14 /*34*/].f_17[1] = 162;
	Global_91229[14 /*34*/].f_17[2] = 163;
	Global_91229[14 /*34*/].f_17[3] = 164;
	Global_91229[14 /*34*/].f_17[4] = 165;
	Global_91229[14 /*34*/].f_17[5] = 166;
	Global_91229[14 /*34*/].f_17[6] = 167;
	Global_91229[14 /*34*/].f_17[7] = 168;
	Global_91229[14 /*34*/].f_17[8] = 169;
	Global_91229[14 /*34*/].f_17[9] = 170;
	Global_91229[14 /*34*/].f_17[10] = 171;
	Global_91229[15 /*34*/].f_16 = 13;
	Global_91229[15 /*34*/].f_17[0] = 172;
	Global_91229[15 /*34*/].f_17[1] = 173;
	Global_91229[15 /*34*/].f_17[2] = 174;
	Global_91229[15 /*34*/].f_17[3] = 175;
	Global_91229[15 /*34*/].f_17[4] = 176;
	Global_91229[15 /*34*/].f_17[5] = 177;
	Global_91229[15 /*34*/].f_17[6] = 178;
	Global_91229[15 /*34*/].f_17[7] = 179;
	Global_91229[15 /*34*/].f_17[8] = 180;
	Global_91229[15 /*34*/].f_17[9] = 181;
	Global_91229[15 /*34*/].f_17[10] = 182;
	Global_91229[15 /*34*/].f_17[11] = 183;
	Global_91229[15 /*34*/].f_17[12] = 184;
	Global_91229[16 /*34*/].f_16 = 11;
	Global_91229[16 /*34*/].f_17[0] = 185;
	Global_91229[16 /*34*/].f_17[1] = 186;
	Global_91229[16 /*34*/].f_17[2] = 187;
	Global_91229[16 /*34*/].f_17[3] = 188;
	Global_91229[16 /*34*/].f_17[4] = 189;
	Global_91229[16 /*34*/].f_17[5] = 190;
	Global_91229[16 /*34*/].f_17[6] = 191;
	Global_91229[16 /*34*/].f_17[7] = 192;
	Global_91229[16 /*34*/].f_17[8] = 193;
	Global_91229[16 /*34*/].f_17[9] = 194;
	Global_91229[16 /*34*/].f_17[10] = 195;
	Global_91229[17 /*34*/].f_16 = 9;
	Global_91229[17 /*34*/].f_17[0] = 196;
	Global_91229[17 /*34*/].f_17[1] = 197;
	Global_91229[17 /*34*/].f_17[2] = 198;
	Global_91229[17 /*34*/].f_17[3] = 199;
	Global_91229[17 /*34*/].f_17[4] = 200;
	Global_91229[17 /*34*/].f_17[5] = 201;
	Global_91229[17 /*34*/].f_17[6] = 202;
	Global_91229[17 /*34*/].f_17[7] = 203;
	Global_91229[17 /*34*/].f_17[8] = 204;
	Global_91229[18 /*34*/].f_16 = 12;
	Global_91229[18 /*34*/].f_17[0] = 205;
	Global_91229[18 /*34*/].f_17[1] = 206;
	Global_91229[18 /*34*/].f_17[2] = 207;
	Global_91229[18 /*34*/].f_17[3] = 208;
	Global_91229[18 /*34*/].f_17[4] = 209;
	Global_91229[18 /*34*/].f_17[5] = 210;
	Global_91229[18 /*34*/].f_17[6] = 211;
	Global_91229[18 /*34*/].f_17[7] = 212;
	Global_91229[18 /*34*/].f_17[8] = 213;
	Global_91229[18 /*34*/].f_17[9] = 214;
	Global_91229[18 /*34*/].f_17[10] = 215;
	Global_91229[18 /*34*/].f_17[11] = 216;
	Global_91229[19 /*34*/].f_16 = 12;
	Global_91229[19 /*34*/].f_17[0] = 217;
	Global_91229[19 /*34*/].f_17[1] = 218;
	Global_91229[19 /*34*/].f_17[2] = 219;
	Global_91229[19 /*34*/].f_17[3] = 220;
	Global_91229[19 /*34*/].f_17[4] = 221;
	Global_91229[19 /*34*/].f_17[5] = 222;
	Global_91229[19 /*34*/].f_17[6] = 223;
	Global_91229[19 /*34*/].f_17[7] = 224;
	Global_91229[19 /*34*/].f_17[8] = 225;
	Global_91229[19 /*34*/].f_17[9] = 226;
	Global_91229[19 /*34*/].f_17[10] = 227;
	Global_91229[19 /*34*/].f_17[11] = 228;
	Global_91229[20 /*34*/].f_16 = 10;
	Global_91229[20 /*34*/].f_17[0] = 229;
	Global_91229[20 /*34*/].f_17[1] = 230;
	Global_91229[20 /*34*/].f_17[2] = 231;
	Global_91229[20 /*34*/].f_17[3] = 232;
	Global_91229[20 /*34*/].f_17[4] = 233;
	Global_91229[20 /*34*/].f_17[5] = 234;
	Global_91229[20 /*34*/].f_17[6] = 235;
	Global_91229[20 /*34*/].f_17[7] = 236;
	Global_91229[20 /*34*/].f_17[8] = 237;
	Global_91229[20 /*34*/].f_17[9] = 238;
	Global_91229[21 /*34*/].f_16 = 10;
	Global_91229[21 /*34*/].f_17[0] = 239;
	Global_91229[21 /*34*/].f_17[1] = 240;
	Global_91229[21 /*34*/].f_17[2] = 241;
	Global_91229[21 /*34*/].f_17[3] = 242;
	Global_91229[21 /*34*/].f_17[4] = 243;
	Global_91229[21 /*34*/].f_17[5] = 244;
	Global_91229[21 /*34*/].f_17[6] = 245;
	Global_91229[21 /*34*/].f_17[7] = 246;
	Global_91229[21 /*34*/].f_17[8] = 247;
	Global_91229[21 /*34*/].f_17[9] = 248;
	Global_91229[22 /*34*/].f_16 = 8;
	Global_91229[22 /*34*/].f_17[0] = 249;
	Global_91229[22 /*34*/].f_17[1] = 250;
	Global_91229[22 /*34*/].f_17[2] = 251;
	Global_91229[22 /*34*/].f_17[3] = 252;
	Global_91229[22 /*34*/].f_17[4] = 253;
	Global_91229[22 /*34*/].f_17[5] = 254;
	Global_91229[22 /*34*/].f_17[6] = 255;
	Global_91229[22 /*34*/].f_17[7] = 256;
	Global_91229[23 /*34*/].f_16 = 0;
	Global_91229[26 /*34*/].f_16 = 16;
	Global_91229[26 /*34*/].f_17[0] = 257;
	Global_91229[26 /*34*/].f_17[1] = 258;
	Global_91229[26 /*34*/].f_17[2] = 259;
	Global_91229[26 /*34*/].f_17[3] = 260;
	Global_91229[26 /*34*/].f_17[4] = 261;
	Global_91229[26 /*34*/].f_17[5] = 262;
	Global_91229[26 /*34*/].f_17[6] = 263;
	Global_91229[26 /*34*/].f_17[7] = 264;
	Global_91229[26 /*34*/].f_17[8] = 265;
	Global_91229[26 /*34*/].f_17[9] = 266;
	Global_91229[26 /*34*/].f_17[10] = 267;
	Global_91229[26 /*34*/].f_17[11] = 268;
	Global_91229[26 /*34*/].f_17[12] = 269;
	Global_91229[26 /*34*/].f_17[13] = 270;
	Global_91229[26 /*34*/].f_17[14] = 271;
	Global_91229[26 /*34*/].f_17[15] = 272;
	Global_91229[28 /*34*/].f_16 = 0;
	Global_91229[29 /*34*/].f_16 = 10;
	Global_91229[29 /*34*/].f_17[0] = 273;
	Global_91229[29 /*34*/].f_17[1] = 274;
	Global_91229[29 /*34*/].f_17[2] = 275;
	Global_91229[29 /*34*/].f_17[3] = 276;
	Global_91229[29 /*34*/].f_17[4] = 277;
	Global_91229[29 /*34*/].f_17[5] = 278;
	Global_91229[29 /*34*/].f_17[6] = 279;
	Global_91229[29 /*34*/].f_17[7] = 280;
	Global_91229[29 /*34*/].f_17[8] = 281;
	Global_91229[29 /*34*/].f_17[9] = 282;
	Global_91229[30 /*34*/].f_16 = 11;
	Global_91229[30 /*34*/].f_17[0] = 283;
	Global_91229[30 /*34*/].f_17[1] = 284;
	Global_91229[30 /*34*/].f_17[2] = 285;
	Global_91229[30 /*34*/].f_17[3] = 286;
	Global_91229[30 /*34*/].f_17[4] = 287;
	Global_91229[30 /*34*/].f_17[5] = 288;
	Global_91229[30 /*34*/].f_17[6] = 289;
	Global_91229[30 /*34*/].f_17[7] = 290;
	Global_91229[30 /*34*/].f_17[8] = 291;
	Global_91229[30 /*34*/].f_17[9] = 292;
	Global_91229[30 /*34*/].f_17[10] = 293;
	Global_91229[31 /*34*/].f_16 = 12;
	Global_91229[31 /*34*/].f_17[0] = 294;
	Global_91229[31 /*34*/].f_17[1] = 295;
	Global_91229[31 /*34*/].f_17[2] = 296;
	Global_91229[31 /*34*/].f_17[3] = 297;
	Global_91229[31 /*34*/].f_17[4] = 298;
	Global_91229[31 /*34*/].f_17[5] = 299;
	Global_91229[31 /*34*/].f_17[6] = 300;
	Global_91229[31 /*34*/].f_17[7] = 301;
	Global_91229[31 /*34*/].f_17[8] = 302;
	Global_91229[31 /*34*/].f_17[9] = 303;
	Global_91229[31 /*34*/].f_17[10] = 304;
	Global_91229[31 /*34*/].f_17[11] = 305;
	Global_91229[38 /*34*/].f_16 = 11;
	Global_91229[38 /*34*/].f_17[0] = 306;
	Global_91229[38 /*34*/].f_17[1] = 307;
	Global_91229[38 /*34*/].f_17[2] = 308;
	Global_91229[38 /*34*/].f_17[3] = 309;
	Global_91229[38 /*34*/].f_17[4] = 310;
	Global_91229[38 /*34*/].f_17[5] = 311;
	Global_91229[38 /*34*/].f_17[6] = 312;
	Global_91229[38 /*34*/].f_17[7] = 313;
	Global_91229[38 /*34*/].f_17[8] = 314;
	Global_91229[38 /*34*/].f_17[9] = 315;
	Global_91229[38 /*34*/].f_17[10] = 316;
	Global_91229[33 /*34*/].f_16 = 5;
	Global_91229[33 /*34*/].f_17[0] = 317;
	Global_91229[33 /*34*/].f_17[1] = 318;
	Global_91229[33 /*34*/].f_17[2] = 319;
	Global_91229[33 /*34*/].f_17[3] = 320;
	Global_91229[33 /*34*/].f_17[4] = 321;
	Global_91229[34 /*34*/].f_16 = 4;
	Global_91229[34 /*34*/].f_17[0] = 322;
	Global_91229[34 /*34*/].f_17[1] = 323;
	Global_91229[34 /*34*/].f_17[2] = 324;
	Global_91229[34 /*34*/].f_17[3] = 325;
	Global_91229[39 /*34*/].f_16 = 12;
	Global_91229[39 /*34*/].f_17[0] = 326;
	Global_91229[39 /*34*/].f_17[1] = 327;
	Global_91229[39 /*34*/].f_17[2] = 328;
	Global_91229[39 /*34*/].f_17[3] = 329;
	Global_91229[39 /*34*/].f_17[4] = 330;
	Global_91229[39 /*34*/].f_17[5] = 331;
	Global_91229[39 /*34*/].f_17[6] = 332;
	Global_91229[39 /*34*/].f_17[7] = 333;
	Global_91229[39 /*34*/].f_17[8] = 334;
	Global_91229[39 /*34*/].f_17[9] = 335;
	Global_91229[39 /*34*/].f_17[10] = 336;
	Global_91229[39 /*34*/].f_17[11] = 337;
	Global_91229[40 /*34*/].f_16 = 8;
	Global_91229[40 /*34*/].f_17[0] = 338;
	Global_91229[40 /*34*/].f_17[1] = 339;
	Global_91229[40 /*34*/].f_17[2] = 340;
	Global_91229[40 /*34*/].f_17[3] = 341;
	Global_91229[40 /*34*/].f_17[4] = 342;
	Global_91229[40 /*34*/].f_17[5] = 343;
	Global_91229[40 /*34*/].f_17[6] = 344;
	Global_91229[40 /*34*/].f_17[7] = 345;
	Global_91229[41 /*34*/].f_16 = 14;
	Global_91229[41 /*34*/].f_17[0] = 346;
	Global_91229[41 /*34*/].f_17[1] = 347;
	Global_91229[41 /*34*/].f_17[2] = 348;
	Global_91229[41 /*34*/].f_17[3] = 349;
	Global_91229[41 /*34*/].f_17[4] = 350;
	Global_91229[41 /*34*/].f_17[5] = 351;
	Global_91229[41 /*34*/].f_17[6] = 352;
	Global_91229[41 /*34*/].f_17[7] = 353;
	Global_91229[41 /*34*/].f_17[8] = 354;
	Global_91229[41 /*34*/].f_17[9] = 355;
	Global_91229[41 /*34*/].f_17[10] = 356;
	Global_91229[41 /*34*/].f_17[11] = 357;
	Global_91229[41 /*34*/].f_17[12] = 358;
	Global_91229[41 /*34*/].f_17[13] = 359;
	Global_91229[42 /*34*/].f_16 = 12;
	Global_91229[42 /*34*/].f_17[0] = 360;
	Global_91229[42 /*34*/].f_17[1] = 361;
	Global_91229[42 /*34*/].f_17[2] = 362;
	Global_91229[42 /*34*/].f_17[3] = 363;
	Global_91229[42 /*34*/].f_17[4] = 364;
	Global_91229[42 /*34*/].f_17[5] = 365;
	Global_91229[42 /*34*/].f_17[6] = 366;
	Global_91229[42 /*34*/].f_17[7] = 367;
	Global_91229[42 /*34*/].f_17[8] = 368;
	Global_91229[42 /*34*/].f_17[9] = 369;
	Global_91229[42 /*34*/].f_17[10] = 370;
	Global_91229[42 /*34*/].f_17[11] = 371;
	Global_91229[43 /*34*/].f_16 = 12;
	Global_91229[43 /*34*/].f_17[0] = 372;
	Global_91229[43 /*34*/].f_17[1] = 373;
	Global_91229[43 /*34*/].f_17[2] = 374;
	Global_91229[43 /*34*/].f_17[3] = 375;
	Global_91229[43 /*34*/].f_17[4] = 376;
	Global_91229[43 /*34*/].f_17[5] = 377;
	Global_91229[43 /*34*/].f_17[6] = 378;
	Global_91229[43 /*34*/].f_17[7] = 379;
	Global_91229[43 /*34*/].f_17[8] = 380;
	Global_91229[43 /*34*/].f_17[9] = 381;
	Global_91229[43 /*34*/].f_17[10] = 382;
	Global_91229[43 /*34*/].f_17[11] = 383;
	Global_91229[44 /*34*/].f_16 = 9;
	Global_91229[44 /*34*/].f_17[0] = 384;
	Global_91229[44 /*34*/].f_17[1] = 385;
	Global_91229[44 /*34*/].f_17[2] = 386;
	Global_91229[44 /*34*/].f_17[3] = 387;
	Global_91229[44 /*34*/].f_17[4] = 388;
	Global_91229[44 /*34*/].f_17[5] = 389;
	Global_91229[44 /*34*/].f_17[6] = 390;
	Global_91229[44 /*34*/].f_17[7] = 391;
	Global_91229[44 /*34*/].f_17[8] = 392;
	Global_91229[45 /*34*/].f_16 = 7;
	Global_91229[45 /*34*/].f_17[0] = 393;
	Global_91229[45 /*34*/].f_17[1] = 394;
	Global_91229[45 /*34*/].f_17[2] = 395;
	Global_91229[45 /*34*/].f_17[3] = 396;
	Global_91229[45 /*34*/].f_17[4] = 397;
	Global_91229[45 /*34*/].f_17[5] = 398;
	Global_91229[45 /*34*/].f_17[6] = 399;
	Global_91229[46 /*34*/].f_16 = 13;
	Global_91229[46 /*34*/].f_17[0] = 400;
	Global_91229[46 /*34*/].f_17[1] = 401;
	Global_91229[46 /*34*/].f_17[2] = 402;
	Global_91229[46 /*34*/].f_17[3] = 403;
	Global_91229[46 /*34*/].f_17[4] = 404;
	Global_91229[46 /*34*/].f_17[5] = 405;
	Global_91229[46 /*34*/].f_17[6] = 406;
	Global_91229[46 /*34*/].f_17[7] = 407;
	Global_91229[46 /*34*/].f_17[8] = 408;
	Global_91229[46 /*34*/].f_17[9] = 409;
	Global_91229[46 /*34*/].f_17[10] = 410;
	Global_91229[46 /*34*/].f_17[11] = 411;
	Global_91229[46 /*34*/].f_17[12] = 412;
	Global_91229[47 /*34*/].f_16 = 16;
	Global_91229[47 /*34*/].f_17[0] = 413;
	Global_91229[47 /*34*/].f_17[1] = 414;
	Global_91229[47 /*34*/].f_17[2] = 415;
	Global_91229[47 /*34*/].f_17[3] = 416;
	Global_91229[47 /*34*/].f_17[4] = 417;
	Global_91229[47 /*34*/].f_17[5] = 418;
	Global_91229[47 /*34*/].f_17[6] = 419;
	Global_91229[47 /*34*/].f_17[7] = 420;
	Global_91229[47 /*34*/].f_17[8] = 421;
	Global_91229[47 /*34*/].f_17[9] = 422;
	Global_91229[47 /*34*/].f_17[10] = 423;
	Global_91229[47 /*34*/].f_17[11] = 424;
	Global_91229[47 /*34*/].f_17[12] = 425;
	Global_91229[47 /*34*/].f_17[13] = 426;
	Global_91229[47 /*34*/].f_17[14] = 427;
	Global_91229[47 /*34*/].f_17[15] = 428;
	Global_91229[48 /*34*/].f_16 = 12;
	Global_91229[48 /*34*/].f_17[0] = 429;
	Global_91229[48 /*34*/].f_17[1] = 430;
	Global_91229[48 /*34*/].f_17[2] = 431;
	Global_91229[48 /*34*/].f_17[3] = 432;
	Global_91229[48 /*34*/].f_17[4] = 433;
	Global_91229[48 /*34*/].f_17[5] = 434;
	Global_91229[48 /*34*/].f_17[6] = 435;
	Global_91229[48 /*34*/].f_17[7] = 436;
	Global_91229[48 /*34*/].f_17[8] = 437;
	Global_91229[48 /*34*/].f_17[9] = 438;
	Global_91229[48 /*34*/].f_17[10] = 439;
	Global_91229[48 /*34*/].f_17[11] = 440;
	Global_91229[49 /*34*/].f_16 = 13;
	Global_91229[49 /*34*/].f_17[0] = 441;
	Global_91229[49 /*34*/].f_17[1] = 442;
	Global_91229[49 /*34*/].f_17[2] = 443;
	Global_91229[49 /*34*/].f_17[3] = 444;
	Global_91229[49 /*34*/].f_17[4] = 445;
	Global_91229[49 /*34*/].f_17[5] = 446;
	Global_91229[49 /*34*/].f_17[6] = 447;
	Global_91229[49 /*34*/].f_17[7] = 448;
	Global_91229[49 /*34*/].f_17[8] = 449;
	Global_91229[49 /*34*/].f_17[9] = 450;
	Global_91229[49 /*34*/].f_17[10] = 451;
	Global_91229[49 /*34*/].f_17[11] = 452;
	Global_91229[49 /*34*/].f_17[12] = 453;
	Global_91229[50 /*34*/].f_16 = 0;
	Global_91229[51 /*34*/].f_16 = 0;
	Global_91229[52 /*34*/].f_16 = 0;
	Global_91229[53 /*34*/].f_16 = 12;
	Global_91229[53 /*34*/].f_17[0] = 454;
	Global_91229[53 /*34*/].f_17[1] = 455;
	Global_91229[53 /*34*/].f_17[2] = 456;
	Global_91229[53 /*34*/].f_17[3] = 457;
	Global_91229[53 /*34*/].f_17[4] = 458;
	Global_91229[53 /*34*/].f_17[5] = 459;
	Global_91229[53 /*34*/].f_17[6] = 460;
	Global_91229[53 /*34*/].f_17[7] = 461;
	Global_91229[53 /*34*/].f_17[8] = 462;
	Global_91229[53 /*34*/].f_17[9] = 463;
	Global_91229[53 /*34*/].f_17[10] = 464;
	Global_91229[53 /*34*/].f_17[11] = 465;
	Global_91229[54 /*34*/].f_16 = 0;
	Global_91229[55 /*34*/].f_16 = 0;
	Global_91229[56 /*34*/].f_16 = 0;
	Global_91229[57 /*34*/].f_16 = 0;
	Global_91229[58 /*34*/].f_16 = 0;
	Global_91229[60 /*34*/].f_16 = 8;
	Global_91229[60 /*34*/].f_17[0] = 466;
	Global_91229[60 /*34*/].f_17[1] = 467;
	Global_91229[60 /*34*/].f_17[2] = 468;
	Global_91229[60 /*34*/].f_17[3] = 469;
	Global_91229[60 /*34*/].f_17[4] = 470;
	Global_91229[60 /*34*/].f_17[5] = 471;
	Global_91229[60 /*34*/].f_17[6] = 472;
	Global_91229[60 /*34*/].f_17[7] = 473;
	Global_91229[61 /*34*/].f_16 = 12;
	Global_91229[61 /*34*/].f_17[0] = 474;
	Global_91229[61 /*34*/].f_17[1] = 475;
	Global_91229[61 /*34*/].f_17[2] = 476;
	Global_91229[61 /*34*/].f_17[3] = 477;
	Global_91229[61 /*34*/].f_17[4] = 478;
	Global_91229[61 /*34*/].f_17[5] = 479;
	Global_91229[61 /*34*/].f_17[6] = 480;
	Global_91229[61 /*34*/].f_17[7] = 481;
	Global_91229[61 /*34*/].f_17[8] = 482;
	Global_91229[61 /*34*/].f_17[9] = 483;
	Global_91229[61 /*34*/].f_17[10] = 484;
	Global_91229[61 /*34*/].f_17[11] = 485;
	Global_91229[62 /*34*/].f_16 = 13;
	Global_91229[62 /*34*/].f_17[0] = 486;
	Global_91229[62 /*34*/].f_17[1] = 487;
	Global_91229[62 /*34*/].f_17[2] = 488;
	Global_91229[62 /*34*/].f_17[3] = 489;
	Global_91229[62 /*34*/].f_17[4] = 490;
	Global_91229[62 /*34*/].f_17[5] = 491;
	Global_91229[62 /*34*/].f_17[6] = 492;
	Global_91229[62 /*34*/].f_17[7] = 493;
	Global_91229[62 /*34*/].f_17[8] = 494;
	Global_91229[62 /*34*/].f_17[9] = 495;
	Global_91229[62 /*34*/].f_17[10] = 496;
	Global_91229[62 /*34*/].f_17[11] = 497;
	Global_91229[62 /*34*/].f_17[12] = 498;
	Global_91229[63 /*34*/].f_16 = 16;
	Global_91229[63 /*34*/].f_17[0] = 499;
	Global_91229[63 /*34*/].f_17[1] = 500;
	Global_91229[63 /*34*/].f_17[2] = 501;
	Global_91229[63 /*34*/].f_17[3] = 502;
	Global_91229[63 /*34*/].f_17[4] = 503;
	Global_91229[63 /*34*/].f_17[5] = 504;
	Global_91229[63 /*34*/].f_17[6] = 505;
	Global_91229[63 /*34*/].f_17[7] = 506;
	Global_91229[63 /*34*/].f_17[8] = 507;
	Global_91229[63 /*34*/].f_17[9] = 508;
	Global_91229[63 /*34*/].f_17[10] = 509;
	Global_91229[63 /*34*/].f_17[11] = 510;
	Global_91229[63 /*34*/].f_17[12] = 511;
	Global_91229[63 /*34*/].f_17[13] = 512;
	Global_91229[63 /*34*/].f_17[14] = 513;
	Global_91229[63 /*34*/].f_17[15] = 514;
	Global_91229[64 /*34*/].f_16 = 12;
	Global_91229[64 /*34*/].f_17[0] = 515;
	Global_91229[64 /*34*/].f_17[1] = 516;
	Global_91229[64 /*34*/].f_17[2] = 517;
	Global_91229[64 /*34*/].f_17[3] = 518;
	Global_91229[64 /*34*/].f_17[4] = 519;
	Global_91229[64 /*34*/].f_17[5] = 520;
	Global_91229[64 /*34*/].f_17[6] = 521;
	Global_91229[64 /*34*/].f_17[7] = 522;
	Global_91229[64 /*34*/].f_17[8] = 523;
	Global_91229[64 /*34*/].f_17[9] = 524;
	Global_91229[64 /*34*/].f_17[10] = 525;
	Global_91229[64 /*34*/].f_17[11] = 526;
	Global_91229[66 /*34*/].f_16 = 7;
	Global_91229[66 /*34*/].f_17[0] = 527;
	Global_91229[66 /*34*/].f_17[1] = 528;
	Global_91229[66 /*34*/].f_17[2] = 529;
	Global_91229[66 /*34*/].f_17[3] = 530;
	Global_91229[66 /*34*/].f_17[4] = 531;
	Global_91229[66 /*34*/].f_17[5] = 532;
	Global_91229[66 /*34*/].f_17[6] = 533;
	Global_91229[67 /*34*/].f_16 = 6;
	Global_91229[67 /*34*/].f_17[0] = 534;
	Global_91229[67 /*34*/].f_17[1] = 535;
	Global_91229[67 /*34*/].f_17[2] = 536;
	Global_91229[67 /*34*/].f_17[3] = 537;
	Global_91229[67 /*34*/].f_17[4] = 538;
	Global_91229[67 /*34*/].f_17[5] = 539;
	Global_91229[68 /*34*/].f_16 = 7;
	Global_91229[68 /*34*/].f_17[0] = 540;
	Global_91229[68 /*34*/].f_17[1] = 541;
	Global_91229[68 /*34*/].f_17[2] = 542;
	Global_91229[68 /*34*/].f_17[3] = 543;
	Global_91229[68 /*34*/].f_17[4] = 544;
	Global_91229[68 /*34*/].f_17[5] = 545;
	Global_91229[68 /*34*/].f_17[6] = 546;
	Global_91229[69 /*34*/].f_16 = 14;
	Global_91229[69 /*34*/].f_17[0] = 547;
	Global_91229[69 /*34*/].f_17[1] = 548;
	Global_91229[69 /*34*/].f_17[2] = 549;
	Global_91229[69 /*34*/].f_17[3] = 550;
	Global_91229[69 /*34*/].f_17[4] = 551;
	Global_91229[69 /*34*/].f_17[5] = 552;
	Global_91229[69 /*34*/].f_17[6] = 553;
	Global_91229[69 /*34*/].f_17[7] = 554;
	Global_91229[69 /*34*/].f_17[8] = 555;
	Global_91229[69 /*34*/].f_17[9] = 556;
	Global_91229[69 /*34*/].f_17[10] = 557;
	Global_91229[69 /*34*/].f_17[11] = 558;
	Global_91229[69 /*34*/].f_17[12] = 559;
	Global_91229[69 /*34*/].f_17[13] = 560;
	Global_91229[70 /*34*/].f_16 = 15;
	Global_91229[70 /*34*/].f_17[0] = 561;
	Global_91229[70 /*34*/].f_17[1] = 562;
	Global_91229[70 /*34*/].f_17[2] = 563;
	Global_91229[70 /*34*/].f_17[3] = 564;
	Global_91229[70 /*34*/].f_17[4] = 565;
	Global_91229[70 /*34*/].f_17[5] = 566;
	Global_91229[70 /*34*/].f_17[6] = 567;
	Global_91229[70 /*34*/].f_17[7] = 568;
	Global_91229[70 /*34*/].f_17[8] = 569;
	Global_91229[70 /*34*/].f_17[9] = 570;
	Global_91229[70 /*34*/].f_17[10] = 571;
	Global_91229[70 /*34*/].f_17[11] = 572;
	Global_91229[70 /*34*/].f_17[12] = 573;
	Global_91229[70 /*34*/].f_17[13] = 574;
	Global_91229[70 /*34*/].f_17[14] = 575;
	Global_91229[71 /*34*/].f_16 = 11;
	Global_91229[71 /*34*/].f_17[0] = 576;
	Global_91229[71 /*34*/].f_17[1] = 577;
	Global_91229[71 /*34*/].f_17[2] = 578;
	Global_91229[71 /*34*/].f_17[3] = 579;
	Global_91229[71 /*34*/].f_17[4] = 580;
	Global_91229[71 /*34*/].f_17[5] = 581;
	Global_91229[71 /*34*/].f_17[6] = 582;
	Global_91229[71 /*34*/].f_17[7] = 583;
	Global_91229[71 /*34*/].f_17[8] = 584;
	Global_91229[71 /*34*/].f_17[9] = 585;
	Global_91229[71 /*34*/].f_17[10] = 586;
	Global_91229[72 /*34*/].f_16 = 8;
	Global_91229[72 /*34*/].f_17[0] = 587;
	Global_91229[72 /*34*/].f_17[1] = 588;
	Global_91229[72 /*34*/].f_17[2] = 589;
	Global_91229[72 /*34*/].f_17[3] = 590;
	Global_91229[72 /*34*/].f_17[4] = 591;
	Global_91229[72 /*34*/].f_17[5] = 592;
	Global_91229[72 /*34*/].f_17[6] = 593;
	Global_91229[72 /*34*/].f_17[7] = 594;
	Global_91229[73 /*34*/].f_16 = 10;
	Global_91229[73 /*34*/].f_17[0] = 595;
	Global_91229[73 /*34*/].f_17[1] = 596;
	Global_91229[73 /*34*/].f_17[2] = 597;
	Global_91229[73 /*34*/].f_17[3] = 598;
	Global_91229[73 /*34*/].f_17[4] = 599;
	Global_91229[73 /*34*/].f_17[5] = 600;
	Global_91229[73 /*34*/].f_17[6] = 601;
	Global_91229[73 /*34*/].f_17[7] = 602;
	Global_91229[73 /*34*/].f_17[8] = 603;
	Global_91229[73 /*34*/].f_17[9] = 604;
	Global_91229[74 /*34*/].f_16 = 16;
	Global_91229[74 /*34*/].f_17[0] = 605;
	Global_91229[74 /*34*/].f_17[1] = 606;
	Global_91229[74 /*34*/].f_17[2] = 607;
	Global_91229[74 /*34*/].f_17[3] = 608;
	Global_91229[74 /*34*/].f_17[4] = 609;
	Global_91229[74 /*34*/].f_17[5] = 610;
	Global_91229[74 /*34*/].f_17[6] = 611;
	Global_91229[74 /*34*/].f_17[7] = 612;
	Global_91229[74 /*34*/].f_17[8] = 613;
	Global_91229[74 /*34*/].f_17[9] = 614;
	Global_91229[74 /*34*/].f_17[10] = 615;
	Global_91229[74 /*34*/].f_17[11] = 616;
	Global_91229[74 /*34*/].f_17[12] = 617;
	Global_91229[74 /*34*/].f_17[13] = 618;
	Global_91229[74 /*34*/].f_17[14] = 619;
	Global_91229[74 /*34*/].f_17[15] = 620;
	Global_91229[75 /*34*/].f_16 = 16;
	Global_91229[75 /*34*/].f_17[0] = 621;
	Global_91229[75 /*34*/].f_17[1] = 622;
	Global_91229[75 /*34*/].f_17[2] = 623;
	Global_91229[75 /*34*/].f_17[3] = 624;
	Global_91229[75 /*34*/].f_17[4] = 625;
	Global_91229[75 /*34*/].f_17[5] = 626;
	Global_91229[75 /*34*/].f_17[6] = 627;
	Global_91229[75 /*34*/].f_17[7] = 628;
	Global_91229[75 /*34*/].f_17[8] = 629;
	Global_91229[75 /*34*/].f_17[9] = 630;
	Global_91229[75 /*34*/].f_17[10] = 631;
	Global_91229[75 /*34*/].f_17[11] = 632;
	Global_91229[75 /*34*/].f_17[12] = 633;
	Global_91229[75 /*34*/].f_17[13] = 634;
	Global_91229[75 /*34*/].f_17[14] = 635;
	Global_91229[75 /*34*/].f_17[15] = 636;
	Global_91229[76 /*34*/].f_16 = 12;
	Global_91229[76 /*34*/].f_17[0] = 637;
	Global_91229[76 /*34*/].f_17[1] = 638;
	Global_91229[76 /*34*/].f_17[2] = 639;
	Global_91229[76 /*34*/].f_17[3] = 640;
	Global_91229[76 /*34*/].f_17[4] = 641;
	Global_91229[76 /*34*/].f_17[5] = 642;
	Global_91229[76 /*34*/].f_17[6] = 643;
	Global_91229[76 /*34*/].f_17[7] = 644;
	Global_91229[76 /*34*/].f_17[8] = 645;
	Global_91229[76 /*34*/].f_17[9] = 646;
	Global_91229[76 /*34*/].f_17[10] = 647;
	Global_91229[76 /*34*/].f_17[11] = 648;
	Global_91229[77 /*34*/].f_16 = 0;
	Global_91229[78 /*34*/].f_16 = 4;
	Global_91229[78 /*34*/].f_17[0] = 649;
	Global_91229[78 /*34*/].f_17[1] = 650;
	Global_91229[78 /*34*/].f_17[2] = 651;
	Global_91229[78 /*34*/].f_17[3] = 652;
	Global_91229[79 /*34*/].f_16 = 7;
	Global_91229[79 /*34*/].f_17[0] = 653;
	Global_91229[79 /*34*/].f_17[1] = 654;
	Global_91229[79 /*34*/].f_17[2] = 655;
	Global_91229[79 /*34*/].f_17[3] = 656;
	Global_91229[79 /*34*/].f_17[4] = 657;
	Global_91229[79 /*34*/].f_17[5] = 658;
	Global_91229[79 /*34*/].f_17[6] = 659;
	Global_91229[84 /*34*/].f_16 = 14;
	Global_91229[84 /*34*/].f_17[0] = 660;
	Global_91229[84 /*34*/].f_17[1] = 661;
	Global_91229[84 /*34*/].f_17[2] = 662;
	Global_91229[84 /*34*/].f_17[3] = 663;
	Global_91229[84 /*34*/].f_17[4] = 664;
	Global_91229[84 /*34*/].f_17[5] = 665;
	Global_91229[84 /*34*/].f_17[6] = 666;
	Global_91229[84 /*34*/].f_17[7] = 667;
	Global_91229[84 /*34*/].f_17[8] = 668;
	Global_91229[84 /*34*/].f_17[9] = 669;
	Global_91229[84 /*34*/].f_17[10] = 670;
	Global_91229[84 /*34*/].f_17[11] = 671;
	Global_91229[84 /*34*/].f_17[12] = 672;
	Global_91229[84 /*34*/].f_17[13] = 673;
	Global_91229[85 /*34*/].f_16 = 15;
	Global_91229[85 /*34*/].f_17[0] = 674;
	Global_91229[85 /*34*/].f_17[1] = 675;
	Global_91229[85 /*34*/].f_17[2] = 676;
	Global_91229[85 /*34*/].f_17[3] = 677;
	Global_91229[85 /*34*/].f_17[4] = 678;
	Global_91229[85 /*34*/].f_17[5] = 679;
	Global_91229[85 /*34*/].f_17[6] = 680;
	Global_91229[85 /*34*/].f_17[7] = 681;
	Global_91229[85 /*34*/].f_17[8] = 682;
	Global_91229[85 /*34*/].f_17[9] = 683;
	Global_91229[85 /*34*/].f_17[10] = 684;
	Global_91229[85 /*34*/].f_17[11] = 685;
	Global_91229[85 /*34*/].f_17[12] = 686;
	Global_91229[85 /*34*/].f_17[13] = 687;
	Global_91229[85 /*34*/].f_17[14] = 688;
	Global_91229[86 /*34*/].f_16 = 7;
	Global_91229[86 /*34*/].f_17[0] = 689;
	Global_91229[86 /*34*/].f_17[1] = 690;
	Global_91229[86 /*34*/].f_17[2] = 691;
	Global_91229[86 /*34*/].f_17[3] = 692;
	Global_91229[86 /*34*/].f_17[4] = 693;
	Global_91229[86 /*34*/].f_17[5] = 694;
	Global_91229[86 /*34*/].f_17[6] = 695;
	Global_91229[87 /*34*/].f_16 = 6;
	Global_91229[87 /*34*/].f_17[0] = 696;
	Global_91229[87 /*34*/].f_17[1] = 697;
	Global_91229[87 /*34*/].f_17[2] = 698;
	Global_91229[87 /*34*/].f_17[3] = 699;
	Global_91229[87 /*34*/].f_17[4] = 700;
	Global_91229[87 /*34*/].f_17[5] = 701;
	Global_91229[88 /*34*/].f_16 = 7;
	Global_91229[88 /*34*/].f_17[0] = 702;
	Global_91229[88 /*34*/].f_17[1] = 703;
	Global_91229[88 /*34*/].f_17[2] = 704;
	Global_91229[88 /*34*/].f_17[3] = 705;
	Global_91229[88 /*34*/].f_17[4] = 706;
	Global_91229[88 /*34*/].f_17[5] = 707;
	Global_91229[88 /*34*/].f_17[6] = 708;
	Global_91229[91 /*34*/].f_16 = 9;
	Global_91229[91 /*34*/].f_17[0] = 709;
	Global_91229[91 /*34*/].f_17[1] = 710;
	Global_91229[91 /*34*/].f_17[2] = 711;
	Global_91229[91 /*34*/].f_17[3] = 712;
	Global_91229[91 /*34*/].f_17[4] = 713;
	Global_91229[91 /*34*/].f_17[5] = 714;
	Global_91229[91 /*34*/].f_17[6] = 715;
	Global_91229[91 /*34*/].f_17[7] = 716;
	Global_91229[91 /*34*/].f_17[8] = 717;
	Global_91229[92 /*34*/].f_16 = 11;
	Global_91229[92 /*34*/].f_17[0] = 718;
	Global_91229[92 /*34*/].f_17[1] = 719;
	Global_91229[92 /*34*/].f_17[2] = 720;
	Global_91229[92 /*34*/].f_17[3] = 721;
	Global_91229[92 /*34*/].f_17[4] = 722;
	Global_91229[92 /*34*/].f_17[5] = 723;
	Global_91229[92 /*34*/].f_17[6] = 724;
	Global_91229[92 /*34*/].f_17[7] = 725;
	Global_91229[92 /*34*/].f_17[8] = 726;
	Global_91229[92 /*34*/].f_17[9] = 727;
	Global_91229[92 /*34*/].f_17[10] = 728;
	Global_91229[93 /*34*/].f_16 = 12;
	Global_91229[93 /*34*/].f_17[0] = 729;
	Global_91229[93 /*34*/].f_17[1] = 730;
	Global_91229[93 /*34*/].f_17[2] = 731;
	Global_91229[93 /*34*/].f_17[3] = 732;
	Global_91229[93 /*34*/].f_17[4] = 733;
	Global_91229[93 /*34*/].f_17[5] = 734;
	Global_91229[93 /*34*/].f_17[6] = 735;
	Global_91229[93 /*34*/].f_17[7] = 736;
	Global_91229[93 /*34*/].f_17[8] = 737;
	Global_91229[93 /*34*/].f_17[9] = 738;
	Global_91229[93 /*34*/].f_17[10] = 739;
	Global_91229[93 /*34*/].f_17[11] = 740;
	Global_91229[90 /*34*/].f_16 = 10;
	Global_91229[90 /*34*/].f_17[0] = 810;
	Global_91229[90 /*34*/].f_17[1] = 811;
	Global_91229[90 /*34*/].f_17[2] = 812;
	Global_91229[90 /*34*/].f_17[3] = 813;
	Global_91229[90 /*34*/].f_17[4] = 814;
	Global_91229[90 /*34*/].f_17[5] = 815;
	Global_91229[90 /*34*/].f_17[6] = 816;
	Global_91229[90 /*34*/].f_17[7] = 817;
	Global_91229[90 /*34*/].f_17[8] = 818;
	Global_91229[90 /*34*/].f_17[9] = 819;
	Global_91229[36 /*34*/].f_16 = 4;
	Global_91229[36 /*34*/].f_17[0] = 820;
	Global_91229[36 /*34*/].f_17[1] = 821;
	Global_91229[36 /*34*/].f_17[2] = 822;
	Global_91229[36 /*34*/].f_17[3] = 823;
	Global_91229[37 /*34*/].f_16 = 4;
	Global_91229[37 /*34*/].f_17[0] = 824;
	Global_91229[37 /*34*/].f_17[1] = 825;
	Global_91229[37 /*34*/].f_17[2] = 826;
	Global_91229[37 /*34*/].f_17[3] = 827;
	Global_91229[24 /*34*/].f_16 = 6;
	Global_91229[24 /*34*/].f_17[0] = 846;
	Global_91229[24 /*34*/].f_17[1] = 847;
	Global_91229[24 /*34*/].f_17[2] = 848;
	Global_91229[24 /*34*/].f_17[3] = 849;
	Global_91229[24 /*34*/].f_17[4] = 850;
	Global_91229[24 /*34*/].f_17[5] = 851;
	Global_91229[25 /*34*/].f_16 = 9;
	Global_91229[25 /*34*/].f_17[0] = 852;
	Global_91229[25 /*34*/].f_17[1] = 853;
	Global_91229[25 /*34*/].f_17[2] = 854;
	Global_91229[25 /*34*/].f_17[3] = 855;
	Global_91229[25 /*34*/].f_17[4] = 856;
	Global_91229[25 /*34*/].f_17[5] = 857;
	Global_91229[25 /*34*/].f_17[6] = 858;
	Global_91229[25 /*34*/].f_17[7] = 859;
	Global_91229[25 /*34*/].f_17[8] = 860;
	Global_91229[59 /*34*/].f_16 = 9;
	Global_91229[59 /*34*/].f_17[0] = 861;
	Global_91229[59 /*34*/].f_17[1] = 862;
	Global_91229[59 /*34*/].f_17[2] = 863;
	Global_91229[59 /*34*/].f_17[3] = 864;
	Global_91229[59 /*34*/].f_17[4] = 865;
	Global_91229[59 /*34*/].f_17[5] = 866;
	Global_91229[59 /*34*/].f_17[6] = 867;
	Global_91229[59 /*34*/].f_17[7] = 868;
	Global_91229[59 /*34*/].f_17[8] = 869;
	Global_91229[65 /*34*/].f_16 = 5;
	Global_91229[65 /*34*/].f_17[0] = 870;
	Global_91229[65 /*34*/].f_17[1] = 871;
	Global_91229[65 /*34*/].f_17[2] = 872;
	Global_91229[65 /*34*/].f_17[3] = 873;
	Global_91229[65 /*34*/].f_17[4] = 874;
	Global_91229[80 /*34*/].f_16 = 8;
	Global_91229[80 /*34*/].f_17[0] = 875;
	Global_91229[80 /*34*/].f_17[1] = 876;
	Global_91229[80 /*34*/].f_17[2] = 877;
	Global_91229[80 /*34*/].f_17[3] = 878;
	Global_91229[80 /*34*/].f_17[4] = 879;
	Global_91229[80 /*34*/].f_17[5] = 880;
	Global_91229[80 /*34*/].f_17[6] = 881;
	Global_91229[80 /*34*/].f_17[7] = 882;
	Global_91229[81 /*34*/].f_16 = 8;
	Global_91229[81 /*34*/].f_17[0] = 883;
	Global_91229[81 /*34*/].f_17[1] = 884;
	Global_91229[81 /*34*/].f_17[2] = 885;
	Global_91229[81 /*34*/].f_17[3] = 886;
	Global_91229[81 /*34*/].f_17[4] = 887;
	Global_91229[81 /*34*/].f_17[5] = 888;
	Global_91229[81 /*34*/].f_17[6] = 889;
	Global_91229[81 /*34*/].f_17[7] = 890;
	Global_91229[82 /*34*/].f_16 = 8;
	Global_91229[82 /*34*/].f_17[0] = 891;
	Global_91229[82 /*34*/].f_17[1] = 892;
	Global_91229[82 /*34*/].f_17[2] = 893;
	Global_91229[82 /*34*/].f_17[3] = 894;
	Global_91229[82 /*34*/].f_17[4] = 895;
	Global_91229[82 /*34*/].f_17[5] = 896;
	Global_91229[82 /*34*/].f_17[6] = 897;
	Global_91229[82 /*34*/].f_17[7] = 898;
	Global_91229[83 /*34*/].f_16 = 7;
	Global_91229[83 /*34*/].f_17[0] = 899;
	Global_91229[83 /*34*/].f_17[1] = 900;
	Global_91229[83 /*34*/].f_17[2] = 901;
	Global_91229[83 /*34*/].f_17[3] = 902;
	Global_91229[83 /*34*/].f_17[4] = 903;
	Global_91229[83 /*34*/].f_17[5] = 904;
	Global_91229[83 /*34*/].f_17[6] = 905;
	Global_91229[89 /*34*/].f_16 = 7;
	Global_91229[89 /*34*/].f_17[0] = 906;
	Global_91229[89 /*34*/].f_17[1] = 907;
	Global_91229[89 /*34*/].f_17[2] = 908;
	Global_91229[89 /*34*/].f_17[3] = 909;
	Global_91229[89 /*34*/].f_17[4] = 910;
	Global_91229[89 /*34*/].f_17[5] = 911;
	Global_91229[89 /*34*/].f_17[6] = 912;
}

void func_1927(int iParam0, var uParam1)//Position - 0xC1A61
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 100;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_ARM1_NOSCRATCH");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 9:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 390000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_ARM2_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 10:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ARM2_PETROL_FIRE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 2;
			return;
		case 21:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_ARM3_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 22:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_ARM3_DAMAGE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 338:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 100;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FRA0_NOSCRATCH");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 339:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FRA0_DOGCAM");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 196:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FAM1_QUICK_CATCH");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 197:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FAM1_NOSCRATCH");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 205:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 27;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FAM2_FASTEST_SPEED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 206:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FAM2_FELL_OFF_BIKE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 207:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 60000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FAM2_FAST_SWIM");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 218:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 330000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FAM3_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 217:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 100;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FAM3_NOSCRATCH");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 384:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 510000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_LES1A_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 385:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 32000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_LES1A_CLEAR_POPUPS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 372:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 60;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_LAM1_ACCURACY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 373:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 10;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_LAM1_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 375:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 630000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_LAM1_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 374:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 60;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_LAM1_UNMARKED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 486:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_TRV1_NO_SURVIVORS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 487:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 12;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_TRV1_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 488:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 720000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_TRV1_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 489:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_TRV1_TRAILER_DAMAGE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 490:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_TRV1_BIKERS_KILLED_BEFORE_LO");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 499:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_TRV2_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 500:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 750000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_TRV2_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 501:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_TRV2_RACEBACK_WON");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 502:
			*uParam1 = 8;
			uParam1->f_1 = 0;
			uParam1->f_2 = 6;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_TRV2_UNDERBRIDGES");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 515:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_TRV3_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 516:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_TRV3_NOT_DETECTED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 517:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 60;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_TRV3_UNMARKED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 518:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_TRV3_ALL_TRAILERS_AT_ONCE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 137:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 60;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_CHI1_UNMARKED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 136:
			*uParam1 = 8;
			uParam1->f_1 = 0;
			uParam1->f_2 = 32;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_CHI1_BODY_COUNT");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 148:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 10;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_CHI2_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 149:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 60;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_CHI2_UNMARKED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 150:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_CHI2_ONE_SHOT_TWO_KILLS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 229:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 34;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FAM4_LORRY_SPEED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 230:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FAM4_GOT_TOO_FAR_FROM_LAZ");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 273:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 70;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FBI1_ACCURACY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 274:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 14;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FBI1_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 275:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 570000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FBI1_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 276:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 4;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FBI1_SPECKILLS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 277:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 60;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FBI1_UNMARKED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 283:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 450000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FBI2_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 284:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 60;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FBI2_ACCURACY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 285:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 10;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FBI2_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 346:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 420000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FRA1_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 239:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 900000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FAM5_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 240:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FAM5_WARRIOR_POSE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 241:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FAM5_TRIANGLE_POSE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 242:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FAM5_SUN_SALUTATION_POSE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 294:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FBI3_HEART_STOPPED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 295:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FBI3_ELECTROCUTION");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 296:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FBI3_TOOTH");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 297:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FBI3_WRENCH");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 298:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FBI3_WATERBOARD");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 306:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 307:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 660000;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 308:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FBI4_HELISHOT");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 102:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_CS2_NO_SCRATCH");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 115:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_CS1_SPECIAL_USED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 114:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 720000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_CS1_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 111:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_CS1_DROVE_BETWEEN_TRUCKS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 112:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_CS1_DROVE_BETWEEN_BUSES");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 113:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_CS1_DROVE_THROUGH_TUNNEL");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 396:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 585000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_MAR1_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 393:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 42;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_MAR1_FASTEST_SPEED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 394:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_MAR1_FELL_OFF_THE_BIKE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 395:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 4;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_MAR1_ONE_SHOT");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 120:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 200;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_CS3_NO_SCRATCH");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 121:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 52;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_CS3_FASTEST_SPEED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 122:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_CS3_ACTOR_KNOCKOUT");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 123:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_CS3_EJECTOR_SEAT_USED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 124:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_CS3_RAN_OVER_ACTOR_AGAIN");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 161:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 80;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_EXL1_ACCURACY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 172:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 70;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_EXL2_ACCURACY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 173:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 540000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_EXL2_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 174:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 3;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_EXL2_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 175:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_EXL2_ANIMAL_KILLED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 185:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 690000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_EXL3_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 186:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_EXL3_FASTEST_SPEED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 187:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_EXL3_JUMPED_AT_FIRST_OPPERTU");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 326:
			*uParam1 = 8;
			uParam1->f_1 = 0;
			uParam1->f_2 = 8;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FBI5_STUNS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 129:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 720000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_CS4_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 130:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 100;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_CS4_NO_SCRATCH");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 466:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 180000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_SOL2_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 400:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 660000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_MIC1_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 401:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 20;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_MIC1_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 413:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 4;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_MIC2_TIMES_SWITCHED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 414:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 70;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_MIC2_ACCURACY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 415:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 10;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_MIC2_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 416:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 210000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_MIC2_MIKE_RESCUE_TIMER");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 417:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_MIC2_WAYPOINT_USED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 249:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 630000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FAM6_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 474:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 330000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_SOL3_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 360:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 257:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1290000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FIN_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 527:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_AH1_EAGLE_EYE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 528:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_AH1_MISSED_A_SPOT");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 529:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 540000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_AH1_CLEANED_OUT");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 534:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 45000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_AH2_QUICK_GETAWAY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 709:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 210000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_RH1_LEISURELY_DRIVE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 576:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1200000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_DH1_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 577:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_DH1_EMPLOYEE_OF_THE_MONTH");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 578:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_DH1_PERFECT_SURVEILLANCE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 579:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_DH1_HONEST_DAYS_WORK");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 742:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_BA1_KILLCHAIN");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 741:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 60;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_BA1_DAMAGE_TAKEN");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 743:
			*uParam1 = 8;
			uParam1->f_1 = 0;
			uParam1->f_2 = 4;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_BA2_VANS_DESTROYED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 745:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 165000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_BA3A_DELIVERY_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 748:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 90000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_BA3C_DELIVERY_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 747:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_BA3C_STASH_UNHOOKED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 749:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_DR1_DREYFUSS_KILLED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 750:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_EP4_ARTIFACT_DETECTOR_USED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 751:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_EP6_PERFECT_LANDING");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 754:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_EP8_MONEY_STOLEN");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 753:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_EP8_SECURITY_WIPED_OUT");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 757:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_EXT1_RACE_WON");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 756:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_EXT1_BIG_AIR");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 755:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_EXT1_FALL_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 759:
			*uParam1 = 8;
			uParam1->f_1 = 0;
			uParam1->f_2 = 8;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_EXT2_NUMBER_OF_SPINS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 758:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_EXT2_LEAP_FROM_ATV_TO_WATER");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 761:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_EXT3_PERFECT_LANDING");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 760:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 8000;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_EXT3_DARE_DEVIL");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 762:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_EXT4_FALL_SURVIVED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 763:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FA1_SHORTCUT_USED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 766:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FA3_SHORTCUT_USED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 769:
			*uParam1 = 8;
			uParam1->f_1 = 0;
			uParam1->f_2 = 3;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_HU1_HIT_EACH_SATELLITE_FIRST");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 768:
			*uParam1 = 11;
			uParam1->f_1 = 0;
			uParam1->f_2 = 75;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_HU1_TYRE_SHOOTING_ACCURACY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 767:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_HU1_TWO_COYOTES_KILLED_IN_ON");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 771:
			*uParam1 = 8;
			uParam1->f_1 = 0;
			uParam1->f_2 = 3;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_HU2_ELK_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 770:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_HU2_DETECTED_BY_ELK");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 773:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 40000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_JO2_STOPPED_IN_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 772:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_JO2_JOSH_MELEED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 775:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_JO3_POUR_FUEL_IN_ONE_GO");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 774:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_JO3_ESCAPE_WITHOUT_ALERTING_");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 777:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_JO4_ESCAPE_IN_PARKED_COP_CAR");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 776:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_JO4_JOSH_KILLED_BEFORE_ESCAP");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 779:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 40000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_MIN1_FAST_STOP");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 778:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_MIN1_VEHICLE_TAKEN_AFTER_STU");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 782:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_MIN2_STUNNED_ALL");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 780:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 30000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_MIN2_FIRST_CAPTURE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 781:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 55000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_MIN2_SECOND_CAPTURE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 784:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_MIN3_KILL_BEFORE_ESCAPE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 783:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_MIN3_STUNNED_AND_KILLED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 786:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_NI1A_ENTOURAGE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 785:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_NI1A_PLAYER_DAMAGE_DURING_BR");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 788:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_NI1B_CLOTHES_TAKEN_NO_ALERTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 787:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_NI1B_GARDENER_TAKEN_OUT");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 789:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_NI1C_PLAYER_GOT_TOO_FAR_FROM");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 792:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_NI1D_KILLED_STANKY_AND_GUARD");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 791:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_NI1D_HEADSHOTTED_STANKY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 790:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 30000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_NI1D_GOLF_CLUB_STOLEN_IN_TIM");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 793:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_NI2_GOT_TOO_FAR_AWAY_FROM_NA");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 794:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_NI2_HARM_IN_HOSPITAL_DRIVE_T");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 795:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 40;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_NI2_VEHICLE_DAMAGE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 796:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_NI3_BAILED_AT_LAST_MOMENT");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 797:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_NI3_REVERSED_TO_KILL");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 798:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_PAP1_TAKEN_OUT_IN_ONE_SWING");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 799:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 3;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_PAP1_PICTURES_SNAPPED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 3;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 800:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_PAP2_POOL_JUMP");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 801:
			*uParam1 = 11;
			uParam1->f_1 = 0;
			uParam1->f_2 = 90;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_PAP2_FACE_RECOG_PERCENT");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 802:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_PAP3A_FAR_FROM_POPPY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 803:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_PAP3A_PHOTO_IN_CUFFS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 804:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_PAP3B_PHOTO_SPOTTED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 805:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_PAP3B_PHOTO_OF_USE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 806:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_PAP4_ENTIRE_CREW_KILLED_IN_O");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 807:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 3;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_TLO_WOUNDS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 808:
			*uParam1 = 8;
			uParam1->f_1 = 0;
			uParam1->f_2 = 4;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_TLO_AMBIENT_ANIMAL_KILLS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 809:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_TLO_TO_SITE_ON_FOOT");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 429:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 420000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_MIC3_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 441:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 390000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_MIC4_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 1:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 0f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 0;
			return;
		case 2:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 3600000;
			uParam1->f_12 = 0;
			return;
		case 3:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 0;
			return;
		case 4:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ARM1_SPECIAL_ABILITY_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 0;
			return;
		case 12:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 17:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 14:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 18:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 16:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 15:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 13:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 6;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ARM2_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 11:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 23:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 24:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 25:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 26:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 198:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 199:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 200:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 201:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 340:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 341:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FRA0_SPECIAL_ABILITY_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 30000;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 3600000;
			uParam1->f_12 = 0;
			return;
		case 342:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 3600000;
			uParam1->f_12 = 0;
			return;
		case 343:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 344:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 208:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 209:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 210:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 5;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 999;
			uParam1->f_12 = 0;
			return;
		case 211:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 3600000;
			uParam1->f_12 = 0;
			return;
		case 212:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 0;
			return;
		case 5:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ARM1_WINNER");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 0f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 0;
			return;
		case 6:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_ARM1_HIT_ALIENS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 0f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 0;
			return;
		case 19:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 2;
			return;
		case 20:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 70;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ARM2_ACCURACY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 2;
			return;
		case 27:
			*uParam1 = 2;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 28:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 213:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 40000;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 214:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 219:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 220:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 221:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 222:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 223:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 224:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 225:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 162:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 163:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 164:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 165:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 166:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 167:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 168:
			*uParam1 = 2;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 169:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_EXL1_BAIL_IN_CAR");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 176:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 177:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 178:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 179:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 180:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 181:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 710:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 711:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 712:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 713:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 714:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 729:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 730:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 731:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 4000;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_RH2_BULLETS_FIRED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 732:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 733:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 734:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 735:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 736:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 737:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 50;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_RH2_ACCURACY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 188:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 189:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 190:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 191:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 192:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 193:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 194:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 454:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 455:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 456:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 457:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 458:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 459:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 460:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 461:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 462:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 463:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 226:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 182:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 183:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 386:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 387:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 388:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 389:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 390:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 391:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 376:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 377:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 378:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 379:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 380:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 381:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 382:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 689:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 690:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 691:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 692:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 812:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 810:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 811:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 491:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 492:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 493:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 494:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 495:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 496:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 497:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 498:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 503:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 504:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 505:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 506:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 507:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 508:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 509:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 510:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 511:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 512:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 513:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 519:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 520:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 521:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 522:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 523:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 524:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 525:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 138:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 139:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 140:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 34;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 141:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 142:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 143:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 144:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 145:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 6;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_CHI1_VEHICLES_DESTROYED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 6;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 146:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 151:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 152:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 153:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 154:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 155:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 156:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 157:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 158:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 159:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 80;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_CHI2_ACCURACY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 231:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 232:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 233:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 234:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 278:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 279:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 280:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 281:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 286:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 287:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 288:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 289:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 290:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 291:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 292:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 580:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 581:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 582:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 583:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 584:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 585:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 347:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 349:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 348:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 350:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 351:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 352:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 353:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 70;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FRA1_ACCURACY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 354:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 355:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 356:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 357:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 12;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FRA1_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 358:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 243:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 244:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 245:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 246:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 247:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 299:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 300:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 301:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 302:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 303:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 131:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 132:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 418:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 419:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 420:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 421:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 422:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 423:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 424:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 425:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 426:
			*uParam1 = 8;
			uParam1->f_1 = 0;
			uParam1->f_2 = 4;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 250:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 251:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 252:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 253:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 254:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 255:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 605:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 12;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_DH2A_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 606:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 80;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_DH2A_ACCURACY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 607:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 608:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 609:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 610:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 611:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 612:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 613:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 12;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_DH2A_STEALTH_KILLS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 614:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 615:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 616:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 60000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_DH2A_TIME_TO_FIND_CONTAINER");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 621:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 622:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 623:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 624:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 625:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 626:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 627:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 628:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 120000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_DH2B_TIME_TO_FIND_CONTAINER");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 309:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 12;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FBI4_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 310:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 60;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FBI4_ACCURACY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 311:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 312:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 313:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 10;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FBI4_SWITCHES");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 314:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 315:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 397:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 398:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 399:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 475:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 476:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 477:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 52;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_SOL3_MAX_SPEED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 478:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 479:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 480:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 481:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 482:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 120000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_SOL3_COP_LOSS_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 483:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 484:
			*uParam1 = 2;
			uParam1->f_1 = 0;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_SOL3_NEWS_HELI_CAM_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 103:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 104:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 105:
			*uParam1 = 8;
			uParam1->f_1 = 0;
			uParam1->f_2 = 4;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 106:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 715:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_RH1_WINNER");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 116:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 117:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 118:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 125:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 126:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 127:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 530:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 531:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 532:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 535:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 536:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 537:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 547:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 548:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 549:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 550:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 551:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 552:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 553:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 554:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 555:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 556:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 564:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 570:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 70;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_AH3B_ACCURACY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 569:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 568:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 567:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 566:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 20;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_AH3B_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 565:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_AH3B_INNOCENTS_KILLED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 563:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 562:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 561:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 571:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 572:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_AH3B_LANDING_ACCURACY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 573:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 574:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 45000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_AH3B_HACKING_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 430:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 431:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 18;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_MIC3_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 432:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 433:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 434:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 435:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 436:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 437:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 438:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 439:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 442:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 443:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 48;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_MIC4_MAX_SPEED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 444:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 445:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 446:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 12;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_MIC4_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 12;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 447:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 448:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 449:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 450:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 451:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 452:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_MIC4_HEADSHOT_RESCUE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 453:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 361:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 362:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 363:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 364:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 18;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FRA2_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 365:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 70;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FRA2_ACCURACY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 366:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 367:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 368:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 369:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 3;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FRA2_SWITCHES");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 370:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 660:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 661:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 662:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 663:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 664:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 665:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 666:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 667:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 668:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 20;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FH2A_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 669:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 670:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 10;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FH2A_TRAFFIC_LIGHT_CHANGES");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 671:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 674:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 675:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 676:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 677:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 678:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 20;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FH2B_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 679:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 680:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 681:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 65;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 682:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 683:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 684:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 258:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 259:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 260:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 261:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 262:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 263:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 264:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 265:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 20;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FIN_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 266:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 70;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FIN_ACCURACY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 267:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 268:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 269:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 270:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FIN_CHENG_BOMBER");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 271:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FIN_HAINES_HEADSHOT");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 272:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FIN_STRETCH_STRONGARM");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 765:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FA2_QUICK_WIN");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 764:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FA2_BUMPED_INTO_MARY_ANN");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 327:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 328:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 329:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 330:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 15;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FBI5_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 331:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 70;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FBI5_ACCURACY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 332:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 333:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 334:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 335:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 133:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 427:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 4;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 617:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 316:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 637:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 638:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 639:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 640:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 641:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 642:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 643:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FH1_PERFECT_DISTANCE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 644:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 20000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FH1_FIND_HOLE_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 645:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FH1_UNDER_BRIDGE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 646:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FH1_THROUGH_TUNNEL");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 402:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 403:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 404:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 80;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_MIC1_ACCURACY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 405:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 406:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 407:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 408:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 409:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 410:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 411:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 412:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 697:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 698:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 696:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 540:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 541:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 542:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 587:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 588:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 589:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 590:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 591:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 595:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 596:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 597:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 598:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 599:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 600:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 601:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 602:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 702:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 703:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 704:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 705:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 718:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 719:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 720:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 721:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_RH1P_HEADSHOTS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 722:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 723:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 724:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 725:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 653:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 654:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 655:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 656:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 752:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_EP6_UNDER_BRIDGE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 464:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 7:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 0;
			return;
		case 107:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 128:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 240000;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 147:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 270000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_CHI1_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 160:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 170:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 900000;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 202:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 215:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 235:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 304:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 336:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 810000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FBI5_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 345:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 371:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 810000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FRA2_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 428:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 526:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 538:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 557:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1080000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_AH3A_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 575:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1140000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_AH3B_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 618:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 629:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 870000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_DH2B_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 647:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 660000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FH1_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 672:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 600000;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 685:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 960000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FH2B_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 693:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 480000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_JH1_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 716:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 660000;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 738:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 960000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_RH2_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 813:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 960000;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 650:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FHPA_DAMAGE_TO_WAGON");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 649:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 120000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FHPA_ESCAPE_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 825:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FBI4P5_UNITED_COLOURS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 824:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 30000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FBI4P5_QUICK_SHOPPER");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 821:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FBI4P4_CLICHE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 820:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 20000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FBI4P4_FACE_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 320:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 319:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 33;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FBI4P1_MAX_SPEED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 318:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FBI4P1_VEHICLE_DAMAGE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 317:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FBI4P1_TIME_TAKEN");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 322:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 180000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FBI4P2_TIME_TAKEN");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 323:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FBI4P2_VEHICLE_DAMAGE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 324:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 33;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FBI4P2_MAX_SPEED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 203:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 465:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 134:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 3600000;
			uParam1->f_12 = 0;
			return;
		case 816:
			*uParam1 = 8;
			uParam1->f_1 = 0;
			uParam1->f_2 = 20;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_JH2A_CASES_SMASHED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 815:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 500;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_JH2A_FRANKLIN_BIKE_DAMAGE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 814:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_JH2A_CASE_GRAB_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 746:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_BA3A_AVOID_STAKEOUT");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 514:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_TRV2_ALL_BIKERS_KILLED_ON_WI");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 744:
			*uParam1 = 8;
			uParam1->f_1 = 0;
			uParam1->f_2 = 6;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_BA2_DANCING_CLOWNS_KILLED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 842:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 841:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_TON5_UNHOOK");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 839:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 840:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_TON5_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 838:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_TON4_UNHOOK");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 828:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_TON1_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 829:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_TON1_UNHOOK");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 830:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 831:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 330000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_TON2_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 832:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_TON2_UNHOOK");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 833:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 834:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 420000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_TON3_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 835:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_TON3_UNHOOK");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 836:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 837:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 360000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_TON4_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 739:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1000000;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_RH2_COLLATERAL_DAMAGE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 619:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_DH2A_NO_ALARMS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 620:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 560:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 30000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_AH3A_ABSEIL_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 559:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 180000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_AH3A_FLOOR_MOP_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 558:
			*uParam1 = 11;
			uParam1->f_1 = 0;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_AH3A_OXYGEN_REMAINING");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 673:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 60;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FH2A_ACCURACY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 688:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 60;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FH2B_ACCURACY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 686:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 70000;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 687:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 30000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FH2B_GOLD_DROP_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 844:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 170000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_HAO1_RACE_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 845:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 5;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_HAO1_COLLISIONS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 843:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 80000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_HAO1_FASTEST_LAP");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 236:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FAM4_COORD_KO");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 29:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ARM3_GARDEN_KO");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 109:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_CS2_SCANMAN");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 108:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 3;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_CS2_EAVESDROPPER");
			uParam1->f_5 = 0;
			uParam1->f_6 = 3;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 135:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 3;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_CS4_SHREDS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 3;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 227:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 3;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FAM3_VEHICLE_KILLS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 3;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 852:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FINB_KILLMIC");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 846:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FINA_KILLTREV");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 440:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_MIC3_HELIKILL");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 864:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_SOL1_PERFECT_LANDING");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 863:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_SOL1_BRAWL_DAMAGE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 861:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 600000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_SOL1_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 862:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 3;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_SOL1_SILENT_TAKEDOWNS");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 870:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 240000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_TRV4_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 544:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_AHP1_NOSCRATCH");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 543:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_AHP1_TRUCKCALLED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 593:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_DHP1_NO_BOARDING");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 592:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 510000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_DHP1_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 603:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 330000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_DHP2_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 899:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 270000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FINPD_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 900:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FINPD_UNDETECTED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 883:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FINPC2_MAPPED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 891:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FINPC3_MAPPED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 657:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FHPB_SNEAK_THIEF");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 875:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FINPC1_MAPPED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 906:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 120000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_JHP1B_SWIFT_GETAWAY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 706:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_JHP2A_LOOSE_CARGO");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 699:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_JHP1A_SNEAKY_PEST");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 726:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_RH1P_CONVOY_STOPPED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 237:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FAM4_TRUCK_UNHOOKED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 658:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FHPB_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 8:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 0;
			return;
		case 907:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 908:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 909:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 910:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 911:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 853:
			*uParam1 = 1;
			uParam1->f_1 = 1;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 854:
			*uParam1 = 5;
			uParam1->f_1 = 1;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 855:
			*uParam1 = 15;
			uParam1->f_1 = 1;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 856:
			*uParam1 = 6;
			uParam1->f_1 = 1;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 847:
			*uParam1 = 1;
			uParam1->f_1 = 1;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 848:
			*uParam1 = 5;
			uParam1->f_1 = 1;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 849:
			*uParam1 = 6;
			uParam1->f_1 = 1;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 859:
			*uParam1 = 6;
			uParam1->f_1 = 1;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 850:
			*uParam1 = 15;
			uParam1->f_1 = 1;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 858:
			*uParam1 = 4;
			uParam1->f_1 = 1;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 857:
			*uParam1 = 3;
			uParam1->f_1 = 1;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 871:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 872:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 873:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 876:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 877:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FINPC1_CAR_DAMAGE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 878:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 879:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 880:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 884:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 885:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FINPC2_CAR_DAMAGE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 886:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 887:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 888:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 892:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 893:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_FINPC3_CAR_DAMAGE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 894:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 895:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 896:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 30:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 31:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 32:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 33:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 34:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 35:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 43:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 44:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 45:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 49:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 46:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 48:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 47:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 36:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 50:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 57:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 58:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 59:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 60:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 61:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 62:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 63:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 64:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 71:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 72:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 73:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 74:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 75:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 76:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 77:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 78:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 79:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 86:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 87:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 88:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 89:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 90:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 91:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 92:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 93:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 94:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 95:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 694:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_JH1_PERFECT_PIC");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 901:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 902:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 903:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 904:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 817:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 818:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 819:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 700:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 707:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 727:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 660000;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 881:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 17000;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FINPC1_MOD_GAUNTLET");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 0f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 889:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 17000;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FINPC2_MOD_GAUNTLET");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 0f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 897:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 17000;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_FINPC3_MOD_GAUNTLET");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 0f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 651:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 826:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 822:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 545:
			*uParam1 = 1;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 37:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 51:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 65:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 80:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 96:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 110:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 119:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 171:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 184:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 195:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 204:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 216:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 228:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 238:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 248:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 256:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 0;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 282:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 293:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 305:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 321:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 325:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 337:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 359:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 3600000;
			uParam1->f_12 = 0;
			return;
		case 383:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 392:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 467:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 4;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 485:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 4;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 533:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 539:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 546:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 586:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 594:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 604:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 630:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 648:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 652:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 659:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 695:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 701:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 708:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 717:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 728:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 740:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 823:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 827:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 851:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 860:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 865:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 874:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 882:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 890:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 898:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 905:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 912:
			*uParam1 = 17;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -3f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 631:
			*uParam1 = 9;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 250f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 633:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 240000;
			uParam1->f_3 = 1;
			uParam1->f_4 = joaat("MS_DH2B_ESCAPE_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 632:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_DH2B_KILLED_ALL_MERRYWEATHER");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 634:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 2500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 635:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 636:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 1;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 38:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS1_MIRROR_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 41:
			*uParam1 = 11;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS1_MIRROR_PERCENT");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 39:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS1_MIRROR_SNIPER_USED");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 40:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS1_MIRROR_CASH");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 42:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS1_MIRROR_MEDAL");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 56:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS2_MIRROR_CASH");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 52:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS2_MIRROR_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 53:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS2_MIRROR_QUICKBOOL");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 54:
			*uParam1 = 11;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS2_MIRROR_PERCENT");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 55:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS2_MIRROR_MEDAL");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 70:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS3_MIRROR_MEDAL");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 69:
			*uParam1 = 11;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS3_MIRROR_PERCENTAGE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 67:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS3_MIRROR_CLEAN_ESCAPE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 68:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS3_MIRROR_CASH");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 66:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS3_MIRROR_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 81:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS4_MIRROR_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 82:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS4_MIRROR_HIT_AND_RUN");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 84:
			*uParam1 = 11;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS4_MIRROR_PERCENTAGE");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 83:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS4_MIRROR_CASH");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 85:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS4_MIRROR_MEDAL");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
	switch (iParam0)
	{
		case 97:
			*uParam1 = 4;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS5_MIRROR_TIME");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 98:
			*uParam1 = 3;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS5_MIRROR_NO_FLY");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 100:
			*uParam1 = 11;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS5_MIRROR_PERCENT");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 99:
			*uParam1 = 12;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS5_MIRROR_CASH");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 101:
			*uParam1 = 10;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_4 = joaat("MS_ASS5_MIRROR_MEDAL");
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_9 = 1f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 866:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 867:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 868:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 869:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 468:
			*uParam1 = 5;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 500f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 469:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 470:
			*uParam1 = 6;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -1000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 471:
			*uParam1 = 15;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -100f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 472:
			*uParam1 = 16;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = -10000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		case 473:
			*uParam1 = 7;
			uParam1->f_1 = 0;
			uParam1->f_2 = 1;
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			uParam1->f_6 = 1;
			uParam1->f_7 = 1;
			uParam1->f_8 = 1;
			uParam1->f_9 = 5000f;
			uParam1->f_10 = 0;
			uParam1->f_11 = 1;
			uParam1->f_12 = 1;
			return;
		default:
	}
}

void func_1928()//Position - 0xD2586
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bVar0 = false;
	while (bVar0 < 94)
	{
		iVar1 = bVar0;
		if (__LIB_0__::func_176(iVar1))
		{
			switch (iVar1)
			{
				case 54:
				case 55:
				case 56:
				case 57:
				case 58:
					if (BitTest(Global_113386.f_10016.f_25, 6) || __LIB_0__::func_176(58))
					{
						__LIB_37__::func_361(iVar1, 1);
					}
					break;
				case 28:
					if (__LIB_0__::func_368(136))
					{
						__LIB_32__::func_575(17, 1);
						__LIB_32__::func_575(16, 1);
					}
					else if (__LIB_0__::func_368(135))
					{
						__LIB_32__::func_575(6, 1);
						__LIB_32__::func_575(9, 1);
					}
					break;
				default:
					__LIB_37__::func_361(iVar1, 1);
					break;
				}
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 63)
	{
		iVar2 = bVar0;
		if (BitTest(Global_113386.f_18574[iVar2 /*6*/], 3))
		{
			__LIB_35__::func_900(iVar2, 1);
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 13)
	{
		iVar3 = bVar0;
		if (__LIB_29__::func_427(iVar3))
		{
			if (func_1945(iVar3))
			{
				if (!__LIB_34__::func_745(iVar3))
				{
					__LIB_39__::func_359(iVar3, 1);
				}
			}
		}
		bVar0++;
	}
	if (__LIB_0__::func_176(86))
	{
		__LIB_37__::func_290(0, 1);
	}
	if (__LIB_0__::func_176(91))
	{
		__LIB_37__::func_290(2, 1);
	}
	if (__LIB_0__::func_176(67))
	{
		__LIB_37__::func_290(3, 1);
	}
	if (__LIB_0__::func_176(77))
	{
		__LIB_37__::func_290(4, 1);
	}
	bVar0 = false;
	while (bVar0 < 30)
	{
		iVar4 = bVar0;
		if (BitTest(Global_113386.f_10049.f_143, bVar0))
		{
			__LIB_40__::func_619(iVar4, 1);
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 30)
	{
		bVar5 = bVar0;
		if (!func_1930(bVar5))
		{
			if ((bVar5 == 0 || bVar5 == 1) || bVar5 == 29)
			{
				func_1929(bVar5, 1);
			}
		}
		bVar0++;
	}
}

void func_1929(bool bParam0, bool bParam1)//Position - 0xD274F
{
	if (!func_1930(bParam0))
	{
		MISC::SET_BIT(&(Global_113386.f_26434.f_4), bParam0);
		if (!bParam1)
		{
		}
	}
}

int func_1930(bool bParam0)//Position - 0xD2776
{
	if (bParam0 != -1 && bParam0 != 30)
	{
		return BitTest(Global_113386.f_26434.f_4, bParam0);
	}
	return 0;
}

int func_1945(int iParam0)//Position - 0xD2FF7
{
	if (__LIB_29__::func_427(iParam0))
	{
		return __LIB_29__::func_428(Global_113386.f_20117, __LIB_29__::func_442(iParam0, 0));
	}
	return 0;
}

void func_1954(var uParam0)//Position - 0xD356A
{
	func_1691(uParam0);
	uParam0->f_6 = func_1714();
	uParam0->f_7 = func_1710();
	uParam0->f_8 = func_1730();
	uParam0->f_9 = func_1725();
	uParam0->f_10 = func_1718();
	uParam0->f_11 = func_1704();
	uParam0->f_12 = func_1700();
	uParam0->f_3 = 213;
}

void func_1956()//Position - 0xD35CC
{
	bool bVar0;
	bVar0 = true;
	__LIB_42__::func_330(bVar0);
}

void func_1983(var uParam0)//Position - 0xD4433
{
	*uParam0 = FILES::GET_NUM_DLC_WEAPONS();
	uParam0->f_1 = 45;
}

void func_1984(var uParam0)//Position - 0xD4448
{
	int iVar0;
	iVar0 = 0;
	uParam0->f_1[iVar0 /*10*/] = { -1145.4558f, -1519.6444f, 6.3386f };
	uParam0->f_1[iVar0 /*10*/].f_3 = { -1142.9476f, -1518.4583f, 12.018578f };
	uParam0->f_1[iVar0 /*10*/].f_6 = { -1147.9551f, -1521.8883f, 2.838008f };
	uParam0->f_1[iVar0 /*10*/].f_9 = 3.75f;
}

void func_1985(bool bParam0)//Position - 0xD44B1
{
	__LIB_0__::func_182();
	if (!Global_113386.f_20564.f_232 && __LIB_0__::func_365(53))
	{
		Global_60328[0] = 4000;
		Global_113386.f_20564.f_233[0 /*69*/] = 0;
		Global_113386.f_20564.f_233[0 /*69*/].f_1 = 0;
		Global_60328[1] = 4000;
		Global_113386.f_20564.f_233[1 /*69*/] = 0;
		Global_113386.f_20564.f_233[1 /*69*/].f_1 = 0;
		Global_60328[2] = 4000;
		Global_113386.f_20564.f_233[2 /*69*/] = 0;
		Global_113386.f_20564.f_233[2 /*69*/].f_1 = 0;
		__LIB_0__::func_178(2);
		__LIB_0__::func_178(0);
		__LIB_0__::func_178(1);
		__LIB_39__::func_853(2, 1, 36, 22300, 0);
		__LIB_39__::func_853(2, 0, 13, 678, 0);
		__LIB_39__::func_853(2, 1, 36, 45200, 0);
		__LIB_39__::func_853(2, 0, 6, 200, 0);
		__LIB_39__::func_853(2, 0, 4, 12, 0);
		__LIB_39__::func_853(2, 0, 4, 14, 0);
		__LIB_39__::func_853(2, 0, 8, 280, 0);
		__LIB_39__::func_853(2, 1, 36, 30200, 0);
		__LIB_39__::func_853(2, 0, 13, 185, 0);
		__LIB_39__::func_853(1, 0, 5, 45, 0);
		__LIB_39__::func_853(1, 0, 10, 400, 0);
		__LIB_39__::func_853(1, 0, 11, 19, 0);
		__LIB_39__::func_853(1, 0, 7, 149, 0);
		__LIB_39__::func_853(1, 0, 4, 19, 0);
		__LIB_39__::func_853(0, 0, 4, 19, 0);
		__LIB_39__::func_853(0, 0, 7, 2313, 0);
		__LIB_39__::func_853(0, 0, 5, 20, 0);
		__LIB_39__::func_853(0, 0, 9, 5633, 0);
		__LIB_39__::func_853(0, 0, 12, 700, 0);
		STATS::STAT_SET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), 0, true);
		STATS::STAT_SET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), 0, true);
		STATS::STAT_SET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), 0, true);
		Global_60328[2] = 10666;
		Global_60328[0] = 3085;
		Global_60328[1] = 1178;
		Global_113386.f_20564.f_232 = 1;
	}
	if (bParam0)
	{
		Global_60328[2] = 108654;
		Global_60328[0] = 7860;
		Global_60328[1] = 78;
	}
	__LIB_0__::func_178(2);
	__LIB_0__::func_178(0);
	__LIB_0__::func_178(1);
}

void func_1986()//Position - 0xD46AE
{
	Global_100480.f_1 = 0;
	Global_100480.f_10 = 0;
}

void func_1987()//Position - 0xD46C4
{
	char* sVar0;
	sVar0 = "initial";
	SCRIPT::REQUEST_SCRIPT(sVar0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sVar0))
	{
		SCRIPT::REQUEST_SCRIPT(sVar0);
		SYSTEM::WAIT(0);
	}
	SYSTEM::START_NEW_SCRIPT(sVar0, 2050);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
}

void func_1990()//Position - 0xD4742
{
	__LIB_29__::func_887(0);
	func_1992(&uLocal_190);
	func_1991();
	__LIB_34__::func_871(&Global_152266);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1991()//Position - 0xD4765
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_78301[iVar0 /*2*/] = -1;
		Global_78301[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
	Global_78313 = 0;
	Global_78312 = 0;
	Global_78315 = -1;
	Global_78316 = -1;
	Global_78335 = -1;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1992(var uParam0)//Position - 0xD47B0
{
	if (GRAPHICS::GET_EXTRA_TCMODIFIER() != -1)
	{
		GRAPHICS::CLEAR_EXTRA_TCMODIFIER();
	}
	if (*uParam0 != -1)
	{
		AUDIO::STOP_SOUND(*uParam0);
		AUDIO::RELEASE_SOUND_ID(*uParam0);
		*uParam0 = -1;
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_38(1)))
	{
		AUDIO::STOP_AUDIO_SCENE(func_38(1));
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_38(2)))
	{
		AUDIO::STOP_AUDIO_SCENE(func_38(2));
	}
}

