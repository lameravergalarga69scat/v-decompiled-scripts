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
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	float fLocal_42 = 0f;
	struct<3> Local_43 = { 0, 0, 0 } ;
	bool bLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	struct<3> Local_46 = { 0, 0, 0 } ;
	struct<3> Local_47 = { 0, 0, 0 } ;
	struct<3> Local_48 = { 0, 0, 0 } ;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
	float fLocal_51 = 0f;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	struct<345> Local_62 = { 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1075838976, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 1065353216, 2, 0, 0, 2, 0, 0, 0, 0, 0, -1, -1, -1, 0, 1, 0, 2, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 1050253722, 2, 0, 0, 2, 0, 0, 7, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1027211264, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1027211264, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1027211264, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1027211264, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1027211264, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1027211264, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1027211264, 0, 0, 1069547520, 0, 1061997773, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 1;
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
	var uLocal_81 = 16;
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
	float fLocal_199 = 0f;
	bool bLocal_200 = 0;
	int iLocal_201 = 0;
	bool bLocal_202 = 0;
	int iLocal_203 = 0;
	struct<24> Local_204[2];
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
	var uLocal_217 = -1;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	int iLocal_222 = 0;
	float fLocal_223 = 0f;
	struct<3> Local_224 = { 0, 0, 0 } ;
	float fLocal_225 = 0f;
	float fLocal_226 = 0f;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_40 = 125;
	iLocal_41 = 128;
	fLocal_42 = 0.625f;
	Local_43 = { 0f, 0f, (0.55f * 1.1f) };
	Local_45 = { 0f, 0f, -1.125f };
	Local_46 = { 0f, 0f, 0f };
	Local_47 = { 0f, 90f, 0f };
	Local_48 = { 90f, 90f, 0f };
	Local_49 = { 0f, 0f, 0f };
	Local_50 = { 0f, 0.1f, -0.76f };
	fLocal_51 = 1f;
	iLocal_57 = -1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	fLocal_60 = 1f;
	fLocal_61 = 3f;
	iLocal_222 = -1;
	fLocal_223 = 0.75f;
	Local_224 = { 0.1f, 0f, -1f };
	fLocal_225 = 2.1f;
	fLocal_226 = 3f;
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("carwash2")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_393(0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_334();
	}
	else
	{
		func_1();
	}
}

void func_1()//Position - 0x13E
{
	int iVar0;
	__LIB_0__.func_524(PLAYER::PLAYER_PED_ID());
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iLocal_222 = -1;
	if (!func_327())
	{
		func_393(0);
	}
	MISC::SET_MISSION_FLAG(true);
	func_211(0f, 0f, 0f, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1);
	FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 60f);
	func_179();
	HUD::CLEAR_HELP(true);
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	Local_62.f_336 = 1.75f;
	func_173(iVar0, &Local_62, 0);
	fLocal_199 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iVar0);
	bLocal_202 = VEHICLE::DOES_VEHICLE_HAVE_ROOF(iVar0);
	while (true)
	{
		if ((!__LIB_0__.func_524(iVar0) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			__LIB_11__.func_208(iVar0);
			__LIB_42__.func_414(2);
			func_393(0);
		}
		func_111();
		func_88(&Local_62);
		func_85(&Local_62, iVar0, fLocal_199);
		if (func_16(&Local_62, iVar0))
		{
			__LIB_26__.func_354(1, 1, 1, 1);
			__LIB_11__.func_208(iVar0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_393(1);
			}
			else
			{
				__LIB_42__.func_414(2);
				func_393(0);
			}
		}
		if (Local_62.f_344 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/))
			{
				__LIB_10__.func_696(500, 0);
				Local_62.f_344 = 1;
				__LIB_11__.func_208(iVar0);
			}
		}
		else if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_393(1);
		}
		SYSTEM::WAIT(0);
	}
}

