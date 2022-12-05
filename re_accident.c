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
	bool bLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	float fLocal_55 = 0f;
	float fLocal_56 = 0f;
	struct<3> Local_57 = { 0, 0, 0 } ;
	struct<3> Local_58 = { 0, 0, 0 } ;
	int iLocal_59 = 0;
	struct<5> Local_60[31];
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	struct<5> Local_68[14];
	float fLocal_69 = 0f;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	struct<3> Local_74 = { 0, 0, 0 } ;
	struct<3> Local_75 = { 0, 0, 0 } ;
	struct<3> Local_76 = { 0, 0, 0 } ;
	struct<3> Local_77 = { 0, 0, 0 } ;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 16;
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
	struct<3> Local_273 = { 0, 0, 0 } ;
	struct<3> Local_274 = { 0, 0, 0 } ;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	var uLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	bool bLocal_282 = 0;
	struct<33> Local_283 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_284 = 1;
	struct<2> Local_285 = { 0, 5 } ;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 5;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
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
	iLocal_18 = 3;
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
	iLocal_49 = -1;
	iLocal_52 = -1;
	fLocal_55 = 0.5f;
	fLocal_56 = 0f;
	iLocal_62 = 1;
	fLocal_69 = 160f;
	iLocal_73 = 55000;
	Local_76 = { 30f, 30f, 5f };
	iLocal_102 = -1;
	Local_273 = { -458.4085f, -984.6459f, 22.5892f };
	Local_274 = { -458.1934f, -995.4897f, 22.7427f };
	Local_74 = { ScriptParam_285.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_180();
	}
	if (CLOCK::GET_CLOCK_HOURS() > 18 || CLOCK::GET_CLOCK_HOURS() < 5)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_42__.func_567(Local_74, -1, 0, 0, 0))
	{
		__LIB_35__.func_176(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			if (!__LIB_35__.func_175())
			{
				if (__LIB_40__.func_735())
				{
					func_180();
				}
			}
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_CA", 0);
			switch (iLocal_70)
			{
				case 0:
					if (__LIB_41__.func_467())
					{
						func_180();
					}
					func_115();
					__LIB_37__.func_551(&Local_283);
					break;
				case 1:
					func_22();
					__LIB_37__.func_551(&Local_283);
					func_13();
					break;
				case 2:
					if (((ENTITY::DOES_ENTITY_EXIST(iLocal_78) && PED::IS_PED_DEAD_OR_DYING(iLocal_78, true)) && iLocal_98 < 5) && !bLocal_95)
					{
						func_12();
					}
					func_1();
					break;
			}
		}
		else
		{
			func_180();
		}
	}
}

void func_1()//Position - 0x1CF
{
	if (iLocal_280 && !iLocal_281)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("RE14A_FAIL");
		iLocal_97 = 0;
		while (iLocal_97 < 11)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_88[iLocal_97]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_88[iLocal_97], false);
			}
			iLocal_97++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_80, false))
		{
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_80, 0f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_89))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_89, false);
		}
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
		__LIB_7__.func_279(0, 1, 1, 0, 0, 0, 0);
		iLocal_92 = 1;
		MISC::SET_TIME_SCALE(1f);
		STREAMING::REMOVE_ANIM_DICT("re@construction");
		if (CAM::DOES_CAM_EXIST(iLocal_275))
		{
			CAM::DESTROY_CAM(iLocal_275, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_84))
		{
			HUD::REMOVE_BLIP(&iLocal_84);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_85))
		{
			HUD::REMOVE_BLIP(&iLocal_85);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_86))
		{
			HUD::REMOVE_BLIP(&iLocal_86);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_87))
		{
			HUD::REMOVE_BLIP(&iLocal_87);
		}
		iLocal_281 = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_88[0]) || ENTITY::DOES_ENTITY_EXIST(iLocal_88[1]))
	{
		if (!CAM::IS_SPHERE_VISIBLE(Local_75 + Vector(20f, 0f, 0f), 30f) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_75, 80f, 80f, 80f, false, true, 0))
		{
			func_180();
		}
	}
}

void func_12()//Position - 0x631
{
	if (iLocal_102 == -1)
	{
		iLocal_102 = MISC::GET_GAME_TIMER() + 5000;
	}
	if (MISC::GET_GAME_TIMER() > iLocal_102)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, false);
			ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_80, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, true, true, true, false, true);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_80, false))
			{
				VEHICLE::EXPLODE_VEHICLE(iLocal_80, true, false);
			}
		}
	}
}

void func_13()//Position - 0x693
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_30__.func_869();
		func_20();
		func_17();
		func_14();
	}
}

