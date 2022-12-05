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
	var uLocal_41 = 16;
	var uLocal_42 = 0;
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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
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
	struct<3> Local_159[234];
	struct<3> Local_160 = { 0, 0, 0 } ;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	float fLocal_163 = 0f;
	struct<12> Local_164 = { 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_165 = { 0, 0, 0, 0, 4, 0, 0, 0, 0, 0 } ;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	struct<22> Local_169 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180[4] = { 0, 0, 0, 0 };
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	float fLocal_188 = 0f;
	float fLocal_189 = 0f;
	float fLocal_190 = 0f;
	int iLocal_191 = 0;
	struct<3> Local_192[32];
	int iLocal_193 = 0;
	int iLocal_194 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
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
	iLocal_40 = joaat("prop_ld_test_01");
	Local_160 = { 0f, 0f, 1.7f };
	fLocal_163 = 0f;
	iLocal_182 = -1;
	iLocal_183 = -1;
	iLocal_184 = 32;
	iLocal_185 = 32;
	iLocal_186 = 3;
	fLocal_188 = 0.25f;
	fLocal_189 = 1.75f;
	fLocal_190 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_187(0);
	}
	SYSTEM::WAIT(0);
	func_57(0f, 0f, 0f, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	MISC::SET_BIT(&Global_78567, 7);
	if (!CAM::DOES_CAM_EXIST(iLocal_181))
	{
		iLocal_181 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -1652.2273f, -1120.93f, 22.4479f, 9.2388f, 0f, -131.6249f, 50.1098f, true, 2);
		CAM::SET_CAM_PARAMS(iLocal_181, -1652.2273f, -1120.93f, 22.4479f, 9.2388f, 0f, -131.6249f, 50.1098f, 0, 1, 1, 2);
		CAM::SET_CAM_ACTIVE(iLocal_181, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
	if (__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 60f, 0);
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 60f);
	}
	__LIB_10__.func_705(&uLocal_41, 0, iLocal_40);
	__LIB_10__.func_705(&uLocal_41, 1, joaat("prop_roller_car_01"));
	__LIB_10__.func_705(&uLocal_41, 2, joaat("prop_roller_car_02"));
	while (!AUDIO::LOAD_STREAM("LEVIATHON_RIDE_MASTER", 0))
	{
		__LIB_0__.func_91();
		__LIB_0__.func_524(PLAYER::PLAYER_PED_ID());
		SYSTEM::WAIT(0);
	}
	AUDIO::PLAY_STREAM_FRONTEND();
	if (CAM::DOES_CAM_EXIST(iLocal_181))
	{
		CAM::SET_CAM_PARAMS(iLocal_181, -1651.5007f, -1118.3954f, 23.5181f, 3.435f, 0f, -152.2412f, 50.1098f, 5000, 1, 1, 2);
		iVar6 = MISC::GET_GAME_TIMER() + 5000;
	}
	while (!__LIB_20__.func_327(&uLocal_41) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		__LIB_0__.func_91();
		__LIB_0__.func_524(PLAYER::PLAYER_PED_ID());
		SYSTEM::WAIT(0);
	}
	if (__LIB_0__.func_524(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
	{
		if (__LIB_30__.func_917(PLAYER::GET_PLAYERS_LAST_VEHICLE(), joaat("bagger")))
		{
			__LIB_32__.func_742(-1633.4298f, -1111.9984f, 11.022523f, -1661.2704f, -1142.6598f, 25.517223f, 12f, -1630.952f, -1107.5804f, 12.0215f, 51.9704f, 1, 1, 1, 0, 0);
		}
		else if (__LIB_30__.func_917(PLAYER::GET_PLAYERS_LAST_VEHICLE(), joaat("sandking")))
		{
			__LIB_32__.func_742(-1633.4298f, -1111.9984f, 11.022523f, -1661.2704f, -1142.6598f, 25.517223f, 12f, -1636.3438f, -1106.241f, 12.0261f, 52.3427f, 1, 1, 1, 0, 0);
		}
	}
	fLocal_190 = 0.5f;
	func_33(1, 0.5f, 2);
	func_33(2, 0.5f, 5);
	func_33(13, 0.5f, 0);
	func_33(14, 0.3f, 0);
	func_33(15, 0.2f, 0);
	func_33(16, 0.1f, 0);
	func_33(17, 0.05f, 6);
	func_33(18, 0.05f, 0);
	func_33(19, 1f, 2);
	func_33(20, 1f, 4);
	func_33(31, 1f, 2);
	func_33(34, 1f, 4);
	func_33(45, 1f, 4);
	func_33(60, 1f, 4);
	func_33(69, 1f, 4);
	func_33(81, 1f, 3);
	func_33(84, 0.75f, 1);
	func_33(90, 0.75f, 5);
	func_33(94, 0.75f, 6);
	func_33(95, 1f, 2);
	func_33(97, 1f, 4);
	func_33(118, 1f, 4);
	func_33(130, 1f, 4);
	func_33(155, 1f, 4);
	func_33(172, 1f, 4);
	func_33(184, 1f, 4);
	func_33(197, 1f, 4);
	func_33(216, 1f, 4);
	func_33(222, 1f, 3);
	func_33(232, 0.01f, 0);
	__LIB_9__.func_421(iLocal_191);
	func_30();
	func_29();
	func_28(&Local_164, 1, 0);
	SYSTEM::WAIT(0);
	func_28(&Local_165, 2, 0);
	Local_164.f_11 = 1;
	__LIB_8__.func_770(1);
	SYSTEM::WAIT(0);
	func_15();
	if (__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()) && __LIB_0__.func_524(Local_164.f_9))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1648.4f, -1127.6f, 18.3f, true, false, false, true);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_164.f_9, 0, 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	}
	while (MISC::GET_GAME_TIMER() < iVar6)
	{
		SYSTEM::WAIT(0);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_181))
	{
		CAM::SET_CAM_ACTIVE(iLocal_181, false);
		CAM::DESTROY_CAM(iLocal_181, false);
	}
	if (__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()))
	{
		Local_169.f_20 = 60;
		Local_169.f_21 = 20;
		Var1 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, -0.25f, 0f) };
		__LIB_10__.func_838(&Local_169, Var1, ENTITY::GET_ENTITY_ROTATION(Local_164.f_9, 2), 50f, Local_169.f_20, Local_169.f_21, 3, 1101004800, 0, 0, -1082130432, 0);
		CAM::ATTACH_CAM_TO_ENTITY(Local_169.f_0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0.5f, true);
	}
	SYSTEM::WAIT(0);
	if (__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()) && __LIB_0__.func_524(Local_165.f_9))
	{
		__LIB_20__.func_263(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_165.f_9, true), &fVar4, &fVar5, 1);
		__LIB_7__.func_112(&Local_169, 1, 1, 0, 0, 1045220557, 0, 1065353216, 0);
		CAM::SET_CAM_ROT(Local_169.f_0, Vector(fVar5, 0f, fVar4) + Local_169.f_14, 2);
	}
	AUDIO::START_AUDIO_SCENE("FAIRGROUND_RIDES_LEVIATHAN");
	iLocal_187 = MISC::GET_GAME_TIMER() + 5000;
	__LIB_0__.func_151("FGND_SKIPRIDE" /* GXT: Press ~INPUT_CONTEXT~ or ~INPUT_SKIP_CUTSCENE~ to skip the ride. */, -1);
	PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 1000, 255);
	while (true)
	{
		func_6();
		func_15();
		iVar0 = Local_164.f_4[1];
		Var2 = { __LIB_0__.func_79(func_5(iVar0 + 1) - func_5(iVar0)) };
		Var3 = { __LIB_0__.func_79(func_5(iVar0 + 4) - func_5(iVar0)) };
		fVar8 = (1f - __LIB_0__.func_156(Var3, Var2));
		fVar7 = (SYSTEM::SIN(((Local_164.f_10 - IntToFloat(SYSTEM::FLOOR(Local_164.f_10))) * 360f)) * fLocal_188);
		if (__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()) && __LIB_0__.func_524(Local_165.f_9))
		{
			__LIB_20__.func_263(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_165.f_9, true), &fVar4, &fVar5, 1);
			__LIB_7__.func_112(&Local_169, 1, 1, 0, 0, 1045220557, 0, 1065353216, 0);
			CAM::SET_CAM_ROT(Local_169.f_0, Vector((fVar5 + (fVar7 * (fVar8 * 2f))), 0f, (fVar4 + fVar7)) + Local_169.f_14, 2);
		}
		__LIB_0__.func_91();
		__LIB_0__.func_186();
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		if (MISC::GET_GAME_TIMER() > iLocal_187)
		{
			if (fLocal_190 > 0.01f)
			{
				if (fLocal_190 > 0.5f)
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "ROLLERCOASTER_CHAT_EXCITED", "SPEECH_PARAMS_FORCE_FRONTEND", 1);
				}
				else
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "ROLLERCOASTER_CHAT_NORMAL", "SPEECH_PARAMS_FORCE_FRONTEND", 1);
				}
				iLocal_187 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 13000));
			}
		}
		if (iLocal_179 == 0)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
			{
				__LIB_10__.func_696(500, 0);
				iLocal_179 = 1;
			}
		}
		else if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_187(1);
		}
		else if (!CAM::IS_SCREEN_FADING_OUT())
		{
			iLocal_179 = 0;
		}
		SYSTEM::WAIT(0);
	}
}

