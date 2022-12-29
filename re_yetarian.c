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
	var uLocal_44 = 0;
	struct<20> Local_45[2];
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int* iLocal_49 = NULL;
	int* iLocal_50 = NULL;
	int iLocal_51 = 0;
	int* iLocal_52 = NULL;
	int* iLocal_53 = NULL;
	int* iLocal_54 = NULL;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	struct<3> Local_57 = { 0, 0, 0 } ;
	float fLocal_58 = 0f;
	struct<3> Local_59 = { 0, 0, 0 } ;
	float fLocal_60 = 0f;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	bool bLocal_63 = 0;
	bool bLocal_64 = 0;
	bool bLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70[2] = { 0, 0 };
	int iLocal_71 = 0;
	bool bLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_80[2];
	float fLocal_81[2] = { 0f, 0f };
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	char[] cLocal_91[8] = 0;
	var uLocal_92 = 16;
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
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	struct<2> Local_257 = { 0, 5 } ;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 5;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	float fVar0;
	int iVar1;
	int iVar2;
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
	iLocal_12 = 3;
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
	iLocal_55 = -1;
	iLocal_56 = -1;
	iLocal_74 = joaat("p_amb_phone_01");
	Local_78 = { -35.607f, -1110.0458f, 26.4364f };
	Local_79 = { -126.1154f, -1129.3466f, 23.4329f };
	iLocal_83 = -1;
	iLocal_84 = -1;
	iLocal_85 = -1;
	iLocal_86 = -1;
	cLocal_91 = "REYE_AU";
	__LIB_39__::func_94(ScriptParam_257.f_1[0 /*3*/]);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(27))
	{
		func_172();
	}
	if (func_145(ScriptParam_257.f_1[0 /*3*/], 30, 0, 0, 0))
	{
		__LIB_39__::func_9(30);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_130();
	while (true)
	{
		if (!__LIB_39__::func_8())
		{
			if (func_128())
			{
				func_100();
			}
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("DEALERSHIP"))
		{
			if (TASK::IS_SCENARIO_GROUP_ENABLED("DEALERSHIP"))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("DEALERSHIP", false);
			}
		}
		fVar0 = (CAM::REPLAY_GET_MAX_DISTANCE_ALLOWED_FROM_PLAYER() + 20f);
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_57) < (fVar0 * fVar0))
		{
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_59) < (fVar0 * fVar0))
		{
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		}
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				func_97(iVar1);
				iVar1++;
			}
			switch (iLocal_46)
			{
				case 0:
					func_79();
					break;
				case 1:
					func_61();
					break;
				case 2:
					func_3();
					break;
			}
		}
		else if (bLocal_72)
		{
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 2)
			{
				func_97(iVar2);
				iVar2++;
			}
			switch (iLocal_46)
			{
				case 0:
					func_79();
					break;
				case 1:
					func_61();
					break;
				case 2:
					func_3();
					break;
			}
			if (__LIB_0__::func_121(iLocal_48))
			{
				if (__LIB_0__::func_76(iLocal_48, PLAYER::PLAYER_PED_ID(), 1) > 120f)
				{
					func_100();
				}
			}
		}
		else
		{
			func_100();
		}
		SYSTEM::WAIT(0);
	}
}

void func_3()//Position - 0x2C1
{
	switch (iLocal_47)
	{
		case 0:
			if (func_60())
			{
				iLocal_47 = 1;
			}
			func_59();
			break;
		case 1:
			func_59();
			if (__LIB_0__::func_121(iLocal_48))
			{
				if (func_58())
				{
					if (!iLocal_66)
					{
						iLocal_67 = 1;
						iLocal_62 = 1;
						TASK::CLEAR_PED_TASKS(iLocal_48);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
						{
							OBJECT::DELETE_OBJECT(&iLocal_52);
						}
						if (!bLocal_64)
						{
							if (!bLocal_65)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1500);
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
							}
							TASK::TASK_PERFORM_SEQUENCE(iLocal_48, iLocal_87);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
							iLocal_66 = 1;
						}
						else
						{
							if (!bLocal_65)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								if (__LIB_0__::func_76(iLocal_48, PLAYER::PLAYER_PED_ID(), 1) <= 4f)
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1500);
								}
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, true, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, true, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
							}
							TASK::TASK_PERFORM_SEQUENCE(iLocal_48, iLocal_87);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
							iLocal_66 = 1;
						}
					}
					else
					{
						func_36();
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_48, 2f);
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_48, false), true) >= 100f && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_48, false), 3f))
						{
							PED::DELETE_PED(&iLocal_48);
						}
						if (Local_45[0 /*20*/].f_18 >= 5 && Local_45[1 /*20*/].f_18 >= 5)
						{
							func_4();
						}
					}
				}
				else
				{
					func_36();
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_48, 2f);
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_48, false), true) >= 100f && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_48, false), 3f))
					{
						PED::DELETE_PED(&iLocal_48);
					}
					if (Local_45[0 /*20*/].f_18 >= 5 && Local_45[1 /*20*/].f_18 >= 5)
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -69.623955f, -1087.3695f, 24.598333f, -11.278607f, -1108.2798f, 34.17205f, 47.5f, false, true, 0))
						{
							func_4();
						}
					}
					if (__LIB_0__::func_121(iLocal_48))
					{
						PED::SET_PED_RESET_FLAG(iLocal_48, 60, true);
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_51))
				{
					HUD::REMOVE_BLIP(&iLocal_51);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_48))
				{
					if (ENTITY::IS_ENTITY_DEAD(iLocal_48, false))
					{
						if (!iLocal_73)
						{
							iLocal_73 = 1;
						}
					}
				}
				iLocal_67 = 1;
				if (Local_45[0 /*20*/].f_18 >= 5 && Local_45[1 /*20*/].f_18 >= 5)
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -69.623955f, -1087.3695f, 24.598333f, -11.278607f, -1108.2798f, 34.17205f, 47.5f, false, true, 0))
					{
						func_4();
					}
				}
			}
			break;
	}
}

