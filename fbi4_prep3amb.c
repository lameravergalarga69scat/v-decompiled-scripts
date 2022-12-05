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
	if (!__LIB_0__.func_513(26))
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
		Global_113386.f_10049.f_128 = iLocal_37;
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
		{
			__LIB_26__.func_617(0);
			__LIB_20__.func_813(26, 1);
		}
		else
		{
			__LIB_20__.func_813(26, 0);
		}
	}
	__LIB_32__.func_842(0);
	while (true)
	{
		if (__LIB_0__.func_176(38))
		{
			__LIB_20__.func_813(26, 0);
		}
		if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
		{
			func_244();
			func_236();
			func_235();
			__LIB_38__.func_181();
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
					func_16(45);
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
			__LIB_26__.func_607(46, 1);
		}
		SYSTEM::WAIT(0);
	}
}

void func_16(int iParam0)//Position - 0x580
{
	__LIB_42__.func_419();
	if (iLocal_40 == 0)
	{
		switch (iLocal_41)
		{
			case 0:
				__LIB_0__.func_518(1);
				iLocal_74 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
				__LIB_26__.func_607(46, 1);
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

void func_17()//Position - 0x722
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
						__LIB_32__.func_835(1);
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
						__LIB_39__.func_933(iLocal_51, Local_52, fLocal_53, 25, 1);
						MISC::CLEAR_BIT(&uLocal_49, 2);
						VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_51, false);
						__LIB_0__.func_106(&iLocal_51);
						MISC::CLEAR_BIT(&uLocal_49, 0);
					}
					else
					{
						__LIB_32__.func_835(0);
					}
				}
				else if (!__LIB_0__.func_61(25, 0))
				{
					__LIB_32__.func_835(1);
				}
			}
			else if (!__LIB_0__.func_61(25, 0))
			{
				if (!__LIB_1__.func_183(iLocal_51))
				{
					__LIB_32__.func_835(1);
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
		__LIB_38__.func_178();
	}
}

void func_131()//Position - 0x85CA
{
	func_132();
}

void func_132()//Position - 0x85D6
{
	__LIB_36__.func_110();
	func_133();
}

void func_133()//Position - 0x85E6
{
	if (__LIB_9__.func_611() == 38)
	{
		if (__LIB_0__.func_294() && !__LIB_0__.func_61(25, 0))
		{
			if (Local_54.f_66 != 0)
			{
				__LIB_26__.func_263(25, &Local_54, Local_52, fLocal_53, 145);
			}
		}
	}
	else if (__LIB_9__.func_611() == -1)
	{
		if (!BitTest(uLocal_49, 1))
		{
			if (!__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_50, 5f, 1))
			{
				if (func_135())
				{
					if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						if (__LIB_12__.func_60())
						{
							__LIB_20__.func_806(1);
						}
						else if (Global_112441)
						{
							__LIB_20__.func_806(2);
						}
						else
						{
							__LIB_20__.func_806(0);
						}
						iLocal_39 = 1;
						fLocal_48 = 0f;
					}
				}
			}
		}
	}
}