Vector3 func_5(int iParam0)//Position - 0x81B
{
	int iVar0;
	iVar0 = (iParam0 % iLocal_161);
	return Local_159[iVar0 /*3*/];
}

void func_6()//Position - 0x833
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	iVar3 = iLocal_191 + 1;
	if (iLocal_191 >= Local_192.f_0)
	{
		iLocal_191 = 0;
		return;
	}
	if (iVar3 >= Local_192.f_0)
	{
		return;
	}
	if (Local_164.f_10 < IntToFloat(Local_192[iLocal_191 /*3*/]))
	{
		return;
	}
	if (Local_164.f_10 >= IntToFloat(Local_192[iVar3 /*3*/]))
	{
		iLocal_191 = iVar3;
		return;
	}
	if (iVar3 >= Local_192.f_0)
	{
		return;
	}
	if (Local_192[iLocal_191 /*3*/].f_1 == Local_192[iVar3 /*3*/].f_1)
	{
		fLocal_190 = Local_192[iLocal_191 /*3*/].f_1;
		return;
	}
	fVar0 = SYSTEM::TO_FLOAT(MISC::ABSI((Local_192[iLocal_191 + 1 /*3*/] - Local_192[iLocal_191 /*3*/])));
	fVar1 = (Local_192[iVar3 /*3*/].f_1 - Local_192[iLocal_191 /*3*/].f_1);
	fVar2 = (1f - ((SYSTEM::TO_FLOAT(Local_192[iVar3 /*3*/]) - Local_164.f_10) / fVar0));
	fLocal_190 = (Local_192[iLocal_191 /*3*/].f_1 + (fVar2 * fVar1));
	if (Local_192[iLocal_191 /*3*/].f_1 < Local_192[iVar3 /*3*/].f_1)
	{
		fLocal_190 = __LIB_0__.func_301(fLocal_190, Local_192[iLocal_191 /*3*/].f_1, Local_192[iVar3 /*3*/].f_1);
	}
	else
	{
		fLocal_190 = __LIB_0__.func_301(fLocal_190, Local_192[iVar3 /*3*/].f_1, Local_192[iLocal_191 /*3*/].f_1);
	}
}