void func_4()//Position - 0x5C0
{
	__LIB_0__::func_124(&iLocal_48, 1, 0, 1);
	while (!__LIB_0__::func_109())
	{
		SYSTEM::WAIT(0);
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_SIMEON_01", 0f);
	}
	func_8(-1, 0);
	__LIB_14__::func_557();
	func_100();
}

void func_8(int iParam0, int iParam1)//Position - 0x684
{
	if (iParam0 == -1)
	{
		iParam0 = __LIB_38__::func_999();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= __LIB_38__::func_982(iParam0))
	{
		__LIB_38__::func_996(iParam0, iParam1);
		if (!__LIB_0__::func_67(51))
		{
			__LIB_0__::func_697("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, func_22(), 0, 138, 0);
			__LIB_0__::func_592(51);
		}
		if (__LIB_38__::func_981(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (__LIB_38__::func_995(iParam0, iParam1) != 322)
		{
			__LIB_39__::func_10(__LIB_38__::func_995(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113374 = iParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				__LIB_38__::func_994(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				__LIB_38__::func_994(7);
			}
			else
			{
				__LIB_38__::func_994(1);
			}
		}
	}
}

int func_22()//Position - 0x14AF
{
	__LIB_32__::func_97();
	switch (Global_113386.f_2363.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		case 1:
			return 2;
			break;
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_36()//Position - 0x19D9
{
	if (iLocal_68 == 0)
	{
		if (!__LIB_0__::func_75())
		{
			if (__LIB_0__::func_121(Local_45[0 /*20*/].f_1))
			{
				__LIB_0__::func_222(&uLocal_92, 5, Local_45[0 /*20*/].f_1, "YETARIAN_GOON", 0, 1);
			}
			else if (__LIB_0__::func_121(Local_45[1 /*20*/].f_1))
			{
				__LIB_0__::func_222(&uLocal_92, 5, Local_45[1 /*20*/].f_1, "YETARIAN_GOON", 0, 1);
			}
			else
			{
				iLocal_68 = 1;
				iLocal_69 = 1;
			}
			if (iLocal_68 == 0)
			{
				if (__LIB_33__::func_611() == 0)
				{
					if (__LIB_39__::func_504(&uLocal_92, cLocal_91, "RE_YETA_MIKE", 7, 0, 0, 0))
					{
						iLocal_68 = 1;
					}
				}
				else if (__LIB_39__::func_504(&uLocal_92, cLocal_91, "RE_YETA_FRAN", 7, 0, 0, 0))
				{
					iLocal_68 = 1;
				}
			}
		}
	}
	else if (iLocal_69 == 0)
	{
		if (!__LIB_0__::func_75())
		{
			if (__LIB_0__::func_121(Local_45[0 /*20*/].f_1))
			{
				__LIB_0__::func_640(Local_45[0 /*20*/].f_1, "FIGHT", 34);
				iLocal_69 = 1;
			}
			else if (__LIB_0__::func_121(Local_45[1 /*20*/].f_1))
			{
				__LIB_0__::func_640(Local_45[1 /*20*/].f_1, "FIGHT", 34);
				iLocal_69 = 1;
			}
			else
			{
				iLocal_69 = 1;
			}
		}
	}
}

int func_58()//Position - 0x24FB
{
	if (__LIB_0__::func_121(iLocal_48))
	{
		if (!bLocal_64)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_48, false), true) <= 7f || TASK::GET_SCRIPT_TASK_STATUS(iLocal_48, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
			{
				if (!iLocal_66)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_48, false), true) <= 7f)
					{
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_48, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
					{
					}
				}
				return 1;
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_48, false), true) <= 4.5f || TASK::GET_SCRIPT_TASK_STATUS(iLocal_48, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
		{
			if (!iLocal_66)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_48, false), true) <= 4.5f)
				{
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_48, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
				{
				}
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_59()//Position - 0x25E5
{
	if (__LIB_0__::func_121(iLocal_48))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_48, "cellphone@", "cellphone_call_out", 3))
		{
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_48, "cellphone@", "cellphone_call_out") >= 0.24f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
				{
					OBJECT::DELETE_OBJECT(&iLocal_52);
				}
			}
		}
	}
}

