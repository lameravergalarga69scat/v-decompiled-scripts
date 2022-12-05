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
	var uLocal_71 = 0;
	var uLocal_72 = 0;
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
	int* iLocal_245 = NULL;
	var uLocal_246 = 0;
	int iLocal_247 = 0;
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
	if (!__LIB_0__.func_513(31))
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
		else if (iLocal_37 == 1)
		{
		}
	}
	else
	{
		__LIB_18__.func_203("AM_H_PREP8" /* GXT: A getaway vehicle is required for this setup. */, 2, 0, -1, 10000, 7, 0, 0, 0);
		Global_113386.f_10049.f_128 = iLocal_37;
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
		{
			__LIB_26__.func_617(0);
			func_251();
			__LIB_20__.func_813(31, 1);
		}
		else
		{
			func_251();
			__LIB_20__.func_813(31, 0);
		}
	}
	__LIB_32__.func_842(2);
	Local_50 = { -166.1555f, -621.9833f, 31.4281f };
	while (true)
	{
		if (__LIB_0__.func_176(85))
		{
			__LIB_19__.func_856("AM_H_PREP8" /* GXT: A getaway vehicle is required for this setup. */, 1);
			__LIB_20__.func_813(31, 0);
		}
		if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
		{
			func_231();
			func_223();
			func_222();
			__LIB_38__.func_181();
			switch (iLocal_37)
			{
				case 0:
					func_172();
					break;
				case 1:
					func_139();
					break;
				case 2:
					func_138();
					break;
				case 3:
					func_131();
					break;
				case 4:
					func_16(34);
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

void func_16(int iParam0)//Position - 0x5C5
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

void func_17()//Position - 0x767
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
						func_21(iLocal_51, Local_52, fLocal_53, 25, 1);
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

void func_21(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)//Position - 0x9DE
{
	struct<60> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[25], false))
			{
				if (Global_77137.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		__LIB_20__.func_278(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		__LIB_6__.func_760(iParam0, &Var0);
		if (__LIB_0__.func_78(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_78125 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		__LIB_26__.func_263(iParam3, &Var0, Param1, fParam2, __LIB_0__.func_119(iParam0));
		func_22(iParam3, iParam0, 0);
	}
}

void func_22(int iParam0, int iParam1, int iParam2)//Position - 0xB07
{
	int iVar0;
	if (iParam0 == -1)
	{
		return;
	}
	if (!__LIB_12__.func_98(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_77137.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_77137.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_78044 != -1 && Global_78044 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, true, true);
			}
			if (iParam0 == 24)
			{
				Global_113386.f_32749.f_4801 = __LIB_18__.func_240();
			}
			if (iParam1 != Global_77137.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = __LIB_0__.func_314(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && iParam1 != iVar0)
					{
						func_23(iVar0, 145);
					}
				}
				Global_78043 = iParam1;
				Global_78044 = iParam0;
				Global_78045 = iParam2;
			}
		}
	}
}

void func_23(int iParam0, int iParam1)//Position - 0xC1E
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_26__.func_608(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_One"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113386.f_2363.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113386.f_32749.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113386.f_32749.f_5590 = iParam1;
	Global_78042 = iParam0;
	Global_113386.f_32749.f_5588 = 1;
	__LIB_6__.func_760(iParam0, &(Global_113386.f_32749.f_5510));
}

void func_131()//Position - 0x8611
{
	func_132();
}

void func_132()//Position - 0x861D
{
	__LIB_36__.func_110();
	func_133();
}

void func_133()//Position - 0x862D
{
	if (__LIB_9__.func_611() == 85)
	{
		if (__LIB_0__.func_294() && !__LIB_0__.func_61(25, 0))
		{
			if (Local_54.f_66 != 0)
			{
				__LIB_26__.func_263(25, &Local_54, Local_52, fLocal_53, 145);
			}
		}
	}
}

void func_138()//Position - 0x8746
{
	func_17();
	__LIB_42__.func_419();
}

void func_139()//Position - 0x8756
{
	func_153();
	func_149();
	func_146();
	__LIB_42__.func_419();
	if (__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_50, 150f, 1) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -176.9431f, -651.257f, 31.2136f, -150.9563f, -579.7476f, 35.4245f, 50f, false, true, 0))
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Local_50, 6f, false, true, false, false, false, false, 0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-169.42528f, -622.0479f, 31.42444f, -162.27617f, -620.50903f, 35.42448f, false, true);
	}
	if (!BitTest(uLocal_49, 18))
	{
		if (!__LIB_0__.func_77(0) && !__LIB_0__.func_509())
		{
			__LIB_0__.func_210(sLocal_45[4], 7500, 0);
			MISC::SET_BIT(&uLocal_49, 18);
		}
	}
	if (BitTest(uLocal_49, 0))
	{
		if (BitTest(uLocal_49, 1))
		{
			PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
			__LIB_0__.func_523(&iLocal_245);
			if (!iLocal_247)
			{
				iLocal_247 = 1;
				if (!__LIB_0__.func_405("PRC_GETOUT", 0, 0))
				{
					__LIB_0__.func_210("PRC_GETOUT", 7500, 0);
				}
			}
			if (__LIB_1__.func_183(iLocal_51))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_51, false))
				{
					if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_51))
					{
						func_141();
						__LIB_0__.func_56(&uLocal_246);
						__LIB_0__.func_503(35, 0);
						if (__LIB_0__.func_405("PRC_GETOUT", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-169.42528f, -622.0479f, 31.42444f, -162.27617f, -620.50903f, 35.42448f, true, true);
						__LIB_26__.func_566(4, 0);
					}
				}
			}
		}
		else
		{
			if (__LIB_0__.func_405("PRC_GETOUT", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			iLocal_247 = 0;
		}
	}
	else
	{
		MISC::CLEAR_BIT(&uLocal_49, 18);
		__LIB_0__.func_56(&uLocal_246);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-169.42528f, -622.0479f, 31.42444f, -162.27617f, -620.50903f, 35.42448f, true, true);
		__LIB_26__.func_566(0, 1);
	}
}

