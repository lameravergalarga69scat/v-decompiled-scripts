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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<9> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_45[46] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	bool bLocal_46 = 0;
	var uLocal_47[2] = { 0, 0 };
	float fLocal_48 = 0f;
	var uLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	int iLocal_51 = 0;
	struct<3> Local_52 = { 0, 0, 0 } ;
	float fLocal_53 = 0f;
	struct<67> Local_54 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_66[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_67 = 0;
	struct<261> Local_68[4];
	char* sLocal_69[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_70 = NULL;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	char* sLocal_79 = NULL;
	var uLocal_80 = 16;
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
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	int iLocal_245 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_43 = 145;
	bLocal_46 = -1;
	fLocal_48 = 0f;
	Local_50 = { 0f, 0f, 0f };
	Local_52 = { 0f, 0f, 0f };
	fLocal_53 = 0f;
	iLocal_67 = 1;
	sLocal_70 = "";
	iLocal_73 = -1;
	iLocal_76 = -1;
	iLocal_78 = -1;
	iLocal_245 = -1;
	if (!__LIB_0__.func_513(32))
	{
		iLocal_37 = Global_113386.f_10049.f_128;
		if (iLocal_37 == 2)
		{
			MISC::SET_BIT(&uLocal_49, 10);
			Local_52 = { __LIB_26__.func_503(25) };
			fLocal_53 = __LIB_26__.func_573(25);
			if (__LIB_26__.func_572(&Local_54, 25))
			{
				if (!BitTest(uLocal_49, 14))
				{
					MISC::SET_BIT(&uLocal_49, 14);
				}
			}
		}
	}
	else
	{
		__LIB_18__.func_203("AM_H_PREP8" /* GXT: A getaway vehicle is required for this setup. */, 2, 0, -1, 10000, 3, 0, 0, 0);
		Global_113386.f_10049.f_128 = iLocal_37;
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
		{
			__LIB_12__.func_85(0);
			__LIB_12__.func_83(32, 1);
		}
		else
		{
			__LIB_12__.func_83(32, 0);
		}
	}
	func_260(1);
	while (true)
	{
		if (__LIB_0__.func_176(69))
		{
			__LIB_12__.func_77("AM_H_PREP8" /* GXT: A getaway vehicle is required for this setup. */, 1);
			__LIB_12__.func_83(32, 0);
		}
		if (!__LIB_32__.func_769(1))
		{
			if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
			{
				func_245();
				func_238();
				func_237();
				func_226();
				switch (iLocal_37)
				{
					case 0:
						func_141();
						break;
					case 2:
						func_140();
						break;
					case 3:
						func_131();
						break;
					case 4:
						func_16(12);
						break;
					case 5:
						break;
					default:
						break;
				}
				__LIB_26__.func_565();
			}
			else
			{
				func_1(46, 1);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0, bool bParam1)//Position - 0x1D1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (46 - 1))
	{
		if (iParam0 != iVar0 && iParam0 != 46)
		{
			func_4(iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (iParam0 != 46)
		{
			if ((!__LIB_0__.func_1(__LIB_12__.func_57(iParam0)) && !Global_112026) && !BitTest(uLocal_49, 15))
			{
				MISC::SET_BIT(&uLocal_49, 15);
				HUD::CLEAR_HELP(true);
			}
		}
		else if ((HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !Global_112026) && !BitTest(uLocal_49, 15))
		{
			MISC::SET_BIT(&uLocal_49, 15);
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_4(bool bParam0)//Position - 0x28F
{
	int iVar0;
	iVar0 = __LIB_0__.func_522(bParam0);
	MISC::CLEAR_BIT(&(uLocal_47[__LIB_12__.func_58(bParam0)]), iVar0);
}

void func_16(int iParam0)//Position - 0x5A1
{
	__LIB_9__.func_596();
	if (iLocal_40 == 0)
	{
		switch (iLocal_41)
		{
			case 0:
				__LIB_0__.func_518(1);
				iLocal_74 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
				func_1(46, 1);
				iLocal_75 = MISC::GET_GAME_TIMER() + 3000;
				if (!BitTest(uLocal_49, 10))
				{
					__LIB_38__.func_156();
				}
				__LIB_0__.func_503(iParam0, 1);
				iLocal_41 = 1;
				break;
			case 1:
				if (MISC::GET_GAME_TIMER() > iLocal_75)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_74))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "SHOW_MISSION_PASSED_MESSAGE");
						__LIB_0__.func_478("M_FB4P3_P" /* GXT: ~y~Mission Passed */);
						__LIB_0__.func_478("M_FB4P3" /* GXT: Getaway Vehicle */);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_75 = MISC::GET_GAME_TIMER() + 10000;
						__LIB_32__.func_724(0);
						iLocal_41 = 2;
					}
				}
				break;
			case 2:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_74) && AUDIO::IS_MISSION_COMPLETE_READY_FOR_UI())
				{
					if (MISC::GET_GAME_TIMER() < iLocal_75)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_74, 0.5f, 0.3f, 1f, 1f, 255, 255, 255, 255, 0);
					}
					else if (MISC::GET_GAME_TIMER() < iLocal_75 + 100)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_74, "TRANSITION_OUT");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_75 = (iLocal_75 - 100);
					}
					else if (MISC::GET_GAME_TIMER() < iLocal_75 + 500)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_74, 0.5f, 0.3f, 1f, 1f, 255, 255, 255, 255, 0);
					}
					else
					{
						iLocal_41 = 3;
					}
				}
				break;
			case 3:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_74))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_74);
				}
				__LIB_0__.func_518(0);
				if (iLocal_42 == 2)
				{
					__LIB_0__.func_71(108, 0);
				}
				if (__LIB_1__.func_183(iLocal_51))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_51, 1);
				}
				__LIB_0__.func_44("M_FHPE" /* GXT: Getaway Vehicle */, __LIB_26__.func_250());
				__LIB_26__.func_566(2, 0);
				break;
			}
	}
	func_17();
}