void func_14()//Position - 0x6B7
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	Var1 = { 0f, 0f, 0f };
	if (iLocal_61 == 0)
	{
		if (FIRE::GET_CLOSEST_FIRE_POS(&Var1, Local_68[0 /*5*/]))
		{
			fVar2 = 0f;
			fVar5 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_68.f_0)
			{
				if (iVar0 > 0)
				{
					fVar2 = (fVar2 + MISC::GET_DISTANCE_BETWEEN_COORDS(Local_68[(iVar0 - 1) /*5*/], Local_68[iVar0 /*5*/], true));
				}
				if (Local_68[iVar0 /*5*/].f_4)
				{
					if (FIRE::GET_CLOSEST_FIRE_POS(&Var1, Local_68[iVar0 /*5*/]))
					{
						fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_68[iVar0 /*5*/], Var1, true);
						if (fVar4 < fVar5)
						{
							fVar5 = fVar4;
							fVar6 = fVar2;
							iVar3 = iVar0;
						}
					}
				}
				iVar0++;
			}
			if (fVar5 < fLocal_55)
			{
				iVar3 = iVar3;
				iLocal_61 = 1;
				iLocal_63 = MISC::GET_GAME_TIMER();
				fVar6 = fVar6;
				Local_58 = { Local_68[iVar3 /*5*/] };
				iLocal_59 = iVar3;
				iLocal_64 = iVar3 * 2;
				iLocal_66 = iLocal_64;
				iLocal_67 = iLocal_64;
				if (iLocal_67 < 0)
				{
					iLocal_67 = 0;
				}
				if (iLocal_66 >= Local_68.f_0 * 2)
				{
					iLocal_66 = (Local_68.f_0 * 2 - 1);
				}
			}
		}
	}
	if (iLocal_61 == 1)
	{
		GRAPHICS::SET_DISABLE_PETROL_DECALS_IGNITING_THIS_FRAME();
		fVar7 = (SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_63)) / fLocal_69);
		iVar8 = (SYSTEM::FLOOR((fVar7 / (1f / 2f))) - 1);
		iVar9 = (iLocal_64 + iVar8);
		iVar10 = (iLocal_64 - iVar8);
		if (iVar9 >= 28)
		{
			iVar9 = 27;
		}
		if (iVar10 < 0)
		{
			iVar10 = 0;
		}
		if (iVar9 > iLocal_66)
		{
			iVar0 = iLocal_66 + 1;
			while (iVar0 <= iVar9)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_68.f_0)
				{
					if (Local_68[iVar11 /*5*/].f_4)
					{
						func_15(iVar0, 1);
					}
					else
					{
						iVar9 = (iVar0 - 1);
						iVar0 = iVar9 + 1;
					}
				}
				iVar0++;
			}
			iLocal_66 = iVar9;
		}
		if (iVar10 < iLocal_67)
		{
			iVar0 = (iLocal_67 - 1);
			while (iVar0 >= iVar10)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_68.f_0)
				{
					if (Local_68[iVar11 /*5*/].f_4)
					{
						func_15(iVar0, 1);
					}
					else
					{
						iVar10 = iVar0 + 1;
						iVar0 = (iVar10 - 1);
					}
				}
				iVar0 = (iVar0 + -1);
			}
			iLocal_67 = iVar10;
		}
		iVar0 = 0;
		while (iVar0 < Local_60.f_0)
		{
			if ((MISC::GET_GAME_TIMER() - Local_60[iVar0 /*5*/].f_4) > 1000)
			{
				GRAPHICS::FADE_DECALS_IN_RANGE(Local_60[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((MISC::GET_GAME_TIMER() - Local_60[iVar0 /*5*/].f_4) > 6000)
			{
				FIRE::REMOVE_SCRIPT_FIRE(Local_60[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_15(int iParam0, bool bParam1)//Position - 0x8EF
{
	int iVar0;
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 14)
			{
				__LIB_30__.func_868(Local_68[(iParam0 / 2) /*5*/] + Local_68[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_56, fLocal_56, fLocal_56), bParam1);
			}
		}
		else if ((iParam0 / 2) < 14)
		{
			__LIB_30__.func_868(Local_68[(iParam0 / 2) /*5*/] + Vector(fLocal_56, fLocal_56, fLocal_56), bParam1);
		}
	}
}

void func_17()//Position - 0x9CF
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	if (bLocal_48)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (iVar1 == joaat("WEAPON_PETROLCAN"))
		{
			if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_54 == 0)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 8f, 4);
					iLocal_54 = MISC::GET_GAME_TIMER() + 250;
				}
				if (MISC::GET_GAME_TIMER() > iLocal_54)
				{
					if (!bLocal_44)
					{
						fVar4 = 9999.9f;
						Local_57 = { __LIB_29__.func_745() };
						iVar0 = 0;
						while (iVar0 < Local_68.f_0)
						{
							if (HUD::DOES_BLIP_EXIST(Local_68[iVar0 /*5*/].f_3))
							{
								fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_57, HUD::GET_BLIP_COORDS(Local_68[iVar0 /*5*/].f_3), true);
								fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_68[iVar0 /*5*/], HUD::GET_BLIP_COORDS(Local_68[iVar0 /*5*/].f_3), true);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_68[iVar0 /*5*/] = { Local_57 };
									}
								}
								if (fVar2 < fVar4)
								{
									fVar4 = fVar2;
									iVar5 = iVar0;
								}
							}
							iVar0++;
						}
						if (fVar4 < 2f)
						{
							if (iLocal_50 != -1)
							{
								if (MISC::ABSI((iLocal_51 - iVar5)) > 1)
								{
									iLocal_51 = -1;
								}
								if (iLocal_51 == -1)
								{
									iLocal_51 = iLocal_50;
								}
								if (MISC::ABSI((iLocal_51 - iVar5)) < 3 && MISC::ABSI((iLocal_51 - iVar5)) > 0)
								{
									if (iLocal_51 < iVar5)
									{
										iVar6 = iLocal_51;
										while (iVar6 <= (iVar5 - 1))
										{
											if (HUD::DOES_BLIP_EXIST(Local_68[iVar6 /*5*/].f_3))
											{
												if (HUD::GET_BLIP_ALPHA(Local_68[iVar6 /*5*/].f_3) > 0)
												{
													HUD::SET_BLIP_ALPHA(Local_68[iVar6 /*5*/].f_3, 0);
													Local_68[iVar6 /*5*/].f_4 = 1;
													iLocal_52 = (iLocal_52 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_51)
										{
											if (HUD::DOES_BLIP_EXIST(Local_68[iVar6 /*5*/].f_3))
											{
												if (HUD::GET_BLIP_ALPHA(Local_68[iVar6 /*5*/].f_3) > 0)
												{
													HUD::SET_BLIP_ALPHA(Local_68[iVar6 /*5*/].f_3, 0);
													Local_68[iVar6 /*5*/].f_4 = 1;
													iLocal_52 = (iLocal_52 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_51 = iLocal_50;
								}
								if (iVar5 == 0)
								{
									if (HUD::DOES_BLIP_EXIST(Local_68[iVar5 /*5*/].f_3))
									{
										if (HUD::GET_BLIP_ALPHA(Local_68[iVar5 /*5*/].f_3) > 0)
										{
											HUD::SET_BLIP_ALPHA(Local_68[iVar5 /*5*/].f_3, 0);
											Local_68[iVar5 /*5*/].f_4 = 1;
											iLocal_52 = (iLocal_52 - 1);
										}
									}
								}
								if (iVar5 == 13)
								{
									if (HUD::DOES_BLIP_EXIST(Local_68[iVar5 /*5*/].f_3))
									{
										if (HUD::GET_BLIP_ALPHA(Local_68[iVar5 /*5*/].f_3) > 0)
										{
											HUD::SET_BLIP_ALPHA(Local_68[iVar5 /*5*/].f_3, 0);
											Local_68[iVar5 /*5*/].f_4 = 1;
											iLocal_52 = (iLocal_52 - 1);
										}
									}
								}
								if (iVar5 < 13)
								{
									if (__LIB_0__.func_86(Local_68[iVar5 + 1 /*5*/]))
									{
										if (HUD::DOES_BLIP_EXIST(Local_68[iVar5 /*5*/].f_3))
										{
											if (HUD::GET_BLIP_ALPHA(Local_68[iVar5 /*5*/].f_3) > 0)
											{
												HUD::SET_BLIP_ALPHA(Local_68[iVar5 /*5*/].f_3, 0);
												Local_68[iVar5 /*5*/].f_4 = 1;
												iLocal_52 = (iLocal_52 - 1);
											}
										}
									}
								}
							}
							iLocal_50 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_50 = -1;
				iLocal_51 = -1;
				iLocal_54 = 0;
			}
		}
	}
}

void func_20()//Position - 0xD3E
{
	int iVar0;
	if (iLocal_46)
	{
		if (iLocal_61)
		{
			iVar0 = 0;
			while (iVar0 < Local_60.f_0)
			{
				FIRE::REMOVE_SCRIPT_FIRE(Local_60[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_46 = 0;
		iLocal_61 = 1;
		iLocal_63 = MISC::GET_GAME_TIMER();
		iVar0 = 0;
		while (iVar0 < Local_68.f_0)
		{
			Local_68[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_49 != -1)
		{
			iLocal_67 = iLocal_49;
			iLocal_66 = iLocal_49;
			iLocal_64 = iLocal_49;
		}
		else
		{
			iLocal_67 = -1;
			iLocal_66 = -1;
			iLocal_64 = iLocal_49;
		}
		iLocal_65 = 1;
	}
}

void func_22()//Position - 0xDC8
{
	switch (iLocal_71)
	{
		case 0:
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CONSTRUCTION_ACCIDENT_1", false, -1);
			STREAMING::REQUEST_ANIM_DICT("re@construction");
			if (Local_283.f_32 <= 0)
			{
				Local_283.f_32 = MISC::GET_FRAME_COUNT();
			}
			__LIB_37__.func_550(&Local_283, joaat("S_M_M_DockWork_01"));
			__LIB_37__.func_550(&Local_283, joaat("prop_generator_01a"));
			__LIB_37__.func_550(&Local_283, joaat("p_amb_phone_01"));
			__LIB_39__.func_558(&Local_283);
			if ((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CONSTRUCTION_ACCIDENT_1", false, -1) && STREAMING::HAS_ANIM_DICT_LOADED("re@construction")) && __LIB_39__.func_557(&Local_283))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_80, false))
				{
					iLocal_78 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_80, 26, joaat("S_M_M_DockWork_01"), -1, true, true);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_78, 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_78, 3, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_78, 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_78, 8, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(iLocal_78, "re@construction", "idle_c", 1000f, -1000f, -1, 49, 0.4f, false, false, false);
					iLocal_90 = OBJECT::CREATE_OBJECT(joaat("p_amb_phone_01"), -455.6561f, -985.8071f, 22.4868f, true, true, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_amb_phone_01"));
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_90, iLocal_78, PED::GET_PED_BONE_INDEX(iLocal_78, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_78, 17, true);
					PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(iLocal_78, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_78, true);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_78, false);
					__LIB_0__.func_203(&uLocal_108, 3, iLocal_78, "RECONACWorker", 0, 1);
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_78, "S_M_Y_GENERICWORKER_01_WHITE_01");
					iLocal_79 = PED::CREATE_PED(26, joaat("S_M_M_DockWork_01"), -462.2982f, -978.3272f, 65f, 221.4041f, true, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_79, true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_79, true, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_79, true);
					EVENT::SET_DECISION_MAKER(iLocal_78, joaat("empty"));
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(joaat("empty"), 24 /*EVENT_FIRE_NEARBY*/);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(joaat("empty"), 47 /*EVENT_ON_FIRE*/);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(joaat("empty"), 62 /*EVENT_POTENTIAL_WALK_INTO_FIRE*/);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(joaat("empty"), 138 /*EVENT_VEHICLE_ON_FIRE*/);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(joaat("empty"), 56 /*EVENT_PED_TO_FLEE*/);
					iLocal_89 = OBJECT::CREATE_OBJECT(joaat("prop_generator_01a"), Local_274.f_0, (Local_274.f_1 + 0.5f), (Local_274.f_2 - 0.25f), true, true, false);
					ENTITY::SET_ENTITY_HEADING(iLocal_89, 75f);
					ENTITY::SET_ENTITY_PROOFS(iLocal_89, false, true, true, false, false, false, false, false);
					iLocal_279 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sparking_generator", iLocal_89, 0f, 0f, 0.2f, 0f, 0f, 0f, 1f, false, false, false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_89, true);
					__LIB_42__.func_354(&uLocal_108, "CONACAU", "CONAC_CHAT", 4, 0, 0, 0, 0);
					iLocal_101 = MISC::GET_GAME_TIMER();
					iLocal_71 = 1;
				}
			}
			break;
		case 1:
			if (iLocal_91)
			{
				func_97();
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!iLocal_92)
				{
					if (!PED::IS_PED_INJURED(iLocal_78))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -532.2208f, -849.2668f, 19.7038f, -531.6973f, -1065.341f, 60.7893f, 190.8125f, false, true, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_80, false))
							{
								if (!HUD::DOES_BLIP_EXIST(iLocal_85))
								{
									iLocal_85 = __LIB_6__.func_825(iLocal_80, 0, 0);
								}
							}
						}
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_78, PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_80, PLAYER::PLAYER_PED_ID(), true))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, false);
							TASK::CLEAR_PED_TASKS(iLocal_78);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_107);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_107);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_78, iLocal_107);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_107);
							func_95();
						}
						STREAMING::REQUEST_MODEL(joaat("prop_ld_pipe_single_01"));
						if ((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -473.1686f, -984.6405f, 22.487f, 40f, 40f, 5f, false, true, 0) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && __LIB_0__.func_398(1, 0, 1)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_pipe_single_01")))
						{
							if (!__LIB_35__.func_175())
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
								{
									iLocal_83 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								}
								__LIB_40__.func_733(1);
							}
							iLocal_91 = 1;
						}
					}
					else
					{
						func_95();
					}
				}
				else
				{
					if (!PED::IS_PED_INJURED(iLocal_78))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_78, false))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_80, false) && !HUD::DOES_BLIP_EXIST(iLocal_85))
							{
								iLocal_85 = __LIB_6__.func_825(iLocal_80, 0, 0);
							}
						}
						else if (!HUD::DOES_BLIP_EXIST(iLocal_84))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_85))
							{
								HUD::REMOVE_BLIP(&iLocal_85);
							}
							iLocal_84 = __LIB_6__.func_850(iLocal_78, 0, 145);
						}
					}
					func_52();
					func_49();
					if (!PED::IS_PED_INJURED(iLocal_78))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_78, Local_76, false, true, 0))
						{
							if (!bLocal_93)
							{
								func_48();
							}
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_84))
						{
							HUD::REMOVE_BLIP(&iLocal_84);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_85))
						{
							HUD::REMOVE_BLIP(&iLocal_85);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_86))
						{
							HUD::REMOVE_BLIP(&iLocal_86);
						}
						if (PED::IS_PED_INJURED(iLocal_78) || ENTITY::IS_ENTITY_DEAD(iLocal_80, false))
						{
							func_95();
						}
					}
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_81, false))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_86))
						{
							HUD::REMOVE_BLIP(&iLocal_86);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_80, false) && !HUD::DOES_BLIP_EXIST(iLocal_85))
							{
								iLocal_85 = __LIB_6__.func_825(iLocal_80, 0, 0);
							}
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_81, false))
				{
					if (iLocal_103 >= 3)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("bulldozer")))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_86))
							{
								HUD::REMOVE_BLIP(&iLocal_86);
								if (!PED::IS_PED_INJURED(iLocal_78) && !ENTITY::IS_ENTITY_DEAD(iLocal_80, false))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_78, false) && !HUD::DOES_BLIP_EXIST(iLocal_85))
									{
										iLocal_85 = __LIB_6__.func_825(iLocal_80, 0, 0);
									}
								}
							}
						}
						else if (!PED::IS_PED_INJURED(iLocal_78) && !ENTITY::IS_ENTITY_DEAD(iLocal_80, false))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_78, false) && HUD::DOES_BLIP_EXIST(iLocal_85))
							{
								HUD::REMOVE_BLIP(&iLocal_85);
								if (!HUD::DOES_BLIP_EXIST(iLocal_86))
								{
									iLocal_86 = __LIB_6__.func_825(iLocal_81, 0, 0);
								}
							}
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_78))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("bulldozer")))
						{
							iLocal_97 = 0;
							while (iLocal_97 < 11)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_88[iLocal_97]))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_88[iLocal_97], false);
								}
								iLocal_97++;
							}
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_80, false))
				{
					if (FIRE::IS_ENTITY_ON_FIRE(iLocal_80))
					{
						iLocal_97 = 0;
						while (iLocal_97 < 11)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_88[iLocal_97]))
							{
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_88[iLocal_97], false);
							}
							iLocal_97++;
						}
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, false);
						if (!PED::IS_PED_INJURED(iLocal_78))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_78, false))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_78, true);
								PED::SET_PED_CONFIG_FLAG(iLocal_78, 116, false);
								PED::SET_PED_CONFIG_FLAG(iLocal_78, 29, false);
								if (!bLocal_95)
								{
									__LIB_6__.func_771();
									SYSTEM::WAIT(0);
									__LIB_37__.func_799(&uLocal_108, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
									while (__LIB_0__.func_75())
									{
										SYSTEM::WAIT(0);
									}
									bLocal_95 = true;
								}
								if (!PED::IS_PED_INJURED(iLocal_78))
								{
									ENTITY::SET_ENTITY_HEALTH(iLocal_78, 99, 0);
								}
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_80, false))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, false);
									ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_80, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, true, true, true, false, true);
									VEHICLE::EXPLODE_VEHICLE(iLocal_80, true, false);
								}
								func_95();
							}
						}
					}
				}
			}
			break;
	}
}