int func_16(var uParam0, int iParam1)//Position - 0x671
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar1 = __LIB_11__.func_205(uParam0, iParam1);
	iVar2 = 0;
	iVar3 = 0;
	if (!__LIB_0__.func_524(iParam1))
	{
		func_71(uParam0, iParam1);
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			__LIB_11__.func_202(uParam0);
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_11__.func_202(uParam0);
	}
	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, false);
	if (__LIB_11__.func_201(iVar0))
	{
		iLocal_55 = (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 0);
		if (iLocal_55)
		{
			iLocal_57 = TASK::GET_SEQUENCE_PROGRESS(iVar0);
			iLocal_56 = (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 && iLocal_57 == (uParam0->f_350 - 1));
		}
		if (iLocal_53)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
			}
			iLocal_53 = 0;
		}
		if (iLocal_54)
		{
			__LIB_20__.func_457(iParam1, uParam0);
			iLocal_54 = 0;
		}
	}
	if (Global_78319)
	{
		if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 21))
		{
			iVar2 = 1;
		}
		if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 25))
		{
			iVar2 = 1;
		}
		if (!__LIB_11__.func_201(iVar0))
		{
			iVar2 = 1;
		}
		if (PED::IS_PED_IN_VEHICLE(iVar0, iParam1, false))
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(iVar0, iParam1))
			{
				iVar2 = 1;
			}
		}
		if (!__LIB_26__.func_376(PLAYER::PLAYER_PED_ID()))
		{
			iVar2 = 1;
		}
		if (__LIB_26__.func_505(iParam1, 3))
		{
			iVar2 = 1;
		}
		if (!__LIB_11__.func_200())
		{
			iVar2 = 1;
		}
		if (PED::IS_PED_BEING_JACKED(iVar0))
		{
			iVar2 = 1;
		}
		if (__LIB_11__.func_199(iParam1))
		{
			iVar2 = 1;
		}
		if (func_58(uParam0))
		{
			func_71(uParam0, iParam1);
			return 1;
		}
		if (iVar2 == 1)
		{
			func_71(uParam0, iParam1);
			return 1;
		}
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
		{
			NETWORK::NETWORK_USE_LOGARITHMIC_BLENDING_THIS_FRAME(iParam1);
		}
	}
	else if (func_58(uParam0) && uParam0->f_344 == 0)
	{
		__LIB_10__.func_696(500, 1);
		__LIB_11__.func_197(iParam1, 100f, 0f);
		uParam0->f_344 = 1;
		return 1;
	}
	if (iVar0 == PLAYER::PLAYER_PED_ID())
	{
		if (!iLocal_55 && (iLocal_57 > -1 && iLocal_57 < uParam0->f_350))
		{
			__LIB_20__.func_457(iParam1, uParam0);
		}
		if (iLocal_56)
		{
		}
	}
	if (func_52(uParam0, iParam1))
	{
		func_71(uParam0, iParam1);
		return 1;
	}
	if (uParam0->f_339 != 99)
	{
		__LIB_8__.func_611(0);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		if (uParam0->f_339 > 0)
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (__LIB_11__.func_193(uParam0->f_334) != 1)
			{
				__LIB_18__.func_191(uParam0->f_334, 1, 0, 1, 0);
			}
		}
	}
	switch (uParam0->f_339)
	{
		case 0:
			__LIB_20__.func_456(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_78319);
			PATHFIND::SET_PED_PATHS_IN_AREA(uParam0->f_352, uParam0->f_355, false, 0);
			if (__LIB_11__.func_193(uParam0->f_334) != 1)
			{
				__LIB_18__.func_191(uParam0->f_334, 1, 0, 1, 0);
			}
			__LIB_20__.func_455(&(uParam0->f_172[0 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 19, 19);
			__LIB_11__.func_202(uParam0);
			if (!Global_78319)
			{
				MISC::CLEAR_AREA_OF_PEDS(__LIB_0__.func_85(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
			}
			uParam0->f_339++;
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_WASH_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("CAR_WASH_SCENE");
			}
			if (!Global_78319)
			{
				ENTITY::SET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), uParam0->f_21, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), uParam0->f_24);
				if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam1, false))
				{
					VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam1, true);
				}
				__LIB_11__.func_192(iParam1, 2);
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
			{
				__LIB_11__.func_192(iParam1, 10);
				if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam1, false))
				{
					VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam1, false);
				}
			}
			break;
		case 1:
			if (__LIB_11__.func_191(&(uParam0->f_172[0 /*23*/]), fVar1))
			{
				__LIB_20__.func_456(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_78319);
				__LIB_20__.func_455(&(uParam0->f_172[1 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
				__LIB_11__.func_190(iParam1);
				__LIB_11__.func_202(uParam0);
				uParam0->f_339++;
			}
			break;
		case 2:
			if (__LIB_11__.func_191(&(uParam0->f_172[1 /*23*/]), fVar1))
			{
				__LIB_20__.func_456(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_78319);
				if (uParam0->f_172[2 /*23*/])
				{
					__LIB_20__.func_455(&(uParam0->f_172[2 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					uParam0->f_339++;
				}
				else
				{
					__LIB_20__.func_455(&(uParam0->f_172[6 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					__LIB_11__.func_197(iParam1, 50f, 0f);
					uParam0->f_339 = 98;
				}
				__LIB_11__.func_190(iParam1);
				__LIB_11__.func_202(uParam0);
			}
			break;
		case 3:
			if (__LIB_11__.func_191(&(uParam0->f_172[2 /*23*/]), fVar1))
			{
				__LIB_20__.func_456(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_78319);
				if (uParam0->f_172[3 /*23*/])
				{
					__LIB_20__.func_455(&(uParam0->f_172[3 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					uParam0->f_339++;
				}
				else
				{
					__LIB_20__.func_455(&(uParam0->f_172[6 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					__LIB_11__.func_197(iParam1, 50f, 0f);
					uParam0->f_339 = 98;
				}
				__LIB_11__.func_190(iParam1);
				__LIB_11__.func_202(uParam0);
			}
			break;
		case 4:
			if (__LIB_11__.func_191(&(uParam0->f_172[3 /*23*/]), fVar1))
			{
				__LIB_20__.func_456(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_78319);
				if (uParam0->f_172[4 /*23*/])
				{
					__LIB_20__.func_455(&(uParam0->f_172[4 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					uParam0->f_339++;
				}
				else
				{
					__LIB_20__.func_455(&(uParam0->f_172[6 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					__LIB_11__.func_197(iParam1, 50f, 0f);
					uParam0->f_339 = 98;
				}
				__LIB_11__.func_190(iParam1);
				__LIB_11__.func_202(uParam0);
			}
			break;
		case 5:
			if (__LIB_11__.func_191(&(uParam0->f_172[4 /*23*/]), fVar1))
			{
				__LIB_20__.func_456(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_78319);
				if (uParam0->f_172[5 /*23*/])
				{
					__LIB_20__.func_455(&(uParam0->f_172[5 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					uParam0->f_339++;
				}
				else
				{
					__LIB_20__.func_455(&(uParam0->f_172[6 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					__LIB_11__.func_197(iParam1, 50f, 0f);
					uParam0->f_339 = 98;
				}
				__LIB_11__.func_190(iParam1);
				__LIB_11__.func_202(uParam0);
			}
			break;
		case 6:
			if (__LIB_11__.func_191(&(uParam0->f_172[5 /*23*/]), fVar1) && fVar1 >= uParam0->f_338)
			{
				__LIB_20__.func_456(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_78319);
				if (!MISC::IS_POSITION_OCCUPIED(uParam0->f_172[6 /*23*/].f_1[0 /*3*/], 2f, false, true, false, false, false, iParam1, false))
				{
					__LIB_20__.func_455(&(uParam0->f_172[6 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 3, 1);
				}
				__LIB_11__.func_197(iParam1, 100f, 0f);
				if (!Global_78319)
				{
				}
				uParam0->f_339 = 98;
				__LIB_11__.func_190(iParam1);
				__LIB_11__.func_202(uParam0);
			}
			break;
		case 98:
			if (MISC::IS_POSITION_OCCUPIED(uParam0->f_172[6 /*23*/].f_1[0 /*3*/], 2f, false, true, false, false, false, iParam1, false))
			{
				iVar3 = 1;
			}
			if (__LIB_11__.func_191(&(uParam0->f_172[6 /*23*/]), fVar1) || iVar3)
			{
				__LIB_20__.func_456(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_78319);
				func_26(uParam0->f_340, 0);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_WASH_SCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("CAR_WASH_SCENE");
				}
				if (__LIB_26__.func_376(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				}
				__LIB_20__.func_454(PLAYER::PLAYER_PED_ID());
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				uParam0->f_339 = 99;
				uParam0->f_348 = 0;
				uParam0->f_349 = 0;
				iLocal_56 = 0;
				iLocal_55 = 0;
				iLocal_57 = -1;
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
				__LIB_11__.func_197(iParam1, 100f, 0f);
				__LIB_11__.func_208(iParam1);
				if (!Global_78319)
				{
				}
				__LIB_11__.func_192(iParam1, 1);
				PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(uParam0->f_352, uParam0->f_355, 0);
				__LIB_24__.func_943(302, 0, 0);
				return 1;
			}
			else
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			}
			break;
		case 99:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_WASH_SCENE"))
			{
				AUDIO::STOP_AUDIO_SCENE("CAR_WASH_SCENE");
			}
			func_26(uParam0->f_340, 0);
			uParam0->f_348 = 0;
			uParam0->f_349 = 0;
			uParam0->f_341 = 0;
			iLocal_56 = 0;
			iLocal_55 = 0;
			iLocal_57 = -1;
			break;
	}
	return 0;
}

void func_26(int iParam0, bool bParam1)//Position - 0x1551
{
	int iVar0;
	if (CAM::DOES_CAM_EXIST(iParam0))
	{
		__LIB_11__.func_189(&iParam0, 0);
		__LIB_11__.func_93(bParam1);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_0__.func_524(iVar0))
			{
				if (!__LIB_0__.func_657(iVar0, 1))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
					{
						__LIB_11__.func_192(iVar0, 1);
					}
				}
			}
		}
	}
}

int func_52(var uParam0, int iParam1)//Position - 0x5E0E
{
	var uVar0;
	struct<3> Var1;
	struct<2> Var2;
	struct<2> Var3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	if (MISC::GET_GAME_TIMER() < uParam0->f_346)
	{
		return 0;
	}
	if (uParam0->f_348 == 0)
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam1), &Var2, &Var3);
		if (uParam0->f_359 == 0)
		{
			Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, (Var3.f_1 + 0.325f), 0f) };
		}
		else
		{
			Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, (Var2.f_1 - 0.325f), 0f) };
		}
		if (Global_78319)
		{
			uParam0->f_348 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1 - Vector(0.1f, 0f, 0f), Var1 + Vector(0.1f, 0f, 0f), 0.75f, 18, iParam1, 4);
		}
		else
		{
			uParam0->f_348 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1 - Vector(0.1f, 0f, 0f), Var1 + Vector(0.1f, 0f, 0f), 0.75f, 2, iParam1, 4);
		}
		return 0;
	}
	else
	{
		iVar6 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_348, &uVar0, &uVar4, &uVar5, &iVar7);
		if (iVar6 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (func_53(iVar7))
				{
					uParam0->f_349++;
					return 1;
				}
				else
				{
					uParam0->f_349 = 0;
				}
			}
		}
		uParam0->f_346 = MISC::GET_GAME_TIMER() + 500;
		uParam0->f_348 = 0;
	}
	return 0;
}

int func_53(int iParam0)//Position - 0x5F32
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			return 0;
		}
		if (__LIB_11__.func_196(iParam0))
		{
			return 0;
		}
		if (__LIB_11__.func_195(iParam0))
		{
			return 1;
		}
		if (__LIB_11__.func_194(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_58(var uParam0)//Position - 0x60C3
{
	int iVar0;
	iVar0 = __LIB_0__.func_138(uParam0->f_351 == 1, 20000, 15000);
	if (Global_78319)
	{
		return (__LIB_11__.func_198(uParam0) > iVar0 && uParam0->f_341);
	}
	return MISC::GET_GAME_TIMER() > (uParam0->f_361 + iVar0);
}

void func_71(var uParam0, int iParam1)//Position - 0x64D1
{
	int iVar0;
	uParam0->f_339 = 99;
	func_83(uParam0, 0);
	__LIB_11__.func_204(uParam0);
	__LIB_26__.func_377(uParam0);
	func_26(uParam0->f_340, 1);
	func_80(PLAYER::PLAYER_PED_ID(), 0);
	__LIB_40__.func_970(&(uParam0->f_51));
	__LIB_40__.func_970(&(uParam0->f_30));
	__LIB_40__.func_970(&(uParam0->f_72));
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (Global_78319)
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(PLAYER::PLAYER_PED_ID());
		if (iVar0 != __LIB_0__.func_160())
		{
			if (Global_2689235[iVar0 /*453*/].f_242 == 1)
			{
				Global_2689235[iVar0 /*453*/].f_242 = 0;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		__LIB_11__.func_192(iParam1, 1);
		__LIB_11__.func_208(iParam1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, false);
			}
		}
	}
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(uParam0->f_352, uParam0->f_355, 0);
	uParam0->f_348 = 0;
	uParam0->f_349 = 0;
	uParam0->f_358 = 1;
	uParam0->f_341 = 0;
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_WASH_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_WASH_SCENE");
	}
}

void func_80(int iParam0, int iParam1)//Position - 0x66E0
{
	int iVar0;
	iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	if (iVar0 == __LIB_0__.func_160())
	{
		return;
	}
	if (!__LIB_11__.func_201(iParam0))
	{
		Global_2689235[iVar0 /*453*/].f_242 = 0;
		return;
	}
	Global_2689235[iVar0 /*453*/].f_242 = iParam1;
}

void func_83(var uParam0, int iParam1)//Position - 0x67E6
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_93.f_19))
	{
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_93.f_19, true, false);
	}
	__LIB_11__.func_208(iParam1);
}

float func_85(var uParam0, int iParam1, float fParam2)//Position - 0x6841
{
	struct<3> Var0;
	float fVar1;
	fVar1 = MISC::GET_RATIO_OF_CLOSEST_POINT_ON_LINE(ENTITY::GET_ENTITY_COORDS(iParam1, true), *(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), false);
	if (fVar1 <= 1f)
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, false))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
		}
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			func_111();
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
		{
			Var0 = { MISC::GET_CLOSEST_POINT_ON_LINE(ENTITY::GET_ENTITY_COORDS(iParam1, true), *(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), false) };
			if (__LIB_0__.func_529(iParam1, Var0, 1) < 4f)
			{
				if (fVar1 > 0f)
				{
					__LIB_11__.func_197(iParam1, 0.005f, (fParam2 * (1f - fVar1)));
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() == 0)
	{
		__LIB_11__.func_206(uParam0, iParam1);
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		if ((fVar1 > 0.85f && !uParam0->f_343) && uParam0->f_337 > 0f)
		{
			TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam1, uParam0->f_337);
			uParam0->f_343 = 1;
		}
	}
	return fVar1;
}

void func_88(var uParam0)//Position - 0x6A04
{
	bool bVar0;
	bVar0 = true;
	if (Global_78319)
	{
		bVar0 = __LIB_11__.func_200();
		if (bVar0)
		{
			uParam0->f_347 = MISC::GET_GAME_TIMER();
		}
		if (bVar0 == 0 && uParam0->f_360 == 1)
		{
			uParam0->f_120.f_16 = 0f;
			uParam0->f_341 = 0;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iLocal_58)
	{
		func_109(&(uParam0->f_120), bVar0, uParam0->f_358);
	}
	else
	{
		func_104(&(uParam0->f_120), bVar0, uParam0->f_358);
	}
	if (Global_78319)
	{
		uParam0->f_360 = bVar0;
		if (MISC::GET_GAME_TIMER() > uParam0->f_347 + 1500)
		{
			uParam0->f_348 = 0;
			uParam0->f_349 = 0;
			return;
		}
	}
	func_99(&(uParam0->f_93), bVar0);
	func_89(&(uParam0->f_51), bVar0);
	func_89(&(uParam0->f_30), bVar0);
	func_89(&(uParam0->f_72), bVar0);
}

void func_89(var uParam0, bool bParam1)//Position - 0x6ACD
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	var uVar4;
	int iVar5;
	int iVar6;
	if (!__LIB_0__.func_524(uParam0->f_3) || *uParam0 == 0)
	{
		return;
	}
	if (__LIB_11__.func_203(uParam0->f_2))
	{
		if (bParam1 == 0)
		{
			uParam0->f_2 = 5;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !__LIB_11__.func_200())
		{
			uParam0->f_2 = 5;
		}
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (MISC::GET_GAME_TIMER() > uParam0->f_20 && bParam1 == 1)
			{
				if (uParam0->f_1 == 0)
				{
					if (uParam0->f_19 == 0)
					{
						if (MISC::GET_GAME_TIMER() > uParam0->f_20)
						{
							Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, (-uParam0->f_8 * 0.8f), 0f, (-uParam0->f_9 * 0.75f)) };
							Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, (uParam0->f_8 * 0.8f), 0f, (-uParam0->f_9 * 0.75f)) };
							uParam0->f_19 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var1, Var2, 2, uParam0->f_3, 4);
							FIRE::STOP_FIRE_IN_RANGE(uParam0->f_10, uParam0->f_7);
						}
					}
					else
					{
						iVar5 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_19, &uVar0, &Var3, &uVar4, &iVar6);
						if (iVar5 == 2)
						{
							if (__LIB_32__.func_673(iVar6, 1))
							{
								uParam0->f_2 = 1;
							}
							uParam0->f_20 = (MISC::GET_GAME_TIMER() + iLocal_41);
						}
						uParam0->f_19 = 0;
					}
				}
				else
				{
					uParam0->f_20 = (MISC::GET_GAME_TIMER() + iLocal_41);
					if (__LIB_20__.func_459(uParam0->f_10, uParam0->f_7, 1))
					{
						uParam0->f_2 = 1;
						uParam0->f_19 = 0;
					}
				}
			}
			break;
		case 1:
			uParam0->f_2 = 3;
			__LIB_26__.func_378(uParam0, 0);
			FIRE::STOP_FIRE_IN_RANGE(uParam0->f_10, (uParam0->f_7 * 1.2f));
			uParam0->f_5 = AUDIO::GET_SOUND_ID();
			if (uParam0->f_1 == 0)
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_5, "SPRAY", uParam0->f_3, "CARWASH_SOUNDS", false, 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_5, "DRYER", uParam0->f_3, "CARWASH_SOUNDS", false, 0);
			}
			break;
		case 3:
			if (bParam1 == 0)
			{
				uParam0->f_2 = 5;
				return;
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !__LIB_11__.func_200())
			{
				uParam0->f_2 = 5;
				return;
			}
			if (uParam0->f_1 == 0)
			{
				FIRE::STOP_FIRE_IN_RANGE(uParam0->f_10, (uParam0->f_7 * 1.2f));
				if (uParam0->f_19 == 0)
				{
					if (MISC::GET_GAME_TIMER() > uParam0->f_20)
					{
						Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, (-uParam0->f_8 * 0.8f), 0f, (-uParam0->f_9 * 0.75f)) };
						Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, (uParam0->f_8 * 0.8f), 0f, (-uParam0->f_9 * 0.75f)) };
						uParam0->f_19 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var1, Var2, 2, uParam0->f_3, 4);
					}
				}
				else
				{
					iVar5 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_19, &uVar0, &Var3, &uVar4, &iVar6);
					if (iVar5 == 2)
					{
						if (!__LIB_32__.func_673(iVar6, 1))
						{
							uParam0->f_2 = 5;
						}
						else
						{
							if (uParam0->f_6 == -1)
							{
								uParam0->f_6 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_6, "SPRAY_CAR", uParam0->f_3, "CARWASH_SOUNDS", false, 0);
							}
							if (__LIB_2__.func_15(PLAYER::PLAYER_PED_ID(), ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar6), 0))
							{
								__LIB_32__.func_672(iLocal_41, 64);
							}
						}
						uParam0->f_20 = (MISC::GET_GAME_TIMER() + iLocal_41);
					}
					uParam0->f_19 = 0;
				}
				if ((PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID())) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !VEHICLE::ARE_ALL_VEHICLE_WINDOWS_INTACT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
				{
					Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
					if ((MISC::ABSF(Var3.f_0) < uParam0->f_8 && MISC::ABSF(Var3.f_1) < 1.2f) && Var3.f_2 < (-uParam0->f_9 * 0.25f))
					{
						PED::SET_PED_WETNESS_HEIGHT(PLAYER::PLAYER_PED_ID(), 3f);
					}
				}
			}
			else if (MISC::GET_GAME_TIMER() > uParam0->f_4)
			{
				__LIB_32__.func_672(iLocal_40, 16);
				if (!__LIB_20__.func_459(uParam0->f_10, (uParam0->f_7 * 1.25f), 1))
				{
					uParam0->f_2 = 5;
				}
				uParam0->f_4 = (MISC::GET_GAME_TIMER() + iLocal_40);
			}
			break;
		case 5:
			__LIB_20__.func_458(uParam0);
			__LIB_6__.func_352(&(uParam0->f_6));
			__LIB_6__.func_352(&(uParam0->f_5));
			uParam0->f_2 = 0;
			break;
	}
}