void func_17()//Position - 0x743
{
	int iVar0;
	if (!BitTest(uLocal_49, 2))
	{
		if (!__LIB_0__.func_78(0f, 0f, 0f, Local_52, 0))
		{
			if (__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_52, 100f, 1) && !__LIB_0__.func_198())
			{
				if (__LIB_1__.func_183(__LIB_0__.func_314(25)))
				{
					iLocal_51 = __LIB_0__.func_314(25);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_51, true, true);
					if (__LIB_1__.func_183(iLocal_51))
					{
						if (!DECORATOR::DECOR_EXIST_ON(iLocal_51, "GetawayVehicleValid"))
						{
							if (DECORATOR::DECOR_SET_BOOL(iLocal_51, "GetawayVehicleValid", true))
							{
							}
						}
						MISC::SET_BIT(&uLocal_49, 0);
						MISC::SET_BIT(&uLocal_49, 2);
					}
				}
				else if (!__LIB_0__.func_61(25, 0))
				{
					if (!__LIB_1__.func_183(__LIB_0__.func_314(25)))
					{
						func_70(1);
					}
				}
			}
			else if (__LIB_1__.func_183(iLocal_51))
			{
				if (!__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_52, 100f, 1))
				{
				}
			}
		}
	}
	else
	{
		if (!__LIB_0__.func_78(0f, 0f, 0f, Local_52, 0))
		{
			if (!__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_52, 100f, 1))
			{
				if (__LIB_1__.func_183(iLocal_51))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_51, false))
					{
						__LIB_20__.func_439(iLocal_51, Local_52, fLocal_53, 25, 1);
						MISC::CLEAR_BIT(&uLocal_49, 2);
						VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_51, false);
						__LIB_0__.func_106(&iLocal_51);
						MISC::CLEAR_BIT(&uLocal_49, 0);
					}
					else
					{
						func_70(0);
					}
				}
				else if (!__LIB_0__.func_61(25, 0))
				{
					func_70(1);
				}
			}
			else if (!__LIB_0__.func_61(25, 0))
			{
				if (!__LIB_1__.func_183(iLocal_51))
				{
					func_70(1);
				}
			}
			else if (!__LIB_1__.func_183(iLocal_51))
			{
				iVar0 = __LIB_0__.func_314(25);
				if (__LIB_1__.func_183(iVar0) && iVar0 != iLocal_51)
				{
					iLocal_51 = iVar0;
				}
			}
		}
		func_18();
	}
}

void func_18()//Position - 0x8E6
{
	if (BitTest(uLocal_49, 2) && BitTest(uLocal_49, 0))
	{
		if (__LIB_1__.func_183(iLocal_51))
		{
			if (__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), iLocal_51, 10f, 1))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_51, true), Local_52) >= 100f)
				{
					func_70(0);
				}
			}
		}
		else if (!__LIB_0__.func_61(25, 0))
		{
			if (__LIB_1__.func_183(iLocal_51))
			{
				VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_51, false);
			}
			__LIB_0__.func_106(&iLocal_51);
			func_70(1);
		}
	}
}

void func_70(bool bParam0)//Position - 0x6FF7
{
	if (BitTest(uLocal_49, 14))
	{
		if (__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) == 0)
		{
			if (bParam0)
			{
				__LIB_12__.func_38(10);
			}
			else
			{
				__LIB_12__.func_38(12);
			}
		}
		else if (bParam0)
		{
			__LIB_12__.func_38(11);
		}
		else
		{
			__LIB_12__.func_38(13);
		}
		if (iLocal_42 == 0)
		{
			__LIB_0__.func_503(45, 0);
		}
		else if (iLocal_42 == 1)
		{
			__LIB_0__.func_503(12, 0);
		}
		else if (iLocal_42 == 2)
		{
			__LIB_0__.func_503(34, 0);
		}
		if (iLocal_42 != 2)
		{
			Local_50 = { 0f, 0f, 0f };
		}
		iLocal_40 = 0;
		iLocal_41 = 0;
		MISC::CLEAR_BIT(&uLocal_49, 6);
		MISC::CLEAR_BIT(&uLocal_49, 7);
		MISC::CLEAR_BIT(&uLocal_49, 0);
		MISC::CLEAR_BIT(&uLocal_49, 1);
		MISC::CLEAR_BIT(&uLocal_49, 8);
		MISC::CLEAR_BIT(&uLocal_49, 12);
		MISC::CLEAR_BIT(&uLocal_49, 2);
		MISC::CLEAR_BIT(&uLocal_49, 14);
		if (iLocal_37 == 4)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_74))
			{
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_74);
			}
			__LIB_0__.func_518(0);
		}
		__LIB_26__.func_566(0, 0);
	}
}

void func_120(struct<6> Param0)//Position - 0x8350
{
	if (iLocal_42 == 0)
	{
		func_125(Param0);
	}
	else if (iLocal_42 == 1)
	{
		func_121(Param0);
	}
}

void func_121(struct<6> Param0)//Position - 0x8377
{
	if (__LIB_32__.func_837())
	{
		__LIB_9__.func_608(Param0, 1);
	}
	else
	{
		__LIB_9__.func_608(Param0, 0);
	}
}

void func_125(struct<6> Param0)//Position - 0x84DF
{
	if (__LIB_32__.func_837())
	{
		if (__LIB_20__.func_807())
		{
			if (__LIB_18__.func_173() != 0)
			{
				__LIB_9__.func_608(Param0, 1);
			}
			else
			{
				iLocal_40 = 3;
			}
		}
		else if (__LIB_18__.func_173() != 0)
		{
			__LIB_9__.func_608(Param0, 0);
		}
		else
		{
			iLocal_40 = 3;
		}
	}
	else
	{
		iLocal_40 = 3;
	}
}

