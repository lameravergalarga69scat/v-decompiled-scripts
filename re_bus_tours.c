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
	var uLocal_27 = 0;
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
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<15> Local_50[14];
	struct<15> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_52 = 0;
	struct<3> Local_53 = { 0, 0, 0 } ;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59[5] = { 0, 0, 0, 0, 0 };
	int iLocal_60[5] = { 0, 0, 0, 0, 0 };
	int iLocal_61 = 0;
	int iLocal_62[5] = { 0, 0, 0, 0, 0 };
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	float fLocal_65 = 0f;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<3> Local_77 = { 0, 0, 0 } ;
	struct<3> Local_78 = { 0, 0, 0 } ;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	bool bLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	var uLocal_96 = 16;
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
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	int iLocal_261 = 0;
	char* sLocal_262 = NULL;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	char* sLocal_267[22] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	struct<2> Local_277 = { 0, 5 } ;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 5;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
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
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_77 = { 0f, 0f, 0f };
	Local_78 = { 0f, 0f, 0f };
	sLocal_262 = "RANDOM@BUS_TOUR_GUIDE@IDLE_A";
	iLocal_264 = 524459;
	iLocal_265 = 40;
	iLocal_273 = 7500;
	Local_53 = { ScriptParam_277.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_63, 2.5f, 1.5f, 0f), true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_HEADING(iLocal_63));
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
					AUDIO::STOP_AUDIO_SCENE("RE_BUS_TOUR_SCENE");
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_63, 0f);
				}
			}
		}
		func_229();
	}
	if (!func_228())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_39__::func_345(Local_53, 2, 0, 1, 0))
	{
		__LIB_39__::func_334(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_190();
	__LIB_0__::func_467();
	while (true)
	{
		__LIB_0__::func_467();
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		switch (iLocal_69)
		{
			case 0:
				if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
				{
					if (func_228())
					{
						switch (iLocal_46)
						{
							case 0:
								func_184();
								break;
							case 1:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
								{
									if (PED::IS_PED_INJURED(iLocal_57) || PED::IS_PED_INJURED(iLocal_58))
									{
										func_229();
									}
									else
									{
										iLocal_69 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_229();
					}
				}
				else
				{
					func_229();
				}
				break;
			case 1:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
				{
					func_1();
				}
				else
				{
					func_229();
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x208
{
	func_183();
	func_182();
	func_181();
	func_180();
	switch (iLocal_47)
	{
		case 0:
			func_126();
			break;
		case 1:
			func_92();
			break;
		case 2:
			func_91();
			func_2();
			break;
	}
}

void func_2()//Position - 0x252
{
	char cVar0[64];
	StringCopy(&cVar0, "curiCurrentRambler ", 64);
	StringIntConCat(&cVar0, iLocal_261, 64);
	StringConCat(&cVar0, " ", 64);
	StringIntConCat(&cVar0, iLocal_52, 64);
	GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar0, 0.02f, 0.5f, 0f, 0, 0, 255, 255);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
	if (!PED::IS_PED_INJURED(iLocal_58) && !PED::IS_PED_INJURED(iLocal_57))
	{
		if (iLocal_268)
		{
			if (!__LIB_0__::func_75())
			{
				if (iLocal_261 < 14)
				{
					__LIB_14__::func_535(&uLocal_96, "BUSTOAU", "BUSTO_RAMB", sLocal_267[iLocal_261], 4, 0, 0);
				}
				func_229();
			}
		}
		else if (!func_88())
		{
			CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63) && iLocal_52 + 1 < 13)
				{
					func_229();
				}
			}
			if (!iLocal_74)
			{
				if (SYSTEM::TIMERA() > 12000)
				{
					func_86();
				}
			}
			else
			{
				GRAPHICS::DRAW_DEBUG_TEXT_2D("At_Point_Of_Interest TRUE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
			}
			func_47();
			func_33();
			func_27(0);
			if (__LIB_39__::func_351(iLocal_63))
			{
				iLocal_73 = 1;
			}
			VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_63);
		}
		else
		{
			__LIB_14__::func_782(&uLocal_96, "BUSTOAU", "BUSTO_THANK", "BUSTO_THANK_7", 4, 0, 0);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_63, 3);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_63, false);
			iLocal_268 = 1;
		}
	}
	else
	{
		func_229();
	}
}

void func_27(bool bParam0)//Position - 0xCEE
{
	if (!bParam0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 225 /*INPUT_SCRIPT_RRIGHT*/))
		{
			if (iLocal_76)
			{
				iLocal_76 = 0;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				GRAPHICS::SET_EXPOSURETWEAK(true);
			}
			else
			{
				iLocal_76 = 1;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				GRAPHICS::SET_EXPOSURETWEAK(false);
			}
		}
	}
	if (iLocal_76 && !Local_50[13 /*15*/].f_9)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		func_30();
	}
	else if (iLocal_74)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_81))
		{
			CAM::DESTROY_CAM(iLocal_81, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 0, true, false, 0);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			func_28(Local_50[iLocal_52 /*15*/].f_4, Local_50[iLocal_52 /*15*/].f_7);
		}
	}
	else if (CAM::DOES_CAM_EXIST(iLocal_81))
	{
		CAM::DESTROY_CAM(iLocal_81, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 0, true, false, 0);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	}
}

void func_28(struct<3> Param0, int iParam1)//Position - 0xDCB
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
	{
		if (!CAM::DOES_CAM_EXIST(iLocal_81) && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_51.f_4, 12f, 12f, 12f, false, true, 0))
			{
				CAM::SET_GAMEPLAY_COORD_HINT(Param0, iParam1, 3000, 3000, 0);
				func_29(Param0);
				iLocal_71 = MISC::GET_GAME_TIMER();
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_57))
		{
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_57, 3f);
		}
		iLocal_74 = 1;
	}
}