void func_99(var uParam0, bool bParam1)//Position - 0x720C
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	Var5 = { uParam0->f_2 };
	fVar6 = (360f * SYSTEM::TIMESTEP());
	Var5.f_2 = uParam0->f_22;
	if (__LIB_11__.func_203(*uParam0))
	{
		if (bParam1 == 0)
		{
			*uParam0 = 5;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !__LIB_11__.func_200())
		{
			*uParam0 = 5;
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (Global_78319)
			{
				if (!__LIB_11__.func_200())
				{
					return;
				}
			}
			if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(uParam0->f_2, 4f))
			{
				if (uParam0->f_20 == 0)
				{
					if (MISC::GET_GAME_TIMER() > uParam0->f_26)
					{
						uParam0->f_20 = SHAPETEST::START_SHAPE_TEST_CAPSULE(uParam0->f_2, uParam0->f_2 - Vector(6f, 0f, 0f), (uParam0->f_15 * 1.2f), 2, uParam0->f_19, 4);
					}
				}
				else
				{
					iVar3 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_20, &uVar0, &uVar1, &uVar2, &iVar4);
					if (iVar3 == 2)
					{
						if (__LIB_32__.func_673(iVar4, 1))
						{
							*uParam0 = 1;
							__LIB_6__.func_352(&(uParam0->f_16));
							uParam0->f_16 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_16, "BRUSHES_SPINNING", uParam0->f_19, "CARWASH_SOUNDS", false, 0);
						}
					}
					uParam0->f_20 = 0;
					uParam0->f_26 = (MISC::GET_GAME_TIMER() + iLocal_41);
				}
			}
			break;
		case 1:
			if (bParam1 == 0)
			{
				*uParam0 = 5;
			}
			else
			{
				uParam0->f_13 = (uParam0->f_13 + fVar6);
				if (uParam0->f_13 >= 360f)
				{
					uParam0->f_13 = 360f;
					*uParam0 = 3;
					__LIB_20__.func_461(uParam0);
					__LIB_6__.func_352(&(uParam0->f_17));
					uParam0->f_17 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_17, "BRUSHES_MOVE", uParam0->f_19, "CARWASH_SOUNDS", false, 0);
				}
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !__LIB_11__.func_200())
			{
				*uParam0 = 5;
			}
			break;
		case 3:
			if (bParam1 == 0)
			{
				*uParam0 = 5;
			}
			else if (MISC::GET_GAME_TIMER() > uParam0->f_25)
			{
				if (!__LIB_20__.func_459(Var5, uParam0->f_15, 1))
				{
					__LIB_11__.func_184(&(uParam0->f_21));
					*uParam0 = 5;
				}
				uParam0->f_25 = (MISC::GET_GAME_TIMER() + iLocal_40);
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !__LIB_11__.func_200())
			{
				*uParam0 = 5;
			}
			break;
		case 5:
			uParam0->f_20 = 0;
			__LIB_11__.func_184(&(uParam0->f_21));
			__LIB_6__.func_352(&(uParam0->f_18));
			uParam0->f_13 = (uParam0->f_13 - fVar6);
			if (uParam0->f_13 <= 0f)
			{
				uParam0->f_13 = 0f;
				*uParam0 = 0;
				__LIB_6__.func_352(&(uParam0->f_17));
				__LIB_6__.func_352(&(uParam0->f_16));
			}
			break;
	}
	uParam0->f_12 = (uParam0->f_12 + (uParam0->f_13 * SYSTEM::TIMESTEP()));
	if (uParam0->f_12 > 360f)
	{
		uParam0->f_12 = (uParam0->f_12 - 360f);
	}
	__LIB_35__.func_988(uParam0);
	ENTITY::SET_ENTITY_HEADING(uParam0->f_19, uParam0->f_11);
	ENTITY::SET_ENTITY_ROTATION(uParam0->f_19, ENTITY::GET_ENTITY_ROTATION(uParam0->f_19, 2) + Vector(0f, 0f, uParam0->f_12), 2, true);
}