int func_135()//Position - 0x8696
{
	if (__LIB_20__.func_750())
	{
		if (__LIB_18__.func_173() == 0)
		{
			if (iLocal_43 == 2 || iLocal_43 == 1)
			{
				return 1;
			}
		}
		else if (iLocal_43 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_140()//Position - 0x87AC
{
	func_17();
	__LIB_42__.func_419();
}

void func_141()//Position - 0x87BC
{
	int iVar0;
	__LIB_12__.func_73();
	func_210();
	func_177();
	__LIB_42__.func_419();
	func_176();
	if (func_172())
	{
		if (__LIB_41__.func_675(&iVar0))
		{
			__LIB_26__.func_617(0);
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

int func_172()//Position - 0xAE85
{
	if (BitTest(uLocal_49, 0))
	{
		if (__LIB_1__.func_183(iLocal_51))
		{
			if (BitTest(uLocal_49, 1))
			{
				if ((__LIB_12__.func_54(0) || __LIB_12__.func_54(2)) || __LIB_12__.func_54(1))
				{
					__LIB_26__.func_607(46, 1);
					func_173();
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_173()//Position - 0xAED2
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
			__LIB_39__.func_933(iLocal_51, Local_52, fLocal_53, 25, 1);
			MISC::SET_BIT(&uLocal_49, 14);
			__LIB_11__.func_696(iLocal_51);
		}
	}
}

void func_176()//Position - 0xAFAB
{
	if (BitTest(uLocal_49, 0) && BitTest(uLocal_49, 1))
	{
		if (!BitTest(uLocal_49, 11))
		{
			__LIB_26__.func_617(1);
		}
	}
	else if (BitTest(uLocal_49, 11))
	{
		__LIB_26__.func_617(0);
	}
}

void func_177()//Position - 0xAFE1
{
	if ((BitTest(uLocal_49, 0) && Global_43052 == 15) && !__LIB_0__.func_510())
	{
		if (iLocal_38 == 0)
		{
			if (!BitTest(uLocal_49, 1))
			{
				if (!__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_50, 5f, 1))
				{
					if (BitTest(uLocal_49, 20) || func_135())
					{
						if ((__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()) && !BitTest(uLocal_47[0], 17)) && !BitTest(uLocal_47[1], 18))
						{
							if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
							{
								__LIB_26__.func_611(24, 46);
								if (BitTest(uLocal_49, 0))
								{
									if (!func_207() && func_187(ENTITY::GET_ENTITY_COORDS(iLocal_51, true)))
									{
										if (func_184(iLocal_51))
										{
											if (__LIB_26__.func_610(iLocal_51))
											{
												MISC::SET_BIT(&uLocal_49, 1);
												if (__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) == 0)
												{
													__LIB_20__.func_806(7);
													__LIB_26__.func_607(7, 1);
												}
												else
												{
													__LIB_20__.func_806(8);
													__LIB_26__.func_607(8, 1);
												}
												Local_50 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
												return;
											}
										}
									}
									if (BitTest(uLocal_49, 20))
									{
										__LIB_26__.func_607(46, 0);
										MISC::CLEAR_BIT(&uLocal_49, 20);
										iLocal_245 = -1;
									}
									Local_50 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
								}
							}
							else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								__LIB_26__.func_611(7, 8);
								if (BitTest(uLocal_49, 20))
								{
									MISC::CLEAR_BIT(&uLocal_49, 20);
									iLocal_245 = -1;
								}
								else
								{
									__LIB_20__.func_806(24);
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
					Local_50 = { 0f, 0f, 0f };
					MISC::CLEAR_BIT(&uLocal_49, 1);
					MISC::CLEAR_BIT(&uLocal_49, 20);
					iLocal_245 = -1;
				}
				else if (!PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!BitTest(uLocal_49, 20))
						{
							__LIB_20__.func_806(24);
						}
						__LIB_26__.func_607(24, 1);
						MISC::CLEAR_BIT(&uLocal_49, 1);
						MISC::CLEAR_BIT(&uLocal_49, 20);
						iLocal_245 = -1;
						Local_50 = { 0f, 0f, 0f };
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (__LIB_1__.func_183(iLocal_51))
					{
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != iLocal_51)
						{
							__LIB_26__.func_607(46, 0);
							__LIB_6__.func_849(0);
							__LIB_12__.func_64();
							Local_50 = { 0f, 0f, 0f };
							MISC::CLEAR_BIT(&uLocal_49, 20);
							iLocal_245 = -1;
						}
					}
				}
				else if (!func_184(iLocal_51))
				{
					__LIB_26__.func_607(35, 1);
					MISC::CLEAR_BIT(&uLocal_49, 1);
					Local_50 = { 0f, 0f, 0f };
					MISC::CLEAR_BIT(&uLocal_49, 20);
					iLocal_245 = -1;
				}
			}
		}
	}
}

int func_184(int iParam0)//Position - 0xB496
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
				__LIB_20__.func_806(38);
			}
			if (!__LIB_20__.func_754())
			{
				iVar0++;
			}
			else if (__LIB_20__.func_750())
			{
				__LIB_20__.func_806(35);
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

int func_185(struct<3> Param0)//Position - 0xB54B
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
		__LIB_20__.func_806(37);
	}
	return 0;
}

int func_187(struct<3> Param0)//Position - 0xB610
{
	if (!func_203() && !func_202(Param0))
	{
		if (!__LIB_20__.func_809())
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
				__LIB_20__.func_806(0);
			}
		}
	}
	return 0;
}

int func_188(struct<3> Param0)//Position - 0xB669
{
	if (__LIB_26__.func_570(Param0) || __LIB_20__.func_755(Param0))
	{
		if (__LIB_20__.func_750())
		{
			__LIB_20__.func_806(22);
		}
		return 1;
	}
	return 0;
}

int func_193(struct<3> Param0)//Position - 0xB7FA
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
				__LIB_20__.func_806(40);
			}
			return 1;
		}
		else
		{
			if (__LIB_20__.func_750())
			{
				__LIB_20__.func_806(41);
			}
			return 1;
		}
	}
	return 0;
}

int func_202(struct<3> Param0)//Position - 0xC81A
{
	if (Param0.f_2 < -90f)
	{
		return 1;
	}
	if ((SYSTEM::VDIST2(Param0, -89.377f, 92.6583f, 71.2349f) <= 400f || SYSTEM::VDIST2(Param0, -62.0307f, -1839.8585f, 25.6787f) <= 400f) || SYSTEM::VDIST2(Param0, -234.7648f, -1150.3105f, 21.9224f) <= 400f)
	{
		__LIB_20__.func_806(21);
		return 1;
	}
	return 0;
}

