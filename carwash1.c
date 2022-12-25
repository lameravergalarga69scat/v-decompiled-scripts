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
	int iLocal_204 = 0;
	struct<24> Local_205[2];
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
	var uLocal_218 = -1;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	struct<3> Local_225 = { 0, 0, 0 } ;
	float fLocal_226 = 0f;
	float fLocal_227 = 0f;
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
	iLocal_223 = 4000;
	iLocal_224 = 3000;
	Local_225 = { 0.2f, 0f, -1.4f };
	fLocal_226 = 2.2f;
	fLocal_227 = 3f;
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("carwash1")) > 1)
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
		func_387(0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_327();
	}
	else
	{
		func_1();
	}
}

void func_1()//Position - 0x142
{
	int iVar0;
	__LIB_0__::func_715(PLAYER::PLAYER_PED_ID());
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::SET_MISSION_FLAG(true);
	func_210(0f, 0f, 0f, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1);
	FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 60f);
	func_179();
	HUD::CLEAR_HELP(true);
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	__LIB_40__::func_968(iVar0, &Local_62, 0);
	fLocal_199 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iVar0);
	bLocal_202 = VEHICLE::DOES_VEHICLE_HAVE_ROOF(iVar0);
	__LIB_15__::func_807(bLocal_202);
	while (true)
	{
		if ((!__LIB_0__::func_715(iVar0) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			__LIB_16__::func_70(iVar0);
			__LIB_16__::func_110(1);
			func_387(0);
		}
		__LIB_16__::func_99();
		__LIB_43__::func_939(&Local_62);
		__LIB_31__::func_818(&Local_62, iVar0, fLocal_199);
		if (__LIB_43__::func_938(&Local_62, iVar0))
		{
			__LIB_15__::func_811(1, 1, 1, 1);
			__LIB_16__::func_70(iVar0);
			if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
			{
				func_387(1);
			}
			else
			{
				__LIB_16__::func_110(1);
				func_387(0);
			}
		}
		if (Local_62.f_344 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/))
			{
				__LIB_14__::func_806(500, 1);
				Local_62.f_344 = 1;
				__LIB_16__::func_70(iVar0);
			}
		}
		else if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_387(1);
		}
		SYSTEM::WAIT(0);
	}
}