void func_29(struct<3> Param0)//Position - 0xE4F
{
	int iVar0;
	int iVar1;
	iLocal_61 = MISC::GET_GAME_TIMER();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(6000, 16000);
		TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Param0, iVar1, 0, 2);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!PED::IS_PED_INJURED(uLocal_59[iVar0]))
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(6000, 16000);
			iLocal_60[iVar0] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2000);
			iLocal_62[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_30()//Position - 0xECA
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	fVar1 = 70f;
	fVar2 = -20f;
	fVar3 = 42f;
	fVar4 = -89f;
	fVar5 = 69f;
	fVar6 = 4f;
	Var7 = { 0.2f, 0.9f, -0.15f };
	if (CAM::DOES_CAM_EXIST(iLocal_81))
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			fVar6 = 8f;
		}
		else
		{
			fVar6 = 4f;
		}
		func_32();
		iVar8 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
		iVar9 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
		iVar10 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
		iVar11 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
		if (!PAD::IS_LOOK_INVERTED())
		{
			iVar9 = (iVar9 * -1);
			iVar11 = (iVar11 * -1);
		}
		if ((iVar11 > 28 || iVar11 < -28) || PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			fVar0 = SYSTEM::TO_FLOAT(iVar11);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar11 < 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_95 = (fLocal_95 + fVar0);
			if (fLocal_95 < fVar2)
			{
				fLocal_95 = fVar2;
			}
			if (fLocal_95 > fVar3)
			{
				fLocal_95 = fVar3;
			}
		}
		if ((iVar10 > 28 || iVar10 < -28) || PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			fVar0 = SYSTEM::TO_FLOAT(iVar10);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar10 > 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_94 = (fLocal_94 + fVar0);
			if (fLocal_94 < fVar4)
			{
				fLocal_94 = fVar4;
			}
			if (fLocal_94 > fVar5)
			{
				fLocal_94 = fVar5;
			}
		}
		if ((iVar9 > 28 || iVar9 < -28) || PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			fVar0 = SYSTEM::TO_FLOAT(iVar9);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar9 < 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_95 = (fLocal_95 + fVar0);
			if (fLocal_95 < fVar2)
			{
				fLocal_95 = fVar2;
			}
			if (fLocal_95 > fVar3)
			{
				fLocal_95 = fVar3;
			}
		}
		if ((iVar8 > 28 || iVar8 < -28) || PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			fVar0 = SYSTEM::TO_FLOAT(iVar8);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar8 > 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_94 = (fLocal_94 + fVar0);
			if (fLocal_94 < fVar4)
			{
				fLocal_94 = fVar4;
			}
			if (fLocal_94 > fVar5)
			{
				fLocal_94 = fVar5;
			}
		}
		func_31(PLAYER::PLAYER_PED_ID(), &iLocal_81, fLocal_95, 0f, fLocal_94);
		CAM::SET_CAM_FOV(iLocal_81, fVar1);
		CAM::ATTACH_CAM_TO_ENTITY(iLocal_81, PLAYER::PLAYER_PED_ID(), Var7.f_0, (Var7.f_1 - 1f), (Var7.f_2 + 1f), true);
	}
	else
	{
		iLocal_81 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
		CAM::ATTACH_CAM_TO_ENTITY(iLocal_81, PLAYER::PLAYER_PED_ID(), Var7.f_0, (Var7.f_1 - 1f), (Var7.f_2 + 1f), true);
		CAM::SET_CAM_NEAR_CLIP(iLocal_81, 0.01f);
		fLocal_94 = -70f;
		fLocal_95 = 3f;
		func_31(PLAYER::PLAYER_PED_ID(), &iLocal_81, fLocal_95, 0f, fLocal_94);
		CAM::SET_CAM_FOV(iLocal_81, fVar1);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		CAM::RENDER_SCRIPT_CAMS(true, false, 2000, true, false, 0);
	}
}

void func_31(int iParam0, int iParam1, struct<3> Param2)//Position - 0x1214
{
	float fVar0;
	struct<3> Var1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (CAM::DOES_CAM_EXIST(*iParam1))
		{
			fVar0 = ENTITY::GET_ENTITY_HEADING(iParam0);
			Var1.f_0 = 0f;
			Var1.f_1 = 0f;
			Var1.f_2 = fVar0;
			Var1 = { Var1 + Param2 };
			CAM::SET_CAM_ROT(*iParam1, Var1.f_0, Var1.f_1, Var1.f_2, 2);
		}
	}
}

void func_32()//Position - 0x1265
{
	struct<3> Var0;
	int iVar1;
	if (!PED::IS_PED_INJURED(uLocal_59[2]))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_59[2], joaat("SCRIPT_TASK_LOOK_AT_COORD")) == 7)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_89 + 8000)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uLocal_59[2], false);
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_59[2], MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 2f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 2f), 0.5f) };
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000);
				TASK::TASK_LOOK_AT_COORD(uLocal_59[2], Var0, iVar1, 2049, 2);
				iLocal_89 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_33()//Position - 0x12EC
{
	int iVar0;
	iVar0 = iLocal_52 + 1;
	if (!iLocal_92 && CAM::IS_SCREEN_FADED_IN())
	{
		HUD::DISPLAY_HELP_TEXT_THIS_FRAME("Tour_help", false);
	}
	if (iVar0 < 14)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/) || iLocal_73 == 1)
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
				{
					if (!PED::IS_PED_INJURED(iLocal_57))
					{
						if (!Local_50[iVar0 /*15*/].f_14 && !Local_50[iVar0 /*15*/].f_9)
						{
							SYSTEM::SETTIMERA(0);
							Local_50[iLocal_52 /*15*/].f_9 = 1;
							func_36(Local_50[iVar0 /*15*/].f_10, Local_50[iVar0 /*15*/].f_13);
							__LIB_0__::func_325();
							if (iVar0 == 13)
							{
								iLocal_92 = 1;
								func_34();
							}
							Local_50[iVar0 /*15*/].f_14 = 1;
							iLocal_52 = iVar0;
						}
						iLocal_73 = 0;
					}
				}
			}
		}
	}
}

void func_34()//Position - 0x13B0
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
	{
		if (!PED::IS_PED_INJURED(iLocal_57))
		{
			TASK::CLEAR_PED_TASKS(iLocal_57);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_63, 120.8878f, 239.3244f, 106.5131f, 3f, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_63, Local_51.f_1, 3f, 0, joaat("tourbus"), iLocal_264, 3f, 15f);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_57, iLocal_79);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
		}
	}
}

void func_36(struct<3> Param0, float fParam1)//Position - 0x144A
{
	int iVar0;
	iVar0 = iLocal_52 + 1;
	AUDIO::START_AUDIO_SCENE("RE_BUS_TOUR_FADE_OUT_WORLD");
	CAM::DO_SCREEN_FADE_OUT(1000);
	while (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
		{
			func_229();
		}
		if (PED::IS_PED_INJURED(iLocal_57))
		{
			func_229();
		}
		SYSTEM::WAIT(0);
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(true);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		TASK::CLEAR_PED_TASKS(iLocal_57);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param0.f_0, Param0.f_1, Param0.f_2, 5f, false, false, false, false, false, false, 0);
		ENTITY::SET_ENTITY_COORDS(iLocal_63, Param0.f_0, Param0.f_1, Param0.f_2, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_63, fParam1);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_63, 0f);
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_57, iLocal_63, ENTITY::GET_ENTITY_COORDS(iLocal_63, true), 0f, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
		__LIB_14__::func_748(Param0, 1112014848, 12, 5000, 0, 0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_63, 5f);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_63, true, true, false);
		if (iVar0 < 13)
		{
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_57, iLocal_63, Local_50[iVar0 /*15*/].f_1, Local_50[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_57))
		{
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_57, iLocal_63, Local_51.f_1, Local_50[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
		}
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_63, 8f);
	}
	__LIB_0__::func_429();
	CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(3);
	iLocal_48 = 3;
	func_27(1);
	AUDIO::STOP_AUDIO_SCENE("RE_BUS_TOUR_FADE_OUT_WORLD");
	CAM::DO_SCREEN_FADE_IN(1000);
	while (CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		func_27(1);
		SYSTEM::WAIT(0);
	}
	CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	func_27(1);
}

