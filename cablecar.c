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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	struct<3> Local_54 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_57 = { 0, 0, 0 } ;
	struct<3> Local_58 = { 0, 0, 0 } ;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	struct<49> Local_64[2];
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	float fLocal_68 = 0f;
	struct<22> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	var uLocal_82 = 16;
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
	struct<35> Local_200 = { 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0 } ;
	struct<35> Local_201 = { 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0 } ;
	var uLocal_202 = 0;
	var uLocal_203 = 2;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 2;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 2;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = -1027211264;
	var uLocal_225 = 0;
	int iLocal_226 = 0;
	float fLocal_227 = 0f;
	int iLocal_228 = 0;
	float fLocal_229 = 0f;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	struct<3> Local_236 = { 0, 0, 0 } ;
	struct<3> Local_237 = { 0, 0, 0 } ;
	float fLocal_238 = 0f;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	bool bLocal_241 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	struct<3> Var1;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	iLocal_50 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_51 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_53 = 1;
	Local_54 = { -740.3f, 5594.5f, 41.2f };
	Local_55 = { 446.8f, 5571.1f, 780.7f };
	Local_56 = { 0f, 2.48f, -5.3f };
	Local_57 = { 1.3f, 0f, -5.3f };
	Local_58 = { -1.3f, 0f, -5.3f };
	fLocal_59 = 1f;
	fLocal_60 = 10f;
	fLocal_61 = 0.65f;
	iLocal_62 = 120000;
	iLocal_63 = 35000;
	iLocal_65 = joaat("p_cablecar_s");
	iLocal_66 = joaat("p_cablecar_s_door_l");
	iLocal_67 = joaat("p_cablecar_s_door_r");
	fLocal_68 = -15f;
	iLocal_81 = 1;
	fLocal_227 = 3f;
	fLocal_229 = 0f;
	iLocal_231 = 21;
	iLocal_235 = -1;
	Var1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cablecar")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(227))
	{
		__LIB_26__.func_354(1, 1, 1, 1);
		Global_31965 = 0;
		func_302(0);
	}
	__LIB_0__.func_524(PLAYER::PLAYER_PED_ID());
	func_294();
	func_293(&(Local_64[0 /*49*/]));
	func_290(&(Local_64[1 /*49*/]));
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_COUNTRYSIDE_CHILEAD_CABLE_CAR_LINE", true, true);
	func_287(&Local_200, 0, 0, 0, 1065353216);
	func_287(&Local_201, 1, 0, 0, 1065353216);
	func_286();
	Local_200.f_25 = (MISC::GET_GAME_TIMER() + iLocal_63);
	Local_201.f_25 = (MISC::GET_GAME_TIMER() + iLocal_63);
	__LIB_11__.func_93(iLocal_239);
	__LIB_12__.func_5(fLocal_238);
	__LIB_0__.func_86(Local_237);
	__LIB_0__.func_86(Local_236);
	while (true)
	{
		if (Global_31963 == 1)
		{
			func_282(&Local_200);
			func_282(&Local_201);
		}
		if (!__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()) || Global_31963 == 1)
		{
			__LIB_26__.func_354(1, 1, 1, 1);
			Global_31965 = 0;
			__LIB_10__.func_835(&uLocal_225, 0);
			__LIB_9__.func_52(&Local_69, 0, 1);
			func_302(0);
		}
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (((Var0.f_0 <= -900f || Var0.f_0 >= 740f) || Var0.f_1 <= 5200f) || Var0.f_1 >= 5900f)
		{
			func_302(0);
		}
		func_17(&Local_200);
		func_17(&Local_201);
		func_11(&Local_200);
		func_11(&Local_201);
		if (bLocal_79 == 1)
		{
			__LIB_7__.func_112(&Local_69, 0, 1, 0, 0, 1045220557, 0, 1065353216, 0);
		}
		else
		{
			func_5();
		}
		if (__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()))
		{
			if (CAM::IS_SCREEN_FADED_IN() && iLocal_80 == 0)
			{
				if (func_4())
				{
					Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
					if (bLocal_241)
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(Var0, CAM::GET_FINAL_RENDERED_CAM_COORD() - Var1);
						Var1 = { Var0 };
					}
					if (MISC::GET_GAME_TIMER() > iLocal_230)
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						HUD::SET_MINIMAP_FOW_REVEAL_COORDINATE(Var0);
						iLocal_230 = MISC::GET_GAME_TIMER() + 5000;
					}
				}
			}
		}
		if ((iLocal_232 == 0 && MISC::GET_MISSION_FLAG()) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("bailbond3")) == 0)
		{
			func_282(&Local_200);
			func_282(&Local_201);
			__LIB_6__.func_352(&(Local_200.f_28));
			__LIB_6__.func_352(&(Local_201.f_28));
			iLocal_232 = 1;
		}
		if (iLocal_232 == 1 && !MISC::GET_MISSION_FLAG())
		{
			func_1(&Local_200);
			func_1(&Local_201);
			iLocal_232 = 0;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)//Position - 0x394
{
	if (__LIB_0__.func_524(uParam0->f_2))
	{
		uParam0->f_31 = 0.88f;
		func_2(uParam0, 0.88f);
	}
}

void func_2(var uParam0, float fParam1)//Position - 0x3BB
{
	int iVar0;
	if (__LIB_0__.func_524(uParam0->f_2))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_3)
		{
			if (__LIB_0__.func_524(uParam0->f_3[iVar0]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_3[iVar0]))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_3[iVar0], true, true);
				}
				if (iVar0 == 0)
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_3[iVar0], uParam0->f_2, 0, 0f, fParam1, 0f, 0f, 0f, 0f, false, false, true, false, 2, true, 0);
				}
				else
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_3[iVar0], uParam0->f_2, 0, 0f, -fParam1, 0f, 0f, 0f, 0f, false, false, true, false, 2, true, 0);
				}
			}
			if (__LIB_0__.func_524(uParam0->f_6[iVar0]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_6[iVar0]))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_6[iVar0], true, true);
				}
				if (iVar0 == 0)
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_6[iVar0], uParam0->f_2, 0, 0f, -fParam1, 0f, 0f, 0f, 180f, false, false, true, false, 2, true, 0);
				}
				else
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_6[iVar0], uParam0->f_2, 0, 0f, fParam1, 0f, 0f, 0f, 180f, false, false, true, false, 2, true, 0);
				}
			}
			iVar0++;
		}
	}
}

bool func_4()//Position - 0x4F4
{
	return ((Local_200.f_11 && Local_200.f_34) || (Local_201.f_11 && Local_201.f_34));
}

void func_5()//Position - 0x520
{
	int iVar0;
	if (Local_200.f_11 == 1 || Local_201.f_11 == 1)
	{
		return;
	}
	if (iLocal_233 == 1)
	{
		return;
	}
	iVar0 = 0;
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 446.25818f, 5582.6255f, 780.1892f, 446.3005f, 5560.008f, 786.9392f, 12.25f, false, true, 0))
	{
		if (Local_200.f_9)
		{
			iVar0++;
		}
		if (Local_201.f_9)
		{
			iVar0++;
		}
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -742.34766f, 5587.0186f, 40.665493f, -742.1461f, 5602.7725f, 49.8471f, 12.25f, false, true, 0))
	{
		if (Local_200.f_9)
		{
			iVar0++;
		}
		if (Local_201.f_9)
		{
			iVar0++;
		}
	}
	if (iVar0 == 2)
	{
		__LIB_0__.func_151("WAIT_CABLE" /* GXT: If you wish to wait, a cable car will arrive shortly. */, -1);
		iLocal_233 = 1;
	}
}

void func_11(var uParam0)//Position - 0xCB9
{
	struct<3> Var0;
	int iVar1;
	iVar1 = 0f;
	if (__LIB_0__.func_121(uParam0->f_2))
	{
		return;
	}
	if (*uParam0 <= 11)
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (MISC::GET_GAME_TIMER() < (uParam0->f_26 + iLocal_62))
		{
			return;
		}
		Var0 = { func_14(&(Local_64[uParam0->f_15 /*49*/]), 0, &iVar1) };
		Var0 = { Var0 + Vector(-0.2f, 0f, 0f) };
		if (CAM::IS_SPHERE_VISIBLE(Var0, 30f))
		{
			return;
		}
	}
	func_294();
	func_287(uParam0, uParam0->f_15, 0, iVar1, 1f);
	__LIB_10__.func_721(&uLocal_82, 0);
}

Vector3 func_14(var uParam0, int iParam1, float fParam2)//Position - 0xF5B
{
	if (iParam1 < 0)
	{
		*fParam2 = 0f;
		return *(uParam0[0 /*3*/]);
	}
	if (iParam1 >= (uParam0->f_46 - 1))
	{
		*fParam2 = 0f;
		return *(uParam0[(uParam0->f_46 - 1) /*3*/]);
	}
	if (*fParam2 < 0f)
	{
		*fParam2 = 0f;
	}
	if (*fParam2 > 1f)
	{
		*fParam2 = 1f;
	}
	return __LIB_11__.func_186(*(uParam0[iParam1 /*3*/]), *(uParam0[iParam1 + 1 /*3*/]), *fParam2, 1);
}