void func_104(var uParam0, bool bParam1, bool bParam2)//Position - 0x7855
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	float fVar12;
	struct<2> Var13;
	struct<2> Var14;
	int iVar15;
	int iVar16;
	float fVar17;
	float fVar18;
	fVar1 = (360f * SYSTEM::TIMESTEP());
	iVar16 = -1;
	if (!*uParam0 == 1)
	{
		return;
	}
	func_108(uParam0);
	if (__LIB_11__.func_203(uParam0->f_2))
	{
		if (bParam1 == 0)
		{
			uParam0->f_2 = 5;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !__LIB_11__.func_200())
		{
			bParam1 = false;
			uParam0->f_2 = 5;
		}
		if (bParam1 == 0)
		{
			uParam0->f_16 = (uParam0->f_16 - (fVar1 * 2f));
			if (uParam0->f_16 <= 0f)
			{
				uParam0->f_16 = 0f;
				__LIB_6__.func_352(&(uParam0->f_28));
			}
		}
	}
	else
	{
		uParam0->f_16 = (uParam0->f_16 - (fVar1 * 2f));
		if (uParam0->f_16 <= 0f)
		{
			uParam0->f_16 = 0f;
			__LIB_6__.func_352(&(uParam0->f_28));
		}
	}
	fVar17 = -1.5f;
	fVar18 = -0.55f;
	if (!bParam2 && uParam0->f_2 != 5)
	{
		if (MISC::GET_GAME_TIMER() > uParam0->f_44)
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, uParam0->f_18[0], 0f) };
			uParam0->f_33[0] = __LIB_20__.func_459(Var0, uParam0->f_21[0], 1);
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, uParam0->f_18[1], 0f) };
			uParam0->f_33[1] = __LIB_20__.func_459(Var0, uParam0->f_21[1], 1);
			uParam0->f_44 = (MISC::GET_GAME_TIMER() + iLocal_41);
		}
		if (bLocal_44 == 1)
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, uParam0->f_18[0], 0f) };
			if (uParam0->f_33[0])
			{
				__LIB_11__.func_185(Var0, uParam0->f_21[0], 0, 255, 0, 255, 32);
			}
			else
			{
				__LIB_11__.func_185(Var0, uParam0->f_21[0], 255, 0, 0, 255, 32);
			}
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, uParam0->f_18[1], 0f) };
			if (uParam0->f_33[1])
			{
				__LIB_11__.func_185(Var0, uParam0->f_21[1], 0, 255, 0, 255, 32);
			}
			else
			{
				__LIB_11__.func_185(Var0, uParam0->f_21[1], 0, 0, 255, 255, 32);
			}
			GRAPHICS::DRAW_DEBUG_LINE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, -2.5f, fVar17, 0.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 2.5f, fVar17, 0.5f), 0, 0, 255, 255);
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, 0f, 0.5f) };
			GRAPHICS::DRAW_DEBUG_LINE(Var0, Var0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_1), 0, 0, 255, 255);
		}
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (!bParam2)
			{
				if (bParam1 == 1 && uParam0->f_33[0])
				{
					__LIB_6__.func_352(&(uParam0->f_27));
					uParam0->f_27 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_27, "BRUSHES_SPINNING", uParam0->f_1, "CARWASH_SOUNDS", false, 0);
					uParam0->f_12[0] = -0.55f;
					uParam0->f_12[1] = 0.55f;
					uParam0->f_31 = 0;
					uParam0->f_2 = 1;
					uParam0->f_46[0] = 0;
					uParam0->f_46[1] = 0;
					uParam0->f_49[0] = 0;
					uParam0->f_49[1] = 0;
				}
			}
			break;
		case 1:
			uParam0->f_16 = (uParam0->f_16 + fVar1);
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, uParam0->f_18[0], 0f) };
			iVar15 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Var0, 2f, 0, 2064);
			if (__LIB_32__.func_673(iVar15, 1))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar15, uParam0->f_3[0], true);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar15, uParam0->f_3[1], true);
			}
			if (uParam0->f_16 >= 360f)
			{
				uParam0->f_16 = 360f;
				__LIB_20__.func_462(uParam0);
				uParam0->f_28 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_28, "BRUSHES_MOVE", uParam0->f_1, "CARWASH_SOUNDS", false, 0);
				uParam0->f_2 = 2;
			}
			break;
		case 2:
			if (uParam0->f_36 == 0)
			{
				if (bLocal_52)
				{
					Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, -1f, 0f) };
					uParam0->f_36 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var0, Var0 + Vector(1f, 0f, 0f), 2.5f, 2, 0, 4);
				}
				else
				{
					Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, -3f, fVar17, 0.5f) };
					uParam0->f_36 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, fVar17, 0.5f), 2, 0, 7);
				}
				if (uParam0->f_36 == 0)
				{
				}
			}
			else
			{
				iVar5 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_36, &iVar9, &Var6, &uVar7, &iVar4);
				if (iVar5 == 2)
				{
					if (__LIB_32__.func_673(iVar4, 1))
					{
						uParam0->f_37 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar4);
						if (__LIB_0__.func_121(uParam0->f_37))
						{
						}
						MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0->f_37), &Var13, &Var14);
						fVar11 = MISC::ABSF((Var14.f_0 - Var13.f_0));
						if (bLocal_52)
						{
							uParam0->f_12[0] = -((0.55f * 0.75f) + (fVar11 / 2f));
							uParam0->f_12[1] = ((0.55f * 0.75f) + (fVar11 / 2f));
						}
						else
						{
							Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_1, Var6 + ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_1) * Vector(-fVar17, -fVar17, -fVar17)) };
							uParam0->f_17 = 1.5f;
						}
						if (iVar9 == 0)
						{
							uParam0->f_12[0] = -(0.55f + (fVar11 / 2f));
							uParam0->f_12[1] = (0.55f + (fVar11 / 2f));
						}
						uParam0->f_2 = 3;
						uParam0->f_17 = 1.5f;
						uParam0->f_46[0] = 0;
						uParam0->f_46[1] = 0;
						uParam0->f_49[0] = 0;
						uParam0->f_49[1] = 0;
						uParam0->f_41[0] = MISC::GET_GAME_TIMER() + 32;
						uParam0->f_41[1] = MISC::GET_GAME_TIMER() + 64;
					}
				}
				uParam0->f_36 = 0;
			}
			break;
		case 3:
			if (__LIB_0__.func_121(uParam0->f_37))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_37, uParam0->f_3[0], true);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_37, uParam0->f_3[1], true);
				MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0->f_37), &Var13, &Var14);
				fVar12 = (MISC::ABSF((Var14.f_1 - Var13.f_1)) / 2f);
				fVar11 = MISC::ABSF((Var14.f_0 - Var13.f_0));
				iVar10 = __LIB_20__.func_452(ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, fVar12, 0f), ENTITY::GET_ENTITY_COORDS(uParam0->f_37, true));
				if (iVar10 == 1)
				{
					uParam0->f_12[0] = -0.55f;
					uParam0->f_12[1] = 0.55f;
				}
				else if (bLocal_52)
				{
					uParam0->f_12[0] = -((0.55f * fLocal_42) + (fVar11 / 2f));
					uParam0->f_12[1] = ((0.55f * fLocal_42) + (fVar11 / 2f));
					uParam0->f_17 = 1f;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < uParam0->f_3)
					{
						Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, fVar18, 0.5f) };
						if (iVar8 == 0)
						{
							Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, -fLocal_61, fVar18, 0.5f) };
						}
						else
						{
							Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, fLocal_61, fVar18, 0.5f) };
						}
						iVar16 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_37, "seat_dside_f");
						if (iVar16 != -1)
						{
							Var0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_37, iVar16) };
							Var2.f_2 = Var0.f_2;
							Var3.f_2 = Var0.f_2;
						}
						if (bLocal_44)
						{
							GRAPHICS::DRAW_DEBUG_LINE(Var2, Var3, 0, 0, 255, 255);
						}
						if (uParam0->f_38[iVar8] == 0)
						{
							if (MISC::GET_GAME_TIMER() > uParam0->f_41[iVar8])
							{
								if (iLocal_59 == 1 || VEHICLE::GET_VEHICLE_MOD(uParam0->f_37, 0) != -1)
								{
									uParam0->f_38[iVar8] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Var3, Var2, fLocal_60, 2, 0, 4);
								}
								else
								{
									uParam0->f_38[iVar8] = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var3, Var2, 2, 0, 7);
								}
								if (uParam0->f_38[iVar8] == 0)
								{
								}
							}
						}
						else
						{
							iVar5 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_38[iVar8], &iVar9, &Var6, &uVar7, &iVar4);
							if (iVar5 == 2)
							{
								uParam0->f_49[iVar8] = uParam0->f_46[iVar8];
								uParam0->f_46[iVar8] = 0;
								if (iVar9 > 0)
								{
									if (bLocal_44)
									{
										GRAPHICS::DRAW_DEBUG_SPHERE(Var6, 0.06625f, 0, 0, 255, 255);
									}
									uParam0->f_46[iVar8] = 1;
								}
								if (__LIB_32__.func_673(iVar4, 1))
								{
									Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_1, Var6 + ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_1) * Vector(-fVar18, -fVar18, -fVar18)) };
									uParam0->f_46[iVar8] = 1;
									if (iVar8 == 0)
									{
										uParam0->f_12[iVar8] = (Var0.f_0 - 0.55f);
									}
									else
									{
										uParam0->f_12[iVar8] = (Var0.f_0 + 0.55f);
									}
								}
							}
							uParam0->f_38[iVar8] = 0;
							uParam0->f_41[iVar8] = MISC::GET_GAME_TIMER() + 120;
						}
						if (uParam0->f_49[iVar8] != uParam0->f_46[iVar8])
						{
							if (uParam0->f_49[iVar8] == 1 && uParam0->f_46[iVar8] == 0)
							{
							}
							if (uParam0->f_49[iVar8] == 0 && uParam0->f_46[iVar8] == 1)
							{
							}
						}
						iVar8++;
					}
				}
				iVar10 = __LIB_20__.func_452(ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, (fVar12 * 1.25f), 0f), ENTITY::GET_ENTITY_COORDS(uParam0->f_37, true));
				if (iVar10 == 1)
				{
					uParam0->f_16 = (uParam0->f_16 - (fVar1 * 2f));
					if (uParam0->f_16 < 0f)
					{
						uParam0->f_16 = 0f;
						__LIB_6__.func_352(&(uParam0->f_29));
						__LIB_6__.func_352(&(uParam0->f_27));
						__LIB_11__.func_184(&(uParam0->f_6[0]));
						__LIB_11__.func_184(&(uParam0->f_6[1]));
					}
				}
			}
			if (!(uParam0->f_33[0] || uParam0->f_33[1]))
			{
				__LIB_11__.func_184(&(uParam0->f_6[0]));
				__LIB_11__.func_184(&(uParam0->f_6[1]));
				uParam0->f_2 = 5;
			}
			break;
		case 4:
			if (__LIB_0__.func_121(uParam0->f_37))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_37, uParam0->f_3[0], true);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_37, uParam0->f_3[1], true);
				MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0->f_37), &Var13, &Var14);
				fVar12 = (MISC::ABSF((Var14.f_1 - Var13.f_1)) / 2f);
				fVar11 = MISC::ABSF((Var14.f_0 - Var13.f_0));
				iVar10 = __LIB_20__.func_452(ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, (fVar12 * 1.25f), 0f), ENTITY::GET_ENTITY_COORDS(uParam0->f_37, true));
				if (iVar10 == 1)
				{
					uParam0->f_16 = (uParam0->f_16 - (fVar1 * 2f));
					if (uParam0->f_16 < 0f)
					{
						uParam0->f_16 = 0f;
						__LIB_6__.func_352(&(uParam0->f_29));
						__LIB_6__.func_352(&(uParam0->f_27));
						__LIB_11__.func_184(&(uParam0->f_6[0]));
						__LIB_11__.func_184(&(uParam0->f_6[1]));
						uParam0->f_2 = 5;
					}
				}
			}
			if (!(uParam0->f_33[0] || uParam0->f_33[1]))
			{
				__LIB_11__.func_184(&(uParam0->f_6[0]));
				__LIB_11__.func_184(&(uParam0->f_6[1]));
				uParam0->f_2 = 5;
			}
			break;
		case 5:
			__LIB_6__.func_352(&(uParam0->f_29));
			__LIB_6__.func_352(&(uParam0->f_27));
			__LIB_11__.func_184(&(uParam0->f_6[0]));
			__LIB_11__.func_184(&(uParam0->f_6[1]));
			uParam0->f_16 = (uParam0->f_16 - fVar1);
			uParam0->f_12[0] = -1.75f;
			uParam0->f_12[1] = 1.75f;
			uParam0->f_17 = 1.5f;
			uParam0->f_46[0] = 0;
			uParam0->f_46[1] = 0;
			uParam0->f_49[0] = 0;
			uParam0->f_49[1] = 0;
			if (uParam0->f_16 <= 0f)
			{
				uParam0->f_16 = 0f;
				__LIB_6__.func_352(&(uParam0->f_28));
			}
			if (MISC::GET_GAME_TIMER() > uParam0->f_44)
			{
				if (!__LIB_20__.func_459(uParam0->f_24, 1f, 1))
				{
					uParam0->f_31 = 1;
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_3[0], uParam0->f_31, false);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_3[1], uParam0->f_31, false);
					uParam0->f_44 = 0;
					uParam0->f_2 = 0;
				}
				else
				{
					uParam0->f_44 = (MISC::GET_GAME_TIMER() + iLocal_41);
				}
			}
			break;
	}
}