void func_47()//Position - 0x187E
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = iLocal_52 + 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_48)
		{
			case 0:
				if (!iLocal_92)
				{
					if (Local_50[12 /*15*/].f_9 || Local_50[13 /*15*/].f_14)
					{
						iLocal_92 = 1;
					}
				}
				iVar0 = 0;
				while (iVar0 < 14)
				{
					if (!Local_50[iVar0 /*15*/].f_9)
					{
						if (iVar0 == 13)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_50[iVar0 /*15*/].f_1, 30f, 30f, 15f, false, true, 0))
							{
								if (Local_50[12 /*15*/].f_9)
								{
									Local_50[13 /*15*/].f_9 = 1;
									iLocal_71 = MISC::GET_GAME_TIMER();
									iLocal_48 = 2;
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_50[iVar0 /*15*/].f_1, 40f, 40f, 12f, false, true, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false))
							{
								func_28(Local_50[iVar0 /*15*/].f_4, Local_50[iVar0 /*15*/].f_7);
								iLocal_52 = iVar0;
								if (iLocal_75)
								{
									iLocal_75 = 0;
								}
								__LIB_0__::func_325();
								iLocal_48 = 1;
							}
							else
							{
								iLocal_48 = 3;
							}
						}
					}
					iVar0++;
				}
				break;
			case 1:
				func_28(Local_50[iLocal_52 /*15*/].f_4, Local_50[iLocal_52 /*15*/].f_7);
				iLocal_70 = MISC::GET_GAME_TIMER();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
				{
					if (iVar1 <= 13)
					{
						func_85(ENTITY::GET_ENTITY_COORDS(iLocal_63, true), Local_50[iVar1 /*15*/].f_1, &Local_77, &Local_78, 500);
					}
					if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_77.f_0, Local_77.f_1, Local_78.f_0, Local_78.f_1))
					{
						if ((iLocal_70 - iLocal_71) > 0)
						{
							if (__LIB_2__::func_859(&uLocal_96, "BUSTOAU", Local_50[iLocal_52 /*15*/], 4, 0, 0, 0))
							{
								if (iVar1 <= 13)
								{
									if (iVar1 == 11)
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar2);
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_63, -100.461f, -206.1412f, 44.4215f, Local_50[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 4f, 15f);
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_63, Local_50[iVar1 /*15*/].f_1, Local_50[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 4f, 15f);
										TASK::CLOSE_SEQUENCE_TASK(iVar2);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_57, iVar2);
										TASK::CLEAR_SEQUENCE_TASK(&iVar2);
									}
									else
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_57, iLocal_63, Local_50[iVar1 /*15*/].f_1, Local_50[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 4f, 15f);
									}
								}
								iLocal_71 = MISC::GET_GAME_TIMER();
								Local_50[iLocal_52 /*15*/].f_14 = 1;
								Local_50[iLocal_52 /*15*/].f_9 = 1;
								iLocal_48 = 3;
							}
						}
					}
				}
				break;
			case 2:
				if (func_49())
				{
					iLocal_48 = 3;
				}
				break;
			case 3:
				iLocal_70 = MISC::GET_GAME_TIMER();
				func_48(Local_50[iLocal_52 /*15*/].f_4);
				if ((iLocal_70 - iLocal_71) > 5000)
				{
					if (!__LIB_0__::func_75())
					{
						iLocal_74 = 0;
						iLocal_71 = MISC::GET_GAME_TIMER();
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							CAM::STOP_GAMEPLAY_HINT(true);
						}
						if (Local_50[13 /*15*/].f_9 == 1)
						{
							iLocal_48 = 4;
						}
						else
						{
							if (!PED::IS_PED_INJURED(iLocal_57))
							{
								TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_57, 15f);
							}
							iLocal_48 = 0;
						}
					}
				}
				break;
			case 4:
				func_229();
				break;
			}
	}
}

void func_48(struct<3> Param0)//Position - 0x1B9F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_61) > iLocal_60[iVar0] && iLocal_62[iVar0] == 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_59[iVar0], false))
			{
				TASK::TASK_LOOK_AT_COORD(uLocal_59[iVar0], Param0, 20000, 2050, 4);
			}
			iLocal_62[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_49()//Position - 0x1C08
{
	float fVar0[5];
	struct<3> Var1[5];
	if (__LIB_0__::func_645(1000))
	{
		iLocal_86 = 3;
	}
	iLocal_269 = 1;
	switch (iLocal_86)
	{
		case 0:
			if (CAM::DOES_CAM_EXIST(iLocal_81))
			{
				CAM::DESTROY_CAM(iLocal_81, false);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			}
			__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
			MISC::SET_MINIGAME_IN_PROGRESS(true);
			HUD::DISPLAY_RADAR(false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			GRAPHICS::SET_EXPOSURETWEAK(true);
			iLocal_82 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 93.8459f, 251.8829f, 110.4535f, 23.0883f, 0.101f, -61.7699f, 40f, true, 2);
			iLocal_83 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 97.0995f, 249.7653f, 109.0195f, -3f, 0f, -91.5944f, 50f, true, 2);
			CAM::SET_CAM_ACTIVE(iLocal_82, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_83, iLocal_82, 17000, 1, 1);
			__LIB_2__::func_859(&uLocal_96, "BUSTOAU", "BUSTO_THANK", 4, 0, 0, 0);
			ENTITY::SET_ENTITY_COORDS(iLocal_63, Local_51.f_1, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_63, Local_51.f_13);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_63, 5f);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_63, 3);
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				TASK::CLEAR_PED_TASKS(iLocal_57);
				TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_57, 0f);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
				TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_63, 24, 10000);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_57, iLocal_79);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 101.4382f, 250.0447f, 107.2579f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 268.4057f);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			iLocal_74 = 1;
			iLocal_71 = MISC::GET_GAME_TIMER();
			iLocal_86 = 1;
			break;
		case 1:
			iLocal_70 = MISC::GET_GAME_TIMER();
			if ((iLocal_70 - iLocal_71) > 3000)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 101.4382f, 250.0447f, 107.2579f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 268.4057f);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
				Var1[0 /*3*/] = { 105.1253f, 247.7461f, 107.1111f };
				Var1[1 /*3*/] = { 109.2535f, 247.9478f, 107.0121f };
				Var1[2 /*3*/] = { 110.3568f, 249.2771f, 107.0133f };
				Var1[3 /*3*/] = { 104.8579f, 251.0388f, 107.1858f };
				Var1[4 /*3*/] = { 105.4064f, 248.0866f, 107.1104f };
				fVar0[0] = 269.6692f;
				fVar0[1] = 283.6581f;
				fVar0[2] = 278.7632f;
				fVar0[3] = 228.5865f;
				fVar0[4] = 263.4406f;
				iLocal_88 = 0;
				while (iLocal_88 < 5)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_59[iLocal_88]))
					{
						if (!PED::IS_PED_INJURED(uLocal_59[iLocal_88]))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_59[iLocal_88]);
							ENTITY::SET_ENTITY_HEADING(uLocal_59[iLocal_88], fVar0[iLocal_88]);
							ENTITY::SET_ENTITY_COORDS(uLocal_59[iLocal_88], Var1[iLocal_88 /*3*/], true, false, false, true);
							TASK::TASK_WANDER_STANDARD(uLocal_59[iLocal_88], 40000f, 0);
						}
					}
					iLocal_88++;
				}
				iLocal_71 = MISC::GET_GAME_TIMER();
				iLocal_86 = 2;
			}
			break;
		case 2:
			iLocal_70 = MISC::GET_GAME_TIMER();
			if ((iLocal_70 - iLocal_71) > 13000)
			{
				iLocal_86 = 3;
			}
			break;
		case 3:
			CAM::SET_CAM_ACTIVE(iLocal_82, false);
			CAM::RENDER_SCRIPT_CAMS(false, true, 3000, false, false, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::DESTROY_CAM(iLocal_82, false);
			CAM::DESTROY_CAM(iLocal_83, false);
			MISC::SET_MINIGAME_IN_PROGRESS(false);
			HUD::DISPLAY_RADAR(true);
			__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_71 = 10000;
			func_50();
			return 1;
			break;
	}
	return 0;
}

void func_50()//Position - 0x1FE4
{
	__LIB_39__::func_349(-1, 0);
	__LIB_14__::func_557();
	func_229();
}