void func_17(var uParam0)//Position - 0x1011
{
	struct<3> Var0;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		return;
	}
	uParam0->f_27 = (MISC::GET_GAME_TIMER() - uParam0->f_25);
	if (uParam0->f_27 < 0)
	{
		uParam0->f_27 = 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_2, false) && *uParam0 < 11)
	{
		__LIB_6__.func_352(&(uParam0->f_28));
		*uParam0 = 11;
	}
	if (iLocal_228 == 1)
	{
		fLocal_229 = (fLocal_229 + MISC::GET_FRAME_TIME());
		STREAMING::SET_SRL_TIME(fLocal_229);
	}
	uParam0->f_33 = func_279(PLAYER::PLAYER_PED_ID(), uParam0, 0f, 0);
	if (uParam0->f_33)
	{
		if (uParam0->f_28 != -1)
		{
			__LIB_6__.func_352(&(uParam0->f_28));
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
	}
	switch (*uParam0)
	{
		case 0:
		case 1:
			if (uParam0->f_31 < 0.88f)
			{
				uParam0->f_31 = (uParam0->f_31 + SYSTEM::TIMESTEP());
				if (uParam0->f_31 > 0.88f)
				{
					uParam0->f_31 = 0.88f;
				}
			}
			func_2(uParam0, uParam0->f_31);
			func_263(uParam0);
			break;
		case 2:
			ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_2, false);
			uParam0->f_31 = (uParam0->f_31 - SYSTEM::TIMESTEP());
			if (uParam0->f_31 <= 0f)
			{
				uParam0->f_31 = 0f;
				*uParam0 = 3;
				uParam0->f_20 = 0f;
				uParam0->f_9 = 1;
				uParam0->f_16 = 0f;
				uParam0->f_25 = MISC::GET_GAME_TIMER();
				uParam0->f_27 = 0;
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Leave_Station", uParam0->f_2, "CABLE_CAR_SOUNDS", false, 0);
				uParam0->f_28 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_28, "Running", uParam0->f_2, "CABLE_CAR_SOUNDS", false, 0);
				uParam0->f_30 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_64[uParam0->f_15 /*49*/][uParam0->f_18 /*3*/], Local_64[uParam0->f_15 /*49*/][uParam0->f_18 + 1 /*3*/], true);
				if (uParam0->f_11 == 1)
				{
					__LIB_0__.func_151("FGND_SWTCHCAM" /* GXT: Press ~INPUT_SCRIPT_SELECT~ to change view.~n~Press ~INPUT_CONTEXT~ or ~INPUT_SKIP_CUTSCENE~ to skip the ride. */, -1);
				}
			}
			func_2(uParam0, uParam0->f_31);
			break;
		case 3:
			if (uParam0->f_11 == 1)
			{
				func_252(uParam0);
			}
			if (!uParam0->f_33)
			{
				uParam0->f_16 = (uParam0->f_16 + ((fLocal_61 * SYSTEM::TIMESTEP()) * fLocal_59));
				if (uParam0->f_16 >= fLocal_60)
				{
					uParam0->f_16 = fLocal_60;
					*uParam0 = 4;
					uParam0->f_31 = 0f;
					func_2(uParam0, uParam0->f_31);
				}
			}
			break;
		case 4:
			if (uParam0->f_11 == 1)
			{
				func_252(uParam0);
			}
			if (!uParam0->f_33 && uParam0->f_9)
			{
				if (uParam0->f_28 == -1)
				{
					uParam0->f_28 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_28, "Running", uParam0->f_2, "CABLE_CAR_SOUNDS", false, 0);
				}
			}
			if (!uParam0->f_32)
			{
				uParam0->f_16 = (uParam0->f_16 + ((fLocal_61 * SYSTEM::TIMESTEP()) * fLocal_59));
				if (uParam0->f_16 >= fLocal_60)
				{
					uParam0->f_16 = fLocal_60;
				}
			}
			if ((Local_64[uParam0->f_15 /*49*/].f_48 - uParam0->f_20) < 75f)
			{
				*uParam0 = 5;
				if (uParam0->f_11 == 1)
				{
					if (bLocal_79 == 1)
					{
						func_251();
						if (func_250(uParam0) == 0)
						{
							__LIB_20__.func_325(&uLocal_202, &uLocal_225, 0, 0, 1, 1);
						}
						else
						{
							func_248(&uLocal_202, &uLocal_225);
						}
					}
					func_245(uParam0);
				}
			}
			if (!uParam0->f_9 || uParam0->f_20 >= Local_64[uParam0->f_15 /*49*/].f_48)
			{
				*uParam0 = 6;
			}
			if (uParam0->f_32 && uParam0->f_11 == 1)
			{
				uParam0->f_16 = (uParam0->f_16 - (((fLocal_61 * SYSTEM::TIMESTEP()) * fLocal_59) * 2f));
				if (uParam0->f_16 <= 0f)
				{
					uParam0->f_16 = 0f;
					*uParam0 = 8;
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DOOR_OPEN", uParam0->f_2, "CABLE_CAR_SOUNDS", false, 0);
				}
			}
			break;
		case 8:
			uParam0->f_31 = (uParam0->f_31 + SYSTEM::TIMESTEP());
			if (uParam0->f_31 > 0.88f)
			{
				uParam0->f_31 = 0.88f;
				uParam0->f_32 = 1;
				*uParam0 = 9;
				func_244(uParam0);
			}
			func_2(uParam0, uParam0->f_31);
			break;
		case 9:
			if (func_237(PLAYER::PLAYER_PED_ID(), uParam0, 0, 0))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
				{
					func_112(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					*uParam0 = 10;
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DOOR_CLOSE", uParam0->f_2, "CABLE_CAR_SOUNDS", false, 0);
				}
			}
			else if (!func_237(PLAYER::PLAYER_PED_ID(), uParam0, 1.1f, 0))
			{
				*uParam0 = 10;
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DOOR_CLOSE", uParam0->f_2, "CABLE_CAR_SOUNDS", false, 0);
				uParam0->f_11 = 0;
			}
			break;
		case 10:
			uParam0->f_31 = (uParam0->f_31 - SYSTEM::TIMESTEP());
			if (uParam0->f_31 <= 0f)
			{
				uParam0->f_31 = 0f;
				*uParam0 = 4;
				if (uParam0->f_11 == 1)
				{
					func_109(uParam0);
					func_107(func_250(uParam0));
				}
				uParam0->f_32 = 0;
			}
			func_2(uParam0, uParam0->f_31);
			break;
		case 5:
			if (uParam0->f_11 == 1)
			{
				func_252(uParam0);
			}
			if (!uParam0->f_33)
			{
				uParam0->f_16 = (uParam0->f_16 - ((fLocal_61 * SYSTEM::TIMESTEP()) * fLocal_59));
				if (uParam0->f_16 <= 1f)
				{
					uParam0->f_16 = 1f;
				}
				if (!uParam0->f_9)
				{
					*uParam0 = 6;
					uParam0->f_16 = 0f;
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Arrive_Station", uParam0->f_2, "CABLE_CAR_SOUNDS", false, 0);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DOOR_OPEN", uParam0->f_2, "CABLE_CAR_SOUNDS", false, 0);
					__LIB_6__.func_352(&(uParam0->f_28));
				}
			}
			break;
		case 6:
			uParam0->f_31 = (uParam0->f_31 + SYSTEM::TIMESTEP());
			if (uParam0->f_31 > 0.88f)
			{
				uParam0->f_31 = 0.88f;
				func_42(uParam0, 0);
			}
			func_2(uParam0, uParam0->f_31);
			break;
		case 7:
			if (!func_237(PLAYER::PLAYER_PED_ID(), uParam0, 1.125f, 0))
			{
				*uParam0 = 1;
				uParam0->f_25 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE((iLocal_63 - 8000), iLocal_63 + 8000));
				uParam0->f_17 = (uParam0->f_17 * -1f);
			}
			break;
		case 11:
			if (func_237(PLAYER::PLAYER_PED_ID(), uParam0, 0, 0))
			{
				uParam0->f_11 = 1;
			}
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_2))
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			}
			func_40(uParam0);
			ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_2, true);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_2, false);
			uParam0->f_26 = MISC::GET_GAME_TIMER();
			HUD::CLEAR_HELP(true);
			if (uParam0->f_11 == 1)
			{
				func_244(uParam0);
				HUD::CLEAR_HELP(true);
				func_35(uParam0, 0);
				return;
			}
			else if (STREAMING::STREAMVOL_IS_VALID(iLocal_52))
			{
				STREAMING::STREAMVOL_DELETE(iLocal_52);
			}
			*uParam0 = 12;
			return;
		case 12:
			Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2, false) };
			if (!CAM::IS_SPHERE_VISIBLE(Var0, 10f))
			{
				func_35(uParam0, 0);
				return;
			}
			break;
	}
	if (uParam0->f_11)
	{
		func_23(uParam0);
	}
	if (uParam0->f_9)
	{
		if (uParam0->f_17 >= 0f)
		{
			func_22(uParam0);
		}
		else
		{
			func_18(uParam0);
		}
	}
}

int func_18(var uParam0)//Position - 0x1665
{
	float fVar0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	if (*uParam0 >= 8)
	{
		return 0;
	}
	if (!uParam0->f_9)
	{
		return 1;
	}
	Var1 = { uParam0->f_12 };
	if (uParam0->f_30 != 0f)
	{
		fVar0 = ((uParam0->f_17 * uParam0->f_16) / uParam0->f_30);
	}
	else
	{
		fVar0 = 0f;
	}
	if (uParam0->f_33)
	{
		fVar0 = 0f;
	}
	if (fVar0 != 0f)
	{
		fVar2 = ((fVar0 * SYSTEM::TIMESTEP()) * fLocal_59);
		if (!func_4())
		{
			if (!__LIB_11__.func_326(PLAYER::PLAYER_PED_ID(), uParam0->f_12, 50f))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_2))
				{
					fVar2 = (fVar2 * fLocal_227);
				}
			}
		}
		uParam0->f_19 = (uParam0->f_19 + fVar2);
		if (uParam0->f_19 < 0f)
		{
			uParam0->f_19 = 1f;
			if (uParam0->f_11 == 1)
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				HUD::SET_MINIMAP_FOW_REVEAL_COORDINATE(Var3);
			}
			uParam0->f_18 = (uParam0->f_18 - 1);
			if (uParam0->f_18 < 0)
			{
				uParam0->f_18 = 0;
				uParam0->f_19 = 0f;
				uParam0->f_16 = 0f;
				uParam0->f_9 = 0;
				uParam0->f_12 = { Local_64[uParam0->f_15 /*49*/][uParam0->f_18 /*3*/] };
				ENTITY::SET_ENTITY_COORDS(uParam0->f_2, uParam0->f_12 + Vector(-0.2f, 0f, 0f), true, false, false, true);
				return 1;
			}
			func_20(uParam0);
			uParam0->f_30 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_64[uParam0->f_15 /*49*/][uParam0->f_18 /*3*/], Local_64[uParam0->f_15 /*49*/][uParam0->f_18 + 1 /*3*/], true);
		}
		if (uParam0->f_18 < (Local_64[uParam0->f_15 /*49*/].f_46 - 1))
		{
			uParam0->f_12 = { __LIB_11__.func_186(Local_64[uParam0->f_15 /*49*/][uParam0->f_18 /*3*/], Local_64[uParam0->f_15 /*49*/][uParam0->f_18 + 1 /*3*/], uParam0->f_19, 1) };
			func_19(uParam0);
		}
		uParam0->f_20 = (uParam0->f_20 + MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_12, Var1, true));
	}
	return 0;
}

void func_19(var uParam0)//Position - 0x1822
{
	if (Local_200.f_11 || Local_201.f_11)
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_2, uParam0->f_12 + Vector(-0.2f, 0f, 0f), true, false, false, true);
		return;
	}
	if (CAM::IS_SPHERE_VISIBLE(uParam0->f_12 + Vector((-0.2f / 2f), 0f, 0f), 15f))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_2, uParam0->f_12 + Vector(-0.2f, 0f, 0f), true, false, false, true);
		return;
	}
	if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_2, true) + Vector((-0.2f / 2f), 0f, 0f), 15f))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_2, uParam0->f_12 + Vector(-0.2f, 0f, 0f), true, false, false, true);
		return;
	}
}

void func_20(var uParam0)//Position - 0x18CF
{
	char cVar0[16];
	StringCopy(&cVar0, "C", 16);
	StringIntConCat(&cVar0, uParam0->f_15 + 1, 16);
	if (func_250(uParam0) == 0)
	{
		switch (uParam0->f_18)
		{
			case 0:
				StringConCat(&cVar0, "_up_9", 16);
				break;
			case 1:
				StringConCat(&cVar0, "_up_1", 16);
				break;
			case 3:
				StringConCat(&cVar0, "_up_3", 16);
				break;
			case 5:
				StringConCat(&cVar0, "_up_4", 16);
				break;
			case 7:
				StringConCat(&cVar0, "_up_5", 16);
				break;
			case 9:
				StringConCat(&cVar0, "_up_6", 16);
				break;
			case 11:
				StringConCat(&cVar0, "_up_8", 16);
				break;
			case 12:
				StringConCat(&cVar0, "_up_9", 16);
				break;
			default:
				return;
		}
	}
	else
	{
		switch (uParam0->f_18)
		{
			case 0:
				StringConCat(&cVar0, "_down_1", 16);
				break;
			case 1:
				StringConCat(&cVar0, "_down_2", 16);
				break;
			case 3:
				StringConCat(&cVar0, "_down_3", 16);
				break;
			case 5:
				StringConCat(&cVar0, "_down_4", 16);
				break;
			case 7:
				StringConCat(&cVar0, "_down_5", 16);
				break;
			case 9:
				StringConCat(&cVar0, "_down_6", 16);
				break;
			case 11:
				StringConCat(&cVar0, "_down_8", 16);
				break;
			case 12:
				StringConCat(&cVar0, "_down_9", 16);
				break;
			default:
				return;
			}
	}
	ENTITY::PLAY_ENTITY_ANIM(uParam0->f_2, &cVar0, "p_cablecar_s", 8f, false, true, false, 0f, 0);
}