void func_131()//Position - 0x85EF
{
	func_132();
}

void func_132()//Position - 0x85FB
{
	func_138();
	__LIB_9__.func_611();
}

int func_135()//Position - 0x86BB
{
	if (__LIB_20__.func_750())
	{
		if (__LIB_18__.func_173() == 0)
		{
			if (iLocal_43 == 12 || iLocal_43 == 1)
			{
				return 1;
			}
		}
		else if (iLocal_43 == 0 || iLocal_43 == 12)
		{
			return 1;
		}
	}
	return 0;
}

void func_138()//Position - 0x8732
{
	if (!__LIB_0__.func_78(Local_52, 0f, 0f, 0f, 0) && __LIB_9__.func_611() != __LIB_12__.func_61())
	{
		if (__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_52, 60f, 1))
		{
			if (__LIB_1__.func_183(__LIB_0__.func_314(25)))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(__LIB_0__.func_314(25), true), Local_52) >= 100f)
				{
					func_70(0);
				}
			}
			else if (!__LIB_0__.func_61(25, 0))
			{
				func_70(1);
			}
		}
	}
}

void func_140()//Position - 0x87DE
{
	func_17();
	__LIB_9__.func_596();
}

void func_141()//Position - 0x87EE
{
	int iVar0;
	__LIB_12__.func_73();
	func_211();
	func_177();
	__LIB_9__.func_596();
	__LIB_0__.func_572();
	if (func_172())
	{
		if (func_142(&iVar0))
		{
			__LIB_12__.func_85(0);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			if (__LIB_1__.func_183(iLocal_51))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_51, 2);
			}
			__LIB_26__.func_566(iVar0, 0);
		}
	}
}