void func_85(struct<2> Param0, Vector3 vParam1, struct<2> Param2, var uParam3, float fParam4, float fParam5, int iParam6)//Position - 0x3544
{
	if (!iLocal_75)
	{
		if (Param2.f_0 <= Param0.f_0)
		{
			*fParam4 = Param2.f_0;
			*fParam5 = Param0.f_0;
		}
		else
		{
			*fParam4 = Param0.f_0;
			*fParam5 = Param2.f_0;
		}
		if (Param2.f_1 <= Param0.f_1)
		{
			fParam4->f_1 = Param2.f_1;
			fParam5->f_1 = Param0.f_1;
		}
		else
		{
			fParam4->f_1 = Param0.f_1;
			fParam5->f_1 = Param2.f_1;
		}
		*fParam4 = { *fParam4 - Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
		*fParam5 = { *fParam5 + Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
		iLocal_75 = 1;
	}
}

void func_86()//Position - 0x35C9
{
	int iVar0[24];
	char* sVar1;
	sLocal_267[0] = "BUSTO_RAMB_1";
	sLocal_267[1] = "BUSTO_RAMB_2";
	sLocal_267[2] = "BUSTO_RAMB_3";
	sLocal_267[3] = "BUSTO_RAMB_4";
	sLocal_267[4] = "BUSTO_RAMB_5";
	sLocal_267[5] = "BUSTO_RAMB_6";
	sLocal_267[6] = "BUSTO_RAMB_7";
	sLocal_267[7] = "BUSTO_RAMB_8";
	sLocal_267[8] = "BUSTO_RAMB_9";
	sLocal_267[9] = "BUSTO_RAMB_10";
	sLocal_267[10] = "BUSTO_RAMB_11";
	sLocal_267[11] = "BUSTO_RAMB_12";
	sLocal_267[12] = "BUSTO_RAMB_13";
	sLocal_267[13] = "BUSTO_RAMB_14";
	iVar0[0] = 12000;
	iVar0[1] = 12000;
	iVar0[2] = 36000;
	iVar0[3] = 0;
	iVar0[4] = 36000;
	iVar0[5] = 0;
	iVar0[6] = 36000;
	iVar0[7] = 36000;
	iVar0[8] = 0;
	iVar0[9] = 36000;
	iVar0[10] = 36000;
	iVar0[11] = 0;
	iVar0[12] = 36000;
	iVar0[13] = 0;
	iVar0[14] = 36000;
	iVar0[15] = 0;
	iVar0[16] = 48000;
	iVar0[17] = 0;
	iVar0[18] = 48000;
	iVar0[19] = 0;
	iVar0[20] = 48000;
	iVar0[21] = 0;
	iVar0[0] = iVar0[0];
	switch (iLocal_72)
	{
		case 0:
			iLocal_71 = MISC::GET_GAME_TIMER();
			iLocal_72 = 1;
			break;
		case 1:
			iLocal_70 = MISC::GET_GAME_TIMER();
			if ((iLocal_70 - iLocal_71) > 2000)
			{
				if (!__LIB_0__::func_75())
				{
					iLocal_71 = MISC::GET_GAME_TIMER();
					iLocal_72 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_75())
			{
				GRAPHICS::DRAW_DEBUG_TEXT_2D("IS_ANY_CONVERSATION_ONGOING_OR_QUEUED", 0.02f, 0.2f, 0f, 0, 0, 255, 255);
			}
			if (iLocal_270)
			{
				iLocal_70 = MISC::GET_GAME_TIMER();
				if ((iLocal_70 - iLocal_71) > iLocal_273)
				{
					if (func_87(uLocal_59[iLocal_271]))
					{
						if (iLocal_52 == 0)
						{
							sVar1 = "TOUR_ABOUT_TO_START";
						}
						else if ((iLocal_52 % 2) == 0)
						{
							sVar1 = "TOUR_CHAT";
						}
						else
						{
							sVar1 = "TOUR_LANDMARK";
						}
						GRAPHICS::DRAW_DEBUG_TEXT_2D("AMBIENT LINE", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uLocal_59[iLocal_271], sVar1, "SPEECH_PARAMS_FORCE", 1);
						iLocal_272++;
						if (iLocal_272 == 3)
						{
							iLocal_270 = 0;
						}
						iLocal_273 = MISC::GET_RANDOM_INT_IN_RANGE(9000, 14000);
						iLocal_71 = MISC::GET_GAME_TIMER();
					}
					iLocal_271++;
					if (iLocal_271 == 5)
					{
						iLocal_271 = 0;
					}
				}
			}
			else if (iLocal_261 < 14)
			{
				iLocal_70 = MISC::GET_GAME_TIMER();
				if ((iLocal_70 - iLocal_71) > 10000)
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_14__::func_535(&uLocal_96, "BUSTOAU", "BUSTO_RAMB", sLocal_267[iLocal_261], 4, 0, 0))
						{
							iLocal_261++;
							iLocal_71 = MISC::GET_GAME_TIMER();
							iLocal_270 = 1;
							iLocal_272 = 0;
						}
						else
						{
							GRAPHICS::DRAW_DEBUG_TEXT_2D("NOT PLAY_SINGLE_LINE_FROM_CONVERSATION", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
						}
					}
				}
			}
			else
			{
				iLocal_270 = 1;
			}
			break;
	}
}

int func_87(int iParam0)//Position - 0x38CF
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (AUDIO::DOES_CONTEXT_EXIST_FOR_THIS_PED(iParam0, "TOUR_ABOUT_TO_START", false))
		{
			return 1;
		}
	}
	return 0;
}

int func_88()//Position - 0x38F5
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/) && !iLocal_269)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false))
					{
						if (!PED::IS_PED_INJURED(iLocal_57))
						{
							TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_57, iLocal_63, 24, 5000);
							fLocal_65 = ENTITY::GET_ENTITY_SPEED(iLocal_63);
							while (fLocal_65 > 5f)
							{
								SYSTEM::WAIT(0);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
								{
									fLocal_65 = ENTITY::GET_ENTITY_SPEED(iLocal_63);
								}
							}
							__LIB_0__::func_325();
							CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_263);
							PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
							AUDIO::STOP_AUDIO_SCENE("RE_BUS_TOUR_SCENE");
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_63, 0f);
							if (CAM::DOES_CAM_EXIST(iLocal_81))
							{
								CAM::DESTROY_CAM(iLocal_81, false);
								CAM::RENDER_SCRIPT_CAMS(false, false, 0, true, false, 0);
								ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
							}
							TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, 0);
						}
					}
				}
			}
		}
		return 1;
	}
	return 0;
}

void func_91()//Position - 0x3A59
{
	switch (iLocal_52)
	{
		case 0:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
			break;
		case 1:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.6f);
			break;
	}
}