int func_60()//Position - 0x262E
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Local_45[0 /*20*/].f_10);
	if (iVar0 != 0)
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar0);
		if (INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_61()//Position - 0x265F
{
	switch (iLocal_47)
	{
		case 0:
			iLocal_47 = 1;
			break;
		case 1:
			if (func_60())
			{
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1831288286))
				{
					OBJECT::ADD_DOOR_TO_SYSTEM(-1831288286, joaat("v_ilev_fib_door1"), -31.72f, -1101.85f, 26.57f, true, true, false);
				}
				else if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-1831288286) < 1f)
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1831288286, 1f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1831288286, 1, false, true);
				}
			}
			func_59();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__::func_121(iLocal_49) || __LIB_0__::func_121(iLocal_50))
				{
					if (func_65())
					{
						if (iLocal_71 == 0)
						{
							if (bLocal_63)
							{
								TASK::CLEAR_PED_TASKS(iLocal_48);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 12, 2);
								TASK::TASK_PLAY_ANIM(0, "cellphone@", "cellphone_call_out", 8f, -8f, -1, 0, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_48, iLocal_87);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
							}
							else
							{
								TASK::CLEAR_PED_TASKS(iLocal_48);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 12, 2);
								TASK::TASK_PLAY_ANIM(0, "cellphone@", "cellphone_call_out", 8f, -8f, -1, 0, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_48, iLocal_87);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
							}
							bLocal_72 = true;
							iLocal_71 = 1;
						}
						if (!bLocal_64 && !bLocal_63)
						{
							if (iLocal_55 == -1)
							{
								iLocal_55 = MISC::GET_GAME_TIMER();
							}
							if (iLocal_56 == -1)
							{
								iLocal_56 = 4000;
							}
						}
						else
						{
							if (iLocal_55 == -1)
							{
								iLocal_55 = MISC::GET_GAME_TIMER();
							}
							if (iLocal_56 == -1)
							{
								iLocal_56 = 1000;
							}
						}
						if (iLocal_55 != -1 && iLocal_56 != 1)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_55) >= iLocal_56)
							{
								func_62();
								AUDIO::TRIGGER_MUSIC_EVENT("RE9_SPOTTED");
								iLocal_61 = 1;
								iLocal_47 = 2;
							}
						}
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_51))
					{
						HUD::REMOVE_BLIP(&iLocal_51);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_48))
					{
						if (ENTITY::IS_ENTITY_DEAD(iLocal_48, false))
						{
							if (!iLocal_73)
							{
								iLocal_73 = 1;
							}
						}
					}
					iLocal_67 = 1;
					if (Local_45[0 /*20*/].f_18 >= 5 && Local_45[1 /*20*/].f_18 >= 5)
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -69.623955f, -1087.3695f, 24.598333f, -11.278607f, -1108.2798f, 34.17205f, 47.5f, false, true, 0))
						{
							func_4();
						}
					}
				}
			}
			break;
		case 2:
			iLocal_46 = 2;
			iLocal_47 = 0;
			break;
	}
}