int func_142(var uParam0)//Position - 0x8859
{
	char* sVar0;
	if (BitTest(uLocal_49, 0))
	{
		func_161();
		if (__LIB_39__.func_935())
		{
			sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				if (iLocal_42 == 2)
				{
					*uParam0 = 1;
				}
				else
				{
					*uParam0 = 4;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_161()//Position - 0x907C
{
	bool bVar0;
	bVar0 = __LIB_18__.func_173();
	func_162(bVar0, __LIB_0__.func_528(bVar0));
}

void func_162(bool bParam0, var uParam1)//Position - 0x9096
{
	int iVar0;
	switch (bParam0)
	{
		case 0:
			Local_44.f_0 = 0;
			Local_44.f_1 = "MICHAEL";
			if (iLocal_42 == 0)
			{
				Local_44.f_2 = 1;
				Local_44.f_3 = "FRANKLIN";
				Local_44.f_8 = 5;
			}
			else
			{
				Local_44.f_2 = 3;
				Local_44.f_3 = "LESTER";
				if (iLocal_42 == 1)
				{
					Local_44.f_8 = 6;
				}
				else
				{
					Local_44.f_8 = 12;
				}
			}
			Local_44.f_5 = "FBI_3_FRESP";
			func_169(bParam0);
			break;
		case 1:
			Local_44.f_0 = 1;
			Local_44.f_1 = "FRANKLIN";
			if (iLocal_42 == 0)
			{
				Local_44.f_2 = 0;
				Local_44.f_3 = "MICHAEL";
				Local_44.f_8 = 9;
			}
			else
			{
				Local_44.f_2 = 3;
				Local_44.f_3 = "LESTER";
				if (iLocal_42 == 1)
				{
					Local_44.f_8 = 7;
				}
				else
				{
					Local_44.f_8 = 12;
				}
			}
			Local_44.f_5 = "FBI_3_MRESP";
			func_169(bParam0);
			break;
		case 2:
			Local_44.f_0 = 2;
			Local_44.f_1 = "TREVOR";
			if (iLocal_42 == 0)
			{
				Local_44.f_2 = 0;
				Local_44.f_3 = "MICHAEL";
				Local_44.f_8 = 8;
			}
			else
			{
				Local_44.f_2 = 3;
				Local_44.f_3 = "LESTER";
				if (iLocal_42 == 1)
				{
					Local_44.f_8 = 7;
				}
				else
				{
					Local_44.f_8 = 12;
				}
			}
			Local_44.f_5 = "FBI_3_MRESP";
			func_169(bParam0);
			break;
	}
	if (iLocal_42 == 1)
	{
		if (bParam0 == 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
		__LIB_24__.func_951(Local_44.f_8, iVar0, 0);
	}
	__LIB_0__.func_203(&uLocal_80, Local_44.f_0, PLAYER::PLAYER_PED_ID(), Local_44.f_1, 0, 1);
	__LIB_0__.func_203(&uLocal_80, Local_44.f_2, 0, Local_44.f_3, 0, 1);
	Local_44.f_4 = uParam1;
}

void func_169(int iParam0)//Position - 0x94FF
{
	Local_44.f_6 = ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	__LIB_11__.func_904(iParam0);
}

int func_172()//Position - 0xAEB7
{
	if (BitTest(uLocal_49, 0))
	{
		if (__LIB_1__.func_183(iLocal_51))
		{
			if (BitTest(uLocal_49, 1))
			{
				if ((__LIB_12__.func_54(0) || __LIB_12__.func_54(12)) || __LIB_12__.func_54(1))
				{
					func_173();
					func_1(46, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_173()//Position - 0xAF05
{
	if (!BitTest(uLocal_49, 6))
	{
		if (__LIB_1__.func_183(iLocal_51))
		{
			Local_52 = { ENTITY::GET_ENTITY_COORDS(iLocal_51, true) };
			fLocal_53 = ENTITY::GET_ENTITY_HEADING(iLocal_51);
			MISC::SET_BIT(&uLocal_49, 6);
			MISC::SET_BIT(&uLocal_49, 2);
			__LIB_6__.func_760(iLocal_51, &Local_54);
			__LIB_20__.func_439(iLocal_51, Local_52, fLocal_53, 25, 1);
			MISC::SET_BIT(&uLocal_49, 14);
			__LIB_11__.func_696(iLocal_51);
		}
	}
}

void func_177()//Position - 0xB014
{
	if ((BitTest(uLocal_49, 0) && Global_43052 == 15) && !__LIB_0__.func_510())
	{
		if (iLocal_38 == 0)
		{
			if (!BitTest(uLocal_49, 1) && BitTest(uLocal_49, 0))
			{
				if (!__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_50, 5f, 1))
				{
					if (BitTest(uLocal_49, 20) || func_135())
					{
						if ((__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()) && !BitTest(uLocal_47[0], 17)) && !BitTest(uLocal_47[1], 18))
						{
							if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
							{
								func_209(24, 46);
								if (BitTest(uLocal_49, 0))
								{
									if (!func_207() && func_187(ENTITY::GET_ENTITY_COORDS(iLocal_51, true)))
									{
										if (func_184(iLocal_51))
										{
											if (func_183(iLocal_51))
											{
												MISC::SET_BIT(&uLocal_49, 1);
												if (__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) == 0)
												{
													__LIB_12__.func_38(7);
													func_1(7, 1);
												}
												else
												{
													__LIB_12__.func_38(8);
													func_1(8, 1);
												}
												Local_50 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
												return;
											}
										}
									}
									if (BitTest(uLocal_49, 20))
									{
										func_1(46, 0);
										MISC::CLEAR_BIT(&uLocal_49, 20);
										iLocal_245 = -1;
									}
									Local_50 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
								}
							}
							else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								func_209(7, 8);
								if (BitTest(uLocal_49, 20))
								{
									MISC::CLEAR_BIT(&uLocal_49, 20);
									iLocal_245 = -1;
								}
								else
								{
									__LIB_12__.func_38(24);
								}
							}
						}
					}
					else if (!__LIB_20__.func_750())
					{
						if ((PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !BitTest(uLocal_49, 20))
						{
							if (iLocal_245 != -1)
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_245) > 1000)
								{
									MISC::SET_BIT(&uLocal_49, 20);
								}
							}
							else
							{
								iLocal_245 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							MISC::CLEAR_BIT(&uLocal_49, 20);
						}
					}
				}
				else if (__LIB_20__.func_750())
				{
					Local_50 = { 0f, 0f, 0f };
				}
			}
			else if (BitTest(uLocal_49, 0))
			{
				if (!__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_50, 10f, 1))
				{
					MISC::CLEAR_BIT(&uLocal_49, 1);
				}
				else if (!PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!BitTest(uLocal_49, 20))
						{
							__LIB_12__.func_38(24);
						}
						func_1(24, 1);
						MISC::CLEAR_BIT(&uLocal_49, 1);
						__LIB_6__.func_849(0);
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (__LIB_1__.func_183(iLocal_51))
					{
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != iLocal_51)
						{
							func_1(46, 0);
							__LIB_6__.func_849(0);
							__LIB_12__.func_64();
						}
					}
				}
			}
		}
	}
}

int func_183(int iParam0)//Position - 0xB3BB
{
	struct<3> Var0;
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
	{
		__LIB_12__.func_38(39);
		return 0;
	}
	if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), iParam0, -1, false, false) && !VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), iParam0, 0, false, false))
	{
		__LIB_12__.func_38(37);
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
	{
		__LIB_12__.func_38(36);
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
	if (Var0.f_0 >= 10f || Var0.f_0 <= -10f)
	{
		__LIB_12__.func_38(42);
		return 0;
	}
	else if (Var0.f_1 >= 15f || Var0.f_1 <= -15f)
	{
		__LIB_12__.func_38(43);
		return 0;
	}
	return 1;
}

int func_184(int iParam0)//Position - 0xB470
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	iVar0 = 0;
	if (iParam0 != 0)
	{
		if (__LIB_1__.func_183(iParam0))
		{
			MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var1, &Var2);
			Var1 = { Var1 + Vector(-1f, -1f, -2f) };
			Var2 = { Var2 + Vector(1f, 1f, 2f) };
			if (!MISC::IS_AREA_OCCUPIED(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var2), false, true, false, false, false, iParam0, false))
			{
				iVar0++;
			}
			else if (__LIB_20__.func_750())
			{
				__LIB_12__.func_38(38);
			}
			if (!__LIB_20__.func_754())
			{
				iVar0++;
			}
			else if (__LIB_20__.func_750())
			{
				__LIB_12__.func_38(35);
			}
			if (iVar0 == 2)
			{
				if (func_185(ENTITY::GET_ENTITY_COORDS(iParam0, true)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_185(struct<3> Param0)//Position - 0xB525
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	Var2 = { Param0 + Vector(3.2f, 0f, 0f) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var2, &fVar0, false, false) && MISC::GET_GROUND_Z_FOR_3D_COORD(Param0, &fVar1, false, false))
	{
		if (MISC::ABSF((fVar0 - fVar1)) < 0.9f)
		{
			return 1;
		}
	}
	if (__LIB_20__.func_750())
	{
		__LIB_12__.func_38(37);
	}
	return 0;
}

int func_187(struct<3> Param0)//Position - 0xB5EA
{
	if (!func_203() && !func_202(Param0))
	{
		if (!func_199())
		{
			if (!__LIB_26__.func_571(Param0))
			{
				if (!func_193(Param0) && !func_188(Param0))
				{
					return 1;
				}
			}
			else
			{
				__LIB_12__.func_38(0);
			}
		}
	}
	return 0;
}

int func_188(struct<3> Param0)//Position - 0xB643
{
	if (__LIB_26__.func_570(Param0) || __LIB_20__.func_755(Param0))
	{
		if (__LIB_20__.func_750())
		{
			__LIB_12__.func_38(22);
		}
		return 1;
	}
	return 0;
}

int func_193(struct<3> Param0)//Position - 0xB7D4
{
	struct<3> Var0;
	float fVar1;
	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Param0, &Var0, 0, 3f, 0f))
	{
		fVar1 = SYSTEM::VDIST2(Param0, Var0);
		if (fVar1 >= 400f || !__LIB_12__.func_66(Param0, Var0))
		{
			return 0;
		}
		else if (fVar1 < 20f && fVar1 > 6f)
		{
			if (__LIB_20__.func_750())
			{
				__LIB_12__.func_38(40);
			}
			return 1;
		}
		else
		{
			if (__LIB_20__.func_750())
			{
				__LIB_12__.func_38(41);
			}
			return 1;
		}
	}
	return 0;
}