void func_108(var uParam0)//Position - 0x83CD
{
	int iVar0;
	float fVar1;
	var uVar2[2];
	fVar1 = uParam0->f_15;
	if (uParam0->f_16 >= 360f)
	{
		uParam0->f_16 = 360f;
	}
	if (uParam0->f_16 <= 0f)
	{
		uParam0->f_16 = 0f;
	}
	uParam0->f_15 = (uParam0->f_15 + (uParam0->f_16 * SYSTEM::TIMESTEP()));
	if (uParam0->f_15 < 0f)
	{
		uParam0->f_15 = (uParam0->f_15 + 360f);
	}
	if (uParam0->f_15 > 360f)
	{
		uParam0->f_15 = (uParam0->f_15 - 360f);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		uVar2[iVar0] = uParam0->f_9[iVar0];
		if (uParam0->f_9[iVar0] < uParam0->f_12[iVar0])
		{
			uParam0->f_9[iVar0] = (uParam0->f_9[iVar0] + (uParam0->f_17 * SYSTEM::TIMESTEP()));
			if (uParam0->f_9[iVar0] > uParam0->f_12[iVar0])
			{
				__LIB_32__.func_672(iLocal_41, 64);
				uParam0->f_9[iVar0] = uParam0->f_12[iVar0];
			}
		}
		if (uParam0->f_9[iVar0] > uParam0->f_12[iVar0])
		{
			uParam0->f_9[iVar0] = (uParam0->f_9[iVar0] - (uParam0->f_17 * SYSTEM::TIMESTEP()));
			if (uParam0->f_9[iVar0] < uParam0->f_12[iVar0])
			{
				__LIB_32__.func_672(iLocal_41, 64);
				uParam0->f_9[iVar0] = uParam0->f_12[iVar0];
			}
		}
		if (uVar2[iVar0] != uParam0->f_9[iVar0])
		{
			ENTITY::SET_ENTITY_COORDS(uParam0->f_3[iVar0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_9[iVar0], 0f, 1.5f), true, false, false, true);
		}
		if (fVar1 != uParam0->f_15)
		{
			ENTITY::SET_ENTITY_HEADING(uParam0->f_3[iVar0], uParam0->f_15);
		}
		iVar0++;
	}
}

void func_109(var uParam0, bool bParam1, bool bParam2)//Position - 0x8571
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<3> Var10;
	var uVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	struct<2> Var16;
	struct<2> Var17;
	fVar4 = -1.5f;
	fVar5 = -0.55f;
	fVar12 = (360f * SYSTEM::TIMESTEP());
	iVar13 = -1;
	if (!*uParam0 == 1)
	{
		return;
	}
	func_108(uParam0);
	if (__LIB_11__.func_203(uParam0->f_2))
	{
		if (bParam1 == 0)
		{
			uParam0->f_2 = 5;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !__LIB_11__.func_200())
		{
			bParam1 = false;
			uParam0->f_2 = 5;
		}
		if (bParam1 == 0)
		{
			uParam0->f_16 = (uParam0->f_16 - (fVar12 * 2f));
			if (uParam0->f_16 <= 0f)
			{
				uParam0->f_16 = 0f;
				__LIB_6__.func_352(&(uParam0->f_28));
			}
		}
	}
	else
	{
		uParam0->f_16 = (uParam0->f_16 - (fVar12 * 2f));
		if (uParam0->f_16 <= 0f)
		{
			uParam0->f_16 = 0f;
			__LIB_6__.func_352(&(uParam0->f_28));
		}
	}
	if (!bParam2 && uParam0->f_2 != 5)
	{
		if (MISC::GET_GAME_TIMER() > uParam0->f_44)
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, uParam0->f_18[0], 0f) };
			uParam0->f_33[0] = __LIB_20__.func_459(Var0, uParam0->f_21[0], 1);
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, uParam0->f_18[1], 0f) };
			uParam0->f_33[1] = __LIB_20__.func_459(Var0, uParam0->f_21[1], 1);
			uParam0->f_44 = (MISC::GET_GAME_TIMER() + iLocal_41);
		}
	}
	if (bLocal_44 == 1)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, uParam0->f_18[0], 0f) };
		if (uParam0->f_33[0])
		{
			__LIB_11__.func_185(Var0, uParam0->f_21[0], 0, 255, 0, 255, 32);
		}
		else
		{
			__LIB_11__.func_185(Var0, uParam0->f_21[0], 255, 0, 0, 255, 32);
		}
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, uParam0->f_18[1], 0f) };
		if (uParam0->f_33[1])
		{
			__LIB_11__.func_185(Var0, uParam0->f_21[1], 0, 255, 0, 255, 32);
		}
		else
		{
			__LIB_11__.func_185(Var0, uParam0->f_21[1], 0, 0, 255, 255, 32);
		}
		GRAPHICS::DRAW_DEBUG_LINE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, -2.5f, fVar4, 0.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 2.5f, fVar4, 0.5f), 0, 0, 255, 255);
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, 0f, 0.5f) };
		GRAPHICS::DRAW_DEBUG_LINE(Var0, Var0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_1), 0, 0, 255, 255);
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (!uParam0->f_33[0])
			{
				return;
			}
			if (uParam0->f_36 == 0)
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, uParam0->f_18[0], 0f) };
				uParam0->f_36 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var0, Var0 + Vector(1f, 0f, 0f), 2.25f, 2, 0, 4);
			}
			else
			{
				iVar9 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_36, &iVar7, &Var10, &uVar11, &iVar8);
				if (iVar9 == 2)
				{
					if (__LIB_32__.func_673(iVar8, 1))
					{
						iVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar8);
						if (__LIB_11__.func_207(ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar3), ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_1), 10f))
						{
							Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iVar3, true) };
							if (Var0.f_1 <= 0f)
							{
							}
							else
							{
								uParam0->f_2 = 1;
								uParam0->f_37 = iVar3;
								__LIB_6__.func_352(&(uParam0->f_27));
								uParam0->f_27 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_27, "BRUSHES_SPINNING", uParam0->f_1, "CARWASH_SOUNDS", false, 0);
							}
						}
					}
				}
				uParam0->f_36 = 0;
			}
			break;
		case 1:
			uParam0->f_16 = (uParam0->f_16 + fVar12);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_37, uParam0->f_3[0], true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_37, uParam0->f_3[1], true);
			if (__LIB_0__.func_121(uParam0->f_37))
			{
			}
			if (uParam0->f_16 >= 360f)
			{
				uParam0->f_16 = 360f;
				__LIB_20__.func_462(uParam0);
				uParam0->f_28 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_28, "BRUSHES_MOVE", uParam0->f_1, "CARWASH_SOUNDS", false, 0);
				uParam0->f_2 = 2;
			}
			break;
		case 2:
			uParam0->f_2 = 3;
			break;
		case 3:
			if (!__LIB_32__.func_673(uParam0->f_37, 1))
			{
				uParam0->f_2 = 4;
				return;
			}
			if (!__LIB_11__.func_201(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_37, -1, false)))
			{
				uParam0->f_2 = 4;
				return;
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !__LIB_11__.func_200())
			{
				uParam0->f_2 = 4;
				return;
			}
			MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0->f_37), &Var16, &Var17);
			fVar15 = (MISC::ABSF((Var17.f_1 - Var16.f_1)) / 2f);
			iVar14 = __LIB_20__.func_452(ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, fVar15, 0f), ENTITY::GET_ENTITY_COORDS(uParam0->f_37, true));
			if (iVar14 == 1)
			{
				uParam0->f_12[0] = -0.55f;
				uParam0->f_12[1] = 0.55f;
				uParam0->f_2 = 4;
				return;
			}
			iVar6 = 0;
			while (iVar6 < uParam0->f_3)
			{
				if (iVar6 == 0)
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 1f, fVar5, 0.5f) };
					Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, -fLocal_61, fVar5, 0.5f) };
				}
				else
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, -1f, fVar5, 0.5f) };
					Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, fLocal_61, fVar5, 0.5f) };
				}
				iVar13 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_37, "seat_dside_f");
				if (iVar13 != -1)
				{
					Var0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_37, iVar13) };
					Var1.f_2 = Var0.f_2;
					Var2.f_2 = Var0.f_2;
				}
				if (uParam0->f_38[iVar6] == 0)
				{
					if (MISC::GET_GAME_TIMER() > uParam0->f_41[iVar6])
					{
						if (iLocal_59 == 1 || VEHICLE::GET_VEHICLE_MOD(uParam0->f_37, 0) != -1)
						{
							uParam0->f_38[iVar6] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Var2, Var1, fLocal_60, 2, 0, 4);
						}
						else
						{
							uParam0->f_38[iVar6] = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var2, Var1, 2, 0, 7);
						}
						if (uParam0->f_38[iVar6] == 0)
						{
						}
					}
				}
				else
				{
					iVar9 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_38[iVar6], &iVar7, &Var10, &uVar11, &iVar8);
					if (iVar9 == 2)
					{
						uParam0->f_49[iVar6] = uParam0->f_46[iVar6];
						uParam0->f_46[iVar6] = 0;
						if (iVar7 > 0)
						{
							GRAPHICS::DRAW_DEBUG_SPHERE(Var10, 0.06625f, 0, 0, 255, 255);
							uParam0->f_46[iVar6] = 1;
						}
						if (__LIB_32__.func_673(iVar8, 1))
						{
							Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_1, Var10 + ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_1) * Vector(-fVar5, -fVar5, -fVar5)) };
							if (iVar6 == 0)
							{
								uParam0->f_12[iVar6] = (Var0.f_0 - 0.55f);
							}
							else
							{
								uParam0->f_12[iVar6] = (Var0.f_0 + 0.55f);
							}
						}
					}
					uParam0->f_38[iVar6] = 0;
					uParam0->f_41[iVar6] = MISC::GET_GAME_TIMER() + 120;
				}
				if (uParam0->f_49[iVar6] != uParam0->f_46[iVar6])
				{
					if (uParam0->f_49[iVar6] == 1 && uParam0->f_46[iVar6] == 0)
					{
					}
					if (uParam0->f_49[iVar6] == 0 && uParam0->f_46[iVar6] == 1)
					{
					}
				}
				iVar6++;
			}
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_37, uParam0->f_3[0], true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_37, uParam0->f_3[1], true);
			if (bParam2)
			{
				uParam0->f_2 = 4;
				return;
			}
			break;
		case 4:
			uParam0->f_37 = 0;
			uParam0->f_12[0] = (-uParam0->f_30 / 2f);
			uParam0->f_12[1] = (uParam0->f_30 / 2f);
			uParam0->f_16 = (uParam0->f_16 - fVar12);
			if (uParam0->f_16 <= 0f)
			{
				uParam0->f_16 = 0f;
				__LIB_6__.func_352(&(uParam0->f_29));
				__LIB_6__.func_352(&(uParam0->f_27));
				__LIB_11__.func_184(&(uParam0->f_6[0]));
				__LIB_11__.func_184(&(uParam0->f_6[1]));
			}
			if ((uParam0->f_12[0] == uParam0->f_9[0] && uParam0->f_12[1] == uParam0->f_9[1]) && uParam0->f_16 == 0f)
			{
				__LIB_6__.func_352(&(uParam0->f_28));
				uParam0->f_2 = 5;
			}
			break;
		case 5:
			__LIB_6__.func_352(&(uParam0->f_28));
			__LIB_6__.func_352(&(uParam0->f_29));
			__LIB_6__.func_352(&(uParam0->f_27));
			__LIB_11__.func_184(&(uParam0->f_6[0]));
			__LIB_11__.func_184(&(uParam0->f_6[1]));
			uParam0->f_12[0] = (-uParam0->f_30 / 2f);
			uParam0->f_12[1] = (uParam0->f_30 / 2f);
			uParam0->f_17 = 1.5f;
			if (MISC::GET_GAME_TIMER() > uParam0->f_44)
			{
				if (!__LIB_20__.func_459(uParam0->f_24, 1f, 1))
				{
					uParam0->f_31 = 1;
					uParam0->f_44 = 0;
					uParam0->f_2 = 0;
				}
				else
				{
					uParam0->f_44 = (MISC::GET_GAME_TIMER() + iLocal_41);
				}
			}
			break;
	}
}