void func_92()//Position - 0x3ACF
{
	if (!PED::IS_PED_INJURED(iLocal_58) && !PED::IS_PED_INJURED(iLocal_57))
	{
		switch (iLocal_49)
		{
			case 0:
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				AUDIO::START_AUDIO_SCENE("RE_BUS_TOUR_SCENE");
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_63, "RE_BUS_TOUR_BUS_VEHICLE", 0f);
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_51.f_1, 30f, 0);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_57, false);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, 2);
				MISC::SET_MINIGAME_IN_PROGRESS(true);
				HUD::DISPLAY_RADAR(false);
				iLocal_82 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 94.5693f, 246.0525f, 108.9809f, -11.5369f, 0f, -74.512f, 40f, true, 2);
				iLocal_83 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 95.7144f, 243.8854f, 111.291f, -26.2154f, 0f, -59.2407f, 50f, true, 2);
				CAM::SET_CAM_ACTIVE(iLocal_82, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_83, iLocal_82, 6500, 1, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_63, 8f, 8f, 5f, false, true, 0))
					{
						ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 65f);
						ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 115.1136f, 241.6893f, 106.6493f, true, false, false, true);
					}
				}
				PAD::INIT_PC_SCRIPTED_CONTROLS("BusTours");
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
				{
					func_85(ENTITY::GET_ENTITY_COORDS(iLocal_63, true), Local_50[0 /*15*/].f_1, &Local_77, &Local_78, 500);
					iLocal_275 = MISC::GET_GAME_TIMER();
					iLocal_49 = 1;
				}
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					iLocal_76 = 1;
				}
				iLocal_276 = 0;
				break;
			case 1:
				if (!iLocal_93)
				{
					func_125();
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_275) > 5000 && !iLocal_274)
				{
					__LIB_2__::func_859(&uLocal_96, "BUSTOAU", "BUSTO_GO", 4, 0, 0, 0);
					if (__LIB_0__::func_1("Enter_bus"))
					{
						HUD::CLEAR_HELP(true);
					}
					iLocal_274 = 1;
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_275) > 6200)
				{
					if (iLocal_76 == 1)
					{
						if (iLocal_276 == 0)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							iLocal_276 = 1;
						}
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if ((PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_58, iLocal_63)) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_57, iLocal_63))
					{
						iLocal_49 = 2;
					}
					else if (__LIB_0__::func_645(1000))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_63, 0, false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_58, iLocal_63, 0);
						}
						iLocal_49 = 2;
					}
				}
				break;
			case 2:
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_57, iLocal_63, Local_50[0 /*15*/].f_1, Local_50[0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
				CAM::SET_CAM_ACTIVE(iLocal_82, false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(iLocal_82, false);
				CAM::DESTROY_CAM(iLocal_83, false);
				MISC::SET_MINIGAME_IN_PROGRESS(false);
				HUD::DISPLAY_RADAR(true);
				CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
				iLocal_84 = __LIB_0__::func_683();
				__LIB_15__::func_811(iLocal_84, 1, iLocal_265);
				iLocal_263 = CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL();
				if (!iLocal_76)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(3);
				}
				else
				{
					func_27(1);
				}
				HUD::REMOVE_BLIP(&iLocal_67);
				iLocal_47 = 2;
				break;
		}
	}
	else
	{
		func_229();
	}
}

void func_125()//Position - 0x5117
{
	if (!PED::IS_PED_INJURED(iLocal_58))
	{
		TASK::CLEAR_PED_TASKS(iLocal_58);
		TASK::TASK_ENTER_VEHICLE(iLocal_58, iLocal_63, 10000, 0, 2f, 262144, 0);
		PED::SET_PED_KEEP_TASK(iLocal_58, true);
		iLocal_93 = 1;
	}
}

void func_126()//Position - 0x5151
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_166())
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_63, 3);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_63, false);
			func_229();
		}
		else if (__LIB_0__::func_784(4))
		{
			if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63, 5f, 5f, 5f, false, true, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !__LIB_0__::func_1("TX_H02" /* GXT: Press ~INPUT_ENTER~ to enter a taxi as a passenger. Hold ~INPUT_ENTER~ to jack a taxi. */))
			{
				if (func_155())
				{
					if (!iLocal_266)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_63, 1);
						iLocal_266 = 1;
					}
					HUD::DISPLAY_HELP_TEXT_THIS_FRAME("Enter_bus", false);
					if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 23 /*INPUT_ENTER*/))
					{
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, -1, 2, 1f, 8, 0);
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_67))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_68))
						{
							HUD::REMOVE_BLIP(&iLocal_68);
						}
						iLocal_67 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_63);
						HUD::SET_BLIP_AS_FRIENDLY(iLocal_67, true);
						HUD::SET_BLIP_SCALE(iLocal_67, Global_32006);
						if (!PED::IS_PED_INJURED(iLocal_58))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_58, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
						if (!__LIB_39__::func_333())
						{
							if (__LIB_39__::func_340())
							{
								func_229();
							}
							else
							{
								__LIB_39__::func_336(1);
							}
						}
					}
					if (func_131())
					{
						iLocal_269 = 0;
						func_130(1);
					}
				}
				else
				{
					HUD::DISPLAY_HELP_TEXT_THIS_FRAME("No_bus_money", false);
					if (iLocal_266)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_63, 2);
						iLocal_266 = 0;
					}
				}
			}
		}
		if (iLocal_88 < 5)
		{
			if (func_127(&(uLocal_59[iLocal_88])))
			{
				iLocal_88++;
			}
		}
	}
}