void func_179()//Position - 0xB626
{
	struct<3> Var0;
	float fVar1;
	__LIB_31__::func_825(&Local_62, 47.6782f, -1391.862f, 28.4115f, -5.4552f, -1391.862f, 28.2989f);
	__LIB_16__::func_79(&Local_62, 45.1f, -1391.9f, 28.7f, 1.1f, -1391.9f, 28.7f);
	__LIB_16__::func_78(&Local_62, -1.61825f, -1392.0479f, 30f, 48.67f, -1392.05f, 30f);
	__LIB_14__::func_822(-7.030046f, -1392.3198f, 28.336014f, 5.25f, &(Local_62.f_352), &(Local_62.f_355));
	__LIB_16__::func_77(&Local_62, "carwash1");
	Local_62.f_338 = 0.8f;
	Local_62.f_351 = 1;
	Local_62.f_21 = { 58.3062f, -1392.1101f, 28.9928f };
	__LIB_31__::func_824(&(Local_62.f_172[0 /*23*/]), 57.0218f, -1388.355f, 31.8075f, 17.568f, -0.0024f, 117.87f, 56.4795f, -1388.6339f, 30.1578f, -4.4388f, -0.0024f, 117.2989f, __LIB_0__::func_138(Global_78319, iLocal_223, 7000), 0);
	__LIB_16__::func_47(&(Local_62.f_172[0 /*23*/]), 34.4668f, 0);
	__LIB_16__::func_75(&(Local_62.f_172[0 /*23*/]), -0.02f);
	__LIB_31__::func_824(&(Local_62.f_172[1 /*23*/]), 28.9995f, -1390.5526f, 30.1807f, -4.2368f, -0.0125f, -108.3608f, 31.8706f, -1390.6946f, 30.0388f, -1.9457f, -0.0125f, -107.5f, 6000, 0);
	__LIB_16__::func_47(&(Local_62.f_172[1 /*23*/]), 39.9774f, 0);
	__LIB_16__::func_75(&(Local_62.f_172[1 /*23*/]), 0.105879f);
	__LIB_31__::func_824(&(Local_62.f_172[2 /*23*/]), 45.3286f, -1389.8623f, 29.3692f, 2.152f, -0.0125f, 108.8446f, 45.363f, -1392.8889f, 29.3736f, 2.152f, -0.0125f, 81.5301f, 6000, 0);
	__LIB_16__::func_47(&(Local_62.f_172[2 /*23*/]), 39.9774f, 0);
	__LIB_16__::func_75(&(Local_62.f_172[2 /*23*/]), 0.31031f);
	__LIB_31__::func_824(&(Local_62.f_172[3 /*23*/]), 24.6852f, -1395.2002f, 31.5041f, -14.0934f, -0.215f, -45.281f, 22.9172f, -1395.2319f, 30.0956f, -12.3702f, -0.215f, -2.4293f, 7000, 0);
	__LIB_16__::func_47(&(Local_62.f_172[3 /*23*/]), 28.1555f, 0);
	__LIB_16__::func_75(&(Local_62.f_172[3 /*23*/]), 0.548743f);
	__LIB_31__::func_824(&(Local_62.f_172[4 /*23*/]), 27.0372f, -1391.9624f, 31.6367f, -13.3479f, -0.215f, 88.6287f, 27.5526f, -1391.9666f, 29.4647f, 1.0232f, -0.215f, 89.3674f, 9000, 0);
	__LIB_16__::func_47(&(Local_62.f_172[4 /*23*/]), 28.1555f, 0);
	__LIB_16__::func_75(&(Local_62.f_172[4 /*23*/]), 0.848018f);
	__LIB_31__::func_824(&(Local_62.f_172[5 /*23*/]), 0.5057f, -1394.3345f, 29.1631f, 2.9577f, 0f, -66.2075f, 0.5057f, -1394.3345f, 29.1631f, 0.1806f, 0f, 20.2611f, 7500, 0.7f);
	__LIB_16__::func_47(&(Local_62.f_172[5 /*23*/]), 28.1555f, 0);
	__LIB_16__::func_75(&(Local_62.f_172[5 /*23*/]), 1.096745f);
	__LIB_31__::func_824(&(Local_62.f_172[6 /*23*/]), -13.0479f, -1392.973f, 28.7546f, 7.3208f, -0.0144f, -74.4871f, -12.9594f, -1392.9198f, 29.271f, 0.1462f, -0.0144f, -64.7351f, 6000, 0.45f);
	__LIB_16__::func_47(&(Local_62.f_172[6 /*23*/]), 39.32082f, 0);
	__LIB_0__::func_715(PLAYER::PLAYER_PED_ID());
	Var0 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, false, false) && (Var0.f_2 - fVar1) > 1.35f)
	{
		Local_62.f_342 = 1;
	}
	if (!Global_78319)
	{
		__LIB_31__::func_810(&(Local_62.f_172[0 /*23*/]), &(Local_62.f_340), Local_62.f_342, 1, 1, 1);
	}
	__LIB_16__::func_107(&Local_62, 189);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_31__::func_823(&uLocal_81, Local_62.f_335);
	}
	else
	{
		__LIB_31__::func_822(&uLocal_81, Local_62.f_335);
	}
	func_187(&(Local_62.f_30), 37f, -1391.8398f, 30.9f, 270f, 4f, 0, 1058642330);
	__LIB_16__::func_74(&(Local_62.f_30), "ent_amb_car_wash_jet_soap");
	__LIB_16__::func_73(60);
	__LIB_16__::func_72(&(Local_62.f_120), 20.9f, -1391.84f, 28.3268f, 90f, 3.25f, 0);
	__LIB_16__::func_73(60);
	__LIB_43__::func_940(&(Local_62.f_93), 28.3f, -1391.8398f, 30.8f, 90f, 28.911366f);
	__LIB_16__::func_73(60);
	func_187(&(Local_62.f_51), 13.65f, -1391.8398f, 30.9f, 90f, 4f, 0, 1058642330);
	__LIB_16__::func_74(&(Local_62.f_51), "ent_amb_car_wash_jet");
	__LIB_16__::func_73(60);
	func_187(&(Local_62.f_72), 6.692545f, -1391.8398f, 32.2147f, 90f, 5.23f, 1, 1058642330);
	__LIB_16__::func_74(&(Local_62.f_72), "ent_amb_car_wash_steam");
	__LIB_16__::func_73(60);
	__LIB_16__::func_105(&uLocal_81);
	TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", false);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
}

