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
	__LIB_0__::func_715(PLAYER::PLAYER_PED_ID());
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
	__LIB_41__::func_290(iVar0, &Local_62, 0);
	fLocal_199 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iVar0);
	bLocal_202 = VEHICLE::DOES_VEHICLE_HAVE_ROOF(iVar0);
	while (true)
	{
		if ((!__LIB_0__::func_715(iVar0) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			__LIB_16__::func_68(iVar0);
			__LIB_16__::func_108(2);
			func_393(0);
		}
		__LIB_16__::func_97();
		__LIB_43__::func_947(&Local_62);
		__LIB_33__::func_335(&Local_62, iVar0, fLocal_199);
		if (__LIB_43__::func_946(&Local_62, iVar0))
		{
			__LIB_15__::func_810(1, 1, 1, 1);
			__LIB_16__::func_68(iVar0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_393(1);
			}
			else
			{
				__LIB_16__::func_108(2);
				func_393(0);
			}
		}
		if (Local_62.f_344 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/))
			{
				__LIB_14__::func_806(500, 0);
				Local_62.f_344 = 1;
				__LIB_16__::func_68(iVar0);
			}
		}
		else if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_393(1);
		}
		SYSTEM::WAIT(0);
	}
}

void func_179()//Position - 0xB628
{
	struct<3> Var0;
	float fVar1;
	__LIB_33__::func_342(&Local_62, -700.1f, -922.2f, 18.4f, -700.1f, -943.6f, 18.7f);
	__LIB_16__::func_77(&Local_62, -700.1f, -926.6f, 18.7f, -699.9344f, -939.5706f, 18.014494f);
	__LIB_16__::func_76(&Local_62, -699.93677f, -940.4027f, 20f, -699.87805f, -926.03876f, 20f);
	__LIB_14__::func_822(-701.14996f, -947.1219f, 18.491688f, 6.2f, &(Local_62.f_352), &(Local_62.f_355));
	__LIB_16__::func_75(&Local_62, "carwash2_r");
	Local_62.f_338 = 0.6f;
	Local_62.f_351 = 2;
	Local_62.f_21 = { -700.0682f, -921.149f, 18.7028f };
	Local_62.f_337 = 4f;
	__LIB_33__::func_341(&(Local_62.f_172[0 /*23*/]), -701.0261f, -918.9723f, 21.3734f, 1.9948f, 0f, -121.2536f, -701.1696f, -918.9987f, 20.313f, -2.3997f, 0f, -166.3155f, __LIB_0__::func_138(Global_78319, 5000, 8500), 0);
	__LIB_16__::func_45(&(Local_62.f_172[0 /*23*/]), 50f, 0);
	__LIB_16__::func_73(&(Local_62.f_172[0 /*23*/]), 0.105457f);
	__LIB_33__::func_341(&(Local_62.f_172[1 /*23*/]), -701.5583f, -942.6389f, 20.2026f, -4.1156f, 0f, -23.5382f, -698.8515f, -942.399f, 20.1769f, -4.1156f, 0f, 16.0096f, 8500, 0);
	__LIB_16__::func_45(&(Local_62.f_172[1 /*23*/]), 50f, 0);
	__LIB_16__::func_73(&(Local_62.f_172[1 /*23*/]), 0.74f);
	__LIB_0__::func_715(PLAYER::PLAYER_PED_ID());
	if (!Global_78319)
	{
		func_197();
	}
	__LIB_33__::func_341(&(Local_62.f_172[6 /*23*/]), -699.0652f, -951.9319f, 18.9507f, 7.8579f, 0f, 8.784f, -698.65f, -952.932f, 19.26f, 0.7437f, 0f, 23.8817f, 7200, 0.45f);
	__LIB_16__::func_45(&(Local_62.f_172[6 /*23*/]), 40.022f, 0);
	Var0 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, false, false) && (Var0.f_2 - fVar1) > 1.35f)
	{
		Local_62.f_342 = 1;
	}
	if (!Global_78319)
	{
		__LIB_33__::func_327(&(Local_62.f_172[0 /*23*/]), &(Local_62.f_340), Local_62.f_342, 1, 1, 1);
	}
	__LIB_16__::func_105(&Local_62, 190);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_33__::func_340(&uLocal_81, Local_62.f_335);
	}
	else
	{
		__LIB_33__::func_339(&uLocal_81, Local_62.f_335);
	}
	func_187(&(Local_62.f_30), -699.97f, -927.7f, 20.8279f, 0f, 4.85f, 0, 0.3f);
	__LIB_16__::func_72(&(Local_62.f_30), "ent_amb_car_wash_jet_soap");
	__LIB_16__::func_71(60);
	__LIB_16__::func_70(&(Local_62.f_120), -699.97f, -935f, 17.9f, 180f, 3.6f, 0.2f);
	__LIB_43__::func_948(&(Local_62.f_93), -699.97f, -931.7f, 21.3f, 0f, 18.564493f);
	__LIB_16__::func_71(60);
	func_187(&(Local_62.f_51), -699.97f, -938.8f, 20.8279f, 180f, 4.85f, 0, 0.3f);
	__LIB_16__::func_72(&(Local_62.f_51), "ent_amb_car_wash_jet");
	__LIB_16__::func_71(60);
	__LIB_16__::func_103(&uLocal_81);
	TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", false);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
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
	if (__LIB_0__::func_715(uParam0->f_3))
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