void func_15()//Position - 0x11E7
{
	func_19();
	func_17(&Local_165);
	func_17(&Local_164);
	func_16(Local_164.f_9, Local_165.f_9);
}

void func_16(int iParam0, int iParam1)//Position - 0x120F
{
	float fVar0;
	float fVar1;
	__LIB_20__.func_263(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(iParam1, true), &fVar0, &fVar1, 1);
	ENTITY::SET_ENTITY_ROTATION(iParam0, fVar0, 0f, fVar1, 2, true);
}

void func_17(var uParam0)//Position - 0x123B
{
	float fVar0;
	fVar0 = uParam0->f_3;
	uParam0->f_3 = (uParam0->f_3 + (((fLocal_163 * fLocal_190) * fLocal_189) * SYSTEM::TIMESTEP()));
	if (uParam0->f_3 >= 1f)
	{
		uParam0->f_3 = (uParam0->f_3 - 1f);
		uParam0->f_4[0] = uParam0->f_4[1];
		uParam0->f_4[1] = uParam0->f_4[2];
		uParam0->f_4[2] = uParam0->f_4[3];
		uParam0->f_4[3]++;
		if (uParam0->f_4[3] >= iLocal_161)
		{
			uParam0->f_4[3] = (uParam0->f_4[3] - iLocal_161);
		}
		if ((uParam0->f_4[3] % iLocal_186) == 0)
		{
			PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_184, iLocal_185);
		}
	}
	*uParam0 = { func_18(&(Local_159[uParam0->f_4[0] /*3*/]), &(Local_159[uParam0->f_4[1] /*3*/]), &(Local_159[uParam0->f_4[2] /*3*/]), &(Local_159[uParam0->f_4[3] /*3*/]), uParam0->f_3) };
	*uParam0 = { *uParam0 + Local_160 };
	if (__LIB_0__.func_524(uParam0->f_9) && fVar0 != uParam0->f_3)
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_9, *uParam0, false, false, true);
	}
	uParam0->f_10 = (SYSTEM::TO_FLOAT(uParam0->f_4[1]) + uParam0->f_3);
}

Vector3 func_18(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4)//Position - 0x1368
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	fVar1 = (fParam4 * fParam4);
	fVar2 = (fVar1 * fParam4);
	Var0.f_0 = (0.5f * ((((2f * *uParam1) + ((-*uParam0 + *uParam2) * fParam4)) + (((((2f * *uParam0) - (5f * *uParam1)) + (4f * *uParam2)) - *uParam3) * fVar1)) + ((((-*uParam0 + (3f * *uParam1)) - (3f * *uParam2)) + *uParam3) * fVar2)));
	Var0.f_1 = (0.5f * ((((2f * uParam1->f_1) + ((-uParam0->f_1 + uParam2->f_1) * fParam4)) + (((((2f * uParam0->f_1) - (5f * uParam1->f_1)) + (4f * uParam2->f_1)) - uParam3->f_1) * fVar1)) + ((((-uParam0->f_1 + (3f * uParam1->f_1)) - (3f * uParam2->f_1)) + uParam3->f_1) * fVar2)));
	Var0.f_2 = (0.5f * ((((2f * uParam1->f_2) + ((-uParam0->f_2 + uParam2->f_2) * fParam4)) + (((((2f * uParam0->f_2) - (5f * uParam1->f_2)) + (4f * uParam2->f_2)) - uParam3->f_2) * fVar1)) + ((((-uParam0->f_2 + (3f * uParam1->f_2)) - (3f * uParam2->f_2)) + uParam3->f_2) * fVar2)));
	return Var0;
}