int func_203()//Position - 0xC8A4
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

void func_204(int iParam0)//Position - 0xC8F6
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		__LIB_20__.func_806(32);
	}
	else if (iParam0 == 5 || iParam0 == 6)
	{
		__LIB_20__.func_806(33);
	}
	else if ((iParam0 == 2 || iParam0 == 3) || iParam0 == 4)
	{
		__LIB_20__.func_806(34);
	}
}

int func_207()//Position - 0xC9F7
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 855.72577f, -2344.4907f, 29.33145f) <= 52900f)
	{
		if (__LIB_20__.func_750())
		{
			__LIB_20__.func_806(28);
		}
		return 1;
	}
	else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1383.2102f, -2068.0198f, 51.87057f) <= 160000f)
	{
		if (__LIB_20__.func_750())
		{
			__LIB_20__.func_806(29);
		}
		return 1;
	}
	return 0;
}

void func_210()//Position - 0xCAE1
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
					if (!func_221())
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
										if (func_214(iVar0) && !__LIB_12__.func_71())
										{
											if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
											{
												if (__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) == 0)
												{
													__LIB_20__.func_806(17);
												}
												else
												{
													__LIB_20__.func_806(18);
												}
												iLocal_51 = iVar0;
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_51, true, true);
												if (DECORATOR::DECOR_SET_BOOL(iLocal_51, "GetawayVehicleValid", true))
												{
												}
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
								else if (__LIB_12__.func_70(iVar0))
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
						__LIB_26__.func_611(17, 46);
						__LIB_26__.func_611(18, 46);
						__LIB_26__.func_611(14, 46);
						__LIB_12__.func_64();
					}
					else if (func_221())
					{
						__LIB_0__.func_106(&iLocal_51);
						__LIB_12__.func_64();
					}
				}
				else if (!__LIB_26__.func_612(iLocal_51))
				{
					if (DECORATOR::DECOR_SET_BOOL(iLocal_51, "GetawayVehicleValid", false))
					{
					}
					__LIB_26__.func_611(17, 46);
					__LIB_26__.func_611(18, 46);
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

int func_214(int iParam0)//Position - 0xCE74
{
	if (__LIB_26__.func_613() && func_215(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_215(int iParam0)//Position - 0xCE93
{
	if ((__LIB_32__.func_838(iParam0) && !__LIB_20__.func_810(iParam0)) && __LIB_26__.func_612(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_221()//Position - 0xD034
{
	int iVar0;
	if (__LIB_20__.func_757(&iVar0))
	{
		if (!DECORATOR::DECOR_EXIST_ON(iVar0, "Getaway_Winched"))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "Getaway_Winched", true);
			__LIB_20__.func_806(16);
			return 1;
		}
		else if (DECORATOR::DECOR_GET_BOOL(iVar0, "Getaway_Winched"))
		{
			return 0;
		}
	}
	return 0;
}

void func_235()//Position - 0xD87A
{
	if (__LIB_0__.func_198())
	{
		if (BitTest(uLocal_49, 2))
		{
			if (__LIB_1__.func_183(iLocal_51))
			{
				__LIB_39__.func_933(iLocal_51, Local_52, fLocal_53, 25, 1);
				__LIB_0__.func_106(&iLocal_51);
			}
			MISC::CLEAR_BIT(&uLocal_49, 2);
		}
		__LIB_26__.func_607(46, 1);
		__LIB_26__.func_617(0);
	}
}

void func_236()//Position - 0xD8C1
{
	if (!__LIB_26__.func_616())
	{
		if (!__LIB_0__.func_511())
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					__LIB_39__.func_936();
				}
			}
		}
	}
	else if (iLocal_37 != 3)
	{
		func_237();
	}
}

void func_237()//Position - 0xD902
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
			__LIB_39__.func_933(iLocal_51, Local_52, fLocal_53, 25, 1);
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
			__LIB_26__.func_617(0);
			if (__LIB_12__.func_60())
			{
				__LIB_26__.func_607(1, 1);
			}
			else
			{
				__LIB_26__.func_607(0, 1);
			}
		}
		iLocal_37 = 3;
	}
}

void func_244()//Position - 0xDBF9
{
	if (!BitTest(uLocal_49, 13))
	{
		if (__LIB_20__.func_811())
		{
			MISC::SET_BIT(&uLocal_49, 13);
		}
	}
	else if (!__LIB_20__.func_811())
	{
		MISC::CLEAR_BIT(&uLocal_49, 7);
		MISC::CLEAR_BIT(&uLocal_49, 0);
		MISC::CLEAR_BIT(&uLocal_49, 1);
		MISC::CLEAR_BIT(&uLocal_49, 13);
	}
}

int func_246(int iParam0)//Position - 0xDC93
{
	return __LIB_20__.func_812(iParam0, 6, 1);
}