void func_111()//Position - 0x8D7C
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 225 /*INPUT_SCRIPT_RRIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 91 /*INPUT_VEH_PASSENGER_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/, true);
	__LIB_0__.func_91();
	if (!Global_78319)
	{
		__LIB_0__.func_186();
	}
}

int func_173(int iParam0, var uParam1, int iParam2)//Position - 0xB2F2
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__.func_524(iParam0))
	{
		return 0;
	}
	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
	if (!__LIB_0__.func_524(iParam0))
	{
		return 0;
	}
	if (VEHICLE::DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
	}
	if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, true))
	{
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_335))
	{
		__LIB_26__.func_379(iParam0, uParam1, 0f, uParam1->f_336);
		return 0;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam1->f_335))
	{
	}
	if (Global_78319)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 512);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam0, true);
		}
	}
	VEHICLE::SET_VEHICLE_DOORS_SHUT(iParam0, false);
	TASK::CLEAR_PED_TASKS(iVar0);
	ENTITY::SET_ENTITY_VELOCITY(iParam0, 0f, 0f, 0f);
	uParam1->f_350 = 2;
	TASK::OPEN_SEQUENCE_TASK(&iVar1);
	if (iParam2 > 0)
	{
		TASK::TASK_STAND_STILL(0, iParam2);
		uParam1->f_350++;
	}
	TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iParam0, uParam1->f_335, 262144, 0, 546, -1, uParam1->f_336, false, 1.25f);
	TASK::TASK_STAND_STILL(0, 3000);
	TASK::CLOSE_SEQUENCE_TASK(iVar1);
	TASK::TASK_PERFORM_SEQUENCE(iVar0, iVar1);
	TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, uParam1->f_336);
	iLocal_57 = -1;
	uParam1->f_358 = 0;
	__LIB_11__.func_209();
	VEHICLE::ADD_VEHICLE_STUCK_CHECK_WITH_WARP(iParam0, 0.2f, 1000, false, false, false, -1);
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "Carwash_Vehicle_Decorator"))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "Carwash_Vehicle_Decorator", true);
	}
	__LIB_11__.func_202(uParam1);
	return 1;
}

void func_179()//Position - 0xB628
{
	struct<3> Var0;
	float fVar1;
	func_208(&Local_62, -700.1f, -922.2f, 18.4f, -700.1f, -943.6f, 18.7f);
	__LIB_11__.func_218(&Local_62, -700.1f, -926.6f, 18.7f, -699.9344f, -939.5706f, 18.014494f);
	__LIB_11__.func_217(&Local_62, -699.93677f, -940.4027f, 20f, -699.87805f, -926.03876f, 20f);
	__LIB_10__.func_714(-701.14996f, -947.1219f, 18.491688f, 6.2f, &(Local_62.f_352), &(Local_62.f_355));
	__LIB_11__.func_216(&Local_62, "carwash2_r");
	Local_62.f_338 = 0.6f;
	Local_62.f_351 = 2;
	Local_62.f_21 = { -700.0682f, -921.149f, 18.7028f };
	Local_62.f_337 = 4f;
	func_200(&(Local_62.f_172[0 /*23*/]), -701.0261f, -918.9723f, 21.3734f, 1.9948f, 0f, -121.2536f, -701.1696f, -918.9987f, 20.313f, -2.3997f, 0f, -166.3155f, __LIB_0__.func_138(Global_78319, 5000, 8500), 0);
	__LIB_11__.func_187(&(Local_62.f_172[0 /*23*/]), 50f, 0);
	__LIB_11__.func_214(&(Local_62.f_172[0 /*23*/]), 0.105457f);
	func_200(&(Local_62.f_172[1 /*23*/]), -701.5583f, -942.6389f, 20.2026f, -4.1156f, 0f, -23.5382f, -698.8515f, -942.399f, 20.1769f, -4.1156f, 0f, 16.0096f, 8500, 0);
	__LIB_11__.func_187(&(Local_62.f_172[1 /*23*/]), 50f, 0);
	__LIB_11__.func_214(&(Local_62.f_172[1 /*23*/]), 0.74f);
	__LIB_0__.func_524(PLAYER::PLAYER_PED_ID());
	if (!Global_78319)
	{
		func_197();
	}
	func_200(&(Local_62.f_172[6 /*23*/]), -699.0652f, -951.9319f, 18.9507f, 7.8579f, 0f, 8.784f, -698.65f, -952.932f, 19.26f, 0.7437f, 0f, 23.8817f, 7200, 0.45f);
	__LIB_11__.func_187(&(Local_62.f_172[6 /*23*/]), 40.022f, 0);
	Var0 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, false, false) && (Var0.f_2 - fVar1) > 1.35f)
	{
		Local_62.f_342 = 1;
	}
	if (!Global_78319)
	{
		__LIB_20__.func_455(&(Local_62.f_172[0 /*23*/]), &(Local_62.f_340), Local_62.f_342, 1, 1, 1);
	}
	__LIB_32__.func_674(&Local_62, 190);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_195(&uLocal_81, Local_62.f_335);
	}
	else
	{
		func_188(&uLocal_81, Local_62.f_335);
	}
	func_187(&(Local_62.f_30), -699.97f, -927.7f, 20.8279f, 0f, 4.85f, 0, 0.3f);
	__LIB_11__.func_212(&(Local_62.f_30), "ent_amb_car_wash_jet_soap");
	__LIB_11__.func_211(60);
	__LIB_11__.func_210(&(Local_62.f_120), -699.97f, -935f, 17.9f, 180f, 3.6f, 0.2f);
	func_183(&(Local_62.f_93), -699.97f, -931.7f, 21.3f, 0f, 18.564493f);
	__LIB_11__.func_211(60);
	func_187(&(Local_62.f_51), -699.97f, -938.8f, 20.8279f, 180f, 4.85f, 0, 0.3f);
	__LIB_11__.func_212(&(Local_62.f_51), "ent_amb_car_wash_jet");
	__LIB_11__.func_211(60);
	__LIB_26__.func_380(&uLocal_81);
	TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", false);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
}

void func_183(var uParam0, struct<3> Param1, float fParam2, float fParam3)//Position - 0xBBC2
{
	float fVar0;
	uParam0->f_2 = { Param1 };
	uParam0->f_19 = OBJECT::CREATE_OBJECT(joaat("prop_carwash_roller_horz"), Param1, false, true, false);
	uParam0->f_5 = { Param1 };
	uParam0->f_23 = Param1.f_2;
	uParam0->f_24 = Param1.f_2;
	uParam0->f_11 = fParam2;
	uParam0->f_1 = 1;
	uParam0->f_25 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1, iLocal_40));
	uParam0->f_26 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2, iLocal_41));
	uParam0->f_15 = 1.25f;
	if (fParam3 == 0f)
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &fVar0, false, false))
		{
			if (fVar0 != 0f && fVar0 != -200f)
			{
				uParam0->f_22 = (fVar0 + 0.55f);
			}
		}
	}
	else
	{
		uParam0->f_22 = fParam3;
	}
	if (__LIB_0__.func_524(uParam0->f_19))
	{
		ENTITY::SET_ENTITY_HEADING(uParam0->f_19, fParam2);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_19, true);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_19, true, false);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_19, true);
	}
	func_99(uParam0, 1);
}

void func_187(var uParam0, struct<3> Param1, float fParam2, float fParam3, int iParam4, float fParam5)//Position - 0xBEE6
{
	float fVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_13))
	{
		uParam0->f_13 = "ent_amb_car_wash_jet";
	}
	*uParam0 = 1;
	uParam0->f_8 = (fParam3 / 2f);
	uParam0->f_3 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Param1, false, true, false);
	uParam0->f_1 = iParam4;
	if (__LIB_0__.func_524(uParam0->f_3))
	{
		ENTITY::SET_ENTITY_HEADING(uParam0->f_3, fParam2);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_3, true);
	}
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &fVar0, false, false))
	{
		uParam0->f_9 = MISC::ABSF((Param1.f_2 - fVar0));
	}
	uParam0->f_7 = fParam5;
	uParam0->f_10 = { Param1 };
	uParam0->f_10.f_2 = fVar0;
}

void func_188(var uParam0, char* sParam1)//Position - 0xBF7B
{
	__LIB_10__.func_705(uParam0, 0, joaat("prop_carwash_roller_horz"));
	__LIB_10__.func_705(uParam0, 1, joaat("prop_carwash_roller_vert"));
	__LIB_10__.func_705(uParam0, 2, joaat("prop_ld_test_01"));
	__LIB_10__.func_706(uParam0, 3, 4, "SCRIPT\CARWASH", 0);
	__LIB_11__.func_213(uParam0, 4);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		__LIB_10__.func_706(uParam0, 5, 11, sParam1, 0);
	}
	while (!__LIB_20__.func_327(uParam0))
	{
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 75 /*INPUT_VEH_EXIT*/);
		func_111();
		SYSTEM::WAIT(0);
	}
}

void func_195(var uParam0, char* sParam1)//Position - 0xC567
{
	__LIB_10__.func_705(uParam0, 0, joaat("prop_carwash_roller_horz"));
	__LIB_10__.func_705(uParam0, 1, joaat("prop_carwash_roller_vert"));
	__LIB_10__.func_705(uParam0, 2, joaat("prop_ld_test_01"));
	if (AUDIO::HINT_SCRIPT_AUDIO_BANK("SCRIPT\CARWASH", 0, -1))
	{
	}
	__LIB_11__.func_213(uParam0, 3);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		__LIB_10__.func_706(uParam0, 4, 11, sParam1, 0);
	}
	while (!__LIB_20__.func_327(uParam0))
	{
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 75 /*INPUT_VEH_EXIT*/);
		func_111();
		SYSTEM::WAIT(0);
	}
}