void func_19()//Position - 0x147A
{
	switch (iLocal_168)
	{
		case 0:
			fLocal_163 = (fLocal_163 + (MISC::GET_FRAME_TIME() / 2f));
			if (fLocal_163 >= 5f)
			{
				fLocal_163 = 5f;
				iLocal_168 = 1;
			}
			break;
		case 1:
			if (Local_164.f_4[1] == 224 && iLocal_162 == 0)
			{
				iLocal_168 = 2;
				if (__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "BIG_STOP", PLAYER::PLAYER_PED_ID(), 0, false, 0);
				}
			}
			break;
		case 2:
			fLocal_163 = (fLocal_163 - MISC::GET_FRAME_TIME());
			if (fLocal_163 <= 0f)
			{
				fLocal_163 = 0f;
				iLocal_168 = 3;
			}
			break;
		case 3:
			SYSTEM::WAIT(1500);
			func_187(1);
			break;
	}
}

void func_28(var uParam0, int iParam1, int iParam2)//Position - 0x174D
{
	int iVar0;
	uParam0->f_4[0] = (iParam1 - 2);
	uParam0->f_4[1] = (iParam1 - 1);
	uParam0->f_4[2] = iParam1;
	uParam0->f_4[3] = iParam1 + 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_4)
	{
		if (uParam0->f_4[iVar0] < 0)
		{
			uParam0->f_4[iVar0] = (uParam0->f_4[iVar0] + iLocal_161);
		}
		if (uParam0->f_4[iVar0] >= iLocal_161)
		{
			uParam0->f_4[iVar0] = (uParam0->f_4[iVar0] - iLocal_161);
		}
		iVar0++;
	}
	uParam0->f_3 = iParam2;
	*uParam0 = { func_18(&(Local_159[uParam0->f_4[0] /*3*/]), &(Local_159[uParam0->f_4[1] /*3*/]), &(Local_159[uParam0->f_4[2] /*3*/]), &(Local_159[uParam0->f_4[3] /*3*/]), uParam0->f_3) };
	*uParam0 = { *uParam0 + Local_160 };
	uParam0->f_9 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_40, *uParam0, true, true, false);
	if (__LIB_0__.func_524(uParam0->f_9))
	{
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_9, false, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_9, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_9, true);
	}
}

void func_29()//Position - 0x185B
{
	int iVar0;
	iLocal_180[0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1643.5242f, -1124.6805f, 17.4326f, 2f, joaat("prop_roller_car_01"), true, false, true);
	iLocal_180[1] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1645.1455f, -1126.6127f, 17.4326f, 2f, joaat("prop_roller_car_02"), true, false, true);
	iLocal_180[2] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1646.7676f, -1128.5453f, 17.4326f, 2f, joaat("prop_roller_car_02"), true, false, true);
	iLocal_180[3] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1648.3896f, -1130.4784f, 17.4326f, 2f, joaat("prop_roller_car_02"), true, false, true);
	iVar0 = 0;
	while (iVar0 < iLocal_180)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_180[iVar0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_180[iVar0], true, false);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_180[iVar0], false, false);
			ENTITY::SET_ENTITY_COLLISION(iLocal_180[iVar0], false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_180[iVar0], true);
		}
		iVar0++;
	}
}

