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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int* iLocal_90 = NULL;
	int* iLocal_91 = NULL;
	var uLocal_92 = 0;
	var uLocal_93 = 8;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 4;
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
	var uLocal_112 = 4;
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
	var uLocal_127 = 4;
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
	var uLocal_142 = 4;
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
	var uLocal_157 = 4;
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
	var uLocal_172 = 4;
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
	var uLocal_187 = 4;
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
	var uLocal_202 = 4;
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
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_61 = { 0f, 0f, 0f };
	Local_62 = { 0f, 0f, 0f };
	iLocal_63 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_72);
		AUDIO::STOP_STREAM();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
	}
	while (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		SYSTEM::WAIT(0);
	}
	__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	while (func_661())
	{
		func_659();
		SYSTEM::WAIT(0);
	}
	func_654();
	func_653(1);
	AUDIO::SKIP_RADIO_FORWARD();
	__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	if (__LIB_0__::func_368(136))
	{
		func_637(2);
	}
	else if (__LIB_0__::func_368(135))
	{
		func_637(0);
	}
	func_636(&(Global_113386.f_2363.f_539), -1);
	if (__LIB_20__::func_659(2))
	{
		if (__LIB_20__::func_659(0))
		{
			__LIB_12__::func_131(Global_98880[74 /*3*/], -1082130432, 350, 1114636288, 0);
			func_433(74, 64);
			__LIB_12__::func_288(&(Global_113386.f_2363.f_539), 0, 72);
			__LIB_12__::func_288(&(Global_113386.f_2363.f_539), 1, 73);
		}
		else
		{
			while (!func_15(2, 1))
			{
				SYSTEM::WAIT(0);
			}
			__LIB_12__::func_131(Global_98880[267 /*3*/], -1082130432, 350, 1114636288, 0);
			func_433(267, 64);
			__LIB_12__::func_288(&(Global_113386.f_2363.f_539), 1, 73);
		}
	}
	else
	{
		while (!func_15(0, 1))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_12__::func_131(Global_98880[83 /*3*/], -1082130432, 350, 1114636288, 0);
		func_433(83, 64);
		__LIB_12__::func_288(&(Global_113386.f_2363.f_539), 1, 73);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_97919[iVar0], false))
		{
			if (Global_97919[iVar0] != PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_97919[iVar0], true))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97919[iVar0], true, true);
				}
				PED::DELETE_PED(&(Global_97919[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_100366)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_100366[iVar0], false))
		{
			if (Global_100366[iVar0] != PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_100366[iVar0], true))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_100366[iVar0], true, true);
				}
				PED::DELETE_PED(&(Global_100366[iVar0]));
			}
		}
		iVar0++;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_IN(2500);
	}
	while (!CAM::IS_SCREEN_FADED_IN())
	{
		SYSTEM::WAIT(0);
	}
	if (NETWORK::FACEBOOK_CAN_POST_TO_FACEBOOK())
	{
		if (!BitTest(Global_113386.f_20118.f_290, 2))
		{
			__LIB_26__::func_590(1);
			NETWORK::FACEBOOK_POST_COMPLETED_MILESTONE(1);
			MISC::SET_BIT(&(Global_113386.f_20118.f_290), 2);
		}
	}
	Global_63154 = 0;
	__LIB_0__::func_46(0, 0);
	if (__LIB_0__::func_368(136))
	{
		__LIB_32__::func_575(17, 0);
		__LIB_32__::func_575(16, 0);
	}
	else if (__LIB_0__::func_368(135))
	{
		__LIB_32__::func_575(6, 0);
		__LIB_32__::func_575(9, 0);
	}
	__LIB_0__::func_503(137, 1);
	__LIB_18__::func_203("SHRINK_SOCIAL" /* GXT: Visit the Social Club website to view your psychiatric report. The report can be found in the GTAV missions section of the career menu. */, 3, 0, -1, 10000, 7, 0, 0, 0);
	__LIB_0__::func_533();
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_15(int iParam0, bool bParam1)//Position - 0xB0E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	Global_23011.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = __LIB_0__::func_388(iParam0);
	iVar1 = __LIB_19__::func_811(iVar0);
	if (iVar1 == 0)
	{
		return 1;
	}
	if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), iVar1))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar1);
	if (!STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false))
		{
			iVar3 = -1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 0, false))
		{
			iVar3 = 0;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 1, false))
		{
			iVar3 = 1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 2, false))
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = -1;
		}
	}
	else
	{
		iVar2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_415(&(Global_22965[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_97(&(Global_22965[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	__LIB_42__::func_790(&Global_22965, 0, 0, 0);
	__LIB_6__::func_846(iParam0);
	return 1;
}

int func_97(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x89CA
{
	int iVar0;
	if (__LIB_0__::func_317(iParam1))
	{
		iVar0 = __LIB_19__::func_811(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_38__::func_950(*iParam0, iParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_407(*iParam0);
			__LIB_32__::func_730(*iParam0, 1, 0);
			__LIB_20__::func_721(*iParam0);
			__LIB_20__::func_720(*iParam0);
			func_99(*iParam0, bParam6);
			__LIB_0__::func_349(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_99(int iParam0, bool bParam1)//Position - 0x8AE2
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_20__::func_509(iParam0);
	if (__LIB_10__::func_3(iVar0))
	{
		__LIB_10__::func_2(iVar0, 0);
		func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_190(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_6__::func_843(iParam0))
		{
			__LIB_10__::func_2(iVar0, 0);
			func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_190(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[120] && !Global_113386.f_9085.f_99.f_58[122])
			{
				func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085.f_99.f_58[123])
			{
				Global_113386.f_9085.f_99.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_168(iParam0, 3, 169))
					{
						func_375(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_168(iParam0, 12, 6))
			{
				func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_168(iParam0, 12, 17))
			{
				if (!func_100(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_168(iParam0, 12, 20))
			{
				if (!func_100(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_168(iParam0, 12, 21))
			{
				if (!func_100(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_168(iParam0, 12, 22))
			{
				if (!func_100(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_168(iParam0, 12, 11))
			{
				func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_168(iParam0, 12, 10))
			{
				func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_168(iParam0, 12, 50))
			{
				func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_168(iParam0, 14, 59))
			{
				func_375(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_168(iParam0, 8, 22))
			{
				func_375(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_168(iParam0, 12, 14))
			{
				func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_168(iParam0, 12, 13))
			{
				if (!func_100(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_168(iParam0, 12, 14))
			{
				if (!func_100(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_168(iParam0, 12, 15))
			{
				if (!func_100(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_168(iParam0, 12, 4))
			{
				func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_168(iParam0, 12, 3))
			{
				func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_168(iParam0, 14, 82))
			{
				func_375(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_168(iParam0, 8, 76))
			{
				func_375(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_168(iParam0, 12, 1))
			{
				func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_168(iParam0, 12, 12))
			{
				func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_168(iParam0, 12, 15))
			{
				func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_168(iParam0, 3, 71))
				{
					func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_168(iParam0, 12, 17))
			{
				if (!func_100(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_168(iParam0, 12, 18))
			{
				if (!func_100(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_168(iParam0, 12, 19))
			{
				if (!func_100(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_168(iParam0, 12, 7))
			{
				func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_168(iParam0, 12, 6))
			{
				func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_168(iParam0, 14, 88))
			{
				func_375(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_168(iParam0, 8, 17))
			{
				func_375(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_168(iParam0, 12, 11))
			{
				func_375(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_100(int iParam0, int iParam1, int iParam2)//Position - 0x9140
{
	Global_78130[1 /*14*/] = { func_101(iParam0, iParam1, iParam2, -1) };
	return BitTest(Global_78130[1 /*14*/].f_6, 1);
}

struct<14> func_101(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9168
{
	__LIB_0__::func_41();
	if (iParam0 == joaat("Player_Zero"))
	{
		__LIB_32__::func_569(iParam1, iParam2);
	}
	else if (iParam0 == joaat("Player_One"))
	{
		__LIB_32__::func_568(iParam1, iParam2);
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		func_102(iParam1, iParam2);
	}
	return Global_78130[0 /*14*/];
}

void func_102(int iParam0, int iParam1)//Position - 0x91BA
{
	switch (iParam0)
	{
		case 0:
			__LIB_20__::func_202(iParam1);
			break;
		case 2:
			__LIB_20__::func_201(iParam1);
			break;
		case 3:
			__LIB_12__::func_265(iParam1);
			break;
		case 4:
			__LIB_12__::func_264(iParam1);
			break;
		case 6:
			__LIB_12__::func_263(iParam1);
			break;
		case 5:
			__LIB_20__::func_196(iParam1);
			break;
		case 8:
			__LIB_20__::func_195(iParam1);
			break;
		case 9:
			__LIB_20__::func_194(iParam1);
			break;
		case 10:
			__LIB_20__::func_193(iParam1);
			break;
		case 1:
			__LIB_20__::func_192(iParam1);
			break;
		case 7:
			__LIB_20__::func_191(iParam1);
			break;
		case 11:
			__LIB_20__::func_190(iParam1);
			break;
		case 12:
			__LIB_20__::func_189(iParam1);
			break;
		case 13:
			__LIB_20__::func_188(iParam1);
			break;
		case 14:
			__LIB_20__::func_321(iParam1);
			break;
	}
}

int func_168(int iParam0, int iParam1, int iParam2)//Position - 0x20107
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
	Global_78130[1 /*14*/] = { func_101(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_18__::func_180(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_168(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_168(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { func_101(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_168(iParam0, 14, iVar4))
										{
											if (!__LIB_24__::func_955(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__::func_795(iParam0, iVar2);
						Global_78130[2 /*14*/] = { func_101(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_24__::func_955(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
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
		uVar8 = { __LIB_18__::func_247(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_168(iParam0, 14, uVar8[iVar7]))
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

void func_190(int iParam0, int iParam1)//Position - 0x24786
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_20__::func_509(iParam0);
		if (__LIB_0__::func_317(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_374(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_10__::func_1(iVar0);
					func_192(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_26__::func_544(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_32__::func_797();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
				{
					Global_113386.f_2363.f_539[iVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_352(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__::func_795(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__::func_795(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					if (iVar0 == 0)
					{
						if (Global_113386.f_9085.f_99.f_58[121])
						{
							Global_113386.f_9085.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

void func_192(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x24A01
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<5> Var12;
	if (!PED::IS_PED_INJURED(iParam0) || iParam5)
	{
		iVar0 = __LIB_20__::func_509(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
				{
					if (uParam1->f_39[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (__LIB_0__::func_317(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_372(iParam0, iVar1, &iVar2, 0))
			{
				func_375(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_370(iParam0, iVar1, &iVar2))
			{
				func_375(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_367(iParam0);
			__LIB_0__::func_427(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_0__::func_427(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__::func_350(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_18__::func_181(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_18__::func_186(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_198(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_198(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__::func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_198(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_18__::func_181(iVar9);
			}
			else
			{
				iVar9 = __LIB_18__::func_186(iVar9);
			}
			__LIB_0__::func_427(753, iVar9, Global_78127, 1, 0);
			__LIB_0__::func_427(2053, iVar9, Global_78127, 1, 0);
			__LIB_6__::func_796(161, 1, -1, 1);
		}
		if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
		{
			iVar10 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar11 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 1, PED::GET_PED_PROP_INDEX(iParam0, 1), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 1));
			if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0") || iVar10 == joaat("DLC_MP_ARENA_F_BERD_13_0"))
			{
				if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("ARENA_DRAW_0"), 1))
				{
					FILES::INIT_SHOP_PED_PROP(&Var12);
					if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0"))
					{
						FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_M_PEYES_0_0"), &Var12);
					}
					else
					{
						FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_F_PEYES_0_0"), &Var12);
					}
					PED::SET_PED_PROP_INDEX(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("ARENA_DRAW_0"), 1))
			{
				PED::CLEAR_PED_PROP(iParam0, 1);
			}
		}
	}
}

int func_198(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x2519D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	int iVar17;
	var uVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	float fVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	var uVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	var uVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1574990 != 4 && Global_1574990 != 5) && Global_1574990 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_78127;
	}
	Global_78128++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = -1;
	iVar11 = -1;
	if (iParam5 == 0)
	{
		Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_78128 > 1)
		{
		}
		else
		{
			func_325(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar12 = Global_2883588;
		uVar13 = Global_2883589;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar14 = 15;
		if (iParam5 == 1)
		{
			uVar14 = { Global_78173 };
		}
		else
		{
			uVar14 = { __LIB_18__::func_180(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_78130[1 /*14*/].f_6, 1))
					{
						func_325(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iVar0, uVar14[iVar0], -1) };
					if (BitTest(Global_78130[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar15 = 9;
							if (iParam5 == 1)
							{
								uVar15 = { Global_78190 };
							}
							else
							{
								uVar15 = { __LIB_18__::func_247(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_325(iVar5, iVar0, uVar14[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_198(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_325(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iVar0, func_322(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__::func_180(iVar5, 0) };
					func_198(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__::func_468();
			if (iVar17 != -1)
			{
				__LIB_25__::func_43(iVar17, 0, iParam10);
			}
			func_316(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__::func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_325(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_40__::func_849(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_198(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_325(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_198(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_307(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_198(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_198(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar19 = __LIB_0__::func_33(iParam1);
		if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar19) != Global_78130[1 /*14*/].f_3 || PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar19) != Global_78130[1 /*14*/].f_4)
		{
			iVar20 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
			iVar21 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 7, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 7), PED::GET_PED_TEXTURE_VARIATION(iParam0, 7));
			if (((iParam1 == 11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_JBIB"), 0)) || (iParam1 == 8 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_SPECIAL"), 0))) || (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_LEGS"), 0)))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 7));
			}
			if ((iParam1 == 11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("REMOVE_WITH_JBIB"), 0)) || (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("REMOVE_WITH_LEGS"), 0)))
			{
				if (iVar5 == joaat("MP_M_Freemode_01"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 15, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
				else if (iVar5 == joaat("MP_F_Freemode_01"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 2, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar22 = -1;
				if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("CREW_COL"), 11))
				{
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 0);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 1);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 2);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 3);
				}
				iVar23 = __LIB_6__::func_795(iParam0, 11);
				iVar24 = __LIB_6__::func_795(iParam0, 8);
				iVar25 = __LIB_6__::func_795(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_6__::func_795(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_306(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_40__::func_849(iParam0, iVar5, 11, iVar23, 3, 0);
					}
					switch (iVar26)
					{
						case joaat("DLC_MP_VAL_F_UPPR0_0"):
						case joaat("DLC_MP_VAL_F_UPPR0_1"):
						case joaat("DLC_MP_VAL_F_UPPR0_2"):
						case joaat("DLC_MP_VAL_F_UPPR0_3"):
						case joaat("DLC_MP_VAL_F_UPPR0_4"):
						case joaat("DLC_MP_VAL_F_UPPR0_5"):
							iVar27 = 11;
							iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
							if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("DRESS"), 0))
							{
								iVar27 = -99;
							}
							break;
					}
					if (iVar27 != -99)
					{
						iVar28 = 0;
						while (iVar28 < 18)
						{
							if (__LIB_0__::func_254(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_6__::func_795(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_198(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_6__::func_808(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_6__::func_808(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_37__::func_821(iParam0, iParam2);
							iVar31 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_198(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_198(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_6__::func_809(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_198(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__::func_821(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_6__::func_807(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__::func_252(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_420(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_420(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__::func_806(iVar5, __LIB_6__::func_795(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__::func_806(iVar5, __LIB_6__::func_795(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_198(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_198(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_198(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_31__::func_927(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_316(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_306(iVar5, func_322(iParam0, 8, -1), iParam2, func_322(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__::func_534(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__::func_534(2160, iParam10, 0);
				}
				PED::SET_PED_HAIR_TINT(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar42 = -99;
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar42 = __LIB_18__::func_181(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_18__::func_186(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_241(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__::func_795(iParam0, 11);
				iVar45 = __LIB_6__::func_795(iParam0, 4);
				iVar46 = func_306(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_40__::func_849(iParam0, iVar5, 11, iVar44, 3, 0);
				}
				switch (iVar43)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar46 = 11;
						iVar47 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar47, joaat("DRESS"), 0))
						{
							iVar46 = -99;
						}
						break;
				}
				if (iVar46 != -99)
				{
					iVar48 = 0;
					while (iVar48 < 18)
					{
						if (__LIB_0__::func_254(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_316(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__::func_795(iParam0, 11);
			if (__LIB_6__::func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__::func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__::func_927(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_306(iVar5, iParam2, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_6__::func_795(iParam0, 7);
				if (!__LIB_24__::func_966(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_0__::func_534(2100, iParam10, 0);
				iVar53 = __LIB_0__::func_534(2101, iParam10, 0);
				iVar54 = __LIB_0__::func_534(2102, iParam10, 0);
				fVar55 = __LIB_0__::func_424(135, iParam10);
				if (iVar5 == joaat("MP_M_Freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
				}
				else if (iVar5 == joaat("MP_F_Freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
				}
				iVar56 = 0;
				while (iVar56 < 20)
				{
					PED::SET_PED_MICRO_MORPH(iParam0, iVar56, 0f);
					iVar56++;
				}
			}
			else
			{
				__LIB_31__::func_910(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_6__::func_795(iParam0, 11);
			iVar58 = __LIB_6__::func_795(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_198(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_198(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_306(iVar5, __LIB_6__::func_795(iParam0, 8), __LIB_6__::func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_306(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_40__::func_849(iParam0, iVar5, 11, iVar57, 3, 0);
				}
				switch (iVar59)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar60 = 11;
						iVar61 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar61, joaat("DRESS"), 0))
						{
							iVar60 = -99;
						}
						break;
				}
				if (iVar60 != -99)
				{
					iVar62 = 0;
					while (iVar62 < 18)
					{
						if (__LIB_0__::func_254(iVar5, iVar60, iVar62) == iVar59)
						{
							iVar10 = iVar62;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar62++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_198(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2883588)
							{
								case joaat("DLC_MP_VAL_F_UPPR0_0"):
								case joaat("DLC_MP_VAL_F_UPPR0_1"):
								case joaat("DLC_MP_VAL_F_UPPR0_2"):
								case joaat("DLC_MP_VAL_F_UPPR0_3"):
								case joaat("DLC_MP_VAL_F_UPPR0_4"):
								case joaat("DLC_MP_VAL_F_UPPR0_5"):
									iVar10 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_306(iVar5, iVar3, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_198(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__::func_223(iParam0))
				{
					iVar63 = __LIB_6__::func_803(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_218(iParam0, 9, iVar63))
						{
							func_198(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_198(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_198(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__::func_534(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_18__::func_183(iParam0, iVar64), __LIB_0__::func_217(iParam0, iVar64), __LIB_0__::func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_18__::func_183(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__::func_217(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_6__::func_782(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_198(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_322(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_322(iParam0, 11, -1);
				}
				if (__LIB_6__::func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__::func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__::func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_198(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__::func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__::func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_198(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar68 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 6);
				iVar69 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 6);
				iVar70 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 6, iVar68, iVar69);
				iVar71 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
				iVar72 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
				iVar73 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar71, iVar72);
				iVar74 = __LIB_6__::func_795(iParam0, 4);
				iVar75 = __LIB_6__::func_795(iParam0, 6);
				if (__LIB_0__::func_215(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__::func_798(iVar5, iVar74, iVar70))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_198(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_198(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__::func_797(iVar5, iVar75, iVar73))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_198(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_198(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__::func_215(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__::func_797(iVar5, iVar75, iVar73))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_198(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_198(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__::func_798(iVar5, iVar74, iVar70))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_198(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_198(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_307(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_198(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_198(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_199(iParam0, &uVar4))
		{
			func_198(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_198(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_198(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_198(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_254(iVar5, func_322(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_6__::func_758(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_6__::func_758(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_198(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_199(int iParam0, var uParam1)//Position - 0x27047
{
	int iVar0;
	int iVar1;
	*uParam1 = func_322(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_0__::func_534(754, Global_78127, 0) != -99 && __LIB_6__::func_781())
	{
		if (__LIB_0__::func_214() == 4)
		{
			return 1;
		}
		if (__LIB_0__::func_534(754, Global_78127, 0) == 0 && __LIB_0__::func_534(755, Global_78127, 0) == 0)
		{
			if (__LIB_0__::func_421(161, Global_78127))
			{
				if (__LIB_0__::func_534(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_0__::func_534(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_0__::func_534(754, Global_78127, 0);
		iVar1 = __LIB_0__::func_534(755, Global_78127, 0);
		if (!func_218(iParam0, iVar1, iVar0))
		{
			if (__LIB_0__::func_421(161, Global_78127))
			{
				*uParam1 = __LIB_0__::func_534(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_0__::func_534(753, Global_78127, 0);
			}
			__LIB_0__::func_427(754, -99, Global_78127, 1, 0);
			__LIB_0__::func_427(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_218(int iParam0, int iParam1, int iParam2)//Position - 0x2B303
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	struct<5> Var17;
	var uVar18;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_18__::func_180(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				case 1:
					iVar4 = 4;
					break;
				case 2:
					iVar4 = 6;
					break;
				case 3:
					iVar4 = 7;
					break;
				case 4:
					iVar4 = 8;
					break;
				case 5:
					iVar4 = 11;
					break;
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_218(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_18__::func_247(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_218(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_544(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_218(iParam0, 14, iVar6))
										{
											if (!__LIB_24__::func_955(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
											{
												Global_2883588 = uVar2;
												Global_2883589 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = __LIB_6__::func_795(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_35__::func_544(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_24__::func_955(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
						{
							Global_2883588 = uVar2;
							Global_2883589 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != joaat("0")) && uVar8.f_16)
		{
			if (__LIB_0__::func_534(1759, Global_78127, 0) != uVar8[10])
			{
				Global_2883588 = uVar2;
				Global_2883589 = uVar3;
				return 0;
			}
		}
		Global_2883588 = uVar2;
		Global_2883589 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { __LIB_18__::func_247(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_218(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_4 || Global_78130[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_78130[1 /*14*/].f_12 == 0 && BitTest(Global_78130[1 /*14*/].f_6, 6)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HELMET"), 1)) && FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588) > 0)
		{
			iVar16 = FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588);
			iVar12 = 0;
			while (iVar12 < iVar16)
			{
				FILES::GET_VARIANT_PROP(Global_2883588, iVar12, &iVar13, &uVar14, &uVar15);
				if (iVar13 != 0 && iVar13 != joaat("0"))
				{
					FILES::INIT_SHOP_PED_PROP(&Var17);
					FILES::GET_SHOP_PED_PROP(iVar13, &Var17);
					if (Var17.f_3 == PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) && Var17.f_4 == PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78129++;
			if (Global_78129 == 1)
			{
				if (__LIB_6__::func_802(iVar0, 11, __LIB_6__::func_795(iParam0, 11), -1))
				{
					if (__LIB_6__::func_800(iVar0, 4, iParam2, &uVar18))
					{
						return func_218(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__::func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_218(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_241(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3201B
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_31__::func_926(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__::func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_25__::func_43(iVar1, 1, iParam2);
	}
	func_242(iParam0, bParam3, 0, -1);
}

void func_242(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x32068
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<8> Var9;
	int iVar10;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_78127;
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar2 = __LIB_0__::func_250(iParam0);
		bVar3 = func_286(iParam0, 0);
		bVar4 = __LIB_31__::func_887(iParam0);
		bVar5 = func_277(iParam0, iParam3);
		if (bParam1)
		{
			bVar4 = true;
		}
		if (bParam2)
		{
			bVar4 = false;
		}
		iVar6 = 0;
		while (iVar6 < 127)
		{
			if (__LIB_18__::func_432(iVar6, iVar0))
			{
				if (__LIB_6__::func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__::func_69(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__::func_432(123, iVar0))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar8 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar2);
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar2, iVar7, &Var9))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var9.f_0))
				{
					iVar10 = (129 + iVar7);
					if (__LIB_18__::func_432(iVar10, iVar0))
					{
						if (__LIB_25__::func_69(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__::func_925(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__::func_235(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_277(int iParam0, int iParam1)//Position - 0x412A7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar2 = __LIB_0__::func_534(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_322(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (iVar2)
						{
							case joaat("MP_Elite_M_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_M"):
							case joaat("MP_Heist4_Tee_039_M"):
							case joaat("MP_Heist4_Tee_041_M"):
							case joaat("MP_Heist4_Tee_043_M"):
							case joaat("MP_Heist4_Tee_049_M"):
							case joaat("MP_Heist4_Tee_051_M"):
							case joaat("MP_Heist4_Tee_055_M"):
							case joaat("MP_Heist4_Tee_057_M"):
							case joaat("MP_Heist4_Tee_059_M"):
							case joaat("MP_Heist4_Tee_061_M"):
							case joaat("MP_Heist4_Tee_063_M"):
							case joaat("MP_Heist4_Tee_065_M"):
							case joaat("MP_Tuner_Tee_000_M"):
							case joaat("MP_Tuner_Tee_002_M"):
							case joaat("MP_Tuner_Tee_003_M"):
							case joaat("MP_Tuner_Tee_005_M"):
							case joaat("MP_Tuner_Tee_006_M"):
							case joaat("MP_Tuner_Tee_008_M"):
							case joaat("MP_Tuner_Tee_010_M"):
								return 1;
								break;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			iVar2 = __LIB_0__::func_534(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 == 3)
			{
				if (iVar1 == 14)
				{
					return 1;
				}
			}
			else if (iVar0 > 15)
			{
				iVar5 = func_322(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (iVar2)
						{
							case joaat("MP_Elite_F_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_F"):
							case joaat("MP_Heist4_Tee_039_F"):
							case joaat("MP_Heist4_Tee_041_F"):
							case joaat("MP_Heist4_Tee_043_F"):
							case joaat("MP_Heist4_Tee_049_F"):
							case joaat("MP_Heist4_Tee_051_F"):
							case joaat("MP_Heist4_Tee_055_F"):
							case joaat("MP_Heist4_Tee_057_F"):
							case joaat("MP_Heist4_Tee_059_F"):
							case joaat("MP_Heist4_Tee_061_F"):
							case joaat("MP_Heist4_Tee_063_F"):
							case joaat("MP_Heist4_Tee_065_F"):
							case joaat("MP_Tuner_Tee_000_F"):
							case joaat("MP_Tuner_Tee_002_F"):
							case joaat("MP_Tuner_Tee_003_F"):
							case joaat("MP_Tuner_Tee_005_F"):
							case joaat("MP_Tuner_Tee_006_F"):
							case joaat("MP_Tuner_Tee_008_F"):
							case joaat("MP_Tuner_Tee_010_F"):
								return 1;
								break;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
	}
	return 0;
}

int func_286(int iParam0, bool bParam1)//Position - 0x41705
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
	int iVar11;
	int iVar12;
	int iVar13;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
							return 1;
							break;
						case 1:
						case 7:
						case 12:
							iVar2 = __LIB_18__::func_431(joaat("MP_M_Freemode_01"), 11, func_322(iParam0, 11, -1), 0);
							if (((iVar1 == 1 && iVar2 == 88) || (iVar1 == 7 && iVar2 == 89)) || (iVar1 == 12 && iVar2 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				case 5:
					if (!bParam1)
					{
						if (__LIB_18__::func_432(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(72, -1))
						{
						}
						else if (__LIB_18__::func_185(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_322(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
							if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_12"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar5 = func_322(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
							if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("COMBAT_TOP"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar7 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_322(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar7 == 88) || (iVar1 == 4 && iVar7 == 89)) || (iVar1 == 9 && iVar7 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				case 3:
					switch (iVar1)
					{
						case 14:
							return 1;
							break;
					}
					break;
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_322(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
							if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HEIST_DRAW_13"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar10 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_322(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar10 == 88) || (iVar1 == 4 && iVar10 == 89)) || (iVar1 == 9 && iVar10 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar11 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_322(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar11 == 88) || (iVar1 == 4 && iVar11 == 89)) || (iVar1 == 9 && iVar11 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar12 = func_322(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
							if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("COMBAT_TOP"), 0))
							{
								return 1;
							}
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_306(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4A594
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
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	iVar0 = -99;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			if (iParam2 >= 237)
			{
				iVar2 = __LIB_0__::func_420(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__::func_252(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__::func_420(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__::func_252(iVar4);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				iVar0 = 14;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_PYJAMAS"), 0))
			{
				iVar0 = 6;
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
			{
				iVar0 = 1;
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_2"), 0))
			{
				iVar0 = 4;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
			{
				if (iParam1 == 240)
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_306(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 0;
					}
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 12;
			}
			else if (((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_15"), 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_24"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 4;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_7"), 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar3 == 12)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 11;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_9"), 0))
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_JACKET"), 0))
			{
				iVar0 = 12;
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_6"), 0))
			{
				iVar0 = 2;
			}
			else if (((iParam2 >= 0 && iParam2 <= 31) || iVar1 == 0) || iVar1 == 1)
			{
				iVar0 = 0;
			}
			else if ((((((((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 96 && iParam2 <= 107)) || (iParam2 >= 108 && iParam2 <= 123)) || (iParam2 >= 156 && iParam2 <= 171)) || iVar1 == 3) || iVar1 == 4) || iVar1 == 6) || iVar1 == 7) || iVar1 == 10)
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240 || iVar3 == 15)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 160 && iParam1 <= 175) || iVar3 == 10)
				{
					iVar0 = 4;
				}
				else if ((iParam1 >= 176 && iParam1 <= 191) || iVar3 == 11)
				{
					iVar0 = 12;
				}
				else if ((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 224 && iParam1 <= 239)) || iVar3 == 1) || iVar3 == 14)
				{
					iVar0 = 1;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 32 && iParam1 <= 47) || iVar3 == 2)
				{
					iVar0 = 4;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SHIRT_BRACES"), 0))
				{
					if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("CLOSED_COLLAR"), 0))
					{
						iVar0 = 4;
					}
					else
					{
						iVar0 = 1;
					}
				}
				else if ((iParam1 >= 144 && iParam1 <= 159) || iVar3 == 9)
				{
					iVar0 = 1;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0))
				{
					iVar0 = 4;
				}
				else if (iParam1 >= 241)
				{
					if (iVar4 != -1)
					{
						iVar5 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar4);
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar6, &iVar7, &iVar8, &iVar9);
							if (iVar9 == 3)
							{
								if (iVar7 != 0 && iVar7 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam0, iVar7, 3, 3);
								}
								else
								{
									iVar0 = iVar8;
								}
								iVar6 = iVar5 + 1;
							}
							iVar6++;
						}
					}
				}
			}
			else if ((iParam2 >= 172 && iParam2 <= 187) || iVar1 == 11)
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SWEAT_VEST"), 0))
				{
					iVar0 = 6;
				}
				else if ((((iParam1 >= 48 && iParam1 <= 63) || (iParam1 >= 112 && iParam1 <= 127)) || iVar3 == 3) || iVar3 == 7)
				{
					iVar0 = 11;
				}
				else if ((iParam1 >= 96 && iParam1 <= 111) || iVar3 == 6)
				{
					iVar0 = 11;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LONG_SLEEVE"), 0))
				{
					iVar0 = 12;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			else if ((iParam2 >= 140 && iParam2 <= 155) || iVar1 == 9)
			{
				iVar0 = 0;
			}
			else if (iParam2 == 236)
			{
				if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			break;
		case joaat("MP_F_Freemode_01"):
			if (iParam2 >= 256)
			{
				iVar2 = __LIB_0__::func_420(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__::func_252(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__::func_420(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__::func_252(iVar4);
				switch (iVar4)
				{
					case joaat("DLC_MP_BEACH_F_ACCS2_0"):
					case joaat("DLC_MP_BEACH_F_ACCS2_1"):
					case joaat("DLC_MP_BEACH_F_ACCS2_2"):
					case joaat("DLC_MP_BEACH_F_ACCS2_3"):
					case joaat("DLC_MP_BEACH_F_ACCS2_4"):
					case joaat("DLC_MP_BEACH_F_ACCS2_5"):
					case joaat("DLC_MP_BEACH_F_ACCS2_6"):
					case joaat("DLC_MP_BEACH_F_ACCS2_7"):
					case joaat("DLC_MP_BEACH_F_ACCS2_8"):
					case joaat("DLC_MP_BEACH_F_ACCS2_9"):
					case joaat("DLC_MP_BEACH_F_ACCS2_10"):
					case joaat("DLC_MP_BEACH_F_ACCS2_11"):
						iVar3 = 15;
						break;
					case joaat("DLC_MP_VAL_F_ACCS2_0"):
					case joaat("DLC_MP_VAL_F_ACCS2_1"):
					case joaat("DLC_MP_VAL_F_ACCS2_2"):
					case joaat("DLC_MP_VAL_F_ACCS2_3"):
					case joaat("DLC_MP_VAL_F_ACCS2_4"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_0"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_1"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_2"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_3"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_4"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_5"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_6"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_7"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_8"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_9"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_10"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_11"):
						iVar3 = 13;
						break;
					}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				iVar0 = 0;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
			{
				if ((((((((((((((((((((((((((((iParam1 >= 34 && iParam1 <= 49) || (iParam1 >= 50 && iParam1 <= 65)) || (iParam1 >= 71 && iParam1 <= 86)) || (iParam1 >= 87 && iParam1 <= 102)) || (iParam1 >= 103 && iParam1 <= 118)) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 4) || iVar3 == 5) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 15) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_0")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_1")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_2")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_3")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_4")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_5")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_6")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0))
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_306(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 14;
					}
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("OPEN_SHORT"), 0))
			{
				if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_5"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0)))
				{
					iVar0 = 9;
				}
				else
				{
					iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_6__::func_808(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LONG_SLEEVE"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_0"), 0))
			{
				iVar0 = 7;
			}
			else if ((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_2"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0)))
			{
				iVar0 = 3;
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW_DRAW_1"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = 15;
				}
			}
			else if ((((((((((((((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_0"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_6"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_7"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_8"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0)))
			{
				if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 96 && iParam2 <= 111)) || (iParam2 >= 128 && iParam2 <= 143)) || iVar1 == 1) || iVar1 == 6) || iVar1 == 8)
				{
					iVar0 = 1;
				}
				else if (((((((((((((((((((((((((((iParam2 >= 112 && iParam2 <= 127) || (iParam2 >= 160 && iParam2 <= 175)) || iVar1 == 7) || iVar1 == 10) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TAILS_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_33"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0))
				{
					iVar0 = 3;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_7"), 0))
				{
					iVar0 = 9;
				}
			}
			else if ((((((((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_0"), 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_33"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0)))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0))
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else if ((iParam2 >= 16 && iParam2 <= 31) || iVar1 == 1)
			{
				if ((((iParam1 >= 50 && iParam1 <= 65) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 5) || iVar3 == 15)
				{
					iVar0 = 5;
				}
				else if (iParam1 >= 136)
				{
					if (iVar4 != -1)
					{
						iVar10 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar4);
						iVar11 = 0;
						while (iVar11 < iVar10)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar11, &iVar12, &iVar13, &iVar14);
							if (iVar14 == 3)
							{
								if (iVar12 != 0 && iVar12 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam0, iVar12, 3, 4);
								}
								else
								{
									iVar0 = iVar13;
								}
								iVar11 = iVar10 + 1;
							}
							iVar11++;
						}
					}
				}
			}
			else if (((iParam2 >= 112 && iParam2 <= 127) || iVar1 == 7) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 6;
				}
			}
			break;
	}
	return iVar0;
}

void func_307(int iParam0)//Position - 0x4B8CF
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
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	struct<5> Var15;
	int* iVar16;
	int iVar17;
	struct<5> Var18;
	int* iVar19;
	int iVar20;
	struct<5> Var21;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
	iVar3 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	iVar4 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
	iVar5 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
	iVar6 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
	iVar7 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10);
	iVar8 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 10);
	iVar9 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, iVar2);
	iVar10 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar3, iVar4);
	iVar11 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar5, iVar6);
	iVar12 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	iVar13 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 10, iVar7, iVar8);
	bVar14 = false;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOODED_JACKET"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOOD_UP"), 0))
	{
		if (!func_312(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_0__::func_258(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_257(iVar13, 11, -1))
				{
					if (__LIB_0__::func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_256(iVar13, 10, &iVar17, -1))
					{
						if (__LIB_0__::func_257(iVar17, 11, Var15.f_1))
						{
							FILES::GET_SHOP_PED_COMPONENT(iVar17, &Var18);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var18.f_3, Var18.f_4, 0);
						}
					}
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_16"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_19"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("GORKA_SUIT"), 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_M_DECL_10_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_2"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_0_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_0_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_3"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_16"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_19"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("GORKA_SUIT"), 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_F_DECL_10_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_7"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_1_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_1_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_8"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_2_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_2_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOODED_JACKET"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOOD_DOWN"), 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("FAKE_HAT"), 1))
		{
			if (__LIB_0__::func_258(iVar9, 1, 0, &iVar19))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar19, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_257(iVar13, 11, -1))
				{
					if (__LIB_0__::func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_256(iVar13, 10, &iVar20, -1))
					{
						if (__LIB_0__::func_257(iVar20, 11, Var15.f_1))
						{
							FILES::GET_SHOP_PED_COMPONENT(iVar20, &Var21);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var21.f_3, Var21.f_4, 0);
						}
					}
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_16"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_19"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("GORKA_SUIT"), 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_M_DECL_10_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_2"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_0_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_0_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_3"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_16"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_19"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("GORKA_SUIT"), 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_F_DECL_10_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_7"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_1_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_1_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_8"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_2_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_2_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("HAZ_HOOD"), 0) || __LIB_0__::func_255(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_312(iParam0, &bVar14, iVar9, iVar10, iVar12))
		{
			if (bVar14)
			{
				if (iVar0 == joaat("MP_M_Freemode_01"))
				{
					iVar5 = 15;
					iVar6 = 0;
				}
				else
				{
					iVar5 = 14;
					iVar6 = 0;
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_6_0"), &Var15);
				iVar5 = Var15.f_3;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_10_0"), &Var15);
				iVar5 = Var15.f_3;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_7_0"), &Var15);
			iVar5 = Var15.f_3;
		}
		else
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_11_0"), &Var15);
			iVar5 = Var15.f_3;
		}
		if (iVar5 != PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8) || iVar6 != PED::GET_PED_TEXTURE_VARIATION(iParam0, 8))
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iVar5, iVar6, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
		}
	}
}

int func_312(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4C299
{
	int iVar0;
	*iParam1 = 0;
	if (iParam2 == -1)
	{
		iParam2 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	}
	if (iParam3 == -1)
	{
		iParam3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
	}
	if (iParam4 == -1)
	{
		iParam4 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HOODED_JACKET"), 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("FITTED_HOOD"), 0))
		{
			if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam4, joaat("HOOD_HAT"), 1) && PED::GET_PED_PROP_INDEX(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HOOD_COMPAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam4, joaat("HOOD_HAT"), 1))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("SKI_MASK"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("BIKER_MASK"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("BIKER_MASK"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("NIGHT_VISION"), 0))
			{
				return 0;
			}
		}
		else
		{
			if (PED::GET_PED_PROP_INDEX(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HOOD_COMPAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				return 0;
			}
		}
		return 1;
	}
	if (iVar0 == joaat("MP_M_Freemode_01"))
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HEIST_DRAW_14"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case joaat("DLC_MP_HEIST_M_BERD_21_0"):
			case joaat("DLC_MP_HEIST_M_BERD_21_1"):
			case joaat("DLC_MP_HEIST_M_BERD_21_2"):
			case joaat("DLC_MP_HEIST_M_BERD_21_3"):
			case joaat("DLC_MP_HEIST_M_BERD_21_4"):
			case joaat("DLC_MP_HEIST_M_BERD_21_5"):
			case joaat("DLC_MP_HEIST_M_BERD_21_6"):
			case joaat("DLC_MP_HEIST_M_BERD_21_7"):
			case joaat("DLC_MP_HEIST_M_BERD_21_8"):
			case joaat("DLC_MP_HEIST_M_BERD_14_0"):
			case joaat("DLC_MP_HEIST_M_BERD_14_1"):
			case joaat("DLC_MP_HEIST_M_BERD_14_2"):
			case joaat("DLC_MP_HEIST_M_BERD_14_3"):
			case joaat("DLC_MP_HEIST_M_BERD_14_4"):
			case joaat("DLC_MP_HEIST_M_BERD_14_5"):
			case joaat("DLC_MP_HEIST_M_BERD_14_6"):
			case joaat("DLC_MP_HEIST_M_BERD_14_7"):
			case joaat("DLC_MP_HEIST_M_BERD_14_8"):
			case joaat("DLC_MP_HEIST_M_BERD_14_9"):
			case joaat("DLC_MP_HEIST_M_BERD_14_10"):
			case joaat("DLC_MP_HEIST_M_BERD_14_11"):
			case joaat("DLC_MP_HEIST_M_BERD_14_12"):
			case joaat("DLC_MP_HEIST_M_BERD_14_13"):
			case joaat("DLC_MP_HEIST_M_BERD_14_14"):
			case joaat("DLC_MP_HEIST_M_BERD_14_15"):
			case joaat("DLC_MP_HEIST_M_BERD_14_16"):
			case joaat("DLC_MP_HEIST_M_BERD_14_17"):
			case joaat("DLC_MP_HEIST_M_BERD_14_18"):
			case joaat("DLC_MP_HEIST_M_BERD_14_19"):
			case joaat("DLC_MP_HEIST_M_BERD_14_20"):
			case joaat("DLC_MP_HEIST_M_BERD_14_21"):
			case joaat("DLC_MP_HEIST_M_BERD_14_22"):
			case joaat("DLC_MP_HEIST_M_BERD_14_23"):
			case joaat("DLC_MP_HEIST_M_BERD_14_24"):
			case joaat("DLC_MP_HEIST_M_BERD_14_25"):
			case joaat("DLC_MP_IND_M_BERD_4_0"):
			case joaat("DLC_MP_IND_M_BERD_4_1"):
			case joaat("DLC_MP_IND_M_BERD_3_0"):
			case joaat("DLC_MP_IND_M_BERD_3_1"):
				*iParam1 = 1;
				return 0;
				break;
		}
	}
	else
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HEIST_DRAW_15"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("SCRUFFY_BALACLAVA"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case joaat("DLC_MP_SMUG_F_BERD_8_0"):
			case joaat("DLC_MP_SMUG_F_BERD_8_1"):
			case joaat("DLC_MP_SMUG_F_BERD_8_2"):
			case joaat("DLC_MP_SMUG_F_BERD_8_3"):
			case joaat("DLC_MP_SMUG_F_BERD_8_4"):
			case joaat("DLC_MP_SMUG_F_BERD_8_5"):
			case joaat("DLC_MP_SMUG_F_BERD_8_6"):
			case joaat("DLC_MP_SMUG_F_BERD_8_7"):
			case joaat("DLC_MP_SMUG_F_BERD_8_8"):
			case joaat("DLC_MP_SMUG_F_BERD_8_9"):
			case joaat("DLC_MP_SMUG_F_BERD_8_10"):
			case joaat("DLC_MP_SMUG_F_BERD_8_11"):
			case joaat("DLC_MP_SMUG_F_BERD_8_12"):
			case joaat("DLC_MP_SMUG_F_BERD_8_13"):
			case joaat("DLC_MP_SMUG_F_BERD_8_14"):
			case joaat("DLC_MP_SMUG_F_BERD_8_15"):
			case joaat("DLC_MP_SMUG_F_BERD_8_16"):
			case joaat("DLC_MP_SMUG_F_BERD_8_17"):
			case joaat("DLC_MP_SMUG_F_BERD_8_18"):
			case joaat("DLC_MP_SMUG_F_BERD_8_19"):
			case joaat("DLC_MP_SMUG_F_BERD_8_20"):
			case joaat("DLC_MP_SMUG_F_BERD_8_21"):
			case joaat("DLC_MP_SMUG_F_BERD_8_22"):
			case joaat("DLC_MP_SMUG_F_BERD_8_23"):
			case joaat("DLC_MP_SMUG_F_BERD_8_24"):
			case joaat("DLC_MP_SMUG_F_BERD_8_25"):
			case joaat("DLC_MP_HEIST_F_BERD_23_0"):
			case joaat("DLC_MP_HEIST_F_BERD_23_1"):
			case joaat("DLC_MP_HEIST_F_BERD_23_2"):
			case joaat("DLC_MP_HEIST_F_BERD_23_3"):
			case joaat("DLC_MP_HEIST_F_BERD_23_4"):
			case joaat("DLC_MP_HEIST_F_BERD_23_5"):
			case joaat("DLC_MP_HEIST_F_BERD_23_6"):
			case joaat("DLC_MP_HEIST_F_BERD_23_7"):
			case joaat("DLC_MP_HEIST_F_BERD_23_8"):
			case joaat("DLC_MP_HEIST_F_BERD_23_9"):
			case joaat("DLC_MP_HEIST_F_BERD_22_0"):
			case joaat("DLC_MP_HEIST_F_BERD_22_1"):
			case joaat("DLC_MP_HEIST_F_BERD_22_2"):
			case joaat("DLC_MP_HEIST_F_BERD_22_3"):
			case joaat("DLC_MP_HEIST_F_BERD_22_4"):
			case joaat("DLC_MP_HEIST_F_BERD_22_5"):
			case joaat("DLC_MP_HEIST_F_BERD_22_6"):
			case joaat("DLC_MP_HEIST_F_BERD_22_7"):
			case joaat("DLC_MP_HEIST_F_BERD_22_8"):
			case joaat("DLC_MP_HEIST_F_BERD_22_9"):
			case joaat("DLC_MP_HEIST_F_BERD_22_10"):
			case joaat("DLC_MP_HEIST_F_BERD_22_11"):
			case joaat("DLC_MP_HEIST_F_BERD_22_12"):
			case joaat("DLC_MP_HEIST_F_BERD_22_13"):
			case joaat("DLC_MP_HEIST_F_BERD_22_14"):
			case joaat("DLC_MP_HEIST_F_BERD_22_15"):
			case joaat("DLC_MP_HEIST_F_BERD_22_16"):
			case joaat("DLC_MP_HEIST_F_BERD_22_17"):
			case joaat("DLC_MP_HEIST_F_BERD_22_18"):
			case joaat("DLC_MP_HEIST_F_BERD_22_19"):
			case joaat("DLC_MP_HEIST_F_BERD_22_20"):
			case joaat("DLC_MP_HEIST_F_BERD_22_21"):
			case joaat("DLC_MP_HEIST_F_BERD_21_0"):
			case joaat("DLC_MP_HEIST_F_BERD_21_1"):
			case joaat("DLC_MP_HEIST_F_BERD_21_2"):
			case joaat("DLC_MP_HEIST_F_BERD_21_3"):
			case joaat("DLC_MP_HEIST_F_BERD_21_4"):
			case joaat("DLC_MP_HEIST_F_BERD_21_5"):
			case joaat("DLC_MP_HEIST_F_BERD_21_6"):
			case joaat("DLC_MP_HEIST_F_BERD_21_7"):
			case joaat("DLC_MP_HEIST_F_BERD_21_8"):
			case joaat("DLC_MP_HEIST_F_BERD_20_0"):
			case joaat("DLC_MP_HEIST_F_BERD_20_1"):
			case joaat("DLC_MP_HEIST_F_BERD_19_0"):
			case joaat("DLC_MP_HEIST_F_BERD_19_1"):
			case joaat("DLC_MP_HEIST_F_BERD_19_2"):
			case joaat("DLC_MP_HEIST_F_BERD_19_3"):
			case joaat("DLC_MP_HEIST_F_BERD_19_4"):
			case joaat("DLC_MP_HEIST_F_BERD_19_5"):
			case joaat("DLC_MP_HEIST_F_BERD_19_6"):
			case joaat("DLC_MP_HEIST_F_BERD_19_7"):
			case joaat("DLC_MP_HEIST_F_BERD_19_8"):
			case joaat("DLC_MP_HEIST_F_BERD_19_9"):
			case joaat("DLC_MP_HEIST_F_BERD_19_10"):
			case joaat("DLC_MP_HEIST_F_BERD_18_0"):
			case joaat("DLC_MP_HEIST_F_BERD_18_1"):
			case joaat("DLC_MP_HEIST_F_BERD_18_2"):
			case joaat("DLC_MP_HEIST_F_BERD_18_3"):
			case joaat("DLC_MP_HEIST_F_BERD_18_4"):
			case joaat("DLC_MP_HEIST_F_BERD_18_5"):
			case joaat("DLC_MP_HEIST_F_BERD_18_6"):
			case joaat("DLC_MP_HEIST_F_BERD_18_7"):
			case joaat("DLC_MP_HEIST_F_BERD_18_8"):
			case joaat("DLC_MP_HEIST_F_BERD_17_0"):
			case joaat("DLC_MP_HEIST_F_BERD_17_1"):
			case joaat("DLC_MP_HEIST_F_BERD_17_2"):
			case joaat("DLC_MP_HEIST_F_BERD_17_3"):
			case joaat("DLC_MP_HEIST_F_BERD_17_4"):
			case joaat("DLC_MP_HEIST_F_BERD_17_5"):
			case joaat("DLC_MP_HEIST_F_BERD_17_6"):
			case joaat("DLC_MP_HEIST_F_BERD_17_7"):
			case joaat("DLC_MP_HEIST_F_BERD_17_8"):
			case joaat("DLC_MP_HEIST_F_BERD_17_9"):
			case joaat("DLC_MP_HEIST_F_BERD_17_10"):
			case joaat("DLC_MP_HEIST_F_BERD_14_0"):
			case joaat("DLC_MP_HEIST_F_BERD_14_1"):
			case joaat("DLC_MP_HEIST_F_BERD_14_2"):
			case joaat("DLC_MP_HEIST_F_BERD_14_3"):
			case joaat("DLC_MP_HEIST_F_BERD_14_4"):
			case joaat("DLC_MP_HEIST_F_BERD_14_5"):
			case joaat("DLC_MP_HEIST_F_BERD_14_6"):
			case joaat("DLC_MP_HEIST_F_BERD_14_7"):
			case joaat("DLC_MP_HEIST_F_BERD_14_8"):
			case joaat("DLC_MP_HEIST_F_BERD_14_9"):
			case joaat("DLC_MP_HEIST_F_BERD_14_10"):
			case joaat("DLC_MP_HEIST_F_BERD_14_11"):
			case joaat("DLC_MP_HEIST_F_BERD_14_12"):
			case joaat("DLC_MP_HEIST_F_BERD_14_13"):
			case joaat("DLC_MP_HEIST_F_BERD_14_14"):
			case joaat("DLC_MP_HEIST_F_BERD_14_15"):
			case joaat("DLC_MP_HEIST_F_BERD_14_16"):
			case joaat("DLC_MP_HEIST_F_BERD_14_17"):
			case joaat("DLC_MP_HEIST_F_BERD_14_18"):
			case joaat("DLC_MP_HEIST_F_BERD_14_19"):
			case joaat("DLC_MP_HEIST_F_BERD_14_20"):
			case joaat("DLC_MP_HEIST_F_BERD_14_21"):
			case joaat("DLC_MP_HEIST_F_BERD_14_22"):
			case joaat("DLC_MP_HEIST_F_BERD_14_23"):
			case joaat("DLC_MP_HEIST_F_BERD_14_24"):
			case joaat("DLC_MP_HEIST_F_BERD_14_25"):
			case joaat("DLC_MP_HEIST_F_BERD_13_0"):
			case joaat("DLC_MP_HEIST_F_BERD_13_1"):
			case joaat("DLC_MP_HEIST_F_BERD_13_2"):
			case joaat("DLC_MP_HEIST_F_BERD_13_3"):
			case joaat("DLC_MP_HEIST_F_BERD_12_0"):
			case joaat("DLC_MP_HEIST_F_BERD_12_1"):
			case joaat("DLC_MP_HEIST_F_BERD_12_2"):
			case joaat("DLC_MP_HEIST_F_BERD_12_3"):
			case joaat("DLC_MP_HEIST_F_BERD_7_0"):
			case joaat("DLC_MP_HEIST_F_BERD_7_1"):
			case joaat("DLC_MP_HEIST_F_BERD_5_0"):
			case joaat("DLC_MP_HEIST_F_BERD_5_1"):
			case joaat("DLC_MP_HEIST_F_BERD_4_0"):
			case joaat("DLC_MP_HEIST_F_BERD_4_1"):
			case joaat("DLC_MP_HEIST_F_BERD_0_0"):
			case joaat("DLC_MP_XMAS2_F_BERD_1_0"):
			case joaat("DLC_MP_LTS_F_BERD_0_0"):
			case joaat("DLC_MP_LTS_F_BERD_0_1"):
			case joaat("DLC_MP_LTS_F_BERD_0_2"):
			case joaat("DLC_MP_LTS_F_BERD_0_3"):
			case joaat("DLC_MP_LTS_F_BERD_0_4"):
			case joaat("DLC_MP_IND_F_BERD_4_0"):
			case joaat("DLC_MP_IND_F_BERD_4_1"):
			case joaat("DLC_MP_IND_F_BERD_3_0"):
			case joaat("DLC_MP_IND_F_BERD_3_1"):
				*iParam1 = 1;
				return 0;
				break;
			}
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_709(iVar0, 14, func_322(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_316(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4EC81
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_367(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_6__::func_808(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_6__::func_795(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_6__::func_795(iParam0, 11);
				if (!__LIB_6__::func_808(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_31__::func_926(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__::func_42(iVar0, iParam2, 13) && !__LIB_25__::func_42(iVar0, iParam2, 14)) && !__LIB_25__::func_42(iVar0, iParam2, 15)) && !__LIB_25__::func_42(iVar0, iParam2, 16)) && !__LIB_25__::func_42(iVar0, iParam2, 71)) && !__LIB_25__::func_42(iVar0, iParam2, 72))
				{
					__LIB_31__::func_926(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_18__::func_431(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__::func_467(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_25__::func_43(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_322(int iParam0, int iParam1, int iParam2)//Position - 0x4EF30
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
				if (func_218(iParam0, iParam1, iVar0))
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
				if (func_218(iParam0, iParam1, iVar1))
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
				return __LIB_6__::func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__::func_795(iParam0, iParam1);
		}
	}
	return -99;
}

void func_325(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4F0AF
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_78127 != __LIB_0__::func_5() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_35__::func_544(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__::func_238(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__::func_238(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__::func_238(Global_2883588, 2, 1, 1, -1);
			}
			if (bParam3)
			{
				iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Global_2883588);
				iVar5 = 0;
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (iVar5 < Global_4538446)
					{
						Global_4538446[iVar5] = -1;
						Global_4538457[iVar5] = -1;
					}
					FILES::GET_VARIANT_COMPONENT(Global_2883588, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar4 != 10 && iVar4 != 9)
					{
						if (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("STOCKINGS"), 0))
						{
						}
						else if (iVar2 != 0 && iVar2 != joaat("0"))
						{
							__LIB_7__::func_238(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_325(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
						}
					}
					iVar1++;
				}
				Global_4538445++;
				if (Global_4538445 < 2)
				{
					iVar1 = 0;
					while (iVar1 < iVar5)
					{
						if (iVar1 < Global_4538446)
						{
							if (Global_4538446[iVar1] != -1)
							{
								if (iParam0 == joaat("MP_M_Freemode_01"))
								{
									func_325(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_325(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
								}
							}
						}
						iVar1++;
					}
				}
				Global_4538445 = (Global_4538445 - 1);
			}
			return;
		}
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && !BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (__LIB_0__::func_36(iParam1, Global_78130[1 /*14*/].f_2, &iVar6))
			{
				iVar7 = __LIB_0__::func_534(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__::func_427(iVar6, iVar7, Global_78127, 1, 0);
			}
			if (bParam3 == 1)
			{
				if (iParam0 == joaat("MP_M_Freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar8 = (75 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
									break;
								}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == joaat("MP_F_Freemode_01"))
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__::func_544(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__::func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_325(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_325(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__::func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_325(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_367(int iParam0)//Position - 0x67D71
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_0__::func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_322(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_11"), 0))
					{
						return 1;
					}
					else if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_19"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_23"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_27"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_1"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						return 1;
					}
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_0__::func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_322(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
					{
						return 1;
					}
					else if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_22"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_23"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_26"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_28"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_6"), 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_370(int iParam0, int iParam1, int iParam2)//Position - 0x680E3
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_168(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_372(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x681AA
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_168(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_374(int iParam0, int iParam1, int iParam2)//Position - 0x6846A
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
				if (func_168(iParam0, iParam1, iVar0))
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
				if (func_168(iParam0, iParam1, iVar1))
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
				return __LIB_6__::func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__::func_795(iParam0, iParam1);
		}
	}
	return -99;
}

int func_375(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x6850B
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
		Global_78130[1 /*14*/] = { func_101(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_20__::func_322(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_6__::func_795(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_6__::func_795(iParam0, 9);
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
			iVar7 = __LIB_6__::func_788(iParam0, 1);
			if (!__LIB_6__::func_780(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_6__::func_788(iParam0, 0);
			if (!__LIB_6__::func_779(iVar10, 14, iVar8, -1) && !__LIB_6__::func_827(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_6__::func_788(iParam0, 2);
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
			uVar11 = { __LIB_18__::func_180(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { func_101(iVar10, iVar0, uVar11[iVar0], -1) };
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
							uVar12 = { __LIB_18__::func_247(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { func_101(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_20__::func_322(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_380(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_375(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
							__LIB_0__::func_211(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_20__::func_322(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_380(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_375(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { func_101(iVar10, iVar0, func_374(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_372(iParam0, iVar10, &iVar4, 1))
							{
								func_375(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_375(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { func_101(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_375(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_101(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_375(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_101(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_375(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_101(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_375(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_101(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_375(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_18__::func_247(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { func_101(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_20__::func_322(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_380(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_375(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_20__::func_322(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_380(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_375(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = func_380(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_375(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_376(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_372(iParam0, iVar10, &iVar4, 0))
		{
			func_375(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_370(iParam0, iVar10, &iVar4))
		{
			func_375(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

void func_376(int iParam0, int iParam1, int iParam2)//Position - 0x68D1B
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
	if (func_378(iParam0, 12, iVar0))
	{
		if (__LIB_0__::func_20(iParam0, iParam1, iParam2))
		{
			iVar1 = __LIB_0__::func_19(iParam0);
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

bool func_378(int iParam0, int iParam1, int iParam2)//Position - 0x68E83
{
	Global_78130[1 /*14*/] = { func_101(iParam0, iParam1, iParam2, -1) };
	return BitTest(Global_78130[1 /*14*/].f_6, 2);
}

int func_380(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x691B2
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
				iVar1 = __LIB_6__::func_795(iParam0, 1);
				iVar0 = __LIB_0__::func_24(iParam1, iParam3, iVar1);
				break;
			case 1:
				iVar2 = __LIB_6__::func_795(iParam0, 2);
				iVar0 = __LIB_0__::func_24(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		__LIB_0__::func_211(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		__LIB_0__::func_212(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (__LIB_0__::func_23(iParam1, iParam3, &iVar0))
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
									if (!__LIB_6__::func_829(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!__LIB_6__::func_829(iParam0, 3, 135, 150))
									{
										iVar0 = func_383(iParam1, 3, 135, 150);
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
									if (!__LIB_6__::func_829(iParam0, 3, 209, 222))
									{
										iVar0 = func_383(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!__LIB_6__::func_829(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_383(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_383(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_383(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_383(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!__LIB_6__::func_829(iParam0, 3, 176, 191) && !__LIB_6__::func_829(iParam0, 3, 227, 242))
									{
										iVar0 = func_383(iParam1, 3, 176, 191);
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
								iVar4 = __LIB_6__::func_795(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = __LIB_6__::func_795(iParam0, 11);
								iVar5 = func_382(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = __LIB_6__::func_795(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!__LIB_0__::func_22(joaat("Player_One"), iVar3, iVar5, iVar4, &iVar6))
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
								iVar7 = __LIB_6__::func_795(iParam0, 8);
								iVar8 = __LIB_6__::func_795(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_382(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_382(iParam1, iParam3, iVar8, 1);
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
								iVar9 = __LIB_6__::func_795(iParam0, 11);
								iVar0 = func_382(iParam1, -99, iVar9, 0);
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

int func_382(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6A049
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
				iParam2 = func_383(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_383(iParam0, 11, 25, 40);
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

int func_383(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6A310
{
	int iVar0;
	int iVar1;
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_378(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

void func_407(int iParam0)//Position - 0x6BB3B
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_20__::func_509(iParam0);
	if (__LIB_0__::func_317(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__::func_352(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_10__::func_1(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_352(iParam0);
				}
			}
		}
		func_192(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::func_365(49))
				{
					iVar1 = func_374(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_408(__LIB_19__::func_811(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::func_365(44))
				{
					iVar1 = func_374(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_374(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_408(__LIB_19__::func_811(0), 3, 70, 1, 0, 0, 0);
					func_408(__LIB_19__::func_811(0), 3, 71, 1, 0, 0, 0);
					func_408(__LIB_19__::func_811(0), 3, 72, 1, 0, 0, 0);
					func_408(__LIB_19__::func_811(0), 3, 73, 1, 0, 0, 0);
					func_408(__LIB_19__::func_811(0), 3, 74, 1, 0, 0, 0);
					func_408(__LIB_19__::func_811(0), 3, 75, 1, 0, 0, 0);
					func_408(__LIB_19__::func_811(0), 4, 41, 1, 0, 0, 0);
					func_408(__LIB_19__::func_811(0), 4, 42, 1, 0, 0, 0);
					func_408(__LIB_19__::func_811(0), 4, 43, 1, 0, 0, 0);
					func_408(__LIB_19__::func_811(0), 4, 44, 1, 0, 0, 0);
					func_408(__LIB_19__::func_811(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_374(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_10__::func_1(iVar0);
				func_192(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_408(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x6BD98
{
	func_412(iParam0, iParam1, iParam2, bParam3);
	func_411(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_364(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		func_409(iParam0, iParam1, iParam2, 0);
	}
}

int func_409(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6BDDD
{
	Global_78130[1 /*14*/] = { func_101(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 2, Global_78130[1 /*14*/].f_1, 0, 1);
		}
		else
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 2, Global_78130[1 /*14*/].f_1, 1, 0);
		}
		return 1;
	}
	return 0;
}

int func_411(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x6BF53
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { func_101(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
			if (iParam1 == 12)
			{
				iVar0 = 1;
				if (iParam0 == joaat("Player_Zero"))
				{
					if (iParam2 == 31)
					{
						iVar0 = 0;
					}
				}
				if (iVar0 == 1)
				{
					uVar3 = { __LIB_18__::func_180(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_411(iParam0, iVar1, uVar3[iVar1], 1, 1);
								func_412(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__::func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_411(iParam0, 14, uVar4[iVar2], 1, 1);
									func_412(iParam0, 14, uVar4[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
		}
		if (iParam4 == 1 && bParam3 == 1)
		{
			switch (iParam0)
			{
				case joaat("Player_Zero"):
					break;
				case joaat("Player_One"):
					switch (iParam1)
					{
						case 3:
							if (iParam2 >= 176 && iParam2 <= 191)
							{
								iVar5 = (227 + Global_78130[1 /*14*/].f_4);
								func_411(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_411(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_411(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_411(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_411(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_411(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_411(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_411(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_411(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_411(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_411(iParam0, 14, iVar5, 1, 0);
							}
							break;
					}
					break;
				case joaat("Player_Two"):
					switch (iParam1)
					{
						case 4:
							if (iParam2 >= 81 && iParam2 <= 90)
							{
								iVar5 = (94 + Global_78130[1 /*14*/].f_4);
								func_411(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_411(iParam0, 14, 17, 1, 0);
							}
							break;
					}
					break;
				}
		}
		return 1;
	}
	return 0;
}

int func_412(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6C336
{
	Global_78130[1 /*14*/] = { func_101(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 0, Global_78130[1 /*14*/].f_1, 1, 0);
		}
		else
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 0, Global_78130[1 /*14*/].f_1, 0, 1);
		}
		return 1;
	}
	return 0;
}

int func_415(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x6C539
{
	int iVar0;
	if (__LIB_0__::func_317(iParam1))
	{
		iVar0 = __LIB_19__::func_811(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
			{
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, true, true);
				__LIB_38__::func_950(*iParam0, iParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_407(*iParam0);
				__LIB_32__::func_730(*iParam0, 1, 0);
				__LIB_20__::func_721(*iParam0);
				__LIB_20__::func_720(*iParam0);
				func_99(*iParam0, bParam6);
				__LIB_0__::func_349(*iParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_420(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x6C76A
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_84 = 255;
	uParam2->f_85 = 255;
	uParam2->f_86 = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_99845[iParam0 /*98*/] };
			if (Global_100140[iParam0] != 2)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_100148[iParam0 /*3*/], -829.7478f, 192.11703f, 76.73248f, -827.13837f, 153.85951f, 59.961723f, 33.25f, false, true))
				{
					if (Global_100140[iParam0] == 1)
					{
						*uParam3 = { Global_100148[iParam0 /*3*/] - Global_113386.f_2363.f_539.f_2300[iParam0 /*3*/] };
						*uParam4 = (Global_100158[iParam0] - Global_113386.f_2363.f_539.f_2310[iParam0]);
						if (SYSTEM::VMAG2(*uParam3) > (5f * 5f))
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return 0;
						}
					}
				}
				*uParam3 = { Global_100148[iParam0 /*3*/] - Global_113386.f_2363.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_100158[iParam0] - Global_113386.f_2363.f_539.f_2310[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		case 6:
			*uParam2 = { Global_99845[iParam0 /*98*/] };
			if (Global_100140[iParam0] != 2)
			{
				*uParam3 = { Global_100148[iParam0 /*3*/] - Global_113386.f_2363.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_100158[iParam0] - Global_113386.f_2363.f_539.f_2310[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		case 7:
			*uParam2 = { Global_99845[iParam0 /*98*/] };
			if (Global_100140[iParam0] != 2)
			{
				*uParam3 = { Global_100148[iParam0 /*3*/] - Global_113386.f_2363.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_100158[iParam0] - Global_113386.f_2363.f_539.f_2310[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		case 11:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { 37.43f, -23.81f, 0f };
			*uParam4 = 127f;
			return 1;
			break;
		case 8:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(28.826f, -1277.56f, -90.961f) - Vector(28.3203f, -1324.1947f, -90.0089f) };
			*uParam4 = (1.27f - 194.1887f);
			return 1;
			break;
		case 9:
			return func_420(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 10:
			return func_420(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 13:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		case 14:
			__LIB_32__::func_881(iParam0, uParam2, 2);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		case 15:
			uParam2->f_97 = 0;
			*uParam2 = joaat("frogger");
			uParam2->f_5 = 34;
			uParam2->f_6 = 34;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 55:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.4985f, 782.1644f) - Vector(4.0205f, -2975.3408f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		case 56:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		case 57:
			uParam2->f_97 = 0;
			*uParam2 = joaat("penumbra");
			*uParam3 = { Vector(28.764f, -1431.464f, 66.028f) - Vector(28.2954f, -1351.5203f, 37.5988f) };
			*uParam4 = (141.28f - 90.0339f);
			return 1;
			break;
		case 12:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		case 16:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		case 17:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 18:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		case 19:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		case 20:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		case 23:
			return func_420(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 24:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		case 67:
			__LIB_32__::func_881(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 21.6401f, 38.5601f, 1.9708f };
			*uParam4 = -84f;
			return 1;
			break;
		case 58:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 59:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 60:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 22:
			uParam2->f_97 = 0;
			*uParam2 = joaat("phantom");
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		case 74:
			__LIB_32__::func_881(iParam0, uParam2, 1);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		case 38:
			__LIB_32__::func_881(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 41:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { -2.72f, 0.45f, 1f };
			*uParam4 = -137f;
			return 1;
			break;
		case 25:
			uParam2->f_97 = 0;
			*uParam2 = joaat("blista");
			*uParam3 = { Vector(29.17f, -1417.047f, 54.081f) - Vector(28.2915f, -1464.6798f, 72.2278f) };
			*uParam4 = (0.72f - 156.8827f);
			return 1;
			break;
		case 27:
			uParam2->f_97 = 0;
			*uParam2 = joaat("seminole");
			*uParam3 = { Vector(24.9f, -938.8f, 792.3f) - Vector(24.2312f, -906f, 763f) };
			*uParam4 = (2.23f - 7.2736f);
			return 1;
			break;
		case 26:
			uParam2->f_97 = 0;
			*uParam2 = joaat("peyote");
			*uParam3 = { Vector(28.701f, -1090.07f, 306.036f) - Vector(28.3684f, -1120.7855f, 257.9167f) };
			*uParam4 = (-1f - 97.2736f);
			return 1;
			break;
		case 40:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		case 28:
			uParam2->f_97 = 0;
			*uParam2 = joaat("polmav");
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		case 234:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		case 75:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 76:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 42:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.4985f, 782.1644f) - Vector(4.0205f, -2975.3408f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		case 43:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(5.4446f, -2912.043f, 659.5297f) - Vector(5.0589f, -2916.4788f, 709.0244f) };
			*uParam4 = (247.4806f - 355.326f);
			return 1;
			break;
		case 44:
			uParam2->f_97 = 0;
			*uParam2 = joaat("sadler");
			*uParam3 = { Vector(5.1176f, -2936.8425f, 656.9753f) - Vector(5.1337f, -2917.325f, 643.5248f) };
			*uParam4 = (253.776f - 334.1068f);
			return 1;
			break;
		case 45:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mixer");
			*uParam3 = { Vector(5.681f, -2769.795f, 593.033f) - Vector(5.0558f, -2819.0852f, 594.4415f) };
			*uParam4 = (2.62f - 299.0519f);
			return 1;
			break;
		case 47:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cavalcade");
			uParam2->f_5 = 0;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			StringCopy(&(uParam2->f_27), "22LJK483", 16);
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 49:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam5 = { -1.5f, 35f, 3f };
			*uParam6 = 15f;
			return 1;
			break;
		case 48:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 3.8721f, -5.9568f, 0f };
			*uParam4 = (164.2466f - 180f);
			return 1;
			break;
		case 50:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 51:
			uParam2->f_97 = 0;
			*uParam2 = joaat("stretch");
			*uParam3 = { Vector(28.1755f, -550.2679f, -1170.7203f) - Vector(30.2361f, -526.9999f, -1257.5f) };
			*uParam4 = (310.4708f - 220.9554f);
			return 1;
			break;
		case 52:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		case 66:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		case 61:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		case 62:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		case 63:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { -2.9117f, -15.0499f, -0.3468f };
			*uParam4 = -139.9751f;
			return 1;
			break;
		case 64:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 69:
			uParam2->f_97 = 0;
			*uParam2 = joaat("prairie");
			*uParam3 = { Vector(36.5734f, -85.1799f, -737.1358f) - Vector(54f, 111f, -852f) };
			*uParam4 = (64.1848f - 180f);
			return 1;
			break;
		case 65:
		case 54:
			uParam2->f_97 = 0;
			*uParam2 = joaat("frogger2");
			uParam2->f_5 = 40;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			uParam2->f_89 = 1;
			if (iParam1 == 54)
			{
				*uParam3 = { 5.5414f, -6.6035f, 1.0473f };
				*uParam4 = -83.2547f;
			}
			if (iParam1 == 65)
			{
				*uParam3 = { 5.7209f, -12.3958f, 1.0746f };
				*uParam4 = -152.2593f;
			}
			return 1;
			break;
		case 112:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		case 113:
			if (func_420(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		case 118:
			uParam2->f_97 = 0;
			*uParam2 = joaat("scorcher");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 1f, 12.5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		case 119:
			if (func_420(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 1;
			}
			break;
		case 120:
			if (func_420(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return 1;
			}
			break;
		case 173:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cruiser");
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		case 114:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.9002f, 1.205f, -0.3537f };
			*uParam4 = -180f;
			return 1;
			break;
		case 105:
			__LIB_32__::func_881(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		case 106:
			return func_420(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 107:
			return func_420(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 98:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		case 99:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 1;
			break;
		case 100:
			return func_420(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 101:
			return func_420(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 102:
			return func_420(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 123:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { 3.2267f, 1.0966f, -0.354f };
			*uParam4 = -31.73f;
			return 1;
			break;
		case 125:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { -13.7322f, 1.8783f, 1.0593f };
			*uParam4 = 55.3652f;
			return 1;
			break;
		case 133:
			uParam2->f_97 = 0;
			*uParam2 = joaat("tropic");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			uParam2->f_11[0] = 0;
			uParam2->f_11[1] = 0;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 0;
			uParam2->f_11[4] = 0;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 89:
		case 90:
		case 127:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0.1f;
			return 1;
			break;
		case 91:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { 15.4538f, -8.711f, 5.79f };
			*uParam4 = 2.4942f;
			return 1;
			break;
		case 93:
			if (func_420(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8.1f, -9.01f, 0.4439f };
				*uParam4 = 94.03f;
				return 1;
			}
			break;
		case 121:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { 18.8468f, 40.7721f, 0f };
			*uParam4 = -116.3936f;
			return 1;
			break;
		case 115:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f) };
			*uParam4 = ((177.259f - 180f) - 69f);
			return 1;
			break;
		case 116:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { 1.7826f, 12.2098f, -0.6964f };
			*uParam4 = -96.0001f;
			return 1;
			break;
		case 117:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { 11.8705f, -1.4684f, -1.6487f };
			*uParam4 = -125.8331f;
			return 1;
			break;
		case 94:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { -13.1578f, 16.3962f, 0.6396f };
			*uParam4 = -177f;
			return 1;
			break;
		case 96:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { -21.0518f, 0.5037f, 0.4091f };
			*uParam4 = -83.1262f;
			return 1;
			break;
		case 108:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { 10.8971f, 2.0809f, -0.7983f };
			*uParam4 = -150.9417f;
			return 1;
			break;
		case 109:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { 79.9901f, -52.83f, -0.3533f };
			*uParam4 = 44.7231f;
			return 1;
			break;
		case 135:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		case 136:
			if (func_420(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		case 137:
			if (func_420(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		case 138:
			if (func_420(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		case 139:
			if (func_420(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2.4845f, 2.3286f, -0.383f };
				*uParam4 = -31.4884f;
				return 1;
			}
			break;
		case 140:
			if (func_420(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		case 141:
			if (func_420(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12.5f;
				return 1;
			}
			break;
		case 142:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		case 143:
			if (func_420(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		case 144:
			if (func_420(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		case 145:
			if (func_420(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		case 146:
			if (func_420(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		case 147:
			if (func_420(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7.5f;
				return 1;
			}
			break;
		case 148:
			if (func_420(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		case 149:
			if (func_420(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		case 151:
			if (func_420(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13.2213f, 16.331f, 0f };
				*uParam4 = 6f;
				return 1;
			}
			break;
		case 162:
			if (func_420(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10.3876f, -10.3585f, -1.2183f };
				*uParam4 = 8.6726f;
				return 1;
			}
			break;
		case 158:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { 1.0793f, 15.631f, 1.1744f };
			*uParam4 = 2.52f;
			return 1;
			break;
		case 166:
			return func_420(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 170:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		case 171:
			return func_420(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 172:
			return func_420(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 208:
			__LIB_32__::func_881(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		case 209:
			return func_420(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 210:
			return func_420(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 211:
			__LIB_0__::func_120(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam3 = { -2.19f, -1.23f, 0f };
			*uParam4 = 90f;
			return 1;
			break;
		case 212:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1.3547f, 2.1615f, -0.3723f };
			*uParam4 = 177.8041f;
			return 1;
			break;
		case 213:
			if (func_420(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.2075f, 1.0943f, 0f };
				*uParam4 = 15.82f;
				return 1;
			}
			break;
		case 214:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { 2.291f, 1.0879f, 0.0635f };
			*uParam4 = 177.798f;
			return 1;
			break;
		case 215:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { -0.9714f, 1.6112f, -0.2773f };
			*uParam4 = -7.0583f;
			*uParam5 = { Vector(183.8081f, 578.5989f, 174.7651f) - Vector(176.086f, 551.7596f, 10.9694f) };
			*uParam6 = 10f;
			return 1;
			break;
		case 196:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { Vector(29.4846f, -1457.9152f, -17.4132f) - Vector(31.1932f, -1441.1821f, -14.8689f) };
			*uParam4 = (89.0026f - -1.5f);
			*uParam5 = { Vector(33.6125f, -1563.4609f, -147.0307f) - Vector(31.1932f, -1441.1821f, -14.8689f) };
			*uParam6 = 10f;
			return 1;
			break;
		case 221:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f) };
			*uParam4 = (357.1407f - 84.96f);
			return 1;
			break;
		case 216:
			if (func_420(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2.1752f, -2.3781f, 0f };
				*uParam4 = -68.4f;
				return 1;
			}
			break;
		case 217:
			if (func_420(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3.9761f, 0.2542f, 0f };
				*uParam4 = -70.5273f;
				return 1;
			}
			break;
		case 232:
		case 233:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { Vector(28.225f, -1015.1096f, -70.4456f) - Vector(27.5447f, -1019.2347f, -78.4023f) };
			*uParam4 = (162.09804f - 109.0206f);
			return 1;
			break;
		case 192:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.0171f) - Vector(4.7514f, -1573.632f, -1174.458f) };
			*uParam4 = (302.182f - 105.981f);
			return 1;
			break;
		case 193:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.0171f) - Vector(4.3599f, -1573.692f, -1175.298f) };
			*uParam4 = (302.182f - 172.9187f);
			return 1;
			break;
		case 194:
			if (func_420(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12.74f, 3.26f, 0f };
				*uParam4 = 95.217f;
				return 1;
			}
			break;
		case 195:
			if (func_420(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1.34f, 7.684f, 0f };
				*uParam4 = 173.52f;
				return 1;
			}
			break;
		case 200:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.4055f, -1607.5681f, 44.4802f) - Vector(((28.2858f - 0.5f) + 1.5f), -1607.2864f, 2.8895f) };
			*uParam4 = (318.2674f - (310.879f - 180f));
			return 1;
			break;
		case 201:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.1773f, -1592.7875f, 3.6009f) - Vector(29.2903f, -1607.2864f, 2.8895f) };
			*uParam4 = (322.6286f - 130.879f);
			return 1;
			break;
		case 202:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { 91.3579f, 18.1788f, -0.1911f };
			*uParam4 = -90.3475f;
			return 1;
			break;
		case 222:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { 12.5073f, -3.4625f, -0.3702f };
			*uParam4 = 14.3405f;
			return 1;
			break;
		case 223:
			if (func_420(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21.87f, -10.5f, 0f };
				*uParam4 = -104.76f;
				return 1;
			}
			break;
		case 224:
			return func_420(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 226:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f) };
			*uParam4 = ((270.1767f - 160f) - 180f);
			return 1;
			break;
		case 227:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { -19.8544f, -10.4863f, -0.0334f };
			*uParam4 = -120.12f;
			return 1;
			break;
		case 228:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { 21.5897f, -6.8544f, 0.6015f };
			*uParam4 = -141f;
			return 1;
			break;
		case 229:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { -7.6041f, 0.1369f, 0.5812f };
			*uParam4 = -145.769f;
			return 1;
			break;
		case 230:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { -1.6f, 7.6802f, 0.6947f };
			*uParam4 = -50.99f;
			return 1;
			break;
		case 238:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 22.322f, -6.2034f, 0f };
			*uParam4 = 73.071f;
			return 1;
			break;
		case 250:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.2901f, -5.5798f, -0.0357f };
			*uParam4 = 160.56f;
			return 1;
			break;
		case 251:
			if (func_420(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.0739f, 7.7692f, -0.2984f };
				*uParam4 = -48.9552f;
				return 1;
			}
			break;
		case 252:
			if (func_420(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5.778f, -4.2397f, 0.9091f };
				*uParam4 = -12.9418f;
				return 1;
			}
			break;
		case 253:
			if (func_420(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0.6968f, 1.1033f, 0.912f };
				*uParam4 = 90f;
				return 1;
			}
			break;
		case 281:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		case 282:
			if (func_420(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		case 283:
			if (func_420(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		case 284:
			if (func_420(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("faggio2");
				uParam2->f_91 = 0;
				return 1;
			}
			break;
		case 275:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		case 276:
			return func_420(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 277:
			return func_420(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 280:
			if (!Global_3)
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("tropic");
				uParam2->f_11[0] = 0;
				uParam2->f_11[1] = 0;
				uParam2->f_11[2] = 1;
				uParam2->f_11[3] = 0;
				uParam2->f_11[4] = 0;
				uParam2->f_11[5] = 1;
				uParam2->f_11[6] = 1;
				uParam2->f_11[7] = 1;
				uParam2->f_11[8] = 1;
			}
			else
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("dinghy");
			}
			*uParam3 = { Vector(-0.6187f, -1440.4209f, 2779.759f) - Vector(0.3109f, -1453.731f, 2789.845f) };
			uParam3->f_2 = (uParam3->f_2 + 0.5f);
			*uParam4 = (340.0835f - 4.44f);
			*uParam3 = { Vector(-0.7f, 16.55f, -3.3962f) + Vector(0.5f, 0.5f, -0.5f) };
			*uParam4 = (23.6441f + 90f);
			*uParam3 = { -4.0164f, 19.9594f, 0f };
			*uParam4 = 113.6465f;
			*uParam3 = { *uParam3 * Vector(1.1f, 1.1f, 1.1f) };
			return 1;
			break;
		case 247:
			uParam2->f_97 = 0;
			*uParam2 = joaat("sanchez");
			*uParam3 = { 9.8707f, 13.0084f, 0f };
			*uParam4 = ((-114f - 43f) + 133f);
			return 1;
			break;
		case 288:
			uParam2->f_97 = 0;
			*uParam2 = joaat("speedo");
			*uParam3 = { -7.7078f, 23.9099f, 1.7307f };
			*uParam4 = 24.3187f;
			return 1;
			break;
		case 309:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { -4.5662f, -3.2485f, (0.9455f - 1.7f) };
			*uParam4 = -138.6056f;
			return 1;
			break;
		case 305:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.8797f, 3597.0466f, 1399.6621f) - Vector(37.9419f, 3602.284f, 1394.2081f) };
			*uParam4 = (315.9865f - 122.5269f);
			return 1;
			break;
		case 310:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { 10.5999f, 3.3997f, 1.0212f };
			*uParam4 = -50.3062f;
			return 1;
			break;
		case 255:
			uParam2->f_97 = 0;
			*uParam2 = joaat("romero");
			*uParam3 = { -13.2279f, -7.5348f, 0f };
			*uParam4 = 4.32f;
			return 1;
			break;
		case 265:
			uParam2->f_97 = 0;
			*uParam2 = joaat("bmx");
			*uParam3 = { 11.9596f, 0.345f, -1.0016f };
			*uParam4 = -42.4225f;
			return 1;
			break;
		case 285:
			uParam2->f_97 = 0;
			*uParam2 = joaat("gburrito");
			*uParam3 = { 3.424f, 7.6462f, 0.8227f };
			*uParam4 = -150f;
			return 1;
			break;
		case 256:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(7.1164f, -1094.2047f, -1243.6498f) - Vector(7.1f, -1105.15f, -1242.68f) };
			*uParam4 = (14.0848f - 120f);
			return 1;
			break;
		case 257:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.8143f, -930.5448f, -1672.5349f) - Vector(6.479f, -974.7168f, -1667.148f) };
			*uParam4 = (144.9416f - 171.253f);
			return 1;
			break;
		case 258:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.3025f, 6276.1196f, -267.5488f) - Vector(30.5054f, 6250.9f, -301.4778f) };
			*uParam4 = (130.9896f - 10.247f);
			return 1;
			break;
		case 314:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cuban800");
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 110:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.5629f, -387.5143f, -147.166f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (341.4322f - 133f);
			return 1;
			break;
		case 111:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(24.4283f, -689.1462f, -1306.7816f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (214.6826f - 33f);
			return 1;
			break;
		case 153:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -176.25f);
			return 1;
			break;
		case 154:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -147.192f);
			return 1;
			break;
		case 165:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.0054f, -441.1681f, -1100.8779f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (297.5568f - -144.622f);
			return 1;
			break;
		case 159:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.3852f, -199.5354f, -825.3141f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (29.4869f - -62.5f);
			return 1;
			break;
		case 160:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.2086f, -144.1027f, -730.8218f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (28.532f - 119f);
			return 1;
			break;
		case 167:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(31.7307f, -523.2257f, -1144.1743f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (299.2956f - -22.32f);
			return 1;
			break;
		case 152:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9436f, 314.6989f, -1421.7998f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (335.4134f - 72f);
			return 1;
			break;
		case 157:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.469f, 255.3143f, -706.187f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (117.3069f - 37.27f);
			return 1;
			break;
		case 225:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7165f, -1677.7335f, 185.4888f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (54.2538f - -83.8f);
			return 1;
			break;
		case 218:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.3218f, -1405.1594f, -17.556f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (91.3098f - -70.4124f);
			return 1;
			break;
		case 219:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.2611f, -1492.1511f, -219.3172f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (139.2572f - -12f);
			return 1;
			break;
		case 220:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(25.3018f, -1811.6935f, -22.6138f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (141.0423f - -117.356f);
			return 1;
			break;
		case 206:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(208.5337f, 773.6719f, 164.1308f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (136.3104f - -36f);
			return 1;
			break;
		case 207:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(108.9995f, 396.924f, -263.3745f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (284.4611f - -95.588f);
			return 1;
			break;
		case 274:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(139.5782f, 2030.4458f, -1883.836f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (340.5746f - 9f);
			return 1;
			break;
		case 312:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.0296f, 6560.5566f, -200.684f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (134.5505f - 110.5931f);
			return 1;
			break;
		case 271:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.4647f, -1083.7513f, -1278.0234f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (115.8919f - 26.3597f);
			return 1;
			break;
		case 248:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(102.4417f, 164.5124f, 325.8113f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (68.4108f - 10.77f);
			return 1;
			break;
		case 242:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(56.616f, -122.9896f, -1622.2205f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (210.8653f - 13.7207f);
			return 1;
			break;
		case 254:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.0019f, -213.7796f, 172.442f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (250.3032f - -40f);
			return 1;
			break;
		case 287:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(17.3426f, -836.0328f, -887.9977f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (270.8607f - -81f);
			return 1;
			break;
		case 286:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.8359f, -1182.7039f, -1264.2178f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (298.4328f - -150f);
			return 1;
			break;
		case 239:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(104.8218f, 289.0073f, -80.4564f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (247.6446f - -122f);
			return 1;
			break;
		case 243:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.2819f, 434.9171f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (228.6353f - 18f);
			return 1;
			break;
		case 244:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.2819f, 434.9171f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (228.6353f - -51f);
			return 1;
			break;
		case 249:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(103.1881f, 177.7729f, 288.977f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (68.9831f - (138f - 180f));
			return 1;
			break;
		case 273:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.7794f, -432.4635f, -161.4589f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (340.0368f - -153f);
			return 1;
			break;
		case 92:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(202.1143f, 828.3607f, -806.8813f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (101.1612f - -54.347f);
			return 1;
			break;
		case 103:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.0174f, -1108.081f, -1724.72f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (319.8931f - 143.4931f);
			return 1;
			break;
		case 109:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.2248f, -628.4899f, -1859.5045f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (229.0784f - 99f);
			return 1;
			break;
		case 81:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.1469f, 90.4242f, -1393.4424f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (123.1782f - -45f);
			return 1;
			break;
		case 95:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(101.921f, 186.1865f, 370.5876f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (159.7861f - 70f);
			return 1;
			break;
		case 97:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(45.9871f, -188.5636f, -1391.1559f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (36.5172f - -45f);
			return 1;
			break;
		case 134:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(46.0567f, 3076.742f, 2001.9182f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (328.101f - -33.128f);
			return 1;
			break;
		case 88:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9442f, 314.7191f, -1421.8212f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (336.5938f - -132f);
			return 1;
			break;
		case 306:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(37.4888f, 5643.7256f, -569.3535f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (296.1685f - MISC::GET_HEADING_FROM_VECTOR_2D(7.4998f, -7.4995f));
			return 1;
			break;
		case 307:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(47.4526f, 4717.728f, -1555.5929f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (236.223f - MISC::GET_HEADING_FROM_VECTOR_2D(-10.6345f, -0.7246f));
			return 1;
			break;
		case 308:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(22.7549f, 4629.148f, -1553.861f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (332.7842f - MISC::GET_HEADING_FROM_VECTOR_2D(3.4271f, 13.6787f));
			return 1;
			break;
		case 278:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.9161f, -1009.7451f, 631.8275f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (98.8128f - -33.77f);
			return 1;
			break;
		case 279:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(234.6825f, 900.8749f, -111.9033f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (6.1087f - 155.68f);
			return 1;
			break;
		case 240:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.5351f, 3636.151f, 1546.3232f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (298.4009f - -4.124f);
			return 1;
			break;
		case 241:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.512f, 6439.6665f, -179.4242f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (225.5593f - 108f);
			return 1;
			break;
		case 264:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2977f, -1390.5446f, 486.7419f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (178.298f - -90f);
			return 1;
			break;
		case 266:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.5662f, 143.2342f, -3052.8945f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (85.3429f - 68.8227f);
			return 1;
			break;
		case 267:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(39.9155f, 4934.08f, 2202.3752f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (314.2654f - 56.2037f);
			return 1;
			break;
		case 269:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.149f, -782.0952f, 401.2502f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (179.9905f - -106.6605f);
			return 1;
			break;
		case 246:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.3919f, -1534.5072f, -1195.2559f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (305.8221f - -165f);
			return 1;
			break;
		case 263:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.8792f, -1241.2125f, -573.3765f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (316.9941f - -171f);
			return 1;
			break;
		case 259:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.0002f, -1298.5391f, -724.429f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (230.5715f - -32.488f);
			return 1;
			break;
		case 260:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(61.203f, 250.8387f, -1309.1135f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (10.7756f - -29.093f);
			return 1;
			break;
		case 261:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.764f, 60.3233f, 917.6678f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (148.021f - 229.6085f);
			return 1;
			break;
		case 270:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		case 289:
			__LIB_32__::func_881(iParam0, uParam2, 0);
			*uParam3 = { -48.5171f, 28.4211f, 3.0057f };
			*uParam4 = -1.3831f;
			return 1;
			break;
	}
	return 0;
}

int func_432(int iParam0, var uParam1, float fParam2)//Position - 0x738B4
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		case 9:
			return func_432(8, uParam1, fParam2);
			break;
		case 10:
			return func_432(8, uParam1, fParam2);
			break;
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.3408f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		default:
			break;
	}
	return 0;
}

void func_433(int iParam0, int iParam1)//Position - 0x74228
{
	struct<97> Var0;
	int iVar1;
	int iVar2;
	Var0.f_1 = -1;
	Var0.f_17 = 4;
	Var0.f_17.f_8 = 4;
	Var0.f_17.f_13 = 4;
	Var0.f_17.f_18 = 4;
	Var0.f_17.f_24 = 4;
	Var0.f_17.f_29 = 4;
	Var0.f_17.f_34 = 4;
	Var0.f_62 = 8;
	Var0.f_96.f_7 = 21;
	Var0.f_96.f_8 = 6;
	Var0.f_17.f_5 = 0;
	Var0.f_17.f_6 = 0;
	Var0.f_0 = 0;
	Var0.f_2 = iParam0;
	Var0.f_62.f_15 = 0;
	__LIB_12__::func_130(Var0.f_2, &(Var0.f_3));
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (__LIB_0__::func_517(iParam1, 64))
		{
			__LIB_12__::func_131(Global_98880[iParam0 /*3*/], -1082130432, 350, 1114636288, 0);
			if (!__LIB_37__::func_450(Var0.f_3))
			{
				iVar1 = __LIB_0__::func_504(Var0.f_3);
				while (!func_15(iVar1, 1))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	}
	iVar2 = 1;
	while (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && iVar2)
	{
		if (!func_434(&Var0, iParam1))
		{
		}
		else
		{
			iVar2 = 0;
		}
		SYSTEM::WAIT(0);
	}
}

bool func_434(var uParam0, var uParam1)//Position - 0x74330
{
	return func_435(uParam0, 602088/*func_628*/, 601917/*func_627*/, uParam1);
}

int func_435(var uParam0, int iParam1, int iParam2, var uParam3)//Position - 0x74348
{
	int iVar0;
	struct<97> Var1;
	struct<3> Var2;
	int iVar3;
	struct<3> Var4;
	var uVar5;
	struct<3> Var6;
	struct<3> Var7;
	float fVar8;
	char* sVar9;
	char[] cVar10[8];
	char* sVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	char* sVar18;
	char* sVar19;
	int iVar20;
	float fVar21;
	float fVar22;
	int iVar23;
	struct<65> Var24;
	bool bVar25;
	int iVar26;
	bool bVar27;
	bool bVar28;
	int iVar29;
	float fVar30;
	float fVar31;
	bool bVar32;
	bool bVar33;
	struct<6> Var34;
	bool bVar35;
	struct<8> Var36;
	char* sVar37;
	char cVar38[64];
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	char* sVar43;
	bool bVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	if (!uParam0->f_62.f_19)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	}
	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 >= (Global_43603 - 1000))
	{
		__LIB_0__::func_50(2666);
	}
	Var1.f_1 = -1;
	Var1.f_17 = 4;
	Var1.f_17.f_8 = 4;
	Var1.f_17.f_13 = 4;
	Var1.f_17.f_18 = 4;
	Var1.f_17.f_24 = 4;
	Var1.f_17.f_29 = 4;
	Var1.f_17.f_34 = 4;
	Var1.f_62 = 8;
	Var1.f_96.f_7 = 21;
	Var1.f_96.f_8 = 6;
	Var2 = { 5f, 5f, 4f };
	if (*uParam0 == 0)
	{
		iVar3 = __LIB_18__::func_219(&(uParam0->f_1), 0, 17, 1, 0);
		if (iVar3 == 1)
		{
			STATS::STAT_INCREMENT(joaat("SP_AMBIENT_SWITCH_COUNT"), 1f);
			__LIB_3__::func_702(uParam0, 1);
		}
		if (!*uParam0 == 1)
		{
			if (!Global_78581 == -1)
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_91229[Global_78581 /*34*/]), SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					__LIB_3__::func_702(uParam0, 1);
				}
			}
			else if (__LIB_18__::func_205() == 36)
			{
				__LIB_3__::func_702(uParam0, 1);
			}
		}
	}
	if (*uParam0 == 1)
	{
		uParam0->f_96.f_2 = 0;
		uParam0->f_96.f_3 = 0;
		__LIB_11__::func_884();
		uParam0->f_61 = __LIB_0__::func_504(uParam0->f_3);
		if (func_609(uParam0->f_2, &(uParam0->f_4), &(uParam0->f_7), &(uParam0->f_8)))
		{
			__LIB_8__::func_770(1);
			if (__LIB_40__::func_765(uParam0, &Var4, &uVar5))
			{
				uParam0->f_4 = { Var4 };
				uParam0->f_7 = uVar5;
				Global_113386.f_2363.f_539.f_2300[uParam0->f_3 /*3*/] = { Var4 };
				Global_113386.f_2363.f_539.f_2310[uParam0->f_3] = uVar5;
				if (Global_100140[uParam0->f_3] == 2)
				{
					Global_100148[uParam0->f_3 /*3*/] = { Var4 };
					Global_100158[uParam0->f_3] = uVar5;
				}
			}
			Global_98551 = uParam0->f_2;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
			{
				uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(uParam0->f_4, &(uParam0->f_8));
			}
			else if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(uParam0->f_4))
			{
				uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_4);
			}
			else
			{
				uParam0->f_16 = 0;
			}
			if (uParam0->f_16 != 0)
			{
				if (!INTERIOR::IS_INTERIOR_READY(uParam0->f_16))
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_16);
				}
			}
			if ((uParam0->f_2 == 222 || uParam0->f_2 == 223) || uParam0->f_2 == 224)
			{
				__LIB_25__::func_609(21, 0);
			}
			func_590(uParam0->f_2);
			if (func_589(uParam0->f_2, &Var6, &Var7, &fVar8))
			{
				if ((func_588(uParam0->f_2, &sVar9, &cVar10) || __LIB_12__::func_126(uParam0->f_2, &sVar11, &uVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17)) || __LIB_12__::func_125(uParam0->f_2, &sVar18))
				{
					uParam0->f_62.f_10 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					CAM::SET_CAM_COORD(uParam0->f_62.f_10, Var6);
					CAM::SET_CAM_ROT(uParam0->f_62.f_10, Var7, 2);
					CAM::SET_CAM_FOV(uParam0->f_62.f_10, fVar8);
					PED::SET_PED_NON_CREATION_AREA(Var6 - Var2, Var6 + Var2);
					uParam0->f_108 = PED::ADD_SCENARIO_BLOCKING_AREA(Var6 - Var2, Var6 + Var2, false, true, true, true);
					MISC::CLEAR_AREA(Var6, SYSTEM::VMAG(Var2), true, false, false, false);
				}
			}
			__LIB_12__::func_124();
			if (func_584(uParam0->f_2, &sVar19))
			{
				__LIB_12__::func_124();
			}
			Global_99844 = uParam0->f_2;
			iVar20 = __LIB_20__::func_728();
			if (iVar20 != 145)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_100144[iVar20], false))
				{
					fVar21 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Global_100144[iVar20]);
					fVar22 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Global_100144[iVar20]);
					if (fVar21 < (-1000f * 0.75f))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Global_100144[iVar20], (-1000f * 0.25f));
					}
					if (fVar22 < (-1000f * 0.75f))
					{
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Global_100144[iVar20], (-1000f * 0.25f));
					}
				}
				__LIB_39__::func_376(PLAYER::PLAYER_PED_ID(), &(Global_99845[iVar20 /*98*/]), &(Global_100148[iVar20 /*3*/]), &(Global_100158[iVar20]), &(Global_100140[iVar20]), &(Global_4541522[iVar20]));
				func_576(PLAYER::PLAYER_PED_ID(), 0);
				__LIB_39__::func_471(PLAYER::PLAYER_PED_ID());
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var6, false, false, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			}
			func_566(uParam0->f_3, uParam0->f_2);
			iLocal_64 = 0;
			Global_32007 = MISC::GET_GAME_TIMER();
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 10f);
			STREAMING::REQUEST_MODEL(__LIB_19__::func_811(uParam0->f_3));
			__LIB_3__::func_702(uParam0, 3);
		}
		else
		{
			return 1;
		}
	}
	if (*uParam0 == 2)
	{
		__LIB_3__::func_702(uParam0, 3);
		iLocal_64++;
		STREAMING::REQUEST_MODEL(__LIB_19__::func_811(uParam0->f_3));
		if (uParam0->f_16 != 0)
		{
			if (!INTERIOR::IS_INTERIOR_READY(uParam0->f_16))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_16);
				__LIB_3__::func_702(uParam0, 2);
				if (iLocal_64 > 150)
				{
					iLocal_64 = 0;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
					{
						uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(uParam0->f_4, &(uParam0->f_8));
					}
					else
					{
						uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_4);
					}
					__LIB_3__::func_702(uParam0, 3);
				}
			}
		}
	}
	if (*uParam0 == 3)
	{
		if (uParam0->f_2 == 1)
		{
			iVar23 = __LIB_0__::func_388(uParam0->f_61);
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_17[iVar23], false))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_17[iVar23], true))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_17[iVar23]));
				}
			}
			uParam0->f_17[uParam0->f_61] = 0;
			uParam0->f_2 = 1;
		}
		if (__LIB_41__::func_477(uParam0, 0))
		{
			Var24 = { Global_113386.f_2363.f_539[uParam0->f_61 /*65*/] };
			bVar25 = false;
			if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
			{
				bVar25 = true;
			}
			if (func_97(&(uParam0->f_17[uParam0->f_61]), uParam0->f_3, uParam0->f_4, uParam0->f_7, 1, 0, bVar25))
			{
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
					if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_13) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_12)) && STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, false)) != 3)
					{
						Global_113386.f_2363.f_539[uParam0->f_61 /*65*/] = { Var24 };
					}
				}
				__LIB_12__::func_119(uParam0->f_17[uParam0->f_61]);
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_17[uParam0->f_61], false, false);
				}
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_17[uParam0->f_61], true);
				__LIB_12__::func_118(uParam0);
				uParam0->f_17.f_39 = 1;
				uParam0->f_17.f_7 = uParam0->f_61;
				uParam0->f_62.f_12 = uParam0->f_17[uParam0->f_61];
				Global_100165 = -1;
				__LIB_26__::func_594(uParam0->f_2);
				if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_13) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_12)) && STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, false)) == 3)
				{
					if (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(uParam0->f_17[uParam0->f_61]))
					{
						iVar26 = MISC::GET_GAME_TIMER();
						while (iVar26 + 500 < MISC::GET_GAME_TIMER() && iVar26 > 0)
						{
							if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(uParam0->f_17[uParam0->f_61]))
							{
								iVar26 = -1;
							}
							SYSTEM::WAIT(0);
						}
						if (!iVar26 == -1)
						{
						}
					}
				}
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uParam0->f_62.f_12, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_12, true, 1);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, false);
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(uParam0->f_17[uParam0->f_61]);
				Stack.Push(uParam0);
				Call_Loc(iParam1);
				*uParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
				__LIB_3__::func_702(uParam0, 4);
			}
		}
		else
		{
			uParam0->f_17.f_39 = 1;
			uParam0->f_17.f_7 = uParam0->f_61;
			uParam0->f_62.f_12 = uParam0->f_17[uParam0->f_61];
			if (uParam0->f_62.f_12 != PLAYER::PLAYER_PED_ID())
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_62.f_12, true, true);
			}
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uParam0->f_62.f_12, true);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_12, true, 1);
			PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, false);
			MISC::CLEAR_AREA_OF_PROJECTILES(uParam0->f_4, 10f, 0);
			if (!__LIB_0__::func_394(uParam0->f_4, ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, true), 5f, 0) && !__LIB_0__::func_394(uParam0->f_4, 0f, 0f, 0f, 5f, 0))
			{
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
				}
			}
			Global_100165 = -1;
			__LIB_26__::func_594(uParam0->f_2);
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(uParam0->f_17[uParam0->f_61]);
			Stack.Push(uParam0);
			Call_Loc(iParam1);
			*uParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
			__LIB_3__::func_702(uParam0, 4);
		}
	}
	if (*uParam0 == 4)
	{
		bVar27 = false;
		bVar28 = false;
		iVar29 = 0;
		fVar30 = 0f;
		fVar31 = 0f;
		bVar32 = false;
		bVar33 = false;
		func_553(uParam0, &bVar27, &bVar28, &iVar29, &fVar30, &fVar31, &bVar32, &bVar33, &uParam3);
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
		{
			if (__LIB_12__::func_125(uParam0->f_2, &Var34))
			{
				MemCopy(&(uParam0->f_8), {Var34}, 8);
			}
		}
		if (uParam0->f_2 == 231)
		{
			if (!bVar32)
			{
				bVar32 = true;
			}
		}
		bVar35 = false;
		if (!CAM::DOES_CAM_EXIST(uParam0->f_62.f_10))
		{
			if (__LIB_42__::func_546(&(uParam0->f_62), iVar29, uParam3, fVar30, fVar31, bVar32, bVar33, &(uParam0->f_8), 0, 0))
			{
				bVar35 = true;
			}
		}
		else
		{
			MemCopy(&Var36, {uParam0->f_8}, 16);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var36))
			{
				func_588(uParam0->f_2, &sVar37, &cVar38);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar38))
				{
					StringConCat(&Var36, &cVar38, 64);
				}
			}
			if (__LIB_42__::func_705(&(uParam0->f_62), uParam0->f_62.f_10, iVar29, uParam3, fVar30, fVar31, bVar32, bVar33, &Var36, 2))
			{
				bVar35 = true;
			}
		}
		if (bVar35)
		{
			iVar40 = 3;
			iVar41 = 8;
			if (Global_3)
			{
				iVar40 = 7;
				iVar41 = 7;
			}
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
			{
				iVar39 = STREAMING::GET_PLAYER_SWITCH_STATE();
				if ((iVar39 == 8 || iVar39 == 11) || ((STREAMING::GET_PLAYER_SWITCH_TYPE() == 2 && iVar39 == 3) && !((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)))
				{
					if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 0)
					{
						if (Global_100164 > 0)
						{
							if (Global_100165 < 0)
							{
								Global_100165 = MISC::GET_GAME_TIMER();
							}
							else
							{
								iVar42 = 12500;
								if (iVar39 == 11)
								{
									iVar42 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar42) * 1.75f));
								}
								if (func_584(uParam0->f_2, &sVar43))
								{
									iVar42 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar42) * 1.75f));
								}
								if (MISC::GET_GAME_TIMER() > (Global_100165 + iVar42))
								{
									__LIB_20__::func_678();
									STREAMING::ALLOW_PLAYER_SWITCH_OUTRO();
									Global_100165 = -1;
								}
							}
						}
					}
				}
			}
			else
			{
				iVar39 = iVar40;
				iVar41 = iVar40;
			}
			__LIB_41__::func_476(uParam0);
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				if (iVar39 != 1)
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			if (__LIB_0__::func_517(uParam3, 512))
			{
				if (iVar39 == 1)
				{
					Stack.Push(uParam0);
					Stack.Push(&Var1);
					Stack.Push(uParam3);
					Call_Loc(iParam2);
				}
			}
			if (iVar39 >= iVar40)
			{
				Stack.Push(uParam0);
				Stack.Push(&Var1);
				Stack.Push(uParam3);
				Call_Loc(iParam2);
				if (StackVal)
				{
					if (!uParam0->f_62.f_19)
					{
						if (uParam0->f_62.f_18 && iVar39 >= iVar41)
						{
							bVar44 = false;
							if (__LIB_42__::func_790(&(uParam0->f_17), bVar27, bVar28, 0))
							{
								bVar44 = true;
							}
							if (bVar44)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_13))
								{
									ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_13, true, 1);
								}
								__LIB_12__::func_115(&(uParam0->f_17));
								__LIB_41__::func_476(uParam0);
								__LIB_38__::func_168();
								PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
								Global_97919 = { uParam0->f_17 };
								uParam0->f_62.f_19 = 1;
							}
						}
					}
				}
			}
			if (iVar39 >= 3)
			{
				PAD::SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(false);
			}
			if (Global_97752)
			{
				if (uParam0->f_62.f_19)
				{
					if (func_470(uParam0))
					{
						Global_97752 = 0;
					}
				}
			}
		}
		else
		{
			__LIB_3__::func_702(uParam0, 5);
		}
	}
	if (*uParam0 == 5)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_62.f_10))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_62.f_10))
			{
				if (CAM::IS_CAM_INTERPOLATING(uParam0->f_62.f_10))
				{
				}
				else
				{
					CAM::SET_CAM_ACTIVE(uParam0->f_62.f_10, false);
					CAM::DESTROY_CAM(uParam0->f_62.f_10, false);
				}
			}
			else
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_62.f_10, false);
				CAM::DESTROY_CAM(uParam0->f_62.f_10, false);
			}
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_108, false);
			PED::CLEAR_PED_NON_CREATION_AREA();
		}
		else
		{
			if (CAM::DOES_CAM_EXIST(uParam0->f_62.f_9))
			{
				CAM::DESTROY_CAM(uParam0->f_62.f_9, false);
			}
			if (uParam0->f_62.f_24 > 0)
			{
				iVar45 = 0;
				while (iVar45 <= (uParam0->f_62.f_24 - 1))
				{
					if (CAM::DOES_CAM_EXIST(uParam0->f_62[iVar45]))
					{
						CAM::DESTROY_CAM(uParam0->f_62[iVar45], false);
					}
					iVar45++;
				}
			}
			if (((uParam0->f_2 != 8 && uParam0->f_2 != 9) && uParam0->f_2 != 10) && uParam0->f_2 != 55)
			{
				__LIB_8__::func_770(uParam0->f_62.f_21);
			}
			uParam0->f_62.f_15 = 0;
			uParam0->f_62.f_16 = 0;
			uParam0->f_62.f_17 = 0;
			uParam0->f_62.f_18 = 0;
			uParam0->f_62.f_19 = 0;
			uParam0->f_62.f_20 = 0;
			uParam0->f_62.f_24 = 0;
			if (!Global_44203)
			{
				CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
				CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(0f);
				CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(0f);
			}
			CAM::RENDER_SCRIPT_CAMS(false, true, 1000, true, false, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_CAN_BE_TARGETTED(PLAYER::PLAYER_PED_ID(), true);
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
				}
			}
			__LIB_0__::func_708(0);
			if (!PED::IS_PED_INJURED(uParam0->f_62.f_13))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_13, false, 1);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uParam0->f_62.f_13, true);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, true);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_62.f_12))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_62.f_12, false);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, true);
				if (uParam0->f_62.f_12 != PLAYER::PLAYER_PED_ID())
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_12, false, 1);
				}
			}
			__LIB_3__::func_702(uParam0, 6);
		}
	}
	if (*uParam0 == 6)
	{
		if (uParam0->f_16 != 0)
		{
			INTERIOR::UNPIN_INTERIOR(uParam0->f_16);
		}
		STREAMING::CLEAR_FOCUS();
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_19__::func_811(uParam0->f_3));
		iVar46 = __LIB_20__::func_728();
		if (iVar46 != 145)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_100144[iVar46], false))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_100144[iVar46], true))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_100144[iVar46]));
				}
			}
			iVar47 = Global_99845[iVar46 /*98*/];
			if (iVar47 != 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar47);
			}
		}
		func_468(uParam0->f_3);
		if ((((((uParam0->f_2 != 5 && uParam0->f_2 != 6) && uParam0->f_2 != 7) && uParam0->f_2 != 2) && uParam0->f_2 != 3) && uParam0->f_2 != 4) && uParam0->f_2 != 1)
		{
			Global_113386.f_18533[uParam0->f_3] = uParam0->f_2;
			__LIB_26__::func_592(uParam0->f_3, uParam0->f_2);
		}
		if (uParam0->f_2 == 1)
		{
			func_636(&(Global_113386.f_2363.f_539), -1);
		}
		__LIB_12__::func_112(uParam0->f_3);
		func_443(uParam0, &Var1);
		__LIB_39__::func_593(uParam0);
		func_438(uParam0->f_2);
		__LIB_0__::func_17(&Global_1574629);
		__LIB_0__::func_17(&(Global_113386.f_2363.f_539.f_2296[uParam0->f_3]));
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_96.f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
		Global_113386.f_2363.f_539.f_2300[uParam0->f_3 /*3*/] = { 0f, 0f, 0f };
		Global_113386.f_2363.f_539.f_2310[uParam0->f_3] = 0f;
		Global_113386.f_2363.f_539.f_2314[uParam0->f_3] = 0;
		Global_113386.f_2363.f_539.f_2318[uParam0->f_3 /*3*/] = { 0f, 0f, 0f };
		Global_97752 = 0;
		Global_100165 = -1;
		__LIB_0__::func_56(&(uParam0->f_1));
		if (((uParam0->f_2 != 8 && uParam0->f_2 != 9) && uParam0->f_2 != 10) && uParam0->f_2 != 55)
		{
			__LIB_8__::func_770(0);
		}
		return 1;
	}
	return 0;
}

int func_438(int iParam0)//Position - 0x7538A
{
	char* sVar0;
	char[] cVar1[8];
	char* sVar2;
	char[] cVar3[8];
	char[] cVar4[8];
	var uVar5;
	var uVar6;
	if (func_588(iParam0, &sVar0, &cVar1))
	{
		if (__LIB_26__::func_591(iParam0, &sVar2, &cVar3, &cVar4, &uVar5, &uVar6))
		{
			STREAMING::REMOVE_ANIM_DICT(&sVar2);
			return 1;
		}
	}
	return 0;
}

int func_443(var uParam0, var uParam1)//Position - 0x76D9E
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char[] cVar4[8];
	char[] cVar5[8];
	char[] cVar6[8];
	var uVar7;
	int iVar8;
	if (__LIB_32__::func_822(*uParam0, uParam1))
	{
		iVar0 = uParam0->f_3;
		iVar1 = uParam1->f_111;
		if (iVar1 < 144)
		{
			if (__LIB_20__::func_780(iVar0, iVar1))
			{
				iVar2 = 1;
				__LIB_32__::func_776(iVar0, iVar1, iVar2);
				return 1;
			}
		}
		else if (func_444(uParam0->f_2, &sVar3, &cVar4, &cVar5, &cVar6, &uVar7))
		{
			switch (MISC::GET_HASH_KEY(&cVar4))
			{
				case joaat("AMANDA"):
					iVar1 = 17;
					break;
				case joaat("LAMAR"):
					iVar1 = 19;
					break;
				default:
					return 0;
					break;
			}
			if (__LIB_20__::func_780(iVar0, iVar1))
			{
				iVar8 = 0;
				__LIB_32__::func_776(iVar0, iVar1, iVar8);
				return 1;
			}
		}
	}
	return 0;
}

int func_444(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, var uParam5)//Position - 0x76E44
{
	var uVar0;
	var uVar1;
	var uVar2;
	StringCopy(sParam3, "PRSAUD", 16);
	StringCopy(sParam2, "", 16);
	*uParam5 = 0f;
	switch (iParam0)
	{
		case 11:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_ARM3_D", 16);
			StringCopy(sParam2, "TANISHA", 16);
			return 1;
			break;
		case 8:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_ARM3_A", 16);
			StringCopy(sParam2, "LAMAR", 16);
			return 1;
			break;
		case 9:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_ARM3_B", 16);
			StringCopy(sParam2, "LAMAR", 16);
			return 1;
			break;
		case 10:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_ARM3_C", 16);
			StringCopy(sParam2, "LAMAR", 16);
			return 1;
			break;
		case 13:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FAM3", 16);
			return 1;
			break;
		case 15:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FBI2", 16);
			return 1;
			break;
		case 12:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FAM1", 16);
			return 1;
			break;
		case 16:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FBI4_0", 16);
			return 1;
			break;
		case 17:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FBI4_0", 16);
			return 1;
			break;
		case 18:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FBI3", 16);
			return 1;
			break;
		case 19:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FBI4", 16);
			return 1;
			break;
		case 20:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FBI5", 16);
			return 1;
			break;
		case 22:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FAM4", 16);
			return 1;
			break;
		case 23:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_AGE1", 16);
			return 1;
			break;
		case 24:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_AGEp", 16);
			return 1;
			break;
		case 58:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FRA2", 16);
			return 1;
			break;
		case 59:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FRA2", 16);
			return 1;
			break;
		case 60:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FBIend", 16);
			return 1;
			break;
		case 25:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_CARST1", 16);
			return 1;
			break;
		case 26:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CARST1", 16);
			return 1;
			break;
		case 27:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_AGE2", 16);
			return 1;
			break;
		case 28:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CARST2", 16);
			return 1;
			break;
		case 38:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_RUR2A", 16);
			return 1;
			break;
		case 41:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_RUR1", 16);
			return 1;
			break;
		case 47:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_EXILE2", 16);
			return 1;
			break;
		case 49:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FBI5b", 16);
			return 1;
			break;
		case 48:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_EXILE3", 16);
			return 1;
			break;
		case 124:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_MIC2", 16);
			return 1;
			break;
		case 51:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_MIC3b", 16);
			return 1;
			break;
		case 52:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_DOC2A", 16);
			return 1;
			break;
		case 66:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_DOC2A", 16);
			return 1;
			break;
		case 61:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_DOC2B", 16);
			return 1;
			break;
		case 62:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FIN1", 16);
			return 1;
			break;
		case 69:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIN2A", 16);
			return 1;
			break;
		case 64:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FIN2B", 16);
			return 1;
			break;
		case 65:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIN2B", 16);
			return 1;
			break;
		case 40:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_MRSP", 16);
			return 1;
			break;
		case 54:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIN1", 16);
			return 1;
			break;
		case 55:
			StringCopy(sParam3, "MIFLAUD", 16);
			StringCopy(sParam4, "MIFL_CALL3", 16);
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam2, "LESTER", 16);
			return 1;
			break;
		case 56:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FIN2i", 16);
			return 1;
			break;
		case 57:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIN2i", 16);
			return 1;
			break;
		case 94:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "AMANDA", 16);
			*sParam4 = { __LIB_12__::func_110("MICS1_IG_4", 3) };
			return 1;
			break;
		case 98:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_5", 16);
			return 1;
			break;
		case 110:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_9a", 16);
			return 1;
			break;
		case 111:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_9b", 16);
			return 1;
			break;
		case 103:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS_BEACH", 16);
			return 1;
			break;
		case 105:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_7", 16);
			return 1;
			break;
		case 106:
			return func_444(105, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 107:
			return func_444(105, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 108:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_8", 16);
			*uParam5 = 0.2f;
			return 1;
			break;
		case 109:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_8b", 16);
			*uParam5 = 0.2f;
			return 1;
			break;
		case 114:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_11", 16);
			*uParam5 = 0.15f;
			StringCopy(sParam2, "AMANDA", 16);
			return 1;
			break;
		case 121:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_16", 16);
			*uParam5 = 0.2f;
			return 1;
			break;
		case 122:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "AMANDA", 16);
			*sParam4 = { __LIB_12__::func_110("MICS1_IG_18", 3) };
			*uParam5 = 0f;
			if (MISC::ARE_STRINGS_EQUAL(sParam4, "MICS1_IG_18a"))
			{
				*uParam5 = 0.05f;
			}
			if (MISC::ARE_STRINGS_EQUAL(sParam4, "MICS1_IG_18b"))
			{
				*uParam5 = 0.05f;
			}
			if (MISC::ARE_STRINGS_EQUAL(sParam4, "MICS1_IG_18c"))
			{
				*uParam5 = 0.05f;
			}
			return 1;
			break;
		case 197:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam2, "LESTER", 16);
			StringCopy(sParam4, "FRAS2_IG_12", 16);
			return 1;
			break;
		case 95:
			if (!Global_3)
			{
				StringCopy(sParam1, "MICHAEL", 16);
				StringCopy(sParam4, "PSM_4REST", 16);
				*uParam5 = 0.2f;
				return 1;
			}
			break;
		case 96:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_4LUNCHb", 16);
			return 1;
			break;
		case 97:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_4LUNCHc", 16);
			*uParam5 = 0.45f;
			return 1;
			break;
		case 125:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_HOOKM", 16);
			*uParam5 = 0.25f;
			return 1;
			break;
		case 84:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS_DESERT", 16);
			*uParam5 = 0.5f;
			return 1;
			break;
		case 151:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_7LUNCHa", 16);
			StringCopy(sParam2, "AMANDA", 16);
			return 1;
			break;
		case 152:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "AMANDA", 16);
			*sParam4 = { __LIB_12__::func_110("MICS3_IG_9", 3) };
			return 1;
		case 153:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_5a", 16);
			*uParam5 = 0.2f;
			return 1;
			break;
		case 154:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_5b", 16);
			return 1;
			break;
		case 155:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_18", 16);
			StringCopy(sParam2, "AMANDA", 16);
			return 1;
			break;
		case 157:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_6", 16);
			return 1;
			break;
		case 158:
			StringCopy(sParam1, "MICHAEL", 16);
			*sParam4 = { __LIB_12__::func_110("PSM_7HOOKER", 3) };
			StringCopy(sParam2, "HOOKER", 16);
			return 1;
			break;
		case 161:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_13", 16);
			return 1;
			break;
		case 115:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM2_COFFEE", 16);
			return 1;
			break;
		case 116:
			return func_444(115, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 117:
			return func_444(115, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 162:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM7_COFFEE", 16);
			return 1;
			break;
		case 163:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_7SVHOUSE", 16);
			*uParam5 = 0.5f;
			return 1;
			break;
		case 166:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_3", 16);
			return 1;
			break;
		case 167:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "JIMMY", 16);
			*sParam4 = { __LIB_12__::func_110("PSM_7LOT_C", 3) };
			return 1;
			break;
		case 85:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS2_IG_2", 16);
			return 1;
			break;
		case 168:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_15", 16);
			return 1;
			break;
		case 169:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "JIMMY", 16);
			*sParam4 = { __LIB_12__::func_110("MICS3_IG_11", 3) };
			*uParam5 = 0.2f;
			return 1;
		case 170:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "AMANDA", 16);
			*sParam4 = { __LIB_12__::func_110("MICS3_IG_17", 3) };
			return 1;
		case 171:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "JIMMY", 16);
			StringCopy(sParam4, "PSM_7SHOPb", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		case 172:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "TRACEY", 16);
			*sParam4 = { __LIB_12__::func_110("MICS3_IG_21", 3) };
			*uParam5 = 0.25f;
			return 1;
			break;
		case 175:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_1", 16);
			return 1;
			break;
		case 176:
			return func_444(175, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 181:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_1c", 16);
			return 1;
			break;
		case 182:
			return func_444(181, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 183:
			return func_444(181, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 179:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_1b", 16);
			return 1;
			break;
		case 180:
			return func_444(179, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 220:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam2, "LAMAR", 16);
			StringCopy(sParam4, "FRAS_IG_6_P5", 16);
			return 1;
			break;
		case 193:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_2", 16);
			return 1;
			break;
		case 194:
			return func_444(193, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 195:
			return func_444(193, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 211:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_BIKEa", 16);
			return 1;
			break;
		case 213:
			return func_444(211, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 216:
			return func_444(211, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 217:
			return func_444(211, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 198:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_3", 16);
			return 1;
			break;
		case 199:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSM_TRASH", 16);
			return 1;
			break;
		case 221:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_8", 16);
			*uParam5 = 0.35f;
			return 1;
			break;
		case 208:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_TRAFF", 16);
			return 1;
			break;
		case 209:
			return func_444(208, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 210:
			return func_444(208, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 203:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS2_IG_9", 16);
			return 1;
			break;
		case 204:
			return func_444(203, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 206:
			return func_444(203, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 207:
			return func_444(203, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 205:
			return func_444(203, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 226:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_BAR", 16);
			return 1;
			break;
		case 227:
			return func_444(226, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 228:
			return func_444(226, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 229:
			return func_444(226, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 230:
			return func_444(226, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 235:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_28b", 16);
			return 1;
			break;
		case 239:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_12a", 16);
			return 1;
			break;
		case 240:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_12b", 16);
			*uParam5 = 0.25f;
			return 1;
			break;
		case 241:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_12c", 16);
			return 1;
			break;
		case 242:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_12d", 16);
			return 1;
			break;
		case 246:
			StringCopy(sParam1, "TREVOR", 16);
			*sParam4 = { __LIB_12__::func_110("TRVS_IG_5", 3) };
			return 1;
			break;
		case 247:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_6", 16);
			*uParam5 = 0.45f;
			return 1;
			break;
		case 285:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_29", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		case 278:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_BRDGEWKa", 16);
			*uParam5 = 0.25f;
			return 1;
			break;
		case 279:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_BRDGEWKb", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		case 280:
			StringCopy(sParam1, "TREVOR", 16);
			if (!Global_3)
			{
				StringCopy(sParam4, "PST_BRDGEWKc", 16);
			}
			else
			{
				StringCopy(sParam4, "PST_MAGDEMO", 16);
			}
			*uParam5 = 0.39f;
			return 1;
			break;
		case 272:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WSTRIP", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		case 265:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHb", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		case 266:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHc", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		case 267:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHd", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		case 268:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHe", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		case 269:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHf", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		case 270:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHg", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		case 255:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_11", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		case 282:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CHSCRb", 16);
			return 1;
			break;
		case 248:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_7", 16);
			*uParam5 = 0.25f;
			return 1;
			break;
		case 249:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_8", 16);
			*uParam5 = 0.25f;
			return 1;
			break;
		case 281:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CHSCRa", 16);
			return 1;
			break;
		case 283:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CHSCRc", 16);
			return 1;
			break;
		case 284:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CHSCRd", 16);
			return 1;
			break;
		case 275:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_POLa", 16);
			return 1;
			break;
		case 276:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_POLb", 16);
			return 1;
			break;
		case 277:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_POLc", 16);
			return 1;
			break;
		case 273:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_PARK", 16);
			*uParam5 = 0.5f;
			return 1;
			break;
		case 274:
			return func_444(273, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 254:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_9", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		case 256:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIBARa", 16);
			return 1;
			break;
		case 257:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIBARb", 16);
			return 1;
			break;
		case 258:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIBARc", 16);
			return 1;
			break;
		case 259:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_21", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		case 260:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIYAUGHb", 16);
			return 1;
			break;
		case 261:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIYAUGHc", 16);
			return 1;
			break;
		case 286:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_23", 16);
			return 1;
			break;
		case 288:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_22", 16);
			*uParam5 = 0.3f;
			return 1;
			break;
		case 262:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_19", 16);
			return 1;
			break;
		case 263:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_20", 16);
			return 1;
			break;
		case 289:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_18", 16);
			*uParam5 = 0.214f;
			return 1;
			break;
		case 290:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_HSTRIP", 16);
			return 1;
			break;
		case 292:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_30a", 16);
			return 1;
			break;
		case 293:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_30b", 16);
			return 1;
			break;
		case 294:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_30c", 16);
			return 1;
			break;
		case 295:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_30d", 16);
			return 1;
			break;
		case 299:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_34a", 16);
			return 1;
			break;
		case 300:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_34b", 16);
			return 1;
			break;
		case 301:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_34c", 16);
			return 1;
			break;
		case 302:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_34d", 16);
			return 1;
			break;
		case 303:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_34e", 16);
			return 1;
			break;
		case 296:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_31", 16);
			StringCopy(sParam2, "FLOYD", 16);
			return 1;
			break;
		case 297:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_32", 16);
			StringCopy(sParam2, "FLOYD", 16);
			return 1;
			break;
		case 298:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_33", 16);
			StringCopy(sParam2, "FLOYD", 16);
			return 1;
			break;
		case 305:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_METH", 16);
			return 1;
			break;
		case 306:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_HUNT", 16);
			return 1;
			break;
		case 307:
			return func_444(306, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 308:
			return func_444(306, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 309:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_ARMS", 16);
			return 1;
			break;
		case 312:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_PIER", 16);
			return 1;
			break;
		case 314:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FLY", 16);
			return 1;
			break;
		case 82:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS2_IG_1", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		case 83:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS2_IG_1", 16);
			return 1;
			break;
		case 187:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS2_IG_2", 16);
			return 1;
			break;
		case 287:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_24", 16);
			return 1;
			break;
		case 316:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_2c", 16);
			return 1;
			break;
		case 311:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_27", 16);
			return 1;
			break;
		case 215:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS2_IG_7", 16);
			StringCopy(sParam2, "PRLADY", 16);
			return 1;
			break;
		case 188:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_CRISP", 16);
			*uParam5 = 0.75f;
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 99:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "TRACEY", 16);
			*sParam4 = { __LIB_12__::func_110("PSM_SHOPb_", 3) };
			return 1;
			break;
		case 100:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "TRACEY", 16);
			*sParam4 = { __LIB_12__::func_110("PSM_SHOPc_", 3) };
			return 1;
			break;
		case 101:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "JIMMY", 16);
			*sParam4 = { __LIB_12__::func_110("PSM_SHOPd_", 3) };
			return 1;
			break;
		case 102:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "JIMMY", 16);
			*sParam4 = { __LIB_12__::func_110("PSM_SHOPe_", 3) };
			return 1;
			break;
		case 131:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "", 16);
			StringCopy(sParam3, "FMTAUD", 16);
			StringCopy(sParam4, "MIC_IG_4", 16);
			*sParam4 = { __LIB_12__::func_110(sParam4, 3) };
			return 1;
			break;
		case 132:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "", 16);
			StringCopy(sParam3, "FMTAUD", 16);
			StringCopy(sParam4, "MIC_IG_4", 16);
			*sParam4 = { __LIB_12__::func_110(sParam4, 3) };
			return 1;
			break;
		case 129:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "", 16);
			StringCopy(sParam3, "FMTAUD", 16);
			StringCopy(sParam4, func_446(108, &uVar0, &uVar1, &uVar2), 16);
			return 1;
			break;
		case 233:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam3, "FB3aAUD", 16);
			StringCopy(sParam4, "F3A_INTRO", 16);
			return 1;
			break;
			break;
		case 150:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, __LIB_11__::func_905(10), 16);
			StringCopy(sParam3, "FMTAUD", 16);
			StringCopy(sParam4, "RONEX_IG_5", 16);
			*sParam4 = { __LIB_12__::func_110(sParam4, 2) };
			return 1;
			break;
			break;
		case 234:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam3, "FMTAUD", 16);
			StringCopy(sParam4, "TRV_IG_4", 16);
			return 1;
			break;
			break;
	}
	StringCopy(sParam1, "null", 16);
	StringCopy(sParam3, "null", 16);
	StringCopy(sParam4, "null", 16);
	*uParam5 = -1f;
	return 0;
}

char* func_446(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x789DA
{
	__LIB_6__::func_896(uParam2, 85);
	switch (iParam0)
	{
		case 0:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 1:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "MIC4_IG_1";
			break;
		case 2:
			__LIB_6__::func_896(uParam2, 32);
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 4;
			*uParam3 = 1;
			return "FMM7_9_0";
			break;
		case 3:
			__LIB_6__::func_896(uParam2, 32);
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 4;
			*uParam3 = 1;
			return "FMM7_9_1";
			break;
		case 4:
			__LIB_6__::func_896(uParam2, 32);
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_9_2";
			break;
		case 19:
			*uParam1 = 0;
			*uParam3 = 1;
			return "";
			break;
		case 18:
			*uParam1 = 12;
			*uParam3 = 1;
			return "FMM_0_0";
			break;
		case 5:
			__LIB_6__::func_896(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_2a";
			break;
		case 6:
			__LIB_6__::func_896(uParam2, 2);
			*uParam1 = 22;
			*uParam3 = 1;
			return "FMM_0_2";
			break;
		case 7:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 8:
			__LIB_6__::func_896(uParam2, 2);
			__LIB_7__::func_204(uParam2, 16);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 9:
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_3";
			break;
		case 10:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 4;
			*uParam3 = 1;
			return "FMM_0_6";
			break;
		case 11:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "JIM_IG_5";
			break;
		case 12:
			__LIB_6__::func_896(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		case 13:
			__LIB_6__::func_896(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		case 14:
			__LIB_6__::func_896(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		case 15:
			__LIB_6__::func_896(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		case 16:
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_1";
			break;
		case 17:
			__LIB_6__::func_896(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_4";
			break;
		case 20:
			*uParam1 = 9;
			*uParam3 = 1;
			return "FAMR_IG_2a";
			break;
		case 21:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 22:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 23:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 24:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_0_5";
			break;
		case 25:
			__LIB_6__::func_896(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_0_6";
			break;
		case 26:
			__LIB_6__::func_896(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_3";
			break;
		case 32:
			if (!Global_3)
			{
				__LIB_6__::func_896(uParam2, 2);
				__LIB_7__::func_204(uParam2, 64);
				*uParam1 = 3;
				*uParam3 = 1;
				return "TRA_IG_5";
			}
			else
			{
				__LIB_6__::func_896(uParam2, 2);
				__LIB_7__::func_204(uParam2, 64);
				*uParam1 = 5;
				*uParam3 = 1;
				return "TRA_IG_MD";
			}
			break;
		case 27:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 41:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_3";
			break;
		case 33:
			__LIB_7__::func_204(uParam2, 16);
			__LIB_6__::func_896(uParam2, 8);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 38:
			__LIB_6__::func_896(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_7";
			break;
		case 29:
			__LIB_7__::func_204(uParam2, 64);
			__LIB_6__::func_896(uParam2, 8);
			__LIB_6__::func_896(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_6";
			break;
		case 30:
			return func_446(29, uParam1, uParam2, uParam3);
			break;
		case 31:
			__LIB_6__::func_896(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_8";
			break;
		case 34:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_9";
			break;
		case 35:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_15";
			break;
		case 37:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 39:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_11";
			break;
		case 40:
			*uParam1 = 15;
			*uParam3 = 1;
			return "";
			break;
		case 36:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_1";
			break;
		case 28:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_6";
			break;
		case 42:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 43:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 44:
			*uParam1 = 15;
			*uParam3 = 1;
			return "FMM7_1_0";
			break;
		case 45:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_1_1";
			break;
		case 46:
			__LIB_6__::func_896(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 47:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 48:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_10";
			break;
		case 68:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_10";
			break;
		case 49:
			return func_446(140, uParam1, uParam2, uParam3);
			break;
		case 50:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_4";
			break;
		case 69:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_4";
			break;
		case 51:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 52:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		case 67:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		case 53:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_8";
			break;
		case 54:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_5";
			break;
		case 70:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_5";
			break;
		case 55:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_1";
			break;
		case 71:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_1";
			break;
		case 56:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 57:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 58:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 59:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_11";
			break;
		case 72:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_11";
			break;
		case 60:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 61:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 62:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 63:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_6";
			break;
		case 64:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_1";
			break;
		case 65:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 66:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 73:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 74:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		case 75:
			*uParam1 = 3;
			*uParam3 = 1;
			return "MA_IG_1";
			break;
		case 76:
			return func_446(75, uParam1, uParam2, uParam3);
			break;
		case 77:
			return func_446(75, uParam1, uParam2, uParam3);
			break;
		case 78:
			return func_446(75, uParam1, uParam2, uParam3);
			break;
		case 79:
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		case 80:
			*uParam1 = 5;
			*uParam3 = 1;
			return "MA_IG_1b";
			break;
		case 81:
			*uParam1 = 3;
			*uParam3 = 1;
			return "MA_IG_2";
			break;
		case 82:
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		case 83:
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		case 84:
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM7_3_0";
			break;
		case 85:
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM7_surface";
			break;
		case 86:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_window";
			break;
		case 87:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_4_0";
			break;
		case 88:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 89:
			*uParam1 = 5;
			*uParam3 = 1;
			return "GAR_IG_4";
			break;
		case 90:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_4_3";
			break;
		case 91:
			*uParam1 = 5;
			*uParam3 = 1;
			return "GAR_IG_5";
			break;
		case 92:
			*uParam1 = 4;
			*uParam3 = 1;
			return "GAR_IG_6";
			break;
		case 93:
			__LIB_6__::func_896(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "GAR_IG_7";
			break;
		case 94:
			*uParam1 = 5;
			*uParam3 = 2;
			return "DEN_IG_1";
			break;
		case 95:
			*uParam1 = 3;
			*uParam3 = 2;
			return "DEN_IG_2";
			break;
		case 96:
			*uParam1 = 3;
			*uParam3 = 2;
			return "DEN_IG_3";
			break;
		case 97:
			*uParam1 = 5;
			*uParam3 = 2;
			return "DEN_IG_4";
			break;
		case 98:
			__LIB_7__::func_204(uParam2, 64);
			__LIB_6__::func_896(uParam2, 130);
			*uParam1 = 5;
			*uParam3 = 2;
			return "DEN_RETURN";
			break;
		case 99:
			*uParam1 = 5;
			*uParam3 = 2;
			return "";
			break;
		case 100:
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_1";
			break;
		case 101:
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_2";
			break;
		case 102:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_3";
			break;
		case 103:
			return func_446(102, uParam1, uParam2, uParam3);
			break;
		case 104:
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_4";
			break;
		case 105:
			*uParam1 = 5;
			*uParam3 = 4;
			return "RON_IG_5";
			break;
		case 106:
			*uParam1 = 5;
			*uParam3 = 4;
			return "RON_IG_6";
			break;
		case 107:
			*uParam1 = 5;
			*uParam3 = 4;
			return "MIC_IG_1";
			break;
		case 108:
			*uParam1 = 5;
			*uParam3 = 4;
			return "MIC_IG_2";
			break;
		case 109:
			*uParam1 = 5;
			*uParam3 = 4;
			return "MIC_IG_3";
			break;
		case 110:
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		case 111:
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		case 116:
			__LIB_7__::func_204(uParam2, 64);
			__LIB_6__::func_896(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_1";
			break;
		case 117:
			__LIB_7__::func_204(uParam2, 64);
			__LIB_6__::func_896(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_2";
			break;
		case 112:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_3";
			break;
		case 113:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_4";
			break;
			__LIB_7__::func_204(uParam2, 64);
			__LIB_7__::func_204(uParam2, 16);
			__LIB_6__::func_896(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 114:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_6";
			break;
		case 115:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_7";
			break;
		case 118:
			*uParam1 = 5;
			*uParam3 = 1;
			return "RONEX_IG_1";
			break;
		case 119:
			*uParam1 = 5;
			*uParam3 = 5;
			return "";
			break;
		case 120:
			*uParam1 = 5;
			*uParam3 = 7;
			return "";
			break;
		case 121:
			*uParam1 = 5;
			*uParam3 = 5;
			return "RONEX_IG_4";
			break;
		case 122:
			*uParam1 = 5;
			*uParam3 = 5;
			return "PAT_IG_1";
			break;
		case 123:
			*uParam1 = 5;
			*uParam3 = 5;
			return "PAT_IG_2";
			break;
		case 124:
			__LIB_6__::func_896(uParam2, 32);
			__LIB_7__::func_204(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 5;
			return "PAT_IG_3";
			break;
		case 125:
			*uParam1 = 5;
			*uParam3 = 4;
			__LIB_7__::func_204(uParam2, 64);
			return "";
			break;
		case 126:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_1";
			break;
		case 127:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_2";
			break;
		case 128:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_2";
			break;
		case 129:
			*uParam1 = 0;
			*uParam3 = 4;
			return "";
			break;
		case 130:
			*uParam1 = 12;
			*uParam3 = 4;
			return "FL_IG_3a";
			break;
		case 131:
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		case 132:
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		case 133:
			return func_446(132, uParam1, uParam2, uParam3);
			break;
		case 134:
			return func_446(132, uParam1, uParam2, uParam3);
			break;
		case 135:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_5";
			break;
		case 136:
			*uParam1 = 9;
			*uParam3 = 4;
			return "FL_IG_7";
			break;
		case 137:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 138:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 141:
			*uParam1 = 5;
			*uParam3 = 0;
			return "";
			break;
	}
	*uParam1 = -1;
	*uParam3 = 0;
	return "NULL";
}

int func_468(int iParam0)//Position - 0x7E448
{
	if (Global_113386.f_18533[iParam0] == 32)
	{
		__LIB_12__::func_288(&(Global_113386.f_2363.f_539), 0, 34);
		return 1;
	}
	if (Global_113386.f_18533[iParam0] == 74)
	{
		__LIB_12__::func_288(&(Global_113386.f_2363.f_539), 0, 72);
		__LIB_12__::func_288(&(Global_113386.f_2363.f_539), 1, 73);
		return 1;
	}
	return 0;
}

int func_470(var uParam0)//Position - 0x7E4CA
{
	float fVar0;
	char* sVar1;
	char[] cVar2[8];
	if (!__LIB_12__::func_114())
	{
	}
	else
	{
		return 1;
	}
	fVar0 = -1f;
	if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
	{
		fVar0 = (SYSTEM::TO_FLOAT(STREAMING::GET_PLAYER_SWITCH_STATE()) / SYSTEM::TO_FLOAT(9));
	}
	if (func_588(uParam0->f_2, &sVar1, &cVar2))
	{
		if (fVar0 >= 1f)
		{
			return 1;
		}
		return 0;
	}
	if (fVar0 >= 0.95f)
	{
		return 1;
	}
	return 0;
}

void func_553(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, int iParam6, int iParam7, var uParam8)//Position - 0x80F53
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	*iParam1 = 1;
	*iParam2 = 0;
	*iParam3 = 0;
	if (uParam0->f_17.f_5 < 3 && uParam0->f_17.f_6 < 3)
	{
		if (uParam0->f_17.f_5 != uParam0->f_17.f_6)
		{
			iVar0 = __LIB_0__::func_388(uParam0->f_17.f_5);
			iVar1 = __LIB_0__::func_388(uParam0->f_17.f_6);
			Var2 = { Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/] };
			Var3 = { Global_113386.f_2363.f_539.f_2300[iVar1 /*3*/] };
			if (SYSTEM::VDIST2(Var2, Var3) < (150f * 150f))
			{
				*iParam2 = 1;
			}
		}
	}
	if (__LIB_20__::func_728() == 145)
	{
		*iParam1 = 0;
	}
	if (Global_3)
	{
		*iParam1 = 0;
	}
	if (__LIB_0__::func_517(*uParam8, 64))
	{
		if (!__LIB_0__::func_517(*uParam8, 512))
		{
			__LIB_6__::func_896(uParam8, 512);
		}
		*iParam3 = 2;
		*iParam1 = 0;
	}
	if (((uParam0->f_2 == 174 || uParam0->f_2 == 232) || uParam0->f_2 == 233) || uParam0->f_2 == 231)
	{
		if (*iParam3 == 0)
		{
			*iParam3 = 1;
		}
		*iParam1 = 0;
	}
	if (Global_97830)
	{
		*iParam1 = 0;
	}
	if (!((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7))
	{
		if (*iParam3 == 0)
		{
			*iParam3 = 1;
		}
	}
	else if (*iParam3 == 0)
	{
		iVar4 = uParam0->f_62.f_13;
		if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			iVar4 = PLAYER::PLAYER_PED_ID();
		}
		if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(iVar4, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, false)) == 3)
		{
			if (*iParam3 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_62.f_12, false))
				{
					if (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(uParam0->f_62.f_12))
					{
						*iParam3 = 2;
					}
				}
			}
			if (*iParam3 == 0)
			{
				iVar5 = 0;
				iVar6 = 0;
				iVar7 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar4);
				if (INTERIOR::IS_VALID_INTERIOR(iVar7))
				{
					iVar5 = INTERIOR::GET_INTERIOR_GROUP_ID(iVar7);
				}
				if (INTERIOR::IS_VALID_INTERIOR(uParam0->f_16))
				{
					iVar6 = INTERIOR::GET_INTERIOR_GROUP_ID(uParam0->f_16);
				}
				if (iVar5 != iVar6)
				{
					*iParam3 = 2;
				}
				else
				{
					if (iVar5 != 0)
					{
					}
					if (iVar6 != 0)
					{
					}
				}
			}
		}
	}
	if (!func_554(uParam0->f_2, fParam4, &uVar8, fParam5))
	{
	}
	*iParam6 = 0;
	*iParam7 = 0;
	if (Global_100164 > 0)
	{
		*iParam7 = 1;
	}
}

int func_554(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x8118C
{
	*uParam2 = 1f;
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		switch (iParam0)
		{
			case 211:
			case 213:
				*uParam3 = -0.0922f;
				*uParam1 = -32.8439f;
				return 1;
				break;
			case 291:
				*uParam3 = -0.092f;
				*uParam1 = -3.5553f;
				return 1;
				break;
			case 299:
				*uParam3 = -0.0916f;
				*uParam1 = -1.4212f;
				return 1;
				break;
			case 293:
			case 294:
				*uParam3 = -0.0944f;
				*uParam1 = -4.2087f;
				return 1;
				break;
			case 292:
			case 295:
				*uParam3 = -0.092f;
				*uParam1 = -2.1053f;
				return 1;
				break;
			case 312:
				*uParam3 = 0f;
				*uParam1 = -7.6775f;
				return 1;
				break;
		}
		*uParam3 = 0f;
		*uParam1 = 0f;
		return 1;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			*uParam1 = 999f;
			*uParam3 = 999f;
			return 0;
			break;
		case 134:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		case 105:
			*uParam3 = -325.239f;
			*uParam1 = -9.9f;
			return 1;
			break;
		case 280:
			if (!Global_3)
			{
				*uParam3 = -60f;
				*uParam1 = 0f;
				return 1;
			}
			break;
		case 224:
			return func_554(222, uParam1, uParam2, uParam3);
			break;
		case 193:
			*uParam3 = -9f;
			*uParam1 = 0f;
			return 1;
			break;
		case 236:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		case 289:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		case 290:
			return func_554(289, uParam1, uParam2, uParam3);
			break;
		case 278:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		case 271:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		case 245:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		case 40:
			return func_554(245, uParam1, uParam2, uParam3);
			break;
		case 192:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		case 89:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		case 90:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		case 127:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
	}
	*uParam1 = 999f;
	*uParam3 = 999f;
	return 0;
}

int func_566(int iParam0, int iParam1)//Position - 0x81A5B
{
	var uVar0;
	float fVar1;
	int iVar2;
	if ((((((iParam1 == 5 || iParam1 == 6) || iParam1 == 7) || iParam1 == 1) || iParam1 == 2) || iParam1 == 3) || iParam1 == 4)
	{
		return 0;
	}
	if (func_432(iParam1, &uVar0, &fVar1))
	{
		return 0;
	}
	iVar2 = __LIB_37__::func_405(iParam0);
	Global_113386.f_18533.f_24[iParam0 /*5*/][iVar2] = 0;
	return 1;
}

void func_576(int iParam0, bool bParam1)//Position - 0x826F5
{
	bool bVar0;
	struct<3> Var1;
	__LIB_40__::func_764(iParam0, 0);
	func_190(iParam0, 0);
	bVar0 = __LIB_20__::func_509(iParam0);
	if (__LIB_0__::func_317(bVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (PATHFIND::GET_SAFE_COORD_FOR_PED(Global_113386.f_2363.f_539.f_2300[bVar0 /*3*/], bParam1, &Var1, 16))
			{
				Global_113386.f_2363.f_539.f_2300[bVar0 /*3*/] = { Var1 };
			}
		}
	}
}

int func_584(int iParam0, char* sParam1)//Position - 0x8318E
{
	switch (iParam0)
	{
		case 23:
			return func_584(208, sParam1);
			break;
		case 42:
			StringCopy(sParam1, "player_scene_ft_franklin1", 32);
			return 1;
			break;
		case 43:
			return func_584(42, sParam1);
			break;
		case 44:
			return func_584(42, sParam1);
			break;
		case 45:
			return func_584(42, sParam1);
			break;
		case 75:
			StringCopy(sParam1, "player_scene_m_fbi2", 32);
			return 1;
			break;
		case 76:
			StringCopy(sParam1, "player_scene_m_fbi2", 32);
			return 1;
			break;
		case 105:
			StringCopy(sParam1, "player_scene_mf_traffic", 32);
			return 1;
			break;
		case 106:
			return func_584(105, sParam1);
			break;
		case 107:
			return func_584(105, sParam1);
			break;
		case 98:
			StringCopy(sParam1, "player_scene_m_shopping", 32);
			return 1;
			break;
		case 99:
			return func_584(98, sParam1);
			break;
		case 100:
			return func_584(98, sParam1);
			break;
		case 101:
			return func_584(98, sParam1);
			break;
		case 102:
			return func_584(98, sParam1);
			break;
		case 170:
			return func_584(98, sParam1);
			break;
		case 171:
			return func_584(98, sParam1);
			break;
		case 172:
			return func_584(98, sParam1);
			break;
		case 108:
			StringCopy(sParam1, "player_scene_t_bbfight", 32);
			return 1;
			break;
		case 109:
			return func_584(108, sParam1);
			break;
		case 157:
			StringCopy(sParam1, "player_scene_t_bbfight", 32);
			return 1;
			break;
		case 166:
			StringCopy(sParam1, "player_scene_t_bbfight", 32);
			return 1;
			break;
		case 165:
			StringCopy(sParam1, "player_scene_t_bbfight", 32);
			return 1;
			break;
		case 97:
			StringCopy(sParam1, "player_scene_m_cinema", 32);
			return 1;
			break;
		case 158:
			return func_584(97, sParam1);
			break;
		case 86:
			StringCopy(sParam1, "player_scene_m_kids", 32);
			return 1;
			break;
		case 168:
			StringCopy(sParam1, "player_scene_m_kids", 32);
			return 1;
			break;
		case 173:
			StringCopy(sParam1, "player_scene_m_kids", 32);
			return 1;
			break;
		case 156:
			StringCopy(sParam1, "player_scene_m_kids", 32);
			return 1;
			break;
		case 94:
			StringCopy(sParam1, "player_scene_m_shopping", 32);
			return 1;
			break;
		case 151:
			StringCopy(sParam1, "player_scene_m_shopping", 32);
			return 1;
			break;
		case 152:
			StringCopy(sParam1, "player_scene_m_shopping", 32);
			return 1;
			break;
		case 124:
			StringCopy(sParam1, "player_scene_t_park", 32);
			return 1;
			break;
		case 208:
			StringCopy(sParam1, "player_scene_mf_traffic", 32);
			return 1;
			break;
		case 209:
			return func_584(208, sParam1);
			break;
		case 210:
			return func_584(208, sParam1);
			break;
		case 218:
			StringCopy(sParam1, "player_scene_f_lamtaunt", 32);
			return 1;
			break;
		case 219:
			return func_584(218, sParam1);
			break;
		case 220:
			return func_584(218, sParam1);
			break;
		case 225:
			return func_584(218, sParam1);
			break;
		case 215:
			StringCopy(sParam1, "player_scene_f_taxi", 32);
			return 1;
			break;
		case 196:
			StringCopy(sParam1, "player_scene_f_taxi", 32);
			return 1;
			break;
		case 235:
			StringCopy(sParam1, "player_scene_t_insult", 32);
			return 1;
			break;
		case 239:
			StringCopy(sParam1, "player_scene_t_bbfight", 32);
			return 1;
			break;
		case 247:
			StringCopy(sParam1, "player_scene_t_insult", 32);
			return 1;
			break;
		case 281:
			StringCopy(sParam1, "player_scene_t_chasecar", 32);
			return 1;
			break;
		case 282:
			return func_584(281, sParam1);
			break;
		case 283:
			return func_584(281, sParam1);
			break;
		case 284:
			return func_584(281, sParam1);
			break;
		case 275:
			return func_584(281, sParam1);
			break;
		case 276:
			return func_584(275, sParam1);
			break;
		case 277:
			return func_584(275, sParam1);
			break;
		case 273:
			StringCopy(sParam1, "player_scene_t_park", 32);
			return 1;
			break;
		case 245:
			StringCopy(sParam1, "player_scene_t_park", 32);
			return 1;
			break;
		case 40:
			return func_584(245, sParam1);
			break;
		case 310:
			StringCopy(sParam1, "player_scene_t_park", 32);
			return 1;
			break;
		case 311:
			StringCopy(sParam1, "player_scene_t_park", 32);
			return 1;
			break;
		case 315:
			StringCopy(sParam1, "player_scene_t_park", 32);
			return 1;
			break;
		case 274:
			return func_584(273, sParam1);
			break;
		case 286:
			StringCopy(sParam1, "player_scene_t_insult", 32);
			return 1;
			break;
		case 288:
			StringCopy(sParam1, "player_scene_t_insult", 32);
			return 1;
			break;
		case 280:
			StringCopy(sParam1, "player_scene_t_tie", 32);
			return 1;
			break;
		case 285:
			StringCopy(sParam1, "player_scene_t_bbfight", 32);
			return 1;
			break;
		case 246:
			StringCopy(sParam1, "player_scene_t_bbfight", 32);
			return 1;
			break;
		case 256:
			StringCopy(sParam1, "player_scene_t_bbfight", 32);
			return 1;
			break;
		case 257:
			return func_584(256, sParam1);
			break;
		case 258:
			return func_584(256, sParam1);
			break;
		case 259:
			StringCopy(sParam1, "player_scene_t_bbfight", 32);
			return 1;
			break;
		case 260:
			return func_584(259, sParam1);
			break;
		case 261:
			return func_584(259, sParam1);
			break;
		case 263:
			StringCopy(sParam1, "player_scene_t_insult", 32);
			return 1;
			break;
		case 244:
			StringCopy(sParam1, "player_scene_t_insult", 32);
			return 1;
			break;
		case 237:
			StringCopy(sParam1, "player_scene_t_insult", 32);
			return 1;
			break;
		case 268:
			StringCopy(sParam1, "player_scene_ft_franklin1", 32);
			return 1;
			break;
	}
	return 0;
}

int func_588(int iParam0, char* sParam1, char* sParam2)//Position - 0x83EB0
{
	StringCopy(sParam2, "", 64);
	switch (iParam0)
	{
		case 174:
			StringCopy(sParam1, "", 64);
			StringCopy(sParam2, "_2", 64);
			return 0;
			break;
		case 77:
			StringCopy(sParam1, "BED_EXIT_Cam", 64);
			return 1;
			break;
		case 78:
			StringCopy(sParam1, "BED_EXIT_Cam", 64);
			return 1;
			break;
		case 129:
			StringCopy(sParam1, "Switch_ON_CLUBCHAIR_CAM", 64);
			return 1;
			break;
		case 108:
			StringCopy(sParam1, "PARKBENCH_SMOKE_RANGER_EXIT_CAM", 64);
			return 1;
			break;
		case 109:
			return func_588(108, sParam1, sParam2);
			break;
		case 115:
			StringCopy(sParam1, "Cafe_Exit_CAM", 64);
			return 1;
			break;
		case 116:
			return func_588(115, sParam1, sParam2);
			break;
		case 117:
			return func_588(115, sParam1, sParam2);
			break;
		case 97:
			return func_588(115, sParam1, sParam2);
			break;
		case 162:
			return func_588(115, sParam1, sParam2);
			break;
		case 86:
			StringCopy(sParam1, "EXIT_Cam", 64);
			return 1;
			break;
		case 87:
			StringCopy(sParam1, "SunLounger_GetUp_CAM", 64);
			return 1;
			break;
		case 88:
			return func_588(87, sParam1, sParam2);
			break;
		case 184:
			return func_588(87, sParam1, sParam2);
			break;
		case 185:
			return func_588(87, sParam1, sParam2);
			break;
		case 103:
			StringCopy(sParam1, "pier_lean_smoke_outro_CAM", 64);
			return 1;
			break;
		case 134:
			StringCopy(sParam1, "Drunk_Exit_CAM", 64);
			return 1;
			break;
		case 198:
			StringCopy(sParam1, "Garbage_Toss_CAM", 64);
			return 1;
			break;
		case 199:
			StringCopy(sParam1, "Garbage_Toss_CAM", 64);
			return 1;
			break;
		case 200:
			StringCopy(sParam1, "THROW_CUP_EXIT_CAM", 64);
			return 1;
			break;
		case 201:
			StringCopy(sParam1, "HIT_CUP_HAND_EXIT_CAM", 64);
			return 1;
			break;
		case 202:
			StringCopy(sParam1, "001942_02_GC_FRAS_IG_5_EXIT_CAM", 64);
			return 1;
			break;
		case 223:
			StringCopy(sParam1, "WipeHands_CAM", 64);
			return 1;
			break;
		case 224:
			StringCopy(sParam1, "WipeRight_CAM", 64);
			return 1;
			break;
		case 222:
			StringCopy(sParam1, "CheckShoe_CAM", 64);
			return 1;
			break;
		case 238:
			StringCopy(sParam1, "trev_leave_stripclub_outro_CAM", 64);
			return 1;
			break;
		case 296:
			StringCopy(sParam1, "BEAR_IN_FLOYDS_FACE_EXIT_CAM", 64);
			return 1;
			break;
		case 297:
			StringCopy(sParam1, "BEAR_FLOYDS_FACE_SMELL_EXIT_CAM", 64);
			return 1;
			break;
		case 221:
			StringCopy(sParam1, "switch_CAM", 64);
			return 1;
			break;
		case 255:
			StringCopy(sParam1, "TRVS_IG_11_EXIT_CAM", 64);
			return 1;
			break;
		case 245:
			StringCopy(sParam1, "TREV_SMOKING_METH_EXIT_CAM", 64);
			return 1;
			break;
		case 40:
			return func_588(245, sParam1, sParam2);
			break;
		case 263:
			StringCopy(sParam1, "TREV_SCARES_TRAMP_EXIT_CAM", 64);
			return 1;
			break;
		case 289:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 290:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 254:
			StringCopy(sParam1, "trev_exit_lingerie_shop_outro_CAM", 64);
			return 1;
			break;
		case 285:
			StringCopy(sParam1, "THROW_EXIT_CAM", 64);
			return 1;
			break;
		case 259:
			StringCopy(sParam1, "001430_01_TRVS_21_YELLS_AT_DOORMAN_EXIT_CAM", 64);
			return 1;
			break;
		case 286:
			StringCopy(sParam1, "001218_03_TRVS_23_RUDE_AT_CAFE_EXIT_CAM", 64);
			return 1;
			break;
		case 287:
			StringCopy(sParam1, "TAI_CHI_CAM", 64);
			return 1;
			break;
		case 288:
			StringCopy(sParam1, "EXIT_Cam", 64);
			return 1;
			break;
		case 121:
			StringCopy(sParam1, "EXIT_Cam", 64);
			return 1;
			break;
		case 122:
			StringCopy(sParam1, "ARGUE_WITH_AMANDA_EXIT_CAM", 64);
			return 1;
			break;
		case 196:
			StringCopy(sParam1, "Tanisha_Argue_CAM", 64);
			return 1;
			break;
		case 197:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 218:
			StringCopy(sParam1, "GANG_TAUNT_EXIT_CAM", 64);
			return 1;
			break;
		case 219:
			StringCopy(sParam1, "GANG_TAUNT_WITH_LAMAR_EXIT_CAM", 64);
			return 1;
			break;
		case 220:
			StringCopy(sParam1, "FRAS_IG_6_P5_EXIT_CAM", 64);
			return 1;
			break;
		case 225:
			StringCopy(sParam1, "FRAS_IG_10_P3_EXIT_CAM", 64);
			return 1;
			break;
		case 232:
			StringCopy(sParam1, "Franklin_call_Michael_EXIT_CAM", 64);
			return 1;
			break;
		case 233:
			StringCopy(sParam1, "Franklin_call_Michael_EXIT_CAM", 64);
			return 1;
			break;
		case 193:
			StringCopy(sParam1, "exit_dispensary_outro_CAM", 64);
			return 1;
			break;
		case 234:
			StringCopy(sParam1, "TREV_ON_TOILET_EXIT_CAM", 64);
			return 1;
			break;
		case 316:
			StringCopy(sParam1, "TREV_JERKING_OFF_EXIT_CAM", 64);
			return 1;
			break;
		case 192:
			StringCopy(sParam1, "002110_04_MAGD_3_WEED_EXCHANGE_CAM", 64);
			return 1;
			break;
		case 153:
			StringCopy(sParam1, "001400_01_MICS3_5_BYE_TO_SOLOMAN_EXIT_CAM", 64);
			return 1;
			break;
		case 154:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 161:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 164:
			StringCopy(sParam1, "001404_01_MICS3_16_READS_SCRIPT_EXIT_CAM", 64);
			return 1;
			break;
		case 159:
			StringCopy(sParam1, "001406_01_MICS3_7_EXITS_BARBER_EXIT_CAM", 64);
			return 1;
			break;
		case 160:
			StringCopy(sParam1, "001405_01_MICS3_8_EXITS_FANCYSHOP_EXIT_CAM", 64);
			return 1;
			break;
		case 94:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 262:
			StringCopy(sParam1, "001500_03_TRVS_19_KO_NEIGHBOUR_EXIT_CAM", 64);
			return 1;
			break;
		case 248:
			StringCopy(sParam1, "001220_03_GC_TRVS_IG_7_EXIT_CAM", 64);
			return 1;
			break;
		case 249:
			StringCopy(sParam1, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_CAM", 64);
			return 1;
			break;
		case 11:
			StringCopy(sParam1, "002113_02_FRAS_15_STRIPCLUB_EXIT_CAM", 64);
			return 1;
			break;
		case 298:
			StringCopy(sParam1, "pineapple_exit_cam", 64);
			return 1;
			break;
		case 310:
			StringCopy(sParam1, "001433_01_TRVS_26_DIGGING_EXIT_CAM", 64);
			return 1;
			break;
		case 247:
			StringCopy(sParam1, "TREV_ANNOYS_SUNBATHERS_EXIT_CAM", 64);
			return 1;
			break;
		case 246:
			StringCopy(sParam1, "001426_03_TRVS_5_PUSHES_BODYBUILDER_EXIT_CAM", 64);
			return 1;
			break;
		case 98:
			StringCopy(sParam1, "000606_02_MICS1_5_AMANDA_EXITS_CAR_EXIT_CAM", 64);
			return 1;
			break;
		case 150:
			StringCopy(sParam1, "RONEX_IG5_P2_CAM", 64);
			return 1;
			break;
		case 170:
			StringCopy(sParam1, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_EXIT_CAM", 64);
			return 1;
			break;
		case 171:
			StringCopy(sParam1, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_CAM", 64);
			return 1;
			break;
		case 172:
			StringCopy(sParam1, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_CAM", 64);
			return 1;
			break;
		case 125:
			StringCopy(sParam1, "Im_A_Married_Man_CAM", 64);
			return 1;
			break;
		case 157:
			StringCopy(sParam1, "001396_01_MICS3_6_REJECTED_ENTRY_EXIT_CAM", 64);
			return 1;
			break;
		case 165:
			StringCopy(sParam1, "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_EXIT_CAM", 64);
			return 1;
			break;
		case 158:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 166:
			StringCopy(sParam1, "001393_02_MICS3_3_TALKS_TO_GUARD_EXIT_CAM", 64);
			return 1;
			break;
		case 167:
			StringCopy(sParam1, "001513_03_GC_MICS3_IG_4_ON_SET_W_JMY_EXIT_CAM", 64);
			return 1;
			break;
		case 169:
			StringCopy(sParam1, "001518_02_MICS3_11_GAMING_W_JMY_EXIT_CAM", 64);
			StringCopy(sParam2, "_2", 64);
			return 1;
			break;
		case 155:
			StringCopy(sParam1, "001833_01_MICS3_18_AMA_TENNIS_EXIT_CAM", 64);
			return 1;
			break;
		case 156:
			StringCopy(sParam1, "AROUND_THE_TABLE_SELFISH_CAM", 64);
			return 1;
			break;
		case 204:
			return func_588(205, sParam1, sParam2);
			break;
		case 205:
			StringCopy(sParam1, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT_CAM", 64);
			return 1;
			break;
		case 203:
			return func_588(205, sParam1, sParam2);
			break;
		case 206:
			return func_588(205, sParam1, sParam2);
			break;
		case 207:
			return func_588(205, sParam1, sParam2);
			break;
		case 291:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 264:
			StringCopy(sParam1, "002002_01_TRVS_14_DUMPSTER_EXIT_CAM", 64);
			return 1;
			break;
		case 186:
			StringCopy(sParam1, "001918_01_FRAS_V2_1_CLEANING_APT_EXIT_CAM", 64);
			StringCopy(sParam2, "_2", 64);
			return 1;
			break;
		case 191:
			StringCopy(sParam1, "001915_01_FRAS_V2_8_WATCHING_TV_EXIT_CAM", 64);
			return 1;
			break;
		case 188:
			StringCopy(sParam1, "001922_01_FRAS_V2_3_SNACKING_EXIT_CAM", 64);
			StringCopy(sParam2, "_4", 64);
			return 1;
			break;
		case 189:
			StringCopy(sParam1, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT_CAM", 64);
			StringCopy(sParam2, "_2", 64);
			return 1;
			break;
		case 190:
			StringCopy(sParam1, "001947_01_GC_FRAS_V2_IG_6_EXIT_CAM", 64);
			StringCopy(sParam2, "_4", 64);
			return 1;
			break;
		case 278:
			StringCopy(sParam1, "002055_01_TRVS_17_NAKED_ON_BRIDGE_EXIT_CAM", 64);
			return 1;
			break;
		case 311:
			StringCopy(sParam1, "002057_03_TRVS_27_FLUSHES_FOOT_EXIT_CAM", 64);
			return 1;
			break;
		case 215:
			StringCopy(sParam1, "001938_01_FRAS_V2_7_BYE_TAXI_EXIT_CAM", 64);
			return 1;
			break;
		case 214:
			StringCopy(sParam1, "001946_01_GC_FRAS_V2_IG_5_EXIT_CAM", 64);
			return 1;
			break;
		case 212:
			return func_588(214, sParam1, sParam2);
			break;
		case 163:
			StringCopy(sParam1, "001520_02_MICS3_14_GETS_READY_EXIT_CAM", 64);
			return 1;
			break;
		case 151:
			StringCopy(sParam1, "001510_02_GC_MICS3_IG_1_EXIT_CAM", 64);
			return 1;
			break;
		case 82:
			StringCopy(sParam1, "001671_02_MICS2_1_WAKES_UP_SCREAMING_EXIT_CAM", 64);
			StringCopy(sParam2, "_2", 64);
			return 1;
			break;
		case 83:
			StringCopy(sParam1, "001672_02_MICS2_1_WAKES_UP_SCARED_EXIT_CAM", 64);
			return 1;
			break;
		case 85:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 84:
			StringCopy(sParam1, "M_GetOut_countryside_CAM", 64);
			return 1;
			break;
		case 124:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 187:
			StringCopy(sParam1, "001914_01_FRAS_V2_2_ON_CELL_EXIT_CAM", 64);
			StringCopy(sParam2, "_3", 64);
			return 1;
			break;
		case 168:
			StringCopy(sParam1, "001520_02_MICS3_14_TV_W_KIDS_EXIT_CAM", 64);
			return 1;
			break;
		case 173:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 152:
			StringCopy(sParam1, "001523_01_MICS3_9_LOUNGE_CHAIRS_EXIT_CAM", 64);
			return 1;
			break;
		case 292:
			StringCopy(sParam1, "Bed_GetUp_1_CAM", 64);
			StringCopy(sParam2, "_2", 64);
			return 1;
			break;
		case 293:
			StringCopy(sParam1, "Bed_GetUp_2_CAM", 64);
			StringCopy(sParam2, "_2", 64);
			return 1;
			break;
		case 294:
			return func_588(293, sParam1, sParam2);
			break;
		case 295:
			return func_588(292, sParam1, sParam2);
			break;
		case 299:
			StringCopy(sParam1, "Console_Wasnt_Fun_CAM", 64);
			StringCopy(sParam2, "_2", 64);
			return 1;
			break;
		case 300:
			return func_588(303, sParam1, sParam2);
			break;
		case 301:
			return func_588(303, sParam1, sParam2);
			break;
		case 302:
			return func_588(303, sParam1, sParam2);
			break;
		case 303:
			StringCopy(sParam1, "Console_Get_Along_CAM", 64);
			StringCopy(sParam2, "_2", 64);
			return 1;
			break;
		case 235:
			StringCopy(sParam1, "001443_01_TRVS_28_EXIT_CAM", 64);
			return 1;
			break;
		case 236:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 237:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 239:
			StringCopy(sParam1, "001215_02_TRVS_12_ESCORTED_OUT_EXIT_CAM", 64);
			return 1;
			break;
		case 273:
			StringCopy(sParam1, "TREV_FOUNTAIN_PUKE_EXIT_CAM", 64);
			return 1;
			break;
		case 274:
			return func_588(273, sParam1, sParam2);
			break;
		case 315:
			StringCopy(sParam1, "TREV_SINK_EXIT_CAM", 64);
			return 1;
			break;
		case 250:
			StringCopy(sParam1, "001209_01_TRVS_3_AT_THE_DOCKS_EXIT_CAM", 64);
			return 1;
			break;
		case 251:
			return func_588(250, sParam1, sParam2);
			break;
		case 252:
			return func_588(250, sParam1, sParam2);
			break;
		case 253:
			return func_588(250, sParam1, sParam2);
			break;
		case 175:
			StringCopy(sParam1, "Sleep_GetUp_RubEyes_CAM", 64);
			StringCopy(sParam2, "_2", 64);
			return 1;
			break;
		case 176:
			return func_588(175, sParam1, sParam2);
			break;
		case 177:
			StringCopy(sParam1, "002333_01_FRAS_V2_10_NAPPING_EXIT_CAM", 64);
			StringCopy(sParam2, "", 64);
			return 1;
			break;
		case 178:
			StringCopy(sParam1, "002334_02_FRAS_V2_11_GETTING_DRESSED_EXIT_CAM", 64);
			StringCopy(sParam2, "", 64);
			return 1;
			break;
		case 179:
			StringCopy(sParam1, "Bed_Reading_GetUp_CAM", 64);
			return 1;
			break;
		case 180:
			return func_588(179, sParam1, sParam2);
			break;
		case 181:
			StringCopy(sParam1, "PressUps_OUT_CAM", 64);
			return 1;
			break;
		case 182:
			return func_588(181, sParam1, sParam2);
			break;
		case 183:
			return func_588(181, sParam1, sParam2);
			break;
		case 89:
			StringCopy(sParam1, "SLEEP_IN_CAR_CAM", 64);
			return 1;
			break;
		case 90:
			return func_588(89, sParam1, sParam2);
			break;
		case 127:
			StringCopy(sParam1, "SLEEP_IN_CAR_PREMIER_CAM", 64);
			return 1;
			break;
		case 91:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 92:
			return func_588(91, sParam1, sParam2);
			break;
		case 93:
			return func_588(91, sParam1, sParam2);
			break;
		case 104:
			return func_588(91, sParam1, sParam2);
			break;
		case 81:
			return func_588(91, sParam1, sParam2);
			break;
		case 95:
			StringCopy(sParam1, "MIC_EXIT_RESTAURANT_EXIT_CAM", 64);
			return 1;
			break;
		case 226:
		case 227:
		case 230:
			StringCopy(sParam1, "SWITCH_01_CAM", 64);
			return 1;
			break;
			break;
		case 228:
		case 229:
			StringCopy(sParam1, "SWITCH_02_CAM", 64);
			return 1;
			break;
			break;
		case 114:
			StringCopy(sParam1, "MICS1_IG_11_EXIT_CAM", 64);
			return 1;
			break;
		case 112:
			StringCopy(sParam1, "SITTING_ON_CAR_BONNET_EXIT_CAM", 64);
			return 1;
			break;
		case 113:
			return func_588(112, sParam1, sParam2);
			break;
		case 123:
			return func_588(112, sParam1, sParam2);
			break;
		case 41:
			return func_588(135, sParam1, sParam2);
			break;
		case 135:
			StringCopy(sParam1, "SITTING_ON_CAR_PREMIERE_EXIT_CAM", 64);
			return 1;
			break;
		case 136:
			return func_588(135, sParam1, sParam2);
			break;
		case 137:
			return func_588(135, sParam1, sParam2);
			break;
		case 138:
			return func_588(135, sParam1, sParam2);
			break;
		case 139:
			return func_588(135, sParam1, sParam2);
			break;
		case 271:
			StringCopy(sParam1, "TREV_SLOUCHED_GET_UP_EXIT_CAM", 64);
			return 1;
			break;
		case 211:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 213:
			return func_588(211, sParam1, sParam2);
			break;
		case 216:
			return func_588(211, sParam1, sParam2);
			break;
		case 217:
			return func_588(211, sParam1, sParam2);
			break;
		case 243:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 244:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 280:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
	}
	StringCopy(sParam1, "null", 64);
	return 0;
}

int func_589(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x84F63
{
	struct<3> Var0;
	float fVar1;
	char[] cVar2[8];
	struct<3> Var3;
	float fVar4;
	char[] cVar5[8];
	*uParam3 = 40f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 1:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 2:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 3:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 4:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 5:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 6:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 7:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 11:
			*uParam1 = { 153.3026f, -1308.075f, 31.1902f };
			*uParam2 = { 2.0694f, 0f, 68.304f };
			*uParam3 = 45f;
			return 1;
			break;
		case 8:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 9:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 10:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 13:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 14:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 15:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 12:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 16:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 17:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 18:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 19:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 20:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 22:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 74:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 23:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 24:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 67:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 25:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 26:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 27:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 28:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 58:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 59:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 60:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 38:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 39:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 40:
			*uParam1 = { 1976.5756f, 3803.5605f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		case 41:
			*uParam1 = { 1393.829f, 3721.21f, 59.6646f };
			*uParam2 = { -77.4667f, -3.4089f, -29.2756f };
			*uParam3 = 45f;
			return 1;
			break;
		case 42:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 43:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 44:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 124:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 66:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 61:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 62:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 63:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 69:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 64:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 65:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 75:
			*uParam1 = { 1421.37f, -1909.6f, 70f };
			*uParam2 = { -89.499535f, -1E-06f, 166.04057f };
			*uParam3 = 50f;
			return 1;
			break;
		case 76:
			*uParam1 = { Vector(148.1897f, -2306.5835f, 1375.1461f) + Vector(-42.5f, 0f, 0f) };
			*uParam2 = { -78.9021f, 0f, 25.2484f };
			return 1;
			break;
		case 77:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		case 78:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		case 79:
			*uParam1 = { -806.1221f, 173.3714f, 73.0859f };
			*uParam2 = { -1.4712f, 0f, -95.2503f };
			*uParam3 = 50f;
			return 1;
			break;
		case 80:
			*uParam1 = { -777.6068f, 187.453f, 74.1732f };
			*uParam2 = { -10.8798f, 0f, -156.0149f };
			return 1;
			break;
		case 81:
			*uParam1 = { -1313.857f, 117.7842f, 83.0089f };
			*uParam2 = { -81.4288f, -0.0005f, -4.4763f };
			*uParam3 = 45f;
			return 1;
			break;
		case 82:
			*uParam1 = { -837.0487f, 180.2459f, 70.842f };
			*uParam2 = { 9.3514f, -0.0001f, -106.3141f };
			*uParam3 = 50f;
			return 1;
			break;
		case 83:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		case 84:
			*uParam1 = { 1976.5756f, 3803.5605f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		case 85:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		case 86:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		case 87:
			*uParam1 = { -779.5107f, 184.6536f, 97.9522f };
			*uParam2 = { -83.1792f, -0.0008f, 33.1776f };
			*uParam3 = 45f;
			return 1;
			break;
		case 88:
			*uParam1 = { -1350.3981f, 355.7088f, 89.1898f };
			*uParam2 = { -83.1793f, -0.0008f, 94.8576f };
			*uParam3 = 45f;
			return 1;
			break;
		case 184:
			*uParam1 = { -11.4584f, 509.3831f, 199.7681f };
			*uParam2 = { -83.1793f, -0.0008f, 10.655f };
			*uParam3 = 45f;
			return 1;
			break;
		case 185:
			*uParam1 = { 21.0263f, 518.8938f, 195.3684f };
			*uParam2 = { -83.1792f, -0.0008f, 10.6496f };
			*uParam3 = 45f;
			return 1;
			break;
		case 186:
			*uParam1 = { -7.0679f, 497.5869f, 175.1577f };
			*uParam2 = { -8.6355f, 0f, -18.0968f };
			*uParam3 = 69.428f;
			return 1;
			break;
		case 187:
			*uParam1 = { 25.1207f, 538.1634f, 176.3949f };
			*uParam2 = { -9.1084f, 0f, 136.7439f };
			*uParam3 = 60f;
			return 1;
			break;
		case 188:
			*uParam1 = { 28.0599f, 519.777f, 170.9287f };
			*uParam2 = { 1.0712f, 0f, 66.1406f };
			*uParam3 = 62.3773f;
			return 1;
			break;
		case 189:
			*uParam1 = { -7.0679f, 497.5869f, 175.1577f };
			*uParam2 = { -8.6355f, 0f, -18.0968f };
			*uParam3 = 69.428f;
			return 1;
			break;
		case 190:
			*uParam1 = { 28.0599f, 519.777f, 170.9287f };
			*uParam2 = { 1.0712f, 0f, 66.1406f };
			*uParam3 = 62.3773f;
			return 1;
			break;
		case 191:
			*uParam1 = { 41.506f, 518.56f, 172.883f };
			*uParam2 = { -3.496f, 0f, 80.268f };
			*uParam3 = 45f;
			return 1;
			break;
		case 94:
			*uParam1 = { -115.9504f, 359.3368f, 138.8368f };
			*uParam2 = { -84.145f, -0.0028f, 30.813f };
			*uParam3 = 45f;
			return 1;
			break;
		case 95:
			*uParam1 = { 388.4338f, 181.3034f, 128.5381f };
			*uParam2 = { -82.1573f, 0.0028f, -133.5252f };
			*uParam3 = 45f;
			return 1;
			break;
		case 96:
			*uParam1 = { -1368.7029f, 50.4611f, 55.6791f };
			*uParam2 = { -25.2992f, 0f, 39.0928f };
			return 1;
			break;
		case 97:
			*uParam1 = { -1412.4731f, -197.0279f, 73.1327f };
			*uParam2 = { -85.8754f, 0.0301f, 103.5493f };
			*uParam3 = 45f;
			return 1;
			break;
		case 89:
			*uParam1 = { -828.6376f, 153.5095f, 94.4233f };
			*uParam2 = { -82.4779f, -87.738f, -38.5885f };
			*uParam3 = 45f;
			return 1;
			break;
		case 90:
			*uParam1 = { -886.2003f, 130.811f, 84.4115f };
			*uParam2 = { -82.1702f, -15.3164f, 27.7905f };
			*uParam3 = 45f;
			return 1;
			break;
		case 91:
			*uParam1 = { -1208.4165f, -952.6558f, 28.0064f };
			*uParam2 = { -81.4289f, -0.0005f, 145.6032f };
			*uParam3 = 45f;
			return 1;
			break;
		case 92:
			*uParam1 = { -848.757f, 852.361f, 228.9125f };
			*uParam2 = { -81.4289f, -0.0005f, -13.8233f };
			*uParam3 = 45f;
			return 1;
			break;
		case 93:
			*uParam1 = { -1267.4175f, -707.9901f, 48.813f };
			*uParam2 = { -81.4294f, -0.001f, 157.5229f };
			*uParam3 = 45f;
			return 1;
			break;
		case 108:
			*uParam1 = { 252.454f, 1118.0386f, 245.2481f };
			*uParam2 = { -77.0357f, 0.0002f, -101.5461f };
			*uParam3 = 45f;
			return 1;
			break;
		case 109:
			*uParam1 = { -1817.594f, -685.8846f, 35.5217f };
			*uParam2 = { -77.0356f, 0.0002f, 3.4539f };
			*uParam3 = 45f;
			return 1;
			break;
		case 112:
			*uParam1 = { 815.9318f, 1275.7186f, 387.0281f };
			*uParam2 = { -76.9465f, 0.0003f, 175.4883f };
			*uParam3 = 45f;
			return 1;
			break;
		case 113:
			*uParam1 = { -1664.9277f, 493.0317f, 155.4287f };
			*uParam2 = { -76.9465f, 0.0003f, 149.7993f };
			*uParam3 = 45f;
			return 1;
			break;
		case 135:
			*uParam1 = { 661.924f, 3503.3372f, 60.5464f };
			*uParam2 = { -76.9465f, -0.0009f, -81.4523f };
			*uParam3 = 45f;
			return 1;
			break;
		case 136:
			*uParam1 = { 2409.7986f, 4293.222f, 61.6806f };
			*uParam2 = { -76.568f, -3.7101f, 56.4411f };
			*uParam3 = 45f;
			return 1;
			break;
		case 137:
			*uParam1 = { 100.7403f, 3369.28f, 61.103f };
			*uParam2 = { -77.9654f, 2.7972f, -172.4415f };
			*uParam3 = 45f;
			return 1;
			break;
		case 138:
			*uParam1 = { 2441.2163f, 3795.6873f, 66.4953f };
			*uParam2 = { -75.6905f, -1.8311f, -34.0872f };
			*uParam3 = 45f;
			return 1;
			break;
		case 139:
			*uParam1 = { 1779.8412f, 4588.3213f, 64.2296f };
			*uParam2 = { -77.2461f, -2.1153f, 134.3354f };
			*uParam3 = 45f;
			return 1;
			break;
		case 140:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 141:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 142:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 143:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 144:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 145:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 146:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 147:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 148:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 149:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 150:
			*uParam1 = { 1976.5756f, 3803.5605f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		case 118:
			*uParam1 = { -1064.2815f, -1530.4437f, 4.9643f };
			*uParam2 = { -6.3151f, 0f, -11.6771f };
			return 1;
			break;
		case 119:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 120:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 114:
			*uParam1 = { 70.2718f, -1555.7793f, 54.57f };
			*uParam2 = { -79.8378f, 0.0014f, 146.7438f };
			*uParam3 = 45f;
			return 1;
			break;
		case 98:
			*uParam1 = { -611.2242f, -215.1656f, 69.3734f };
			*uParam2 = { -82.5325f, -23.1336f, 38.4436f };
			*uParam3 = 45f;
			return 1;
			break;
		case 99:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 100:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 101:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 102:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 103:
			*uParam1 = { -1733.7089f, -1127.2845f, 39.0047f };
			*uParam2 = { -83.9991f, 0.0016f, -37.0248f };
			*uParam3 = 45f;
			return 1;
			break;
		case 104:
			*uParam1 = { -1926.9205f, -575.551f, 37.5216f };
			*uParam2 = { -81.4289f, -0.0005f, 163.5237f };
			*uParam3 = 45f;
			return 1;
			break;
		case 121:
			*uParam1 = { -832.9372f, -1357.8823f, 31.1094f };
			*uParam2 = { -82.6154f, 0.0027f, -121.9677f };
			*uParam3 = 45f;
			return 1;
			break;
		case 122:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		case 196:
			*uParam1 = { -10.298f, -1454.639f, 30.922f };
			*uParam2 = { 3.353f, 0f, 15.658f };
			*uParam3 = 50f;
			return 1;
			break;
		case 197:
			*uParam1 = { 41.506f, 518.56f, 172.883f };
			*uParam2 = { -3.496f, 0f, 80.268f };
			*uParam3 = 45f;
			return 1;
			break;
		case 123:
			*uParam1 = { -2008.9288f, -494.5522f, 38.0431f };
			*uParam2 = { -74.6696f, 3.4735f, 101.1669f };
			*uParam3 = 45f;
			return 1;
			break;
		case 125:
			*uParam1 = { -1500.4567f, -682.8798f, 52.8456f };
			*uParam2 = { -82.2007f, -0.0021f, -20.62f };
			*uParam3 = 45f;
			return 1;
			break;
		case 115:
			*uParam1 = { -514.3963f, -19.7218f, 71.4872f };
			*uParam2 = { -85.8754f, 0.0302f, -142.4507f };
			*uParam3 = 45f;
			return 1;
			break;
		case 116:
			*uParam1 = { -627.7501f, 245.722f, 107.7731f };
			*uParam2 = { -85.8754f, 0.0301f, 148.5493f };
			*uParam3 = 45f;
			return 1;
			break;
		case 117:
			*uParam1 = { -831.1096f, -350.8676f, 64.5357f };
			*uParam2 = { -85.8754f, 0.0301f, 73.7675f };
			*uParam3 = 45f;
			return 1;
			break;
		case 105:
			*uParam1 = { -466.357f, -1586.5269f, 42.1308f };
			*uParam2 = { -24.1059f, 0f, -157.2387f };
			return 1;
			break;
		case 106:
			*uParam1 = { -1738.6078f, -624.3743f, 12.7827f };
			*uParam2 = { -22.3162f, 0f, 105.6959f };
			return 1;
			break;
		case 107:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 110:
			*uParam1 = { -95.4359f, -413.3546f, 61.9024f };
			*uParam2 = { -84.9814f, -0.0003f, 154.7523f };
			*uParam3 = 45f;
			return 1;
			break;
		case 111:
			*uParam1 = { -1290.9719f, -697.7042f, 50.5674f };
			*uParam2 = { -84.9813f, -0.0003f, 54.7523f };
			*uParam3 = 45f;
			return 1;
			break;
		case 126:
			*uParam1 = { 1969.9984f, 3806.8472f, 35.494f };
			*uParam2 = { -14.7978f, 0f, -11.4244f };
			return 1;
			break;
		case 127:
			*uParam1 = { 672.4669f, 3502.7385f, 58.9099f };
			*uParam2 = { -83.2715f, 4.5479f, 61.6184f };
			*uParam3 = 45f;
			return 1;
			break;
		case 128:
			*uParam1 = { 1975.9104f, 3822.4126f, 34.0088f };
			*uParam2 = { -10.9024f, 0f, 154.0872f };
			*uParam3 = 50f;
			return 1;
			break;
		case 129:
			*uParam1 = { 1983.7357f, 3822.7627f, 57.6395f };
			*uParam2 = { -83.4323f, -0.0013f, 121.7344f };
			*uParam3 = 45f;
			return 1;
			break;
		case 130:
			*uParam1 = { 1978.2292f, 3820.7212f, 34.0738f };
			*uParam2 = { -8.2785f, 0f, 103.9586f };
			*uParam3 = 50f;
			return 1;
			break;
		case 131:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 132:
			*uParam1 = { 1973.9507f, 3819.0784f, 33.7825f };
			*uParam2 = { -5.3804f, 0f, -17.5258f };
			*uParam3 = 50f;
			return 1;
			break;
		case 133:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 134:
			*uParam1 = { 1994.9846f, 3057.2192f, 49.8043f };
			*uParam2 = { -49.0498f, 0.0012f, 99.8958f };
			*uParam3 = 41f;
			return 1;
			break;
		case 151:
			*uParam1 = { -113.8308f, 361.9919f, 138.5542f };
			*uParam2 = { -76.7137f, -0.0014f, 41.6163f };
			*uParam3 = 45f;
			return 1;
			break;
		case 152:
			*uParam1 = { -1349.1143f, 351.6396f, 100.0071f };
			*uParam2 = { -80.7411f, -0.0078f, 34.6522f };
			*uParam3 = 50f;
			return 1;
			break;
		case 153:
			*uParam1 = { -715.1777f, 255.9193f, 105.5536f };
			*uParam2 = { -84.0507f, -0.0034f, 89.2749f };
			*uParam3 = 45f;
			return 1;
			break;
		case 154:
			*uParam1 = { -715.3492f, 256.7212f, 105.5855f };
			*uParam2 = { -82.4496f, -0.003003f, 99.94753f };
			*uParam3 = 45f;
			return 1;
			break;
		case 155:
			*uParam1 = { -774.8297f, 164.9666f, 104.4211f };
			*uParam2 = { -81.8771f, -0.0817f, 178.2323f };
			*uParam3 = 45f;
			return 1;
			break;
		case 156:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		case 157:
			*uParam1 = { -720.5396f, 253.1793f, 105.7766f };
			*uParam2 = { -83.2751f, 3.4532f, -42.6086f };
			*uParam3 = 45f;
			return 1;
			break;
		case 158:
			*uParam1 = { 533.3047f, 120.3593f, 122.7126f };
			*uParam2 = { -83.8911f, -0.0019f, -129.3945f };
			*uParam3 = 45f;
			return 1;
			break;
		case 159:
			*uParam1 = { -827.4469f, -191.4707f, 63.4392f };
			*uParam2 = { -80.7034f, 0.0005f, -51.0296f };
			*uParam3 = 44.888f;
			return 1;
			break;
		case 160:
			*uParam1 = { -718.5201f, -159.4091f, 62.5628f };
			*uParam2 = { -79.3643f, 0.0002f, -33.1272f };
			*uParam3 = 45f;
			return 1;
			break;
		case 161:
			*uParam1 = { -786.2485f, 187.686f, 97.9448f };
			*uParam2 = { -80.7232f, 0.0002f, 104.9069f };
			*uParam3 = 45f;
			return 1;
			break;
		case 162:
			*uParam1 = { -1370.7305f, -209.3841f, 70.322f };
			*uParam2 = { -85.8754f, 0.0301f, -94.4507f };
			*uParam3 = 45f;
			return 1;
			break;
		case 163:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		case 164:
			*uParam1 = { -778.8658f, 185.7413f, 98.1194f };
			*uParam2 = { -84.2688f, 0.0243f, 42.5521f };
			*uParam3 = 45f;
			return 1;
			break;
		case 165:
			*uParam1 = { -1133.2946f, -455.1246f, (95.9402f - 30f) };
			*uParam2 = { -85.6256f, 0f, 28.0351f };
			*uParam3 = 45f;
			return 1;
			break;
		case 166:
			*uParam1 = { -1046.6012f, -478.8773f, 62.6878f };
			*uParam2 = { -77.3255f, -6.297f, 139.6857f };
			*uParam3 = 45f;
			return 1;
			break;
		case 167:
			*uParam1 = { -1184.2911f, -505.4514f, 75.0146f };
			*uParam2 = { -82.6035f, 0.0014f, -31.0152f };
			*uParam3 = 45f;
			return 1;
			break;
		case 168:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		case 169:
			*uParam1 = { -837.0487f, 180.2459f, 70.842f };
			*uParam2 = { 9.3514f, -0.0001f, -106.3141f };
			*uParam3 = 50f;
			return 1;
			break;
		case 170:
			*uParam1 = { -657.0717f, -271.9325f, 61.5797f };
			*uParam2 = { -78.4277f, 9.0072f, -174.2934f };
			*uParam3 = 45f;
			return 1;
			break;
		case 171:
			*uParam1 = { -252.0919f, -81.0714f, 74.7886f };
			*uParam2 = { -86.5763f, 49.0804f, -90.1929f };
			*uParam3 = 45f;
			return 1;
			break;
		case 173:
			*uParam1 = { -831.4534f, 178.1406f, 96.6498f };
			*uParam2 = { -73.1145f, -0.0027f, -93.0056f };
			*uParam3 = 45f;
			return 1;
			break;
		case 172:
			*uParam1 = { -250.7753f, -80.1775f, 74.8044f };
			*uParam2 = { -85.8438f, 27.439f, -107.783f };
			*uParam3 = 45f;
			return 1;
			break;
		case 174:
			*uParam1 = { -803.7232f, 181.6804f, 73.2304f };
			*uParam2 = { -5.3638f, 0f, -22.9153f };
			*uParam3 = 50f;
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 175:
			*uParam1 = { -23.8601f, -1456.8895f, 30.8716f };
			*uParam2 = { 2.4688f, 0f, -32.828f };
			*uParam3 = 37.6481f;
			return 1;
			break;
		case 176:
			*uParam1 = { -7.0679f, 497.5869f, 175.1577f };
			*uParam2 = { -8.6355f, 0f, -18.0968f };
			*uParam3 = 69.428f;
			return 1;
			break;
		case 177:
			*uParam1 = { 41.506f, 518.56f, 172.883f };
			*uParam2 = { -3.496f, 0f, 80.268f };
			*uParam3 = 45f;
			return 1;
			break;
		case 178:
			*uParam1 = { 41.506f, 518.56f, 172.883f };
			*uParam2 = { -3.496f, 0f, 80.268f };
			*uParam3 = 45f;
			return 1;
			break;
		case 179:
			*uParam1 = { -10.298f, -1454.639f, 30.922f };
			*uParam2 = { 3.353f, 0f, 15.658f };
			*uParam3 = 50f;
			return 1;
			break;
		case 180:
			*uParam1 = { 41.506f, 518.56f, 172.883f };
			*uParam2 = { -3.496f, 0f, 80.268f };
			*uParam3 = 45f;
			return 1;
			break;
		case 181:
			*uParam1 = { -10.298f, -1454.639f, 30.922f };
			*uParam2 = { 3.353f, 0f, 15.658f };
			*uParam3 = 50f;
			return 1;
			break;
		case 182:
			*uParam1 = { -13.2465f, -1425.4192f, 31.1279f };
			*uParam2 = { -30.6822f, 0.6787f, 15.1437f };
			*uParam3 = 50f;
			return 1;
			break;
		case 183:
			*uParam1 = { 14.9547f, 525.4391f, 170.6328f };
			*uParam2 = { -30.6819f, 0.6789f, -170.1687f };
			*uParam3 = 50f;
			return 1;
			break;
		case 193:
			*uParam1 = { -1175.9375f, -1575.7007f, 30.1692f };
			*uParam2 = { -84.0992f, -0.0012f, -19.5058f };
			*uParam3 = 45f;
			return 1;
			break;
		case 192:
			*uParam1 = { -1175.7921f, -1576.0494f, 30.8335f };
			*uParam2 = { -80.2938f, 0.0008f, -26.9162f };
			*uParam3 = 49.9377f;
			return 1;
			break;
		case 194:
			*uParam1 = { -1151.1907f, -1365.4847f, 9.0273f };
			*uParam2 = { -14.4946f, 0f, 176.3572f };
			return 1;
			break;
		case 195:
			*uParam1 = { -1171.8738f, -1425.2235f, 9.2445f };
			*uParam2 = { -17.1697f, 0f, -111.3917f };
			return 1;
			break;
		case 198:
			*uParam1 = { -14.2911f, -1443.628f, 56.3341f };
			*uParam2 = { -81.6191f, 0.0002f, -175.2965f };
			*uParam3 = 45f;
			return 1;
			break;
		case 199:
			*uParam1 = { 18.2618f, 537.6057f, 201.7112f };
			*uParam2 = { -81.6191f, 0.0002f, 31.4594f };
			*uParam3 = 45f;
			return 1;
			break;
		case 200:
			*uParam1 = { -0.9251f, -1606.8064f, 54.3956f };
			*uParam2 = { -81.9792f, -0.0059f, -89.5973f };
			*uParam3 = 45f;
			return 1;
			break;
		case 201:
			*uParam1 = { 1.8601f, -1609.9586f, 55.0489f };
			*uParam2 = { -81.9213f, 0.0006f, -30.8316f };
			*uParam3 = 45f;
			return 1;
			break;
		case 202:
			*uParam1 = { -1246.266f, -1614.2175f, 30.1603f };
			*uParam2 = { -85.4036f, -0.0003f, -85.7066f };
			*uParam3 = 45f;
			return 1;
			break;
		case 203:
			*uParam1 = { -13.0353f, -1450.7229f, 55.6841f };
			*uParam2 = { -83.5727f, -0.0019f, 129.2043f };
			*uParam3 = 45f;
			return 1;
			break;
		case 204:
			*uParam1 = { -11.3015f, -1423.0619f, 55.8104f };
			*uParam2 = { -83.5727f, 0.0005f, 102.8099f };
			*uParam3 = 45f;
			return 1;
			break;
		case 206:
			*uParam1 = { 154.6263f, 769.2573f, 234.8318f };
			*uParam2 = { -83.5727f, -0.0019f, -173.7957f };
			*uParam3 = 45f;
			return 1;
			break;
		case 207:
			*uParam1 = { -264.6808f, 416.6765f, 134.8675f };
			*uParam2 = { -83.5727f, -0.0019f, 126.6163f };
			*uParam3 = 45f;
			return 1;
			break;
		case 205:
			*uParam1 = { 13.4706f, 520.5046f, 195.3417f };
			*uParam2 = { -83.5727f, 0.0005f, -15.8635f };
			*uParam3 = 45f;
			return 1;
			break;
		case 208:
			*uParam1 = { -452.4845f, -1591.8811f, 43.1702f };
			*uParam2 = { -15.7272f, 0f, 116.1361f };
			return 1;
			break;
		case 209:
			*uParam1 = { 41.4086f, -1491.7068f, 94.2915f };
			*uParam2 = { -83.0867f, 0f, -132.4861f };
			return 1;
			break;
		case 210:
			*uParam1 = { 213.7408f, 224.4167f, 107.2885f };
			*uParam2 = { -17.6158f, 0f, 124.3368f };
			return 1;
			break;
		case 211:
			*uParam1 = { -26.0418f, -1435.7556f, 56.3367f };
			*uParam2 = { -85.6549f, 0.0007f, -100.97f };
			*uParam3 = 45f;
			return 1;
			break;
		case 212:
			*uParam1 = { -26.9523f, -1443.4591f, 56.3006f };
			*uParam2 = { -82.158f, 0.0001f, -120.4657f };
			*uParam3 = 45f;
			return 1;
			break;
		case 213:
			*uParam1 = { 13.481f, 547.7665f, 201.6628f };
			*uParam2 = { -85.4529f, 32.8556f, -165.2088f };
			*uParam3 = 45f;
			return 1;
			break;
		case 214:
			*uParam1 = { 9.7918f, 546.587f, 201.411f };
			*uParam2 = { -85.6569f, 7.19613f, 128.447f };
			*uParam3 = 45f;
			return 1;
			break;
		case 215:
			*uParam1 = { 5.4402f, 547.371f, 201.086f };
			*uParam2 = { -75.7499f, -5.6172f, -42.2747f };
			*uParam3 = 45f;
			return 1;
			break;
		case 216:
			*uParam1 = { -1150.7317f, 941.2178f, 224.4071f };
			*uParam2 = { -84.8486f, -22.4675f, 10.6362f };
			*uParam3 = 45f;
			return 1;
			break;
		case 217:
			*uParam1 = { -1690.1348f, -945.0534f, 33.3591f };
			*uParam2 = { -85.6549f, 0.0007f, -128.97f };
			*uParam3 = 45f;
			return 1;
			break;
		case 221:
			*uParam1 = { -527.845f, -32.3779f, 69.5368f };
			*uParam2 = { -77.7626f, 15.8623f, -13.8244f };
			*uParam3 = 45f;
			return 1;
			break;
		case 222:
			*uParam1 = { 504.4986f, -1318.4994f, 29.3536f };
			*uParam2 = { 5.2409f, 0f, 89.8084f };
			*uParam3 = 50f;
			return 1;
			break;
		case 223:
			*uParam1 = { 504.4986f, -1318.4994f, 29.3536f };
			*uParam2 = { 5.2409f, 0f, 89.8084f };
			*uParam3 = 50f;
			return 1;
			break;
		case 224:
			*uParam1 = { 504.4986f, -1318.4994f, 29.3536f };
			*uParam2 = { 5.2409f, 0f, 89.8084f };
			*uParam3 = 50f;
			return 1;
			break;
		case 226:
			*uParam1 = { 30.1511f, -1357.0276f, 54.6942f };
			*uParam2 = { -78.5097f, 0.001f, 21.588f };
			*uParam3 = 45f;
			return 1;
			break;
		case 227:
			*uParam1 = { -380.8515f, 226.4113f, 109.5036f };
			*uParam2 = { -78.5097f, 0.001f, -153.161f };
			*uParam3 = 45f;
			return 1;
			break;
		case 228:
			*uParam1 = { 135.3769f, -1305.2886f, 54.269f };
			*uParam2 = { -81.3478f, 0.0016f, 71.6158f };
			*uParam3 = 42.2656f;
			return 1;
			break;
		case 229:
			*uParam1 = { 789.0312f, -738.351f, 52.6819f };
			*uParam2 = { -81.3478f, 0.0016f, -42.3726f };
			*uParam3 = 42.2656f;
			return 1;
			break;
		case 230:
			*uParam1 = { -296.2211f, -1326.732f, 56.6653f };
			*uParam2 = { -78.5097f, 0.001f, 177.9219f };
			*uParam3 = 45f;
			return 1;
			break;
		case 218:
			*uParam1 = { -6.8196f, -1411.324f, 55.2464f };
			*uParam2 = { -78.7542f, -0.0029f, 172.9781f };
			*uParam3 = 45f;
			return 1;
			break;
		case 219:
			*uParam1 = { -237.5357f, -1534.0734f, 57.4441f };
			*uParam2 = { -78.2577f, 0.0009f, 122.6248f };
			*uParam3 = 45f;
			return 1;
			break;
		case 220:
			*uParam1 = { -21.2522f, -1820.312f, 51.5856f };
			*uParam2 = { -76.786f, 0.0038f, -145.6433f };
			*uParam3 = 43.299f;
			return 1;
			break;
		case 225:
			*uParam1 = { 189.5486f, -1676.4065f, 54.9378f };
			*uParam2 = { -76.6137f, 0.0002f, -45.2699f };
			*uParam3 = 45f;
			return 1;
			break;
		case 231:
			*uParam2 = { -89.499535f, -1E-06f, (166.04057f - 180f) };
			*uParam3 = 50f;
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			return 1;
			break;
		case 232:
			*uParam1 = { -79.1742f, -1020.3333f, 54.5996f };
			*uParam2 = { -86.8093f, -0.0114f, -28.8534f };
			*uParam3 = 45f;
			return 1;
			break;
		case 233:
			*uParam1 = { -79.1742f, -1020.3333f, 54.5996f };
			*uParam2 = { -86.8093f, -0.0114f, -28.8534f };
			*uParam3 = 45f;
			return 1;
			break;
		case 235:
			*uParam1 = { 153.3026f, -1308.075f, 31.1902f };
			*uParam2 = { 2.0694f, 0f, 68.304f };
			*uParam3 = 45f;
			return 1;
			break;
		case 236:
			*uParam1 = { 153.3026f, -1308.075f, 31.1902f };
			*uParam2 = { 2.0694f, 0f, 68.304f };
			*uParam3 = 45f;
			return 1;
			break;
		case 237:
			*uParam1 = { 133.4546f, -1306.8057f, 55.17f };
			*uParam2 = { -79.386f, -0.0059f, 29.3671f };
			*uParam3 = 45f;
			return 1;
			break;
		case 238:
			*uParam1 = { 135.0825f, -1306.1569f, 54.8922f };
			*uParam2 = { -83.3399f, 0.2592f, 40.162f };
			*uParam3 = 45f;
			return 1;
			break;
		case 239:
			*uParam1 = { -50.4324f, 348.2621f, 157.2838f };
			*uParam2 = { -83.7124f, 0.0772f, 28.1343f };
			*uParam3 = 45f;
			return 1;
			break;
		case 240:
			*uParam1 = { 1534.4061f, 3607.2744f, 36.6934f };
			*uParam2 = { -12.1833f, 0f, 9.7072f };
			return 1;
			break;
		case 241:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 242:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 273:
			*uParam1 = { -119.1385f, -444.0774f, 61.0046f };
			*uParam2 = { -85.9063f, 0.0045f, -35.758f };
			*uParam3 = 45f;
			return 1;
			break;
		case 274:
			*uParam1 = { -1857.7023f, 2072.0447f, 166.0882f };
			*uParam2 = { -85.9063f, 0.0045f, 126.242f };
			*uParam3 = 45f;
			return 1;
			break;
		case 245:
			*uParam1 = { 1976.5756f, 3803.5605f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		case 250:
			*uParam1 = { 287.7224f, -3200.387f, 31.6541f };
			*uParam2 = { -83.4634f, -0.0001f, -168.0601f };
			*uParam3 = 45f;
			return 1;
			break;
		case 251:
			*uParam1 = { -869.8748f, 66.6628f, 77.9598f };
			*uParam2 = { -83.4634f, -0.0001f, 62.087f };
			*uParam3 = 45f;
			return 1;
			break;
		case 252:
			*uParam1 = { -44.7279f, -1473.6636f, 57.8914f };
			*uParam2 = { -83.4634f, -0.0001f, 107.5896f };
			*uParam3 = 45f;
			return 1;
			break;
		case 253:
			*uParam1 = { 1874.677f, 2621.563f, 71.5578f };
			*uParam2 = { -83.4635f, -0.0001f, -120.0601f };
			*uParam3 = 45f;
			return 1;
			break;
		case 243:
			*uParam1 = { 437.0992f, -1462.1802f, 54.8615f };
			*uParam2 = { -83.9471f, 0.0018f, 96.0313f };
			*uParam3 = 45f;
			return 1;
			break;
		case 244:
			*uParam1 = { 442.4368f, -1461.1077f, 54.2539f };
			*uParam2 = { -72.1078f, -0.0029f, 104.5689f };
			*uParam3 = 45f;
			return 1;
			break;
		case 271:
			*uParam1 = { -1267.9402f, -1104.5046f, 32.918f };
			*uParam2 = { -80.9687f, 0f, -3.6111f };
			*uParam3 = 45f;
			return 1;
			break;
		case 272:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 246:
			*uParam1 = { -1201.4962f, -1571.586f, 29.7218f };
			*uParam2 = { -84.4445f, 0.0015f, -51.2858f };
			*uParam3 = 45f;
			return 1;
			break;
		case 247:
			*uParam1 = { -1322.5938f, -1669.3389f, 27.6893f };
			*uParam2 = { -81.6907f, 0.0005f, 60.2722f };
			*uParam3 = 45f;
			return 1;
			break;
		case 278:
			*uParam1 = { 638.9762f, -1002.2932f, 68.2444f };
			*uParam2 = { -82.3678f, -0.0043f, -59.3736f };
			*uParam3 = 45f;
			return 1;
			break;
		case 279:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 280:
			*uParam1 = { 2786.551f, -1451.6735f, 26.3083f };
			*uParam2 = { -81.3303f, -0.0028f, -117.8646f };
			*uParam3 = 45f;
			return 1;
			break;
		case 264:
			*uParam1 = { 492.7402f, -1337.7001f, 53.2989f };
			*uParam2 = { -74.0621f, -0.0069f, 128.6647f };
			*uParam3 = 45f;
			return 1;
			break;
		case 266:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 265:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 267:
			*uParam1 = { 2210.5369f, 4919.154f, 41.1959f };
			*uParam2 = { -3.5325f, 0f, 169.681f };
			return 1;
			break;
		case 268:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 269:
			*uParam1 = { 415.3352f, -800.8342f, 51.2722f };
			*uParam2 = { -17.2722f, 0f, -24.592f };
			return 1;
			break;
		case 270:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 255:
			*uParam1 = { 411.8938f, -1481.1056f, 55.0911f };
			*uParam2 = { -73.5286f, 0.0012f, 177.4479f };
			*uParam3 = 45f;
			return 1;
			break;
		case 248:
			*uParam1 = { 297.5302f, 179.229f, 129.4594f };
			*uParam2 = { -83.7434f, 0.0126f, 62.1929f };
			*uParam3 = 45f;
			return 1;
			break;
		case 249:
			*uParam1 = { 294.6928f, 195.4445f, 129.4204f };
			*uParam2 = { -77.0175f, -0.0008f, 155.6596f };
			*uParam3 = 45f;
			return 1;
			break;
		case 281:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 50f;
			return 0;
			break;
		case 282:
			*uParam1 = { Vector(22.1187f, 2873.0781f, -930.9908f) + Vector(MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 20f), 0f, 0f) };
			*uParam2 = { -89.499535f, -1E-06f, 1.040573f };
			*uParam3 = 50f;
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			return 1;
			break;
		case 283:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
		case 284:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
		case 275:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
		case 276:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
		case 277:
			*uParam1 = { 1076.9883f, 2685.1528f, (37.973f + 30f) };
			*uParam2 = { -89.4995f, 0.0796f, -93.9607f };
			*uParam3 = 55f;
			return 1;
			break;
		case 254:
			*uParam1 = { 150.8545f, -214.1522f, 79.4128f };
			*uParam2 = { -78.7899f, -0.0026f, -136.2629f };
			*uParam3 = 45f;
			return 1;
			break;
		case 285:
			*uParam1 = { 43.4637f, -2055.6338f, 47.3524f };
			*uParam2 = { -80.4436f, 0f, -109.8209f };
			*uParam3 = 45f;
			return 1;
			break;
		case 256:
			*uParam1 = { -1241.5002f, -1099.6058f, 10.4958f };
			*uParam2 = { -8.2431f, 0f, 146.4822f };
			return 1;
			break;
		case 257:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 258:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 259:
			*uParam1 = { -725.9904f, -1305.7162f, 30.7195f };
			*uParam2 = { -86.3376f, 0.0189f, -169.3006f };
			*uParam3 = 45f;
			return 1;
			break;
		case 260:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 261:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 286:
			*uParam1 = { -1275.4763f, -1194.2114f, 38.3756f };
			*uParam2 = { -84.3481f, -0.0001f, -125.4683f };
			*uParam3 = 45f;
			return 1;
			break;
		case 287:
			*uParam1 = { -876.4864f, -849.5565f, 45.7044f };
			*uParam2 = { -65.634f, -0.0013f, 106.1902f };
			*uParam3 = 45f;
			return 1;
			break;
		case 288:
			*uParam1 = { -1708.9696f, -1055.762f, 44.8272f };
			*uParam2 = { -76.5326f, -0.0048f, -144.2845f };
			*uParam3 = 45f;
			return 1;
			break;
		case 262:
			*uParam1 = { -1153.2279f, -1526.3785f, 30.1087f };
			*uParam2 = { -87.0602f, 0.0019f, -17.9875f };
			*uParam3 = 45f;
			return 1;
			break;
		case 263:
			*uParam1 = { -562.2963f, -1256.627f, 38.9716f };
			*uParam2 = { -80.9113f, -0.0008f, 143.1449f };
			*uParam3 = 45f;
			return 1;
			break;
		case 289:
			*uParam1 = { 442.2141f, -229.2575f, 81.2032f };
			*uParam2 = { -83.8876f, -0.0064f, 45.2185f };
			*uParam3 = 45f;
			return 1;
			break;
		case 290:
			*uParam1 = { 153.3026f, -1308.075f, 31.1902f };
			*uParam2 = { 2.0694f, 0f, 68.304f };
			*uParam3 = 45f;
			return 1;
			break;
		case 291:
			*uParam1 = { -1134.342f, -1497.24f, 4.753f };
			*uParam2 = { 4.753f, 0f, 151.569f };
			*uParam3 = 50f;
			return 1;
			break;
		case 292:
			*uParam1 = { -1173.498f, -1515.8302f, 5.159f };
			*uParam2 = { 9.9778f, -0.0009f, -96.2808f };
			*uParam3 = 56.5538f;
			return 1;
			break;
		case 293:
			*uParam1 = { -1173.498f, -1515.8302f, 5.159f };
			*uParam2 = { 9.9778f, -0.0009f, -96.2808f };
			*uParam3 = 56.5538f;
			return 1;
			break;
		case 294:
			return func_589(293, uParam1, uParam2, uParam3);
			break;
		case 295:
			return func_589(292, uParam1, uParam2, uParam3);
			break;
		case 299:
			*uParam1 = { -1173.498f, -1515.8302f, 5.159f };
			*uParam2 = { 9.9778f, -0.0009f, -96.2808f };
			*uParam3 = 56.5538f;
			return 1;
			break;
		case 300:
			return func_589(303, uParam1, uParam2, uParam3);
			break;
		case 301:
			return func_589(303, uParam1, uParam2, uParam3);
			break;
		case 302:
			return func_589(303, uParam1, uParam2, uParam3);
			break;
		case 303:
			*uParam1 = { -1173.498f, -1515.8302f, 5.159f };
			*uParam2 = { 9.9778f, -0.0009f, -96.2808f };
			*uParam3 = 56.5538f;
			return 1;
			break;
		case 296:
			*uParam1 = { -1134.342f, -1497.24f, 4.753f };
			*uParam2 = { 4.753f, 0f, 151.569f };
			*uParam3 = 50f;
			return 1;
			break;
		case 297:
			*uParam1 = { -1134.342f, -1497.24f, 4.753f };
			*uParam2 = { 4.753f, 0f, 151.569f };
			*uParam3 = 50f;
			return 1;
			break;
		case 298:
			*uParam1 = { -1134.342f, -1497.24f, 4.753f };
			*uParam2 = { 4.753f, 0f, 151.569f };
			*uParam3 = 50f;
			return 1;
			break;
		case 304:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 305:
			*uParam1 = { 1395.4946f, 3601.725f, 39.5656f };
			*uParam2 = { -6.5114f, 0f, 79.7777f };
			*uParam3 = 50f;
			return 1;
			break;
		case 306:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 307:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 308:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 309:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 310:
			*uParam1 = { 2022.2897f, 3405.7341f, 68.8313f };
			*uParam2 = { -84.787f, 0.0001f, 143.9959f };
			*uParam3 = 45f;
			return 1;
			break;
		case 311:
			*uParam1 = { 1976.5756f, 3803.5605f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		case 312:
			*uParam1 = { -272.257f, 6628.256f, 8.3634f };
			*uParam2 = { -13.8262f, 0f, 79.1812f };
			return 1;
			break;
		case 313:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 314:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 234:
			*uParam1 = { 1976.5756f, 3803.5605f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		case 316:
			*uParam1 = { 1976.5756f, 3803.5605f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		case 315:
			*uParam1 = { 1976.5756f, 3803.5605f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		default:
			func_609(iParam0, &Var0, &fVar1, &cVar2);
			*uParam1 = { Var0 + Vector(0f, -5f, 0f) };
			*uParam2 = { 0f, 0f, -fVar1 };
			return 1;
			break;
	}
	func_609(iParam0, &Var3, &fVar4, &cVar5);
	*uParam1 = { Var3 + Vector(0f, -5f, 0f) };
	*uParam2 = { 0f, 0f, 0f };
	return 0;
}

int func_590(int iParam0)//Position - 0x88871
{
	char* sVar0;
	char[] cVar1[8];
	char* sVar2;
	char[] cVar3[8];
	char[] cVar4[8];
	var uVar5;
	var uVar6;
	if (func_588(iParam0, &sVar0, &cVar1))
	{
		if (__LIB_26__::func_591(iParam0, &sVar2, &cVar3, &cVar4, &uVar5, &uVar6))
		{
			STREAMING::REQUEST_ANIM_DICT(&sVar2);
			return 1;
		}
	}
	return 0;
}

int func_609(int iParam0, var uParam1, float fParam2, char* sParam3)//Position - 0x8CA94
{
	int iVar0;
	if (func_611(iParam0, fParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0:
				return 0;
				break;
			case 1:
				__LIB_12__::func_128(&iVar0);
				if (iVar0 < 5)
				{
					*uParam1 = { Global_95644[iVar0 /*9*/].f_3 };
					*fParam2 = Global_95644[iVar0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				else
				{
					*uParam1 = { Global_95644[0 /*9*/].f_3 };
					*fParam2 = Global_95644[0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				break;
			case 2:
				*uParam1 = { Global_98552[0 /*109*/].f_4 };
				*fParam2 = Global_98552[0 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			case 3:
				*uParam1 = { Global_98552[1 /*109*/].f_4 };
				*fParam2 = Global_98552[1 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			case 4:
				*uParam1 = { Global_98552[2 /*109*/].f_4 };
				*fParam2 = Global_98552[2 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			case 5:
				*uParam1 = { Global_113386.f_2363.f_539.f_2300[0 /*3*/] + Vector(-1f, 0f, 0f) };
				*fParam2 = Global_113386.f_2363.f_539.f_2310[0];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			case 6:
				*uParam1 = { Global_113386.f_2363.f_539.f_2300[1 /*3*/] + Vector(-1f, 0f, 0f) };
				*fParam2 = Global_113386.f_2363.f_539.f_2310[1];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			case 7:
				*uParam1 = { Global_113386.f_2363.f_539.f_2300[2 /*3*/] + Vector(-1f, 0f, 0f) };
				*fParam2 = Global_113386.f_2363.f_539.f_2310[2];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
		}
		*uParam1 = { Global_98880[iParam0 /*3*/] };
		return 1;
	}
	return 0;
}

int func_611(int iParam0, float fParam1, char* sParam2)//Position - 0x8CD3F
{
	struct<3> Var0;
	int iVar1;
	var uVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 1:
			__LIB_12__::func_128(&iVar1);
			if (iVar1 < 5)
			{
				*fParam1 = Global_95644[iVar1 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			else
			{
				*fParam1 = Global_95644[0 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 2:
			*fParam1 = Global_98552[0 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 3:
			*fParam1 = Global_98552[1 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 4:
			*fParam1 = Global_98552[2 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 5:
			*fParam1 = Global_113386.f_2363.f_539.f_2310[0];
			StringCopy(sParam2, __LIB_12__::func_129(Global_113386.f_2363.f_539.f_2314[0]), 32);
			return 1;
			break;
		case 6:
			*fParam1 = Global_113386.f_2363.f_539.f_2310[1];
			StringCopy(sParam2, __LIB_12__::func_129(Global_113386.f_2363.f_539.f_2314[1]), 32);
			return 1;
			break;
		case 7:
			*fParam1 = Global_113386.f_2363.f_539.f_2310[2];
			StringCopy(sParam2, __LIB_12__::func_129(Global_113386.f_2363.f_539.f_2314[2]), 32);
			return 1;
			break;
		case 11:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return 1;
			}
			break;
		case 8:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 9:
			return func_611(8, fParam1, sParam2);
			break;
		case 10:
			return func_611(8, fParam1, sParam2);
			break;
		case 13:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 14:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 15:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 12:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 16:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 17:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 18:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 19:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 20:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 21:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 22:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 74:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 23:
			return func_611(208, fParam1, sParam2);
			break;
		case 24:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 67:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 25:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 26:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 27:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 28:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 29:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 30:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 31:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 32:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 33:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 34:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 35:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 36:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 37:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 58:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 59:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 60:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 38:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 39:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 40:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return 1;
			}
			break;
		case 41:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 42:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 43:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 44:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 45:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 46:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 47:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 49:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 48:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 124:
			Var0 = { -803.734f, 168.148f, 76.3542f };
			*fParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 50:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 51:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 52:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 66:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 53:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 54:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 55:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 56:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 57:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 61:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 62:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 63:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 68:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 69:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 64:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 65:
			if (func_432(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 70:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 71:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 72:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 73:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 234:
			*fParam1 = 122.69f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 316:
			*fParam1 = -60.31f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 315:
			*fParam1 = (41.654f - 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 75:
			*fParam1 = -172.697f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 76:
			*fParam1 = (181.8927f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 77:
			*fParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 78:
			*fParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 79:
			*fParam1 = 20.353f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 80:
			*fParam1 = (-48.53f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 81:
			*fParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 82:
			*fParam1 = -113.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 83:
			*fParam1 = -173.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 84:
			*fParam1 = 32.7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 85:
			*fParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 86:
			*fParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 87:
			*fParam1 = 166.32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 88:
			*fParam1 = 21f;
			*fParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 89:
			*fParam1 = -84.8108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 90:
			*fParam1 = -90.5046f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 91:
			*fParam1 = 105.0795f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 92:
			*fParam1 = -54.347f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 93:
			*fParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 94:
			*fParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 95:
			*fParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 96:
			*fParam1 = 34.621f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 97:
			*fParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 98:
			*fParam1 = (-150.6148f + 0.0095f);
			*fParam1 = (*fParam1 + 0.0004f);
			*fParam1 = (*fParam1 + 0.0015f);
			*fParam1 = (*fParam1 + 0.0002f);
			*fParam1 = (*fParam1 + -0.0009f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 99:
			*fParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 100:
			*fParam1 = 84.6073f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 101:
			*fParam1 = 249.0753f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 102:
			*fParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 103:
			*fParam1 = 143.4931f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 104:
			*fParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 105:
			*fParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 106:
			*fParam1 = 63.4995f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 107:
			*fParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 108:
			*fParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 109:
			*fParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 110:
			*fParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 111:
			*fParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 112:
			*fParam1 = -162.311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 113:
			*fParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 135:
			*fParam1 = -59.25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 136:
			*fParam1 = 82.254f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 137:
			*fParam1 = -152.965f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 138:
			*fParam1 = -10.099f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 139:
			*fParam1 = 158.5974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 140:
			*fParam1 = 99.18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 141:
			*fParam1 = 218.4774f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 142:
			*fParam1 = 125.6193f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 143:
			*fParam1 = 142.373f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 144:
			*fParam1 = -34.878f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 145:
			*fParam1 = -172.419f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 146:
			*fParam1 = -107.439f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 147:
			*fParam1 = 157.311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 148:
			*fParam1 = -68.812f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 149:
			*fParam1 = 4.693f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 150:
			*fParam1 = 78.65f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 114:
			*fParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 115:
			*fParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 116:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 117:
			*fParam1 = -74.7818f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 118:
			*fParam1 = -48.36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 119:
			*fParam1 = 144.178f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 120:
			*fParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 121:
			*fParam1 = 101.5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 122:
			*fParam1 = 99.72f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 123:
			*fParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 125:
			*fParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 126:
			*fParam1 = -158.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 127:
			*fParam1 = -76.3681f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 128:
			*fParam1 = (30f + 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 129:
			*fParam1 = -80.6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 130:
			*fParam1 = -9.1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 131:
			*fParam1 = -86.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 132:
			*fParam1 = -161.0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 133:
			*fParam1 = (226.5579f - 270f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 134:
			*fParam1 = -33.128f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 151:
			*fParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 152:
			*fParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 153:
			*fParam1 = -176.25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 154:
			*fParam1 = -147.192f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 155:
			*fParam1 = 59.082f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 156:
			*fParam1 = 26.087f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 157:
			*fParam1 = 37.27f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 158:
			*fParam1 = -13.8153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 159:
			*fParam1 = -62.5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 160:
			*fParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 161:
			*fParam1 = 86.3776f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 162:
			*fParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 163:
			*fParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 164:
			*fParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 165:
			*fParam1 = -144.622f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 166:
			*fParam1 = -61.2262f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 167:
			*fParam1 = -22.32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 168:
			if (func_612(0, 25, &uVar2, &fVar3))
			{
				*fParam1 = (fVar3 + 222.8314f);
				StringCopy(sParam2, "v_michael", 32);
				return 1;
			}
			break;
		case 169:
			*fParam1 = 112.841f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 170:
			*fParam1 = (-103.8158f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 171:
			*fParam1 = -28.0926f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 173:
			*fParam1 = -0.0301f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 172:
			*fParam1 = -30.185f;
			*fParam1 = (*fParam1 + 0.003f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 174:
			*fParam1 = 14.98f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 175:
			*fParam1 = -179.653f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		case 176:
			*fParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 177:
			*fParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 178:
			*fParam1 = -95.4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 179:
			*fParam1 = (-16.0627f + 180f);
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		case 180:
			*fParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 181:
			*fParam1 = -86.613f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		case 182:
			*fParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 183:
			*fParam1 = 111.688f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 184:
			*fParam1 = 143.7974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 185:
			*fParam1 = 143.792f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 186:
			*fParam1 = 4.6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 187:
			*fParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 188:
			*fParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 189:
			*fParam1 = -172.2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 190:
			*fParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 191:
			*fParam1 = -12.5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 196:
			*fParam1 = -1.5f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		case 197:
			*fParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 192:
			*fParam1 = 107.981f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 193:
			*fParam1 = 172.9187f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 194:
			*fParam1 = -67.608f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 195:
			*fParam1 = 74.1158f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 198:
			*fParam1 = 1.0411f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 199:
			*fParam1 = -152.203f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 200:
			*fParam1 = (310.879f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 201:
			*fParam1 = 130.879f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 202:
			*fParam1 = 35.604f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 203:
			*fParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 204:
			*fParam1 = -119.3944f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 205:
			*fParam1 = 121.9322f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 206:
			*fParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 207:
			*fParam1 = -95.588f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 208:
			*fParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 209:
			*fParam1 = 230.78f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 210:
			*fParam1 = 165.7751f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 211:
			*fParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 212:
			*fParam1 = 1.2709f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 213:
			*fParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 214:
			*fParam1 = -117.03f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 215:
			*fParam1 = -49.0324f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 216:
			*fParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 217:
			*fParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 221:
			*fParam1 = 84.96f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 222:
			*fParam1 = -59.3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		case 223:
			*fParam1 = 43.82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		case 224:
			return func_611(222, fParam1, sParam2);
			break;
		case 226:
			*fParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 227:
			*fParam1 = -14.749f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 228:
			*fParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 229:
			*fParam1 = 96.0116f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 230:
			*fParam1 = -43.6661f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 218:
			*fParam1 = -70.4124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 219:
			*fParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 220:
			*fParam1 = -117.356f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 225:
			*fParam1 = -83.8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 231:
			*fParam1 = 350.3382f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 232:
			*fParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 233:
			*fParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 235:
			*fParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		case 236:
			*fParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		case 237:
			*fParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 238:
			*fParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 239:
			*fParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 240:
			*fParam1 = -4.124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 241:
			*fParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 242:
			*fParam1 = 13.7207f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 245:
			*fParam1 = 27.746f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 243:
			*fParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 244:
			*fParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 246:
			*fParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 247:
			*fParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 248:
			*fParam1 = 10.77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 249:
			*fParam1 = (138f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 250:
			*fParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 251:
			*fParam1 = -42.8529f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 252:
			*fParam1 = 2.6497f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 253:
			*fParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 254:
			*fParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 255:
			*fParam1 = 30.24f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 264:
			*fParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 265:
			*fParam1 = -144.274f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 266:
			*fParam1 = 68.8227f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 267:
			*fParam1 = 56.2037f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 268:
			*fParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 269:
			*fParam1 = -106.6605f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 270:
			*fParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 271:
			*fParam1 = 26.3597f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 272:
			*fParam1 = -83.3175f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 273:
			*fParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 274:
			*fParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 275:
			*fParam1 = (277.613f - 360f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 276:
			*fParam1 = -4.7459f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 277:
			*fParam1 = -98.56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 278:
			*fParam1 = -33.77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 279:
			*fParam1 = 155.68f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 280:
			*fParam1 = -49.56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 281:
			*fParam1 = -5.8739f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 282:
			*fParam1 = 70.1627f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 283:
			*fParam1 = 158.979f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 284:
			*fParam1 = -67.1851f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 285:
			*fParam1 = 47.054f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 256:
			*fParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 257:
			*fParam1 = 171.253f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 258:
			*fParam1 = 10.247f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 259:
			*fParam1 = -32.488f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 260:
			*fParam1 = -29.093f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 261:
			*fParam1 = 229.6085f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 286:
			*fParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 287:
			*fParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 288:
			*fParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 262:
			*fParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 263:
			*fParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 289:
			*fParam1 = -11.5018f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 290:
			*fParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		case 291:
			*fParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 292:
			*fParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 293:
			*fParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 294:
			return func_611(293, fParam1, sParam2);
			break;
		case 295:
			return func_611(292, fParam1, sParam2);
			break;
		case 299:
			*fParam1 = 34.661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 300:
			return func_611(303, fParam1, sParam2);
			break;
		case 301:
			return func_611(303, fParam1, sParam2);
			break;
		case 302:
			return func_611(303, fParam1, sParam2);
			break;
		case 303:
			*fParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 296:
			*fParam1 = 116.742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 297:
			*fParam1 = 100.46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 298:
			*fParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 304:
			*fParam1 = -152.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 305:
			*fParam1 = 122.5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return 1;
			break;
		case 306:
			Var4 = { -7.4998f, 7.4995f, -0.5258f };
			*fParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var4.f_0, -Var4.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 307:
			Var5 = { 10.6345f, 0.7246f, 1.2508f };
			*fParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var5.f_0, -Var5.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 308:
			Var6 = { -3.4271f, -13.6787f, -1.4107f };
			*fParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var6.f_0, -Var6.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 309:
			Var7 = { -19.6582f, 7.896f, 0.1334f };
			*fParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var7.f_0, -Var7.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 310:
			*fParam1 = -87.7215f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 311:
			*fParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 312:
			*fParam1 = ((103.2841f + 88.7571f) / 2f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 313:
			*fParam1 = (-177f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 314:
			*fParam1 = 327.7746f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
	}
	*fParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return 0;
}

int func_612(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x8F27D
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 13.904f, 1.193f, 0.7f };
					*uParam3 = -144f;
					return 1;
					break;
				case 1:
					if (func_612(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1.1731f, 0.809f) };
						*uParam3 = (*uParam3 + (456.7661f - 360f));
						return 1;
					}
					break;
				case 2:
					*uParam2 = { Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((16f - 222.8314f) + 360f);
					return 1;
					break;
			}
			return 0;
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 10.9793f, -5.9f, 4.6f };
					*uParam3 = 163.0716f;
					return 1;
					break;
				case 1:
					if (func_612(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0.25f, -0.6f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
				case 2:
					if (func_612(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0.5f, -1.2f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { Vector(71.835f, 180.548f, -796.991f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = (((16f + 90f) - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { 6.8878f, -5.5247f, 1.5228f };
					*uParam3 = 160f;
					return 1;
					break;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.1937f, -9.0309f, 4.5877f };
					*uParam3 = 255f;
					return 1;
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.4577f, -9.6399f, 4.5876f };
					*uParam3 = 252f;
					return 1;
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.799f, -9.41f, 4.5877f };
					*uParam3 = 273f;
					return 1;
					break;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_612(0, 5, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 12.552f, 4.373f, (4.6f + 1f) };
					*uParam3 = 318f;
					return 1;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { -0.4395f, -11.0022f, 0.0747f };
					*uParam3 = 306f;
					return 1;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 5.5001f, -12.4406f, 4.6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.5f, -9.1f, 4.6f };
					*uParam3 = 330f;
					return 1;
					break;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 0.849f, 1.575f, 0f };
					*uParam3 = 272.857f;
					return 1;
					break;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 8.183f, -3.0467f, 5.5876f };
					*uParam3 = 158f;
					return 1;
					break;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 9.383f, -3.3887f, 5.73f };
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.488f, -9.098f, 5.4864f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 9.04f, 5.71f, 1.44f };
					*uParam3 = 159.3182f;
					return 1;
					break;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.25f, -9.53f, 4.588f };
					*uParam3 = 333f;
					return 1;
					break;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(0f, -11.0022f, -0.4395f) + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f)) };
					*uParam3 = (306f + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 10f));
					return 1;
					break;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(60.2063f, 141.5129f, -863.5425f) - Vector(71.1531f, 179.5117f, -812.0607f) - Vector(1f, 0f, 0f) };
					*uParam2 = { *uParam2 * Vector(0.95f, 0.95f, 0.95f) };
					*uParam3 = MISC::GET_HEADING_FROM_VECTOR_2D(*uParam2, uParam2->f_1);
					return 1;
					break;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((26.087f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((13f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(72.8447f, 172.4196f, -803.1823f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-28.7112f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 27.9648f, 8.3766f, 0.7f };
					*uParam3 = 319f;
					return 1;
					break;
			}
			break;
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f) };
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { -0.3142f, -10.9926f, 0.0747f };
					*uParam3 = 304.1026f;
					return 1;
					break;
			}
			break;
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.3f, -6.5f, 4.6f };
					*uParam3 = 180f;
					return 1;
					break;
			}
			break;
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_612(1, 32, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		case 38:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.505f, -10.9717f, 4.6019f };
					*uParam3 = 228f;
					return 1;
					break;
			}
			break;
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 12.7165f, 4.7109f, (4.6f + 1f) };
					*uParam3 = 310.6696f;
					return 1;
					break;
			}
			break;
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.0529f, -8.9175f, 1.6907f };
					*uParam3 = 102.156f;
					return 1;
					break;
			}
			break;
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.4799f, -7.5315f, 0.682f };
					*uParam3 = 264f;
					return 1;
					break;
			}
			break;
		case 37:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.352f, -3.356f, 5.7338f };
					*uParam3 = 338f;
					return 1;
					break;
			}
			break;
		case 39:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.3003f, -10.3127f, 4.5874f };
					*uParam3 = 262.789f;
					return 1;
					break;
			}
			break;
		case 40:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.76f, -5.95f, 4.59f };
					*uParam3 = 177.6766f;
					return 1;
					break;
			}
			break;
		case 36:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.6691f, -7.6405f, 0.6817f };
					*uParam3 = 159.156f;
					return 1;
					break;
			}
			break;
		case 28:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 1.228f, 4.044f, 0.7665f };
					*uParam3 = 165f;
					return 1;
					break;
			}
			break;
		case 42:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.2365f, -7.6073f, 6.2761f };
					*uParam3 = 157.0716f;
					return 1;
					break;
			}
			break;
		case 43:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.161f, -7.562f, 2.17f };
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.7668f, -7.8757f, 5.5559f };
					*uParam3 = 144.6939f;
					return 1;
					break;
			}
			break;
		case 45:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.6257f, -9.4927f, 5.5876f };
					*uParam3 = 257.4583f;
					return 1;
					break;
			}
			break;
		case 46:
			return func_612(iParam0, 26, uParam2, uParam3);
			break;
		case 47:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 8.4451f, 3.1568f, 1.47f };
					*uParam3 = 159f;
					return 1;
					break;
			}
			break;
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 9.0477f, -7.9397f, 0.6817f };
					*uParam3 = 88.5686f;
					return 1;
					break;
			}
			break;
		case 49:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
					return 0;
					break;
			}
			break;
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 21.7f, 9f, 1.7029f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		case 51:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 1.3278f, 1.534f, 0f };
					*uParam3 = 159.72f;
					return 1;
					break;
			}
			break;
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -3.0265f, 1.7627f, 0.1273f };
					*uParam3 = 338.5f;
					return 1;
					break;
			}
			break;
		case 53:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 15.2374f, 8.723f, 1.4495f };
					*uParam3 = 205.677f;
					return 1;
					break;
			}
			break;
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 28.7f, 8.8241f, 0.6f };
					*uParam3 = 39f;
					return 1;
					break;
			}
			break;
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(1.1936f, -9.0107f, 9.0567f) + Vector((0.03f - 0.02f), 0f, 0f) };
					*uParam3 = 94.2086f;
					return 1;
					break;
			}
			break;
		case 64:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(5.2891f, 2.0403f, -2.8213f) + Vector((0.03f - 0.05f), 0f, 0f) };
					*uParam3 = 336f;
					return 1;
					break;
			}
			break;
		case 56:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.84f };
					*uParam3 = 311.4f;
					return 1;
					break;
			}
			break;
		case 57:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.8418f };
					*uParam3 = 306.6f;
					return 1;
					break;
			}
			break;
		case 58:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 5.8092f, 5.7965f, 3.85f };
					*uParam3 = 337.4f;
					return 1;
					break;
			}
			break;
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 13.3221f, 0.0684f, 0.6817f };
					*uParam3 = 277.317f;
					return 1;
					break;
			}
			break;
		case 60:
			if (func_612(iParam0, 59, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
				*uParam3 = (*uParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
				return 1;
			}
			break;
		case 61:
		case 62:
		case 63:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -2.235f, 1.725f, 4.5877f };
					*uParam3 = 172.714f;
					return 1;
					break;
			}
			break;
		case 65:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-158f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 66:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-164f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 73:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 7.394f, 5.368f, 1.451f };
					*uParam3 = 235.0656f;
					return 1;
					break;
			}
			break;
		case 74:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 1.0704f, -1.4624f, 0.999f };
					*uParam3 = 157.44f;
					return 1;
					break;
			}
			break;
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 14.8186f, 6.8253f, 0.5f };
					*uParam3 = 87.3368f;
					return 1;
					break;
			}
			break;
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 13.6486f, 6.2253f, 0.45f };
					*uParam3 = 262.32f;
					return 1;
					break;
			}
			break;
		case 77:
			if (func_612(iParam0, 47, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*uParam3 = (*uParam3 + 0f);
				return 1;
			}
			break;
		case 79:
		case 86:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 16.319f, -1.375f, 0.6817f };
					*uParam3 = 334.126f;
					return 1;
					break;
			}
			break;
		case 80:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { -0.39f, 3.27f, 0f };
					*uParam3 = 154.126f;
					return 1;
					break;
			}
			break;
		case 81:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.0213f, 6.9622f, 1.39f };
					*uParam3 = 142.889f;
					return 1;
					break;
			}
			break;
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.128f, 6.842f, 0.4524f };
					*uParam3 = 54f;
					return 1;
					break;
			}
			break;
		case 87:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9019f, -23.8349f, -2.1f };
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		case 88:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9937f, -24.9005f, -2.18f };
					*uParam3 = 314.2132f;
					return 1;
					break;
			}
			break;
		case 89:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 31.7401f, -1.0943f, 0.6822f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		case 90:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -27.1728f, -3.75f, -1.626f };
					*uParam3 = (147f + 90f);
					return 1;
					break;
			}
			break;
		case 91:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 14.7722f, -10.9336f, -0.537f };
					*uParam3 = 110.8505f;
					return 1;
					break;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -17.2536f, 2.451f, -0.6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		case 93:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 23.9716f, -20.3533f, -3.18f };
					*uParam3 = 324f;
					return 1;
					break;
			}
			break;
		case 94:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.1416f, -2.0799f, -0.0145f };
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		case 95:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.2746f, -4.1995f, -0.0144f };
					*uParam3 = 69f;
					return 1;
					break;
			}
			break;
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 2.983f, -4.094f, 0.4629f };
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		case 97:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 5.5235f, 2.9133f, 0.7288f };
					*uParam3 = 71f;
					return 1;
					break;
			}
			break;
		case 99:
			switch (iParam0)
			{
				case 6:
					*uParam2 = { Vector(30.7131f, -1454.6757f, -42.2059f) - Vector(30.116f, -1435.9974f, -14.3064f) };
					*uParam3 = (84.7009f - 188.5817f);
					return 1;
					break;
				case 7:
					*uParam2 = { Vector(30.6803f, -1455.8477f, -40.7478f) - Vector(30.116f, -1435.9974f, -14.3064f) };
					*uParam3 = (90.6417f - 188.5817f);
					return 1;
					break;
			}
			break;
		case 100:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 2.0126f, 0.3422f, -0.0086f };
					*uParam3 = 354f;
					return 1;
					break;
			}
			break;
		case 101:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.2931f, 1.4476f, 1.0127f };
					*uParam3 = 61.7525f;
					return 1;
					break;
			}
			break;
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 0.0158f, 1.4182f, 0.9913f };
					*uParam3 = 119.008f;
					return 1;
					break;
			}
			break;
		case 104:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -3.467f, 0.074f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		case 105:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.1014f, -5.4089f, -0.013f };
					*uParam3 = 123.753f;
					return 1;
					break;
			}
			break;
		case 106:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.802f, -6.3295f, -0.01f };
					*uParam3 = 42.757f;
					return 1;
					break;
			}
			break;
		case 107:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -2.156f, -4.9564f, 1.4886f };
					*uParam3 = 136.309f;
					return 1;
					break;
			}
			break;
		case 108:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 7.2656f, 3.022f, -0.9061f };
					*uParam3 = 92.8891f;
					return 1;
					break;
			}
			break;
		case 109:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 0.5066f, 1.6992f, 0.0168f };
					*uParam3 = 115.77f;
					return 1;
					break;
			}
			break;
		case 110:
		case 111:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -0.2121f, -6.2791f, -0.0089f };
					*uParam3 = 114.3391f;
					return 1;
					break;
			}
			break;
		case 116:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 8.2458f, -0.7136f, -0.2503f };
					*uParam3 = 252.2687f;
					return 1;
					break;
			}
			break;
		case 117:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 2.334f, 1.6889f, 0.586f };
					*uParam3 = 109f;
					return 1;
					break;
			}
			break;
		case 112:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -0.6331f, 1.2093f, -0.0086f };
					*uParam3 = 137.1861f;
					return 1;
					break;
			}
			break;
		case 113:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -3.887f, -0.166f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		case 114:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { 3.5179f, 9.1355f, -1f };
					*uParam3 = 141.79f;
					return 1;
					break;
			}
			break;
		case 115:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f) };
					*uParam3 = 121.6591f;
					return 1;
					break;
			}
			break;
		case 118:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.2823f, 2.2595f, -1.0742f };
					*uParam3 = (170.2796f - 180f);
					return 1;
					break;
			}
			break;
		case 119:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.077f, -5.1446f, 0.9904f };
					*uParam3 = 107.1399f;
					return 1;
					break;
			}
			break;
		case 120:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -12.903f, -6.623f, -0.0406f };
					*uParam3 = 63.48f;
					return 1;
					break;
			}
			break;
		case 121:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.5514f, 5.393f, -0.0998f };
					*uParam3 = 327.483f;
					return 1;
					break;
			}
			break;
		case 122:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 0.9794f, -0.3043f, 0f };
					*uParam3 = 179.7612f;
					return 1;
					break;
			}
			break;
		case 123:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 11.9759f, 1f, -1.0728f };
					*uParam3 = 238.9422f;
					return 1;
					break;
			}
			break;
		case 124:
			switch (iParam0)
			{
				case 11:
				case 8:
					*uParam2 = { -0.576f, 1.671f, 0.601f };
					*uParam3 = 296f;
					return 1;
					break;
			}
			break;
		case 125:
			switch (iParam0)
			{
				case 12:
					*uParam2 = { -0.6532f, 0.9556f, -0.0087f };
					*uParam3 = 121.0556f;
					return 1;
					break;
			}
			break;
		case 126:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -0.18f, -4.173f, 0.9981f };
					*uParam3 = 216.61f;
					return 1;
					break;
			}
			break;
		case 127:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.5937f, 0.3521f, 1f };
					*uParam3 = 119.4f;
					return 1;
					break;
			}
			break;
		case 128:
			switch (iParam0)
			{
				case 13:
					if (Global_113386.f_18533[2] == 299)
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (34.661f - 90.6729f);
						return 1;
					}
					else if (((Global_113386.f_18533[2] == 300 || Global_113386.f_18533[2] == 301) || Global_113386.f_18533[2] == 302) || Global_113386.f_18533[2] == 303)
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (32f - 90.6729f);
						return 1;
					}
					if (__LIB_0__::func_502())
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (34.661f - 90.6729f);
						return 1;
					}
					else
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (32f - 90.6729f);
						return 1;
					}
					break;
			}
			break;
		case 129:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector(10.6327f, -1519.561f, -1156.422f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
					*uParam3 = (102f - 90.6729f);
					return 1;
					break;
			}
			break;
		case 130:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -2.8352f, 0.0552f, 0f };
					*uParam3 = 334.44f;
					return 1;
					break;
			}
			break;
		case 131:
			switch (iParam0)
			{
				case 13:
					if (func_612(iParam0, 130, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
						*uParam3 = (*uParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
						return 1;
					}
					break;
			}
			break;
		case 132:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -7.213f, -1.4536f, 0.9981f };
					*uParam3 = 42.6f;
					return 1;
					break;
			}
			break;
		case 133:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector((9.6327f + 1f), -1518.7363f, -1148.4664f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
					*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					return 1;
					break;
			}
			break;
		case 134:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 5.24f, 6.217f, 0.998f };
					*uParam3 = 315.72f;
					return 1;
					break;
			}
			break;
		case 135:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.6447f, 0.7635f, 1.0507f };
					*uParam3 = 296.683f;
					return 1;
					break;
			}
			break;
		case 136:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 3.968f, -1.04f, 0f };
					*uParam3 = 214.92f;
					return 1;
					break;
				case 14:
					*uParam2 = { 4.617f, -1.1314f, 0f };
					*uParam3 = 39.4085f;
					return 1;
					break;
			}
			break;
		case 137:
		case 138:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		case 140:
		case 141:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		default:
			*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
			return 0;
			break;
	}
	*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
	*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	return 0;
}

int func_627(var uParam0, var* uParam1, var uParam2)//Position - 0x92F3D
{
	int iVar0;
	char cVar1[32];
	char* sVar2;
	iVar0 = 1;
	StringCopy(&cVar1, "player_timetable_scene", 32);
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&cVar1)) <= 0)
	{
		iVar0 = 0;
		if (!SCRIPT::HAS_SCRIPT_LOADED(&cVar1))
		{
			SCRIPT::REQUEST_SCRIPT(&cVar1);
		}
		else
		{
			__LIB_32__::func_822(*uParam0, uParam1);
			if (__LIB_0__::func_517(uParam2, 64))
			{
				uParam1->f_119 = 1;
			}
			SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&cVar1, uParam1, 120, 5050);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cVar1);
		}
	}
	if (func_584(uParam0->f_2, &sVar2))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&sVar2)) <= 0)
		{
			iVar0 = 0;
			if (!SCRIPT::HAS_SCRIPT_LOADED(&sVar2))
			{
				SCRIPT::REQUEST_SCRIPT(&sVar2);
			}
			else
			{
				SYSTEM::START_NEW_SCRIPT(&sVar2, 2050);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&sVar2);
			}
		}
	}
	return iVar0;
}

struct<109> func_628(var uParam0)//Position - 0x92FE8
{
	char cVar0[32];
	char* sVar1;
	StringCopy(&cVar0, "player_timetable_scene", 32);
	SCRIPT::REQUEST_SCRIPT(&cVar0);
	if (func_584(uParam0->f_2, &sVar1))
	{
		SCRIPT::REQUEST_SCRIPT(&sVar1);
	}
	Global_97752 = 1;
	return *uParam0;
}

void func_636(var uParam0, int iParam1)//Position - 0x939A9
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113386.f_18533[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_432(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				__LIB_0__::func_17(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_97831[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_9 = 0f;
				Global_97831[iVar0 /*29*/].f_12 = 0f;
				Global_97831[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_10 = 0f;
				Global_97831[iVar0 /*29*/].f_13 = 0f;
				Global_97831[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_11 = 0f;
				Global_97831[iVar0 /*29*/].f_14 = 0f;
				Global_97831[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_26 = 0f;
				Global_97831[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_27 = 0f;
				Global_97831[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_637(int iParam0)//Position - 0x93B6F
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, iParam0);
	iVar1 = 0;
	while (iVar1 < Global_113386.f_7688.f_136)
	{
		if (Global_113386.f_7688[iVar1 /*15*/].f_2 == iVar0)
		{
			__LIB_36__::func_57(Global_113386.f_7688[iVar1 /*15*/]);
			iVar1 = 0;
		}
		else
		{
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < Global_113386.f_7688.f_650)
	{
		if (Global_113386.f_7688.f_199[iVar1 /*15*/].f_2 == iVar0)
		{
			__LIB_36__::func_57(Global_113386.f_7688.f_199[iVar1 /*15*/]);
			iVar1 = 0;
		}
		else
		{
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < Global_113386.f_7688.f_764)
	{
		if (Global_113386.f_7688.f_651[iVar1 /*14*/].f_2 == iVar0)
		{
			__LIB_36__::func_57(Global_113386.f_7688.f_651[iVar1 /*14*/]);
			iVar1 = 0;
		}
		else
		{
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < Global_113386.f_7688.f_866)
	{
		if (Global_113386.f_7688.f_765[iVar1 /*10*/].f_2 == iVar0)
		{
			__LIB_36__::func_57(Global_113386.f_7688.f_765[iVar1 /*10*/]);
			iVar1 = 0;
		}
		else
		{
			iVar1++;
		}
	}
}

void func_653(bool bParam0)//Position - 0x9440D
{
	func_412(joaat("Player_Zero"), 12, 20, bParam0);
	func_412(joaat("Player_Zero"), 12, 21, bParam0);
	func_412(joaat("Player_Zero"), 12, 22, bParam0);
	func_412(joaat("Player_One"), 12, 13, bParam0);
	func_412(joaat("Player_One"), 12, 14, bParam0);
	func_412(joaat("Player_One"), 12, 15, bParam0);
	func_412(joaat("Player_Two"), 12, 17, bParam0);
	func_412(joaat("Player_Two"), 12, 18, bParam0);
	func_412(joaat("Player_Two"), 12, 19, bParam0);
}

void func_654()//Position - 0x9449C
{
	func_655(24);
	func_655(25);
	func_655(26);
	func_655(27);
}

void func_655(int iParam0)//Position - 0x944BC
{
	int iVar0;
	iVar0 = iParam0;
	if (Global_113386.f_9085.f_330[iVar0 /*6*/] == 0)
	{
		__LIB_20__::func_894(iVar0, joaat("CITIES_PASSED"), 1);
	}
}

void func_659()//Position - 0x948B6
{
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	__LIB_8__::func_611(0);
}

int func_661()//Position - 0x94914
{
	struct<4> Var0;
	switch (iLocal_71)
	{
		case 0:
			AUDIO::START_AUDIO_SCENE("END_CREDITS_SHRINKS_NOTE_SCENE");
			iLocal_72 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("PSYCHOLOGY_REPORT");
			while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_72))
			{
				func_659();
				SYSTEM::WAIT(0);
			}
			while (!AUDIO::LOAD_STREAM("Office_Background_Stream", "SHRINK_SOUNDS"))
			{
				func_659();
				SYSTEM::WAIT(0);
			}
			HUD::REQUEST_ADDITIONAL_TEXT("REPORT", 0);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				func_659();
				SYSTEM::WAIT(0);
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_72, "SET_PLAYER_NAME");
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("PATIENT");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("GAMERTAG");
			if (NETWORK::NETWORK_IS_SIGNED_IN())
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
			}
			else
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("ACCNA_MIKE" /* GXT: Michael De Santa */);
			}
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_72, "SET_LETTER_TEXT");
			__LIB_0__::func_478("HEADER_1");
			__LIB_0__::func_478("HEADER_2");
			Var0 = { __LIB_31__::func_112(&uLocal_73) };
			__LIB_0__::func_478(&Var0);
			Var0 = { __LIB_31__::func_111(&uLocal_73) };
			__LIB_0__::func_478(&Var0);
			Var0 = { __LIB_31__::func_110(&uLocal_73) };
			__LIB_0__::func_478(&Var0);
			Var0 = { __LIB_31__::func_109(&uLocal_73) };
			__LIB_0__::func_478(&Var0);
			Var0 = { __LIB_31__::func_108(&uLocal_73) };
			__LIB_0__::func_478(&Var0);
			Var0 = { __LIB_37__::func_592(&uLocal_73) };
			__LIB_0__::func_478(&Var0);
			Var0 = { func_692(&uLocal_73) };
			__LIB_0__::func_478(&Var0);
			Var0 = { __LIB_31__::func_105(&uLocal_73) };
			__LIB_0__::func_478(&Var0);
			Var0 = { __LIB_31__::func_104(&uLocal_73) };
			__LIB_0__::func_478(&Var0);
			Var0 = { __LIB_31__::func_103(&uLocal_73) };
			__LIB_0__::func_478(&Var0);
			Var0 = { __LIB_37__::func_591(&uLocal_73) };
			__LIB_0__::func_478(&Var0);
			Var0 = { __LIB_39__::func_585(&uLocal_73) };
			__LIB_0__::func_478(&Var0);
			Var0 = { __LIB_31__::func_102(&uLocal_73) };
			__LIB_0__::func_478(&Var0);
			Var0 = { __LIB_35__::func_246(&uLocal_73) };
			__LIB_0__::func_478(&Var0);
			Var0 = { __LIB_31__::func_101(&uLocal_73) };
			__LIB_0__::func_478(&Var0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			while (!__LIB_39__::func_584(&uLocal_89, &iLocal_90, &uLocal_73))
			{
				func_659();
				SYSTEM::WAIT(0);
			}
			__LIB_1__::func_899(&iLocal_91);
			__LIB_31__::func_99(&iLocal_91, 0, 0, 1, 1);
			__LIB_12__::func_133(&iLocal_91, "CONTINUE", 2, 201, 1, 1, 0);
			__LIB_30__::func_646(&iLocal_91, 1);
			__LIB_31__::func_98(&iLocal_91, 1);
			AUDIO::PLAY_STREAM_FRONTEND();
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				while (!CAM::IS_SCREEN_FADED_IN())
				{
					func_659();
					GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_72, 255, 255, 255, 255, 0);
					SYSTEM::WAIT(0);
				}
			}
			func_659();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_72, 255, 255, 255, 255, 0);
			iLocal_71 = 1;
			break;
		case 1:
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_72, 255, 255, 255, 255, 0);
			__LIB_20__::func_627(&iLocal_91, 1128792064, 1, 0, 1, 1065353216);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				HUD::SET_MOUSE_CURSOR_THIS_FRAME();
			}
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
			{
				iLocal_71 = 2;
			}
			break;
		case 2:
			__LIB_1__::func_899(&iLocal_91);
			CAM::DO_SCREEN_FADE_OUT(3000);
			while (CAM::IS_SCREEN_FADING_OUT())
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_72, 255, 255, 255, 255, 0);
				func_659();
				SYSTEM::WAIT(0);
			}
			AUDIO::STOP_STREAM();
			AUDIO::STOP_AUDIO_SCENE("END_CREDITS_SHRINKS_NOTE_SCENE");
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_72);
			return 0;
			break;
	}
	return 1;
}

struct<4> func_692(var uParam0)//Position - 0x95927
{
	struct<4> Var0;
	int iVar1;
	StringCopy(&Var0, "FAMILY_", 16);
	if (__LIB_31__::func_106(8) && __LIB_31__::func_106(5))
	{
		StringCopy(&(uParam0->f_7), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else if ((Global_113386.f_9085.f_330[50 /*6*/] == 1 && Global_113386.f_9085.f_330[51 /*6*/] == 1) && Global_113386.f_9085.f_330[52 /*6*/] == 1)
	{
		StringCopy(&(uParam0->f_7), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_7), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_7), iVar1, 4);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