int func_22(var uParam0)//Position - 0x1A5A
{
	float fVar0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	if (*uParam0 >= 8)
	{
		return 0;
	}
	if (!uParam0->f_9)
	{
		return 1;
	}
	if (uParam0->f_18 + 1 >= Local_64[uParam0->f_15 /*49*/].f_46)
	{
		return 1;
	}
	Var1 = { uParam0->f_12 };
	if (uParam0->f_30 != 0f)
	{
		fVar0 = ((uParam0->f_17 * uParam0->f_16) / uParam0->f_30);
	}
	else
	{
		fVar0 = 0f;
	}
	if (uParam0->f_33)
	{
		fVar0 = 0f;
	}
	if (fVar0 != 0f)
	{
		fVar2 = ((fVar0 * SYSTEM::TIMESTEP()) * fLocal_59);
		if (!func_4())
		{
			if (!__LIB_11__.func_326(PLAYER::PLAYER_PED_ID(), uParam0->f_12, 50f))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_2))
				{
					fVar2 = (fVar2 * fLocal_227);
				}
			}
		}
		uParam0->f_19 = (uParam0->f_19 + fVar2);
		if (uParam0->f_19 >= 1f)
		{
			uParam0->f_19 = 0f;
			if (uParam0->f_11 == 1)
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				HUD::SET_MINIMAP_FOW_REVEAL_COORDINATE(Var3);
			}
			uParam0->f_18++;
			if (uParam0->f_18 >= (Local_64[uParam0->f_15 /*49*/].f_46 - 1))
			{
				uParam0->f_18 = (Local_64[uParam0->f_15 /*49*/].f_46 - 1);
				uParam0->f_16 = 0f;
				uParam0->f_9 = 0;
				uParam0->f_12 = { Local_64[uParam0->f_15 /*49*/][uParam0->f_18 /*3*/] };
				ENTITY::SET_ENTITY_COORDS(uParam0->f_2, uParam0->f_12 + Vector(-0.2f, 0f, 0f), true, false, false, true);
				return 1;
			}
			func_20(uParam0);
			uParam0->f_30 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_64[uParam0->f_15 /*49*/][uParam0->f_18 /*3*/], Local_64[uParam0->f_15 /*49*/][uParam0->f_18 + 1 /*3*/], true);
		}
		if (uParam0->f_18 < (Local_64[uParam0->f_15 /*49*/].f_46 - 1))
		{
			uParam0->f_12 = { func_14(&(Local_64[uParam0->f_15 /*49*/]), uParam0->f_18, &(uParam0->f_19)) };
			func_19(uParam0);
		}
		uParam0->f_20 = (uParam0->f_20 + MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_12, Var1, true));
	}
	return 0;
}

void func_23(var uParam0)//Position - 0x1C28
{
	int iVar0;
	iVar0 = *uParam0;
	if (iVar0 < 3 || iVar0 > 5)
	{
		return;
	}
	__LIB_8__.func_611(0);
	__LIB_0__.func_186();
	if (iVar0 < 5)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 236 /*INPUT_SCRIPT_SELECT*/) && uParam0->f_32 == 0)
		{
			if (!bLocal_79)
			{
				__LIB_10__.func_835(&uLocal_225, 0);
				func_107(func_250(uParam0));
				func_26(uParam0, 1);
				STREAMING::SET_FOCUS_ENTITY(uParam0->f_2);
			}
			else
			{
				func_26(uParam0, 0);
				func_251();
				__LIB_20__.func_325(&uLocal_202, &uLocal_225, 0, 0, 1, 1);
			}
		}
	}
	if (bLocal_79 && !__LIB_31__.func_819())
	{
		if (uParam0->f_29 != -1)
		{
			func_26(uParam0, 0);
		}
	}
	if (iLocal_80 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/) || (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/) && uParam0->f_32 == 0))
		{
			iLocal_80 = 1;
			uParam0->f_34 = 0;
			__LIB_10__.func_696(500, 0);
		}
	}
	else if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_42(uParam0, 1);
	}
	else if (!CAM::IS_SCREEN_FADING_OUT())
	{
		iLocal_80 = 0;
		uParam0->f_34 = 1;
	}
}

void func_26(var uParam0, bool bParam1)//Position - 0x1D9E
{
	__LIB_6__.func_352(&(uParam0->f_29));
	if (bParam1)
	{
		if (__LIB_31__.func_819())
		{
			uParam0->f_29 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_29, "Interior_Rain", PLAYER::PLAYER_PED_ID(), "CABLE_CAR_SOUNDS", false, 0);
		}
	}
}

void func_35(var uParam0, int iParam1)//Position - 0x1FB1
{
	func_38(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		if (CAM::IS_SCREEN_FADED_OUT() || iParam1)
		{
			__LIB_0__.func_123(&(uParam0->f_3[0]));
			__LIB_0__.func_123(&(uParam0->f_3[1]));
			__LIB_0__.func_123(&(uParam0->f_6[0]));
			__LIB_0__.func_123(&(uParam0->f_6[1]));
			__LIB_0__.func_123(&(uParam0->f_2));
		}
		else
		{
			__LIB_0__.func_122(&(uParam0->f_3[0]), 0);
			__LIB_0__.func_122(&(uParam0->f_3[1]), 0);
			__LIB_0__.func_122(&(uParam0->f_6[0]), 0);
			__LIB_0__.func_122(&(uParam0->f_6[1]), 0);
			__LIB_0__.func_122(&(uParam0->f_2), 0);
		}
	}
}

void func_38(var uParam0)//Position - 0x20AF
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CABLE_CAR_RIDE_UP_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CABLE_CAR_RIDE_UP_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CABLE_CAR_RIDE_DOWN_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CABLE_CAR_RIDE_DOWN_SCENE");
	}
	func_26(uParam0, 0);
	__LIB_6__.func_352(&(uParam0->f_28));
	func_39(PLAYER::PLAYER_PED_ID(), uParam0);
	func_40(uParam0);
	uParam0->f_33 = 0;
}

void func_39(int iParam0, var uParam1)//Position - 0x2101
{
	__LIB_0__.func_524(uParam1->f_2);
	__LIB_0__.func_524(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_2) && ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, uParam1->f_2))
		{
			ENTITY::DETACH_ENTITY(iParam0, true, true);
		}
	}
}

void func_40(var uParam0)//Position - 0x2144
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_24)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_21[iVar0]))
		{
			__LIB_0__.func_524(uParam0->f_21[iVar0]);
			if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_21[iVar0]))
			{
				ENTITY::DETACH_ENTITY(uParam0->f_21[iVar0], false, false);
			}
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_21[iVar0], false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_21[iVar0], 5f);
			__LIB_0__.func_106(&(uParam0->f_21[iVar0]));
			uParam0->f_21[iVar0] = 0;
		}
		iVar0++;
	}
	uParam0->f_24 = 0;
}

void func_42(var uParam0, bool bParam1)//Position - 0x220B
{
	bool bVar0;
	bVar0 = false;
	func_26(uParam0, 0);
	__LIB_6__.func_352(&(uParam0->f_28));
	if (bParam1 && (uParam0->f_11 == 1 || uParam0->f_34 == 1))
	{
		bLocal_79 = false;
		if (STREAMING::STREAMVOL_IS_VALID(iLocal_52))
		{
			STREAMING::STREAMVOL_DELETE(iLocal_52);
		}
		func_105(uParam0);
		if (bParam1)
		{
			if (uParam0->f_15 != Local_200.f_15)
			{
				func_104(&Local_200);
			}
			if (uParam0->f_15 != Local_201.f_15)
			{
				func_104(&Local_201);
			}
		}
		STREAMING::CLEAR_FOCUS();
		__LIB_8__.func_611(0);
		__LIB_0__.func_186();
		SYSTEM::WAIT(0);
		__LIB_20__.func_665(ENTITY::GET_ENTITY_COORDS(uParam0->f_2, true), 50f, 13, 5000, 1, 1);
		func_39(PLAYER::PLAYER_PED_ID(), uParam0);
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uParam0->f_2, true) + Vector(0f, 0f, 6f), true, false, false, true);
		if (__LIB_0__.func_524(uParam0->f_2))
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Arrive_Station", uParam0->f_2, "CABLE_CAR_SOUNDS", false, 0);
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DOOR_OPEN", uParam0->f_2, "CABLE_CAR_SOUNDS", false, 0);
		}
		func_245(uParam0);
		iLocal_80 = 0;
	}
	if (uParam0->f_11 == 1 || uParam0->f_34 == 1)
	{
		if (bParam1)
		{
			func_1(uParam0);
		}
		MISC::CLEAR_BIT(&Global_78567, 4);
		MISC::CLEAR_BIT(&Global_78567, 5);
		if (uParam0->f_24 == 0)
		{
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1000, 0f, true, false);
		}
	}
	if (__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()))
	{
		if (func_237(PLAYER::PLAYER_PED_ID(), uParam0, 0, 0))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CABLE_CAR_RIDE_UP_SCENE"))
			{
				AUDIO::STOP_AUDIO_SCENE("CABLE_CAR_RIDE_UP_SCENE");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CABLE_CAR_RIDE_DOWN_SCENE"))
			{
				AUDIO::STOP_AUDIO_SCENE("CABLE_CAR_RIDE_DOWN_SCENE");
			}
			func_244(uParam0);
		}
	}
	if (bParam1)
	{
		func_1(uParam0);
	}
	uParam0->f_9 = 0;
	*uParam0 = 7;
	uParam0->f_20 = 0f;
	if (uParam0->f_11 == 1 || uParam0->f_34 == 1)
	{
		CAM::DO_SCREEN_FADE_IN(500);
		if (bParam1)
		{
			func_1(uParam0);
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		__LIB_10__.func_835(&uLocal_225, 0);
		__LIB_42__.func_98(10, 1);
		func_55(__LIB_11__.func_91(), 10, 1);
		func_55(__LIB_11__.func_90(), 10, 1);
		uParam0->f_11 = 0;
		__LIB_24__.func_943(301, 0, 0);
		STREAMING::CLEAR_FOCUS();
		if (__LIB_0__.func_524(__LIB_11__.func_91()))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(__LIB_11__.func_91(), PLAYER::PLAYER_PED_ID(), -1f, 2f, 0f, 1f, 20000);
			bVar0 = true;
		}
		if (__LIB_0__.func_524(__LIB_11__.func_90()))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(__LIB_11__.func_90(), PLAYER::PLAYER_PED_ID(), 1f, 2f, 0f, 1f, 20000);
			bVar0 = true;
		}
		if (__LIB_0__.func_39(6))
		{
			if (bVar0)
			{
				SYSTEM::WAIT(1000);
			}
			__LIB_11__.func_89(iLocal_231, 0);
		}
	}
	if (bParam1)
	{
		func_43(&(Local_64[uParam0->f_15 /*49*/]));
	}
	uParam0->f_34 = 0;
	func_40(uParam0);
}

void func_43(var uParam0)//Position - 0x2497
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	if (iLocal_81 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (uParam0->f_46 - 2))
	{
		fVar1 = 0f;
		while (fVar1 < 1f)
		{
			Var2 = { __LIB_11__.func_186(*(uParam0[iVar0 /*3*/]), *(uParam0[iVar0 + 1 /*3*/]), fVar1, 1) };
			HUD::SET_MINIMAP_FOW_REVEAL_COORDINATE(Var2);
			fVar1 = (fVar1 + 0.125f);
		}
		SYSTEM::WAIT(0);
		iVar0++;
	}
	HUD::SET_MINIMAP_FOW_REVEAL_COORDINATE(*(uParam0[(uParam0->f_46 - 1) /*3*/]));
	iLocal_81 = 0;
}

void func_55(int iParam0, int iParam1, int iParam2)//Position - 0x2BF2
{
	int iVar0;
	if (!__LIB_0__.func_524(iParam0))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	else
	{
		iVar0 = __LIB_18__.func_168(iParam0);
		if (iVar0 == 145)
		{
			iVar0 = __LIB_26__.func_456(iParam0);
		}
		__LIB_40__.func_982(iVar0, iParam2, iParam1);
	}
}

void func_104(var uParam0)//Position - 0x430A
{
	func_105(uParam0);
	func_1(uParam0);
	uParam0->f_9 = 0;
	*uParam0 = 7;
	uParam0->f_20 = 0f;
}

void func_105(var uParam0)//Position - 0x432C
{
	int iVar0;
	iVar0 = func_250(uParam0);
	if (uParam0->f_15 == 0)
	{
		if (iVar0 == 1)
		{
			func_106(uParam0, 0, 0f);
		}
		else
		{
			func_106(uParam0, (Local_64[uParam0->f_15 /*49*/].f_46 - 1), 0f);
		}
	}
	else if (iVar0 == 0)
	{
		func_106(uParam0, 0, 0f);
	}
	else
	{
		func_106(uParam0, (Local_64[uParam0->f_15 /*49*/].f_46 - 1), 0f);
	}
}

void func_106(var uParam0, int iParam1, float fParam2)//Position - 0x438F
{
	uParam0->f_12 = { func_14(&(Local_64[uParam0->f_15 /*49*/]), iParam1, &fParam2) };
	if (__LIB_0__.func_524(uParam0->f_2))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_2, uParam0->f_12 + Vector(-0.2f, 0f, 0f), true, false, false, true);
	}
	uParam0->f_18 = iParam1;
	uParam0->f_19 = fParam2;
}