void func_62()//Position - 0x28B7
{
	if (__LIB_33__::func_611() == 1)
	{
		__LIB_0__::func_222(&uLocal_92, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else
	{
		__LIB_0__::func_222(&uLocal_92, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	__LIB_0__::func_222(&uLocal_92, 4, iLocal_48, "SIMEON", 0, 1);
	if (bLocal_65)
	{
		__LIB_39__::func_504(&uLocal_92, cLocal_91, "RE_YETA_SNIP", 7, 0, 0, 0);
	}
	else if (bLocal_63)
	{
		__LIB_39__::func_504(&uLocal_92, cLocal_91, "RE_YETA_EXT", 7, 1, 0, 0);
	}
	else if (func_63())
	{
		if (__LIB_33__::func_611() == 0)
		{
			__LIB_39__::func_504(&uLocal_92, cLocal_91, "RE_YETAM", 7, 0, 0, 0);
		}
		else if (__LIB_33__::func_611() == 1)
		{
			__LIB_39__::func_504(&uLocal_92, cLocal_91, "RE_YETAF", 7, 0, 0, 0);
		}
	}
	else
	{
		__LIB_39__::func_504(&uLocal_92, cLocal_91, "RE_YETA_SNIP", 7, 0, 0, 0);
	}
}

int func_63()//Position - 0x297D
{
	if ((((((((__LIB_2__::func_85(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED") && __LIB_2__::func_85(PLAYER::PLAYER_PED_ID()) != joaat("OBJECT")) && __LIB_2__::func_85(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_KNIFE")) && __LIB_2__::func_85(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_NIGHTSTICK")) && __LIB_2__::func_85(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_HAMMER")) && __LIB_2__::func_85(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_BAT")) && __LIB_2__::func_85(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_CROWBAR")) && __LIB_2__::func_85(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_GOLFCLUB")) && __LIB_2__::func_85(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_BOTTLE"))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_65()//Position - 0x2A66
{
	if (!PED::IS_COP_PED_IN_AREA_3D(Local_78, Local_79) && !(MISC::IS_POSITION_OCCUPIED(-61.013214f, -1093.393f, 25.752972f, 2f, false, true, false, false, false, 0, false) && MISC::IS_POSITION_OCCUPIED(-38.596832f, -1109.284f, 25.687418f, 2f, false, true, false, false, false, 0, false)))
	{
		if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("rm_showroom"))
		{
			if (!__LIB_39__::func_8())
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -41.19015f, -1104.1372f, 24.42232f, -33.7943f, -1107.1835f, 28.67232f, 8.5f, false, true, 0))
				{
					bLocal_64 = true;
					func_77(0);
				}
				else
				{
					bLocal_64 = false;
					func_77(1);
				}
				__LIB_39__::func_11(1);
			}
			return 1;
		}
	}
	else if (PED::IS_COP_PED_IN_AREA_3D(Local_78, Local_79) || (MISC::IS_POSITION_OCCUPIED(-61.013214f, -1093.393f, 25.752972f, 2f, false, true, false, false, false, 0, false) && MISC::IS_POSITION_OCCUPIED(-38.596832f, -1109.284f, 25.687418f, 2f, false, true, false, false, false, 0, false)))
	{
		if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("rm_showroom"))
		{
			__LIB_0__::func_124(&(Local_45[0 /*20*/].f_1), 1, 0, 1);
			__LIB_0__::func_124(&(Local_45[1 /*20*/].f_1), 1, 0, 1);
			__LIB_0__::func_0(&iLocal_50);
			__LIB_0__::func_0(&iLocal_49);
			func_100();
		}
	}
	return 0;
}

void func_77(bool bParam0)//Position - 0x3154
{
	if (bParam0)
	{
		if (__LIB_0__::func_121(iLocal_50))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_50, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_50, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_50, true);
			iLocal_48 = iLocal_50;
			iLocal_52 = iLocal_54;
			__LIB_0__::func_0(&iLocal_49);
			__LIB_0__::func_123(&iLocal_53);
		}
	}
	else if (__LIB_0__::func_121(iLocal_49))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_49, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_49, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_49, true);
		iLocal_48 = iLocal_49;
		iLocal_52 = iLocal_53;
		__LIB_0__::func_0(&iLocal_50);
		__LIB_0__::func_123(&iLocal_54);
	}
}