int func_199()//Position - 0xC623
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		bVar1 = false;
		while (bVar1 <= (Local_68[iVar0 /*261*/].f_257 - 1))
		{
			if (BitTest(Local_68[iVar0 /*261*/].f_258, bVar1))
			{
				if (__LIB_12__.func_69(sLocal_70))
				{
					if (Local_68[iVar0 /*261*/].f_260 == 0)
					{
						if (__LIB_20__.func_750())
						{
							__LIB_12__.func_38(21);
						}
					}
					else if (Local_68[iVar0 /*261*/].f_260 == 2)
					{
						if (__LIB_20__.func_750())
						{
							__LIB_12__.func_38(22);
						}
					}
					else if (Local_68[iVar0 /*261*/].f_260 == 1)
					{
						if (__LIB_20__.func_750())
						{
							__LIB_12__.func_38(23);
						}
					}
					else if (Local_68[iVar0 /*261*/].f_260 == 3)
					{
						if (__LIB_20__.func_750())
						{
							__LIB_12__.func_38(20);
						}
					}
					return 1;
				}
				if (__LIB_12__.func_68(&(Local_68[iVar0 /*261*/][bVar1 /*8*/])))
				{
					if (Local_68[iVar0 /*261*/].f_260 == 0)
					{
						if (__LIB_20__.func_750())
						{
							__LIB_12__.func_38(21);
						}
					}
					else if (Local_68[iVar0 /*261*/].f_260 == 2)
					{
						if (__LIB_20__.func_750())
						{
							__LIB_12__.func_38(22);
						}
					}
					else if (Local_68[iVar0 /*261*/].f_260 == 1)
					{
						if (__LIB_20__.func_750())
						{
							__LIB_12__.func_38(23);
						}
					}
					else if (Local_68[iVar0 /*261*/].f_260 == 3)
					{
						if (__LIB_20__.func_750())
						{
							__LIB_12__.func_38(20);
						}
					}
					return 1;
				}
			}
			bVar1++;
		}
		iVar0++;
	}
	return 0;
}

int func_202(struct<3> Param0)//Position - 0xC7F2
{
	if (Param0.f_2 < -90f)
	{
		return 1;
	}
	if ((SYSTEM::VDIST2(Param0, -89.377f, 92.6583f, 71.2349f) <= 400f || SYSTEM::VDIST2(Param0, -62.0307f, -1839.8585f, 25.6787f) <= 400f) || SYSTEM::VDIST2(Param0, -234.7648f, -1150.3105f, 21.9224f) <= 400f)
	{
		__LIB_12__.func_38(21);
		return 1;
	}
	return 0;
}

int func_203()//Position - 0xC87C
{
	int iVar0;
	float fVar1;
	iVar0 = __LIB_6__.func_815(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 145, 1);
	fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Global_95479[iVar0 /*10*/].f_3);
	if (fVar1 <= 10000f)
	{
		if (__LIB_20__.func_750())
		{
			func_204(iVar0);
		}
		return 1;
	}
	return 0;
}

void func_204(int iParam0)//Position - 0xC8CE
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		__LIB_12__.func_38(32);
	}
	else if (iParam0 == 5 || iParam0 == 6)
	{
		__LIB_12__.func_38(33);
	}
	else if ((iParam0 == 2 || iParam0 == 3) || iParam0 == 4)
	{
		__LIB_12__.func_38(34);
	}
}

int func_207()//Position - 0xC9CF
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1276.1234f, -1723.6653f, 53.6551f) <= 52900f)
	{
		if (__LIB_20__.func_750())
		{
			__LIB_12__.func_38(30);
		}
		return 1;
	}
	else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 111.8564f, -751.7169f, 44.757f) <= 160000f)
	{
		if (__LIB_20__.func_750())
		{
			__LIB_12__.func_38(31);
		}
		return 1;
	}
	else if (__LIB_12__.func_76(200f))
	{
		if (__LIB_20__.func_750())
		{
			__LIB_12__.func_38(19);
		}
		return 1;
	}
	return 0;
}

void func_209(bool bParam0, bool bParam1)//Position - 0xCAD9
{
	func_4(bParam0);
	if (__LIB_0__.func_1(__LIB_12__.func_57(bParam0)))
	{
		HUD::CLEAR_HELP(true);
		MISC::SET_BIT(&uLocal_49, 15);
	}
	if (bParam1 != 46)
	{
		func_4(bParam1);
		if (__LIB_0__.func_1(__LIB_12__.func_57(bParam1)))
		{
			HUD::CLEAR_HELP(true);
			MISC::SET_BIT(&uLocal_49, 15);
		}
	}
}