void func_107(int iParam0)//Position - 0x43DE
{
	struct<3> Var0;
	Var0 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
	Local_69.f_20 = 60;
	Local_69.f_21 = 20;
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	if (iParam0 == 1)
	{
		__LIB_10__.func_838(&Local_69, Var0, ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2) + Vector(0f, 0f, fLocal_68), 50f, Local_69.f_20, Local_69.f_21, 3, 1101004800, 0, 0, -1082130432, 0);
	}
	else
	{
		__LIB_10__.func_838(&Local_69, Var0, ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2), 50f, Local_69.f_20, Local_69.f_21, 3, 1101004800, 0, 0, -1082130432, 0);
	}
	CAM::ATTACH_CAM_TO_ENTITY(Local_69.f_0, PLAYER::PLAYER_PED_ID(), 0f, 0.2f, 0.5f, true);
	iLocal_53 = 1;
	bLocal_79 = true;
}

void func_109(var uParam0)//Position - 0x458C
{
	struct<3> Var0;
	if (!__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()) || !__LIB_0__.func_524(uParam0->f_2))
	{
		return;
	}
	Var0 = { Local_56 };
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uParam0->f_2, true), true, false, false, true);
	if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
	}
	Var0.f_1 = (Var0.f_1 * uParam0->f_17);
	if (uParam0->f_17 == -1f)
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_2, 0, Var0, 0f, 0f, 180f, false, false, false, false, 2, true, 0);
	}
	else
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_2, 0, Var0, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	}
	func_111(uParam0);
	func_110(uParam0);
}

void func_110(var uParam0)//Position - 0x4643
{
	struct<3> Var0;
	if (!__LIB_0__.func_524(__LIB_11__.func_90()) || !__LIB_0__.func_524(uParam0->f_2))
	{
		return;
	}
	Var0 = { Local_56 };
	Var0.f_0 = 1f;
	ENTITY::SET_ENTITY_COORDS(__LIB_11__.func_90(), ENTITY::GET_ENTITY_COORDS(uParam0->f_2, true), true, false, false, true);
	if (ENTITY::IS_ENTITY_ATTACHED(__LIB_11__.func_90()))
	{
		ENTITY::DETACH_ENTITY(__LIB_11__.func_90(), true, true);
	}
	Var0.f_1 = (Var0.f_1 * uParam0->f_17);
	if (uParam0->f_17 == -1f)
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(__LIB_11__.func_90(), uParam0->f_2, 0, Var0, 0f, 0f, 180f, false, false, false, false, 2, true, 0);
	}
	else
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(__LIB_11__.func_90(), uParam0->f_2, 0, Var0, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	}
}

void func_111(var uParam0)//Position - 0x46F1
{
	struct<3> Var0;
	if (!__LIB_0__.func_524(__LIB_11__.func_91()) || !__LIB_0__.func_524(uParam0->f_2))
	{
		return;
	}
	Var0 = { Local_56 };
	Var0.f_0 = -1f;
	ENTITY::SET_ENTITY_COORDS(__LIB_11__.func_91(), ENTITY::GET_ENTITY_COORDS(uParam0->f_2, true), true, false, false, true);
	if (ENTITY::IS_ENTITY_ATTACHED(__LIB_11__.func_91()))
	{
		ENTITY::DETACH_ENTITY(__LIB_11__.func_91(), true, true);
	}
	Var0.f_1 = (Var0.f_1 * uParam0->f_17);
	if (uParam0->f_17 == -1f)
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(__LIB_11__.func_91(), uParam0->f_2, 0, Var0, 0f, 0f, 180f, false, false, false, false, 2, true, 0);
	}
	else
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(__LIB_11__.func_91(), uParam0->f_2, 0, Var0, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	}
}