void func_79()//Position - 0x31F5
{
	switch (iLocal_47)
	{
		case 0:
			if (func_96())
			{
				iLocal_47 = 1;
			}
			else if (func_84())
			{
				func_100();
			}
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-51.89f, -1097.35f, 23.42f, -45.71f, -1092.1f, 27.42f, false, true);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-53.575745f, -1095.3564f, 24.17232f, -46.52551f, -1094.5872f, 27.42232f, 3.75f, false, false, false, false, false, 0, 0);
			break;
		case 1:
			if (!__LIB_0__::func_121(iLocal_49) || !__LIB_0__::func_121(iLocal_50))
			{
				__LIB_0__::func_648(&iLocal_49, 18, Local_57, fLocal_58, 1);
				if (__LIB_0__::func_121(iLocal_49))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_49, false, false);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_49, false);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_49, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_49, iLocal_90);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_49, true);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_49, joaat("WEAPON_PISTOL"), 999, false, false);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_49, false, iLocal_88);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_88, joaat("PLAYER"));
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_49, true, 1);
					PED::SET_PED_CONFIG_FLAG(iLocal_49, 104, true);
					iLocal_53 = OBJECT::CREATE_OBJECT(iLocal_74, ENTITY::GET_ENTITY_COORDS(iLocal_49, true), true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_53, iLocal_49, PED::GET_PED_BONE_INDEX(iLocal_49, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_b", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_f", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_no_a", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_d", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::SET_SEQUENCE_TO_REPEAT(iLocal_87, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_49, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_49, true);
				}
				__LIB_0__::func_648(&iLocal_50, 18, Local_59, fLocal_60, 1);
				if (__LIB_0__::func_121(iLocal_50))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_50, false, false);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_50, false);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_50, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_50, iLocal_90);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_50, true);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_50, joaat("WEAPON_PISTOL"), 999, false, false);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_50, false, iLocal_88);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_88, joaat("PLAYER"));
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_50, true, 1);
					PED::SET_PED_CONFIG_FLAG(iLocal_50, 104, true);
					iLocal_54 = OBJECT::CREATE_OBJECT(iLocal_74, ENTITY::GET_ENTITY_COORDS(iLocal_50, true), true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_54, iLocal_50, PED::GET_PED_BONE_INDEX(iLocal_50, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_b", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_f", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_no_a", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_d", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::SET_SEQUENCE_TO_REPEAT(iLocal_87, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_50, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_49, true);
				}
			}
			else
			{
				func_80();
				iLocal_75 = VEHICLE::CREATE_VEHICLE(joaat("baller2"), -46.2722f, -1097.4662f, 25.42f, 112.53633f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_75, 7);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(iLocal_75, 3);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_75, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_75, false);
				iLocal_76 = VEHICLE::CREATE_VEHICLE(joaat("tailgater"), -41.07354f, -1099.5669f, 25.42f, 138.42923f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_76, 12);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_76, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_76, false);
				iLocal_77 = VEHICLE::CREATE_VEHICLE(joaat("bjxl"), -36.744564f, -1101.5826f, 25.42f, 155.15735f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_77, 4);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(iLocal_77, 3);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_77, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_77, false);
				iLocal_47 = 2;
			}
			break;
		case 2:
			iLocal_46 = 1;
			iLocal_47 = 0;
			break;
	}
}

void func_80()//Position - 0x35F2
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_45[iVar0 /*20*/].f_18 = 1;
		iVar0++;
	}
}