void func_48()//Position - 0x1E4A
{
	switch (iLocal_103)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_78))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_101) > 3000)
				{
					__LIB_37__.func_799(&uLocal_108, "CONACAU", "CONAC_HELP", 4, 0, 0, 0);
					iLocal_105 = MISC::GET_GAME_TIMER();
					iLocal_101 = MISC::GET_GAME_TIMER();
					iLocal_103 = 2;
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_78))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_101) > 3000)
				{
					iLocal_101 = MISC::GET_GAME_TIMER();
					iLocal_103++;
				}
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_78))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_101) > 5000 && !__LIB_0__.func_75())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_106 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_78, false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_81, false))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("bulldozer")))
								{
									if (!HUD::DOES_BLIP_EXIST(iLocal_86))
									{
										iLocal_86 = __LIB_6__.func_825(iLocal_81, 0, 0);
										if (HUD::DOES_BLIP_EXIST(iLocal_85))
										{
											HUD::REMOVE_BLIP(&iLocal_85);
										}
									}
								}
							}
							else if (!HUD::DOES_BLIP_EXIST(iLocal_86))
							{
								iLocal_86 = __LIB_6__.func_825(iLocal_81, 0, 0);
								if (HUD::DOES_BLIP_EXIST(iLocal_85))
								{
									HUD::REMOVE_BLIP(&iLocal_85);
								}
							}
						}
					}
					if (iLocal_106 == joaat("bulldozer"))
					{
						__LIB_37__.func_799(&uLocal_108, "CONACAU", "CONAC_HELP2", 4, 0, 0, 0);
					}
					else
					{
						__LIB_37__.func_799(&uLocal_108, "CONACAU", "CONAC_HELP3", 4, 0, 0, 0);
					}
					iLocal_101 = MISC::GET_GAME_TIMER();
					iLocal_103++;
				}
			}
			break;
		case 3:
			if (MISC::GET_GAME_TIMER() - iLocal_101) > MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000)
			{
				if (!__LIB_0__.func_75())
				{
					__LIB_37__.func_799(&uLocal_108, "CONACAU", "CONAC_HURRY", 4, 0, 0, 0);
					iLocal_101 = MISC::GET_GAME_TIMER();
				}
			}
			break;
	}
}