void func_112(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x479F
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_26__.func_258(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_18__.func_173())
			{
				case 0:
					if (func_227(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_115(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_227(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_115(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_227(PLAYER::PLAYER_PED_ID(), 8, 1) || func_227(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_115(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_227(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_115(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam4 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(__LIB_0__.func_85(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
		}
		if (iParam5 == 1)
		{
			MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
		}
		if (bParam8)
		{
			FIRE::STOP_FIRE_IN_RANGE(Param0, 30f);
		}
		MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, false);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, true);
		if (bParam10)
		{
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
		}
		HUD::CLEAR_PRINTS();
		if (iParam9 == 1)
		{
			HUD::CLEAR_HELP(true);
		}
		if (iParam1 == 1)
		{
			CAM::SET_WIDESCREEN_BORDERS(true, 0);
		}
		if (iParam2 == 1)
		{
			iLocal_39 = 0;
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_39 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__.func_84(500, 0);
		}
	}
}

int func_115(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x49AC
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
		Global_78130[1 /*14*/] = { func_163(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__.func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_20__.func_322(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_6__.func_795(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_6__.func_795(iParam0, 9);
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
			iVar7 = __LIB_6__.func_788(iParam0, 1);
			if (!__LIB_6__.func_780(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_6__.func_788(iParam0, 0);
			if (!__LIB_6__.func_779(iVar10, 14, iVar8, -1) && !__LIB_6__.func_827(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_6__.func_788(iParam0, 2);
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
			uVar11 = { __LIB_18__.func_180(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { func_163(iVar10, iVar0, uVar11[iVar0], -1) };
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
							uVar12 = { __LIB_18__.func_247(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { func_163(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_20__.func_322(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_127(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_115(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
							__LIB_0__.func_211(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_20__.func_322(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_127(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_115(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { func_163(iVar10, iVar0, func_124(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_123(iParam0, iVar10, &iVar4, 1))
							{
								func_115(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_115(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { func_163(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_115(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_163(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_115(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_163(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_115(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_163(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_115(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_163(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_115(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_18__.func_247(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { func_163(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_20__.func_322(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_127(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_115(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_20__.func_322(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_127(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_115(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_127(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_115(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_118(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_123(iParam0, iVar10, &iVar4, 0))
		{
			func_115(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_116(iParam0, iVar10, &iVar4))
		{
			func_115(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_116(int iParam0, int iParam1, int iParam2)//Position - 0x51BC
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_227(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

void func_118(int iParam0, int iParam1, int iParam2)//Position - 0x5283
{
	int iVar0;
	int iVar1;
	if (iParam0 == joaat("Player_Zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("Player_One"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		iVar0 = 4;
	}
	if (__LIB_11__.func_326(iParam0, 12, iVar0))
	{
		if (__LIB_0__.func_20(iParam0, iParam1, iParam2))
		{
			iVar1 = __LIB_0__.func_19(iParam0);
			if (iParam1 == 3)
			{
				Global_113386.f_2363.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_113386.f_2363.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_123(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5AB0
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_227(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_124(int iParam0, int iParam1, int iParam2)//Position - 0x5B46
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
				if (func_227(iParam0, iParam1, iVar0))
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
				if (func_227(iParam0, iParam1, iVar1))
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
				return __LIB_6__.func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__.func_795(iParam0, iParam1);
		}
	}
	return -99;
}

int func_127(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5F9E
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
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = __LIB_6__.func_795(iParam0, 1);
				iVar0 = __LIB_0__.func_24(iParam1, iParam3, iVar1);
				break;
			case 1:
				iVar2 = __LIB_6__.func_795(iParam0, 2);
				iVar0 = __LIB_0__.func_24(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		__LIB_0__.func_211(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		__LIB_0__.func_212(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (__LIB_0__.func_23(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("Player_Zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									case 37:
										iVar0 = 17;
										break;
									case 38:
										iVar0 = 18;
										break;
									case 39:
										iVar0 = 18;
										break;
									case 40:
										iVar0 = 19;
										break;
									case 41:
										iVar0 = 19;
										break;
									case 42:
										iVar0 = 20;
										break;
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!__LIB_6__.func_829(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!__LIB_6__.func_829(iParam0, 3, 135, 150))
									{
										iVar0 = func_130(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									case 61:
										iVar0 = 3;
										break;
									case 16:
										iVar0 = 1;
										break;
									case 114:
										iVar0 = 15;
										break;
									case 115:
										iVar0 = 17;
										break;
									case 116:
										iVar0 = 16;
										break;
									case 117:
										iVar0 = 18;
										break;
									case 118:
										iVar0 = 20;
										break;
									case 119:
										iVar0 = 19;
										break;
									case 125:
										iVar0 = 21;
										break;
									case 120:
										iVar0 = 22;
										break;
									case 124:
										iVar0 = 23;
										break;
									case 126:
										iVar0 = 24;
										break;
									case 121:
										iVar0 = 25;
										break;
									case 127:
										iVar0 = 26;
										break;
									case 128:
										iVar0 = 27;
										break;
									case 85:
										iVar0 = 6;
										break;
									case 77:
										iVar0 = 7;
										break;
									case 78:
										iVar0 = 8;
										break;
									case 79:
										iVar0 = 9;
										break;
									case 80:
										iVar0 = 10;
										break;
									case 81:
										iVar0 = 11;
										break;
									case 82:
										iVar0 = 12;
										break;
									case 83:
										iVar0 = 13;
										break;
									case 84:
										iVar0 = 14;
										break;
									case 21:
										iVar0 = 31;
										break;
									case 22:
										iVar0 = 30;
										break;
									case 23:
										iVar0 = 29;
										break;
									case 24:
										iVar0 = 28;
										break;
									case 25:
										iVar0 = 33;
										break;
									case 26:
										iVar0 = 35;
										break;
									case 27:
										iVar0 = 34;
										break;
									case 28:
										iVar0 = 32;
										break;
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			case joaat("Player_One"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									case 90:
										iVar0 = 1;
										break;
									case 268:
										iVar0 = 3;
										break;
									case 269:
										iVar0 = 5;
										break;
									case 270:
										iVar0 = 4;
										break;
									case 271:
										iVar0 = 6;
										break;
									case 272:
										iVar0 = 8;
										break;
									case 273:
										iVar0 = 7;
										break;
									case 279:
										iVar0 = 9;
										break;
									case 274:
										iVar0 = 10;
										break;
									case 278:
										iVar0 = 11;
										break;
									case 280:
										iVar0 = 12;
										break;
									case 275:
										iVar0 = 13;
										break;
									case 281:
										iVar0 = 14;
										break;
									case 282:
										iVar0 = 15;
										break;
									case 107:
										iVar0 = 16;
										break;
									case 108:
										iVar0 = 17;
										break;
									case 109:
										iVar0 = 18;
										break;
									case 110:
										iVar0 = 19;
										break;
									case 111:
										iVar0 = 20;
										break;
									case 112:
										iVar0 = 21;
										break;
									case 113:
										iVar0 = 22;
										break;
									case 114:
										iVar0 = 23;
										break;
									case 115:
										iVar0 = 24;
										break;
									case 116:
										iVar0 = 25;
										break;
									case 117:
										iVar0 = 52;
										break;
									case 118:
										iVar0 = 27;
										break;
									case 119:
										iVar0 = 28;
										break;
									case 120:
										iVar0 = 29;
										break;
									case 121:
										iVar0 = 30;
										break;
									case 122:
										iVar0 = 31;
										break;
									case 296:
										iVar0 = 32;
										break;
									case 297:
										iVar0 = 33;
										break;
									case 298:
										iVar0 = 34;
										break;
									case 299:
										iVar0 = 35;
										break;
									case 300:
										iVar0 = 36;
										break;
									case 301:
										iVar0 = 37;
										break;
									case 302:
										iVar0 = 38;
										break;
									case 309:
										iVar0 = 39;
										break;
									case 310:
										iVar0 = 40;
										break;
									case 311:
										iVar0 = 41;
										break;
									case 312:
										iVar0 = 42;
										break;
									case 313:
										iVar0 = 43;
										break;
									case 314:
										iVar0 = 44;
										break;
									case 315:
										iVar0 = 45;
										break;
									case 316:
										iVar0 = 46;
										break;
									case 317:
										iVar0 = 51;
										break;
									default:
										iVar0 = 0;
										break;
								}
								break;
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!__LIB_6__.func_829(iParam0, 3, 209, 222))
									{
										iVar0 = func_130(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!__LIB_6__.func_829(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_130(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_130(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_130(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_130(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!__LIB_6__.func_829(iParam0, 3, 176, 191) && !__LIB_6__.func_829(iParam0, 3, 227, 242))
									{
										iVar0 = func_130(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = __LIB_6__.func_795(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = __LIB_6__.func_795(iParam0, 11);
								iVar5 = func_129(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = __LIB_6__.func_795(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!__LIB_0__.func_22(joaat("Player_One"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = __LIB_6__.func_795(iParam0, 8);
								iVar8 = __LIB_6__.func_795(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_129(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_129(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = __LIB_6__.func_795(iParam0, 11);
								iVar0 = func_129(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			case joaat("Player_Two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									case 81:
										iVar0 = 5;
										break;
									case 82:
										iVar0 = 6;
										break;
									case 83:
										iVar0 = 7;
										break;
									case 84:
										iVar0 = 10;
										break;
									case 85:
										iVar0 = 9;
										break;
									case 86:
										iVar0 = 8;
										break;
									case 92:
										iVar0 = 22;
										break;
									case 87:
										iVar0 = 23;
										break;
									case 91:
										iVar0 = 24;
										break;
									case 93:
										iVar0 = 25;
										break;
									case 88:
										iVar0 = 26;
										break;
									case 94:
										iVar0 = 27;
										break;
									case 120:
										iVar0 = 11;
										break;
									case 121:
										iVar0 = 13;
										break;
									case 122:
										iVar0 = 14;
										break;
									case 124:
										iVar0 = 12;
										break;
									case 126:
										iVar0 = 18;
										break;
									case 128:
										iVar0 = 17;
										break;
									case 130:
										iVar0 = 19;
										break;
									case 131:
										iVar0 = 16;
										break;
									case 134:
										iVar0 = 15;
										break;
									case 135:
										iVar0 = 20;
										break;
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_129(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6E35
{
	int iVar0;
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_130(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_130(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_130(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x70FC
{
	int iVar0;
	int iVar1;
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (__LIB_11__.func_326(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

struct<14> func_163(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xEE5B
{
	__LIB_0__.func_41();
	if (iParam0 == joaat("Player_Zero"))
	{
		__LIB_32__.func_569(iParam1, iParam2);
	}
	else if (iParam0 == joaat("Player_One"))
	{
		func_189(iParam1, iParam2);
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		func_164(iParam1, iParam2);
	}
	return Global_78130[0 /*14*/];
}

void func_164(int iParam0, int iParam1)//Position - 0xEEAD
{
	switch (iParam0)
	{
		case 0:
			__LIB_20__.func_202(iParam1);
			break;
		case 2:
			__LIB_20__.func_201(iParam1);
			break;
		case 3:
			__LIB_26__.func_240(iParam1);
			break;
		case 4:
			__LIB_20__.func_198(iParam1);
			break;
		case 6:
			__LIB_20__.func_197(iParam1);
			break;
		case 5:
			__LIB_20__.func_196(iParam1);
			break;
		case 8:
			__LIB_20__.func_195(iParam1);
			break;
		case 9:
			__LIB_20__.func_194(iParam1);
			break;
		case 10:
			__LIB_11__.func_186(iParam1);
			break;
		case 1:
			__LIB_20__.func_192(iParam1);
			break;
		case 7:
			__LIB_20__.func_191(iParam1);
			break;
		case 11:
			__LIB_20__.func_190(iParam1);
			break;
		case 12:
			__LIB_20__.func_189(iParam1);
			break;
		case 13:
			__LIB_20__.func_188(iParam1);
			break;
		case 14:
			__LIB_20__.func_321(iParam1);
			break;
	}
}

void func_189(int iParam0, int iParam1)//Position - 0x158BE
{
	switch (iParam0)
	{
		case 0:
			__LIB_20__.func_219(iParam1);
			break;
		case 2:
			__LIB_20__.func_218(iParam1);
			break;
		case 3:
			__LIB_26__.func_241(iParam1);
			break;
		case 4:
			__LIB_20__.func_214(iParam1);
			break;
		case 6:
			__LIB_20__.func_213(iParam1);
			break;
		case 5:
			__LIB_20__.func_212(iParam1);
			break;
		case 8:
			__LIB_11__.func_187(iParam1);
			break;
		case 9:
			__LIB_20__.func_210(iParam1);
			break;
		case 10:
			__LIB_20__.func_209(iParam1);
			break;
		case 1:
			__LIB_20__.func_208(iParam1);
			break;
		case 7:
			__LIB_20__.func_207(iParam1);
			break;
		case 11:
			__LIB_20__.func_206(iParam1);
			break;
		case 12:
			__LIB_20__.func_205(iParam1);
			break;
		case 13:
			__LIB_20__.func_204(iParam1);
			break;
		case 14:
			__LIB_20__.func_203(iParam1);
			break;
	}
}

int func_227(int iParam0, int iParam1, int iParam2)//Position - 0x22766
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
	Global_78130[1 /*14*/] = { func_163(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_18__.func_180(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_227(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_227(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { func_163(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_227(iParam0, 14, iVar4))
										{
											if (!__LIB_24__.func_955(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__.func_795(iParam0, iVar2);
						Global_78130[2 /*14*/] = { func_163(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_24__.func_955(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
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
		uVar8 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_227(iParam0, 14, uVar8[iVar7]))
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
	else if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)))
	{
		return 1;
	}
	return 0;
}

bool func_237(int iParam0, var uParam1, float fParam2, bool bParam3)//Position - 0x22C89
{
	struct<8> Var0;
	struct<8> Var1;
	Var0 = 2;
	if (!__LIB_0__.func_524(uParam1->f_2))
	{
		return 0;
	}
	__LIB_10__.func_719(&Var0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_2, 0f, 2.75f, Local_56.f_2) + Vector(1f, 0f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_2, 0f, -2.75f, Local_56.f_2) - Vector(1f, 0f, 0f), 3f);
	if (bParam3)
	{
		__LIB_26__.func_382(&Var0, 0, 0, 255, 255);
	}
	if (fParam2 > 0f)
	{
		Var1 = { __LIB_11__.func_188(Var0, fParam2) };
		return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Var1[0 /*3*/], Var1[1 /*3*/], Var1.f_7, false, true, 0);
	}
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, false, true, 0);
}

void func_244(var uParam0)//Position - 0x2306F
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	__LIB_10__.func_835(&uLocal_225, 0);
	if (uParam0->f_11 == 1)
	{
		func_39(PLAYER::PLAYER_PED_ID(), uParam0);
		func_39(__LIB_11__.func_91(), uParam0);
		func_39(__LIB_11__.func_90(), uParam0);
	}
	__LIB_9__.func_52(&Local_69, 0, 1);
	__LIB_26__.func_354(1, 1, 1, 1);
	if (uParam0->f_11 == 1)
	{
		Global_31965 = 0;
	}
	if (iLocal_228 == 1)
	{
		iLocal_228 = 0;
		STREAMING::END_SRL();
	}
}

void func_245(var uParam0)//Position - 0x230E9
{
	struct<3> Var0;
	Var0 = { Local_57 };
	if (__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()) && __LIB_0__.func_524(uParam0->f_2))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
		}
		ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_2, 0, Var0, 0f, 0f, -90f, false, false, false, false, 2, true, 0);
	}
	func_247(uParam0);
	func_246(uParam0);
}

void func_246(var uParam0)//Position - 0x23151
{
	struct<3> Var0;
	Var0 = { Local_57 };
	if (__LIB_0__.func_524(__LIB_11__.func_90()) && __LIB_0__.func_524(uParam0->f_2))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(__LIB_11__.func_90()))
		{
			ENTITY::DETACH_ENTITY(__LIB_11__.func_90(), true, true);
		}
		Var0.f_0 = (Var0.f_0 - 0.4f);
		Var0.f_1 = (Var0.f_1 - 0.5f);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(__LIB_11__.func_90(), uParam0->f_2, 0, Var0, 0f, 0f, -90f, false, false, false, false, 2, true, 0);
	}
}

void func_247(var uParam0)//Position - 0x231C5
{
	struct<3> Var0;
	Var0 = { Local_57 };
	if (__LIB_0__.func_524(__LIB_11__.func_91()) && __LIB_0__.func_524(uParam0->f_2))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(__LIB_11__.func_91()))
		{
			ENTITY::DETACH_ENTITY(__LIB_11__.func_91(), true, true);
		}
		Var0.f_0 = (Var0.f_0 + 0.2f);
		Var0.f_1 = (Var0.f_1 + 0.5f);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(__LIB_11__.func_91(), uParam0->f_2, 0, Var0, 0f, 0f, -90f, false, false, false, false, 2, true, 0);
	}
}

void func_248(var uParam0, var uParam1)//Position - 0x23239
{
	float fVar0;
	fVar0 = uParam0->f_15[1];
	if (*uParam0 == 0)
	{
		return;
	}
	if (uParam0->f_20 <= 0 || __LIB_0__.func_86(uParam0->f_1[1 /*3*/]))
	{
		__LIB_20__.func_325(uParam0, uParam1, 0, 0, 1, 1);
		return;
	}
	if (fVar0 == 0f)
	{
		fVar0 = uParam0->f_15[0];
	}
	__LIB_10__.func_835(uParam1, 0);
	*uParam1 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", uParam0->f_1[1 /*3*/], uParam0->f_8[1 /*3*/], fVar0, true, 2);
	if (!CAM::DOES_CAM_EXIST(*uParam1))
	{
		return;
	}
	uParam0->f_19 = MISC::GET_GAME_TIMER();
	CAM::SET_CAM_ACTIVE(*uParam1, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	CAM::SET_CAM_PARAMS(*uParam1, uParam0->f_1[0 /*3*/], uParam0->f_8[0 /*3*/], uParam0->f_15[0], uParam0->f_20, 1, 1, 2);
	if (__LIB_0__.func_524(uParam0->f_21))
	{
		CAM::POINT_CAM_AT_ENTITY(*uParam1, uParam0->f_21, 0f, 0f, 0f, true);
	}
}

int func_250(var uParam0)//Position - 0x2343D
{
	if (uParam0->f_15 == 0)
	{
		if (uParam0->f_17 == 1f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (uParam0->f_17 == -1f)
	{
		return 0;
	}
	return 1;
}

void func_251()//Position - 0x23472
{
	__LIB_9__.func_52(&Local_69, 0, 1);
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	__LIB_20__.func_325(&uLocal_202, &uLocal_225, 0, 0, 1, 1);
	iLocal_53 = 1;
	bLocal_79 = false;
}

void func_252(var uParam0)//Position - 0x234A0
{
	if (func_250(uParam0) == 0)
	{
		func_262(uParam0);
	}
	else
	{
		func_254(uParam0);
	}
	func_253();
}

void func_253()//Position - 0x234C5
{
	return;
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
		iLocal_239 = 1;
		iLocal_234 = 0;
		return;
	}
	if (iLocal_234 > 0 && MISC::GET_GAME_TIMER() > iLocal_234)
	{
		iLocal_234 = 0;
		return;
	}
}

void func_254(var uParam0)//Position - 0x2350B
{
	int iVar0;
	struct<23> Var1;
	iVar0 = 0;
	Var1.f_1 = 2;
	Var1.f_8 = 2;
	Var1.f_15 = 2;
	Var1.f_22 = -1027211264;
	switch (iLocal_226)
	{
		case 0:
			__LIB_20__.func_435(&uLocal_202, 461.3928f, 5634.5933f, 803.8433f, -21.1986f, 0.0407f, 152.8518f, 0, 0);
			__LIB_12__.func_5(&uLocal_202, 465.1065f, 5631.494f, 803.8177f, -26.0362f, 0.0546f, 133.1987f, 23000);
			__LIB_11__.func_187(&uLocal_202, 40f, 0);
			iLocal_226++;
			iVar0 = 1;
			break;
		case 1:
			iLocal_226++;
			break;
		case 2:
		case 3:
			func_257(215.1628f, 5595.83f, 615.1234f, 22.9775f, 0f, -111.6452f, 1128792064);
			if (uParam0->f_20 > 112f)
			{
				__LIB_20__.func_435(&uLocal_202, 215.1628f, 5595.83f, 615.1234f, 22.9775f, 0f, -111.6452f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, 221.7997f, 5593.111f, 597.789f, 17.1025f, 0f, -121.5107f, 18000);
				__LIB_11__.func_187(&uLocal_202, 45f, 0);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
		case 4:
			iLocal_226++;
			break;
		case 5:
			func_257(251.0161f, 5575.745f, 617.5678f, -56.0667f, 0f, 89.7301f, 1128792064);
			if (uParam0->f_20 > 288f)
			{
				__LIB_20__.func_435(&uLocal_202, 251.0161f, 5575.745f, 617.5678f, -56.0667f, 0f, 89.7301f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, 248.8245f, 5575.7476f, 619.0521f, -54.605f, 0f, 89.7301f, 11000);
				__LIB_11__.func_187(&uLocal_202, 45f, 0);
				func_255(&Var1, 16);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
		case 6:
			func_257(-69.826f, 5595.7646f, 390.4564f, 25.1669f, 0f, -110.119f, 1128792064);
			if (uParam0->f_20 > 400f)
			{
				__LIB_20__.func_435(&uLocal_202, -69.826f, 5595.7646f, 390.4564f, 25.1669f, 0f, -110.119f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, -68.5961f, 5595.183f, 386.8474f, 20.6269f, 0f, -115.1379f, 18000);
				__LIB_11__.func_187(&uLocal_202, 40.43f, 0);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
		case 7:
		case 8:
		case 9:
		case 10:
			func_257(-6.2591f, 5609.3184f, 402.8656f, -0.9222f, 0f, 153.9538f, 1128792064);
			if (uParam0->f_20 > 575f)
			{
				__LIB_20__.func_435(&uLocal_202, -6.2591f, 5609.3184f, 402.8656f, -0.9222f, 0f, 153.9538f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, -5.9107f, 5609.6133f, 401.1573f, -11.4635f, 0f, 130.2651f, 10000);
				__LIB_11__.func_187(&uLocal_202, 55f, 0);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
		case 11:
			func_257(-215.7561f, 5606.187f, 282.0778f, 22.8233f, 0f, -118.7368f, 1128792064);
			if (uParam0->f_20 > 660f)
			{
				__LIB_20__.func_435(&uLocal_202, -215.7561f, 5606.187f, 282.0778f, 22.8233f, 0f, -118.7368f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, -199.8146f, 5615.971f, 284.7165f, 22.8233f, 0f, -138.4323f, 10000);
				__LIB_11__.func_187(&uLocal_202, 40.026f, 0);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
		case 12:
			func_257(-61.8849f, 5558.9736f, 338.9037f, -15.2417f, 0f, 104.1686f, 1128792064);
			if (uParam0->f_20 > 740f)
			{
				__LIB_20__.func_435(&uLocal_202, -61.8849f, 5558.9736f, 338.9037f, -15.2417f, 0f, 104.1686f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, -58.0053f, 5559.9546f, 323.449f, -10.6159f, 0f, 104.1686f, 10000);
				__LIB_11__.func_187(&uLocal_202, 47.9808f, 0);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
		case 13:
			func_257(-291.6088f, 5570.3823f, 227.2185f, 26.4681f, 0f, -73.2798f, 1128792064);
			if (uParam0->f_20 > 840f)
			{
				__LIB_20__.func_435(&uLocal_202, -291.6088f, 5570.3823f, 227.2185f, 26.4681f, 0f, -73.2798f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, -292.7007f, 5575.862f, 227.2185f, 24.417f, 0f, -69.0123f, 10000);
				__LIB_11__.func_187(&uLocal_202, 40.05f, 0);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
		case 14:
			func_257(-509.6508f, 5683.8433f, 89.9184f, 21.3193f, 0f, -128.1549f, 1128792064);
			if (uParam0->f_20 > 920f)
			{
				__LIB_20__.func_435(&uLocal_202, -509.6508f, 5683.8433f, 89.9184f, 21.3193f, 0f, -128.1549f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, -511.7916f, 5681.12f, 89.9184f, 21.3193f, 0f, -128.1549f, 18000);
				__LIB_11__.func_187(&uLocal_202, 40f, 0);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
		case 15:
			iLocal_226++;
			break;
		case 16:
			func_257(-475.9374f, 5375.9893f, 94.2374f, 6.8777f, 0f, 6.4845f, 1128792064);
			if (uParam0->f_20 > 1090f)
			{
				__LIB_20__.func_435(&uLocal_202, -475.9374f, 5375.9893f, 94.2374f, 6.8777f, 0f, 6.4845f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, -475.9374f, 5375.9893f, 94.2374f, -2.0745f, 0f, 21.1399f, 16000);
				__LIB_11__.func_187(&uLocal_202, 30f, 0);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
		case 17:
			iLocal_226++;
			break;
		case 18:
			iLocal_226++;
			break;
		case 19:
			iLocal_226++;
			break;
		case 20:
			func_257(-674.5237f, 5574.565f, 41.1581f, 15.6335f, 0f, -77.0593f, 1128792064);
			if (uParam0->f_20 > 1245f)
			{
				__LIB_20__.func_435(&uLocal_202, -674.5237f, 5574.565f, 41.1581f, 15.6335f, 0f, -77.0593f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, -675.0132f, 5576.074f, 41.1581f, 24.5521f, 0f, -57.769f, 13000);
				__LIB_11__.func_187(&uLocal_202, 45f, 0);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
		case 21:
			iLocal_226++;
			break;
		case 22:
			func_257(-743.0775f, 5570.7764f, 47.8665f, -3.7547f, 0.251f, -46.5015f, 1128792064);
			if (uParam0->f_20 > 1355f)
			{
				__LIB_20__.func_435(&uLocal_202, -743.0775f, 5570.7764f, 47.8665f, -3.7547f, 0.251f, -46.5015f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, -749.04f, 5577.421f, 47.9055f, -9.6095f, 0.251f, -48.8215f, 20000);
				__LIB_11__.func_187(&uLocal_202, 45f, 0);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 == 1 && bLocal_79 == 0)
	{
		__LIB_20__.func_325(&uLocal_202, &uLocal_225, 0, 0, 0, 0);
		iLocal_53 = 1;
	}
}

void func_255(var uParam0, int iParam1)//Position - 0x23CF9
{
	struct<3> Var0;
	return;
	if (iLocal_235 != iParam1)
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
		Var0 = { __LIB_2__.func_162(uParam0->f_8[0 /*3*/]) };
		if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(uParam0->f_1[0 /*3*/] + Var0 * Vector(140f, 140f, 140f), 141f, 2))
		{
			iLocal_234 = MISC::GET_GAME_TIMER() + 10000;
			iLocal_235 = iParam1;
			Local_236 = { uParam0->f_1[0 /*3*/] };
			Local_237 = { Var0 };
			fLocal_238 = 100f;
			iLocal_239 = 0;
		}
	}
}

void func_257(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x23DA2
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (iLocal_240 == 1)
	{
		return;
	}
	if (iLocal_53)
	{
		if (STREAMING::STREAMVOL_IS_VALID(iLocal_52))
		{
			STREAMING::STREAMVOL_DELETE(iLocal_52);
		}
		iLocal_52 = STREAMING::STREAMVOL_CREATE_FRUSTUM(Param0, __LIB_2__.func_162(Param1), fParam2, 12, 127);
		iLocal_53 = 0;
	}
	else if (STREAMING::STREAMVOL_IS_VALID(iLocal_52))
	{
		if (STREAMING::IS_STREAMVOL_ACTIVE())
		{
			if (STREAMING::STREAMVOL_HAS_LOADED(iLocal_52))
			{
				STREAMING::STREAMVOL_DELETE(iLocal_52);
			}
		}
	}
}

void func_262(var uParam0)//Position - 0x23F08
{
	int iVar0;
	iVar0 = 0;
	switch (iLocal_226)
	{
		case 0:
			__LIB_20__.func_435(&uLocal_202, -733.0331f, 5557.0503f, 54.315f, -13.2766f, 0f, 26.2995f, 0, 0);
			__LIB_12__.func_5(&uLocal_202, -733.0331f, 5557.0503f, 54.305f, 3.6561f, 0f, -49.3377f, 20000);
			__LIB_11__.func_187(&uLocal_202, 50f, 0);
			iLocal_226++;
			iVar0 = 1;
			break;
		case 1:
			func_257(-674.4f, 5644f, 40.1f, 7.5f, 0f, 148.3f, 1128792064);
			if (uParam0->f_20 > 45f)
			{
				__LIB_20__.func_435(&uLocal_202, -674.4f, 5644f, 40.1f, 7.5f, 0f, 148.3f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, -674.4f, 5644f, 40.1f, 7.5f, 0f, -133.2f, 11000);
				__LIB_11__.func_187(&uLocal_202, 55f, 0);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
		case 2:
			func_257(-539.4792f, 5522.9756f, 65.4f, 4.1853f, 0f, 23.2142f, 1128792064);
			if (uParam0->f_20 > 136f)
			{
				__LIB_20__.func_435(&uLocal_202, -539.4792f, 5522.9756f, 65.4f, 4.1853f, 0f, 23.2142f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, -536.2819f, 5524.2173f, 65.4f, 9.7636f, 0f, 14.8368f, 10000);
				__LIB_11__.func_187(&uLocal_202, 55f, 0);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
		case 3:
			func_257(-428.1f, 5383.4f, 102.3f, -6.4381f, 0f, 12.5398f, 1128792064);
			if (uParam0->f_20 > 220.3f)
			{
				__LIB_20__.func_435(&uLocal_202, -428.1f, 5383.4f, 102.3f, -6.4381f, 0f, 12.5398f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, -428.1f, 5383.4f, 102.3f, 1.7164f, 0f, -8.342f, 12000);
				__LIB_11__.func_187(&uLocal_202, 45f, 0);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
		case 4:
			func_257(-443.8493f, 5570.767f, 143.7865f, 24.0363f, 0f, -84.852f, 1128792064);
			if (uParam0->f_20 > 337.3f)
			{
				__LIB_20__.func_435(&uLocal_202, -443.8493f, 5570.767f, 143.7865f, 24.0363f, 0f, -84.852f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, -446.9265f, 5570.49f, 150.7141f, 24.0363f, 0f, -84.852f, 12000);
				__LIB_11__.func_187(&uLocal_202, 42f, 0);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
		case 5:
			iLocal_226++;
			break;
		case 6:
			func_257(-237.0857f, 5571.8896f, 262.2075f, -38.2954f, 0.0082f, 79.4291f, 1128792064);
			if (uParam0->f_20 > 440.5f)
			{
				__LIB_20__.func_435(&uLocal_202, -237.0857f, 5571.8896f, 262.2075f, -38.2954f, 0.0082f, 79.4291f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, -234.3823f, 5571.3843f, 258.7245f, -23.0862f, 0.0082f, 79.4291f, 13500);
				__LIB_11__.func_187(&uLocal_202, 44f, 0);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
		case 7:
			func_257(-318.7657f, 5556.8384f, 239.9462f, 18.044f, 0.0339f, -85.4425f, 1128792064);
			if (uParam0->f_20 > 545.5f)
			{
				__LIB_20__.func_435(&uLocal_202, -318.7657f, 5556.8384f, 239.9462f, 18.044f, 0.0339f, -85.4425f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, -311.451f, 5557.4204f, 242.3366f, 20.0948f, 0.0339f, -85.4425f, 20000);
				__LIB_11__.func_187(&uLocal_202, 50f, 0);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
		case 8:
			func_257(46.513f, 5534.116f, 378.619f, -12.2512f, 0.004f, 70.544f, 1128792064);
			if (uParam0->f_20 > 663.5f)
			{
				__LIB_20__.func_435(&uLocal_202, 46.513f, 5534.116f, 378.619f, -12.2512f, 0.004f, 70.544f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, 46.513f, 5534.116f, 378.619f, 8.2022f, 0.004f, 56.552f, 20000);
				__LIB_11__.func_187(&uLocal_202, 45f, 0);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
		case 9:
			iLocal_226++;
			break;
		case 10:
			func_257(229.948f, 5536.094f, 522.865f, -14.7644f, -0.1333f, 67.2156f, 1128792064);
			if (uParam0->f_20 > 855.5f)
			{
				__LIB_20__.func_435(&uLocal_202, 229.948f, 5536.094f, 522.865f, -14.7644f, -0.1333f, 67.2156f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, 227.183f, 5534.888f, 523.006f, -2.897f, -0.133f, 52.652f, 21000);
				__LIB_11__.func_187(&uLocal_202, 50f, 0);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
		case 11:
			func_257(235.3752f, 5515.366f, 564.9175f, 18.2202f, 0f, 8.5423f, 1128792064);
			if (uParam0->f_20 > 1060.36f)
			{
				__LIB_20__.func_435(&uLocal_202, 235.3752f, 5515.366f, 564.9175f, 18.2202f, 0f, 8.5423f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, 234.0372f, 5524.275f, 567.8823f, 18.2202f, 0f, 8.5423f, 12000);
				__LIB_11__.func_187(&uLocal_202, 50f, 0);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
		case 12:
			func_257(262.3502f, 5562.681f, 624.7158f, 33.0263f, 0f, -82.3579f, 1128792064);
			if (uParam0->f_20 > 1185.5035f)
			{
				__LIB_20__.func_435(&uLocal_202, 262.3502f, 5562.681f, 624.7158f, 33.0263f, 0f, -82.3579f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, 268.5094f, 5563.5073f, 628.7556f, 33.0263f, 0f, -82.3579f, 12000);
				__LIB_11__.func_187(&uLocal_202, 50f, 0);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
		case 13:
			func_257(358.3939f, 5507.8916f, 702.6762f, 12.1268f, -0.0966f, -6.9744f, 1128792064);
			if (uParam0->f_20 > 1285f)
			{
				__LIB_20__.func_435(&uLocal_202, 358.3939f, 5507.8916f, 702.6762f, 12.1268f, -0.0966f, -6.9744f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, 351.1451f, 5510.4966f, 702.6633f, 28.5814f, -0.0966f, -30.1375f, 12000);
				__LIB_11__.func_187(&uLocal_202, 45f, 0);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
		case 14:
			func_257(419.673f, 5542.148f, 781.969f, 2.839f, 0f, -38.893f, 1128792064);
			if (uParam0->f_20 > 1380f)
			{
				__LIB_20__.func_435(&uLocal_202, 419.673f, 5542.148f, 781.969f, 2.839f, 0f, -38.893f, 0, 0);
				__LIB_12__.func_5(&uLocal_202, 426.675f, 5545.488f, 782.306f, 2.839f, 0f, -30.85f, 12000);
				__LIB_11__.func_187(&uLocal_202, 40f, 0);
				iLocal_226++;
				iVar0 = 1;
			}
			break;
		case 15:
			iLocal_226++;
			break;
	}
	if (iVar0 == 1 && bLocal_79 == 0)
	{
		__LIB_20__.func_325(&uLocal_202, &uLocal_225, 0, 0, 0, 0);
		iLocal_53 = 1;
	}
}

void func_263(var uParam0)//Position - 0x24734
{
	bool bVar0;
	struct<35> Var1;
	if (uParam0->f_9)
	{
		return;
	}
	if (__LIB_0__.func_39(14))
	{
		return;
	}
	Var1.f_3 = 2;
	Var1.f_6 = 2;
	Var1.f_17 = 1065353216;
	Var1.f_21 = 2;
	Var1.f_28 = -1;
	Var1.f_29 = -1;
	if (func_237(PLAYER::PLAYER_PED_ID(), uParam0, 1.05f, 0))
	{
		uParam0->f_25 = (MISC::GET_GAME_TIMER() + iLocal_63);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/);
		func_278();
		if (uParam0->f_10 == 1 && __LIB_0__.func_77(0))
		{
			HUD::CLEAR_HELP(true);
			uParam0->f_10 = 0;
		}
		bVar0 = func_271(uParam0);
		if (bVar0 == 1)
		{
			__LIB_10__.func_835(&uLocal_225, 0);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				bVar0 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
				while (bVar0 == 1)
				{
					if (!__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()))
					{
						bVar0 = false;
					}
					else
					{
						bVar0 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
					}
					SYSTEM::WAIT(0);
					func_278();
					__LIB_0__.func_186();
				}
			}
			uParam0->f_11 = 1;
			iLocal_226 = 0;
			*uParam0 = 2;
			iLocal_235 = -1;
			iLocal_234 = MISC::GET_GAME_TIMER();
			if (__LIB_0__.func_39(6))
			{
				__LIB_20__.func_587(iLocal_231, 1);
			}
			func_252(uParam0);
			func_266(uParam0);
			func_109(uParam0);
			if (func_250(uParam0) == 0)
			{
			}
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DOOR_CLOSE", uParam0->f_2, "CABLE_CAR_SOUNDS", false, 0);
			func_265(uParam0);
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 0);
			FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f);
			if (func_250(uParam0) == 0)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CABLE_CAR_RIDE_UP_SCENE"))
				{
					AUDIO::START_AUDIO_SCENE("CABLE_CAR_RIDE_UP_SCENE");
				}
			}
			else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CABLE_CAR_RIDE_DOWN_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("CABLE_CAR_RIDE_DOWN_SCENE");
			}
			HUD::CLEAR_HELP(true);
			return;
		}
	}
	else if (uParam0->f_10 == 1)
	{
		HUD::CLEAR_HELP(true);
		uParam0->f_10 = 0;
	}
	if (MISC::GET_GAME_TIMER() > uParam0->f_25)
	{
		if (MISC::IS_POSITION_OCCUPIED(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_2, Local_57), 1f, false, true, true, false, false, 0, false))
		{
			return;
		}
		if (MISC::IS_POSITION_OCCUPIED(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_2, Local_58), 1f, false, true, true, false, false, 0, false))
		{
			return;
		}
		if (func_4())
		{
			if (__LIB_11__.func_326(PLAYER::PLAYER_PED_ID(), uParam0->f_12, 200f))
			{
				return;
			}
		}
		else
		{
			Var1 = { func_264(uParam0) };
			if (__LIB_0__.func_524(Var1.f_2) && (Var1.f_20 > 0f || Var1.f_9))
			{
				if (__LIB_11__.func_326(uParam0->f_2, Var1.f_12, 200f))
				{
					return;
				}
			}
		}
		func_266(uParam0);
		*uParam0 = 2;
		if (uParam0->f_10 == 1)
		{
			HUD::CLEAR_HELP(true);
			uParam0->f_10 = 0;
		}
		uParam0->f_11 = 0;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DOOR_CLOSE", uParam0->f_2, "CABLE_CAR_SOUNDS", false, 0);
	}
}

struct<35> func_264(var uParam0)//Position - 0x249E4
{
	if (uParam0->f_2 == Local_200.f_2)
	{
		return Local_201;
	}
	return Local_200;
}

void func_265(var uParam0)//Position - 0x24A0A
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (iLocal_240 == 1)
	{
		if (func_250(uParam0) == 0)
		{
			iVar1 = "cablecar_up";
		}
		else
		{
			iVar1 = "cablecar_down";
		}
	}
	iLocal_228 = 0;
	Global_31965 = 1;
	func_112(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2f, 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar1))
	{
		STREAMING::PREFETCH_SRL(iVar1);
		iVar0 = MISC::GET_GAME_TIMER() + 6000;
		while (iVar2 == 0)
		{
			if (STREAMING::IS_SRL_LOADED())
			{
				iLocal_228 = 1;
				iVar2 = 1;
			}
			uParam0->f_31 = (uParam0->f_31 - SYSTEM::TIMESTEP());
			if (uParam0->f_31 <= 0f)
			{
				uParam0->f_31 = 0f;
			}
			func_2(uParam0, uParam0->f_31);
			if (MISC::GET_GAME_TIMER() > iVar0)
			{
				iVar2 = 1;
				iLocal_228 = 0;
			}
			SYSTEM::WAIT(0);
		}
		if (iLocal_228 == 1)
		{
			fLocal_229 = 0f;
			STREAMING::SET_SRL_READAHEAD_TIMES(5, 5, 5, 5);
			STREAMING::BEGIN_SRL();
		}
		else
		{
			STREAMING::END_SRL();
		}
	}
}

void func_266(var uParam0)//Position - 0x24AEB
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	iVar0 = 0;
	iVar1 = 0;
	__LIB_0__.func_524(PLAYER::PLAYER_PED_ID());
	iVar1 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar2);
	if (iVar1 == 0)
	{
		return;
	}
	func_40(uParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (uParam0->f_24 < uParam0->f_21)
		{
			if (__LIB_0__.func_524(uVar2[iVar0]) && func_268(uVar2[iVar0]))
			{
				if (func_237(uVar2[iVar0], uParam0, 0, 0))
				{
					uParam0->f_21[uParam0->f_24] = uVar2[iVar0];
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_21[uParam0->f_24]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_21[uParam0->f_24], true, false);
					}
					func_267(uParam0->f_21[uParam0->f_24], uParam0, uParam0->f_24);
					uParam0->f_24++;
				}
			}
		}
		iVar0++;
	}
}

void func_267(int iParam0, var uParam1, int iParam2)//Position - 0x24BBE
{
	struct<3> Var0;
	if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
	{
		ENTITY::DETACH_ENTITY(iParam0, true, true);
	}
	if (iParam2 == 0)
	{
		Var0 = { 0.6f, -1.21756f, -5.854f };
	}
	else
	{
		Var0 = { -0.6f, -1.21756f, -5.85388f };
	}
	Var0.f_1 = (Var0.f_1 * uParam1->f_17);
	if (uParam1->f_17 == -1f)
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, uParam1->f_2, 0, Var0, 0f, 0f, 180f, false, false, false, false, 2, true, 0);
	}
	else
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, uParam1->f_2, 0, Var0, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	}
	ENTITY::SET_ENTITY_HEADING(iParam0, ENTITY::GET_ENTITY_HEADING(uParam1->f_2));
}

bool func_268(int iParam0)//Position - 0x24C63
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar0 == joaat("cablecar"))
	{
		return 0;
	}
	return (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar0));
}

int func_271(var uParam0)//Position - 0x24D08
{
	bool bVar0;
	bVar0 = func_237(PLAYER::PLAYER_PED_ID(), uParam0, 0, 0);
	if (bVar0)
	{
		uParam0->f_25 = (MISC::GET_GAME_TIMER() + iLocal_63);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/);
		func_278();
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (bVar0)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					uParam0->f_1 = 7;
				}
				else if (func_277(uParam0))
				{
					uParam0->f_1 = 2;
				}
				else
				{
					uParam0->f_1 = 3;
				}
				if (uParam0->f_10 == 1)
				{
					__LIB_31__.func_473();
				}
				uParam0->f_10 = 0;
			}
			break;
		case 1:
			if (!uParam0->f_10)
			{
				__LIB_0__.func_187("PLAY_CABLE_NO_CASH" /* GXT: You do not have enough money. It costs $10 to ride the cable car. */);
				uParam0->f_10 = 1;
			}
			if (!bVar0 || __LIB_38__.func_137() >= 10)
			{
				__LIB_31__.func_473();
				uParam0->f_1 = 0;
				return 0;
			}
			break;
		case 2:
			if (!uParam0->f_10)
			{
				__LIB_0__.func_187("CAR_IN_CABLECAR" /* GXT: This vehicle can't be taken in the cable car */);
				uParam0->f_10 = 1;
			}
			if (!bVar0 || !func_277(uParam0))
			{
				__LIB_31__.func_473();
				uParam0->f_1 = 0;
				return 0;
			}
			break;
		case 7:
			if (!uParam0->f_10)
			{
				__LIB_0__.func_187("CABLE_WANTED" /* GXT: You can't use the cable car while Wanted. */);
				uParam0->f_10 = 1;
			}
			if (!bVar0 || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				__LIB_31__.func_473();
				uParam0->f_1 = 0;
				return 0;
			}
			break;
		case 3:
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/);
			func_278();
			__LIB_0__.func_186();
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				__LIB_31__.func_473();
				uParam0->f_1 = 0;
				uParam0->f_10 = 0;
				return 0;
			}
			if (!bVar0)
			{
				__LIB_31__.func_473();
				uParam0->f_1 = 0;
				uParam0->f_10 = 0;
				return 0;
			}
			if (__LIB_0__.func_104(0) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				__LIB_31__.func_473();
				uParam0->f_1 = 0;
				return 0;
			}
			if (__LIB_38__.func_137() < 10)
			{
				__LIB_31__.func_473();
				uParam0->f_1 = 1;
				uParam0->f_10 = 0;
				return 0;
			}
			if (!uParam0->f_10 && !__LIB_0__.func_77(0))
			{
				__LIB_0__.func_187("PLAY_CABLE" /* GXT: Press ~INPUT_CONTEXT~ to ride the cable car. The cost is $10. */);
				uParam0->f_10 = 0;
			}
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/) && !__LIB_0__.func_77(0))
			{
				uParam0->f_1 = 4;
			}
			break;
		case 4:
			func_278();
			__LIB_0__.func_186();
			uParam0->f_1 = 0;
			uParam0->f_10 = 0;
			uParam0->f_34 = 1;
			if (func_250(uParam0) == 0)
			{
				MISC::SET_BIT(&Global_78567, 4);
			}
			else
			{
				MISC::SET_BIT(&Global_78567, 5);
			}
			HUD::CLEAR_HELP(true);
			return 1;
	}
	return 0;
}

int func_277(var uParam0)//Position - 0x25000
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	iVar0 = 0;
	iVar1 = 0;
	__LIB_0__.func_524(PLAYER::PLAYER_PED_ID());
	iVar1 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar2);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (__LIB_0__.func_524(uVar2[iVar0]) && !func_268(uVar2[iVar0]))
		{
			if (func_237(uVar2[iVar0], uParam0, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_278()//Position - 0x25079
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
}

bool func_279(int iParam0, var uParam1, float fParam2, bool bParam3)//Position - 0x250C2
{
	struct<8> Var0;
	struct<8> Var1;
	Var0 = 2;
	if (!__LIB_0__.func_524(uParam1->f_2))
	{
		return 0;
	}
	__LIB_10__.func_719(&Var0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_2, 0f, 2.75f, (Local_56.f_2 + 2.63f)) + Vector(1f, 0f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_2, 0f, -2.75f, (Local_56.f_2 + 2.63f)) - Vector(1f, 0f, 0f), 3f);
	if (bParam3)
	{
		__LIB_26__.func_382(&Var0, 0, 0, 255, 255);
	}
	if (fParam2 > 0f)
	{
		Var1 = { __LIB_11__.func_188(Var0, fParam2) };
		return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Var1[0 /*3*/], Var1[1 /*3*/], Var1.f_7, false, true, 0);
	}
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, false, true, 0);
}

void func_282(var uParam0)//Position - 0x2524D
{
	if (__LIB_0__.func_524(uParam0->f_2))
	{
		uParam0->f_31 = 0f;
		func_2(uParam0, 0f);
	}
}

void func_286()//Position - 0x252B2
{
	__LIB_10__.func_721(&uLocal_82, 0);
	__LIB_10__.func_721(&uLocal_82, 1);
	__LIB_10__.func_721(&uLocal_82, 2);
}

void func_287(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x252D2
{
	float fVar0;
	func_289(uParam0);
	uParam0->f_15 = iParam1;
	uParam0->f_18 = iParam2;
	uParam0->f_12 = { func_14(&(Local_64[iParam1 /*49*/]), iParam2, &iParam3) };
	MISC::CLEAR_AREA_OF_OBJECTS(uParam0->f_12 + Vector(-0.2f, 0f, 0f), 2f, 0);
	uParam0->f_2 = OBJECT::CREATE_OBJECT(iLocal_65, uParam0->f_12 + Vector(-0.2f, 0f, 0f), true, true, false);
	uParam0->f_19 = iParam3;
	uParam0->f_17 = iParam4;
	uParam0->f_25 = (MISC::GET_GAME_TIMER() + iLocal_63);
	uParam0->f_32 = 0;
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_2, true);
	ENTITY::SET_ENTITY_COORDS(uParam0->f_2, uParam0->f_12 + Vector(-0.2f, 0f, 0f), true, false, false, true);
	fVar0 = __LIB_4__.func_305(Local_64[uParam0->f_15 /*49*/][uParam0->f_18 /*3*/], Local_64[uParam0->f_15 /*49*/][uParam0->f_18 + 1 /*3*/], 1);
	ENTITY::SET_ENTITY_HEADING(uParam0->f_2, fVar0);
	uParam0->f_3[0] = OBJECT::CREATE_OBJECT(iLocal_66, uParam0->f_12 + Vector(-0.2f, 0f, 0f), true, true, false);
	ENTITY::SET_ENTITY_HEADING(uParam0->f_3[0], fVar0);
	uParam0->f_3[1] = OBJECT::CREATE_OBJECT(iLocal_67, uParam0->f_12 + Vector(-0.2f, 0f, 0f), true, true, false);
	ENTITY::SET_ENTITY_HEADING(uParam0->f_3[1], fVar0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_3[0], uParam0->f_2, 0, 0f, 0f, 0f, 0f, 0f, 0f, false, false, true, false, 2, true, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_3[1], uParam0->f_2, 0, 0f, 0f, 0f, 0f, 0f, 0f, false, false, true, false, 2, true, 0);
	uParam0->f_6[0] = OBJECT::CREATE_OBJECT(iLocal_66, uParam0->f_12 + Vector(-0.2f, 0f, 0f), true, true, false);
	uParam0->f_6[1] = OBJECT::CREATE_OBJECT(iLocal_67, uParam0->f_12 + Vector(-0.2f, 0f, 0f), true, true, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_6[0], uParam0->f_2, 0, 0f, 0f, 0f, 0f, 0f, 180f, false, false, true, false, 2, true, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_6[1], uParam0->f_2, 0, 0f, 0f, 0f, 0f, 0f, 180f, false, false, true, false, 2, true, 0);
	func_20(uParam0);
	func_1(uParam0);
	if (__LIB_0__.func_524(uParam0->f_2))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Arrive_Station", uParam0->f_2, "CABLE_CAR_SOUNDS", false, 0);
	}
}

void func_289(var uParam0)//Position - 0x2553C
{
	uParam0->f_20 = 0f;
	uParam0->f_9 = 0;
	uParam0->f_16 = 0f;
	uParam0->f_10 = 0;
	*uParam0 = 0;
	uParam0->f_32 = 0;
}

void func_290(var uParam0)//Position - 0x25561
{
	uParam0->f_46 = 0;
	func_292(uParam0, 446.291f, 5566.377f, 786.75f);
	func_292(uParam0, 444.937f, 5566.383f, 786.551f);
	func_292(uParam0, 417.371f, 5567.001f, 777.708f);
	func_292(uParam0, 412.661f, 5567.085f, 774.439f);
	func_292(uParam0, 241.31f, 5570.594f, 603.137f);
	func_292(uParam0, 236.821f, 5570.663f, 599.561f);
	func_292(uParam0, 11.35f, 5575.298f, 426.629f);
	func_292(uParam0, 6.575f, 5575.391f, 423.57f);
	func_292(uParam0, -268.965f, 5580.996f, 243.386f);
	func_292(uParam0, -273.993f, 5581.124f, 240.808f);
	func_292(uParam0, -575.898f, 5587.286f, 79.251f);
	func_292(uParam0, -581.321f, 5587.4f, 77.348f);
	func_292(uParam0, -739.646f, 5590.614f, 47.006f);
	func_292(uParam0, -740.97f, 5590.617f, 47.306f);
	func_291(uParam0);
}

void func_291(var uParam0)//Position - 0x2569A
{
	int iVar0;
	uParam0->f_48 = 0f;
	iVar0 = 0;
	while (iVar0 < (uParam0->f_46 - 2))
	{
		uParam0->f_48 = (uParam0->f_48 + MISC::GET_DISTANCE_BETWEEN_COORDS(*(uParam0[iVar0 /*3*/]), *(uParam0[iVar0 + 1 /*3*/]), true));
		iVar0++;
	}
}

void func_292(var uParam0, float fParam1, float fParam2, float fParam3)//Position - 0x256DE
{
	if (uParam0->f_46 >= *uParam0)
	{
		return;
	}
	(*uParam0)[uParam0->f_46 /*3*/] = fParam1;
	(uParam0[uParam0->f_46 /*3*/])->f_1 = fParam2;
	(uParam0[uParam0->f_46 /*3*/])->f_2 = fParam3;
	uParam0->f_46++;
}

void func_293(var uParam0)//Position - 0x2571F
{
	uParam0->f_46 = 0;
	func_292(uParam0, -740.911f, 5599.341f, 47.25f);
	func_292(uParam0, -739.557f, 5599.346f, 46.997f);
	func_292(uParam0, -581.009f, 5596.517f, 77.379f);
	func_292(uParam0, -575.717f, 5596.388f, 79.22f);
	func_292(uParam0, -273.805f, 5590.844f, 240.795f);
	func_292(uParam0, -268.707f, 5590.744f, 243.395f);
	func_292(uParam0, 6.896f, 5585.668f, 423.614f);
	func_292(uParam0, 11.774f, 5585.591f, 426.711f);
	func_292(uParam0, 236.82f, 5581.445f, 599.642f);
	func_292(uParam0, 241.365f, 5581.369f, 603.183f);
	func_292(uParam0, 412.855f, 5578.216f, 774.401f);
	func_292(uParam0, 417.541f, 5578.124f, 777.688f);
	func_292(uParam0, 444.93f, 5577.589f, 786.535f);
	func_292(uParam0, 446.288f, 5577.59f, 786.75f);
	func_291(uParam0);
}

void func_294()//Position - 0x25858
{
	__LIB_28__.func_794(&uLocal_82);
	__LIB_10__.func_705(&uLocal_82, 0, iLocal_65);
	__LIB_10__.func_705(&uLocal_82, 1, iLocal_66);
	__LIB_10__.func_705(&uLocal_82, 2, iLocal_67);
	__LIB_10__.func_706(&uLocal_82, 3, 4, "CABLE_CAR" /* GXT: Cable Car */, "CABLE_CAR_SOUNDS");
	__LIB_10__.func_706(&uLocal_82, 4, 2, "P_CableCar_S", 0);
	while (!__LIB_20__.func_327(&uLocal_82))
	{
		SYSTEM::WAIT(0);
	}
}

void func_302(bool bParam0)//Position - 0x25E2D
{
	struct<3> Var0;
	if (func_4())
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (iLocal_228 == 1)
	{
		iLocal_228 = 0;
		STREAMING::END_SRL();
	}
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_COUNTRYSIDE_CHILEAD_CABLE_CAR_LINE", false, true);
	__LIB_26__.func_354(1, 1, 1, 1);
	Global_31965 = 0;
	__LIB_10__.func_835(&uLocal_225, 0);
	__LIB_9__.func_52(&Local_69, 0, 1);
	__LIB_0__.func_524(PLAYER::PLAYER_PED_ID());
	if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
	{
		if (func_4())
		{
			func_39(PLAYER::PLAYER_PED_ID(), &Local_200);
			func_39(PLAYER::PLAYER_PED_ID(), &Local_201);
			if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_54, 1) < 200f)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_54, true, false, false, true);
			}
			else if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_55, 1) < 200f)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_55, true, false, false, true);
			}
			else
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(5f, 0f, 0f) };
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
				Var0.f_2 = -200f;
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
			}
		}
		bParam0 = true;
	}
	if (bParam0)
	{
		func_304(&Local_200);
		func_304(&Local_201);
	}
	else
	{
		func_35(&Local_200, 0);
		func_35(&Local_201, 0);
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	}
	__LIB_20__.func_328(&uLocal_82);
	while (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		SYSTEM::WAIT(0);
	}
	if (STREAMING::STREAMVOL_IS_VALID(iLocal_52))
	{
		STREAMING::STREAMVOL_DELETE(iLocal_52);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_304(var uParam0)//Position - 0x25FB9
{
	func_38(uParam0);
	__LIB_0__.func_123(&(uParam0->f_3[0]));
	__LIB_0__.func_123(&(uParam0->f_3[1]));
	__LIB_0__.func_123(&(uParam0->f_6[0]));
	__LIB_0__.func_123(&(uParam0->f_6[1]));
	__LIB_0__.func_123(&(uParam0->f_2));
}