void func_197()//Position - 0xC602
{
	int iVar0;
	struct<2> Var1;
	var uVar2;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar0), &Var1, &uVar2);
	if (Var1.f_1 < -3.8f)
	{
		__LIB_33__::func_341(&(Local_62.f_172[2 /*23*/]), -699.969f, -929.1818f, 19.2126f, -0.8962f, -0.0038f, -179.6509f, -699.9516f, -932.04f, 19.1679f, -0.8962f, -0.0038f, -179.6509f, 6500, 1.5f);
	}
	else
	{
		__LIB_33__::func_341(&(Local_62.f_172[2 /*23*/]), -700.0016f, -932.0601f, 18.7178f, -8.6749f, 0f, -179.6145f, -700.0532f, -936.7521f, 18.6515f, 3.9366f, 0f, 179.651f, 6500, 1.5f);
	}
	Local_62.f_172[2 /*23*/].f_1[0 /*3*/].f_1 = (Local_62.f_172[2 /*23*/].f_1[0 /*3*/].f_1 + fLocal_223);
	Local_62.f_172[2 /*23*/].f_1[1 /*3*/].f_1 = (Local_62.f_172[2 /*23*/].f_1[1 /*3*/].f_1 + fLocal_223);
	__LIB_16__::func_45(&(Local_62.f_172[2 /*23*/]), 50f, 0);
	__LIB_16__::func_73(&(Local_62.f_172[2 /*23*/]), 1.107178f);
}