void func_49()//Position - 0x2020
{
	switch (iLocal_99)
	{
		case 0:
			GRAPHICS::ADD_PETROL_DECAL(Local_274 + Vector(0f, 1f, 0f), 1f, 1f, 1f);
			SYSTEM::WAIT(0);
			GRAPHICS::START_PETROL_TRAIL_DECALS(1f);
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(Local_273, 1f);
			SYSTEM::WAIT(0);
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(Local_273 - Vector(0f, 4f, 0f), 1f);
			SYSTEM::WAIT(0);
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(Local_273 - Vector(0f, 8f, 0f), 1f);
			SYSTEM::WAIT(0);
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(Local_274, 1f);
			GRAPHICS::END_PETROL_TRAIL_DECALS();
			iLocal_105 = MISC::GET_GAME_TIMER();
			iLocal_99 = 2;
			break;
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_105) > iLocal_73 || func_51())
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_279))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_279, false);
				}
				func_50();
				if (!bLocal_95)
				{
					if (!PED::IS_PED_INJURED(iLocal_78) && !ENTITY::IS_ENTITY_DEAD(iLocal_80, false))
					{
						if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_78, iLocal_80, -1, false, false) && !VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_78, iLocal_80, 0, false, false))
						{
							__LIB_6__.func_771();
							SYSTEM::WAIT(0);
							__LIB_37__.func_799(&uLocal_108, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
							bLocal_95 = true;
						}
					}
				}
				MISC::ENABLE_DISPATCH_SERVICE(3, true);
				MISC::SET_DISPATCH_IDEAL_SPAWN_DISTANCE(80f);
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-460.30194f, -870.3607f, 21.89325f, -508.4859f, -981.11993f, 27.320866f, 36.5625f, false, true, true);
				MISC::CREATE_INCIDENT(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_278, 0, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_99 = 3;
			}
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
			{
				if (!FIRE::IS_ENTITY_ON_FIRE(iLocal_80))
				{
				}
			}
			if (iLocal_98 < 2)
			{
				if (SYSTEM::TIMERA() > 5000)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_80, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, false);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_80, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, true, true, true, false, true);
						VEHICLE::EXPLODE_VEHICLE(iLocal_80, true, false);
					}
				}
			}
			break;
	}
}