void func_211()//Position - 0xCB4B
{
	int iVar0;
	int iVar1;
	if ((Global_43052 == 15 && iLocal_38 == 0) && !__LIB_0__.func_510())
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (!BitTest(uLocal_49, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!__LIB_12__.func_73())
					{
						if (!BitTest(uLocal_49, 7))
						{
							iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (__LIB_1__.func_183(iVar0))
							{
								if (!__LIB_12__.func_72(iVar0))
								{
									if (!DECORATOR::DECOR_EXIST_ON(iVar0, "Getaway_Winched"))
									{
										if (func_215(iVar0) && !__LIB_12__.func_71())
										{
											if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
											{
												if (__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) == 0)
												{
													__LIB_12__.func_38(17);
												}
												else
												{
													__LIB_12__.func_38(18);
												}
												iLocal_51 = iVar0;
												if (DECORATOR::DECOR_SET_BOOL(iLocal_51, "GetawayVehicleValid", true))
												{
												}
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_51, true, true);
												MISC::SET_BIT(&uLocal_49, 0);
												MISC::SET_BIT(&uLocal_49, 8);
												MISC::SET_BIT(&uLocal_49, 7);
												return;
											}
											else
											{
												__LIB_0__.func_106(&iLocal_51);
												MISC::CLEAR_BIT(&uLocal_49, 7);
												MISC::CLEAR_BIT(&uLocal_49, 0);
												return;
											}
										}
									}
									if (DECORATOR::DECOR_SET_BOOL(iVar0, "GetawayVehicleValid", false))
									{
									}
									MISC::SET_BIT(&uLocal_49, 7);
								}
								else if (__LIB_12__.func_71(iVar0))
								{
									iLocal_51 = iVar0;
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_51, true, true);
									MISC::SET_BIT(&uLocal_49, 0);
									MISC::SET_BIT(&uLocal_49, 8);
									MISC::SET_BIT(&uLocal_49, 7);
									return;
								}
							}
							else
							{
								__LIB_0__.func_106(&iLocal_51);
								MISC::SET_BIT(&uLocal_49, 7);
								MISC::CLEAR_BIT(&uLocal_49, 0);
							}
						}
						else if (BitTest(uLocal_49, 0))
						{
							if (!__LIB_1__.func_183(iLocal_51))
							{
								__LIB_0__.func_106(&iLocal_51);
								MISC::SET_BIT(&uLocal_49, 0);
								MISC::SET_BIT(&uLocal_49, 8);
								MISC::SET_BIT(&uLocal_49, 7);
							}
						}
					}
				}
				else if (BitTest(uLocal_49, 8))
				{
					iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (__LIB_1__.func_183(iVar1))
					{
						if (__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), iVar1, 10f, 1) && !DECORATOR::DECOR_EXIST_ON(iVar1, "Getaway_Winched"))
						{
							iLocal_51 = iVar1;
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_51, true, true);
							MISC::SET_BIT(&uLocal_49, 0);
							MISC::SET_BIT(&uLocal_49, 7);
						}
					}
				}
				else
				{
					MISC::CLEAR_BIT(&uLocal_49, 7);
				}
			}
			else if (__LIB_1__.func_183(iLocal_51))
			{
				if (!__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), iLocal_51, 80f, 1))
				{
					if (!DECORATOR::DECOR_EXIST_ON(iLocal_51, "Getaway_Winched"))
					{
						MISC::SET_BIT(&(uLocal_47[__LIB_12__.func_58(5)]), 5);
						MISC::SET_BIT(&uLocal_49, 8);
					}
					else
					{
						MISC::CLEAR_BIT(&uLocal_49, 8);
					}
					__LIB_0__.func_106(&iLocal_51);
					MISC::CLEAR_BIT(&uLocal_49, 0);
					MISC::CLEAR_BIT(&uLocal_49, 7);
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != iLocal_51)
					{
						__LIB_0__.func_106(&iLocal_51);
						func_209(17, 46);
						func_209(18, 46);
						func_209(14, 46);
						__LIB_12__.func_64();
					}
					else if (__LIB_12__.func_73())
					{
						__LIB_0__.func_106(&iLocal_51);
						__LIB_12__.func_64();
					}
				}
				else if (!__LIB_12__.func_70(iLocal_51))
				{
					if (DECORATOR::DECOR_SET_BOOL(iLocal_51, "GetawayVehicleValid", false))
					{
					}
					func_209(17, 46);
					func_209(18, 46);
					__LIB_0__.func_106(&iLocal_51);
					__LIB_12__.func_64();
				}
			}
			else
			{
				__LIB_0__.func_106(&iLocal_51);
				__LIB_12__.func_64();
			}
		}
	}
}