int func_84()//Position - 0x3712
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
		{
			return 0;
		}
	}
	if (__LIB_39__::func_6())
	{
		return 1;
	}
	if (func_85(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_85(float fParam0, bool bParam1)//Position - 0x3798
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	iVar2 = -1;
	fVar3 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_374(__LIB_33__::func_611()))
		{
			iVar5 = func_22();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					__LIB_0__::func_432(iVar1, &Var0);
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

int func_96()//Position - 0x52EE
{
	if (((((((((((STREAMING::HAS_MODEL_LOADED(Local_45[0 /*20*/]) && STREAMING::HAS_MODEL_LOADED(Local_45[1 /*20*/])) && WEAPON::HAS_WEAPON_ASSET_LOADED(Local_45[0 /*20*/].f_17)) && WEAPON::HAS_WEAPON_ASSET_LOADED(Local_45[1 /*20*/].f_17)) && func_60()) && STREAMING::HAS_ANIM_DICT_LOADED("cellphone@")) && STREAMING::HAS_ANIM_DICT_LOADED("cellphone@str")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("reyetarian_simeonoffice")) && STREAMING::HAS_MODEL_LOADED(iLocal_74)) && STREAMING::HAS_MODEL_LOADED(joaat("bjxl"))) && STREAMING::HAS_MODEL_LOADED(joaat("tailgater"))) && STREAMING::HAS_MODEL_LOADED(joaat("baller2")))
	{
		return 1;
	}
	return 0;
}

void func_97(int iParam0)//Position - 0x539A
{
	switch (Local_45[iParam0 /*20*/].f_18)
	{
		case 0:
			break;
		case 1:
			if (!Local_45[iParam0 /*20*/].f_19)
			{
				if (!__LIB_0__::func_121(Local_45[iParam0 /*20*/].f_1))
				{
					Local_45[iParam0 /*20*/].f_1 = PED::CREATE_PED(22, Local_45[iParam0 /*20*/], Local_45[iParam0 /*20*/].f_10, Local_45[iParam0 /*20*/].f_13, true, true);
					if (__LIB_0__::func_121(Local_45[iParam0 /*20*/].f_1))
					{
						if (iParam0 == 0)
						{
							TASK::TASK_START_SCENARIO_AT_POSITION(Local_45[iParam0 /*20*/].f_1, "PROP_HUMAN_SEAT_CHAIR", Local_80[iParam0 /*3*/], fLocal_81[iParam0], 0, false, true);
							PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(Local_45[iParam0 /*20*/].f_1);
							PED::SET_PED_SHOULD_IGNORE_SCENARIO_EXIT_COLLISION_CHECKS(Local_45[iParam0 /*20*/].f_1, true);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_45[iParam0 /*20*/].f_1, -37.347847f, -1102.0222f, 25.42232f, 3f, false, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_45[iParam0 /*20*/].f_1, 37, true);
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_45[iParam0 /*20*/].f_1, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_45[iParam0 /*20*/].f_1, iLocal_88);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_45[iParam0 /*20*/].f_1, false, iLocal_88);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_45[iParam0 /*20*/].f_1, 23, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_45[iParam0 /*20*/].f_1, 1, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_45[iParam0 /*20*/].f_1, 28, true);
						WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_45[iParam0 /*20*/].f_1, 0.7f, 0.3f);
						iLocal_70[iParam0] = 0;
						if (__LIB_33__::func_611() == 0)
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_45[iParam0 /*20*/].f_1, Local_45[iParam0 /*20*/].f_17, -1, true, true);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_45[iParam0 /*20*/]);
						Local_45[iParam0 /*20*/].f_19 = 1;
						Local_45[iParam0 /*20*/].f_18 = 2;
					}
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_121(Local_45[iParam0 /*20*/].f_1))
			{
				if (iLocal_67)
				{
					__LIB_0__::func_631(Local_45[iParam0 /*20*/].f_1, &(Local_45[iParam0 /*20*/].f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
					TASK::CLEAR_PED_TASKS(Local_45[iParam0 /*20*/].f_1);
					PED::SET_PED_USING_ACTION_MODE(Local_45[iParam0 /*20*/].f_1, true, -1, "DEFAULT_ACTION");
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 12, 2);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_45[iParam0 /*20*/].f_14, 1f, -1, 3f, 0, 40000f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(Local_45[iParam0 /*20*/].f_1, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					Local_45[iParam0 /*20*/].f_18 = 3;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_45[iParam0 /*20*/].f_1, false), true) >= 250f)
				{
					Local_45[iParam0 /*20*/].f_18 = 5;
				}
			}
			else
			{
				Local_45[iParam0 /*20*/].f_18 = 5;
			}
			break;
		case 3:
			if (__LIB_0__::func_121(Local_45[iParam0 /*20*/].f_1))
			{
				__LIB_0__::func_631(Local_45[iParam0 /*20*/].f_1, &(Local_45[iParam0 /*20*/].f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_45[iParam0 /*20*/].f_1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_45[iParam0 /*20*/].f_1, false), true) <= 5f)
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_45[iParam0 /*20*/].f_1, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_COMBAT_PED(Local_45[iParam0 /*20*/].f_1, PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_ALERTNESS(Local_45[iParam0 /*20*/].f_1, 3);
					PED::SET_PED_KEEP_TASK(Local_45[iParam0 /*20*/].f_1, true);
					Local_45[iParam0 /*20*/].f_18 = 4;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_45[iParam0 /*20*/].f_1, false), true) >= 250f)
				{
					Local_45[iParam0 /*20*/].f_18 = 5;
				}
			}
			else
			{
				Local_45[iParam0 /*20*/].f_18 = 5;
			}
			break;
		case 4:
			__LIB_0__::func_631(Local_45[iParam0 /*20*/].f_1, &(Local_45[iParam0 /*20*/].f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
			if (!__LIB_0__::func_121(Local_45[iParam0 /*20*/].f_1))
			{
				Local_45[iParam0 /*20*/].f_18 = 5;
			}
			else
			{
				if (iLocal_70[iParam0] == 0)
				{
					if (!func_63() || __LIB_33__::func_611() == 0)
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_45[iParam0 /*20*/].f_1, Local_45[iParam0 /*20*/].f_17, -1, false, true);
						iLocal_70[iParam0] = 1;
					}
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_45[iParam0 /*20*/].f_1, joaat("SCRIPT_TASK_COMBAT")) == 7)
				{
					TASK::TASK_COMBAT_PED(Local_45[iParam0 /*20*/].f_1, PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_45[iParam0 /*20*/].f_1, false), true) >= 75f)
				{
					Local_45[iParam0 /*20*/].f_18 = 5;
				}
			}
			break;
		case 5:
			__LIB_0__::func_621(&(Local_45[iParam0 /*20*/].f_2));
			if (ENTITY::DOES_ENTITY_EXIST(Local_45[iParam0 /*20*/].f_1))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_45[iParam0 /*20*/].f_1));
			}
			Local_45[iParam0 /*20*/].f_18 = 6;
			break;
		case 6:
			break;
	}
}