void func_50()//Position - 0x2203
{
	iLocal_46 = 1;
}

int func_51()//Position - 0x220E
{
	if (iLocal_61 == 1)
	{
		return 1;
	}
	return 0;
}

void func_52()//Position - 0x2221
{
	struct<3> Var0;
	switch (iLocal_98)
	{
		case 0:
			if (iLocal_103 >= 2)
			{
				if (!PED::IS_PED_INJURED(iLocal_78) && !ENTITY::IS_ENTITY_DEAD(iLocal_80, false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_78, false))
					{
						iLocal_98++;
					}
					OBJECT::DELETE_OBJECT(&iLocal_90);
					if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_78, iLocal_80, -1, false, false) || VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_78, iLocal_80, 0, false, false))
					{
						if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_78, iLocal_80, -1, false, false))
						{
							bLocal_94 = true;
							Local_77 = { ENTITY::GET_ENTITY_COORDS(iLocal_80, false) + Vector(0f, -1f, -3f) };
						}
						else
						{
							Local_77 = { ENTITY::GET_ENTITY_COORDS(iLocal_80, false) + Vector(0f, 1.5f, -3f) };
						}
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_77, 4.2f, 4f, 5f, false, true, 0))
						{
							if (!bLocal_93)
							{
								__LIB_6__.func_771();
								SYSTEM::WAIT(0);
								__LIB_37__.func_799(&uLocal_108, "CONACAU", "CONAC_FREE", 4, 0, 0, 0);
								bLocal_93 = true;
							}
						}
						else
						{
							bLocal_93 = true;
							iLocal_98++;
						}
					}
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_78) && !ENTITY::IS_ENTITY_DEAD(iLocal_80, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_81, false))
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_81, false, true, true, false, false, false, false, false);
				}
				ENTITY::SET_ENTITY_PROOFS(iLocal_78, false, true, false, false, false, false, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_107);
				if (bLocal_94)
				{
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 0.25f, 0, 40000f);
				}
				else
				{
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 0.25f, 0, 40000f);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_107);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_78, iLocal_107);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_107);
				PED::SET_PED_KEEP_TASK(iLocal_78, true);
				iLocal_101 = MISC::GET_GAME_TIMER();
				iLocal_98++;
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_78))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_101) > 500 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_78, false))
				{
					iLocal_73 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_80, false))
					{
					}
					__LIB_6__.func_771();
					SYSTEM::WAIT(0);
					__LIB_37__.func_799(&uLocal_108, "CONACAU", "CONAC_BOOM", 4, 0, 0, 0);
					iLocal_101 = MISC::GET_GAME_TIMER();
					iLocal_98++;
				}
			}
			break;
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_78))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_78, -464.7217f, -989.7214f, 22.4867f, 3f, 10f, 3f, false, true, 0) || (MISC::GET_GAME_TIMER() - iLocal_101) > 10000)
				{
					__LIB_37__.func_799(&uLocal_108, "CONACAU", "CONAC_AAAH", 4, 0, 0, 0);
					iLocal_98++;
				}
			}
			break;
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_78))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_78, -472.7056f, -991.105f, 22.4867f, 3f, 30f, 3f, false, true, 0) || (MISC::GET_GAME_TIMER() - iLocal_101) > 10000)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_80, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, false);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_80, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, true, true, true, false, true);
						VEHICLE::EXPLODE_VEHICLE(iLocal_80, true, false);
					}
					iLocal_98++;
				}
			}
			break;
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_101) > 3000)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_80, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, false);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_80, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, true, true, true, false, true);
					VEHICLE::EXPLODE_VEHICLE(iLocal_80, true, false);
				}
				if (!PED::IS_PED_INJURED(iLocal_78))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RE14A_SAFE");
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_81, false))
					{
						ENTITY::SET_ENTITY_PROOFS(iLocal_81, false, false, false, false, false, false, false, false);
					}
					ENTITY::SET_ENTITY_PROOFS(iLocal_78, false, false, false, false, false, false, false, false);
					PED::SET_PED_CAN_RAGDOLL(iLocal_78, true);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_78, true);
					PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(iLocal_78, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_78, false);
					EVENT::SET_DECISION_MAKER(iLocal_78, joaat("DEFAULT"));
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					TASK::OPEN_SEQUENCE_TASK(&iLocal_107);
					TASK::TASK_PLAY_ANIM(0, "re@construction", "Out_Of_Breath", 2f, -2f, -1, 0, 0f, false, false, false);
					TASK::SET_SEQUENCE_TO_REPEAT(iLocal_107, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_107);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_78, iLocal_107);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_107);
				}
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-460.30194f, -870.3607f, 21.89325f, -508.4859f, -981.11993f, 27.320866f, 36.5625f, false, true, true);
				MISC::CREATE_INCIDENT(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_278, 0, 0);
				iLocal_101 = MISC::GET_GAME_TIMER();
				iLocal_98++;
			}
			break;
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_78))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_101) > 6400)
				{
					Var0 = { -477.2774f, -990.0638f, 23.5497f };
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, false, true, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_83))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_83, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, false, true, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_81))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_81, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, false, true, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					TASK::OPEN_SEQUENCE_TASK(&iLocal_107);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_START_SCENARIO_AT_POSITION(0, "WORLD_HUMAN_PICNIC", Var0, 304.8172f, 0, true, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_107);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_78, iLocal_107);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_107);
					__LIB_37__.func_799(&uLocal_108, "CONACAU", "CONAC_THANK", 4, 0, 0, 0);
					func_53();
				}
			}
			else
			{
				func_95();
			}
			break;
	}
}