int func_215(int iParam0)//Position - 0xCEDE
{
	if ((func_221() && func_217(iParam0)) && func_216(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0)//Position - 0xCF08
{
	int iVar0;
	iVar0 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
	if (iVar0 >= 3)
	{
		return 1;
	}
	__LIB_12__.func_38(15);
	return 0;
}

int func_217(int iParam0)//Position - 0xCF29
{
	if ((func_219(iParam0) && !func_218(iParam0)) && __LIB_12__.func_70(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0)//Position - 0xCF56
{
	int iVar0;
	iVar0 = __LIB_0__.func_119(iParam0);
	if (iVar0 == 0)
	{
		__LIB_12__.func_38(25);
		return 1;
	}
	if (iVar0 == 1)
	{
		__LIB_12__.func_38(26);
		return 1;
	}
	if (iVar0 == 2)
	{
		__LIB_12__.func_38(27);
		return 1;
	}
	if (__LIB_0__.func_108(iParam0))
	{
		__LIB_12__.func_38(14);
		return 1;
	}
	return 0;
}

int func_219(int iParam0)//Position - 0xCFAA
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!__LIB_12__.func_72(iVar0))
	{
		if (VEHICLE::GET_VEHICLE_MODEL_ACCELERATION(iVar0) > 0.165f && VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(iVar0) > 31f)
		{
			return 1;
		}
	}
	__LIB_12__.func_38(14);
	return 0;
}

int func_221()//Position - 0xD05B
{
	if ((((PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_12__.func_38(14);
		return 0;
	}
	return 1;
}

void func_226()//Position - 0xD2D3
{
	int iVar0;
	bool bVar1;
	if (((((((Global_43052 == 15 && iLocal_37 != 3) && BitTest(uLocal_49, 5)) && !__LIB_0__.func_510()) && Global_78316 == -1) && !__LIB_0__.func_511()) && !__LIB_0__.func_39(9)) || __LIB_0__.func_368(35))
	{
		func_235();
		func_233();
		switch (iLocal_39)
		{
			case 0:
				if (BitTest(uLocal_49, 17))
				{
					iVar0 = -1;
					while (iVar0 < (36 - 1))
					{
						iVar0++;
						if (iVar0 != 46)
						{
							func_232(uLocal_47[0], &iVar0);
						}
					}
					MISC::CLEAR_BIT(&uLocal_49, 17);
				}
				else
				{
					iVar0 = 31;
					while (iVar0 < (46 - 1))
					{
						iVar0++;
						if (iVar0 != 46)
						{
							func_232(uLocal_47[1], &iVar0);
						}
					}
					MISC::SET_BIT(&uLocal_49, 17);
				}
				break;
			case 1:
			case 2:
			case 3:
			case 4:
				func_227(bLocal_46, 1);
				break;
		}
	}
	else if (((((((Global_43052 != 15 || Global_43052 != 0) || Global_43052 != 2) || Global_43052 != 4) || Global_43052 != 17) || __LIB_0__.func_510()) || Global_78316 == -1) || Global_112441)
	{
		bVar1 = false;
		if (__LIB_12__.func_60())
		{
			bVar1 = true;
		}
		else if (Global_112441)
		{
			bVar1 = 2;
		}
		if (BitTest(uLocal_47[__LIB_12__.func_58(bVar1)], bVar1))
		{
			func_227(bVar1, 0);
		}
	}
}

void func_227(bool bParam0, bool bParam1)//Position - 0xD45B
{
	switch (iLocal_39)
	{
		case 1:
			if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !__LIB_20__.func_810(__LIB_18__.func_173())) && !__LIB_0__.func_200())
			{
				__LIB_0__.func_151(__LIB_12__.func_57(bParam0), 15000);
				iLocal_39 = 2;
			}
			break;
		case 2:
			if (__LIB_0__.func_1(__LIB_12__.func_57(bParam0)))
			{
				fLocal_48 = 0f;
				iLocal_39 = 3;
			}
			else
			{
				fLocal_48 = (fLocal_48 + MISC::GET_FRAME_TIME());
				if (fLocal_48 >= 20f)
				{
					iLocal_39 = 4;
				}
				else if (BitTest(uLocal_49, 15))
				{
					func_4(bParam0);
					MISC::CLEAR_BIT(&uLocal_49, 15);
					iLocal_39 = 4;
				}
			}
			break;
		case 3:
			if (!__LIB_0__.func_1(__LIB_12__.func_57(bParam0)))
			{
				if (fLocal_48 >= 7.5f || BitTest(uLocal_49, 15))
				{
					func_4(bParam0);
					MISC::CLEAR_BIT(&uLocal_49, 15);
					iLocal_39 = 4;
				}
				else if (bParam1)
				{
					iLocal_39 = 0;
				}
				else
				{
					iLocal_39 = 1;
					fLocal_48 = 0f;
				}
			}
			else
			{
				fLocal_48 = (fLocal_48 + MISC::GET_FRAME_TIME());
			}
			break;
		case 4:
			fLocal_48 = 0f;
			iLocal_39 = 0;
			break;
	}
}

void func_232(var uParam0, int iParam1)//Position - 0xD68E
{
	bool bVar0;
	bVar0 = __LIB_0__.func_522(*iParam1);
	if (BitTest(uParam0, bVar0))
	{
		if (!BitTest(uLocal_49, 3))
		{
			bLocal_46 = *iParam1;
			iLocal_39 = 1;
			fLocal_48 = 0f;
			func_4(44);
			func_4(45);
			iLocal_76 = MISC::GET_GAME_TIMER();
			*iParam1 = 46;
		}
		else if (14 == bVar0)
		{
			func_4(bVar0);
			*iParam1 = 46;
		}
		else
		{
			bLocal_46 = *iParam1;
			iLocal_39 = 1;
			fLocal_48 = 0f;
			*iParam1 = 46;
		}
	}
}

void func_233()//Position - 0xD6FA
{
	if (iLocal_37 == 0 || iLocal_37 == 1)
	{
		switch (iLocal_38)
		{
			case 0:
				if (__LIB_0__.func_405(__LIB_12__.func_57(3), 0, 0))
				{
					MISC::SET_BIT(&uLocal_49, 15);
					HUD::CLEAR_HELP(true);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					if (((((((!__LIB_0__.func_1(__LIB_12__.func_57(7)) && !__LIB_0__.func_1(__LIB_12__.func_57(8))) && !__LIB_0__.func_1(__LIB_12__.func_57(10))) && !__LIB_0__.func_1(__LIB_12__.func_57(11))) && !__LIB_0__.func_1(__LIB_12__.func_57(12))) && !__LIB_0__.func_1(__LIB_12__.func_57(13))) && !__LIB_12__.func_60()) && !Global_112026)
					{
						MISC::SET_BIT(&uLocal_49, 15);
						HUD::CLEAR_HELP(true);
					}
					iLocal_38 = 1;
				}
				break;
			case 1:
				if (BitTest(uLocal_49, 0))
				{
					if (iLocal_42 == 2)
					{
						if (iLocal_37 == 1)
						{
							if (__LIB_1__.func_183(iLocal_51))
							{
								__LIB_12__.func_38(3);
								func_1(3, 1);
							}
						}
						iLocal_38 = 2;
					}
					else
					{
						if (__LIB_1__.func_183(iLocal_51))
						{
							__LIB_12__.func_38(3);
							func_1(3, 1);
						}
						iLocal_38 = 2;
					}
				}
				else
				{
					iLocal_38 = 2;
				}
				break;
			case 2:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (__LIB_0__.func_1(__LIB_12__.func_57(3)))
					{
						MISC::SET_BIT(&uLocal_49, 15);
						HUD::CLEAR_HELP(true);
					}
					iLocal_38 = 0;
				}
				break;
			}
	}
}

void func_235()//Position - 0xD86D
{
	if ((((!__LIB_0__.func_368(__LIB_12__.func_59()) && !__LIB_0__.func_368(35)) && !__LIB_20__.func_810(__LIB_18__.func_173())) && !__LIB_0__.func_200()) && !__LIB_0__.func_509())
	{
		if (iLocal_77 < 2 && (MISC::GET_GAME_TIMER() - iLocal_76) > 480000)
		{
			if (iLocal_42 != 2)
			{
				__LIB_12__.func_38(44);
			}
			else
			{
				__LIB_12__.func_38(45);
			}
			iLocal_77++;
		}
	}
}

void func_237()//Position - 0xD910
{
	if (__LIB_0__.func_198())
	{
		if (BitTest(uLocal_49, 2))
		{
			if (__LIB_1__.func_183(iLocal_51))
			{
				__LIB_20__.func_439(iLocal_51, Local_52, fLocal_53, 25, 1);
				__LIB_0__.func_106(&iLocal_51);
			}
			MISC::CLEAR_BIT(&uLocal_49, 2);
		}
		func_1(46, 1);
		__LIB_12__.func_85(0);
	}
}

void func_238()//Position - 0xD957
{
	if (!__LIB_12__.func_76())
	{
		if (!__LIB_0__.func_511())
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					__LIB_12__.func_75();
				}
			}
		}
	}
	else if (iLocal_37 != 3)
	{
		func_239();
	}
}