int func_127(int* iParam0)//Position - 0x52B3
{
	char* sVar0;
	*iParam0 = 0;
	if (PED::GET_CLOSEST_PED(Local_53, 100f, true, false, iParam0, false, false, 28))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			if (func_129(*iParam0))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
					TASK::CLEAR_PED_TASKS(*iParam0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
					PED::SET_PED_NAME_DEBUG(*iParam0, "randompassenger");
					PED::SET_PED_CONFIG_FLAG(*iParam0, 134, true);
					switch (iLocal_88)
					{
						case 0:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
							{
								PED::SET_PED_INTO_VEHICLE(*iParam0, iLocal_63, 3);
								PED::SET_PED_KEEP_TASK(*iParam0, true);
							}
							break;
						case 1:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
							{
								PED::SET_PED_INTO_VEHICLE(*iParam0, iLocal_63, 7);
								PED::SET_PED_KEEP_TASK(*iParam0, true);
							}
							break;
						case 2:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
							{
								PED::SET_PED_INTO_VEHICLE(*iParam0, iLocal_63, 6);
								PED::SET_PED_KEEP_TASK(*iParam0, true);
							}
							break;
						case 3:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
							{
								PED::SET_PED_INTO_VEHICLE(*iParam0, iLocal_63, 8);
								PED::SET_PED_KEEP_TASK(*iParam0, true);
							}
							break;
						case 4:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
							{
								PED::SET_PED_INTO_VEHICLE(*iParam0, iLocal_63, 1);
								PED::SET_PED_KEEP_TASK(*iParam0, true);
							}
							break;
					}
					sVar0 = func_128(PED::IS_PED_MALE(*iParam0));
					AUDIO::SET_AMBIENT_VOICE_NAME(*iParam0, sVar0);
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_128(bool bParam0)//Position - 0x540C
{
	int iVar0;
	if (bParam0 == 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 16);
		if (iVar0 == 0)
		{
			return "A_F_M_DOWNTOWN_01_BLACK_FULL_01";
		}
		else if (iVar0 == 1)
		{
			return "A_F_M_EASTSA_01_LATINO_FULL_01";
		}
		else if (iVar0 == 2)
		{
			return "A_F_M_FATWHITE_01_WHITE_FULL_01";
		}
		else if (iVar0 == 3)
		{
			return "A_F_M_KTOWN_02_KOREAN_FULL_01";
		}
		else if (iVar0 == 4)
		{
			return "A_F_M_SOUCENT_02_BLACK_FULL_01";
		}
		else if (iVar0 == 5)
		{
			return "A_F_M_TOURIST_01_WHITE_MINI_01";
		}
		else if (iVar0 == 6)
		{
			return "A_F_O_KTOWN_01_KOREAN_FULL_01";
		}
		else if (iVar0 == 7)
		{
			return "A_F_O_SOUCENT_01_BLACK_FULL_01";
		}
		else if (iVar0 == 8)
		{
			return "A_F_Y_EASTSA_02_WHITE_FULL_01";
		}
		else if (iVar0 == 9)
		{
			return "A_F_Y_HIKER_01_WHITE_FULL_01";
		}
		else if (iVar0 == 10)
		{
			return "A_F_Y_HIKER_01_WHITE_MINI_01";
		}
		else if (iVar0 == 11)
		{
			return "A_F_Y_HIPSTER_03_WHITE_FULL_01";
		}
		else if (iVar0 == 12)
		{
			return "A_F_Y_TOURIST_01_BLACK_FULL_01";
		}
		else if (iVar0 == 13)
		{
			return "A_F_Y_TOURIST_01_LATINO_FULL_01";
		}
		else if (iVar0 == 14)
		{
			return "A_F_Y_TOURIST_01_WHITE_FULL_01";
		}
		else
		{
			return "A_F_Y_TOURIST_02_WHITE_MINI_01";
		}
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 33);
	if (iVar0 == 0)
	{
		return "A_M_M_AFRIAMER_01_BLACK_FULL_01";
	}
	if (iVar0 == 1)
	{
		return "A_M_M_EASTSA_01_LATINO_FULL_01";
	}
	if (iVar0 == 2)
	{
		return "A_M_M_EASTSA_02_LATINO_FULL_01";
	}
	if (iVar0 == 3)
	{
		return "A_M_M_FATLATIN_01_LATINO_FULL_01";
	}
	if (iVar0 == 4)
	{
		return "A_M_M_GENFAT_01_LATINO_FULL_01";
	}
	if (iVar0 == 5)
	{
		return "A_M_M_POLYNESIAN_01_POLYNESIAN_FULL_01";
	}
	if (iVar0 == 6)
	{
		return "A_M_M_SALTON_01_WHITE_FULL_01";
	}
	if (iVar0 == 7)
	{
		return "A_M_M_SALTON_02_WHITE_FULL_01";
	}
	if (iVar0 == 8)
	{
		return "A_M_M_STLAT_02_LATINO_FULL_01";
	}
	if (iVar0 == 9)
	{
		return "A_M_M_TOURIST_01_WHITE_MINI_01";
	}
	if (iVar0 == 10)
	{
		return "A_M_O_GENSTREET_01_WHITE_FULL_01";
	}
	if (iVar0 == 11)
	{
		return "A_M_Y_BEACH_01_CHINESE_FULL_01";
	}
	if (iVar0 == 12)
	{
		return "A_M_Y_BEACH_01_CHINESE_MINI_01";
	}
	if (iVar0 == 13)
	{
		return "A_M_Y_BEACH_01_WHITE_FULL_01";
	}
	if (iVar0 == 14)
	{
		return "A_M_Y_BEACH_02_LATINO_FULL_01";
	}
	if (iVar0 == 15)
	{
		return "A_M_Y_BEACH_03_WHITE_FULL_01";
	}
	if (iVar0 == 16)
	{
		return "A_M_Y_BEACHVESP_01_CHINESE_FULL_01";
	}
	if (iVar0 == 17)
	{
		return "A_M_Y_BEACHVESP_01_CHINESE_MINI_01";
	}
	if (iVar0 == 18)
	{
		return "A_M_Y_BEACHVESP_01_WHITE_FULL_01";
	}
	if (iVar0 == 19)
	{
		return "A_M_Y_BEACHVESP_02_WHITE_FULL_01";
	}
	if (iVar0 == 20)
	{
		return "A_M_Y_BEACHVESP_02_WHITE_MINI_01";
	}
	if (iVar0 == 21)
	{
		return "A_M_Y_BEVHILLS_01_WHITE_FULL_01";
	}
	if (iVar0 == 22)
	{
		return "A_M_Y_BUSINESS_01_BLACK_FULL_01";
	}
	if (iVar0 == 23)
	{
		return "A_M_Y_BUSINESS_01_CHINESE_FULL_01";
	}
	if (iVar0 == 24)
	{
		return "A_M_Y_BUSINESS_02_BLACK_FULL_01";
	}
	if (iVar0 == 25)
	{
		return "A_M_Y_BUSINESS_02_WHITE_FULL_01";
	}
	if (iVar0 == 26)
	{
		return "A_M_Y_EASTSA_01_LATINO_FULL_01";
	}
	if (iVar0 == 27)
	{
		return "A_M_Y_GENSTREET_01_CHINESE_FULL_01";
	}
	if (iVar0 == 28)
	{
		return "A_M_Y_GENSTREET_01_WHITE_FULL_01";
	}
	if (iVar0 == 29)
	{
		return "A_M_Y_GENSTREET_02_BLACK_FULL_01";
	}
	if (iVar0 == 30)
	{
		return "A_M_Y_GENSTREET_02_LATINO_FULL_01";
	}
	if (iVar0 == 31)
	{
		return "A_M_Y_POLYNESIAN_01_POLYNESIAN_FULL_01";
	}
	return "A_M_Y_STLAT_01_LATINO_FULL_01";
}

int func_129(int iParam0)//Position - 0x5749
{
	int iVar0;
	iVar0 = 1;
	if (((((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("A_M_M_Tramp_01") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("A_F_M_Tramp_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("A_M_O_Tramp_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("S_M_Y_Cop_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("S_M_Y_Fireman_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("A_F_Y_Hiker_01"))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_130(int iParam0)//Position - 0x57C2
{
	iLocal_49 = 0;
	iLocal_47 = iParam0;
}

int func_131()//Position - 0x57D1
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()) == iLocal_63)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_155()//Position - 0x7948
{
	if (__LIB_12__::func_295(__LIB_0__::func_683()) >= iLocal_265)
	{
		return 1;
	}
	return 0;
}

int func_166()//Position - 0x8199
{
	if (__LIB_0__::func_121(iLocal_58))
	{
		if (!PED::IS_PED_INJURED(iLocal_58))
		{
			if (func_171(iLocal_58))
			{
				__LIB_0__::func_640(iLocal_58, "HIT_WOMAN", 24);
				return 1;
			}
			else
			{
				func_168();
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		if (((func_171(iLocal_57) || !PED::IS_PED_IN_ANY_VEHICLE(iLocal_57, false)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_57)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_57))
		{
			func_167(iLocal_58);
			return 1;
		}
	}
	else
	{
		func_167(iLocal_58);
		return 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_63, PLAYER::PLAYER_PED_ID(), true))
	{
		if (__LIB_0__::func_121(iLocal_58))
		{
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				func_167(iLocal_58);
				__LIB_0__::func_640(iLocal_58, "GENERIC_SHOCKED_HIGH", 24);
			}
		}
		func_229();
	}
	if (CLOCK::GET_CLOCK_HOURS() >= 19 || CLOCK::GET_CLOCK_HOURS() <= 6)
	{
		if (!__LIB_0__::func_75())
		{
			if (__LIB_2__::func_859(&uLocal_96, "BUSTOAU", "BUSTO_TIME", 4, 0, 0, 0))
			{
				return 1;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63, 220f, 220f, 30f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_167(int iParam0)//Position - 0x82DE
{
	if (__LIB_0__::func_121(iLocal_58))
	{
		if (!PED::IS_PED_INJURED(iLocal_58))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
			TASK::CLEAR_PED_TASKS(iParam0);
			TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iParam0, true);
			__LIB_0__::func_429();
		}
	}
}

void func_168()//Position - 0x8325
{
	if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 40f, 40f, 5f, false, true, 0))
	{
		iLocal_70 = MISC::GET_GAME_TIMER();
		if ((iLocal_70 - iLocal_71) > 10000)
		{
			if (!__LIB_0__::func_75())
			{
				__LIB_2__::func_859(&uLocal_96, "BUSTOAU", "BUSTO_STREET", 4, 0, 0, 0);
			}
			iLocal_71 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_171(int iParam0)//Position - 0x858B
{
	if (func_172(iParam0, &uLocal_90, &uLocal_87, uLocal_85, bLocal_91, 1077936128, 0) || PED::IS_PED_RAGDOLL(iParam0))
	{
		func_167(iParam0);
		return 1;
	}
	return 0;
}

int func_172(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5, int iParam6)//Position - 0x85C5
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	bVar2 = false;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !bParam4)
	{
		if (PED::IS_PED_ON_FOOT(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !bParam4)
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			Var4 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fVar5 = SYSTEM::VDIST(Var3, Var4);
			if (!BitTest(uParam3, 3))
			{
				if (__LIB_39__::func_353(iParam0, iParam6))
				{
					__LIB_38__::func_718("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					__LIB_38__::func_718("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					__LIB_39__::func_352(iParam0);
					return 1;
				}
			}
			if (!BitTest(uParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (MISC::IS_BULLET_IN_AREA(Var4, fParam5, true))
				{
					__LIB_38__::func_718("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					__LIB_38__::func_718("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					__LIB_39__::func_352(iParam0);
					return 1;
				}
				if (MISC::IS_PROJECTILE_IN_AREA(Var4 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var4 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), false))
				{
					__LIB_38__::func_718("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					__LIB_38__::func_718("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					__LIB_39__::func_352(iParam0);
					return 1;
				}
			}
			if (!BitTest(uParam3, 2))
			{
				fVar0 = WEAPON::GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						if (fVar5 < fVar0)
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 17))
							{
								__LIB_38__::func_718("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								__LIB_38__::func_718("	aggro Ped knows player is pointing gun\n");
								__LIB_39__::func_354("		lockOnTimer = ", *uParam2);
								__LIB_38__::func_718("\n");
								__LIB_39__::func_354("		time since not LockedOn = ", (MISC::GET_GAME_TIMER() - iLocal_43));
								__LIB_38__::func_718("\n");
								bVar2 = true;
								if (MISC::GET_GAME_TIMER() > (iLocal_43 + *uParam2))
								{
									__LIB_38__::func_718("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									__LIB_39__::func_352(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!BitTest(uParam3, 0))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_38__::func_718("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					__LIB_38__::func_718("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					__LIB_39__::func_352(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_43 = MISC::GET_GAME_TIMER();
	}
	return 0;
}

void func_180()//Position - 0x88D6
{
	MISC::SUPRESS_RANDOM_EVENT_THIS_FRAME(0, true);
	MISC::SUPRESS_RANDOM_EVENT_THIS_FRAME(1, true);
	MISC::SUPRESS_RANDOM_EVENT_THIS_FRAME(2, true);
	MISC::SUPRESS_RANDOM_EVENT_THIS_FRAME(3, true);
	MISC::SUPRESS_RANDOM_EVENT_THIS_FRAME(4, true);
	MISC::SUPRESS_RANDOM_EVENT_THIS_FRAME(5, true);
	MISC::SUPRESS_RANDOM_EVENT_THIS_FRAME(6, true);
	MISC::SUPRESS_RANDOM_EVENT_THIS_FRAME(7, true);
	MISC::SUPRESS_RANDOM_EVENT_THIS_FRAME(8, true);
}

void func_181()//Position - 0x8915
{
	PLAYER::SUPPRESS_WITNESSES_CALLING_POLICE_THIS_FRAME(PLAYER::PLAYER_ID());
	PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 5);
	PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 3);
	PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 15);
	PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 2);
	PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 4);
}

void func_182()//Position - 0x8953
{
	if (iLocal_75)
	{
		PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(Local_77.f_0, Local_77.f_1, Local_78.f_0, Local_78.f_1);
	}
}

void func_183()//Position - 0x8976
{
	if (MISC::IS_NEXT_WEATHER_TYPE("RAIN") || MISC::IS_NEXT_WEATHER_TYPE("THUNDER"))
	{
		MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("OVERCAST", 10000f);
	}
}

void func_184()//Position - 0x89A4
{
	int iVar0;
	int iVar1;
	if (__LIB_39__::func_350())
	{
		func_229();
	}
	else
	{
		iVar0 = joaat("A_F_M_BevHills_02");
		iVar1 = joaat("S_M_M_GenTransport");
		STREAMING::REQUEST_MODEL(iVar0);
		STREAMING::REQUEST_MODEL(iVar1);
		STREAMING::REQUEST_ANIM_DICT(sLocal_262);
		STREAMING::REQUEST_MODEL(joaat("tourbus"));
		HUD::REQUEST_ADDITIONAL_TEXT("BUSTOUR", 2);
		if ((((STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_262)) && STREAMING::HAS_MODEL_LOADED(joaat("tourbus"))) && HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
		{
			AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
			PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(Local_53, &uLocal_54, &uLocal_64, 1, 3f, 0f);
			iLocal_63 = VEHICLE::CREATE_VEHICLE(joaat("tourbus"), Local_51.f_1, Local_51.f_13, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_63, 5f);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_63, 3);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_63, false);
			AUDIO::SET_VEH_RADIO_STATION(iLocal_63, "OFF");
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_63, false, 0);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_63, 2, true);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tourbus"), true);
			VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_63, 100f);
			iLocal_57 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_63, 26, iVar1, -1, true, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_57, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_57, 251, true);
			PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(iLocal_57, true);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
			{
				if (!PED::IS_PED_INJURED(iLocal_57))
				{
					PED::SET_PED_COMPONENT_VARIATION(iLocal_57, 3, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_57, 4, 0, 2, 0);
				}
			}
			iLocal_58 = PED::CREATE_PED(26, iVar0, 102.9893f, 248.5367f, 107.1759f, 329f, true, true);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_58, "A_F_M_BEVHILLS_02_WHITE_FULL_02");
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_58, true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_58, false);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 4, 1, 0, 0);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_80);
			TASK::TASK_PLAY_ANIM(0, sLocal_262, "IDLE_A", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_262, "IDLE_B", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_262, "IDLE_C", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_80, true);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_80);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_58, iLocal_80);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_80);
			__LIB_0__::func_222(&uLocal_96, 3, iLocal_58, "TOURGUIDE", 0, 1);
			if (!HUD::DOES_BLIP_EXIST(iLocal_68))
			{
				iLocal_68 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_63);
				HUD::SET_BLIP_SPRITE(iLocal_68, 85);
			}
			func_185();
			iLocal_46 = 1;
		}
	}
}