void func_53()//Position - 0x2829
{
	while (!__LIB_0__.func_109())
	{
		SYSTEM::WAIT(0);
	}
	__LIB_26__.func_515(__LIB_18__.func_173(), 4, 2);
	__LIB_40__.func_739(-1, 0);
	__LIB_20__.func_174();
	iLocal_70 = 2;
}

void func_95()//Position - 0x431F
{
	AUDIO::TRIGGER_MUSIC_EVENT("RE14A_FAIL");
	iLocal_70 = 2;
}

void func_97()//Position - 0x4346
{
	if (__LIB_6__.func_841(1000))
	{
		__LIB_6__.func_771();
		CAM::DO_SCREEN_FADE_OUT(800);
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_80, false))
		{
			VEHICLE::SET_VEHICLE_DAMAGE(iLocal_80, 0f, 1f, 1f, 200f, 800f, true);
		}
		bLocal_282 = true;
		iLocal_72 = 8;
	}
	switch (iLocal_72)
	{
		case 0:
			__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			HUD::CLEAR_ALL_HELP_MESSAGES();
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true, false);
			}
			MISC::CLEAR_AREA_OF_PEDS(Local_75, 50f, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(Local_75, 30f, false, false, false, false, false, false, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(Local_75, 100f, 0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_75, 8f, 8f, 8f, false, true, 0))
				{
					iLocal_82 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_82, true, false);
					VEHICLE::DELETE_VEHICLE(&iLocal_82);
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -473.1686f, -984.6405f, 22.487f, 15f, 15f, 5f, false, true, 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -477.3538f, -972.67f, 22.5494f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 237.4839f);
			}
			iLocal_276 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, -0.1371f, -0.0346f, -29.6605f, 28f, true, 2);
			iLocal_277 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, 69.4831f, -0.0346f, -40.8884f, 28f, true, 2);
			CAM::SHAKE_CAM(iLocal_276, "HAND_SHAKE", 0.3f);
			CAM::SHAKE_CAM(iLocal_277, "HAND_SHAKE", 0.3f);
			__LIB_9__.func_990();
			CAM::SET_CAM_ACTIVE(iLocal_276, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			SYSTEM::WAIT(500);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_277, iLocal_276, 3500, 1, 1);
			AUDIO::TRIGGER_MUSIC_EVENT("RE14A_START");
			iLocal_104 = MISC::GET_GAME_TIMER();
			iLocal_72 = 1;
			break;
		case 1:
			if ((MISC::GET_GAME_TIMER() - iLocal_104) > 3500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAKEN", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_100, "WIND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
				OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(iLocal_88[0], true);
				__LIB_31__.func_166(iLocal_276);
				__LIB_31__.func_166(iLocal_277);
				iLocal_276 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -455.4617f, -990.631f, 61.6885f, -89.0761f, -0.0146f, -49.881f, 80.5355f, true, 2);
				iLocal_277 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -455.4543f, -990.6208f, 61.012f, -89.0759f, -0.0146f, -47.8226f, 80.5355f, true, 2);
				CAM::SHAKE_CAM(iLocal_276, "HAND_SHAKE", 0.3f);
				CAM::SHAKE_CAM(iLocal_277, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_277, iLocal_276, 4000, 1, 0);
				if (!PED::IS_PED_INJURED(iLocal_78))
				{
					TASK::CLEAR_PED_TASKS(iLocal_78);
					TASK::TASK_LOOK_AT_COORD(iLocal_78, -461.4785f, -984.8583f, 28.0809f, 30000, 2080, 2);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_90))
				{
					ENTITY::DETACH_ENTITY(iLocal_90, true, true);
					OBJECT::DELETE_OBJECT(&iLocal_90);
				}
				iLocal_104 = MISC::GET_GAME_TIMER();
				iLocal_72 = 2;
			}
			break;
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_104) > 1500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CABLE_SNAPS", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
				iLocal_104 = MISC::GET_GAME_TIMER();
				iLocal_72 = 3;
			}
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_104) > 500)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_88[0]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_88[0], false);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_88[0], 0, 0f, 0f, 5f, 0f, -2f, 2f, 0, true, true, true, false, true);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(iLocal_88[0], 11, false);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(iLocal_88[0], 18, false);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(iLocal_88[0], 19, false);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(iLocal_88[0], 23, false);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(iLocal_88[0], 9, false);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(iLocal_88[0], 12, false);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(iLocal_88[0], 17, false);
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_reconstruct_pipefall_debris", iLocal_88[0], 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
				}
				iLocal_104 = MISC::GET_GAME_TIMER();
				iLocal_72 = 4;
			}
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_104) > 2000)
			{
				__LIB_31__.func_166(iLocal_276);
				__LIB_31__.func_166(iLocal_277);
				iLocal_276 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 25.437f, -0.0087f, -118.3831f, 34f, true, 2);
				iLocal_277 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 2.0695f, -0.0087f, -120.2811f, 34f, true, 2);
				CAM::SHAKE_CAM(iLocal_276, "HAND_SHAKE", 0.3f);
				CAM::SHAKE_CAM(iLocal_277, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_277, iLocal_276, 1000, 3, 3);
				AUDIO::STOP_SOUND(iLocal_100);
				iLocal_104 = MISC::GET_GAME_TIMER();
				iLocal_72 = 5;
			}
			break;
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_104) > 500)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_80, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "PIPES_LAND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
					VEHICLE::SET_VEHICLE_DAMAGE(iLocal_80, 0f, 1f, 1f, 200f, 800f, true);
					if (!PED::IS_PED_INJURED(iLocal_78))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_78);
					}
					TASK::TASK_PLAY_ANIM(iLocal_78, "re@construction", "idle_panic", 8f, -8f, -1, 16, 0f, false, false, false);
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_reconstruct_pipe_impact", iLocal_80, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
					__LIB_37__.func_799(&uLocal_108, "CONACAU", "CONAC_SCREAM", 4, 0, 0, 0);
					if (CAM::DOES_CAM_EXIST(iLocal_276) && CAM::DOES_CAM_EXIST(iLocal_277))
					{
						CAM::SHAKE_CAM(iLocal_276, "HAND_SHAKE", 1.5f);
						CAM::SHAKE_CAM(iLocal_277, "HAND_SHAKE", 1.5f);
					}
					iLocal_104 = MISC::GET_GAME_TIMER();
					iLocal_72 = 6;
				}
			}
			break;
		case 6:
			if ((MISC::GET_GAME_TIMER() - iLocal_104) > 500)
			{
				__LIB_31__.func_166(iLocal_276);
				__LIB_31__.func_166(iLocal_277);
				iLocal_276 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -459.2609f, -987.5602f, 24.2611f, 0.583f, 0.2617f, -32.7532f, 49.9914f, true, 2);
				iLocal_277 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -459.0622f, -987.2584f, 24.2661f, 5.0301f, 0.2617f, -36.7308f, 49.9914f, true, 2);
				CAM::SHAKE_CAM(iLocal_276, "HAND_SHAKE", 0.5f);
				CAM::SHAKE_CAM(iLocal_277, "HAND_SHAKE", 0.5f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_277, iLocal_276, 2500, 3, 3);
				if (!PED::IS_PED_INJURED(iLocal_78))
				{
					TASK::TASK_LOOK_AT_COORD(iLocal_78, ENTITY::GET_ENTITY_COORDS(iLocal_78, true) - Vector(10f, 0f, 2f), 30000, 2080, 2);
				}
				iLocal_104 = MISC::GET_GAME_TIMER();
				iLocal_72 = 7;
			}
			break;
		case 7:
			if ((MISC::GET_GAME_TIMER() - iLocal_104) > 2200 && !iLocal_96)
			{
				if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_96 = 1;
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_104) > 2500)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_80, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, true);
				}
				iLocal_72 = 8;
			}
			break;
		case 8:
			AUDIO::TRIGGER_MUSIC_EVENT("RE14A_PIPES");
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_88[0]))
			{
				OBJECT::DELETE_OBJECT(&(iLocal_88[0]));
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_80, false))
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_80, 250f);
				ENTITY::SET_ENTITY_COORDS(iLocal_80, Local_75, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_80, 80f);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_75, 50f, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_78))
			{
				TASK::CLEAR_PED_TASKS(iLocal_78);
				TASK::TASK_CLEAR_LOOK_AT(iLocal_78);
				TASK::TASK_PLAY_ANIM(iLocal_78, "re@construction", "idle_panic", 8f, -8f, -1, 1, 0f, false, false, false);
			}
			CAM::SET_CAM_ACTIVE(iLocal_276, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::DESTROY_CAM(iLocal_276, false);
			CAM::DESTROY_CAM(iLocal_277, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			HUD::DISPLAY_RADAR(true);
			HUD::DISPLAY_HUD(true);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
			__LIB_7__.func_279(0, 1, 1, 0, 0, 0, 0);
			iLocal_101 = MISC::GET_GAME_TIMER();
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_pipe_stack_01"));
			iLocal_88[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -457.8815f, -988.9059f, 22.9554f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_88[1], -0.1939f, 105.0058f, 77.3964f, 2, true);
			iLocal_88[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -451.5131f, -986.8079f, 24.6947f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_88[2], 24.3941f, 32.5423f, 80.6862f, 2, true);
			iLocal_88[3] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -450.8099f, -985.9972f, 24.7104f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_88[3], 24.1841f, 110.287f, 78.4357f, 2, true);
			iLocal_88[4] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -456.6558f, -987.3979f, 22.9537f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_88[4], -0.0264f, 29.5754f, 79.1811f, 2, true);
			iLocal_88[5] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -456.1279f, -988.4162f, 22.9889f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_88[5], -0.6337f, 108.4339f, 77.9539f, 2, true);
			iLocal_88[6] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -457.0807f, -987.3059f, 23.7564f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_88[6], 0.0929f, 74.2657f, 79.3839f, 2, true);
			iLocal_88[7] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -456.6558f, -983.7804f, 22.9712f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_88[7], -0.0264f, 29.5754f, 80.9061f, 2, true);
			iLocal_88[8] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -455.3279f, -983.1712f, 22.9564f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_88[8], -0.1087f, 109.7339f, 80.9789f, 2, true);
			iLocal_88[9] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -456.1632f, -983.9359f, 23.7964f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_88[9], -0.3321f, 74.1907f, 81.6089f, 2, true);
			iLocal_88[10] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -454.644f, -994.1709f, 23.3329f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_88[10], 5.7811f, 104.6058f, 104.6964f, 2, true);
			iLocal_97 = 0;
			while (iLocal_97 < 11)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_88[iLocal_97]))
				{
					ENTITY::SET_ENTITY_DYNAMIC(iLocal_88[iLocal_97], true);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_88[iLocal_97], true);
				}
				iLocal_97++;
			}
			if (bLocal_282)
			{
				CAM::DO_SCREEN_FADE_IN(800);
				while (CAM::IS_SCREEN_FADING_IN())
				{
					SYSTEM::WAIT(0);
				}
			}
			iLocal_92 = 1;
			iLocal_91 = 0;
			break;
	}
}