void func_187(var uParam0, struct<3> Param1, float fParam2, float fParam3, int iParam4, int iParam5)//Position - 0xC0CB
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
	uParam0->f_7 = iParam5;
	uParam0->f_10 = { Param1 };
	uParam0->f_10.f_2 = fVar0;
}

void func_210(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0xCADC
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
					if (func_324(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_212(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_324(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_212(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_324(PLAYER::PLAYER_PED_ID(), 8, 1) || func_324(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_212(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_324(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_212(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

int func_212(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0xCCD6
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
										func_212(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_212(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_221(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_220(iParam0, iVar10, &iVar4, 1))
							{
								func_212(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_212(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_212(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_212(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_212(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_212(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_212(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_212(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_212(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_212(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_220(iParam0, iVar10, &iVar4, 0))
		{
			func_212(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_213(iParam0, iVar10, &iVar4))
		{
			func_212(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_213(int iParam0, int iParam1, int iParam2)//Position - 0xD4E6
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_324(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_220(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xDDDA
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_324(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_221(int iParam0, int iParam1, int iParam2)//Position - 0xDE70
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
				if (func_324(iParam0, iParam1, iVar0))
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
				if (func_324(iParam0, iParam1, iVar1))
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

int func_324(int iParam0, int iParam1, int iParam2)//Position - 0x2ABC0
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
				if (!func_324(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_324(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_324(iParam0, 14, iVar4))
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
			if (!func_324(iParam0, 14, uVar8[iVar7]))
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

void func_327()//Position - 0x2AE75
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
	__LIB_16__::func_89(&(Local_205[0 /*24*/]), 1, "", __LIB_15__::func_504(156), 15, "", 0, 2f);
	__LIB_16__::func_88(&(Local_205[0 /*24*/]), Local_62.f_26, 15f);
	__LIB_16__::func_104(&uLocal_206, 1);
	while (true)
	{
		__LIB_0__::func_715(PLAYER::PLAYER_PED_ID());
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (__LIB_0__::func_959())
			{
				if (__LIB_31__::func_813(PLAYER::PLAYER_PED_ID()))
				{
					if (__LIB_0__::func_715(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
						{
							if (__LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
							{
								ENTITY::SET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 51.6073f, -1401.6653f, 28.4046f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 344.3805f);
							}
						}
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				func_387(0);
			}
		}
		bVar1 = false;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			bVar1 = (__LIB_37__::func_290(iVar3) || __LIB_16__::func_86(iVar3));
			bLocal_202 = VEHICLE::DOES_VEHICLE_HAVE_ROOF(iVar3);
		}
		__LIB_43__::func_939(&Local_62);
		func_366();
		iVar2 = bLocal_200;
		bLocal_200 = __LIB_31__::func_813(PLAYER::PLAYER_PED_ID());
		if (iVar2 == 0 && bLocal_200 == 1)
		{
		}
		if (iVar2 == 1 && bLocal_200 == 0)
		{
		}
		if (bLocal_200)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!iLocal_203)
				{
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\CARWASH", false, -1))
					{
						iLocal_203 = 1;
					}
				}
			}
			if (iVar2 != bLocal_200)
			{
				Local_62.f_339 = 0;
			}
			__LIB_31__::func_818(&Local_62, iVar3, fLocal_199);
			if (__LIB_43__::func_938(&Local_62, iVar3))
			{
				if (Local_62.f_358 == 0)
				{
					__LIB_16__::func_110(1);
				}
				__LIB_16__::func_70(iVar3);
				__LIB_16__::func_66(&Local_62);
				__LIB_31__::func_817(&Local_62, iVar3);
				__LIB_16__::func_90(PLAYER::PLAYER_PED_ID());
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				iLocal_201 = 0;
			}
		}
		else
		{
			__LIB_31__::func_809(Local_62.f_340, 1);
			__LIB_16__::func_90(PLAYER::PLAYER_PED_ID());
			if (iVar2 == 1 && bLocal_200 == 0)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (__LIB_16__::func_85(&(Local_205[0 /*24*/])))
			{
				Var10 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_62.f_7[0 /*3*/] + Local_62.f_7[1 /*3*/] / Vector(2f, 2f, 2f), Local_62.f_24, Local_225) };
				Var11 = { fLocal_226, SYSTEM::VDIST(Local_62.f_7[0 /*3*/], Local_62.f_7[1 /*3*/]), fLocal_227 };
				fVar12 = Local_62.f_24;
				if (iLocal_204 == 0)
				{
					if (MISC::GET_GAME_TIMER() > iVar0)
					{
						iLocal_204 = SHAPETEST::START_SHAPE_TEST_BOX(Var10, Var11, 0f, 0f, fVar12, 0, 18, iVar3, 4);
					}
				}
				else
				{
					iVar5 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_204, &iVar9, &uVar7, &uVar8, &iVar6);
					if (iVar5 == 2)
					{
						iLocal_201 = 0;
						if (iVar9 > 0)
						{
							if (__LIB_31__::func_811(iVar6))
							{
								iLocal_201 = 1;
							}
						}
						iLocal_204 = 0;
					}
					if (iVar5 == 0)
					{
						iLocal_204 = 0;
					}
					iVar0 = MISC::GET_GAME_TIMER() + 250;
				}
			}
			Local_205[0 /*24*/].f_8 = iLocal_201;
			if (!iLocal_201 && __LIB_16__::func_85(&(Local_205[0 /*24*/])))
			{
				iVar13 = __LIB_16__::func_84(&(Local_205[0 /*24*/]));
				if (iVar13 > 0)
				{
				}
			}
			if (__LIB_40__::func_970(&Local_205, &uLocal_206, bVar1, 0, 0, 1424))
			{
				if (__LIB_0__::func_715(iVar3))
				{
					__LIB_16__::func_91(Local_62[0 /*3*/], Local_62[1 /*3*/], 3f, 0);
					__LIB_40__::func_969(iVar3, &Local_62, 0);
					__LIB_31__::func_815(PLAYER::PLAYER_PED_ID(), 1);
					__LIB_40__::func_968(iVar3, &Local_62, iLocal_224);
					fLocal_199 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iVar3);
					Local_62.f_339 = 0;
					iLocal_201 = 0;
				}
			}
		}
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			Var4.f_2 = 28.323212f;
		}
		if (SYSTEM::VDIST2(Var4, 20.801605f, -1392.8304f, 28.323212f) > (90f * 90f))
		{
			func_387(0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_366()//Position - 0x2C6F0
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 40.27944f, -1398.856f, 23.846724f, -0.984962f, -1398.2402f, 32.0114f, 5.75f, false, true, 0))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -3.4237f, -1396.31f, 28.2554f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 85.1922f);
	}
}

void func_387(int iParam0)//Position - 0x2D0AC
{
	__LIB_43__::func_656(&Local_62);
	__LIB_43__::func_941(&Local_62, iParam0);
	__LIB_15__::func_239(&uLocal_81);
	SCRIPT::TERMINATE_THIS_THREAD();
}