void func_141()//Position - 0x895A
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
			func_21(iLocal_51, Local_52, fLocal_53, 25, 1);
			MISC::SET_BIT(&uLocal_49, 14);
			__LIB_11__.func_696(iLocal_51);
		}
	}
}

void func_146()//Position - 0x8A41
{
	switch (iLocal_38)
	{
		case 0:
			if (((!HUD::DOES_BLIP_EXIST(iLocal_245) && BitTest(uLocal_49, 0)) && !BitTest(uLocal_49, 1)) && BitTest(uLocal_49, 18))
			{
				iLocal_245 = __LIB_0__.func_392(Local_50, 1);
				PATHFIND::SET_IGNORE_NO_GPS_FLAG(true);
			}
			break;
		case 1:
			__LIB_0__.func_523(&iLocal_245);
			PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
			break;
		case 2:
			break;
	}
}

void func_149()//Position - 0x8AF3
{
	if (__LIB_0__.func_368(35))
	{
		if (iLocal_38 == 0)
		{
			if (!BitTest(uLocal_49, 1))
			{
				if (__LIB_1__.func_183(iLocal_51))
				{
					ENTITY::IS_ENTITY_AT_COORD(iLocal_51, Local_50, 4f, 4f, 2f, true, true, 0);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_51, -168.81618f, -619.9002f, 31.42446f, -162.64235f, -622.0781f, 33.42446f, 4.14f, false, true, 0))
					{
						__LIB_26__.func_611(24, 46);
						if (__LIB_26__.func_610(iLocal_51))
						{
							if (__LIB_12__.func_39(1077936128, 1))
							{
								MISC::SET_BIT(&uLocal_49, 1);
							}
						}
					}
				}
			}
			else if (BitTest(uLocal_49, 0))
			{
				if (!__LIB_0__.func_530(iLocal_51, Local_50, 10f, 1) || ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_51))
				{
					MISC::CLEAR_BIT(&uLocal_49, 1);
				}
			}
		}
	}
}

void func_153()//Position - 0x8D38
{
	int iVar0;
	int iVar1;
	if ((Global_43052 == 15 && !__LIB_0__.func_510()) || __LIB_0__.func_368(35))
	{
		if (iLocal_38 == 0)
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (!BitTest(uLocal_49, 0))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!BitTest(uLocal_49, 7))
						{
							iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (__LIB_1__.func_183(iVar0))
							{
								if (!__LIB_12__.func_72(iVar0))
								{
									if (func_163(iVar0) && !__LIB_12__.func_71())
									{
										if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
										{
											if (!BitTest(uLocal_49, 19))
											{
												__LIB_20__.func_806(9);
												MISC::SET_BIT(&uLocal_49, 19);
											}
											else if (__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) == 0)
											{
												__LIB_20__.func_806(17);
											}
											else
											{
												__LIB_20__.func_806(18);
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
						__LIB_20__.func_806(5);
						MISC::SET_BIT(&uLocal_49, 8);
						__LIB_0__.func_106(&iLocal_51);
						MISC::CLEAR_BIT(&uLocal_49, 0);
						MISC::CLEAR_BIT(&uLocal_49, 7);
						func_251();
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
							if (__LIB_20__.func_750())
							{
								__LIB_6__.func_849(0);
							}
							func_251();
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
						func_251();
						__LIB_12__.func_64();
					}
				}
				else
				{
					__LIB_0__.func_106(&iLocal_51);
					__LIB_12__.func_64();
					func_251();
				}
			}
		}
	}
}