void func_115()//Position - 0x5489
{
	int iVar0;
	__LIB_37__.func_550(&Local_283, joaat("bulldozer"));
	__LIB_37__.func_550(&Local_283, joaat("utillitruck2"));
	__LIB_37__.func_550(&Local_283, joaat("prop_pipe_stack_01"));
	if (__LIB_39__.func_557(&Local_283))
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck2"), true);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_74 + Vector(50f, 50f, 50f), Local_74 - Vector(50f, 50f, 50f), false, true, true, true);
		Local_75 = { -455.6561f, -985.8071f, 22.4868f };
		iLocal_80 = VEHICLE::CREATE_VEHICLE(joaat("utillitruck2"), Local_75, 80f, true, true, false);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_80, false, true, false);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_80, 3);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_80, 1, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_80, 2, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_80, 3, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_80, 4, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_80, 5, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_80, 6, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_80, 7, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, true);
		ENTITY::SET_ENTITY_PROOFS(iLocal_80, false, false, false, true, false, false, false, false);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_80, 10000);
		VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_80, 5f);
		iLocal_81 = VEHICLE::CREATE_VEHICLE(joaat("bulldozer"), -472.9444f, -966.671f, 22.5534f, 181.8365f, true, true, false);
		MISC::CLEAR_AREA(Local_75, 10f, true, false, false, false);
		iLocal_88[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_pipe_stack_01"), -453.2f, -986.1f, 59.45f, true, true, false);
		ENTITY::SET_ENTITY_HEADING(iLocal_88[0], 90f);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_88[0], true);
		ENTITY::SET_ENTITY_PROOFS(iLocal_88[0], true, true, true, true, false, false, false, false);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_88[0], 10000000);
		Local_68[0 /*5*/] = { Local_274 };
		Local_68[1 /*5*/] = { Local_274 + Vector(0f, 0.5f, 0f) };
		Local_68[2 /*5*/] = { Local_274 + Vector(0f, 1f, 0f) };
		Local_68[3 /*5*/] = { Local_274 + Vector(0f, 2.5f, 0f) };
		Local_68[4 /*5*/] = { Local_274 + Vector(0f, 3f, 0f) };
		Local_68[5 /*5*/] = { Local_274 + Vector(0f, 3.5f, 0f) };
		Local_68[6 /*5*/] = { Local_274 + Vector(0f, 4f, 0f) };
		Local_68[7 /*5*/] = { Local_274 + Vector(0f, 4.5f, 0f) };
		Local_68[8 /*5*/] = { Local_274 + Vector(0f, 5f, 0f) };
		Local_68[9 /*5*/] = { Local_274 + Vector(0f, 5.5f, 0f) };
		Local_68[10 /*5*/] = { Local_274 + Vector(0f, 6f, 0f) };
		Local_68[11 /*5*/] = { Local_274 + Vector(0f, 6.5f, 0f) };
		Local_68[12 /*5*/] = { Local_274 + Vector(0f, 7f, 0f) };
		Local_68[13 /*5*/] = { Local_273 };
		iVar0 = 0;
		while (iVar0 < Local_68.f_0)
		{
			Local_68[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_87))
		{
		}
		__LIB_39__.func_579(&Local_283, 0);
		iLocal_280 = 1;
		iLocal_70 = 1;
	}
}