void func_197()//Position - 0xC602
{
	int iVar0;
	struct<2> Var1;
	var uVar2;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar0), &Var1, &uVar2);
	if (Var1.f_1 < -3.8f)
	{
		func_200(&(Local_62.f_172[2 /*23*/]), -699.969f, -929.1818f, 19.2126f, -0.8962f, -0.0038f, -179.6509f, -699.9516f, -932.04f, 19.1679f, -0.8962f, -0.0038f, -179.6509f, 6500, 1.5f);
	}
	else
	{
		func_200(&(Local_62.f_172[2 /*23*/]), -700.0016f, -932.0601f, 18.7178f, -8.6749f, 0f, -179.6145f, -700.0532f, -936.7521f, 18.6515f, 3.9366f, 0f, 179.651f, 6500, 1.5f);
	}
	Local_62.f_172[2 /*23*/].f_1[0 /*3*/].f_1 = (Local_62.f_172[2 /*23*/].f_1[0 /*3*/].f_1 + fLocal_223);
	Local_62.f_172[2 /*23*/].f_1[1 /*3*/].f_1 = (Local_62.f_172[2 /*23*/].f_1[1 /*3*/].f_1 + fLocal_223);
	__LIB_11__.func_187(&(Local_62.f_172[2 /*23*/]), 50f, 0);
	__LIB_11__.func_214(&(Local_62.f_172[2 /*23*/]), 1.107178f);
}

void func_200(var uParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, int iParam5, int iParam6)//Position - 0xC765
{
	func_202(uParam0, Param1, Param2, 0, iParam6);
	__LIB_11__.func_215(uParam0, Param3, Param4, iParam5);
}

void func_202(var uParam0, struct<3> Param1, struct<3> Param2, int iParam3, var uParam4)//Position - 0xC7BA
{
	__LIB_10__.func_839(uParam0);
	uParam0->f_1[0 /*3*/] = { Param1 };
	uParam0->f_8[0 /*3*/] = { Param2 };
	*uParam0 = 1;
	uParam0->f_21 = iParam3;
	uParam0->f_18 = uParam4;
	uParam0->f_20 = 0;
}

void func_208(var uParam0, struct<3> Param1, struct<3> Param2)//Position - 0xC8F7
{
	*(uParam0[0 /*3*/]) = { Param1 };
	*(uParam0[1 /*3*/]) = { Param2 };
	uParam0->f_26 = { __LIB_0__.func_79(Param2 - Param1) };
	uParam0->f_24 = __LIB_0__.func_670(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]));
	__LIB_11__.func_219(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, 0, !Global_78319, 0, 1, !Global_78319);
}