void func_100()//Position - 0x5A8D
{
	int iVar0;
	if (__LIB_39__::func_8())
	{
		__LIB_0__::func_56(&Global_32019);
	}
	else
	{
		__LIB_0__::func_56(&Global_32019);
	}
	__LIB_39__::func_19(-1);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_88);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_89);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_90);
	if (iLocal_61 == 0)
	{
		AUDIO::CANCEL_MUSIC_EVENT("RE9_SPOTTED");
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_48))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_48);
		if (HUD::DOES_BLIP_EXIST(iLocal_51))
		{
			HUD::REMOVE_BLIP(&iLocal_51);
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_45[iVar0 /*20*/].f_18 = 5;
		iVar0++;
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_82, false);
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	if (iLocal_83 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_83);
	}
	if (iLocal_84 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_84);
	}
	if (iLocal_85 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_85);
	}
	if (iLocal_86 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_86);
	}
	if (TASK::DOES_SCENARIO_GROUP_EXIST("DEALERSHIP"))
	{
		if (!TASK::IS_SCENARIO_GROUP_ENABLED("DEALERSHIP"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("DEALERSHIP", true);
		}
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-51.0518f, -1104.6848f, 25.2975f, -29.9812f, -1094.0787f, 27.5686f, true, true);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_128()//Position - 0x66A4
{
	if (!__LIB_0__::func_215(5))
	{
		return 1;
	}
	if (__LIB_39__::func_6())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
		{
			return 0;
		}
	}
	if (func_85(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_130()//Position - 0x6731
{
	Local_57 = { -45.97f, -1095.58f, 25.42f };
	fLocal_58 = 105.42f;
	Local_59 = { -33.39f, -1101.79f, 25.42f };
	fLocal_60 = 184.5161f;
	Local_45[0 /*20*/].f_10 = { -29.66f, -1103.44f, 26.42f };
	Local_45[0 /*20*/].f_13 = 58.7988f;
	Local_45[0 /*20*/].f_14 = { -35.19f, -1101.72f, 25.42f };
	Local_45[0 /*20*/] = joaat("G_M_M_ArmGoon_01");
	Local_45[0 /*20*/].f_17 = joaat("WEAPON_PISTOL");
	Local_80[0 /*3*/] = { -30.35f, -1104.29f, 25.89f };
	fLocal_81[0] = 177.22f;
	Local_45[1 /*20*/].f_10 = { -36.8032f, -1090.6185f, 25.4223f };
	Local_45[1 /*20*/].f_13 = 257.6675f;
	Local_45[1 /*20*/].f_14 = { -34.66f, -1097.23f, 25.42f };
	Local_45[1 /*20*/] = joaat("G_M_Y_ArmGoon_02");
	Local_45[1 /*20*/].f_17 = joaat("WEAPON_PISTOL");
	Local_80[1 /*3*/] = { -29.11f, -1104.99f, 25.89f };
	fLocal_81[1] = 136.57f;
	PED::ADD_RELATIONSHIP_GROUP("GoonGroup", &iLocal_88);
	PED::ADD_RELATIONSHIP_GROUP("PlayerGroup", &iLocal_89);
	PED::ADD_RELATIONSHIP_GROUP("YetarianGroup", &iLocal_90);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_90, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_90);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_88, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_88);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-51.0518f, -1104.6848f, 25.2975f, -29.9812f, -1094.0787f, 27.5686f, false, true);
	iLocal_82 = PED::ADD_SCENARIO_BLOCKING_AREA(-79.95f, -1126.33f, 20.65f, -3.5f, -1081.6f, 30.67f, false, true, true, true);
	TASK::ADD_COVER_BLOCKING_AREA(-34.2476f, -1107.2834f, 24.9621f, -24.7924f, -1102.5566f, 29.8287f, true, true, true, false);
	if (iLocal_86 == -1)
	{
		iLocal_86 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-29.3f, -1086.35f, 25.57f, 5.5f, 3f, 2f, -10f, false, 7);
	}
	__LIB_42__::func_534(196, 0);
	__LIB_42__::func_534(197, 0);
	__LIB_42__::func_534(194, 0);
	__LIB_42__::func_534(195, 0);
	STREAMING::REQUEST_MODEL(Local_45[0 /*20*/]);
	STREAMING::REQUEST_MODEL(Local_45[1 /*20*/]);
	STREAMING::REQUEST_MODEL(iLocal_74);
	STREAMING::REQUEST_MODEL(joaat("bjxl"));
	STREAMING::REQUEST_MODEL(joaat("tailgater"));
	STREAMING::REQUEST_MODEL(joaat("baller2"));
	WEAPON::REQUEST_WEAPON_ASSET(Local_45[0 /*20*/].f_17, 31, 0);
	WEAPON::REQUEST_WEAPON_ASSET(Local_45[1 /*20*/].f_17, 31, 0);
	STREAMING::REQUEST_ANIM_DICT("cellphone@");
	STREAMING::REQUEST_ANIM_DICT("cellphone@str");
	TASK::REQUEST_WAYPOINT_RECORDING("reyetarian_simeonoffice");
	AUDIO::PREPARE_MUSIC_EVENT("RE9_SPOTTED");
}