void func_239()//Position - 0xD998
{
	if (iLocal_37 != 4)
	{
		if (iLocal_37 != 2)
		{
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !Global_112026)
			{
				MISC::SET_BIT(&uLocal_49, 15);
				HUD::CLEAR_HELP(true);
			}
			if (BitTest(uLocal_49, 0))
			{
				if (__LIB_1__.func_183(iLocal_51))
				{
					VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_51, false);
				}
				__LIB_0__.func_106(&iLocal_51);
				__LIB_12__.func_64();
				if (iLocal_42 != 2)
				{
					Local_50 = { 0f, 0f, 0f };
				}
				MISC::CLEAR_BIT(&uLocal_49, 8);
			}
		}
		else if (BitTest(uLocal_49, 0))
		{
			__LIB_20__.func_439(iLocal_51, Local_52, fLocal_53, 25, 1);
			if (__LIB_1__.func_183(iLocal_51))
			{
				VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_51, false);
			}
			__LIB_0__.func_106(&iLocal_51);
			__LIB_12__.func_64();
		}
		if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("GETAWY", 5))
		{
			HUD::CLEAR_ADDITIONAL_TEXT(5, false);
			MISC::CLEAR_BIT(&uLocal_49, 4);
			MISC::CLEAR_BIT(&uLocal_49, 5);
			__LIB_12__.func_85(0);
			if (__LIB_12__.func_60())
			{
				func_1(1, 1);
			}
			else
			{
				func_1(0, 1);
			}
		}
		iLocal_37 = 3;
	}
}

void func_241()//Position - 0xDAFA
{
	if (!__LIB_0__.func_368(__LIB_12__.func_59()))
	{
		if (!BitTest(uLocal_49, 12))
		{
			if (__LIB_32__.func_837())
			{
				if (iLocal_42 != 2)
				{
					__LIB_12__.func_38(44);
				}
				else
				{
					__LIB_12__.func_38(45);
				}
				MISC::SET_BIT(&uLocal_49, 12);
			}
		}
	}
}

void func_245()//Position - 0xDC1D
{
	if (!BitTest(uLocal_49, 13))
	{
		if (func_246())
		{
			MISC::SET_BIT(&uLocal_49, 13);
		}
	}
	else if (!func_246())
	{
		MISC::CLEAR_BIT(&uLocal_49, 7);
		MISC::CLEAR_BIT(&uLocal_49, 0);
		MISC::CLEAR_BIT(&uLocal_49, 1);
		MISC::CLEAR_BIT(&uLocal_49, 13);
	}
}

int func_246()//Position - 0xDC65
{
	if (((((__LIB_12__.func_54(39) || __LIB_12__.func_54(40)) || __LIB_12__.func_54(41)) || __LIB_12__.func_54(42)) || __LIB_12__.func_54(43)) || __LIB_12__.func_54(44))
	{
		return 1;
	}
	return 0;
}

void func_260(int iParam0)//Position - 0xE524
{
	iLocal_42 = iParam0;
	if (iLocal_42 == 0)
	{
		sLocal_79 = "FBIPRAU";
	}
	else if (iLocal_42 == 1)
	{
		sLocal_79 = "AHFAUD";
	}
	else if (iLocal_42 == 2)
	{
		sLocal_79 = "FHFAUD";
	}
	iLocal_66[0] = joaat("trash");
	iLocal_66[1] = joaat("towtruck");
	iLocal_66[2] = joaat("ambulance");
	iLocal_66[3] = joaat("barracks2");
	iLocal_66[4] = joaat("stretch");
	iLocal_66[5] = joaat("phantom");
	iLocal_66[6] = joaat("packer");
	iLocal_66[7] = joaat("blazer");
	iLocal_66[8] = joaat("blazer2");
	if (iLocal_42 != 0)
	{
		iLocal_66[9] = joaat("sentinel2");
	}
	else
	{
		iLocal_66[9] = 0;
	}
	__LIB_12__.func_81();
	__LIB_12__.func_79();
	MISC::SET_BIT(&uLocal_49, 17);
	iLocal_76 = MISC::GET_GAME_TIMER();
}