void func_211(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0xCA24
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
					if (func_325(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_213(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_325(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_213(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_325(PLAYER::PLAYER_PED_ID(), 8, 1) || func_325(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_213(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_325(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_213(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

int func_213(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0xCC1E
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
		Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iParam1, iParam2, -1) };
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
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, uVar11[iVar0], -1) };
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
							Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_20__.func_322(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_40__.func_943(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_213(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								iVar3 = __LIB_40__.func_943(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_213(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, func_222(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_221(iParam0, iVar10, &iVar4, 1))
							{
								func_213(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_213(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_35__.func_896(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_213(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_213(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_213(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_213(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_213(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
			Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_20__.func_322(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_943(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_213(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = __LIB_40__.func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_213(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = __LIB_40__.func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_213(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_39__.func_857(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_221(iParam0, iVar10, &iVar4, 0))
		{
			func_213(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_214(iParam0, iVar10, &iVar4))
		{
			func_213(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_214(int iParam0, int iParam1, int iParam2)//Position - 0xD42E
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_325(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_221(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xDD22
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_325(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_222(int iParam0, int iParam1, int iParam2)//Position - 0xDDB8
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
				if (func_325(iParam0, iParam1, iVar0))
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
				if (func_325(iParam0, iParam1, iVar1))
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

int func_325(int iParam0, int iParam1, int iParam2)//Position - 0x2ABC0
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, iParam2, -1) };
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
				if (!func_325(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_325(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_325(iParam0, 14, iVar4))
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
						Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, iVar2, iVar1, -1) };
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
			if (!func_325(iParam0, 14, uVar8[iVar7]))
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

int func_327()//Position - 0x2AE57
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER() + 100;
	while (MISC::GET_GAME_TIMER() < iVar0)
	{
		switch (__LIB_26__.func_296(&iLocal_222, 0, 9, 0, 0))
		{
			case 1:
				return 1;
			case 0:
				return 0;
			default:
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

void func_334()//Position - 0x2B256
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var11;
	float fVar12;
	int iVar13;
	while (CAM::IS_SCREEN_FADED_OUT() || __LIB_0__.func_497())
	{
		SYSTEM::WAIT(0);
	}
	func_179();
	__LIB_11__.func_227(&(Local_204[0 /*24*/]), 1, "", __LIB_10__.func_979(157), 15, "", 0, 2.5f);
	__LIB_11__.func_226(&(Local_204[0 /*24*/]), Local_62.f_26, 15f);
	__LIB_20__.func_467(&uLocal_205, 1);
	Local_62.f_336 = 1.5f;
	while (true)
	{
		__LIB_0__.func_524(PLAYER::PLAYER_PED_ID());
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (__LIB_6__.func_949())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				func_393(0);
			}
		}
		bVar1 = false;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			bVar1 = (__LIB_35__.func_989(iVar3) || __LIB_11__.func_224(iVar3));
			bLocal_202 = VEHICLE::DOES_VEHICLE_HAVE_ROOF(iVar3);
			__LIB_11__.func_93(bLocal_202);
		}
		func_88(&Local_62);
		iVar2 = bLocal_200;
		bLocal_200 = __LIB_26__.func_376(PLAYER::PLAYER_PED_ID());
		if (iVar2 == 0 && bLocal_200 == 1)
		{
		}
		if (iVar2 == 1 && bLocal_200 == 0)
		{
		}
		if (bLocal_200)
		{
			if (iVar2 != bLocal_200)
			{
				Local_62.f_339 = 0;
				func_197();
			}
			func_85(&Local_62, iVar3, fLocal_199);
			if (func_16(&Local_62, iVar3))
			{
				if (Local_62.f_358 == 0)
				{
					__LIB_42__.func_414(2);
				}
				__LIB_11__.func_208(iVar3);
				__LIB_11__.func_204(&Local_62);
				__LIB_20__.func_454(PLAYER::PLAYER_PED_ID());
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
		}
		else
		{
			func_26(Local_62.f_340, 1);
			__LIB_20__.func_454(PLAYER::PLAYER_PED_ID());
			if (iVar2 == 1 && bLocal_200 == 0)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (__LIB_20__.func_466(&(Local_204[0 /*24*/])))
			{
				Var10 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_62.f_7[0 /*3*/] + Local_62.f_7[1 /*3*/] / Vector(2f, 2f, 2f), Local_62.f_24, Local_224) };
				Var11 = { fLocal_225, SYSTEM::VDIST(Local_62.f_7[0 /*3*/], Local_62.f_7[1 /*3*/]), fLocal_226 };
				fVar12 = Local_62.f_24;
				if (iLocal_203 == 0)
				{
					if (MISC::GET_GAME_TIMER() > iVar0)
					{
						iLocal_203 = SHAPETEST::START_SHAPE_TEST_BOX(Var10, Var11, 0f, 0f, fVar12, 0, 18, iVar3, 4);
					}
				}
				else
				{
					iVar5 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_203, &iVar9, &uVar7, &uVar8, &iVar6);
					if (iVar5 == 2)
					{
						iLocal_201 = 0;
						if (iVar9 > 0)
						{
							if (func_53(iVar6))
							{
								iLocal_201 = 1;
							}
						}
						iLocal_203 = 0;
					}
					if (iVar5 == 0)
					{
						iLocal_203 = 0;
					}
					iVar0 = MISC::GET_GAME_TIMER() + 250;
				}
			}
			Local_204[0 /*24*/].f_8 = iLocal_201;
			if (!iLocal_201 && __LIB_20__.func_466(&(Local_204[0 /*24*/])))
			{
				iVar13 = __LIB_11__.func_223(&(Local_204[0 /*24*/]));
				if (iVar13 > 1)
				{
				}
			}
			if (func_337(&Local_204, &uLocal_205, bVar1, 0, 0, 1424))
			{
				if (__LIB_0__.func_524(iVar3))
				{
					__LIB_20__.func_456(Local_62[0 /*3*/], Local_62[1 /*3*/], 3f, 0);
					func_335(iVar3, &Local_62, 1);
					func_80(PLAYER::PLAYER_PED_ID(), 1);
					func_173(iVar3, &Local_62, 0);
					fLocal_199 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iVar3);
					Local_62.f_339 = 0;
					Local_62.f_343 = 0;
					iLocal_201 = 0;
				}
			}
		}
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
		{
			Var4.f_2 = 18.5f;
		}
		if (SYSTEM::VDIST2(Var4, -700.6f, -933.4f, 18.5f) > (90f * 90f))
		{
			func_393(0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_335(int iParam0, var uParam1, int iParam2)//Position - 0x2B5B1
{
	struct<3> Var0;
	if (__LIB_0__.func_524(iParam0))
	{
		__LIB_20__.func_455(&(uParam1->f_172[0 /*23*/]), &(uParam1->f_340), uParam1->f_342, 1, 1, 1);
		Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
		if (!__LIB_11__.func_220(uParam1->f_26, Var0, 30f) || iParam2 == 1)
		{
			__LIB_10__.func_698(iParam0, MISC::GET_CLOSEST_POINT_ON_LINE(ENTITY::GET_ENTITY_COORDS(iParam0, true), *(uParam1[0 /*3*/]), *(uParam1[1 /*3*/]), false) + Vector(0.1f, 0f, 0f));
			ENTITY::SET_ENTITY_HEADING(iParam0, uParam1->f_24);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 0f);
		}
		VEHICLE::SET_VEHICLE_DOORS_SHUT(iParam0, false);
		uParam1->f_339 = 0;
		uParam1->f_345 = 0;
		uParam1->f_348 = 0;
		uParam1->f_349 = 0;
		if (Global_78319)
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return;
			}
		}
		__LIB_11__.func_192(iParam0, 2);
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, false);
		}
	}
}

int func_337(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x2B6B7
{
	int iVar0;
	var uVar1;
	if (uParam1->f_10)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			__LIB_32__.func_772(uParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_13)
	{
		case 0:
			iVar0 = 0;
			if (__LIB_32__.func_771(uParam1->f_16))
			{
				iVar0 = 0;
				while (iVar0 < *uParam0)
				{
					if (__LIB_20__.func_466(uParam0[iVar0 /*24*/]) && (*uParam0)[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
						if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 21) || __LIB_0__.func_702(PLAYER::PLAYER_ID(), 25))
						{
							__LIB_26__.func_381(uParam1, 6);
						}
						else if ((uParam0[iVar0 /*24*/])->f_7 || (MISC::GET_MISSION_FLAG() && uParam1->f_16 == 0))
						{
							__LIB_26__.func_381(uParam1, 6);
						}
						else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							__LIB_26__.func_381(uParam1, 8);
						}
						else if (bParam2)
						{
							__LIB_26__.func_381(uParam1, 3);
						}
						else if ((uParam0[iVar0 /*24*/])->f_8)
						{
							__LIB_26__.func_381(uParam1, 2);
						}
						else if (!func_357((uParam0[uParam1->f_12 /*24*/])->f_9))
						{
							__LIB_26__.func_381(uParam1, 1);
						}
						else if (__LIB_32__.func_770())
						{
							__LIB_26__.func_381(uParam1, 7);
						}
						else if (__LIB_11__.func_222(uParam0[iVar0 /*24*/], &uVar1))
						{
							__LIB_26__.func_381(uParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				__LIB_20__.func_668(uParam1);
			}
			break;
		case 2:
			if (!uParam1->f_9)
			{
				__LIB_20__.func_667(uParam1, uParam1->f_6);
			}
			if (__LIB_20__.func_465(uParam0[uParam1->f_12 /*24*/]) || (uParam0[iVar0 /*24*/])->f_8 == 0)
			{
				__LIB_26__.func_381(uParam1, 0);
				return 0;
			}
			break;
		case 1:
			if (!uParam1->f_9)
			{
				__LIB_26__.func_504(uParam1, uParam1->f_2, (uParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if (__LIB_20__.func_465(uParam0[uParam1->f_12 /*24*/]) || func_357((uParam0[uParam1->f_12 /*24*/])->f_9))
			{
				__LIB_26__.func_381(uParam1, 0);
				return 0;
			}
			break;
		case 6:
			if (!uParam1->f_9)
			{
				__LIB_20__.func_667(uParam1, uParam1->f_1);
			}
			if (__LIB_20__.func_465(uParam0[uParam1->f_12 /*24*/]) || !__LIB_32__.func_771(uParam1->f_16))
			{
				__LIB_26__.func_381(uParam1, 0);
				return 0;
			}
			break;
		case 3:
			if (!uParam1->f_9)
			{
				__LIB_20__.func_667(uParam1, uParam1->f_3);
			}
			if ((__LIB_20__.func_465(uParam0[uParam1->f_12 /*24*/]) || bParam2 == 0) || !__LIB_32__.func_771(uParam1->f_16))
			{
				__LIB_26__.func_381(uParam1, 0);
				return 0;
			}
			break;
		case 7:
			if (!uParam1->f_9)
			{
				__LIB_20__.func_667(uParam1, uParam1->f_5);
			}
			if (__LIB_20__.func_465(uParam0[uParam1->f_12 /*24*/]) || !__LIB_32__.func_771(uParam1->f_16))
			{
				__LIB_26__.func_381(uParam1, 0);
				return 0;
			}
			break;
		case 8:
			if (!uParam1->f_9)
			{
				__LIB_20__.func_667(uParam1, uParam1->f_4);
			}
			if (__LIB_20__.func_465(uParam0[uParam1->f_12 /*24*/]) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				__LIB_26__.func_381(uParam1, 0);
				return 0;
			}
			break;
		case 9:
			if (!uParam1->f_9)
			{
				if (__LIB_11__.func_221())
				{
					__LIB_20__.func_667(uParam1, uParam1->f_7);
				}
				else
				{
					__LIB_20__.func_667(uParam1, uParam1->f_8);
				}
			}
			if (__LIB_20__.func_465(uParam0[uParam1->f_12 /*24*/]) || __LIB_20__.func_463(uParam0[uParam1->f_12 /*24*/]))
			{
				__LIB_26__.func_381(uParam1, 0);
				return 0;
			}
			break;
		case 4:
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
			__LIB_0__.func_186();
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				__LIB_26__.func_381(uParam1, 8);
				return 0;
			}
			if ((uParam0[uParam1->f_12 /*24*/])->f_8)
			{
				__LIB_26__.func_381(uParam1, 2);
				return 0;
			}
			if (__LIB_20__.func_465(uParam0[uParam1->f_12 /*24*/]) || !__LIB_32__.func_771(uParam1->f_16))
			{
				__LIB_26__.func_381(uParam1, 0);
				return 0;
			}
			if (Global_75485)
			{
				return 0;
			}
			if ((uParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_0__.func_306(PLAYER::PLAYER_PED_ID(), 0) != -1)
				{
					__LIB_26__.func_381(uParam1, 0);
					return 0;
				}
			}
			if ((uParam0[uParam1->f_12 /*24*/])->f_7 || (MISC::GET_MISSION_FLAG() && uParam1->f_16 == 0))
			{
				__LIB_26__.func_381(uParam1, 6);
				return 0;
			}
			if (__LIB_32__.func_770())
			{
				__LIB_26__.func_381(uParam1, 7);
				return 0;
			}
			if (!func_357((uParam0[uParam1->f_12 /*24*/])->f_9))
			{
				__LIB_26__.func_381(uParam1, 1);
				return 0;
			}
			if (bParam2)
			{
				__LIB_26__.func_381(uParam1, 3);
				return 0;
			}
			if (!bParam2 && !uParam1->f_9)
			{
				__LIB_26__.func_504(uParam1, *uParam1, (uParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if ((uParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
			}
			if (HUD::IS_PAUSE_MENU_ACTIVE() || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				return 0;
			}
			if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if ((PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if ((PED::IS_PED_RUNNING_RAGDOLL_TASK(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_DUCKING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.05f)
				{
					return 0;
				}
			}
			if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/) && uParam1->f_9 == 1) && bParam2 == 0)
			{
				if (!__LIB_20__.func_463(uParam0[uParam1->f_12 /*24*/]))
				{
					__LIB_26__.func_381(uParam1, 9);
				}
				else
				{
					__LIB_26__.func_381(uParam1, 5);
				}
			}
			break;
		case 5:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\CARWASH", false, -1))
				{
				}
			}
			__LIB_20__.func_668(uParam1);
			(uParam0[uParam1->f_12 /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				__LIB_26__.func_381(uParam1, 0);
				return 1;
			}
			HUD::CLEAR_HELP(true);
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 20f, 0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam0[uParam1->f_12 /*24*/])->f_5))
			{
				SCRIPT::REQUEST_SCRIPT((uParam0[uParam1->f_12 /*24*/])->f_5);
				while (!SCRIPT::HAS_SCRIPT_LOADED((uParam0[uParam1->f_12 /*24*/])->f_5))
				{
					__LIB_0__.func_186();
					if (__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !Global_78319)
						{
							__LIB_6__.func_762(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2f, 1, 1056964608, 0, 1, 0);
						}
					}
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/);
					SCRIPT::REQUEST_SCRIPT((uParam0[uParam1->f_12 /*24*/])->f_5);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
					SYSTEM::WAIT(0);
				}
				if (bParam3)
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (SCRIPT::HAS_SCRIPT_LOADED((uParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!CAM::IS_SCREEN_FADED_OUT())
						{
							if (__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !Global_78319)
								{
									__LIB_6__.func_762(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2f, 1, 1056964608, 0, 1, 0);
								}
							}
							PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
							__LIB_0__.func_186();
							SYSTEM::WAIT(0);
						}
					}
					SYSTEM::START_NEW_SCRIPT((uParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED((uParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_357(int iParam0)//Position - 0x2C54E
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MONEY::NETWORK_GET_CAN_SPEND_FROM_BANK_AND_WALLET(iParam0, -1);
	}
	return __LIB_9__.func_231(__LIB_18__.func_173()) >= iParam0;
}

void func_393(int iParam0)//Position - 0x2D3B1
{
	func_397(&Local_62);
	func_396(&Local_62, iParam0);
	__LIB_20__.func_328(&uLocal_81);
	if (Global_78319 == 0)
	{
		__LIB_10__.func_865(&iLocal_222);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_396(var uParam0, int iParam1)//Position - 0x2D443
{
	struct<3> Var0;
	int iVar1;
	func_397(uParam0);
	if (Global_78319)
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(PLAYER::PLAYER_PED_ID());
		if (iVar1 != __LIB_0__.func_160())
		{
			if (Global_2689235[iVar1 /*453*/].f_242 == 1)
			{
				Global_2689235[iVar1 /*453*/].f_242 = 0;
			}
		}
	}
	if (iParam1 == 1)
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		__LIB_26__.func_379(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), uParam0, 1f, 0f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 5f);
		ENTITY::SET_ENTITY_VELOCITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0f, 0f, 0f);
		SYSTEM::WAIT(0);
		__LIB_11__.func_201(PLAYER::PLAYER_PED_ID());
		Var0 = { ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true) };
		Var0.f_2 = -200f;
		ENTITY::SET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), Var0, true, false, false, true);
		__LIB_11__.func_197(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 500f, 0f);
		__LIB_11__.func_192(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
		SYSTEM::WAIT(125);
		CAM::DO_SCREEN_FADE_IN(500);
		SYSTEM::WAIT(1000);
		__LIB_24__.func_943(302, 0, 0);
		__LIB_42__.func_414(uParam0->f_351);
	}
	else if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	if (!Global_78319)
	{
		BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE("launcher_CarWash");
	}
}

void func_397(var uParam0)//Position - 0x2D570
{
	int iVar0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_26__.func_354(1, 1, 1, 1);
	}
	__LIB_20__.func_454(PLAYER::PLAYER_PED_ID());
	__LIB_8__.func_770(0);
	uParam0->f_348 = 0;
	uParam0->f_349 = 0;
	func_83(uParam0, 0);
	__LIB_11__.func_204(uParam0);
	__LIB_26__.func_377(uParam0);
	__LIB_38__.func_86(&(uParam0->f_120));
	__LIB_38__.func_85(&(uParam0->f_93));
	__LIB_40__.func_970(&(uParam0->f_51));
	__LIB_40__.func_970(&(uParam0->f_30));
	__LIB_40__.func_970(&(uParam0->f_72));
	__LIB_18__.func_191(uParam0->f_334, 0, 0, 1, 0);
	__LIB_11__.func_189(&(uParam0->f_340), 0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_WASH_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_WASH_SCENE");
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_0__.func_524(iVar0))
			{
				__LIB_11__.func_192(iVar0, 1);
				__LIB_11__.func_208(iVar0);
			}
		}
	}
	if (Global_78319)
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(PLAYER::PLAYER_PED_ID());
		if (iVar1 != __LIB_0__.func_160())
		{
			if (Global_2689235[iVar1 /*453*/].f_242 == 1)
			{
				Global_2689235[iVar1 /*453*/].f_242 = 0;
			}
		}
	}
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (__LIB_0__.func_524(iVar0))
	{
		__LIB_11__.func_192(iVar0, 1);
		__LIB_11__.func_208(iVar0);
	}
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(uParam0->f_352, uParam0->f_355, 0);
	TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", true);
}