int func_145(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xA968
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = __LIB_38__::func_999();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!__LIB_0__::func_116())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085_FLOW_STRUCT_isGameflowActive)
		{
			return 0;
		}
		if (__LIB_0__::func_2(0))
		{
			return 0;
		}
		if (__LIB_39__::func_6())
		{
			return 0;
		}
		if (__LIB_3__::func_695())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (__LIB_0__::func_374(__LIB_33__::func_611()))
		{
			if (func_85(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!__LIB_39__::func_1(iParam1))
		{
			return 0;
		}
		if (__LIB_0__::func_374(__LIB_33__::func_611()))
		{
			if (__LIB_38__::func_88(__LIB_33__::func_611()) == 4 || __LIB_38__::func_88(__LIB_33__::func_611()) == 5)
			{
				return 0;
			}
		}
		if (__LIB_0__::func_374(__LIB_33__::func_611()))
		{
			if (!func_167(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!__LIB_14__::func_793(Global_113386.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113377) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_165())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_156(4))
		{
			return 0;
		}
		if (!__LIB_0__::func_215(5))
		{
			return 0;
		}
		if (__LIB_38__::func_989(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !__LIB_38__::func_989(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (__LIB_39__::func_1(30) && !__LIB_38__::func_989(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (__LIB_0__::func_374(__LIB_33__::func_611()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (__LIB_3__::func_423(iVar4))
				{
					if (__LIB_17__::func_398(iVar2))
					{
						if (!__LIB_0__::func_78(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3) < (210f * 210f))
							{
								if (__LIB_33__::func_611() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

int func_156(int iParam0)//Position - 0xB235
{
	int iVar0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = __LIB_33__::func_611();
				if (!__LIB_0__::func_374(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || __LIB_0__::func_201()) || Global_112433) || Global_31962) || __LIB_0__::func_629()) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_329()) || __LIB_0__::func_719()) || __LIB_0__::func_691()) || __LIB_0__::func_217()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || __LIB_0__::func_201()) || Global_31962) || __LIB_0__::func_629()) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_691()) || __LIB_0__::func_329()) || __LIB_0__::func_719()) || __LIB_0__::func_217()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || __LIB_0__::func_201()) || Global_112433) || Global_31962) || __LIB_0__::func_629()) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_691()) || __LIB_0__::func_329()) || __LIB_0__::func_719()) || __LIB_0__::func_217()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || __LIB_0__::func_201()) || Global_112433) || Global_31962) || __LIB_0__::func_629()) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_329()) || __LIB_0__::func_719()) || __LIB_0__::func_217()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					case 4:
						if (((((__LIB_0__::func_201() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_217()) || __LIB_0__::func_690()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					case 5:
						if ((((__LIB_0__::func_194(8, -1) || __LIB_0__::func_329()) || __LIB_0__::func_719()) || __LIB_0__::func_690()) || __LIB_0__::func_718())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || __LIB_0__::func_201()) || Global_31962) || __LIB_0__::func_629()) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_719()) || __LIB_0__::func_691()) || __LIB_0__::func_217()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || __LIB_0__::func_201()) || __LIB_0__::func_719()) || Global_112433) || Global_31962) || __LIB_0__::func_629()) || Global_44238) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_691()) || __LIB_0__::func_690()) || __LIB_0__::func_217()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || __LIB_0__::func_201()) || Global_112433) || Global_31962) || __LIB_0__::func_629()) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_691()) || __LIB_0__::func_690()) || __LIB_0__::func_329()) || __LIB_0__::func_719()) || __LIB_0__::func_217())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_165()//Position - 0xBA11
{
	__LIB_37__::func_220();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

int func_167(int iParam0, int iParam1, int iParam2)//Position - 0xBA4B
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = __LIB_33__::func_611();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

void func_172()//Position - 0xBCA7
{
	func_100();
}