void func_30()//Position - 0x1940
{
	iLocal_161 = 0;
	func_31(-1642.8782f, -1123.9034f, 16.875f);
	func_31(-1644.4199f, -1125.7399f, 16.8748f);
	func_31(-1645.8953f, -1127.4989f, 16.8755f);
	func_31(-1647.437f, -1129.3353f, 16.8753f);
	func_31(-1648.7561f, -1130.9084f, 16.8753f);
	func_31(-1650.298f, -1132.7448f, 16.875f);
	func_31(-1651.6171f, -1134.3177f, 16.8751f);
	func_31(-1653.1589f, -1136.1542f, 16.8748f);
	func_31(-1654.4781f, -1137.7273f, 16.8748f);
	func_31(-1656.0354f, -1139.5836f, 16.8755f);
	func_31(-1657.5308f, -1141.3647f, 16.8737f);
	func_31(-1658.9907f, -1143.106f, 16.8658f);
	func_31(-1660.4988f, -1144.9023f, 16.6238f);
	func_31(-1661.9602f, -1146.6438f, 16.1105f);
	func_31(-1663.4008f, -1148.3608f, 15.6586f);
	func_31(-1664.8406f, -1150.076f, 15.3486f);
	func_31(-1666.3196f, -1151.8391f, 15.2158f);
	func_31(-1667.8478f, -1153.6605f, 15.211f);
	func_31(-1669.4388f, -1155.5143f, 15.2169f);
	func_31(-1671.2697f, -1156.9758f, 15.2531f);
	func_31(-1673.3928f, -1158.0062f, 15.3676f);
	func_31(-1675.6748f, -1158.6094f, 15.5443f);
	func_31(-1678.0298f, -1158.768f, 15.7925f);
	func_31(-1680.3654f, -1158.4532f, 16.034f);
	func_31(-1682.5842f, -1157.6477f, 16.248f);
	func_31(-1684.6084f, -1156.4354f, 16.4506f);
	func_31(-1686.3657f, -1154.8607f, 16.6232f);
	func_31(-1687.7472f, -1152.9507f, 16.7552f);
	func_31(-1688.7185f, -1150.8003f, 16.8714f);
	func_31(-1689.2633f, -1148.5048f, 16.9875f);
	func_31(-1689.3574f, -1146.1498f, 17.1035f);
	func_31(-1688.9308f, -1143.829f, 17.2199f);
	func_31(-1688.0691f, -1141.6328f, 17.336f);
	func_31(-1686.8066f, -1139.6399f, 17.4523f);
	func_31(-1685.166f, -1137.9503f, 17.5683f);
	func_31(-1683.206f, -1136.637f, 17.6846f);
	func_31(-1681.032f, -1135.7218f, 17.8007f);
	func_31(-1678.7236f, -1135.2341f, 17.9169f);
	func_31(-1676.3694f, -1135.2588f, 18.033f);
	func_31(-1674.0613f, -1135.7456f, 18.1492f);
	func_31(-1671.8885f, -1136.6627f, 18.2653f);
	func_31(-1669.9409f, -1137.9832f, 18.3814f);
	func_31(-1668.3221f, -1139.7002f, 18.4976f);
	func_31(-1667.0603f, -1141.6923f, 18.6138f);
	func_31(-1666.1997f, -1143.8888f, 18.73f);
	func_31(-1665.8157f, -1146.2086f, 18.846f);
	func_31(-1665.9152f, -1148.5652f, 18.9622f);
	func_31(-1666.4609f, -1150.8588f, 19.0783f);
	func_31(-1667.4324f, -1153.0096f, 19.1946f);
	func_31(-1668.8496f, -1154.8859f, 19.3106f);
	func_31(-1670.6064f, -1156.4585f, 19.4267f);
	func_31(-1672.6309f, -1157.6694f, 19.5429f);
	func_31(-1674.7874f, -1158.446f, 19.6567f);
	func_31(-1676.3906f, -1158.717f, 19.7777f);
	func_31(-1678.2314f, -1158.801f, 19.953f);
	func_31(-1680.221f, -1158.6627f, 20.1677f);
	func_31(-1682.4105f, -1158.2969f, 20.4143f);
	func_31(-1684.6401f, -1157.6542f, 20.674f);
	func_31(-1686.8926f, -1156.7153f, 20.9358f);
	func_31(-1689.1161f, -1155.4551f, 21.1866f);
	func_31(-1691.2562f, -1153.8446f, 21.4132f);
	func_31(-1693.2592f, -1151.8575f, 21.6023f);
	func_31(-1695.0718f, -1149.4667f, 21.7407f);
	func_31(-1696.551f, -1146.8528f, 21.8203f);
	func_31(-1697.6345f, -1144.2366f, 21.8563f);
	func_31(-1698.3623f, -1141.6365f, 21.8562f);
	func_31(-1698.7628f, -1139.0817f, 21.8259f);
	func_31(-1698.8662f, -1136.6012f, 21.7715f);
	func_31(-1698.7009f, -1134.2245f, 21.6989f);
	func_31(-1698.297f, -1131.9816f, 21.6144f);
	func_31(-1697.6823f, -1129.9008f, 21.5238f);
	func_31(-1696.8884f, -1128.0118f, 21.4334f);
	func_31(-1695.9435f, -1126.3444f, 21.349f);
	func_31(-1694.7991f, -1124.8711f, 21.2657f);
	func_31(-1693.0948f, -1123.2388f, 21.119f);
	func_31(-1691.154f, -1121.8994f, 20.981f);
	func_31(-1689.0249f, -1120.8865f, 20.8585f);
	func_31(-1686.7622f, -1120.2255f, 20.7582f);
	func_31(-1684.4233f, -1119.9338f, 20.6861f);
	func_31(-1682.0681f, -1120.0188f, 20.6475f);
	func_31(-1679.7571f, -1120.4772f, 20.6471f);
	func_31(-1677.5493f, -1121.2968f, 20.6883f);
	func_31(-1675.5024f, -1122.4581f, 20.7732f);
	func_31(-1673.6677f, -1123.9282f, 20.9032f);
	func_31(-1672.0916f, -1125.6687f, 21.0783f);
	func_31(-1670.8145f, -1127.6348f, 21.2971f);
	func_31(-1669.8662f, -1129.775f, 21.5574f);
	func_31(-1669.2704f, -1132.0343f, 21.8556f);
	func_31(-1669.0382f, -1134.3553f, 22.1878f);
	func_31(-1669.1746f, -1136.6805f, 22.5487f);
	func_31(-1669.676f, -1138.9525f, 22.9324f);
	func_31(-1670.5276f, -1141.1157f, 23.3331f);
	func_31(-1671.7087f, -1143.1173f, 23.7443f);
	func_31(-1673.1904f, -1144.9082f, 24.1589f);
	func_31(-1674.9377f, -1146.4446f, 24.5706f);
	func_31(-1676.9064f, -1147.6877f, 24.9723f);
	func_31(-1679.0508f, -1148.6053f, 25.3575f);
	func_31(-1681.3174f, -1149.174f, 25.7202f);
	func_31(-1683.6499f, -1149.3767f, 26.0545f);
	func_31(-1685.9912f, -1149.2075f, 26.3554f);
	func_31(-1688.2795f, -1148.6644f, 26.6179f);
	func_31(-1690.4568f, -1147.7628f, 26.839f);
	func_31(-1692.4642f, -1146.5227f, 27.0161f);
	func_31(-1694.2517f, -1144.9762f, 27.1481f);
	func_31(-1695.768f, -1143.1614f, 27.2346f);
	func_31(-1696.9746f, -1141.1267f, 27.2771f);
	func_31(-1697.8401f, -1138.9249f, 27.2778f);
	func_31(-1698.3427f, -1136.6143f, 27.2402f);
	func_31(-1698.4657f, -1134.2546f, 27.1688f);
	func_31(-1698.2115f, -1131.9075f, 27.0692f);
	func_31(-1697.585f, -1129.633f, 26.9473f);
	func_31(-1696.6025f, -1127.4823f, 26.7859f);
	func_31(-1695.2893f, -1125.5192f, 26.5684f);
	func_31(-1693.6843f, -1123.7948f, 26.2981f);
	func_31(-1691.8325f, -1122.3545f, 25.9974f);
	func_31(-1689.7773f, -1121.2262f, 25.6751f);
	func_31(-1687.713f, -1120.2112f, 25.2977f);
	func_31(-1685.634f, -1119.2595f, 24.7922f);
	func_31(-1683.5103f, -1118.3479f, 24.1724f);
	func_31(-1681.3713f, -1117.4534f, 23.4526f);
	func_31(-1679.2483f, -1116.5497f, 22.6476f);
	func_31(-1677.1699f, -1115.6144f, 21.7713f);
	func_31(-1675.1399f, -1114.667f, 20.8298f);
	func_31(-1673.2024f, -1113.7692f, 19.8983f);
	func_31(-1671.3074f, -1112.867f, 19.0396f);
	func_31(-1669.3944f, -1111.9049f, 18.3093f);
	func_31(-1667.4021f, -1110.8213f, 17.7619f);
	func_31(-1665.3357f, -1109.6078f, 17.4552f);
	func_31(-1663.5355f, -1108.4518f, 17.3517f);
	func_31(-1661.6692f, -1107.1594f, 17.3564f);
	func_31(-1659.7676f, -1105.7582f, 17.4696f);
	func_31(-1657.8624f, -1104.2756f, 17.6914f);
	func_31(-1655.9844f, -1102.7385f, 18.0218f);
	func_31(-1654.165f, -1101.1741f, 18.4604f);
	func_31(-1652.4335f, -1099.6101f, 19.0069f);
	func_31(-1650.78f, -1098.0374f, 19.6917f);
	func_31(-1649.1323f, -1096.398f, 20.453f);
	func_31(-1647.4886f, -1094.7059f, 21.0879f);
	func_31(-1645.8455f, -1092.9713f, 21.3809f);
	func_31(-1644.2002f, -1091.1968f, 21.0723f);
	func_31(-1642.6226f, -1089.4341f, 20.123f);
	func_31(-1641.1335f, -1087.7332f, 18.9288f);
	func_31(-1639.7681f, -1086.1489f, 17.8822f);
	func_31(-1638.441f, -1084.6035f, 17.2995f);
	func_31(-1636.9349f, -1082.8141f, 17.1529f);
	func_31(-1635.3969f, -1080.9722f, 17.1524f);
	func_31(-1633.897f, -1079.2336f, 17.1531f);
	func_31(-1632.3602f, -1077.3932f, 17.1529f);
	func_31(-1631.0459f, -1075.8159f, 17.1529f);
	func_31(-1629.5092f, -1073.9755f, 17.1526f);
	func_31(-1628.1962f, -1072.3995f, 17.1529f);
	func_31(-1626.8193f, -1070.7322f, 17.4133f);
	func_31(-1625.4014f, -1069.0214f, 17.9281f);
	func_31(-1623.9257f, -1067.2517f, 18.5038f);
	func_31(-1622.4509f, -1065.4816f, 19.0797f);
	func_31(-1620.9749f, -1063.7124f, 19.6554f);
	func_31(-1619.4995f, -1061.9426f, 20.2312f);
	func_31(-1618.0242f, -1060.1727f, 20.8071f);
	func_31(-1616.4891f, -1058.3323f, 21.2475f);
	func_31(-1614.9408f, -1056.539f, 21.564f);
	func_31(-1613.1627f, -1054.9889f, 21.7555f);
	func_31(-1611.1027f, -1053.8331f, 21.9471f);
	func_31(-1608.837f, -1053.1915f, 22.1368f);
	func_31(-1606.4882f, -1053.0118f, 22.3259f);
	func_31(-1604.1523f, -1053.3499f, 22.5146f);
	func_31(-1601.9521f, -1054.1923f, 22.7019f);
	func_31(-1599.9624f, -1055.4534f, 22.8885f);
	func_31(-1598.318f, -1057.1431f, 23.0742f);
	func_31(-1597.0596f, -1059.136f, 23.2587f);
	func_31(-1596.2314f, -1061.3428f, 23.4426f);
	func_31(-1595.9446f, -1063.6799f, 23.6253f);
	func_31(-1596.1294f, -1066.029f, 23.8069f);
	func_31(-1596.815f, -1068.28f, 23.9876f);
	func_31(-1597.986f, -1070.3235f, 24.167f);
	func_31(-1599.5387f, -1072.0948f, 24.3456f);
	func_31(-1601.453f, -1073.4615f, 24.5229f);
	func_31(-1603.615f, -1074.3973f, 24.6991f);
	func_31(-1605.9164f, -1074.8805f, 24.8739f);
	func_31(-1608.2719f, -1074.8021f, 25.0476f);
	func_31(-1610.5616f, -1074.2589f, 25.2202f);
	func_31(-1612.68f, -1073.2433f, 25.3914f);
	func_31(-1614.5176f, -1071.7698f, 25.5611f);
	func_31(-1616.0275f, -1069.9612f, 25.7295f);
	func_31(-1617.0846f, -1067.8661f, 25.8962f);
	func_31(-1617.6753f, -1065.5863f, 26.0615f);
	func_31(-1617.8007f, -1063.2428f, 26.2248f);
	func_31(-1617.3602f, -1060.9271f, 26.3871f);
	func_31(-1616.4683f, -1058.7489f, 26.5474f);
	func_31(-1615.1421f, -1056.8156f, 26.7056f);
	func_31(-1613.4026f, -1055.2264f, 26.8622f);
	func_31(-1611.3824f, -1054.0143f, 27.0169f);
	func_31(-1609.1584f, -1053.2924f, 27.1687f);
	func_31(-1606.8099f, -1053.0631f, 27.3184f);
	func_31(-1604.4631f, -1053.3021f, 27.4662f);
	func_31(-1602.2571f, -1054.0916f, 27.6101f);
	func_31(-1600.2434f, -1055.3115f, 27.7515f);
	func_31(-1598.5408f, -1056.9186f, 27.8892f);
	func_31(-1597.2394f, -1058.8844f, 28.0238f);
	func_31(-1596.3568f, -1061.0701f, 28.154f);
	func_31(-1595.9899f, -1063.3827f, 28.2781f);
	func_31(-1596.1273f, -1065.7351f, 28.3966f);
	func_31(-1596.7319f, -1068.018f, 28.5072f);
	func_31(-1597.8579f, -1070.0784f, 28.6005f);
	func_31(-1599.3303f, -1071.9681f, 28.6213f);
	func_31(-1600.886f, -1073.8184f, 28.4356f);
	func_31(-1602.4453f, -1075.6714f, 27.9888f);
	func_31(-1604.0881f, -1077.6168f, 27.4895f);
	func_31(-1605.4225f, -1079.2003f, 27.0316f);
	func_31(-1606.9303f, -1080.9944f, 26.878f);
	func_31(-1608.3499f, -1082.681f, 26.9447f);
	func_31(-1609.353f, -1083.8743f, 27.4738f);
	func_31(-1611.127f, -1085.9802f, 28.7125f);
	func_31(-1612.7308f, -1087.885f, 29.8581f);
	func_31(-1614.0735f, -1089.4801f, 30.4043f);
	func_31(-1614.8247f, -1090.3718f, 30.4459f);
	func_31(-1615.6266f, -1091.3273f, 30.3721f);
	func_31(-1616.6858f, -1092.5889f, 30.0253f);
	func_31(-1617.4144f, -1093.4617f, 29.5944f);
	func_31(-1618.748f, -1095.0547f, 28.8046f);
	func_31(-1620.6028f, -1097.2742f, 27.7044f);
	func_31(-1622.8733f, -1099.9885f, 26.3576f);
	func_31(-1624.0875f, -1101.4403f, 25.6371f);
	func_31(-1625.3727f, -1102.9783f, 24.8741f);
	func_31(-1626.7218f, -1104.5914f, 24.0733f);
	func_31(-1628.1248f, -1106.2698f, 23.2405f);
	func_31(-1629.5734f, -1108.0032f, 22.3803f);
	func_31(-1631.0604f, -1109.7802f, 21.4979f);
	func_31(-1632.5737f, -1111.5923f, 20.5988f);
	func_31(-1634.1086f, -1113.4274f, 19.6878f);
	func_31(-1635.6544f, -1115.2764f, 18.7701f);
	func_31(-1636.9026f, -1116.767f, 18.0427f);
	func_31(-1638.1215f, -1118.2239f, 17.4692f);
	func_31(-1639.5778f, -1119.9695f, 17.089f);
	func_31(-1641.2195f, -1121.9272f, 16.8752f);
}