int func_163(int iParam0)//Position - 0x921E
{
	if ((__LIB_26__.func_613() && func_165(iParam0)) && func_164(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_164(int iParam0)//Position - 0x9248
{
	int iVar0;
	iVar0 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
	if (iVar0 >= 3)
	{
		return 1;
	}
	__LIB_20__.func_806(15);
	return 0;
}

int func_165(int iParam0)//Position - 0x9269
{
	if ((__LIB_32__.func_838(iParam0) && !func_166(iParam0)) && __LIB_26__.func_612(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0)//Position - 0x9296
{
	int iVar0;
	iVar0 = __LIB_0__.func_119(iParam0);
	if (iVar0 == 0)
	{
		__LIB_20__.func_806(25);
		return 1;
	}
	if (iVar0 == 1)
	{
		__LIB_20__.func_806(26);
		return 1;
	}
	if (iVar0 == 2)
	{
		__LIB_20__.func_806(27);
		return 1;
	}
	if (__LIB_0__.func_108(iParam0))
	{
		__LIB_20__.func_806(14);
		return 1;
	}
	return 0;
}

void func_172()//Position - 0x942D
{
	int iVar0;
	func_153();
	__LIB_42__.func_419();
	func_210();
	if (func_208())
	{
		if (func_202(&uLocal_246) && __LIB_41__.func_675(&iVar0))
		{
			__LIB_26__.func_617(0);
			if (iVar0 == 1)
			{
				__LIB_26__.func_566(iVar0, 0);
			}
			else
			{
				__LIB_26__.func_566(iVar0, 1);
			}
		}
	}
}

int func_202(var uParam0)//Position - 0xBAB0
{
	switch (__LIB_18__.func_219(uParam0, 1, 5, 0, 0))
	{
		case 1:
			return 1;
			break;
		case 0:
			__LIB_0__.func_503(35, 0);
			__LIB_6__.func_849(0);
			return 0;
			break;
		case 2:
			__LIB_0__.func_503(35, 1);
			return 0;
			break;
	}
	return 0;
}

int func_208()//Position - 0xBE9C
{
	if (BitTest(uLocal_49, 0))
	{
		if (__LIB_1__.func_183(iLocal_51))
		{
			if (__LIB_12__.func_54(12))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_210()//Position - 0xBF0B
{
	if (BitTest(uLocal_49, 0))
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

void func_222()//Position - 0xC56E
{
	if (__LIB_0__.func_198())
	{
		if (BitTest(uLocal_49, 2))
		{
			if (__LIB_1__.func_183(iLocal_51))
			{
				func_21(iLocal_51, Local_52, fLocal_53, 25, 1);
				__LIB_0__.func_106(&iLocal_51);
			}
			MISC::CLEAR_BIT(&uLocal_49, 2);
		}
		__LIB_26__.func_607(46, 1);
		__LIB_26__.func_617(0);
	}
}

void func_223()//Position - 0xC5B5
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
		func_224();
	}
}

void func_224()//Position - 0xC5F6
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
			func_21(iLocal_51, Local_52, fLocal_53, 25, 1);
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

void func_231()//Position - 0xC8ED
{
	if (!BitTest(uLocal_49, 13))
	{
		if (__LIB_36__.func_112())
		{
			MISC::SET_BIT(&uLocal_49, 13);
		}
	}
	else if (!__LIB_36__.func_112())
	{
		MISC::CLEAR_BIT(&uLocal_49, 7);
		MISC::CLEAR_BIT(&uLocal_49, 0);
		MISC::CLEAR_BIT(&uLocal_49, 1);
		MISC::CLEAR_BIT(&uLocal_49, 13);
	}
}

void func_251()//Position - 0xE9E9
{
	if (__LIB_0__.func_368(35))
	{
		__LIB_0__.func_503(35, 0);
		__LIB_0__.func_56(&uLocal_246);
	}
	__LIB_0__.func_523(&iLocal_245);
}