void func_185()//Position - 0x8C1C
{
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_57, 17, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_58, 17, true);
	PED::ADD_RELATIONSHIP_GROUP("re_bus_tours1", &iLocal_66);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_57, iLocal_66);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_58, iLocal_66);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_66, joaat("PLAYER"));
}

void func_190()//Position - 0x8D96
{
	struct<15> Var0;
	struct<15> Var1;
	struct<15> Var2;
	struct<15> Var3;
	struct<15> Var4;
	struct<15> Var5;
	struct<15> Var6;
	struct<15> Var7;
	struct<15> Var8;
	struct<15> Var9;
	struct<15> Var10;
	struct<15> Var11;
	struct<15> Var12;
	Var0.f_1 = { -24.85f, 263.6119f, 106.5301f };
	Var0.f_4 = { -62.9588f, 335.2273f, 136.055f };
	Var0.f_7 = 10000;
	Var0.f_8 = (8f - 1f);
	Var0.f_10 = { -0.9281f, 266.8539f, 108.0699f };
	Var0.f_13 = 82f;
	Var0.f_0 = "BUSTO_P1";
	Var1.f_1 = { -214.9f, 267.4f, 91.5f };
	Var1.f_4 = { -253.7246f, 247.9038f, 95.2063f };
	Var1.f_7 = 9000;
	Var1.f_8 = (8f - 1f);
	Var1.f_10 = { -188.67f, 265.43f, 92.15f };
	Var1.f_13 = 81.79f;
	Var1.f_0 = "BUSTO_P5";
	Var2.f_1 = { -522.1094f, 260.8653f, 82.063f };
	Var2.f_4 = { -549.5739f, 272.7824f, 82.9753f };
	Var2.f_7 = 9000;
	Var2.f_8 = 8f;
	Var2.f_10 = { -435.0476f, 249.8727f, 82.0866f };
	Var2.f_13 = 85f;
	Var2.f_0 = "BUSTO_P6";
	Var3.f_1 = { -575.5643f, 512.5427f, 105.0293f };
	Var3.f_4 = { -586.4406f, 529.1188f, 108.8539f };
	Var3.f_7 = 9000;
	Var3.f_8 = (8f + 2f);
	Var3.f_10 = { -552.3732f, 481.7021f, 102.1826f };
	Var3.f_13 = 25f;
	Var3.f_0 = "BUSTO_P7";
	Var4.f_1 = { -732.2224f, 474.0897f, 105.0424f };
	Var4.f_4 = { -728.4921f, 448.0321f, 107.9036f };
	Var4.f_7 = 9000;
	Var4.f_8 = (8f + 3f);
	Var4.f_10 = { -688.5469f, 490.5489f, 108.784f };
	Var4.f_13 = 105f;
	Var4.f_0 = "BUSTO_P8";
	Var5.f_1 = { -1037.9698f, 468.9468f, 76.7167f };
	Var5.f_4 = { -1065.762f, 469.4401f, 80.3204f };
	Var5.f_7 = 9000;
	Var5.f_8 = (8f + 2f);
	Var5.f_10 = { -973.6752f, 499.3758f, 78.8246f };
	Var5.f_13 = 47f;
	Var5.f_0 = "BUSTO_P9";
	Var6.f_1 = { -1231.5812f, 239.014f, 64.8339f };
	Var6.f_4 = { -1309.7784f, 261.4181f, 65.87f };
	Var6.f_7 = 9000;
	Var6.f_8 = (8f + 4f);
	Var6.f_10 = { -1168.4482f, 257.0845f, 66.3477f };
	Var6.f_13 = 105f;
	Var6.f_0 = "BUSTO_P10";
	Var7.f_1 = { -1406.7286f, -160.0764f, 46.5244f };
	Var7.f_4 = { -1421.479f, -193.5715f, 50f };
	Var7.f_7 = 9000;
	Var7.f_8 = (8f + 4f);
	Var7.f_10 = { -1398.3905f, -114.7998f, 50.028f };
	Var7.f_13 = 178f;
	Var7.f_0 = "BUSTO_P11";
	Var8.f_1 = { -1316.2052f, -487.0228f, 32.3407f };
	Var8.f_4 = { -1271.7498f, -500.2502f, 44.4638f };
	Var8.f_7 = 9000;
	Var8.f_8 = (15f + 4f);
	Var8.f_10 = { -1356.9116f, -437.5389f, 34.0665f };
	Var8.f_13 = 215f;
	Var8.f_0 = "BUSTO_P3";
	Var9.f_1 = { -723.1427f, -239.0515f, 36.0196f };
	Var9.f_4 = { -696.7581f, -239.2147f, 40.8147f };
	Var9.f_7 = 9000;
	Var9.f_8 = (15f + 6f);
	Var9.f_10 = { -777.5432f, -262.5703f, 36.0082f };
	Var9.f_13 = 290f;
	Var9.f_0 = "BUSTO_P2";
	Var10.f_1 = { -690.7699f, -25.762f, 36.9897f };
	Var10.f_4 = { -695f, 22f, 53f };
	Var10.f_7 = 9000;
	Var10.f_8 = (15f + 5f);
	Var10.f_10 = { -696.695f, -40.7958f, 36.8186f };
	Var10.f_13 = 27.9347f;
	Var10.f_0 = "BUSTO_P14";
	Var11.f_1 = { 179.6443f, -340.3767f, 43.0448f };
	Var11.f_4 = { 235.139f, -393.0182f, 50.0242f };
	Var11.f_7 = 6000;
	Var11.f_8 = (15f + 5f);
	Var11.f_10 = { 113.5266f, -317.9667f, 44.6514f };
	Var11.f_13 = 250f;
	Var11.f_0 = "BUSTO_P13";
	Var12.f_1 = { 288.2845f, 166.6872f, 103.309f };
	Var12.f_4 = { 299.9585f, 198.3281f, 113.3522f };
	Var12.f_7 = 6000;
	Var12.f_8 = (15f + 3f);
	Var12.f_10 = { 344.1458f, 148.4554f, 102.159f };
	Var12.f_13 = 70f;
	Var12.f_0 = "BUSTO_P4";
	Local_51.f_1 = { 99.4291f, 246.9366f, 107.2005f };
	Local_51.f_4 = { 102.6186f, 254.6904f, 114.0255f };
	Local_51.f_7 = -1;
	Local_51.f_8 = 8f;
	Local_51.f_10 = { 177.5471f, 209.657f, 105.0543f };
	Local_51.f_13 = 70f;
	Local_51.f_0 = "BUSTO_Px";
	func_191(Var0);
	func_191(Var1);
	func_191(Var2);
	func_191(Var3);
	func_191(Var4);
	func_191(Var5);
	func_191(Var6);
	func_191(Var7);
	func_191(Var8);
	func_191(Var9);
	func_191(Var10);
	func_191(Var11);
	func_191(Var12);
	func_191(Local_51);
	iLocal_52 = 0;
}