void func_31(float fParam0, float fParam1, float fParam2)//Position - 0x2AAA
{
	Local_159[(233 - iLocal_161) /*3*/] = fParam0;
	Local_159[(233 - iLocal_161) /*3*/].f_1 = fParam1;
	Local_159[(233 - iLocal_161) /*3*/].f_2 = fParam2;
	iLocal_161++;
}

void func_33(int iParam0, float fParam1, int iParam2)//Position - 0x2AF0
{
	if (iLocal_193 >= Local_192.f_0)
	{
		Local_192[(Local_192.f_0 - 1) /*3*/] = 232;
		Local_192[(Local_192.f_0 - 1) /*3*/].f_1 = 0.01f;
		Local_192[(Local_192.f_0 - 1) /*3*/].f_2 = 0;
		return;
	}
	Local_192[iLocal_193 /*3*/] = (iParam0 + iLocal_194);
	if (Local_192[iLocal_193 /*3*/] >= 234)
	{
		Local_192[iLocal_193 /*3*/] = 233;
	}
	Local_192[iLocal_193 /*3*/].f_1 = fParam1;
	Local_192[iLocal_193 /*3*/].f_2 = iParam2;
	iLocal_193++;
}

void func_57(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x3BF3
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
					if (func_177(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_61(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_177(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_61(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_177(PLAYER::PLAYER_PED_ID(), 8, 1) || func_177(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_61(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_177(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_61(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

int func_61(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x3E21
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
										func_61(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_61(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, func_70(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_69(iParam0, iVar10, &iVar4, 1))
							{
								func_61(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_61(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_61(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_61(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_61(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_61(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_61(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_61(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_61(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_61(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_69(iParam0, iVar10, &iVar4, 0))
		{
			func_61(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_62(iParam0, iVar10, &iVar4))
		{
			func_61(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_62(int iParam0, int iParam1, int iParam2)//Position - 0x4633
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_177(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_69(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4F27
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_177(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0, int iParam1, int iParam2)//Position - 0x4FBD
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
				if (func_177(iParam0, iParam1, iVar0))
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
				if (func_177(iParam0, iParam1, iVar1))
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

int func_177(int iParam0, int iParam1, int iParam2)//Position - 0x21C56
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
				if (!func_177(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_177(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_177(iParam0, 14, iVar4))
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
			if (!func_177(iParam0, 14, uVar8[iVar7]))
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

void func_187(bool bParam0)//Position - 0x22179
{
	AUDIO::STOP_STREAM();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_LEVIATHAN"))
	{
		AUDIO::STOP_AUDIO_SCENE("FAIRGROUND_RIDES_LEVIATHAN");
	}
	if (bParam0)
	{
		HUD::CLEAR_HELP(true);
		MISC::CLEAR_BIT(&Global_78567, 7);
		__LIB_10__.func_696(500, 1);
	}
	__LIB_24__.func_943(303, 0, 0);
	__LIB_9__.func_52(&Local_169, 0, 1);
	__LIB_2__.func_29(&iLocal_182);
	__LIB_2__.func_29(&iLocal_183);
	__LIB_0__.func_524(PLAYER::PLAYER_PED_ID());
	if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
	}
	func_223();
	__LIB_10__.func_698(PLAYER::PLAYER_PED_ID(), -1631.3481f, -1112.6509f, 12.0206f);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 316.464f);
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
	__LIB_26__.func_354(1, 1, 1, 1);
	if (bParam0)
	{
		HUD::CLEAR_HELP(true);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
		SYSTEM::WAIT(125);
	}
	__LIB_8__.func_770(0);
	BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE("fairgroundHub");
	if (bParam0)
	{
		__LIB_0__.func_84(500, 0);
		__LIB_40__.func_982(__LIB_18__.func_173(), 1, 15);
	}
	__LIB_20__.func_328(&uLocal_41);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_223()//Position - 0x2387D
{
	int iVar0;
	if (!__LIB_0__.func_524(iLocal_180[0]))
	{
		iLocal_180[0] = OBJECT::CREATE_OBJECT(joaat("prop_roller_car_01"), -1643.5242f, -1124.6805f, 17.4326f, true, true, false);
	}
	if (!__LIB_0__.func_524(iLocal_180[1]))
	{
		iLocal_180[1] = OBJECT::CREATE_OBJECT(joaat("prop_roller_car_02"), -1645.1455f, -1126.6127f, 17.4326f, true, true, false);
	}
	if (!__LIB_0__.func_524(iLocal_180[2]))
	{
		iLocal_180[2] = OBJECT::CREATE_OBJECT(joaat("prop_roller_car_02"), -1646.7676f, -1128.5453f, 17.4326f, true, true, false);
	}
	if (!__LIB_0__.func_524(iLocal_180[3]))
	{
		iLocal_180[3] = OBJECT::CREATE_OBJECT(joaat("prop_roller_car_02"), -1648.3896f, -1130.4784f, 17.4326f, true, true, false);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_180)
	{
		if (__LIB_0__.func_524(iLocal_180[iVar0]))
		{
			ENTITY::SET_ENTITY_HEADING(iLocal_180[iVar0], 140f);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_180[iVar0], true, false);
			ENTITY::SET_ENTITY_COLLISION(iLocal_180[iVar0], true, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_180[iVar0], true);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_180[iVar0], true);
			__LIB_0__.func_122(&(iLocal_180[iVar0]), 0);
		}
		iVar0++;
	}
}