void func_180()//Position - 0x8C22
{
	if (iLocal_280)
	{
		if (!iLocal_281)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("RE14A_FAIL");
			__LIB_6__.func_833();
			if (!PED::IS_PED_INJURED(iLocal_78))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_78, 317, true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_83, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_83, false) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 50f, 50f, 50f, false, true, 0))
				{
					__LIB_39__.func_912(iLocal_83, 0, 145);
				}
			}
			iLocal_97 = 0;
			while (iLocal_97 < 11)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_88[iLocal_97]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_88[iLocal_97], false);
				}
				iLocal_97++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_80, false))
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_80, 0f);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_89))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_89, false);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			HUD::DISPLAY_RADAR(true);
			HUD::DISPLAY_HUD(true);
			__LIB_7__.func_279(0, 1, 1, 0, 0, 0, 0);
			iLocal_92 = 1;
			MISC::SET_TIME_SCALE(1f);
			STREAMING::REMOVE_ANIM_DICT("re@construction");
			if (CAM::DOES_CAM_EXIST(iLocal_275))
			{
				CAM::DESTROY_CAM(iLocal_275, false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_84))
			{
				HUD::REMOVE_BLIP(&iLocal_84);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_85))
			{
				HUD::REMOVE_BLIP(&iLocal_85);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_86))
			{
				HUD::REMOVE_BLIP(&iLocal_86);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_87))
			{
				HUD::REMOVE_BLIP(&iLocal_87);
			}
		}
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-460.30194f, -870.3607f, 21.89325f, -508.4859f, -981.11993f, 27.320866f, 36.5625f, 1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::RESET_DISPATCH_IDEAL_SPAWN_DISTANCE();
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	}
	__LIB_39__.func_579(&Local_283, 0);
	__LIB_41__.func_466(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