void func_211(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0xCA24
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_14__::func_747(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_0__::func_683())
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
			MISC::CLEAR_AREA_OF_PEDS(__LIB_0__::func_85(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
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
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_39 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__::func_84(500, 0);
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
		Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_0__::func_633(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_0__::func_350(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_0__::func_350(iParam0, 9);
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
			iVar7 = __LIB_0__::func_453(iParam0, 1);
			if (!__LIB_0__::func_234(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_0__::func_453(iParam0, 0);
			if (!__LIB_0__::func_233(iVar10, 14, iVar8, -1) && !__LIB_0__::func_232(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_0__::func_453(iParam0, 2);
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
			uVar11 = { __LIB_0__::func_459(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, uVar11[iVar0], -1) };
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
							uVar12 = { __LIB_0__::func_466(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_0__::func_633(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_14__::func_752(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
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
							__LIB_0__::func_230(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_0__::func_633(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_14__::func_752(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
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
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_222(iParam0, iVar0, -1), -1) };
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
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_213(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_13__::func_798(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_213(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_213(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_213(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_213(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_213(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_0__::func_466(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_0__::func_633(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_14__::func_752(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
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
		__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_0__::func_633(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_14__::func_752(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
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
				iVar3 = __LIB_14__::func_752(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_213(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_14__::func_635(iVar10, iParam1, iParam2);
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
	iVar0 = __LIB_0__::func_19(iParam1);
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
	iVar0 = __LIB_0__::func_19(iParam1);
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
				return __LIB_0__::func_453(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_0__::func_350(iParam0, iParam1);
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
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_0__::func_459(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_325(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_325(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_325(iParam0, 14, iVar4))
										{
											if (!__LIB_0__::func_551(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_0__::func_350(iParam0, iVar2);
						Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_0__::func_551(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
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
		uVar8 = { __LIB_0__::func_466(iVar0, iParam2) };
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
	else if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)))
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
		switch (__LIB_15__::func_282(&iLocal_222, 0, 9, 0, 0))
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
	while (CAM::IS_SCREEN_FADED_OUT() || __LIB_0__::func_629())
	{
		SYSTEM::WAIT(0);
	}
	func_179();
	__LIB_16__::func_87(&(Local_204[0 /*24*/]), 1, "", __LIB_15__::func_504(157), 15, "", 0, 2.5f);
	__LIB_16__::func_86(&(Local_204[0 /*24*/]), Local_62.f_26, 15f);
	__LIB_16__::func_102(&uLocal_205, 1);
	Local_62.f_336 = 1.5f;
	while (true)
	{
		__LIB_0__::func_715(PLAYER::PLAYER_PED_ID());
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (__LIB_0__::func_959())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				func_393(0);
			}
		}
		bVar1 = false;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			bVar1 = (__LIB_37__::func_616(iVar3) || __LIB_16__::func_84(iVar3));
			bLocal_202 = VEHICLE::DOES_VEHICLE_HAVE_ROOF(iVar3);
			__LIB_15__::func_806(bLocal_202);
		}
		__LIB_43__::func_947(&Local_62);
		iVar2 = bLocal_200;
		bLocal_200 = __LIB_33__::func_330(PLAYER::PLAYER_PED_ID());
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
			__LIB_33__::func_335(&Local_62, iVar3, fLocal_199);
			if (__LIB_43__::func_946(&Local_62, iVar3))
			{
				if (Local_62.f_358 == 0)
				{
					__LIB_16__::func_108(2);
				}
				__LIB_16__::func_68(iVar3);
				__LIB_16__::func_64(&Local_62);
				__LIB_16__::func_88(PLAYER::PLAYER_PED_ID());
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
		}
		else
		{
			__LIB_33__::func_326(Local_62.f_340, 1);
			__LIB_16__::func_88(PLAYER::PLAYER_PED_ID());
			if (iVar2 == 1 && bLocal_200 == 0)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (__LIB_16__::func_83(&(Local_204[0 /*24*/])))
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
							if (__LIB_33__::func_328(iVar6))
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
			if (!iLocal_201 && __LIB_16__::func_83(&(Local_204[0 /*24*/])))
			{
				iVar13 = __LIB_16__::func_82(&(Local_204[0 /*24*/]));
				if (iVar13 > 1)
				{
				}
			}
			if (__LIB_41__::func_292(&Local_204, &uLocal_205, bVar1, 0, 0, 1424))
			{
				if (__LIB_0__::func_715(iVar3))
				{
					__LIB_16__::func_89(Local_62[0 /*3*/], Local_62[1 /*3*/], 3f, 0);
					__LIB_41__::func_291(iVar3, &Local_62, 1);
					__LIB_33__::func_332(PLAYER::PLAYER_PED_ID(), 1);
					__LIB_41__::func_290(iVar3, &Local_62, 0);
					fLocal_199 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iVar3);
					Local_62.f_339 = 0;
					Local_62.f_343 = 0;
					iLocal_201 = 0;
				}
			}
		}
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
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

void func_393(int iParam0)//Position - 0x2D3B1
{
	__LIB_43__::func_699(&Local_62);
	__LIB_43__::func_949(&Local_62, iParam0);
	__LIB_15__::func_239(&uLocal_81);
	if (Global_78319 == 0)
	{
		__LIB_15__::func_281(&iLocal_222);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