void func_191(char[60] cParam0)//Position - 0x9362
{
	Local_50[iLocal_52 /*15*/] = { cParam0 };
	iLocal_52++;
}

int func_228()//Position - 0xA299
{
	if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 6)
	{
		return 0;
	}
	return 1;
}

void func_229()//Position - 0xA2BC
{
	int iVar0;
	PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_82))
	{
		CAM::SET_CAM_ACTIVE(iLocal_82, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_82, false);
		MISC::SET_MINIGAME_IN_PROGRESS(false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_83))
	{
		CAM::DESTROY_CAM(iLocal_83, false);
	}
	if (iLocal_47 >= 2)
	{
		CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_263);
	}
	HUD::DISPLAY_RADAR(true);
	if (iLocal_47 >= 1)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		if (!PED::IS_PED_INJURED(iLocal_57))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_57, 251, false);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_57, true);
			PED::SET_PED_KEEP_TASK(iLocal_57, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_57, false);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_57);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
	{
		if (!PED::IS_PED_INJURED(iLocal_58))
		{
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_58, true);
			PED::SET_PED_KEEP_TASK(iLocal_58, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_58, false);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_58);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_59[iVar0]))
		{
			if (__LIB_0__::func_121(uLocal_59[iVar0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_59[iVar0], false);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_59[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_63, 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_63, true);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_63);
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	if (__LIB_39__::func_333())
	{
		func_241();
	}
	else
	{
		__LIB_0__::func_56(&Global_32019);
	}
	GRAPHICS::SET_EXPOSURETWEAK(true);
	__LIB_39__::func_344(-1);
	SYSTEM::WAIT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_241()//Position - 0xAC20
{
	__LIB_0__::func_50(30000);
	__LIB_0__::func_56(&Global_32019);
	Global_32007 = MISC::GET_GAME_TIMER();
}

