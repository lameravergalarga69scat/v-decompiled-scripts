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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_34 = 0f;
	struct<3> Local_35 = { 0, 0, 0 } ;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	struct<9> Local_38 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_39 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_40 = { 0, 0, 0 } ;
	struct<3> Local_41 = { 0, 0, 0 } ;
	struct<3> Local_42 = { 0, 0, 0 } ;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	float fLocal_46 = 0f;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	char* sLocal_57 = NULL;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
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
	bool bLocal_88 = 0;
	float fLocal_89 = 0f;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	float fLocal_105 = 0f;
	int iLocal_106[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_107 = 0;
	struct<68> Local_108 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
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
	float fLocal_130 = 0f;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	struct<3> Local_137 = { 0, 0, 0 } ;
	int iLocal_138[2] = { 0, 0 };
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	bool bLocal_146 = 0;
	bool bLocal_147 = 0;
	bool bLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	bool bLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	bool bLocal_154 = 0;
	bool bLocal_155 = 0;
	bool bLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	bool bLocal_161 = 0;
	var uLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
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
	struct<3> Local_207 = { 0, 0, 0 } ;
	struct<3> Local_208 = { 0, 0, 0 } ;
	struct<3> Local_209 = { 0, 0, 0 } ;
	struct<3> Local_210 = { 0, 0, 0 } ;
	struct<3> Local_211 = { 0, 0, 0 } ;
	struct<3> Local_212 = { 0, 0, 0 } ;
	float fLocal_213 = 0f;
	float fLocal_214 = 0f;
	float fLocal_215 = 0f;
	float fLocal_216 = 0f;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	char* sLocal_219 = NULL;
	char* sLocal_220 = NULL;
	int iLocal_221 = 0;
	char* sLocal_222 = NULL;
	char* sLocal_223 = NULL;
	char* sLocal_224[3] = { NULL, NULL, NULL };
	char* sLocal_225[3] = { NULL, NULL, NULL };
	char* sLocal_226[3] = { NULL, NULL, NULL };
	char* sLocal_227[3] = { NULL, NULL, NULL };
	struct<5> Local_228 = { 0, 0, 0, 0, 0 } ;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<460> Var0;
	int iVar1;
	struct<4> Var2;
	struct<3> Var3;
	struct<25> Var4;
	struct<682> Var5;
	struct<532> Var6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	struct<3> Var17;
	struct<3> Var18;
	struct<3> Var19;
	struct<3> Var20;
	struct<3> Var21;
	char* sVar22;
	int* iVar23;
	int* iVar24;
	int* iVar25;
	var* uVar26[20];
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	float fVar34;
	int iVar35;
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
	iLocal_28 = joaat("prop_dart_1");
	iLocal_29 = joaat("prop_dart_2");
	iLocal_32 = joaat("prop_dart_bd_cab_01");
	fLocal_34 = 0.063f;
	Local_35 = { -0.0035f, 0f, -0.001f };
	iLocal_37 = joaat("prop_target_bull");
	Local_42 = { 987.8541f, -98.4173f, 73.8599f };
	fLocal_47 = 0.1f;
	iLocal_58 = 3;
	fLocal_61 = 80f;
	fLocal_62 = 140f;
	fLocal_63 = 180f;
	iLocal_69 = 1;
	iLocal_70 = 65;
	iLocal_71 = 49;
	iLocal_72 = 64;
	iLocal_95 = 65;
	iLocal_97 = 660;
	fLocal_102 = 0.27f;
	fLocal_103 = 0.1f;
	fLocal_104 = -120f;
	fLocal_105 = 127f;
	fLocal_130 = ((0.05f + 0.275f) - 0.01f);
	Local_137 = { 500f, 500f, 500f };
	bLocal_148 = true;
	Local_209 = { -573.1373f, 294.0269f, 78.1765f };
	Local_210 = { -574.1169f, 292.7964f, 78.1766f };
	Local_211 = { 1995.2952f, 3050.0845f, 46.91535f };
	Local_212 = { 1995.488f, 3047.3833f, 46.91535f };
	fLocal_213 = 172.6813f;
	fLocal_214 = 274.5094f;
	fLocal_215 = 142.6717f;
	fLocal_216 = 44.8785f;
	Var0.f_1 = 2;
	Var0.f_5 = 2;
	Var0.f_5.f_1 = 3;
	Var0.f_5.f_1.f_79 = 3;
	Var0.f_164 = 3;
	Var0.f_257 = 16;
	Var0.f_422 = 2;
	Var0.f_425 = 2;
	Var0.f_429 = 2;
	Var0.f_432 = 2;
	Var0.f_437 = 2;
	Var0.f_440 = 2;
	Var0.f_443 = 2;
	Var0.f_446 = 2;
	Var0.f_449 = 2;
	Var4.f_1 = 2;
	Var4.f_1.f_1 = 7;
	Var4.f_1.f_1.f_8 = 7;
	Var5.f_3 = 8;
	Var5.f_12 = 8;
	Var5.f_21 = 4;
	Var5.f_26.f_3 = 8;
	Var5.f_26.f_12 = 8;
	Var5.f_26.f_21 = 4;
	Var5.f_72 = 3;
	Var5.f_72.f_44.f_3.f_1 = 4;
	Var5.f_72.f_113 = 2;
	Var5.f_72.f_113.f_1.f_1 = 4;
	Var5.f_72.f_113.f_1.f_66.f_1 = 4;
	Var5.f_72.f_246.f_6 = 12;
	Var5.f_72.f_246.f_187 = 3;
	Var5.f_509.f_2 = 8;
	Var5.f_509.f_2.f_1.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_681 = 2;
	Var6.f_32 = 3;
	Var6.f_36 = 1;
	Var6.f_53 = 2;
	Var6.f_57 = 13;
	Var6.f_71 = 13;
	Var6.f_280 = 13;
	Var6.f_489 = 13;
	Var6.f_503 = 13;
	Var6.f_517 = 13;
	Var6.f_531 = 13;
	iVar13 = 0;
	sLocal_222 = "facials@gen_female@variations@happy";
	switch (__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()))
	{
		case 0:
			sLocal_223 = "facials@p_m_zero@variations@happy";
			break;
		case 1:
			sLocal_223 = "facials@p_m_one@variations@happy";
			break;
		case 2:
			sLocal_223 = "facials@p_m_two@variations@happy";
			break;
	}
	sLocal_224[0] = "mood_happy_1";
	sLocal_224[1] = "mood_happy_2";
	sLocal_224[2] = "mood_happy_3";
	sLocal_225[0] = "darts_outro_01_guy1";
	sLocal_225[1] = "darts_outro_02_guy2";
	sLocal_225[2] = "darts_outro_03_guy2";
	sLocal_226[0] = "darts_outro_01_guy2";
	sLocal_226[1] = "darts_outro_02_guy1";
	sLocal_226[2] = "darts_outro_03_guy1";
	sLocal_227[0] = "darts_outro_01_cam";
	sLocal_227[1] = "darts_outro_02_cam";
	sLocal_227[2] = "darts_outro_03_cam";
	iLocal_138[0] = PLAYER::PLAYER_PED_ID();
	bLocal_151 = true;
	Var17 = { 1992.2932f, 3050.5828f, 47.98973f };
	Var18 = { -572.04065f, 294.19577f, 79.9374f };
	func_505();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_175 = 1;
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
		{
			case 0:
				iLocal_172 = joaat("A_F_M_Salton_01");
				break;
			case 1:
				iLocal_172 = joaat("A_F_O_Salton_01");
				break;
		}
		iLocal_170 = 10;
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(ScriptParam_228.f_4))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_175 == 2)
			{
				ScriptParam_228 = { Var18 };
				ScriptParam_228.f_3 = -0.09f;
			}
			else
			{
				ScriptParam_228 = { Var17 };
				ScriptParam_228.f_3 = 57.783146f;
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(ScriptParam_228, 5f, joaat("prop_dart_bd_cab_01"), false))
			{
				ScriptParam_228.f_4 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ScriptParam_228, 5f, joaat("prop_dart_bd_cab_01"), true, false, true);
				OBJECT::GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE(ScriptParam_228, 5f, joaat("prop_dart_bd_cab_01"), &ScriptParam_228, &Var19, 0);
				ScriptParam_228.f_3 = Var19.f_2;
			}
		}
	}
	else
	{
		Var19 = { ENTITY::GET_ENTITY_COORDS(ScriptParam_228.f_4, true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_11__.func_91(), false))
	{
		__LIB_20__.func_587(iLocal_170, 1);
		if (PED::IS_PED_IN_ANY_VEHICLE(__LIB_11__.func_91(), false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(__LIB_11__.func_91(), 0, 0);
		}
		iLocal_138[1] = __LIB_11__.func_91();
	}
	else
	{
		MISC::SET_MISSION_FLAG(true);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_493();
		func_475(&Var0, &Var5, &Var6);
	}
	HUD::DISPLAY_AREA_NAME(false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	__LIB_8__.func_770(1);
	iLocal_166 = __LIB_26__.func_472(__LIB_18__.func_168(iLocal_138[0]), 1);
	fVar15 = (SYSTEM::TO_FLOAT(iLocal_166) / 100f);
	fVar16 = (fVar15 * 1200f);
	iLocal_97 = SYSTEM::ROUND(fVar16);
	if (iLocal_97 < 660)
	{
		iLocal_97 = 660;
	}
	__LIB_9__.func_485(23, 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
		if (iLocal_158 && Var0.f_0 < 13)
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(Var4.f_0, Var4.f_18, Var4.f_21, Var4.f_24, Var4.f_24, 2);
		}
		if ((PED::IS_PED_INJURED(ScriptParam_228.f_5) && !ENTITY::DOES_ENTITY_EXIST(__LIB_11__.func_91())) || (ENTITY::DOES_ENTITY_EXIST(__LIB_11__.func_91()) && PED::IS_PED_INJURED(__LIB_11__.func_91())))
		{
			func_475(&Var0, &Var5, &Var6);
		}
		if (!PED::IS_PED_INJURED(iLocal_138[0]))
		{
			PED::SET_PED_RESET_FLAG(iLocal_138[0], 239, true);
			PED::SET_PED_RESET_FLAG(iLocal_138[0], 124, true);
			__LIB_0__.func_186();
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
			iVar14 = 0;
			while (iVar14 < PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar26, -1))
			{
				if (uVar26[iVar14] != iLocal_138[1])
				{
					if (!PED::IS_PED_INJURED(uVar26[iVar14]))
					{
						PED::SET_PED_RESET_FLAG(uVar26[iVar14], 240, true);
					}
				}
				iVar14++;
			}
			switch (Var0.f_0)
			{
				case 0:
					HUD::CLEAR_HELP(true);
					func_467(&(Var0.f_243), &ScriptParam_228);
					func_466(Var0.f_243.f_1, Var0.f_243.f_4);
					if (ENTITY::DOES_ENTITY_EXIST(Var0.f_243))
					{
						Local_207 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Var0.f_243, 0.7792f, -1.138f, 0.1814f) };
						Local_208 = { -7.9947f, 0f, (Var0.f_243.f_4 + 36.191757f) };
						iLocal_84 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_207, Local_208, 65f, false, 2);
						CAM::SET_CAM_FOV(iLocal_84, 30f);
					}
					__LIB_11__.func_629();
					SYSTEM::SETTIMERA(0);
					Var0.f_0 = 1;
					break;
				case 1:
					if (SYSTEM::TIMERA() > 500 && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					{
						MISC::CLEAR_AREA(ScriptParam_228, 0.5f, true, false, false, false);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						{
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_173);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_173);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_173);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_173);
						}
						Local_42 = { Local_42 };
						Var0.f_0 = 2;
					}
					break;
				case 2:
					iVar28 = 0;
					while (iVar28 < 2)
					{
						iVar29 = 0;
						while (iVar29 < 3)
						{
							func_464(&(Var0.f_5[iVar28 /*79*/][iVar29 /*26*/]), iVar28);
							iVar29++;
						}
						iVar28++;
					}
					iVar30 = 0;
					while (iVar30 < 3)
					{
						func_464(&(Var0.f_164[iVar30 /*26*/]), 0);
						iVar30++;
					}
					iVar1 = 2;
					func_463(0);
					__LIB_1__.func_886(&Var4, iLocal_175, Var0.f_243.f_1, Var0.f_243.f_4);
					if (ENTITY::DOES_ENTITY_EXIST(Var0.f_243))
					{
						Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Var0.f_243, Var4.f_18) };
					}
					func_458(&Var4, &Var5);
					AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
					Var0.f_0 = 3;
					break;
				case 3:
					if (func_455(&Var4, &Var5))
					{
						func_452(&(Var0.f_243), &Var2, &Var3, 0);
						iLocal_217 = __LIB_18__.func_168(iLocal_138[0]);
						switch (iLocal_217)
						{
							case 0:
								sLocal_219 = func_451("MICHAEL");
								if (!BitTest(Global_113347, 0))
								{
									sVar22 = "darts_ig_intro_player_0_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_0_face";
								}
								break;
							case 1:
								sLocal_219 = func_451("FRANKLIN");
								bLocal_155 = true;
								if (!BitTest(Global_113347, 0))
								{
									sVar22 = "darts_ig_intro_player_1_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_1_face";
								}
								break;
							case 2:
								sLocal_219 = func_451("TREVOR");
								if (!BitTest(Global_113347, 0))
								{
									sVar22 = "darts_ig_intro_player_2_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_2_face";
								}
								break;
						}
						if (!ENTITY::IS_ENTITY_DEAD(__LIB_11__.func_91(), false))
						{
							iLocal_218 = __LIB_18__.func_168(__LIB_11__.func_91());
							if (iLocal_218 == 145)
							{
								iLocal_218 = __LIB_26__.func_456(__LIB_11__.func_91());
							}
							switch (iLocal_218)
							{
								case 0:
									sLocal_220 = func_451("MICHAEL");
									break;
								case 1:
									sLocal_220 = func_451("FRANKLIN");
									break;
								case 2:
									sLocal_220 = func_451("TREVOR");
									break;
								case 19:
									sLocal_220 = func_451("LAMAR");
									PED::SET_PED_COMPONENT_VARIATION(__LIB_11__.func_91(), 5, 2, 0, 0);
									break;
								case 14:
									sLocal_220 = func_451("JIMMY");
									break;
								default:
									sLocal_220 = "NEW_GUY";
									break;
							}
						}
						else
						{
							iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, 200);
							if (iLocal_175 == 2)
							{
								if (iVar12 < 51)
								{
									sLocal_220 = func_451("RAYMOND");
									iLocal_221 = joaat("RAYMOND");
								}
								else if (iVar12 < 101)
								{
									sLocal_220 = func_451("JOHAN");
									iLocal_221 = joaat("JOHAN");
								}
								else if (iVar12 < 151)
								{
									sLocal_220 = func_451("STAN");
									iLocal_221 = joaat("STAN");
								}
								else
								{
									sLocal_220 = func_451("VINCE");
									iLocal_221 = joaat("VINCE");
								}
							}
							else if (iVar12 < 51)
							{
								sLocal_220 = func_451("KRISTY");
								iLocal_221 = joaat("KRISTY");
							}
							else if (iVar12 < 101)
							{
								sLocal_220 = func_451("MARLENE");
								iLocal_221 = joaat("MARLENE");
							}
							else if (iVar12 < 151)
							{
								sLocal_220 = func_451("LORIE");
								iLocal_221 = joaat("LORIE");
							}
							else
							{
								sLocal_220 = func_451("SHELLEY");
								iLocal_221 = joaat("SHELLEY");
							}
						}
						iLocal_36 = OBJECT::CREATE_OBJECT(iLocal_37, Var3, true, true, false);
						Var0.f_446[0] = 0;
						Var0.f_446[1] = 0;
						Var0.f_0 = 4;
					}
					break;
				case 4:
					if (!CAM::IS_INTERPOLATING_TO_SCRIPT_CAMS())
					{
						iVar27 = OBJECT::CREATE_OBJECT(joaat("prop_dart_1"), Var3, true, true, false);
						func_445(Var0.f_243.f_4, Var2, &uVar26, &ScriptParam_228);
						func_444(&Var4, sLocal_219, sLocal_220);
						TASK::CLEAR_PED_TASKS(iLocal_138[1]);
						iLocal_174 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 65f, false, 2);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), false, 0, false);
						}
						__LIB_0__.func_203(&(Var0.f_257), 0, PLAYER::PLAYER_PED_ID(), sLocal_219, 0, 1);
						if (ENTITY::IS_ENTITY_DEAD(__LIB_11__.func_91(), false))
						{
							if (iLocal_175 == 2)
							{
								__LIB_0__.func_203(&(Var0.f_257), 3, iLocal_138[1], "DartsBillLost1", 0, 1);
							}
							else
							{
								__LIB_0__.func_203(&(Var0.f_257), 3, iLocal_138[1], "DartsMelHick1", 0, 1);
							}
							iVar13 = -1;
						}
						else
						{
							__LIB_0__.func_203(&(Var0.f_257), 3, __LIB_11__.func_91(), sLocal_220, 0, 1);
							__LIB_6__.func_892(&iVar25);
							iVar13 = 6;
						}
						if (!BitTest(Global_113347, 0))
						{
							iVar13 = -1;
						}
						else
						{
							iVar13 = 3;
						}
						func_440(&Var4, 0);
						Var0.f_0 = 5;
					}
					break;
				case 5:
					if ((((!PED::IS_PED_INJURED(iLocal_138[1]) && PED::IS_PED_ON_FOOT(iLocal_138[0])) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_138[0], true)) && PED::IS_PED_ON_FOOT(iLocal_138[1])) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_138[1], true))
					{
						bLocal_146 = func_438(&uLocal_162);
						if ((__LIB_0__.func_404() && MISC::GET_GAME_TIMER() >= iLocal_164 + 1000) && iVar13 != 9)
						{
							if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
							{
								CAM::DO_SCREEN_FADE_OUT(500);
							}
						}
						if (CAM::IS_SCREEN_FADED_OUT() && iVar13 != 9)
						{
							__LIB_6__.func_849(0);
							__LIB_0__.func_296();
							iVar13 = 9;
						}
						switch (iVar13)
						{
							case -1:
								if (!PED::IS_PED_INJURED(iLocal_138[1]))
								{
									iLocal_168 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(ScriptParam_228.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (ENTITY::GET_ENTITY_HEADING(ScriptParam_228.f_4) - 3.783146f), 2);
									iLocal_174 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_174, iLocal_168, "darts_ig_intro_cam", "mini@dartsintro");
									CAM::SET_CAM_ACTIVE(iLocal_174, true);
									CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
									TASK::TASK_CLEAR_LOOK_AT(iLocal_138[0]);
									TASK::TASK_CLEAR_LOOK_AT(iLocal_138[1]);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_138[0]);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_138[1]);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_138[1], iLocal_168, "mini@dartsintro", "darts_ig_intro_guy1", 1000f, -1000f, 0, 0, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_138[0], iLocal_168, "mini@dartsintro", "darts_ig_intro_guy2", 1000f, -1000f, 0, 0, 1000f, 0);
									TASK::TASK_PLAY_ANIM(iLocal_138[1], "mini@dartsintro", "darts_ig_intro_guy1_face", 8f, -8f, -1, 32, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(iLocal_138[0], "mini@dartsintro", sVar22, 8f, -8f, -1, 32, 0f, false, false, false);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iVar27, iLocal_168, "darts_ig_intro_dart", "mini@dartsintro", 1000f, 8f, 0, 1000f);
									__LIB_26__.func_455(&iVar25);
									iVar13++;
								}
								break;
							case 0:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_168))
								{
									if (!bVar9)
									{
										if (__LIB_7__.func_42(&iVar25) > 1.5f)
										{
											__LIB_6__.func_834(iLocal_138[0], "DARTS_REQUEST_GAME", 6);
											bVar9 = true;
											__LIB_0__.func_735(&iVar25);
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_138[0]))
									{
										if (!bVar10)
										{
											if (!__LIB_0__.func_736(&iVar25))
											{
												__LIB_6__.func_892(&iVar25);
											}
											else if (__LIB_7__.func_42(&iVar25) > 0.5f)
											{
												func_425(iLocal_138[1]);
												__LIB_0__.func_735(&iVar25);
												bVar10 = true;
											}
										}
									}
									switch (iLocal_31)
									{
										case 0:
											__LIB_26__.func_455(&iVar25);
											__LIB_0__.func_151("DARTS_HOW_TO_2", -1);
											iLocal_31++;
											break;
										case 1:
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_168) > 0.25f)
											{
												__LIB_26__.func_455(&iVar25);
												__LIB_0__.func_151("DARTS_HOW_TO_3", -1);
												iLocal_31++;
											}
											break;
										case 2:
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_168) > 0.55f)
											{
												__LIB_0__.func_151("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
										case 3:
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_168) > 0.85f)
											{
												__LIB_0__.func_151("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
									}
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_168) > 0.95f)
									{
										iLocal_158 = 1;
										iVar13++;
									}
									else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
									{
									}
								}
								break;
							case 1:
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_168) > 0.99f)
								{
									if (!PED::IS_PED_INJURED(iLocal_138[1]))
									{
										func_421(Var0.f_243.f_1, Var0.f_243.f_4, __LIB_1__.func_874(2), __LIB_1__.func_873(0), 0, 1);
										iLocal_31 = 0;
										HUD::CLEAR_HELP(true);
										CAM::DESTROY_CAM(iLocal_174, false);
										TASK::CLEAR_PED_TASKS(iLocal_138[0]);
										TASK::CLEAR_PED_TASKS(iLocal_138[1]);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iVar27, -1000f, false);
										OBJECT::DELETE_OBJECT(&iVar27);
										AUDIO::STOP_AUDIO_SCENE(func_420(0));
										__LIB_0__.func_735(&iVar25);
										Var0.f_0 = 6;
										iVar13 = 0;
									}
								}
								break;
							case 3:
								if (!PED::IS_PED_INJURED(iLocal_138[1]))
								{
									iLocal_168 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(ScriptParam_228.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (ENTITY::GET_ENTITY_HEADING(ScriptParam_228.f_4) - 3.783146f), 2);
									iLocal_174 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_174, iLocal_168, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
									CAM::SET_CAM_ACTIVE(iLocal_174, true);
									CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
									TASK::TASK_CLEAR_LOOK_AT(iLocal_138[0]);
									TASK::TASK_CLEAR_LOOK_AT(iLocal_138[1]);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_138[0]);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_138[1]);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_138[1], iLocal_168, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_138[0], iLocal_168, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1000f, 0);
									TASK::TASK_PLAY_ANIM(iLocal_138[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, -1, 32, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(iLocal_138[0], "mini@dartsintro_alt1", sVar22, 8f, -8f, -1, 32, 0f, false, false, false);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iVar27, iLocal_168, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 8f, 0, 1000f);
									__LIB_26__.func_455(&iVar25);
									iVar13++;
								}
								break;
							case 4:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_168))
								{
									if (!bVar9)
									{
										if (__LIB_7__.func_42(&iVar25) > 0.5f)
										{
											__LIB_6__.func_834(iLocal_138[0], "DARTS_REQUEST_GAME", 6);
											bVar9 = true;
											__LIB_0__.func_735(&iVar25);
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_138[0]))
									{
										if (!bVar10)
										{
											if (!__LIB_0__.func_736(&iVar25))
											{
												__LIB_6__.func_892(&iVar25);
											}
											else if (__LIB_7__.func_42(&iVar25) > 0.25f)
											{
												func_425(iLocal_138[1]);
												__LIB_0__.func_735(&iVar25);
												bVar10 = true;
											}
										}
									}
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_168) > 0.95f)
									{
										iLocal_158 = 1;
										iVar13++;
									}
									else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
									{
									}
								}
								break;
							case 5:
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_168) > 0.99f)
								{
									if (!PED::IS_PED_INJURED(iLocal_138[1]))
									{
										func_419();
										CAM::DESTROY_CAM(iLocal_174, false);
										TASK::CLEAR_PED_TASKS(iLocal_138[0]);
										TASK::CLEAR_PED_TASKS(iLocal_138[1]);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iVar27, -1000f, false);
										OBJECT::DELETE_OBJECT(&iVar27);
										AUDIO::STOP_AUDIO_SCENE(func_420(0));
										__LIB_0__.func_735(&iVar25);
										Var0.f_0 = 6;
										iVar13 = 0;
									}
								}
								break;
							case 9:
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									iLocal_158 = 1;
									iLocal_31 = 0;
									HUD::CLEAR_HELP(true);
									if (!PED::IS_PED_INJURED(iLocal_138[1]))
									{
										ENTITY::SET_ENTITY_COORDS(iLocal_138[0], Var2, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(iLocal_138[0], Var0.f_243.f_4);
										ENTITY::SET_ENTITY_COORDS(iLocal_138[1], Var2.f_3, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(iLocal_138[1], Var0.f_243.f_4);
										TASK::CLEAR_PED_TASKS(iLocal_138[0]);
										TASK::CLEAR_PED_TASKS(iLocal_138[1]);
									}
									CAM::DESTROY_CAM(iLocal_174, false);
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iVar27, -1000f, false);
									OBJECT::DELETE_OBJECT(&iVar27);
									if (!BitTest(Global_113347, 0))
									{
										func_421(Var0.f_243.f_1, Var0.f_243.f_4, __LIB_1__.func_874(2), __LIB_1__.func_873(0), 0, 1);
									}
									else
									{
										func_419();
									}
									AUDIO::STOP_AUDIO_SCENE(func_420(0));
									__LIB_0__.func_735(&iVar25);
									CAM::DO_SCREEN_FADE_IN(500);
									Var0.f_0 = 6;
									iVar13 = 0;
								}
								break;
							}
					}
					break;
				case 6:
					switch (iVar13)
					{
						case 0:
							iLocal_164 = MISC::GET_GAME_TIMER();
							if (!PED::IS_PED_INJURED(iLocal_138[1]))
							{
								ENTITY::SET_ENTITY_COORDS(iLocal_138[0], Var2, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iLocal_138[0], Var0.f_243.f_4);
								ENTITY::SET_ENTITY_COORDS(iLocal_138[1], Var2.f_3, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iLocal_138[1], Var0.f_243.f_4);
							}
							AUDIO::START_AUDIO_SCENE(func_420(1));
							iVar13 = 0;
							Var0.f_0 = 7;
							break;
						case 1:
							if ((MISC::GET_GAME_TIMER() - iLocal_164) > 1500)
							{
								func_417(&(Var5.f_57), "DARTS_TITLE", 0, 4000, 12, 2, 0, 0);
								iVar13++;
							}
							break;
						case 2:
							if (!__LIB_26__.func_454(&(Var5.f_57), 1, 0))
							{
								AUDIO::START_AUDIO_SCENE(func_420(1));
								iVar13 = 0;
								Var0.f_0 = 7;
							}
							break;
					}
					break;
				case 7:
					if (!BitTest(Global_113347, 0))
					{
						if (func_413(&iVar1, &(Var0.f_243), &(Var0.f_249), &(Var0.f_1), &(Var0.f_164), &iVar24))
						{
							MISC::SET_BIT(&Global_113347, 0);
							Var0.f_0 = 8;
						}
					}
					else
					{
						CAM::SET_CAM_ACTIVE(iLocal_75, true);
						Var0.f_0 = 8;
					}
					break;
				case 8:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					switch (iVar13)
					{
						case 0:
							if (!ENTITY::DOES_ENTITY_EXIST(__LIB_11__.func_91()))
							{
								if (!BitTest(Global_113347, 10))
								{
									MISC::SET_BIT(&Global_113347, 10);
								}
								else
								{
									MISC::CLEAR_BIT(&Global_113347, 10);
								}
								func_411(&Var5);
								iVar13++;
							}
							else
							{
								func_411(&Var5);
								iVar13++;
							}
							break;
						case 1:
							if (MISC::IS_PC_VERSION())
							{
								if (fLocal_89 != GRAPHICS::GET_ASPECT_RATIO(false))
								{
									fLocal_89 = GRAPHICS::GET_ASPECT_RATIO(false);
									CAM::SET_CAM_FOV(iLocal_75, __LIB_1__.func_879(fLocal_89));
									CAM::SET_CAM_FOV(iLocal_76, __LIB_1__.func_879(fLocal_89));
								}
							}
							if (func_350(&Var5, &(Var0.f_452), &(Var0.f_453)))
							{
								AUDIO::STOP_AUDIO_SCENE(func_420(1));
								if (Var0.f_452 > 0)
								{
									iVar13 = 0;
									if (Var0.f_452 > 1 || Var0.f_453 > 1)
									{
										func_349(&Var4, 0, 0, 0, 0);
										bVar8 = true;
									}
									__LIB_7__.func_49(1, -1);
									Var0.f_0 = 9;
								}
								else if (Var0.f_452 < 0)
								{
									Var0.f_0 = 15;
								}
							}
							break;
					}
					break;
				case 9:
					if (func_339(&Var0, &Var4, &Var5))
					{
						Var0.f_249.f_4 = 1;
						if (Global_113386.f_18970.f_5 >= 5 && Global_113386.f_18970.f_7 >= 0.8f)
						{
							Var0.f_249.f_4 = 2;
						}
						else if (Global_113386.f_18970.f_5 >= 3 && Global_113386.f_18970.f_7 >= 0.66f)
						{
							Var0.f_249.f_4 = 1;
						}
						else
						{
							Var0.f_249.f_4 = 0;
						}
						if (func_338(Global_113386.f_18970.f_5, &iLocal_167))
						{
							__LIB_1__.func_881(&(Var5.f_666), 24, 1);
						}
						fLocal_45 = func_336(Global_113386.f_18970.f_5);
						fLocal_46 = func_335(Global_113386.f_18970.f_5);
						fLocal_43 = fLocal_45;
						fLocal_44 = fLocal_46;
						iLocal_106[4]++;
						if (!PED::IS_PED_INJURED(iLocal_138[1]))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_138[1]);
							ENTITY::SET_ENTITY_COORDS(iLocal_138[1], Var2.f_3, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_138[1], Var0.f_243.f_4);
						}
						if (__LIB_0__.func_736(&iVar23))
						{
							__LIB_0__.func_735(&iVar23);
						}
						AUDIO::START_AUDIO_SCENE(func_420(2));
						func_334(iLocal_138[1]);
						Var0.f_0 = 10;
						Var0.f_1 = 2;
					}
					break;
				case 10:
					if (MISC::IS_PC_VERSION())
					{
						if (fLocal_89 != GRAPHICS::GET_ASPECT_RATIO(false))
						{
							fLocal_89 = GRAPHICS::GET_ASPECT_RATIO(false);
							CAM::SET_CAM_FOV(iLocal_75, __LIB_1__.func_879(fLocal_89));
							CAM::SET_CAM_FOV(iLocal_76, __LIB_1__.func_879(fLocal_89));
						}
					}
					if (!bLocal_156)
					{
						STREAMING::REQUEST_ANIM_DICT("mini@dartsoutro");
						bLocal_156 = true;
					}
					if (!iLocal_157)
					{
						if (bLocal_156)
						{
							if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@dartsoutro"))
							{
							}
							else
							{
								iLocal_157 = 1;
							}
						}
					}
					func_252(&Var0, &Var3, &Var4, &Var5, &iVar23);
					break;
				case 11:
					switch (iVar13)
					{
						case 0:
							if (__LIB_7__.func_42(&(Var0.f_254)) > 0.5f)
							{
								HUD::CLEAR_HELP(true);
								HUD::CLEAR_PRINTS();
								func_251(PLAYER::PLAYER_PED_ID());
								func_349(&Var4, Var0.f_449[0], Var0.f_449[1], Var0.f_446[0], Var0.f_446[1]);
								iVar31 = 0;
								while (iVar31 < 2)
								{
									iVar32 = 0;
									while (iVar32 < 3)
									{
										__LIB_1__.func_852(&(Var0.f_5[iVar31 /*79*/][iVar32 /*26*/]));
										iVar32++;
									}
									func_249(&Var4, iVar31);
									iVar31++;
								}
								if (Var0.f_459)
								{
									if (Var0.f_454)
									{
										__LIB_24__.func_969(&(Var5.f_62), "DARTS_WINNER", "DARTS_SETW", 4000, 5, 12);
									}
									else
									{
										__LIB_24__.func_969(&(Var5.f_62), "DARTS_LOSER", "DARTS_SETL", 4000, 5, 6);
									}
									Var0.f_459 = 0;
								}
								else if (Var0.f_454)
								{
									__LIB_24__.func_969(&(Var5.f_62), "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 12);
								}
								else
								{
									__LIB_24__.func_969(&(Var5.f_62), "DARTS_LOSER", "DARTS_LEGL", 4000, 5, 6);
								}
								fVar34 = GRAPHICS::GET_ASPECT_RATIO(true);
								if (fVar34 > 2f)
								{
									Var20 = { 1992.2941f, 3047.577f, 46.21517f };
									Var21 = { 0f, 0f, 138.74f };
								}
								else
								{
									Var20 = { 1992.3357f, 3047.9243f, 46.21517f };
									Var21 = { 0f, 0f, 136.74f };
								}
								iVar33 = func_246();
								iLocal_168 = PED::CREATE_SYNCHRONIZED_SCENE(Var20, Var21, 2);
								iLocal_174 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_174, iLocal_168, sLocal_227[iVar33], "mini@dartsoutro");
								CAM::SET_CAM_ACTIVE(iLocal_174, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								if (!PED::IS_PED_INJURED(iLocal_138[0]) && !PED::IS_PED_INJURED(iLocal_138[1]))
								{
									if (Var0.f_454)
									{
										if ((Var0.f_437[0] + Var0.f_437[1]) == 1)
										{
											iVar35 = 1;
										}
										else
										{
											iVar35 = 0;
										}
										AUDIO::PLAY_SOUND_FRONTEND(-1, "TENNIS_POINT_WON", "HUD_AWARDS", true);
										func_245(&iLocal_138, iVar35);
										TASK::TASK_SYNCHRONIZED_SCENE(iLocal_138[0], iLocal_168, "mini@dartsoutro", sLocal_225[iVar33], 1000f, -1.5f, 0, 0, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(iLocal_138[1], iLocal_168, "mini@dartsoutro", sLocal_226[iVar33], 1000f, -1.5f, 0, 0, 1000f, 0);
										TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_223, sLocal_224[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0f, false, false, false);
									}
									else
									{
										AUDIO::PLAY_SOUND_FRONTEND(-1, "OTHER_TEXT", "HUD_AWARDS", true);
										func_244(&iLocal_138);
										TASK::TASK_SYNCHRONIZED_SCENE(iLocal_138[1], iLocal_168, "mini@dartsoutro", sLocal_225[iVar33], 1000f, -1.5f, 0, 0, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(iLocal_138[0], iLocal_168, "mini@dartsoutro", sLocal_226[iVar33], 1000f, -1.5f, 0, 0, 1000f, 0);
										TASK::TASK_PLAY_ANIM(iLocal_138[1], sLocal_222, sLocal_224[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0f, false, false, false);
									}
								}
								iVar13++;
							}
							break;
						case 1:
							if (!__LIB_24__.func_984(&(Var5.f_62), 1))
							{
								iVar13++;
							}
							break;
						case 2:
							__LIB_0__.func_735(&(Var0.f_254));
							iLocal_152 = 0;
							AUDIO::STOP_AUDIO_SCENE(func_420(3));
							func_419();
							if (CAM::DOES_CAM_EXIST(iLocal_174))
							{
								CAM::DESTROY_CAM(iLocal_174, false);
							}
							iVar13 = 0;
							Var0.f_0 = 9;
							break;
					}
					break;
				case 12:
					if (__LIB_7__.func_42(&(Var0.f_254)) > 0.92f)
					{
						func_44(&Var0, &Var5, &Var4, &Var6, bVar8);
					}
					break;
				case 13:
					uVar11 = __LIB_35__.func_928(&Var6, 0, 1065353216, 0, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(__LIB_11__.func_91(), false))
					{
						TASK::CLEAR_PED_TASKS(iLocal_138[1]);
						Var0.f_0 = 15;
					}
					switch (iVar13)
					{
						case 0:
							TASK::CLEAR_PED_TASKS(iLocal_138[0]);
							if (!bLocal_154)
							{
								CAM::RENDER_SCRIPT_CAMS(false, bLocal_154, 3000, true, false, 0);
							}
							else
							{
								CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
							}
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							HUD::CLEAR_PRINTS();
							TASK::TASK_LOOK_AT_ENTITY(iLocal_138[0], iLocal_138[1], 5000, 2049, 3);
							__LIB_6__.func_892(&iVar25);
							iVar13++;
							break;
						case 1:
							if (__LIB_7__.func_78(&iVar25) > 0.1f)
							{
								if (!bVar7)
								{
								}
								__LIB_6__.func_892(&iVar25);
								iVar13++;
							}
							break;
						case 2:
							if (__LIB_7__.func_78(&iVar25) > 0.3f)
							{
								if (!PED::IS_PED_INJURED(iLocal_138[1]))
								{
									if (!bVar7)
									{
										func_4(iLocal_138[0], "GENERIC_THANKS", 1, 4);
									}
								}
								__LIB_6__.func_892(&iVar25);
								iVar13++;
							}
							break;
						case 3:
							if (uVar11 || bVar7)
							{
								Var0.f_0 = 15;
								iVar13++;
							}
							break;
					}
					break;
				case 14:
					__LIB_18__.func_296(&Var5);
					if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
					{
						func_1(iLocal_138[1]);
						iLocal_171 = 2;
						bVar7 = true;
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_420(2)))
						{
							AUDIO::STOP_AUDIO_SCENE(func_420(2));
						}
						Var0.f_0 = 13;
					}
					if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
					{
						if (Var0.f_1 == 2)
						{
							iLocal_55 = 0;
						}
						__LIB_1__.func_881(&(Var5.f_666), 8, 0);
						Var0.f_0 = 10;
					}
					break;
				case 15:
					func_475(&Var0, &Var5, &Var6);
					break;
				}
		}
	}
}

void func_1(int iParam0)//Position - 0x1DCE
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_4(iParam0, "GAME_QUIT_EARLY", 0, 6);
	}
}

void func_4(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x1E7F
{
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_11__.func_91(), false) || iParam2)
	{
		__LIB_6__.func_834(iParam0, sParam1, iParam3);
	}
	else if (!PED::IS_PED_INJURED(iParam0))
	{
		__LIB_5__.func_759(iParam0, sParam1, sLocal_57, iParam3);
	}
}

void func_44(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x479E
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
	}
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (!iLocal_159)
		{
			if (func_219(uParam1, 0, &iLocal_160))
			{
				__LIB_1__.func_881(&(uParam1->f_666), 9, 0);
				iLocal_159 = 1;
			}
		}
	}
	if (iLocal_141)
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			HUD::SET_MOUSE_CURSOR_THIS_FRAME();
		}
		bVar1 = true;
		if (uParam1->f_680)
		{
			if (!uParam1->f_646 && !PLAYER::IS_PLAYER_ONLINE())
			{
				uParam1->f_646 = __LIB_26__.func_185(&(uParam1->f_647), 0);
				bVar1 = false;
				if (uParam1->f_646)
				{
					uParam1->f_680 = 0;
					__LIB_1__.func_881(&(uParam1->f_666), 9, 0);
					uParam1->f_646 = 0;
				}
			}
			else
			{
				func_127(&(uParam1->f_72), &(uParam1->f_645));
			}
			if (bVar1)
			{
				__LIB_7__.func_44(&(uParam1->f_509), 1128792064, 1, 0, 1, 1065353216);
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
				{
					uParam1->f_680 = 0;
					__LIB_1__.func_881(&(uParam1->f_666), 9, 0);
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 215 /*INPUT_FRONTEND_ENDSCREEN_ACCEPT*/))
				{
					iVar0 = 2;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 216 /*INPUT_FRONTEND_ENDSCREEN_EXPAND*/))
				{
					iVar0 = 1;
				}
			}
			if (__LIB_11__.func_621(&(uParam1->f_72)))
			{
				if (!bLocal_161)
				{
					bLocal_161 = true;
					__LIB_0__.func_924(&(uParam1->f_509), 0, 0, 1, 1);
					__LIB_0__.func_713(&(uParam1->f_509), "DARTS_CONT" /* GXT: Continue */, 2, 215, 1, 1, 0);
					__LIB_0__.func_713(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
					__LIB_0__.func_713(&(uParam1->f_509), "IB_BACK" /* GXT: Back */, 2, 202, 1, 1, 0);
					__LIB_0__.func_713(&(uParam1->f_509), "SCLB_PROFILE" /* GXT: View Profile */, 2, 217, 1, 1, 0);
					__LIB_0__.func_923(&(uParam1->f_509), 1);
				}
			}
		}
		else
		{
			iVar0 = func_110(uParam1, 0, 0, iLocal_159);
			__LIB_35__.func_928(uParam3, 0, 1065353216, 0, 0, 0);
		}
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_168) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_168) >= 0.995f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_168))
		{
			bLocal_154 = true;
			if (CAM::DOES_CAM_EXIST(iLocal_174))
			{
				CAM::DESTROY_CAM(iLocal_174, false);
				if (!PED::IS_PED_INJURED(iLocal_138[0]) && !PED::IS_PED_INJURED(iLocal_138[1]))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_138[0]);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_138[1]);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_138[0], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_138[1], false, false);
				}
			}
			func_109();
		}
		if (__LIB_7__.func_42(&(uParam0->f_254)) > 2f)
		{
			if (!iLocal_152)
			{
				if (uParam0->f_454)
				{
					if ((uParam0->f_437[0] + uParam0->f_437[1]) == 1)
					{
						iVar2 = 1;
					}
					else
					{
						iVar2 = 0;
					}
					func_245(&iLocal_138, iVar2);
				}
				else
				{
					func_244(&iLocal_138);
				}
				iLocal_152 = 1;
			}
		}
		if (iVar0 == 1)
		{
			HUD::CLEAR_HELP(true);
			AUDIO::STOP_AUDIO_SCENE(func_420(3));
			if (!PED::IS_PED_INJURED(iLocal_138[0]) && !PED::IS_PED_INJURED(iLocal_138[1]))
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_138[0]);
				TASK::TASK_CLEAR_LOOK_AT(iLocal_138[1]);
			}
			__LIB_6__.func_927(uParam3);
			if (bParam4)
			{
				func_349(uParam2, 0, 0, 0, 0);
			}
			uParam0->f_429[0] = 0;
			uParam0->f_429[1] = 0;
			uParam0->f_432[0] = 0;
			uParam0->f_432[1] = 0;
			iLocal_30 = 1;
			__LIB_0__.func_735(&(uParam0->f_254));
			*uParam0 = 9;
			iLocal_152 = 0;
			iLocal_150 = 0;
			bLocal_154 = false;
			__LIB_21__.func_672();
			iLocal_159 = 0;
			iLocal_134 = 0;
			uParam1->f_680 = 0;
			iLocal_160 = 0;
			bLocal_161 = false;
			__LIB_19__.func_72(&(uParam1->f_72), 0);
			__LIB_11__.func_629();
		}
		else if (iVar0 == 2)
		{
			__LIB_10__.func_573(uParam3);
			AUDIO::STOP_AUDIO_SCENE(func_420(3));
			if (uParam0->f_446[0] * 10 > 0)
			{
				__LIB_40__.func_942(__LIB_18__.func_173(), 21, uParam0->f_446[0] * 10, 0, 0);
			}
			HUD::CLEAR_PRINTS();
			*uParam0 = 13;
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 234 /*INPUT_SCRIPT_PAD_LEFT*/) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/)) && uParam0->f_248 == 1) && bVar1)
		{
			uParam0->f_457 = 0;
			if (iLocal_140)
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], true) };
				func_55(Var3, 0, iLocal_140);
				iLocal_140 = 0;
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
			{
				iLocal_163++;
				if (iLocal_163 >= uParam0->f_436)
				{
					iLocal_163 = 0;
				}
				Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], true) };
				func_53(Var3);
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
			{
				iLocal_163 = (iLocal_163 - 1);
				if (iLocal_163 < 0)
				{
					iLocal_163 = (uParam0->f_436 - 1);
				}
				Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], true) };
				func_53(Var3);
			}
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 211 /*INPUT_FRONTEND_LEADERBOARD*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 211 /*INPUT_FRONTEND_LEADERBOARD*/)) && bVar1) && (iLocal_159 || !PLAYER::IS_PLAYER_ONLINE()))
		{
			uParam1->f_680 = 1;
			__LIB_0__.func_924(&(uParam1->f_509), 0, 0, 1, 1);
			__LIB_0__.func_713(&(uParam1->f_509), "DARTS_CONT" /* GXT: Continue */, 2, 215, 1, 1, 0);
			__LIB_0__.func_713(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			__LIB_0__.func_713(&(uParam1->f_509), "IB_BACK" /* GXT: Back */, 2, 202, 1, 1, 0);
			if (bLocal_161)
			{
				__LIB_0__.func_713(&(uParam1->f_509), "SCLB_PROFILE" /* GXT: View Profile */, 2, 217, 1, 1, 0);
			}
			__LIB_0__.func_923(&(uParam1->f_509), 1);
		}
	}
	else if (!uParam0->f_457)
	{
		HUD::CLEAR_HELP(true);
		HUD::CLEAR_PRINTS();
		func_49(uParam3, uParam0->f_454, uParam0->f_429[iLocal_30], uParam0->f_432[iLocal_30], iLocal_106[2], uParam0->f_437[0], uParam0->f_437[1], uParam0->f_440[0], uParam0->f_440[1], uParam0->f_443[0], uParam0->f_443[1], bParam4);
		fVar4 = GRAPHICS::GET_ASPECT_RATIO(true);
		if (fVar4 > 2f)
		{
			Var5 = { 1992.2941f, 3047.577f, 46.21517f };
			Var6 = { 0f, 0f, 138.74f };
		}
		else
		{
			Var5 = { 1992.3357f, 3047.9243f, 46.21517f };
			Var6 = { 0f, 0f, 136.74f };
		}
		iVar7 = func_246();
		iLocal_168 = PED::CREATE_SYNCHRONIZED_SCENE(Var5, Var6, 2);
		iLocal_174 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_174, iLocal_168, sLocal_227[iVar7], "mini@dartsoutro");
		CAM::SET_CAM_ACTIVE(iLocal_174, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		if (!PED::IS_PED_INJURED(iLocal_138[0]) && !PED::IS_PED_INJURED(iLocal_138[1]))
		{
			if (uParam0->f_454)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_138[0], iLocal_168, "mini@dartsoutro", sLocal_225[iVar7], 1000f, -1.5f, 0, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_138[1], iLocal_168, "mini@dartsoutro", sLocal_226[iVar7], 1000f, -1.5f, 0, 0, 1000f, 0);
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_223, sLocal_224[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0f, false, false, false);
			}
			else
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_138[1], iLocal_168, "mini@dartsoutro", sLocal_225[iVar7], 1000f, -1.5f, 0, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_138[0], iLocal_168, "mini@dartsoutro", sLocal_226[iVar7], 1000f, -1.5f, 0, 0, 1000f, 0);
				TASK::TASK_PLAY_ANIM(iLocal_138[1], sLocal_222, sLocal_224[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0f, false, false, false);
			}
		}
		bLocal_154 = false;
		uParam0->f_457 = 1;
		uParam1->f_671 = MISC::GET_GAME_TIMER();
		iVar8 = 0;
		while (iVar8 < 2)
		{
			iVar9 = 0;
			while (iVar9 < 3)
			{
				__LIB_1__.func_852(&(uParam0->f_5[iVar8 /*79*/][iVar9 /*26*/]));
				iVar9++;
			}
			func_249(uParam2, iVar8);
			iVar8++;
		}
	}
	else if ((MISC::GET_GAME_TIMER() - uParam1->f_671) > 400 && __LIB_20__.func_175(uParam3, 0, 0))
	{
		if (!uParam0->f_454)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "LOOSE_MATCH", "HUD_MINI_GAME_SOUNDSET", true);
		}
		iLocal_141 = 1;
	}
}

void func_49(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x534E
{
	uParam0->f_565 = 1;
	if (bParam1)
	{
		__LIB_10__.func_563(uParam0, "DARTS_WINNER", "DARTS_YJ", 0);
	}
	else
	{
		__LIB_10__.func_563(uParam0, "DARTS_LOSE_R", "DARTS_YJ", 0);
	}
	__LIB_11__.func_516(uParam0, 1, "DARTS_NUM_T", "", uParam2, 0, 0, 0);
	__LIB_11__.func_516(uParam0, 1, "DARTS_NUM_B", "", uParam3, 0, 0, 0);
	__LIB_11__.func_516(uParam0, 1, "DARTS_NUM_180", "", uParam4, 0, 0, 0);
	if (bParam11)
	{
		__LIB_11__.func_516(uParam0, 2, "DARTS_WIN", "", iParam5, (iParam5 + iParam6), 0, 0);
		__LIB_11__.func_516(uParam0, 2, "DARTS_SWIN", "", iParam7, (iParam7 + iParam8), 0, 0);
	}
	__LIB_11__.func_516(uParam0, 2, "DARTS_GWIN", "", iParam9, (iParam9 + iParam10), 0, 0);
	__LIB_10__.func_562(uParam0, 0, "", 0, 0, 0, 0, 0);
	__LIB_0__.func_518(1);
}

void func_53(struct<3> Param0)//Position - 0x54FC
{
	struct<3> Var0;
	Var0 = { func_54(Param0) };
	if (bLocal_88)
	{
		CAM::SET_CAM_COORD(iLocal_86, Var0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_86, iLocal_85, 500, 1, 1);
		bLocal_88 = false;
	}
	else
	{
		CAM::SET_CAM_COORD(iLocal_85, Var0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_85, iLocal_86, 500, 1, 1);
		bLocal_88 = true;
	}
}

Vector3 func_54(struct<3> Param0)//Position - 0x554C
{
	struct<3> Var0;
	struct<3> Var1;
	Var1 = { 0.3495f, -0.0276f, -0.0114f };
	Var0 = { Param0 - Var1 };
	return Var0;
}

void func_55(struct<3> Param0, bool bParam1, bool bParam2)//Position - 0x5578
{
	struct<3> Var0;
	Var0 = { func_54(Param0) };
	if (bParam1)
	{
		CAM::SET_CAM_COORD(iLocal_85, Var0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_85, iLocal_84, 1500, 1, 1);
		CAM::SET_CAM_ACTIVE(iLocal_84, false);
		CAM::SET_CAM_COORD(iLocal_86, Var0);
		bLocal_88 = true;
	}
	else if (bParam2)
	{
		CAM::SET_CAM_COORD(iLocal_85, Var0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_85, iLocal_77, 2000, 1, 1);
		bLocal_88 = true;
	}
	else
	{
		if (bLocal_88)
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_84, iLocal_85, 1500, 1, 1);
		}
		else
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_84, iLocal_86, 1500, 1, 1);
		}
		CAM::SET_CAM_ACTIVE(iLocal_85, false);
	}
}

void func_109()//Position - 0x71C9
{
	CAM::SET_CAM_ACTIVE(iLocal_81, true);
}

int func_110(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x71D8
{
	if (!__LIB_0__.func_492(&(uParam0->f_666), 7))
	{
		if (!__LIB_0__.func_492(&(uParam0->f_666), 9))
		{
			__LIB_0__.func_518(1);
			__LIB_0__.func_924(&(uParam0->f_509), 0, 0, 1, 1);
			__LIB_0__.func_713(&(uParam0->f_509), "DARTS_CONT" /* GXT: Continue */, 2, 215, 1, 1, 0);
			if (!bParam2)
			{
				__LIB_0__.func_713(&(uParam0->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			}
			else
			{
				__LIB_0__.func_713(&(uParam0->f_509), "DARTS_REPLAY", 2, 216, 1, 1, 0);
			}
			if (iParam3 || !PLAYER::IS_PLAYER_ONLINE())
			{
				__LIB_0__.func_713(&(uParam0->f_509), "HUD_LBD_LBD" /* GXT: Leaderboard */, 2, 211, 1, 1, 0);
			}
			__LIB_0__.func_923(&(uParam0->f_509), 1);
			__LIB_1__.func_881(&(uParam0->f_666), 8, 0);
			__LIB_1__.func_881(&(uParam0->f_666), 9, 1);
		}
		if (!__LIB_0__.func_492(&(uParam0->f_666), 14))
		{
			if (bParam1)
			{
				if (!bParam2)
				{
					__LIB_6__.func_888(__LIB_0__.func_138(uParam0->f_668 < uParam0->f_669, uParam0->f_668, uParam0->f_669), __LIB_1__.func_6(uParam0->f_668 < uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
					__LIB_6__.func_888(__LIB_0__.func_138(uParam0->f_668 >= uParam0->f_669, uParam0->f_668, uParam0->f_669), __LIB_1__.func_6(uParam0->f_668 >= uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					__LIB_6__.func_888(uParam0->f_668, &(uParam0->f_648), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
				__LIB_26__.func_454(&(uParam0->f_57), 0, 0);
			}
			__LIB_7__.func_44(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if ((MISC::GET_GAME_TIMER() - uParam0->f_671) > 900)
			{
				if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 216 /*INPUT_FRONTEND_ENDSCREEN_EXPAND*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					__LIB_1__.func_881(&(uParam0->f_666), 9, 0);
					return 1;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 215 /*INPUT_FRONTEND_ENDSCREEN_ACCEPT*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					__LIB_1__.func_836();
					__LIB_1__.func_3();
					return 2;
				}
			}
		}
	}
	else
	{
		__LIB_18__.func_296(uParam0);
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			return 2;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			__LIB_1__.func_881(&(uParam0->f_666), 9, 0);
			__LIB_1__.func_881(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_127(var uParam0, var uParam1)//Position - 0x7AC1
{
	func_128(uParam1, uParam0);
}

void func_128(var uParam0, var uParam1)//Position - 0x7AD1
{
	int iVar0;
	bool bVar1;
	var uVar2[3];
	int iVar3;
	bool bVar4;
	bool bVar5;
	struct<8> Var6;
	char[] cVar7[8];
	int iVar8[3];
	int iVar9;
	struct<13> Var10;
	var uVar11;
	struct<3> Var12;
	struct<3> Var13;
	bool bVar14;
	__LIB_0__.func_495(&(Global_2103068.f_49), 1, 0);
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	__LIB_1__.func_304();
	__LIB_8__.func_611(0);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	__LIB_7__.func_167(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	__LIB_0__.func_660(1);
	__LIB_0__.func_733(1);
	if (!__LIB_19__.func_797())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("LEADERBOARD_SCENE");
		}
	}
	if (!BitTest(uParam1->f_42, 3))
	{
		*uParam0 = __LIB_5__.func_29();
		MISC::SET_BIT(&(uParam1->f_42), 3);
	}
	Var10 = { __LIB_0__.func_604(PLAYER::PLAYER_ID()) };
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (((!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())) || Global_2097536.f_2832 != 0)
		{
			if (!PLAYER::IS_PLAYER_ONLINE())
			{
				if (Global_2097536.f_2829 != 2)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 2;
				}
			}
			else if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())
			{
				if (Global_2097536.f_2829 != 3)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 3;
				}
			}
			else if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
			{
				if (Global_2097536.f_2829 != 4)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 4;
				}
			}
			else if (Global_2097536.f_2832 != 0)
			{
				if (Global_2097536.f_2829 != 5)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 5;
				}
			}
			if (!BitTest(uParam1->f_42, 1))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				__LIB_5__.func_28(*uParam0, Global_2097536.f_2780);
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1)))
				{
					if (!__LIB_5__.func_27(uParam1->f_44))
					{
						if (Global_2097536.f_2780.f_26 > 0)
						{
							Var6 = { Global_2097536.f_2780.f_9 };
							__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &Var6, Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					else if (!Global_2097536.f_2780.f_27)
					{
						StringCopy(&Var6, "FMMC_COR_SCLB5" /* GXT: Driver */, 64);
						if (Global_2097536.f_2780.f_26 > 0)
						{
							__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&Var6, "FMMC_COR_SCLB6" /* GXT: Co-Driver */, 64);
						if (Global_2097536.f_2780.f_26 > 0)
						{
							__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					__LIB_5__.func_25(*uParam0, "SCLB_C_RANK" /* GXT: POSITION */, &(Global_2097536.f_2717), Global_2097536.f_2708);
				}
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 4);
				func_195(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 5);
				func_195(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 6);
				func_195(*uParam0, &iVar3, iVar9, 1, 1);
				MISC::SET_BIT(&(uParam1->f_42), 1);
				__LIB_5__.func_24(*uParam0);
				MISC::CLEAR_BIT(&(uParam1->f_42), 2);
				HUD::CLEAR_HELP(true);
			}
			else
			{
				__LIB_5__.func_24(*uParam0);
			}
		}
		else
		{
			if (Global_2097536.f_2829 != 1)
			{
				MISC::CLEAR_BIT(&(uParam1->f_42), 1);
				Global_2097536.f_2829 = 1;
			}
			if (!__LIB_41__.func_445(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				MISC::CLEAR_BIT(&(uParam1->f_42), 1);
				if (!BitTest(uParam1->f_42, 0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					__LIB_5__.func_28(*uParam0, Global_2097536.f_2780);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1)))
					{
						if (!__LIB_5__.func_27(uParam1->f_44))
						{
							if (Global_2097536.f_2780.f_26 > 0)
							{
								Var6 = { Global_2097536.f_2780.f_9 };
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &Var6, 1, Global_2097536.f_2780.f_26);
							}
							else
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else if (!Global_2097536.f_2780.f_27)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5" /* GXT: Driver */, 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6" /* GXT: Co-Driver */, 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						__LIB_5__.func_25(*uParam0, "SCLB_C_RANK" /* GXT: POSITION */, &(Global_2097536.f_2717), Global_2097536.f_2708);
					}
					MISC::SET_BIT(&(uParam1->f_42), 0);
					MISC::CLEAR_BIT(&(uParam1->f_42), 2);
				}
				iVar3 = 0;
				iVar0 = 0;
				if (Global_2097536.f_2825 == -1)
				{
					StringCopy(&Var12, "SC_LB_DL0" /* GXT: Downloading */, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 4);
							func_195(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 5);
							func_195(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 6);
							func_195(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 7);
						__LIB_5__.func_10(*uParam0, iVar3, iVar9, &Var12);
						iVar3++;
						iVar0++;
					}
					Global_2097536.f_2825 = 1;
					__LIB_0__.func_579(&(Global_2097536.f_2823));
				}
				else if (__LIB_2__.func_47(&(Global_2097536.f_2823), 300, 0))
				{
					StringCopy(&Var13, "SC_LB_DL", 24);
					StringIntConCat(&Var13, Global_2097536.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 4);
							func_195(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 5);
							func_195(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 6);
							func_195(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 7);
						__LIB_5__.func_10(*uParam0, iVar3, iVar9, &Var13);
						iVar3++;
						iVar0++;
					}
					Global_2097536.f_2825++;
					if (Global_2097536.f_2825 > 3)
					{
						Global_2097536.f_2825 = 0;
					}
					__LIB_0__.func_579(&(Global_2097536.f_2823));
				}
				__LIB_5__.func_24(*uParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam1->f_42), 0);
				if (!BitTest(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					__LIB_5__.func_28(*uParam0, Global_2097536.f_2780);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1)))
					{
						if (!__LIB_5__.func_27(uParam1->f_44))
						{
							if (Global_2097536.f_2780.f_26 > 0)
							{
								Var6 = { Global_2097536.f_2780.f_9 };
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &Var6, 1, Global_2097536.f_2780.f_26);
							}
							else
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else if (!Global_2097536.f_2780.f_27)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5" /* GXT: Driver */, 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6" /* GXT: Co-Driver */, 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						__LIB_5__.func_25(*uParam0, "SCLB_C_RANK" /* GXT: POSITION */, &(Global_2097536.f_2717), Global_2097536.f_2708);
					}
					if (!BitTest(uParam1->f_42, 6))
					{
						__LIB_1__.func_902(&Global_2101867);
						__LIB_37__.func_171(uParam1, &Global_2101867);
						__LIB_5__.func_7(uParam1, &Global_2101867);
					}
					iVar3 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_2097536.f_2704[0] > 1 || (Global_2097536.f_2704[0] > 0 && Global_2097536.f_2775[0] != -1)) || (((Global_2097536.f_2704[0] > 0 && Global_2097536.f_2780.f_27) && __LIB_5__.func_27(uParam1->f_44)) && Global_2097536.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar14 = false;
							if (Global_2101867[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar8[0])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 4);
									func_195(*uParam0, &iVar3, iVar9, 0, 0);
									iVar8[0] = 1;
								}
							}
							else if (Global_2101867[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar8[1])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 5);
									if ((Global_2097536.f_2704[1] < 1 && Global_2097536.f_2775[1] == -1) && !(((Global_2097536.f_2704[1] > 0 && Global_2097536.f_2780.f_27) && __LIB_5__.func_27(uParam1->f_44)) && Global_2097536.f_2775[1] != -1))
									{
										func_195(*uParam0, &iVar3, iVar9, 1, 0);
										bVar14 = true;
									}
									else
									{
										func_195(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[1] = 1;
								}
							}
							else if (Global_2101867[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar8[2])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 6);
									if (!NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
									{
										bVar14 = true;
									}
									else if (!NETWORK::NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT())
									{
										bVar14 = true;
									}
									if ((Global_2097536.f_2704[2] < 2 && Global_2097536.f_2775[2] == -1) && !(((Global_2097536.f_2704[2] > 0 && Global_2097536.f_2780.f_27) && __LIB_5__.func_27(uParam1->f_44)) && Global_2097536.f_2775[2] != -1))
									{
										bVar14 = true;
									}
									if (bVar14)
									{
										func_195(*uParam0, &iVar3, iVar9, 1, 0);
									}
									else
									{
										func_195(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[2] = 1;
								}
							}
							if (__LIB_0__.func_585(Global_2101867[iVar0 /*100*/].f_32))
							{
								if (__LIB_5__.func_27(uParam1->f_44))
								{
									NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &uVar11);
									if (!Global_2101867[iVar0 /*100*/].f_74 && MISC::ARE_STRINGS_EQUAL(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar11))
									{
										bVar14 = true;
									}
								}
								if (!bVar14)
								{
									iVar9 = 0;
									if (!Global_2097536.f_2780.f_27)
									{
										if (__LIB_5__.func_6(&(Global_2101867[iVar0 /*100*/].f_32), &Var10))
										{
											MISC::SET_BIT(&iVar9, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar4 = true;
												uParam1->f_246.f_1 = iVar0;
												MISC::SET_BIT(&iVar9, 3);
											}
										}
									}
									if (__LIB_5__.func_27(uParam1->f_44))
									{
										Var6 = { Global_2101867[iVar0 /*100*/] };
										if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2101867[iVar0 /*100*/].f_84)) && !MISC::ARE_STRINGS_EQUAL(&(Global_2101867[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&Var6, "/", 64);
											StringConCat(&Var6, &(Global_2101867[iVar0 /*100*/].f_84), 64);
										}
										__LIB_5__.func_5(*uParam0, iVar3, iVar9, Global_2101867[iVar0 /*100*/].f_59, &Var6, &(Global_2101867[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_2101867[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										__LIB_5__.func_5(*uParam0, iVar3, iVar9, Global_2101867[iVar0 /*100*/].f_59, &(Global_2101867[iVar0 /*100*/]), &(Global_2101867[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_2101867[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									bVar1 = false;
									while (bVar1 < Global_2097536.f_2708)
									{
										bVar5 = false;
										if (BitTest(Global_2097536.f_2770, bVar1))
										{
											if (BitTest(Global_2097536.f_2768, bVar1))
											{
												if (Global_2097536.f_2754[bVar1] == Global_2101867[iVar0 /*100*/].f_67[bVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												__LIB_20__.func_979(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_67[bVar1], 0, Global_2101867[iVar0 /*100*/].f_58);
											}
											else
											{
												__LIB_20__.func_979(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_67[bVar1], Global_2101867[iVar0 /*100*/].f_74, Global_2101867[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (BitTest(Global_2097536.f_2768, bVar1))
											{
												if (Global_2097536.f_2761[bVar1] == Global_2101867[iVar0 /*100*/].f_67[bVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												__LIB_19__.func_792(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_60[bVar1], 0);
											}
											else
											{
												__LIB_19__.func_792(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_60[bVar1], Global_2101867[iVar0 /*100*/].f_74);
											}
										}
										bVar1++;
									}
									__LIB_5__.func_1();
									uVar2[(Global_2101867[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_2101867[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_2101867[iVar0 /*100*/].f_59 > 2)
										{
											MISC::SET_BIT(&iVar9, 2);
											MISC::SET_BIT(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											__LIB_5__.func_0(*uParam0, (iVar3 - 1), iVar9);
										}
									}
									iVar3++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 4);
						func_195(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 5);
						func_195(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 6);
						func_195(*uParam0, &iVar3, iVar9, 1, 0);
					}
					MISC::SET_BIT(&(uParam1->f_42), 1);
					MISC::CLEAR_BIT(&(uParam1->f_42), 2);
					__LIB_5__.func_24(*uParam0);
					HUD::CLEAR_HELP(true);
					if (uParam1->f_246.f_1 == -1 && !bVar4 == 1)
					{
						if (Global_2097536.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							MISC::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							__LIB_5__.func_0(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					__LIB_5__.func_24(*uParam0);
					__LIB_21__.func_617(uParam0, uParam1);
				}
			}
		}
	}
}

void func_195(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xEB54
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var2;
	bool bVar3;
	struct<13> Var4;
	int iVar5;
	struct<13> Var6;
	int iVar7;
	sVar0 = "";
	if (BitTest(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL" /* GXT: GLOBAL */;
	}
	else if (BitTest(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS" /* GXT: FRIENDS */;
	}
	else if (BitTest(iParam2, 6))
	{
		*iParam1++;
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
		{
			if ((__LIB_0__.func_52() || __LIB_0__.func_53()) && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				sVar0 = "SCLB_CREW" /* GXT: CREW */;
			}
			else
			{
				Var4 = { __LIB_0__.func_604(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var4))
				{
					NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var4);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var2 = { Var1.f_1 };
						bVar3 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW" /* GXT: CREW */;
					}
				}
				else
				{
					sVar0 = "SCLB_CREW" /* GXT: CREW */;
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW" /* GXT: CREW */;
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	if (bVar3)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&Var2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	*iParam1++;
	if (bParam4)
	{
		iVar5 = 0;
		MISC::SET_BIT(&iVar5, 7);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			sVar0 = "SCLB_NOT_ONL" /* GXT: Sign in to view leaderboard data. */;
		}
		else if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			sVar0 = "SCLB_NO_ROS" /* GXT: The Rockstar game services are unavailable right now. Please try again later. */;
		}
		else if (Global_2097536.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL" /* GXT: Unable to retrieve leaderboard data. Please try again later. */;
		}
		else
		{
			sVar0 = "HUD_PERM" /* GXT: Your profile does not have the correct permissions to access Social Club functionality. */;
		}
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (BitTest(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL" /* GXT: No data available yet for this leaderboard. */;
		}
		else if (BitTest(iParam2, 5))
		{
			if (NETWORK::NETWORK_GET_FRIEND_COUNT() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS" /* GXT: No friends listed on this leaderboard. */;
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb" /* GXT: Search for friends on Social Club to add and compare your scores with. */;
			}
		}
		else if (BitTest(iParam2, 6))
		{
			if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
			{
				if (NETWORK::NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT())
				{
					if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
					{
						if ((__LIB_0__.func_52() || __LIB_0__.func_53()) && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
						{
							sVar0 = "SCLB_NO_CREWc" /* GXT: No Crew members listed on this leaderboard. */;
						}
						else
						{
							Var6 = { __LIB_0__.func_604(PLAYER::PLAYER_ID()) };
							if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var6))
							{
								NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var6);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb" /* GXT: No ~a~ members listed on this leaderboard. */;
									Var2 = { Var1.f_1 };
									bVar3 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc" /* GXT: No Crew members listed on this leaderboard. */;
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa" /* GXT: Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ to participate in a Crew. */;
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa" /* GXT: Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ to participate in a Crew. */;
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe" /* GXT: ~HUD_COLOUR_SOCIAL_CLUB~Social Club~s~ policies have been updated. Visit the Players menu, and press ~INPUT_FRONTEND_Y~ to view and accept the updated policies. */;
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd" /* GXT: Sign up to Social Club to gain access to Crew leaderboards. */;
			}
		}
		iVar7 = 0;
		MISC::SET_BIT(&iVar7, 7);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
		if (bVar3)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&Var2);
			GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
			GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*iParam1++;
	}
}

int func_219(var uParam0, bool bParam1, bool bParam2)//Position - 0xF6B2
{
	if (!iLocal_134)
	{
		func_231(&(uParam0->f_72), bParam1);
		iLocal_134 = 1;
		__LIB_1__.func_881(&(uParam0->f_666), 9, 0);
	}
	else
	{
		if (Global_2097157.f_1 && !Global_2097157.f_2)
		{
			func_228(190, bParam1);
			Global_2097157.f_2 = 1;
			*bParam2 = 1;
		}
		if (__LIB_40__.func_551(&(uParam0->f_72)))
		{
			Global_2097532 = 1;
			return 1;
		}
	}
	return 0;
}

void func_228(int iParam0, bool bParam1)//Position - 0xFE9F
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	if (!PLAYER::IS_PLAYER_ONLINE())
	{
		return;
	}
	StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_230(iParam0, &Var0, &Var1, 1, -1, 1, 0))
	{
		__LIB_13__.func_99(190, 131, 0, 0f, 1);
		__LIB_13__.func_99(190, 103, iLocal_106[1], 0f, 0);
		__LIB_13__.func_99(190, 99, iLocal_106[2], 0f, 0);
		__LIB_13__.func_99(190, 109, iLocal_106[3], 0f, 0);
		__LIB_13__.func_99(190, 106, iLocal_106[5], 0f, 0);
		__LIB_13__.func_99(190, 2, iLocal_106[10], 0f, 0);
		__LIB_13__.func_99(190, 107, iLocal_106[8], 0f, 0);
		__LIB_13__.func_99(190, 116, iLocal_106[6], 0f, 0);
		iLocal_106[1] = 0;
		iLocal_106[2] = 0;
		iLocal_106[3] = 0;
		iLocal_106[5] = 0;
		iLocal_106[10] = 0;
		iLocal_106[8] = 0;
		iLocal_106[6] = 0;
	}
}

int func_230(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x100AC
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	if ((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())) && NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = uParam0;
		if (iParam4 == -1)
		{
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				Var2 = { __LIB_0__.func_604(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var2))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_2097157.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2723612.f_3)
			{
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&Var0, &(Global_1931618.f_10));
			}
			else
			{
				STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			}
		}
		return 1;
	}
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	if (NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
	}
	return 0;
}

void func_231(var uParam0, bool bParam1)//Position - 0x101E0
{
	int iVar0;
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	__LIB_19__.func_798(uParam0, 14, "DartsLB", "", iVar0, -1, 0, 0);
}

void func_244(int iParam0)//Position - 0x1578E
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 40)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_LOSE", 0, 4);
		}
	}
	else if (iVar0 < 70)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "GAME_LOSE_SELF", 1, 4);
		}
	}
	else if (!PED::IS_PED_INJURED((*iParam0)[1]))
	{
		func_4((*iParam0)[1], "GAME_WIN_SELF", 0, 4);
	}
}

void func_245(int iParam0, int iParam1)//Position - 0x15807
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 30)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "DARTS_LOSE", 1, 4);
		}
	}
	else if (iVar0 < 50)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_WIN", 0, 4);
		}
	}
	else if (iVar0 < 75 && iParam1)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_LOSING_BADLY", 0, 4);
		}
	}
	else if (iVar0 < 88)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "GAME_WIN_SELF", 1, 4);
		}
	}
	else if (!PED::IS_PED_INJURED((*iParam0)[1]))
	{
		func_4((*iParam0)[1], "GAME_LOSE_SELF", 0, 4);
	}
}

int func_246()//Position - 0x158D4
{
	int iVar0;
	if (!bLocal_155)
	{
		iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
	}
	else
	{
		iLocal_169++;
		iVar0 = (iLocal_169 % 2);
	}
	return iVar0;
}

void func_249(var uParam0, int iParam1)//Position - 0x159D3
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_SCORES");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_251(int iParam0)//Position - 0x15A41
{
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_77, iLocal_75, 1500, 1, 1);
	CAM::SET_CAM_ACTIVE(iLocal_78, true);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_77, iLocal_78, 8000, 1, 1);
	CAM::ATTACH_CAM_TO_ENTITY(iLocal_80, iParam0, -0.0301f, 1.498f, 0.7435f, true);
	CAM::POINT_CAM_AT_ENTITY(iLocal_80, iParam0, 0.0557f, -1.4905f, 0.4958f, true);
	CAM::SET_CAM_FOV(iLocal_80, 35f);
}

void func_252(var uParam0, var uParam1, var uParam2, var uParam3, int* iParam4)//Position - 0x15AA5
{
	bool bVar0;
	if (!CAM::IS_CAM_INTERPOLATING(iLocal_75))
	{
		bVar0 = false;
		func_333(uParam0);
		if (!bLocal_147)
		{
			if (uParam0->f_1 == 5)
			{
				if (uParam3->f_672)
				{
					HUD::CLEAR_HELP(true);
					uParam3->f_672 = 0;
				}
			}
			else if (!bLocal_107)
			{
				if (__LIB_0__.func_492(&(uParam3->f_666), 18))
				{
					if (!__LIB_0__.func_492(&(uParam3->f_666), 21))
					{
						if (!BitTest(Global_113347, 3))
						{
							__LIB_0__.func_151("DARTS_INSTR_W", -1);
							MISC::SET_BIT(&Global_113347, 3);
						}
						__LIB_1__.func_881(&(uParam3->f_666), 21, 1);
					}
					else if (!__LIB_0__.func_492(&(uParam3->f_666), 20) && __LIB_0__.func_492(&(uParam3->f_666), 19))
					{
						if (!BitTest(Global_113347, 4))
						{
							__LIB_0__.func_151("DARTS_INSTR_B", -1);
							MISC::SET_BIT(&Global_113347, 4);
						}
						__LIB_1__.func_881(&(uParam3->f_666), 20, 1);
					}
				}
				uParam3->f_672 = 1;
			}
			else if (uParam3->f_672)
			{
				HUD::CLEAR_HELP(true);
				uParam3->f_672 = 0;
			}
		}
		if (uParam0->f_1 == 1)
		{
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_84) && uParam0->f_3 == 2)
			{
				func_332(uParam3);
			}
		}
		else
		{
			func_330(uParam3, iLocal_30);
		}
		func_329(&(uParam0->f_1));
	}
	else
	{
		bVar0 = true;
	}
	func_326(uParam3);
	switch (uParam0->f_1)
	{
		case 1:
			if (!func_318(&(uParam0->f_3)))
			{
				uParam0->f_1 = 2;
			}
			break;
		case 0:
			if (func_311(uParam0->f_422[iLocal_30], &(uParam0->f_243), &(uParam0->f_4), &(uParam0->f_461)))
			{
				uParam0->f_1 = 2;
			}
			break;
		case 2:
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 228 /*INPUT_SCRIPT_LT*/) && iLocal_30 == 0)
			{
				uParam0->f_1 = 1;
			}
			if (iLocal_30 == 0)
			{
				func_310(iLocal_31, 0);
				if (((((!__LIB_0__.func_1("DARTS_SHT_USE") && !__LIB_0__.func_1("DARTS_INSTR_W")) && !__LIB_0__.func_1("DARTS_INSTR_B")) && !__LIB_0__.func_1("DARTS_AIM_HLP")) && !__LIB_0__.func_1("DARTS_STD_HLP")) && !__LIB_0__.func_1("DARTS_FST_HLP"))
				{
					if (__LIB_0__.func_492(&(uParam3->f_666), 24))
					{
						__LIB_0__.func_151("DARTS_LEVEL", -1);
						MISC::SET_BIT(&(Global_113386.f_18970.f_6), iLocal_167);
						__LIB_1__.func_881(&(uParam3->f_666), 24, 0);
					}
				}
				if ((((uParam0->f_422[iLocal_30] % 2) == 0 && uParam0->f_422[iLocal_30] < 41) && iLocal_31 == 0) && !iLocal_145)
				{
					if (!__LIB_0__.func_492(&(uParam3->f_666), 6))
					{
						__LIB_1__.func_881(&(uParam3->f_666), 6, 1);
					}
					iLocal_145 = 1;
				}
				else if (uParam0->f_422[iLocal_30] == 50 && !iLocal_145)
				{
					if (!__LIB_0__.func_492(&(uParam3->f_666), 6))
					{
						__LIB_1__.func_881(&(uParam3->f_666), 6, 1);
					}
					iLocal_145 = 1;
				}
				else if (func_299(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam1, bVar0, 0, 0, uParam0->f_248))
				{
					HUD::CLEAR_PRINTS();
					uParam3->f_670 = (uParam3->f_670 - 1);
					uParam0->f_1 = 3;
				}
				else if (!iLocal_142)
				{
					if (!__LIB_0__.func_736(iParam4))
					{
						__LIB_37__.func_667(iParam4);
					}
					else if (__LIB_7__.func_78(iParam4) > 20f)
					{
						func_296(iLocal_138[(1 - iLocal_30)]);
						__LIB_0__.func_735(iParam4);
						iLocal_142 = 1;
					}
				}
			}
			else if (iLocal_31 == 0)
			{
				iLocal_165 = 0;
				func_295(&(uParam0->f_422), &(uParam0->f_249));
				func_292(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			else if (SYSTEM::TIMERA() > MISC::GET_RANDOM_INT_IN_RANGE(1250, 2500))
			{
				func_295(&(uParam0->f_422), &(uParam0->f_249));
				func_292(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			break;
		case 3:
			if (func_279(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_248, 0))
			{
				uParam0->f_436++;
				uParam0->f_455 = func_278(uParam0);
				uParam0->f_1 = 4;
			}
			break;
		case 4:
			if (!__LIB_0__.func_492(&(uParam3->f_666), 5))
			{
				func_276(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_455);
			}
			func_261(uParam0, uParam3);
			break;
		case 5:
			func_254(uParam0, uParam2, uParam3);
			if (__LIB_0__.func_736(iParam4))
			{
				__LIB_0__.func_735(iParam4);
			}
			break;
		case 6:
			func_253(uParam0, uParam3);
			break;
	}
}

void func_253(var uParam0, var uParam1)//Position - 0x15EFF
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	float fVar3;
	iLocal_165++;
	iLocal_30 = 1;
	iLocal_31 = 0;
	iLocal_149 = 1;
	while (iLocal_31 < 3 && uParam0->f_1 == 6)
	{
		if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_25)
			{
				iLocal_31++;
			}
			else
			{
				func_276(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
				func_261(uParam0, uParam1);
			}
		}
		else if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24)
		{
			if (bLocal_148)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]));
				}
			}
			else
			{
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], Var0, true, false, false, true);
				}
			}
			func_276(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			func_261(uParam0, uParam1);
			if (bLocal_148)
			{
				if (iLocal_150)
				{
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/] = OBJECT::CREATE_OBJECT(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_1, Local_40, true, true, false);
					Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
					ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], Var0, true, false, false, true);
					fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17 = { 90f, fVar1, uParam0->f_243.f_4 };
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17, 0, true);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				}
			}
		}
		else
		{
			func_295(&(uParam0->f_422), &(uParam0->f_249));
			func_292(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			uParam0->f_436++;
			func_276(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_30] == 0)
			{
				if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
				{
					uParam0->f_432[iLocal_30]++;
				}
				__LIB_1__.func_881(&(uParam1->f_666), 2, 0);
				__LIB_1__.func_881(&(uParam1->f_666), 3, 0);
				__LIB_1__.func_881(&(uParam1->f_666), 4, 0);
				__LIB_1__.func_881(&(uParam1->f_666), 5, 1);
				SYSTEM::SETTIMERB(0);
			}
			func_261(uParam0, uParam1);
			if (bLocal_148)
			{
				if (iLocal_150)
				{
					iVar2 = 0;
					while (iVar2 < iLocal_31 + 1)
					{
						if (!uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_23)
						{
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/] = OBJECT::CREATE_OBJECT(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_1, Local_40, true, true, false);
							Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11.f_2) };
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/]))
							{
								ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/], Var0, true, false, false, true);
							}
							fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_17 = { 90f, fVar3, uParam0->f_243.f_4 };
							ENTITY::SET_ENTITY_ROTATION(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_17, 0, true);
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_23 = 1;
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_24 = 0;
						}
						iVar2++;
					}
				}
			}
		}
	}
	uParam0->f_1 = 5;
	if (iLocal_165 > 2)
	{
		uParam0->f_1 = 5;
	}
}

void func_254(var uParam0, var uParam1, var uParam2)//Position - 0x16388
{
	struct<3> Var0;
	int iVar1;
	switch (uParam0->f_2)
	{
		case 0:
			if (uParam0->f_248 == 1)
			{
				func_260();
			}
			if (iLocal_30 == 0)
			{
				if (__LIB_0__.func_492(&(uParam2->f_666), 3))
				{
					__LIB_11__.func_628("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else if (__LIB_0__.func_492(&(uParam2->f_666), 4))
				{
					__LIB_0__.func_210("DARTS_ONE_PT", 5000, 0);
				}
				else if (__LIB_0__.func_492(&(uParam2->f_666), 2))
				{
					__LIB_11__.func_628("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else
				{
					__LIB_11__.func_628("DARTS_SWITCH_C", uParam0->f_422[iLocal_30], 5000, 0);
				}
			}
			else if (__LIB_0__.func_492(&(uParam2->f_666), 3))
			{
				__LIB_11__.func_628("DARTS_OPP_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else if (__LIB_0__.func_492(&(uParam2->f_666), 4))
			{
				__LIB_0__.func_210("DARTS_ONE_PT", 5000, 0);
			}
			else if (__LIB_0__.func_492(&(uParam2->f_666), 2))
			{
				__LIB_11__.func_628("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				__LIB_11__.func_628("DARTS_SWITCH_B", uParam0->f_422[iLocal_30], 5000, 0);
			}
			SYSTEM::SETTIMERB(0);
			uParam0->f_2 = 2;
			break;
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
			{
				iLocal_163++;
				if (iLocal_163 >= uParam0->f_436)
				{
					iLocal_163 = 0;
				}
				Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], true) };
				func_53(Var0);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
			{
				iLocal_163 = (iLocal_163 - 1);
				if (iLocal_163 < 0)
				{
					iLocal_163 = (uParam0->f_436 - 1);
				}
				Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], true) };
				func_53(Var0);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], true) };
				func_55(Var0, 0, 0);
				uParam0->f_2 = 2;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
			{
				iLocal_139 = 1;
				uParam0->f_2 = 2;
			}
			break;
		case 2:
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || (iLocal_149 && bLocal_148))
			{
				iLocal_139 = 1;
			}
			if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/)) && uParam0->f_248 == 1)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], true) };
				func_55(Var0, 1, 0);
				uParam0->f_2 = 1;
			}
			if (!__LIB_0__.func_492(&(uParam2->f_666), 6))
			{
				if (!iLocal_144)
				{
					if (func_257(iLocal_30 == 0, &(iLocal_138[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
					{
						iLocal_144 = 1;
					}
				}
				else if ((MISC::GET_GAME_TIMER() % 500) < 50)
				{
				}
			}
			else if (!iLocal_144)
			{
				if (func_256(iLocal_30 == 0, &(iLocal_138[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
				{
					iLocal_144 = 1;
				}
			}
			else if ((MISC::GET_GAME_TIMER() % 500) < 50)
			{
			}
			if (iLocal_139 || SYSTEM::TIMERB() > 2000)
			{
				iLocal_149 = 0;
				iVar1 = 0;
				while (iVar1 < 3)
				{
					__LIB_1__.func_852(&(uParam0->f_5[iLocal_30 /*79*/][iVar1 /*26*/]));
					iVar1++;
				}
				if (uParam0->f_425[iLocal_30] != uParam0->f_422[iLocal_30])
				{
					func_255(uParam1, iLocal_30, uParam0->f_422[iLocal_30]);
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCOREBOARD_MASTER", uParam0->f_243.f_1, 0, false, 0, false);
				}
				uParam0->f_425[iLocal_30] = uParam0->f_422[iLocal_30];
				iLocal_31 = 0;
				uParam0->f_428 = 0;
				if (iLocal_30 == 0)
				{
					iLocal_30 = 1;
				}
				else
				{
					iLocal_30 = 0;
				}
				func_440(uParam1, iLocal_30);
				iLocal_54 = 0;
				func_419();
				if (!bLocal_148)
				{
					HUD::CLEAR_SMALL_PRINTS();
				}
				iLocal_48 = 0;
				uParam2->f_670 = 3;
				iLocal_145 = 0;
				iLocal_142 = 0;
				iLocal_144 = 0;
				iLocal_139 = 0;
				iLocal_163 = 0;
				uParam0->f_436 = 0;
				uParam0->f_1 = 2;
				uParam0->f_2 = 0;
			}
			break;
	}
}

void func_255(var uParam0, int iParam1, int iParam2)//Position - 0x167A1
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_DARTS_SCORE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_256(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x167C5
{
	var uVar0;
	int iVar1;
	int iVar2;
	if (bParam0)
	{
		if ((iParam2 > 30 && bParam0) || iParam3 < 20)
		{
			MISC::SET_BIT(&uVar0, 0);
		}
		if ((iParam2 <= 30 && bParam0) || iParam3 >= 20)
		{
			MISC::SET_BIT(&uVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 20 && !bParam0) || iParam4 < 30)
		{
			MISC::SET_BIT(&uVar0, 1);
		}
		if ((iParam2 <= 20 && !bParam0) || iParam4 >= 30)
		{
			MISC::SET_BIT(&uVar0, 3);
		}
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar2 < 85)
	{
		if (BitTest(uVar0, 0))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_SELF", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68)
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 1))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 3))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_257(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x169B6
{
	var uVar0;
	int iVar1;
	int iVar2;
	if (bParam0)
	{
		if ((iParam2 > 100 && bParam0) || (iParam4 - iParam3) > 75)
		{
			MISC::SET_BIT(&uVar0, 0);
		}
		if ((iParam2 < 70 && bParam0) || (iParam3 - iParam4) < 50)
		{
			MISC::SET_BIT(&uVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 75 && !bParam0) || (iParam3 - iParam4) > 50)
		{
			MISC::SET_BIT(&uVar0, 1);
		}
		if ((iParam2 < 40 && !bParam0) || (iParam4 - iParam3) < 30)
		{
			MISC::SET_BIT(&uVar0, 3);
		}
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar2 < 75)
	{
		if (BitTest(uVar0, 0))
		{
			if (iVar1 < 35)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_HAPPY", 1, 4);
			}
			else if (iVar1 < 70)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 85)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_SELF", 1, 4);
			}
			else
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68 && !ENTITY::DOES_ENTITY_EXIST(__LIB_11__.func_91()))
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 1))
		{
			if (iVar1 < 40)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_PLAYING_WELL", 1, 4);
			}
			else if (iVar1 < 60)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 80)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 3))
		{
			if (iVar1 < 33)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 66)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_HECKLE", 1, 4);
			}
			return 1;
		}
	}
	return 0;
}

void func_260()//Position - 0x16C3B
{
	CAM::SET_CAM_ACTIVE(iLocal_84, true);
	CAM::SET_CAM_ACTIVE(iLocal_75, false);
}

void func_261(var uParam0, var uParam1)//Position - 0x16C51
{
	uParam0->f_455 = 0;
	if (!__LIB_0__.func_492(&(uParam1->f_666), 5))
	{
		uParam0->f_422[iLocal_30] = (uParam0->f_422[iLocal_30] - uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
		uParam0->f_428 = (uParam0->f_428 + uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
	}
	if (__LIB_0__.func_492(&(uParam1->f_666), 5))
	{
		func_273(uParam0);
		__LIB_1__.func_881(&(uParam1->f_666), 5, 0);
	}
	else
	{
		uParam0->f_429[iLocal_30]++;
		if (iLocal_30 == 0)
		{
			func_271(4);
			iLocal_106[10]++;
		}
		if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_30] == 0)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_271(0);
					iLocal_106[1]++;
				}
			}
			__LIB_1__.func_881(&(uParam1->f_666), 2, 0);
			__LIB_1__.func_881(&(uParam1->f_666), 3, 0);
			__LIB_1__.func_881(&(uParam1->f_666), 4, 0);
			__LIB_1__.func_881(&(uParam1->f_666), 5, 1);
			func_273(uParam0);
			__LIB_1__.func_881(&(uParam1->f_666), 5, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if ((uParam0->f_422[iLocal_30] == 1 || uParam0->f_422[iLocal_30] < 0) || (uParam0->f_422[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2))
		{
			if (uParam0->f_422[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2)
			{
				__LIB_11__.func_628("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				__LIB_1__.func_881(&(uParam1->f_666), 3, 1);
			}
			else if (uParam0->f_422[iLocal_30] == 1)
			{
				__LIB_1__.func_881(&(uParam1->f_666), 4, 1);
			}
			else if (iLocal_30 == 1)
			{
				__LIB_11__.func_628("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				__LIB_11__.func_628("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			if (!iLocal_144)
			{
				if (func_270(iLocal_138[(1 - iLocal_30)]))
				{
					iLocal_144 = 1;
				}
			}
			uParam0->f_422[iLocal_30] = uParam0->f_425[iLocal_30];
			if (uParam0->f_1 == 6)
			{
			}
			SYSTEM::SETTIMERA(0);
			uParam0->f_1 = 5;
			if (iLocal_30 == 0)
			{
				uParam0->f_435++;
			}
			__LIB_1__.func_881(&(uParam1->f_666), 2, 1);
		}
		else
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					__LIB_1__.func_840(uParam1, 1);
					func_271(0);
					iLocal_106[1]++;
				}
				if (!iLocal_144 && !iLocal_149)
				{
					if (func_268(iLocal_138[iLocal_30]))
					{
						iLocal_144 = 1;
					}
				}
			}
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 0)
			{
				if (!iLocal_144 && !iLocal_149)
				{
					func_267(iLocal_138[(1 - iLocal_30)]);
					iLocal_144 = 1;
				}
			}
			if (uParam0->f_428 == 180)
			{
				if (!iLocal_144 && !iLocal_149)
				{
					if (func_266(iLocal_138[1], iLocal_30 == 0))
					{
						iLocal_144 = 1;
					}
				}
				if (iLocal_30 == 0)
				{
					__LIB_1__.func_840(uParam1, 0);
					func_271(1);
					iLocal_106[2]++;
				}
			}
			if (uParam0->f_428 == 140)
			{
				if (!iLocal_144 && !iLocal_149)
				{
					if (func_264(iLocal_138[iLocal_30], iLocal_30 == 0))
					{
						iLocal_144 = 1;
					}
				}
			}
			if (iLocal_30 == 0)
			{
				if (iLocal_31 < 2)
				{
					if (uParam0->f_422[iLocal_30] <= 170 && !__LIB_0__.func_492(&(uParam1->f_666), 18))
					{
						__LIB_1__.func_881(&(uParam1->f_666), 18, 1);
					}
					if (!__LIB_0__.func_492(&(uParam1->f_666), 19) && __LIB_0__.func_492(&(uParam1->f_666), 21))
					{
						__LIB_1__.func_881(&(uParam1->f_666), 19, 1);
					}
					if (((uParam0->f_422[iLocal_30] < 41 && uParam0->f_422[iLocal_30] > 0) && (uParam0->f_422[iLocal_30] % 2) == 0) || uParam0->f_422[iLocal_30] == 50)
					{
						if (uParam0->f_422[iLocal_30] == 50)
						{
						}
						if (!iLocal_143)
						{
							func_263(iLocal_138[1]);
							iLocal_143 = 1;
						}
						if (!uParam0->f_456)
						{
							uParam0->f_456 = 1;
						}
						if (!__LIB_0__.func_492(&(uParam1->f_666), 6))
						{
							__LIB_1__.func_881(&(uParam1->f_666), 6, 1);
						}
					}
					else if (uParam0->f_456)
					{
						uParam0->f_456 = 0;
					}
				}
			}
			if (iLocal_30 == 0 && iLocal_31 < 2)
			{
				__LIB_1__.func_841("DARTS_REMAIN", (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[iLocal_30], 7500, 0);
			}
			else if (iLocal_30 == 1 && iLocal_31 == 2)
			{
			}
			else if (uParam0->f_1 != 6)
			{
				func_329(&(uParam0->f_1));
			}
			uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_25 = 1;
			iLocal_31++;
			SYSTEM::SETTIMERA(0);
			if (uParam0->f_1 != 6)
			{
				if (uParam0->f_456 && uParam0->f_248 == 1)
				{
					uParam0->f_1 = 0;
				}
				else
				{
					uParam0->f_1 = 2;
				}
			}
			if (iLocal_31 == 3)
			{
				iLocal_31 = 2;
				uParam0->f_1 = 5;
			}
			if (iLocal_30 == 0)
			{
				uParam0->f_435 = 0;
			}
			__LIB_1__.func_881(&(uParam1->f_666), 3, 0);
			__LIB_1__.func_881(&(uParam1->f_666), 2, 0);
			__LIB_1__.func_881(&(uParam1->f_666), 4, 0);
		}
	}
}

void func_263(int iParam0)//Position - 0x17213
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_4(iParam0, "DARTS_1_DART_AWAY", 0, 4);
	}
}

int func_264(int iParam0, bool bParam1)//Position - 0x17231
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 75)
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_11__.func_91()))
		{
			if (bParam1)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(__LIB_11__.func_91(), "DARTS_140", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (__LIB_0__.func_502())
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_140", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_266(int iParam0, bool bParam1)//Position - 0x172CE
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 75)
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_11__.func_91()))
		{
			if (bParam1)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(__LIB_11__.func_91(), "DARTS_180", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (__LIB_0__.func_502())
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_180", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_267(int iParam0)//Position - 0x1734D
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 75)
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar1 = 1;
		}
		if (!PED::IS_PED_INJURED(iParam0))
		{
			func_4(iParam0, "DARTS_MISS_BOARD", iVar1, 4);
		}
		return 1;
	}
	return 0;
}

int func_268(int iParam0)//Position - 0x17390
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 100)
	{
		func_4(iParam0, "DARTS_BULLSEYE", 0, 4);
		return 1;
	}
	return 0;
}

int func_270(int iParam0)//Position - 0x173D1
{
	int iVar0;
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		iVar0 = 1;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_4(iParam0, "DARTS_BUST", iVar0, 4);
	}
	return 1;
}

void func_271(int iParam0)//Position - 0x173FD
{
	switch (iParam0)
	{
		case 0:
			Global_113386.f_18970++;
			__LIB_0__.func_371("DARTS_STAT_NUM_BULLSEYES", Global_113386.f_18970);
			break;
		case 1:
			Global_113386.f_18970.f_1++;
			__LIB_0__.func_371("DARTS_STAT_NUM_180S", Global_113386.f_18970.f_1);
			break;
		case 2:
			Global_113386.f_18970.f_2++;
			__LIB_0__.func_371("DARTS_STAT_NUM_WINS", Global_113386.f_18970.f_2);
			break;
		case 3:
			Global_113386.f_18970.f_3++;
			__LIB_0__.func_371("DARTS_STAT_NUM_LOSS", Global_113386.f_18970.f_3);
			break;
		case 4:
			Global_113386.f_18970.f_4++;
			__LIB_0__.func_371("DARTS_STAT_DARTS_THROWN", Global_113386.f_18970.f_4);
			break;
		case 5:
			Global_113386.f_18970.f_5++;
			__LIB_0__.func_371("DARTS_STAT_NUM_GAMES", Global_113386.f_18970.f_5);
			break;
		case 7:
			Global_113386.f_18970.f_7 = (SYSTEM::TO_FLOAT(Global_113386.f_18970.f_2) / SYSTEM::TO_FLOAT(Global_113386.f_18970.f_5));
			break;
		case 8:
			Global_113386.f_18970.f_8 = (SYSTEM::TO_FLOAT(Global_113386.f_18970.f_4) / SYSTEM::TO_FLOAT(Global_113386.f_18970.f_5));
			break;
	}
}

void func_273(var uParam0)//Position - 0x1757C
{
	if (!uParam0->f_460)
	{
		uParam0->f_460 = 1;
	}
	func_271(5);
	HUD::CLEAR_SMALL_PRINTS();
	HUD::CLEAR_HELP(true);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_420(2)))
	{
		AUDIO::STOP_AUDIO_SCENE(func_420(2));
	}
	if (uParam0->f_248 == 1)
	{
		func_260();
	}
	if (iLocal_30 == 0)
	{
		uParam0->f_454 = 1;
		iLocal_153 = 1;
		uParam0->f_446[iLocal_30]++;
		uParam0->f_437[iLocal_30]++;
		func_271(2);
		iLocal_106[8]++;
	}
	else
	{
		uParam0->f_454 = 0;
		uParam0->f_446[iLocal_30]++;
		uParam0->f_437[iLocal_30]++;
		func_271(3);
		iLocal_106[9]++;
	}
	func_271(7);
	__LIB_6__.func_892(&(uParam0->f_254));
	if (func_275(uParam0))
	{
		uParam0->f_449[0] = 0;
		uParam0->f_449[1] = 0;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_443[iLocal_30]++;
		if (!uParam0->f_458)
		{
			if (uParam0->f_454)
			{
				__LIB_32__.func_724(1);
			}
			uParam0->f_458 = 1;
		}
		if (uParam0->f_454)
		{
			iLocal_106[3]++;
			iLocal_171 = 0;
		}
		else
		{
			iLocal_106[5]++;
			iLocal_171 = 3;
		}
		*uParam0 = 12;
	}
	else
	{
		*uParam0 = 11;
	}
	uParam0->f_1 = 2;
	AUDIO::START_AUDIO_SCENE(func_420(3));
	iLocal_150 = 1;
	uParam0->f_428 = 0;
	iLocal_54 = 0;
	uParam0->f_425[0] = 301;
	uParam0->f_425[1] = 301;
}

int func_275(var uParam0)//Position - 0x17798
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__.func_138(uParam0->f_454, 0, 1);
	switch (uParam0->f_452)
	{
		case 1:
			iVar1 = 1;
			break;
		case 3:
			iVar1 = 2;
			break;
		case 5:
			iVar1 = 3;
			break;
	}
	if (uParam0->f_446[iVar0] == iVar1)
	{
		uParam0->f_449[iVar0]++;
		uParam0->f_440[iVar0]++;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_459 = 1;
		if (iVar0 == 0)
		{
			iLocal_106[6]++;
		}
		if (uParam0->f_449[iVar0] == uParam0->f_453)
		{
			uParam0->f_459 = 0;
			return 1;
		}
	}
	return 0;
}

void func_276(var uParam0, var uParam1, bool bParam2)//Position - 0x1785A
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	Var3 = { uParam0->f_8 };
	Var3.f_0 = (Var3.f_0 + 0.0041f);
	Var3.f_2 = (Var3.f_2 + 0.0002f);
	fVar1 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(0f, 1f, Var3.f_0, Var3.f_2);
	fVar0 = __LIB_1__.func_853(Var3);
	uParam0->f_22 = fVar0;
	if (bParam2)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_DART_MASTER", uParam1->f_1, 0, false, 0, false);
	}
	if (fVar0 < 0.009f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, 0, false, 0, false);
		uParam0->f_20 = 50;
	}
	else if (fVar0 < 0.021f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
		uParam0->f_20 = 25;
	}
	else if (fVar0 > 0.3f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_WALL_MASTER", uParam1->f_1, 0, false, 0, false);
		uParam0->f_20 = 0;
	}
	else if (fVar0 >= 0.226f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
		uParam0->f_20 = 0;
	}
	else
	{
		if (fVar0 > 0.1285f && fVar0 < 0.1405f)
		{
			uParam0->f_21 = 3;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, 0, false, 0, false);
		}
		else if (fVar0 > 0.2132f && fVar0 < 0.226f)
		{
			uParam0->f_21 = 2;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, 0, false, 0, false);
		}
		else
		{
			uParam0->f_21 = 1;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
		}
		if (uParam0->f_8 < 0f)
		{
			fVar1 = (360f - fVar1);
		}
		fVar2 = 0f;
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 21)
		{
			if (fVar1 >= (fVar2 - 9f) && fVar1 < (fVar2 + 9f))
			{
				if ((fVar1 <= (fVar2 - 8.1f) && fVar1 >= (fVar2 - 9.9f)) || (fVar1 >= (fVar2 + 8.1f) && fVar1 <= (fVar2 + 9.9f)))
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, 0, false, 0, false);
				}
				iVar5 = (iLocal_33[iVar4] * uParam0->f_21);
				uParam0->f_20 = iVar5;
			}
			fVar2 = (fVar2 + 18f);
			iVar4++;
		}
	}
}

int func_278(var uParam0)//Position - 0x17AA9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_31)
	{
		if (((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 - 0.008f) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 + 0.008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 - 0.008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 + 0.008f))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_279(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x17B6F
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (iLocal_30 == 0 && iParam2 == 1)
	{
		__LIB_18__.func_284("Darts", "Dart_Reticules", &Local_39, 1, 0, 4, 0);
	}
	fVar2 = MISC::GET_FRAME_TIME();
	Var1 = { uParam0->f_5 * Vector(fVar2, fVar2, fVar2) * Vector(8.5f, 8.5f, 8.5f) };
	uParam0->f_2 = { uParam0->f_2 - Var1 };
	if (uParam0->f_2.f_1 > (uParam0->f_8.f_1 - 0.04f))
	{
		uParam0->f_23 = 1;
		uParam0->f_24 = 0;
		Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_11, (uParam0->f_11.f_1 + fLocal_34), uParam0->f_11.f_2) };
		ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, true, false, false, true);
		return 1;
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_34), uParam0->f_2.f_2) };
	ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, true, false, false, true);
	uParam0->f_17.f_1 = (uParam0->f_17.f_1 + (1000f * fVar2));
	ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_17, 0, true);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (bParam3)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_292(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x17EBA
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	if (*uParam3 == 50)
	{
		fVar3 = 0f;
		fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else if (*uParam3 == 25)
	{
		fVar3 = 0.14f;
		fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else
	{
		if (uParam3->f_1 == 3)
		{
			fVar3 = 0.1345f;
		}
		else if (uParam3->f_1 == 2)
		{
			fVar3 = 0.218f;
		}
		else
		{
			fVar3 = 0.18f;
		}
		fVar9 = 0f;
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < 21)
		{
			if (*uParam3 == iLocal_33[iVar5])
			{
				fVar4 = fVar9;
			}
			fVar9 = (fVar9 + 18f);
			iVar5++;
		}
	}
	if (!bParam4 && uParam3->f_3 < 30)
	{
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(__LIB_1__.func_871(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-35f, 35f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-80f, 80f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-60f, 60f);
		}
		else
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-200f, -60f);
			}
			else
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(60f, 200f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar4 = (fVar4 + fVar0);
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(__LIB_1__.func_871(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.25f, 0.25f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.07f, 0.07f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.15f, 0.15f);
		}
		else
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, -0.3f);
			}
			else
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 1f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar3 = (fVar3 + fVar0);
	}
	uParam0->f_8 = (SYSTEM::SIN(fVar4) * fVar3);
	uParam0->f_8.f_1 = -0.23f;
	uParam0->f_8.f_2 = (SYSTEM::COS(fVar4) * fVar3);
	uParam0->f_8 = (uParam0->f_8 - 0.0035f);
	uParam0->f_8.f_2 = (uParam0->f_8.f_2 - 0.0002f);
	if (*uParam2 == 6)
	{
		func_293(uParam0);
	}
	else
	{
		uParam0->f_23 = 0;
		uParam0->f_24 = 1;
		func_293(uParam0);
		*uParam0 = OBJECT::CREATE_OBJECT(uParam0->f_1, Local_40, false, false, false);
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
		Var7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, Local_41) };
		Var8 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_34), uParam0->f_8.f_2) };
		fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D((Var7.f_0 - Var8.f_0), (Var7.f_1 - Var8.f_1));
		fVar2 = (fVar2 - 180f);
		uParam0->f_17 = { 90f, fVar1, fVar2 };
		ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_17, 0, true);
		uParam0->f_2 = { Local_41 };
		*uParam2 = 3;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, false, 0);
	}
}

void func_293(var uParam0)//Position - 0x18214
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	fVar4 = 0.08f;
	uParam0->f_8.f_1 = -0.213f;
	Var0 = { Local_41 - uParam0->f_8 };
	fVar1 = SYSTEM::VMAG(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar1, fVar1, fVar1) };
	fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_17.f_2 = (fVar2 - 180f);
	fVar3 = (MISC::TAN(uParam0->f_17.f_2) * fVar4);
	uParam0->f_11 = { uParam0->f_8 };
	uParam0->f_11 = (uParam0->f_11 + fVar3);
	Var0 = { Local_41 - uParam0->f_11 };
	fVar1 = SYSTEM::VMAG(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar1, fVar1, fVar1) };
}

void func_295(var uParam0, var uParam1)//Position - 0x182F4
{
	int iVar0;
	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = ((*uParam0)[1] - (*uParam0)[0]);
	uParam1->f_3++;
	if ((*uParam0)[iLocal_30] > 121)
	{
		*uParam1 = 20;
		uParam1->f_1 = 3;
	}
	else if ((*uParam0)[iLocal_30] > 60)
	{
		if (((*uParam0)[iLocal_30] % 2) == 1)
		{
			if (__LIB_0__.func_502())
			{
				*uParam1 = 19;
			}
			else
			{
				*uParam1 = 17;
			}
			uParam1->f_1 = 3;
		}
		else
		{
			*uParam1 = 20;
			uParam1->f_1 = 3;
		}
	}
	else if ((*uParam0)[iLocal_30] < 61)
	{
		if ((*uParam0)[iLocal_30] == 50)
		{
			*uParam1 = 50;
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_30] > 52)
		{
			*uParam1 = ((*uParam0)[iLocal_30] - 40);
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_30] > 40)
		{
			*uParam1 = ((*uParam0)[iLocal_30] - 32);
			uParam1->f_1 = 1;
		}
		else if (((*uParam0)[iLocal_30] % 2) == 0)
		{
			iVar0 = 1;
			iVar0 = 0;
			while (iVar0 < 20)
			{
				*uParam1 = ((*uParam0)[iLocal_30] / 2);
				uParam1->f_1 = 2;
				iVar0++;
			}
		}
		else
		{
			iVar0 = 32;
			while (*uParam1 == 0 && iVar0 > 1)
			{
				if ((*uParam0)[iLocal_30] > iVar0)
				{
					*uParam1 = ((*uParam0)[iLocal_30] - iVar0);
					uParam1->f_1 = 1;
				}
				iVar0 = (iVar0 / 2);
			}
		}
	}
}

int func_296(int iParam0)//Position - 0x18446
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 33)
	{
		func_4(iParam0, "DARTS_BORED", 0, 4);
		return 1;
	}
	return 0;
}

int func_299(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x184AC
{
	float fVar0;
	int iVar1;
	switch (iParam6)
	{
		case 0:
			if (iLocal_52)
			{
				if (SYSTEM::TIMERB() > 50)
				{
					iLocal_53 = 0;
					iLocal_54 = 0;
					iLocal_56 = 0;
					if (func_308(uParam0, uParam1, 0))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, false, 0);
						iLocal_52 = 0;
						return 1;
					}
				}
			}
			else if (!bParam3)
			{
				if (!(PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/) && iLocal_56) && !bParam4)
				{
					iLocal_53 = 1;
					iLocal_54 = 1;
					if (!iLocal_55)
					{
						func_307(uParam0, *uParam2);
						iLocal_55 = 1;
					}
					else
					{
						if (!bParam5)
						{
							func_306();
						}
						func_305(uParam0, iParam6);
						func_304(uParam0, uParam1, bParam3, 0);
					}
				}
				else
				{
					if (bParam4)
					{
						fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.02f, 0.1f);
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8 + fVar0) < 0.33f)
							{
								uParam0->f_8 = (uParam0->f_8 + fVar0);
							}
							else
							{
								uParam0->f_8 = (uParam0->f_8 - fVar0);
							}
						}
						else if ((uParam0->f_8 - fVar0) > -0.33f)
						{
							uParam0->f_8 = (uParam0->f_8 - fVar0);
						}
						else
						{
							uParam0->f_8 = (uParam0->f_8 + fVar0);
						}
						fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.02f, 0.1f);
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8.f_2 + fVar0) < 0.29f)
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
							}
							else
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
							}
						}
						else if ((uParam0->f_8.f_2 - fVar0) > -0.29f)
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
						}
						else
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
						}
						uParam0->f_2 = { Local_41 };
						iLocal_53 = 1;
						iLocal_54 = 1;
					}
					if (iLocal_53 && iLocal_54)
					{
						if (!iLocal_52)
						{
							HUD::CLEAR_PRINTS();
							iLocal_52 = 1;
							SYSTEM::SETTIMERB(0);
						}
					}
				}
			}
			break;
		case 1:
			if (iLocal_52)
			{
				__LIB_18__.func_284("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
				if (SYSTEM::TIMERB() > 25)
				{
					if (func_308(uParam0, uParam1, 1))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, false, 0);
						iLocal_52 = 0;
						return 1;
					}
				}
			}
			else if (!func_300(uParam0))
			{
				if (!iLocal_55)
				{
					func_307(uParam0, *uParam2);
				}
				else
				{
					func_306();
					func_305(uParam0, iParam6);
					func_304(uParam0, uParam1, bParam3, 0);
				}
			}
			else if (!iLocal_52)
			{
				iLocal_52 = 1;
				SYSTEM::SETTIMERB(0);
			}
			break;
	}
	return 0;
}

int func_300(var uParam0)//Position - 0x18721
{
	int iVar0;
	float fVar1;
	float fVar2;
	fVar1 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/);
	fVar2 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/);
	iLocal_91 = SYSTEM::ROUND(fVar2);
	switch (iLocal_90)
	{
		case 0:
			if (iLocal_91 > 120)
			{
				iLocal_92 = MISC::GET_GAME_TIMER();
				iLocal_90 = 1;
			}
			if (iLocal_91 < -100)
			{
				iLocal_96 = SYSTEM::ROUND(fVar1);
			}
			break;
		case 1:
			if (iLocal_91 > 120)
			{
				iLocal_92 = MISC::GET_GAME_TIMER();
			}
			else if ((iLocal_91 < 120 && iLocal_91 > -120) && (MISC::GET_GAME_TIMER() - iLocal_92) > 500)
			{
				iLocal_90 = 0;
			}
			else if (iLocal_91 < -100)
			{
				iLocal_93 = MISC::GET_GAME_TIMER();
				if ((iLocal_93 - iLocal_92) < 500)
				{
					iLocal_96 = SYSTEM::ROUND(fVar1);
					iLocal_94 = (iLocal_93 - iLocal_92);
					iLocal_90 = 2;
				}
			}
			break;
		case 2:
			if (iLocal_94 > iLocal_95)
			{
				if (iLocal_94 > 100 && iLocal_94 < 150)
				{
					fLocal_99 = 0.066477f;
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_99);
				}
				else
				{
					fLocal_98 = (SYSTEM::TO_FLOAT(iLocal_95) / SYSTEM::TO_FLOAT(iLocal_94));
					fLocal_99 = ((1f - fLocal_98) * fLocal_102);
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_99);
				}
			}
			else
			{
				fLocal_99 = 0f;
			}
			if (iLocal_96 > 7)
			{
				fLocal_100 = (SYSTEM::TO_FLOAT(iLocal_96) / fLocal_105);
				fLocal_101 = (fLocal_103 * fLocal_100);
				uParam0->f_8 = (uParam0->f_8 + fLocal_101);
			}
			else if (iLocal_96 < -7)
			{
				fLocal_100 = (SYSTEM::TO_FLOAT(iLocal_96) / fLocal_104);
				fLocal_101 = (fLocal_103 * fLocal_100);
				uParam0->f_8 = (uParam0->f_8 - fLocal_101);
			}
			else
			{
				fLocal_101 = 0f;
			}
			if (fLocal_99 < 0.066477f && fLocal_101 == 0f)
			{
				func_303();
			}
			else if (fLocal_99 <= 0.066477f && fLocal_101 < 0.06f)
			{
				func_302();
			}
			else
			{
				func_301();
			}
			iVar0 = 1;
			iLocal_90 = 0;
			break;
	}
	return iVar0;
}

void func_301()//Position - 0x188DF
{
	Local_39.f_4 = 210;
	Local_39.f_5 = 23;
	Local_39.f_6 = 19;
}

void func_302()//Position - 0x188F9
{
	Local_39.f_4 = 183;
	Local_39.f_5 = 137;
	Local_39.f_6 = 0;
}

void func_303()//Position - 0x18912
{
	Local_39.f_4 = 16;
	Local_39.f_5 = 184;
	Local_39.f_6 = 10;
}

void func_304(var uParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x1892C
{
	struct<3> Var0;
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_34), uParam0->f_14.f_2) };
	if (iParam3 == 1)
	{
		Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_34), uParam0->f_14.f_2) };
	}
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &Local_38, &(Local_38.f_1));
	if ((MISC::GET_GAME_TIMER() % 1000) < 50)
	{
	}
	if (!bParam2)
	{
		if (bLocal_49)
		{
			__LIB_18__.func_284("Darts", "Dart_Reticules_Zoomed", &Local_38, 1, 0, 4, 0);
		}
		else
		{
			__LIB_18__.func_284("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
		}
		if (!iLocal_56)
		{
			iLocal_56 = 1;
		}
	}
}

void func_305(var uParam0, int iParam1)//Position - 0x189DB
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	fVar0 = 0.033367f;
	bVar7 = false;
	fVar3 = PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
	fVar4 = PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
	fVar5 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/);
	fVar6 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (MISC::ABSF(fVar5) > MISC::ABSF(fVar3) || MISC::ABSF(fVar6) > MISC::ABSF(fVar4))
		{
			fVar3 = fVar5;
			fVar4 = fVar6;
			bVar7 = false;
		}
		else
		{
			if (PAD::IS_MOUSE_LOOK_INVERTED())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (PAD::IS_LOOK_INVERTED())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 227 /*INPUT_SCRIPT_RB*/))
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.06f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.06f));
			}
			else
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.03f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.03f));
			}
			uParam0->f_8 = __LIB_0__.func_301(uParam0->f_8, -0.33f, 0.33f);
			uParam0->f_8.f_2 = __LIB_0__.func_301(uParam0->f_8.f_2, -0.29f, 0.29f);
			bVar7 = true;
		}
	}
	if (!bVar7)
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			if (fVar5 != 0f || fVar6 != 0f)
			{
				fVar3 = fVar5;
				fVar4 = fVar6;
			}
		}
		if (fVar3 > 0f)
		{
			if ((uParam0->f_8 + (fLocal_47 * fVar0)) < 0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 + (fLocal_47 * fVar0));
			}
		}
		else if (fVar3 < 0f)
		{
			if ((uParam0->f_8 - (fLocal_47 * fVar0)) > -0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 - (fLocal_47 * fVar0));
			}
		}
		if (fVar4 > 0f)
		{
			if ((uParam0->f_8.f_2 - (fLocal_47 * fVar0)) > -0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fLocal_47 * fVar0));
			}
		}
		else if (fVar4 < 0f)
		{
			if ((uParam0->f_8.f_2 + (fLocal_47 * fVar0)) < 0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fLocal_47 * fVar0));
			}
		}
	}
	uParam0->f_14 = { uParam0->f_8 };
	if (iParam1 == 0)
	{
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_44), (0f + fLocal_44));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_43), (0f + fLocal_43));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_44), (0f + fLocal_44));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_43), (0f + fLocal_43));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.29f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.29f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
	if (iParam1 == 1)
	{
		fLocal_47 = 0.5f;
		if (iLocal_90 == 1)
		{
			fVar8 = 0.06f;
			fVar9 = 0.08f;
		}
		else
		{
			fVar8 = 0.02f;
			fVar9 = 0.03f;
		}
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar9), (0f + fVar9));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar9), (0f + fVar9));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
}

void func_306()//Position - 0x18DCD
{
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 227 /*INPUT_SCRIPT_RB*/))
	{
		fLocal_47 = 0.3f;
	}
	else
	{
		fLocal_47 = 0.1f;
	}
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/))
	{
		if (bLocal_49)
		{
			if (SYSTEM::TIMERA() > iLocal_97)
			{
				fLocal_43 = fLocal_45;
				fLocal_44 = fLocal_46;
				fLocal_47 = 0.1f;
				bLocal_49 = false;
			}
		}
		else if (iLocal_48 < 1)
		{
			fLocal_43 = 0.03f;
			fLocal_44 = 0.05f;
			fLocal_47 = 0.1f;
			SYSTEM::SETTIMERA(0);
			bLocal_49 = true;
			iLocal_48++;
		}
		else if ((((((!__LIB_0__.func_1("DARTS_FST_HLP") && !__LIB_0__.func_1("DARTS_AIM_HLP")) && !__LIB_0__.func_1("DARTS_CLOCK")) && !__LIB_0__.func_1("DARTS_STD_HLP")) && !__LIB_0__.func_1("DARTS_INSTR_W")) && !__LIB_0__.func_1("DARTS_INSTR_B")) && !iLocal_50)
		{
			iLocal_50 = 1;
			if (!BitTest(Global_113347, 1))
			{
				__LIB_0__.func_151("DARTS_SHT_USE", -1);
				MISC::SET_BIT(&Global_113347, 1);
			}
		}
	}
	else if (bLocal_49)
	{
		fLocal_43 = fLocal_45;
		fLocal_44 = fLocal_46;
		fLocal_47 = 0.1f;
		bLocal_49 = false;
	}
}

void func_307(var uParam0, struct<4> Param1, var uParam2, var uParam3)//Position - 0x18EDC
{
	struct<3> Var0;
	Var0 = { 0f, 0f, 0f };
	Var0.f_0 = (Var0.f_0 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f));
	Var0.f_2 = (Var0.f_2 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f));
	uParam0->f_8 = { Param1.f_3 + Var0 };
	uParam0->f_2 = { Local_41 };
}

int func_308(var uParam0, var uParam1, bool bParam2)//Position - 0x18F30
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_COORDS(*uParam0, Local_40, true, false, false, true);
	}
	else
	{
		*uParam0 = OBJECT::CREATE_OBJECT(uParam0->f_1, Local_40, false, false, false);
	}
	bLocal_49 = false;
	fLocal_47 = 0.1f;
	fLocal_43 = fLocal_45;
	fLocal_44 = fLocal_46;
	uParam0->f_23 = 0;
	uParam0->f_24 = 1;
	func_293(uParam0);
	fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
	Var1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, Local_41) };
	Var2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, (uParam0->f_14 + 0.0035f), (uParam0->f_14.f_1 + fLocal_34), uParam0->f_14.f_2) };
	fVar5 = MISC::GET_HEADING_FROM_VECTOR_2D((Var1.f_0 - Var2.f_0), (Var1.f_1 - Var2.f_1));
	fVar5 = (fVar5 - 180f);
	fVar3 = 90f;
	uParam0->f_17 = { fVar3, fVar4, fVar5 };
	ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_17, 0, true);
	iLocal_53 = 0;
	iLocal_55 = 0;
	if (bParam2)
	{
		__LIB_18__.func_284("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_34), uParam0->f_8.f_2) };
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &Local_39, &(Local_39.f_1));
	return 1;
}

void func_310(int iParam0, int iParam1)//Position - 0x1907A
{
	if (iParam0 == 0)
	{
		if (!BitTest(Global_113347, 9))
		{
			if ((!__LIB_0__.func_1("DARTS_SHT_USE") && !__LIB_0__.func_1("DARTS_INSTR_W")) && !__LIB_0__.func_1("DARTS_INSTR_B"))
			{
				__LIB_0__.func_151("DARTS_AIM_HLP", -1);
				MISC::SET_BIT(&Global_113347, 9);
			}
		}
		else if (iParam1 && !BitTest(Global_113347, 7))
		{
			if ((!__LIB_0__.func_1("DARTS_AIM_HLP") && !__LIB_0__.func_1("DARTS_INSTR_W")) && !__LIB_0__.func_1("DARTS_INSTR_B"))
			{
				__LIB_0__.func_151("DARTS_CLOCK", -1);
				MISC::SET_BIT(&Global_113347, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!BitTest(Global_113347, 8))
		{
			if ((!__LIB_0__.func_1("DARTS_SHT_USE") && !__LIB_0__.func_1("DARTS_INSTR_W")) && !__LIB_0__.func_1("DARTS_INSTR_B"))
			{
				__LIB_0__.func_151("DARTS_STD_HLP", -1);
				MISC::SET_BIT(&Global_113347, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!iLocal_51 && !__LIB_0__.func_1("DARTS_SHT_USE")) && !__LIB_0__.func_1("DARTS_INSTR_W")) && !__LIB_0__.func_1("DARTS_INSTR_B"))
		{
			if (!BitTest(Global_113347, 2))
			{
				__LIB_0__.func_151("DARTS_FST_HLP", -1);
				MISC::SET_BIT(&Global_113347, 2);
			}
			iLocal_51 = 1;
		}
	}
}

int func_311(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x191C3
{
	struct<3> Var0;
	switch (*uParam2)
	{
		case 0:
			Var0 = { func_314(iParam0) };
			*uParam3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, Var0) };
			func_313(*uParam3);
			SYSTEM::SETTIMERB(0);
			*uParam2 = 1;
			break;
		case 1:
			if (SYSTEM::TIMERB() > 3000 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
			{
				func_312();
				*uParam2 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_312()//Position - 0x19234
{
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_75, iLocal_87, 2000, 1, 1);
	CAM::DESTROY_CAM(iLocal_87, false);
}

void func_313(struct<3> Param0)//Position - 0x19250
{
	struct<3> Var0;
	Var0 = { -5.5606f, -0.0106f, -131.6781f };
	iLocal_87 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Param0, Var0, 65f, false, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_87, iLocal_75, 2000, 1, 1);
}

Vector3 func_314(int iParam0)//Position - 0x19292
{
	float fVar0;
	struct<3> Var1;
	if (iParam0 == 50)
	{
		Var1 = { 0f, -0.5f, 0f };
	}
	else
	{
		fVar0 = func_317(iParam0);
		Var1.f_1 = -0.5f;
		Var1.f_0 = func_316(fVar0);
		Var1.f_2 = func_315(fVar0);
	}
	return Var1;
}

float func_315(float fParam0)//Position - 0x192D6
{
	float fVar0;
	float fVar1;
	fVar0 = 0.218f;
	fVar1 = (SYSTEM::COS(fParam0) * fVar0);
	return fVar1;
}

float func_316(float fParam0)//Position - 0x192F2
{
	float fVar0;
	float fVar1;
	fVar0 = 0.218f;
	fVar1 = (SYSTEM::SIN(fParam0) * fVar0);
	return fVar1;
}

var func_317(int iParam0)//Position - 0x1930E
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	iVar1 = (iParam0 / 2);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar1 == iLocal_33[iVar0])
		{
			uVar3 = fVar2;
		}
		fVar2 = (fVar2 + 18f);
		iVar0++;
	}
	return uVar3;
}

int func_318(var uParam0)//Position - 0x1934A
{
	switch (*uParam0)
	{
		case 0:
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 228 /*INPUT_SCRIPT_LT*/))
			{
				func_325(1);
				*uParam0 = 1;
			}
			else
			{
				return 0;
			}
			break;
		case 1:
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 228 /*INPUT_SCRIPT_LT*/))
			{
				if (!CAM::IS_CAM_INTERPOLATING(iLocal_84))
				{
					func_323();
					__LIB_4__.func_612(&iLocal_176, Local_207, Local_208, 30f, 10, 10, 3, 15f, 0, 0, -1f, 1);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 3;
			}
			break;
		case 2:
			if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 228 /*INPUT_SCRIPT_LT*/))
			{
				*uParam0 = 3;
			}
			else
			{
				__LIB_18__.func_778(&iLocal_176, 1, 1, 0, 0, 1045220557, 0, 1065353216, 0);
			}
			break;
		case 3:
			func_325(0);
			func_505();
			if (CAM::DOES_CAM_EXIST(iLocal_176))
			{
				if (CAM::IS_CAM_ACTIVE(iLocal_176))
				{
					CAM::SET_CAM_ACTIVE(iLocal_176, false);
				}
				CAM::DESTROY_CAM(iLocal_176, false);
			}
			*uParam0 = 0;
			return 0;
			break;
	}
	return 1;
}

void func_323()//Position - 0x19BB2
{
	if (iLocal_136)
	{
		return;
	}
	func_324();
	PAD::INIT_PC_SCRIPTED_CONTROLS("Darts Zoom");
	iLocal_136 = 1;
}

void func_324()//Position - 0x19BD4
{
	if (iLocal_135 || iLocal_136)
	{
		PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
		iLocal_135 = 0;
		iLocal_136 = 0;
	}
}

void func_325(bool bParam0)//Position - 0x19BF7
{
	if (bParam0)
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_84, iLocal_75, 1000, 1, 1);
	}
	else
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_75, iLocal_84, 1000, 1, 1);
	}
}

void func_326(var uParam0)//Position - 0x19C21
{
	if (uParam0->f_679)
	{
		if (uParam0->f_681 == 2)
		{
			uParam0->f_681 = 0;
		}
		uParam0->f_679 = 0;
	}
	switch (uParam0->f_681)
	{
		case 0:
			__LIB_24__.func_969(&(uParam0->f_62), __LIB_1__.func_843(uParam0->f_682), "", 2000, 5, 1);
			uParam0->f_681 = 1;
			break;
		case 1:
			if (!__LIB_24__.func_984(&(uParam0->f_62), 0))
			{
				__LIB_7__.func_41(&(uParam0->f_62));
				uParam0->f_681 = 2;
			}
			break;
		case 2:
			break;
	}
}

void func_329(var uParam0)//Position - 0x19CF0
{
	if (!iLocal_54)
	{
		if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			iLocal_54 = 1;
		}
	}
	if ((iLocal_30 == 1 && iLocal_31 < 3) && *uParam0 != 5)
	{
		if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/)) && iLocal_54)
		{
			*uParam0 = 6;
		}
	}
}

void func_330(var uParam0, int iParam1)//Position - 0x19D48
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (iParam1 == 0)
		{
			if (!__LIB_0__.func_492(&(uParam0->f_666), 15) && !iLocal_48 > 0)
			{
				__LIB_0__.func_924(&(uParam0->f_509), 0, 0, 0, 1);
				__LIB_0__.func_713(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				__LIB_0__.func_713(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				__LIB_1__.func_851(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				__LIB_0__.func_713(&(uParam0->f_509), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				__LIB_0__.func_713(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				__LIB_0__.func_713(&(uParam0->f_509), "IB_ZOOM" /* GXT: Zoom */, 2, 228, 1, 1, 0);
				__LIB_0__.func_923(&(uParam0->f_509), 1);
				__LIB_1__.func_881(&(uParam0->f_666), 8, 0);
				__LIB_1__.func_881(&(uParam0->f_666), 16, 0);
				__LIB_1__.func_881(&(uParam0->f_666), 23, 0);
			}
			else if (iLocal_48 > 0 && !__LIB_0__.func_492(&(uParam0->f_666), 17))
			{
				__LIB_0__.func_924(&(uParam0->f_509), 0, 0, 0, 1);
				__LIB_0__.func_713(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				__LIB_0__.func_713(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				__LIB_1__.func_851(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				__LIB_0__.func_713(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				__LIB_0__.func_713(&(uParam0->f_509), "IB_ZOOM" /* GXT: Zoom */, 2, 228, 1, 1, 0);
				__LIB_0__.func_923(&(uParam0->f_509), 1);
				__LIB_1__.func_881(&(uParam0->f_666), 8, 0);
				__LIB_1__.func_881(&(uParam0->f_666), 16, 0);
				__LIB_1__.func_881(&(uParam0->f_666), 23, 0);
			}
		}
		else if (!__LIB_0__.func_492(&(uParam0->f_666), 16))
		{
			__LIB_0__.func_924(&(uParam0->f_509), 1, 0, 0, 1);
			__LIB_0__.func_713(&(uParam0->f_509), "DARTS_SKIP", 2, 223, 1, 1, 0);
			__LIB_0__.func_713(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
			__LIB_0__.func_923(&(uParam0->f_509), 1);
			__LIB_1__.func_881(&(uParam0->f_666), 16, 1);
			__LIB_1__.func_881(&(uParam0->f_666), 8, 0);
			__LIB_1__.func_881(&(uParam0->f_666), 15, 0);
			__LIB_1__.func_881(&(uParam0->f_666), 17, 0);
			__LIB_1__.func_881(&(uParam0->f_666), 23, 0);
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		__LIB_0__.func_660(__LIB_0__.func_138(__LIB_0__.func_492(&(uParam0->f_666), 16), 1, 2));
		__LIB_7__.func_44(&(uParam0->f_509), 200f, 1, 0, 0, 1065353216);
	}
	else if ((__LIB_0__.func_492(&(uParam0->f_666), 15) || __LIB_0__.func_492(&(uParam0->f_666), 16)) || __LIB_0__.func_492(&(uParam0->f_666), 23))
	{
		__LIB_1__.func_881(&(uParam0->f_666), 15, 0);
		__LIB_1__.func_881(&(uParam0->f_666), 16, 0);
		__LIB_1__.func_881(&(uParam0->f_666), 23, 0);
	}
}

void func_332(var uParam0)//Position - 0x1A0CF
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (!__LIB_0__.func_492(&(uParam0->f_666), 23))
		{
			__LIB_0__.func_924(&(uParam0->f_509), 0, 0, 0, 1);
			__LIB_1__.func_851(&(uParam0->f_509), "IB_MAPMOVE" /* GXT: Move */, 2, 21, 1, 0);
			__LIB_0__.func_713(&(uParam0->f_509), "IB_ZOOM" /* GXT: Zoom */, 2, 39, 1, 1, 0);
			__LIB_0__.func_923(&(uParam0->f_509), 1);
			__LIB_1__.func_881(&(uParam0->f_666), 23, 1);
			__LIB_1__.func_881(&(uParam0->f_666), 8, 0);
			__LIB_1__.func_881(&(uParam0->f_666), 16, 0);
			__LIB_1__.func_881(&(uParam0->f_666), 15, 0);
			__LIB_1__.func_881(&(uParam0->f_666), 17, 0);
		}
		__LIB_7__.func_44(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
	}
	else if ((__LIB_0__.func_492(&(uParam0->f_666), 15) || __LIB_0__.func_492(&(uParam0->f_666), 16)) || __LIB_0__.func_492(&(uParam0->f_666), 23))
	{
		__LIB_1__.func_881(&(uParam0->f_666), 15, 0);
		__LIB_1__.func_881(&(uParam0->f_666), 16, 0);
		__LIB_1__.func_881(&(uParam0->f_666), 23, 0);
		__LIB_1__.func_881(&(uParam0->f_666), 17, 0);
	}
}

void func_333(var uParam0)//Position - 0x1A1E1
{
	bool bVar0;
	bVar0 = false;
	if (!iLocal_54)
	{
		if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			iLocal_54 = 1;
		}
		else
		{
			iLocal_54 = 0;
		}
	}
	if (*uParam0 != 13)
	{
		if (bVar0)
		{
			if (iLocal_54 && iLocal_53 == 0)
			{
				iLocal_54 = 0;
				bVar0 = false;
				bLocal_147 = false;
				HUD::CLEAR_HELP(true);
			}
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/))
		{
			if (!bLocal_147)
			{
				*uParam0 = 14;
				bLocal_147 = true;
				HUD::CLEAR_HELP(true);
			}
		}
		else if (__LIB_0__.func_1("DARTS_QUIT"))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
			bLocal_147 = false;
		}
	}
}

void func_334(int iParam0)//Position - 0x1A284
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_4(iParam0, "DARTS_BOAST", 0, 4);
	}
}

float func_335(int iParam0)//Position - 0x1A2A2
{
	if (iParam0 < 10)
	{
		return 0.107f;
	}
	if (iParam0 < 25)
	{
		return 0.096f;
	}
	if (iParam0 < 50)
	{
		return 0.085f;
	}
	if (iParam0 < 70)
	{
		return 0.075f;
	}
	return 0.064f;
}

float func_336(int iParam0)//Position - 0x1A2F7
{
	if (iParam0 < 10)
	{
		return 0.08f;
	}
	if (iParam0 < 25)
	{
		return 0.072f;
	}
	if (iParam0 < 50)
	{
		return 0.064f;
	}
	if (iParam0 < 70)
	{
		return 0.056f;
	}
	return 0.048f;
}

int func_338(int iParam0, var uParam1)//Position - 0x1A36C
{
	if (iParam0 >= 10)
	{
		if (!BitTest(Global_113386.f_18970.f_6, 12))
		{
			*uParam1 = 12;
			return 1;
		}
	}
	return 0;
}

int func_339(int iParam0, var uParam1, var uParam2)//Position - 0x1A395
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iParam0->f_422[iVar0] = 301;
		iParam0->f_425[iVar0] = 301;
		iVar0++;
	}
	iParam0->f_454 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			__LIB_1__.func_852(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		func_249(uParam1, iVar0);
		func_255(uParam1, iVar0, 301);
		iVar0++;
	}
	iLocal_30 = 0;
	iLocal_31 = 0;
	iParam0->f_428 = 0;
	iParam0->f_249.f_3 = 0;
	iLocal_163 = 0;
	iParam0->f_436 = 0;
	iLocal_48 = 0;
	iLocal_140 = 1;
	iLocal_141 = 0;
	iLocal_143 = 0;
	iLocal_50 = 0;
	iParam0->f_458 = 0;
	iParam0->f_456 = 0;
	iLocal_149 = 0;
	__LIB_1__.func_881(&(uParam2->f_666), 6, 0);
	func_345();
	func_343(uParam2);
	if (iParam0->f_457)
	{
		func_340(iParam0->f_457);
		iParam0->f_457 = 0;
	}
	return 1;
}

void func_340(bool bParam0)//Position - 0x1A481
{
	HUD::DISPLAY_RADAR(false);
	if (CAM::IS_CAM_ACTIVE(iLocal_77))
	{
		CAM::SET_CAM_ACTIVE(iLocal_77, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_81))
	{
		CAM::SET_CAM_ACTIVE(iLocal_81, false);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_342();
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		CAM::DO_SCREEN_FADE_IN(500);
	}
	func_341(bParam0);
}

void func_341(bool bParam0)//Position - 0x1A4D2
{
	if (bParam0)
	{
		CAM::SET_CAM_ACTIVE(iLocal_75, true);
	}
}

void func_342()//Position - 0x1A4E6
{
	CAM::SET_CAM_ACTIVE(iLocal_77, true);
}

void func_343(var uParam0)//Position - 0x1A4F5
{
	func_344();
	uParam0->f_670 = 3;
	__LIB_1__.func_881(&(uParam0->f_666), 15, 0);
	__LIB_1__.func_881(&(uParam0->f_666), 16, 0);
	__LIB_1__.func_881(&(uParam0->f_666), 17, 0);
}

void func_344()//Position - 0x1A52B
{
	int iVar0;
	Local_108.f_66 = -1;
	Local_108.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_108.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_108.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_108.f_9[iVar0 /*7*/].f_5 = 0;
		Local_108.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_108.f_5 = 0;
	Local_108.f_5.f_1 = -1f;
	Local_108.f_5.f_2 = 0;
	Local_108.f_0 = 0;
	Local_108.f_1 = 0;
}

void func_345()//Position - 0x1A59B
{
	SYSTEM::SETTIMERA(0);
	iLocal_54 = 0;
	HUD::CLEAR_SMALL_PRINTS();
}

void func_349(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1A736
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_350(var uParam0, var uParam1, var uParam2)//Position - 0x1A766
{
	char* sVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	if (!__LIB_0__.func_492(&(uParam0->f_666), 7))
	{
		__LIB_7__.func_287(0, 0, 0, 1);
		__LIB_2__.func_158(0, -1, 1);
		if (__LIB_2__.func_157())
		{
			if (Global_4539961 == uParam0->f_660)
			{
				iVar1 = 1;
			}
			else
			{
				uParam0->f_660 = Global_4539961;
				__LIB_2__.func_562(uParam0->f_660, 1, 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				switch (uParam0->f_660)
				{
					case 0:
						sVar0 = "DARTS_LEGD";
						break;
					case 1:
						sVar0 = "DARTS_SETD";
						break;
					case 2:
						sVar0 = "";
						break;
				}
				if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
				{
					__LIB_1__.func_342(sVar0, 0, 0);
				}
			}
			Global_4539962 = MISC::GET_GAME_TIMER() + 300;
		}
		else if (__LIB_6__.func_204() && MISC::GET_GAME_TIMER() > Global_4539962)
		{
			if (Global_4539961 == uParam0->f_660)
			{
				iVar2 = __LIB_3__.func_632(0);
				if (iVar2 == -1 || iVar2 == 1)
				{
					iVar1 = 1;
				}
			}
			Global_4539962 = MISC::GET_GAME_TIMER() + 300;
		}
		if (func_400(&(uParam0->f_639)))
		{
			uParam0->f_660 = (uParam0->f_660 - 1);
			if (uParam0->f_660 < 0)
			{
				uParam0->f_660 = (uParam0->f_661 - 1);
			}
			__LIB_2__.func_562(uParam0->f_660, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				case 2:
					sVar0 = "";
					break;
			}
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				__LIB_1__.func_342(sVar0, 0, 0);
			}
		}
		if (func_399(&(uParam0->f_642)))
		{
			uParam0->f_660++;
			if (uParam0->f_660 > (uParam0->f_661 - 1))
			{
				uParam0->f_660 = 0;
			}
			__LIB_2__.func_562(uParam0->f_660, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				case 2:
					sVar0 = "";
					break;
			}
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				__LIB_1__.func_342(sVar0, 0, 0);
			}
		}
		if (func_398(&(uParam0->f_633)) || func_397(&(uParam0->f_633), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662 = (uParam0->f_662 - 1);
				if (uParam0->f_662 < 0)
				{
					uParam0->f_662 = (uParam0->f_663 - 1);
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664 = (uParam0->f_664 - 1);
				if (uParam0->f_664 < 0)
				{
					uParam0->f_664 = (uParam0->f_665 - 1);
				}
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_383(uParam0);
		}
		if (func_382(&(uParam0->f_636)) || func_380(&(uParam0->f_636), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662++;
				if (uParam0->f_662 > (uParam0->f_663 - 1))
				{
					uParam0->f_662 = 0;
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664++;
				if (uParam0->f_664 > (uParam0->f_665 - 1))
				{
					uParam0->f_664 = 0;
				}
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_383(uParam0);
		}
		if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar1 == 1) && uParam0->f_660 == 2)
		{
			*uParam1 = func_379(uParam0->f_662 + 1, 1);
			*uParam2 = func_379(uParam0->f_664 + 1, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			return 1;
		}
		__LIB_25__.func_745(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || __LIB_2__.func_338())
		{
			__LIB_1__.func_193(0, 0);
			__LIB_1__.func_881(&(uParam0->f_666), 8, 0);
			__LIB_1__.func_881(&(uParam0->f_666), 7, 1);
		}
	}
	else
	{
		__LIB_18__.func_296(uParam0);
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			__LIB_0__.func_518(0);
			*uParam1 = -1;
			return 1;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			func_383(uParam0);
			__LIB_1__.func_881(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

int func_379(int iParam0, bool bParam1)//Position - 0x1EF84
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			case 2:
				return 3;
			case 3:
				return 5;
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			case 2:
				return 3;
			case 3:
				return 6;
			case 4:
				return 9;
			case 5:
				return 11;
			case 6:
				return 13;
			case 7:
				return 15;
			}
		default:
	}
	return 0;
}

int func_380(int* iParam0, int iParam1, int iParam2)//Position - 0x1F00B
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (__LIB_3__.func_632(0) == 1 && Global_4539961 == iParam1)
	{
		if (!__LIB_0__.func_736(iParam0))
		{
			__LIB_18__.func_276(iParam0);
			return 1;
		}
		else if (__LIB_7__.func_78(iParam0) > 0.25f)
		{
			__LIB_6__.func_892(iParam0);
			return 1;
		}
	}
	else if (__LIB_0__.func_736(iParam0))
	{
		__LIB_0__.func_735(iParam0);
	}
	return 0;
}

int func_382(int* iParam0)//Position - 0x1F09B
{
	float fVar0;
	fVar0 = 0f;
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
	}
	if ((fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
	{
		if (!__LIB_0__.func_736(iParam0))
		{
			__LIB_18__.func_276(iParam0);
			return 1;
		}
		else if (__LIB_7__.func_78(iParam0) > 0.25f)
		{
			__LIB_6__.func_892(iParam0);
			return 1;
		}
	}
	else if (__LIB_0__.func_736(iParam0))
	{
		__LIB_0__.func_735(iParam0);
	}
	return 0;
}

void func_383(var uParam0)//Position - 0x1F120
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	__LIB_1__.func_193(0, 0);
	HUD::GET_HUD_COLOUR(141, &uVar0, &uVar1, &uVar2, &uVar3);
	__LIB_29__.func_185(uVar0, uVar1, uVar2, uVar3, 1);
	__LIB_1__.func_318(1, 2, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_3__.func_630(0, 1, 0, 0, 0);
	__LIB_1__.func_319("DARTS_TITLE");
	__LIB_7__.func_286(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	__LIB_18__.func_477(0, "DARTS_LEGS", 0, 1, 0, 0, 0);
	func_387(0, func_379(uParam0->f_662 + 1, 1), 0);
	__LIB_18__.func_477(1, "DARTS_SETS", 0, 1, 0, 0, 0);
	func_387(1, func_379(uParam0->f_664 + 1, 0), 0);
	__LIB_11__.func_652(2, 141, 141, 1);
	__LIB_18__.func_477(2, "DARTS_START", 0, 1, 0, 0, 0);
	__LIB_4__.func_192(0);
	__LIB_2__.func_562(uParam0->f_660, 1, 1);
	if (uParam0->f_660 != 2)
	{
		__LIB_1__.func_342(__LIB_1__.func_6(uParam0->f_660 == 0, "DARTS_LEGD", "DARTS_SETD"), 0, 0);
	}
	__LIB_1__.func_345(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	__LIB_1__.func_345(202, "IB_QUIT" /* GXT: Quit */, -1, 0);
}

void func_387(int iParam0, int iParam1, bool bParam2)//Position - 0x1F30D
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	if (Global_23150.f_5609 > iParam0)
	{
		return;
	}
	if (Global_23150.f_5609 >= 128)
	{
		return;
	}
	if (Global_23150.f_5613 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 < Global_23150.f_6132)
	{
		return;
	}
	if (Global_23150.f_5609 != iParam0)
	{
		Global_23150.f_5609 = iParam0;
		Global_23150.f_5610 = 0;
	}
	iVar0 = Global_23150.f_5447[Global_23150.f_5610];
	if (iVar0 != 2)
	{
		while (Global_23150.f_5610 < 4 && iVar0 != 2)
		{
			Global_23150.f_5610++;
			iVar0 = Global_23150.f_5447[Global_23150.f_5610];
		}
		if (iVar0 != 2)
		{
			return;
		}
	}
	Global_23150.f_4309[Global_23150.f_5613] = iParam1;
	Global_23150.f_5613++;
	fVar1 = func_389("NUMBER", iParam1);
	if (Global_23150.f_5466[Global_23150.f_5610])
	{
		__LIB_7__.func_172(26, 1, 0, &fVar2, &uVar3, 0);
		fVar1 = (fVar1 + (fVar2 * 2f));
	}
	if (fVar1 > Global_23150.f_5459[Global_23150.f_5610])
	{
		Global_23150.f_5459[Global_23150.f_5610] = fVar1;
	}
	if (bParam2)
	{
		fVar4 = func_388("NUMBER", iParam1);
		if (fVar4 > Global_23150.f_6136[iParam0])
		{
			Global_23150.f_6136[iParam0] = fVar4;
		}
	}
	MISC::SET_BIT(&(Global_23150.f_5480[iParam0]), Global_23150.f_5610);
	Global_23150.f_5610++;
	Global_23150.f_6135 = 2;
}

float func_388(char* sParam0, int iParam1)//Position - 0x1F48C
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	if (iParam1 == 0)
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_389(char* sParam0, int iParam1)//Position - 0x1F4AE
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0f;
	}
	__LIB_7__.func_157(1, 1, 0, 0, 0, 0, 0);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

int func_397(int* iParam0, int iParam1, int iParam2)//Position - 0x1F6BE
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (__LIB_3__.func_632(0) == -1 && Global_4539961 == iParam1)
	{
		if (!__LIB_0__.func_736(iParam0))
		{
			__LIB_18__.func_276(iParam0);
			return 1;
		}
		else if (__LIB_7__.func_78(iParam0) > 0.25f)
		{
			__LIB_6__.func_892(iParam0);
			return 1;
		}
	}
	else if (__LIB_0__.func_736(iParam0))
	{
		__LIB_0__.func_735(iParam0);
	}
	return 0;
}

int func_398(int* iParam0)//Position - 0x1F736
{
	float fVar0;
	fVar0 = 0f;
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
	}
	if (fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
	{
		if (!__LIB_0__.func_736(iParam0))
		{
			__LIB_18__.func_276(iParam0);
			return 1;
		}
		else if (__LIB_7__.func_78(iParam0) > 0.25f)
		{
			__LIB_6__.func_892(iParam0);
			return 1;
		}
	}
	else if (__LIB_0__.func_736(iParam0))
	{
		__LIB_0__.func_735(iParam0);
	}
	return 0;
}

int func_399(int* iParam0)//Position - 0x1F7AE
{
	float fVar0;
	fVar0 = 0f;
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
	}
	if (fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
	{
		if (!__LIB_0__.func_736(iParam0))
		{
			__LIB_18__.func_276(iParam0);
			return 1;
		}
		else if (__LIB_7__.func_78(iParam0) > 0.25f)
		{
			__LIB_6__.func_892(iParam0);
			return 1;
		}
	}
	else if (__LIB_0__.func_736(iParam0))
	{
		__LIB_0__.func_735(iParam0);
	}
	return 0;
}

int func_400(int* iParam0)//Position - 0x1F826
{
	float fVar0;
	fVar0 = 0f;
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
	}
	if (fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
	{
		if (!__LIB_0__.func_736(iParam0))
		{
			__LIB_18__.func_276(iParam0);
			return 1;
		}
		else if (__LIB_7__.func_78(iParam0) > 0.25f)
		{
			__LIB_6__.func_892(iParam0);
			return 1;
		}
	}
	else if (__LIB_0__.func_736(iParam0))
	{
		__LIB_0__.func_735(iParam0);
	}
	return 0;
}

void func_411(var uParam0)//Position - 0x1FFF7
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	uParam0->f_660 = 0;
	uParam0->f_661 = 3;
	uParam0->f_662 = 0;
	uParam0->f_663 = 3;
	uParam0->f_664 = 0;
	uParam0->f_665 = 7;
	__LIB_1__.func_193(0, 0);
	HUD::GET_HUD_COLOUR(141, &uVar0, &uVar1, &uVar2, &uVar3);
	__LIB_29__.func_185(uVar0, uVar1, uVar2, uVar3, 1);
	__LIB_1__.func_318(1, 2, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_3__.func_630(0, 1, 0, 0, 0);
	__LIB_1__.func_319("DARTS_TITLE");
	__LIB_7__.func_286(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	__LIB_18__.func_477(0, "DARTS_LEGS", 0, 1, 0, 0, 0);
	func_387(0, 1, 0);
	__LIB_18__.func_477(1, "DARTS_SETS", 0, 1, 0, 0, 0);
	func_387(1, 1, 0);
	__LIB_18__.func_477(2, "DARTS_START", 0, 1, 0, 0, 0);
	__LIB_11__.func_652(2, 141, 141, 1);
	__LIB_4__.func_192(0);
	__LIB_2__.func_562(0, 1, 1);
	__LIB_1__.func_342("DARTS_LEGD", 0, 0);
	__LIB_2__.func_185();
	__LIB_1__.func_345(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	__LIB_1__.func_345(202, "IB_QUIT" /* GXT: Quit */, -1, 0);
}

int func_413(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int* iParam5)//Position - 0x20106
{
	int iVar0;
	int iVar1;
	if ((__LIB_0__.func_404() && MISC::GET_GAME_TIMER() >= iLocal_164 + 1000) && *iParam0 != 8)
	{
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT() && *iParam0 != 8)
	{
		*iParam0 = 8;
	}
	switch (*iParam0)
	{
		case 2:
			switch (iLocal_31)
			{
				case 0:
					if (*uParam3 == 2)
					{
						iLocal_164 = MISC::GET_GAME_TIMER();
						func_421(uParam1->f_1, uParam1->f_4, __LIB_1__.func_874(2), __LIB_1__.func_873(0), 0, 1);
						*uParam2 = 20;
						uParam2->f_1 = 2;
						func_292(uParam4[0 /*26*/], uParam1, uParam3, uParam2, 1);
					}
					if (*uParam3 == 3)
					{
						if (func_279(uParam4[0 /*26*/], uParam1, 0, 0))
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
							iLocal_31++;
							__LIB_6__.func_892(iParam5);
							*uParam3 = 2;
						}
					}
					break;
				case 1:
					if (__LIB_7__.func_42(iParam5) > 1f && !__LIB_0__.func_1("DARTS_DOUBLE_T"))
					{
						__LIB_0__.func_151("DARTS_DOUBLE_T", -1);
					}
					if (__LIB_7__.func_42(iParam5) > 5f)
					{
						__LIB_6__.func_892(iParam5);
						HUD::CLEAR_HELP(true);
						func_415(uParam1->f_1, uParam1->f_4, __LIB_1__.func_874(3), __LIB_1__.func_873(0), 1000);
						iLocal_31 = 0;
						*iParam0 = 3;
					}
					break;
			}
			break;
		case 3:
			switch (iLocal_31)
			{
				case 0:
					if (!CAM::IS_CAM_INTERPOLATING(iLocal_83))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 3;
							func_292(uParam4[1 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_279(uParam4[1 /*26*/], uParam1, 0, 0))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
								iLocal_31++;
								__LIB_6__.func_892(iParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				case 1:
					if (__LIB_7__.func_42(iParam5) > 1f && !__LIB_0__.func_1("DARTS_TRIPLE_T"))
					{
						__LIB_0__.func_151("DARTS_TRIPLE_T", -1);
					}
					if (__LIB_7__.func_42(iParam5) > 5f)
					{
						__LIB_6__.func_892(iParam5);
						HUD::CLEAR_HELP(true);
						func_421(uParam1->f_1, uParam1->f_4, __LIB_1__.func_874(4), __LIB_1__.func_873(0), 1000, 0);
						iLocal_31 = 0;
						*iParam0 = 4;
					}
					break;
			}
			break;
		case 4:
			switch (iLocal_31)
			{
				case 0:
					if (!CAM::IS_CAM_INTERPOLATING(iLocal_82))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 50;
							uParam2->f_1 = 1;
							func_292(uParam4[2 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_279(uParam4[2 /*26*/], uParam1, 0, 0))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
								iLocal_31++;
								__LIB_6__.func_892(iParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				case 1:
					if (__LIB_7__.func_42(iParam5) > 1f && !__LIB_0__.func_1("DARTS_BULL_T"))
					{
						__LIB_0__.func_151("DARTS_BULL_T", -1);
					}
					if (__LIB_7__.func_42(iParam5) > 5f)
					{
						__LIB_6__.func_892(iParam5);
						HUD::CLEAR_HELP(true);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", true);
						func_415(uParam1->f_1, uParam1->f_4, __LIB_1__.func_874(5), __LIB_1__.func_873(1), 1500);
						iLocal_31 = 0;
						*iParam0 = 5;
					}
					break;
			}
			break;
		case 5:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_83) && !__LIB_0__.func_1("DARTS_DBL_WIN"))
			{
				__LIB_0__.func_151("DARTS_DBL_WIN", -1);
			}
			if (__LIB_7__.func_42(iParam5) > 6f)
			{
				__LIB_6__.func_892(iParam5);
				*iParam0 = 6;
			}
			break;
		case 6:
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", true);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_75, iLocal_83, 1500, 1, 1);
			*iParam0 = 7;
			break;
		case 7:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_75))
			{
				iLocal_31 = 0;
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				iVar0 = 0;
				while (iVar0 < 3)
				{
					__LIB_1__.func_869(uParam4[iVar0 /*26*/]);
					iVar0++;
				}
				return 1;
			}
			break;
		case 8:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				iLocal_31 = 0;
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					__LIB_1__.func_869(uParam4[iVar1 /*26*/]);
					iVar1++;
				}
				CAM::SET_CAM_ACTIVE(iLocal_75, true);
				CAM::DO_SCREEN_FADE_IN(500);
				return 1;
			}
			break;
	}
	return 0;
}

void func_415(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, int iParam4)//Position - 0x20562
{
	CAM::STOP_CAM_POINTING(iLocal_83);
	CAM::SET_CAM_FOV(iLocal_83, 35f);
	CAM::SET_CAM_COORD(iLocal_83, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam1, Param2));
	CAM::SET_CAM_ROT(iLocal_83, Vector(fParam1, 0f, 0f) - Param3, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_83, iLocal_82, iParam4, 1, 1);
}

void func_417(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, float fParam7)//Position - 0x2063D
{
	char* sVar0;
	sVar0 = __LIB_30__.func_622(iParam5);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "RESET_MOVIE");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		__LIB_0__.func_478(sParam2);
	}
	if (bParam6)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam6)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam7);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	__LIB_6__.func_892(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
}

void func_419()//Position - 0x20747
{
	CAM::SET_CAM_ACTIVE(iLocal_75, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (CAM::IS_CAM_ACTIVE(iLocal_82))
	{
		CAM::SET_CAM_ACTIVE(iLocal_82, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_77))
	{
		CAM::SET_CAM_ACTIVE(iLocal_77, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_78))
	{
		CAM::SET_CAM_ACTIVE(iLocal_78, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_79))
	{
		CAM::SET_CAM_ACTIVE(iLocal_79, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_80))
	{
		CAM::SET_CAM_ACTIVE(iLocal_80, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_81))
	{
		CAM::SET_CAM_ACTIVE(iLocal_81, false);
	}
}

char* func_420(int iParam0)//Position - 0x207C2
{
	if (iLocal_175 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_BAR";
			case 1:
				return "DARTS_MENU_BAR";
			case 2:
				return "DARTS_START_MATCH_BAR";
			case 3:
				return "DARTS_MATCH_COMPLETE_BAR";
			default:
		}
	}
	else if (iLocal_175 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_ROCK";
			case 1:
				return "DARTS_MENU_ROCK";
			case 2:
				return "DARTS_START_MATCH_ROCK";
			case 3:
				return "DARTS_MATCH_COMPLETE_ROCK";
			}
		default:
	}
	return "";
}

void func_421(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, int iParam4, bool bParam5)//Position - 0x20855
{
	CAM::STOP_CAM_POINTING(iLocal_82);
	CAM::SET_CAM_FOV(iLocal_82, 35f);
	CAM::SET_CAM_COORD(iLocal_82, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam1, Param2));
	CAM::SET_CAM_ROT(iLocal_82, Vector(fParam1, 0f, 0f) - Param3, 2);
	if (bParam5)
	{
		CAM::SET_CAM_ACTIVE(iLocal_82, true);
	}
	else
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_82, iLocal_83, iParam4, 1, 1);
	}
}

int func_425(int iParam0)//Position - 0x20977
{
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_11__.func_91(), false))
	{
		func_4(__LIB_11__.func_91(), "GENERIC_YES", 0, 6);
	}
	else
	{
		func_4(iParam0, "GENERIC_AGREE", 0, 6);
	}
	return 1;
}

int func_438(var uParam0)//Position - 0x20C0A
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!__LIB_2__.func_49(iVar0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), Local_137, false, true, 0))
			{
				VEHICLE::SET_LAST_DRIVEN_VEHICLE(iVar0);
				ENTITY::SET_ENTITY_COLLISION(iVar0, false, false);
				ENTITY::SET_ENTITY_VISIBLE(iVar0, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

void func_440(var uParam0, int iParam1)//Position - 0x20CC0
{
	iParam1++;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_PLAYER_HIGHLIGHT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_444(var uParam0, char* sParam1, char* sParam2)//Position - 0x20DB9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DARTS_PLAYER_NAMES");
	__LIB_0__.func_514(sParam1);
	__LIB_0__.func_514(sParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_445(float fParam0, struct<4> Param1, var uParam2, var uParam3, var* uParam4, var uParam5)//Position - 0x20DDD
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_11__.func_91()) && !PED::IS_PED_INJURED(__LIB_11__.func_91()))
	{
		PED::REMOVE_PED_FROM_GROUP(__LIB_11__.func_91());
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam5->f_5) && !PED::IS_PED_INJURED(uParam5->f_5))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam5->f_5, true, true);
			iLocal_138[1] = uParam5->f_5;
			TASK::CLEAR_PED_TASKS(iLocal_138[1]);
		}
		else if (func_447(uParam4))
		{
			TASK::CLEAR_PED_TASKS(iLocal_138[1]);
		}
		else
		{
			iLocal_138[1] = PED::CREATE_PED(26, iLocal_172, Param1.f_3, fParam0, true, true);
		}
		if (DECORATOR::DECOR_EXIST_ON(iLocal_138[1], "Darts_name"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iLocal_138[1], "Darts_name");
			if (joaat("RAYMOND") == iVar0)
			{
				sLocal_220 = func_451("RAYMOND");
				iLocal_221 = joaat("RAYMOND");
			}
			else if (joaat("JOHAN") == iVar0)
			{
				sLocal_220 = func_451("JOHAN");
				iLocal_221 = joaat("JOHAN");
			}
			else if (joaat("STAN") == iVar0)
			{
				sLocal_220 = func_451("STAN");
				iLocal_221 = joaat("STAN");
			}
			else if (joaat("VINCE") == iVar0)
			{
				sLocal_220 = func_451("VINCE");
				iLocal_221 = joaat("VINCE");
			}
			else if (joaat("KRISTY") == iVar0)
			{
				sLocal_220 = func_451("KRISTY");
				iLocal_221 = joaat("KRISTY");
			}
			else if (joaat("MARLENE") == iVar0)
			{
				sLocal_220 = func_451("MARLENE");
				iLocal_221 = joaat("MARLENE");
			}
			else if (joaat("LORIE") == iVar0)
			{
				sLocal_220 = func_451("LORIE");
				iLocal_221 = joaat("LORIE");
			}
			else if (joaat("SHELLEY") == iVar0)
			{
				sLocal_220 = func_451("SHELLEY");
				iLocal_221 = joaat("SHELLEY");
			}
		}
		DECORATOR::DECOR_SET_INT(iLocal_138[1], "Darts_name", iLocal_221);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iLocal_138[1]);
	func_446(iVar1);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_138[1], iLocal_138[0], 0);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_138[0], iLocal_138[1], 0);
}

void func_446(int iParam0)//Position - 0x20FD6
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iParam0)
	{
		case joaat("A_F_M_Salton_01"):
			switch (iVar0)
			{
				case 0:
					sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_03";
					break;
				case 1:
					sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_02";
					break;
			}
			break;
		case joaat("A_F_O_Salton_01"):
			sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_01";
			break;
		case joaat("A_M_Y_Vinewood_01"):
			sLocal_57 = "G_M_Y_LOST_01_BLACK_FULL_01";
			break;
		case joaat("A_M_Y_Vinewood_03"):
			sLocal_57 = "G_M_Y_LOST_02_LATINO_FULL_01";
			break;
		case joaat("A_M_Y_Vinewood_04"):
			sLocal_57 = "G_M_Y_LOST_01_BLACK_FULL_02";
			break;
		case joaat("A_M_Y_StLat_01"):
			sLocal_57 = "G_M_Y_LOST_02_LATINO_FULL_02";
			break;
		case joaat("A_M_Y_StWhi_02"):
			sLocal_57 = "G_M_Y_LOST_01_WHITE_FULL_01";
			break;
	}
}

int func_447(var* uParam0)//Position - 0x21075
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), uParam0, -1))
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if ((((((ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("A_F_M_Salton_01") || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("A_F_O_Salton_01")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("A_M_Y_Vinewood_01")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("A_M_Y_StLat_01")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("A_M_Y_Vinewood_04")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("A_M_Y_StWhi_02")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("A_M_Y_Vinewood_03"))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam0)[iVar0], true, true);
				iLocal_138[1] = (*uParam0)[iVar0];
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

char* func_451(char* sParam0)//Position - 0x211EC
{
	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 7)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, "MICHAEL"))
		{
			return "??????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "FRANKLIN"))
		{
			return "????????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "TREVOR"))
		{
			return "????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "LAMAR"))
		{
			return "??????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "JIMMY"))
		{
			return "????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "KRISTY"))
		{
			return "????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "MARLENE"))
		{
			return "????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "LORIE"))
		{
			return "????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SHELLEY"))
		{
			return "??????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "RAYMOND"))
		{
			return "??????????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "JOHAN"))
		{
			return "??????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "STAN"))
		{
			return "????????";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "VINCE"))
		{
			return "????????";
		}
	}
	return sParam0;
}

void func_452(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x21326
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		uParam0->f_4 = ENTITY::GET_ENTITY_HEADING(*uParam0);
	}
	if (!bParam3)
	{
		func_454(uParam1, uParam0);
	}
	Local_41 = { 0f, (-2.3685f + fLocal_34), 0.1f };
	Local_41 = { Local_41 + Local_35 };
	Local_40 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_4, Local_41) };
	func_453(uParam2, uParam0);
}

void func_453(var uParam0, var uParam1)//Position - 0x2138E
{
	uParam0->f_3 = { 0f, -0.15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + Local_35 };
	*uParam0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
}

void func_454(var uParam0, var uParam1)//Position - 0x213C9
{
	*uParam0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, -0.4f, (-2.4f + fLocal_34), -1.7272f) };
	uParam0->f_3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, 0.5f, (-2.4f + fLocal_34), -1.7272f) };
}

int func_455(var uParam0, var uParam1)//Position - 0x2141B
{
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\DARTS", false, -1))
	{
		return 0;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FAMILY1_2", false, -1))
	{
		return 0;
	}
	if ((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_28) || !STREAMING::HAS_MODEL_LOADED(iLocal_29)) || !STREAMING::HAS_MODEL_LOADED(iLocal_37)) || !STREAMING::HAS_MODEL_LOADED(iLocal_172)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_645)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_57)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_62)) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(3)) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Darts")) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_222)) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_223)) || !__LIB_7__.func_161(0, -1, 0))
	{
		return 0;
	}
	return 1;
}

void func_458(var uParam0, var uParam1)//Position - 0x21697
{
	STREAMING::REQUEST_MODEL(iLocal_28);
	STREAMING::REQUEST_MODEL(iLocal_29);
	STREAMING::REQUEST_MODEL(iLocal_37);
	STREAMING::REQUEST_MODEL(iLocal_172);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Darts", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("ShopUI_Title_Darts", false);
	STREAMING::REQUEST_ANIM_DICT(sLocal_222);
	STREAMING::REQUEST_ANIM_DICT(sLocal_223);
	*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("darts_scoreboard");
	uParam1->f_645 = __LIB_5__.func_29();
	uParam1->f_57 = __LIB_0__.func_729();
	uParam1->f_62 = __LIB_1__.func_638();
	HUD::REQUEST_ADDITIONAL_TEXT("DARTS", 3);
}

void func_463(int iParam0)//Position - 0x2186B
{
	int iVar0;
	iVar0 = iParam0 + 1;
	Local_38.f_0 = 0.5f;
	Local_38.f_1 = 0.5f;
	if (GRAPHICS::GET_IS_WIDESCREEN())
	{
		Local_38.f_2 = 0.05f;
		Local_38.f_3 = 0.095f;
	}
	else
	{
		Local_38.f_2 = 0.065f;
		Local_38.f_3 = 0.09f;
	}
	Local_38.f_4 = 255;
	Local_38.f_5 = 250;
	Local_38.f_6 = 255;
	Local_38.f_7 = 123;
	if (iVar0 == 1)
	{
		Local_38.f_4 = 255;
		Local_38.f_5 = 255;
		Local_38.f_6 = 255;
	}
	else if (iVar0 == 2)
	{
		Local_38.f_4 = 255;
		Local_38.f_5 = 255;
		Local_38.f_6 = 255;
	}
	Local_38.f_8 = 0f;
	Local_39.f_0 = 0f;
	Local_39.f_1 = 0f;
	Local_39.f_2 = 0.061f;
	Local_39.f_3 = 0.105f;
	Local_39.f_4 = 200;
	Local_39.f_5 = 45;
	Local_39.f_6 = 40;
	Local_39.f_7 = 255;
	Local_39.f_8 = 0f;
}

void func_464(var uParam0, int iParam1)//Position - 0x2193E
{
	if (iParam1 == 0)
	{
		uParam0->f_1 = iLocal_28;
	}
	else
	{
		uParam0->f_1 = iLocal_29;
	}
	uParam0->f_24 = 0;
	uParam0->f_23 = 0;
}

void func_466(struct<3> Param0, float fParam1)//Position - 0x2198E
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	struct<3> Var11;
	float fVar12;
	float fVar13;
	struct<3> Var14;
	struct<3> Var15;
	struct<3> Var16;
	fLocal_89 = GRAPHICS::GET_ASPECT_RATIO(false);
	fVar7 = 30f;
	fVar7 = __LIB_1__.func_879(fLocal_89);
	Var8 = { -0.192784f, -1.73287f, 0.0262985f };
	fVar9 = 1.7939f;
	fVar10 = -1.3346f;
	if (GRAPHICS::GET_IS_WIDESCREEN())
	{
		Var11 = { -0.0974819f, -1.65968f, 0.335098f };
		fVar12 = -1.3023f;
		fVar13 = -12.4139f;
	}
	else
	{
		Var11 = { -0.112635f, -1.86963f, 0.45417f };
		fVar12 = -3.7542f;
		fVar13 = -14.4576f;
	}
	Var14 = { 0.261599f, -0.750354f, -0.392929f };
	Var16 = { 0.281314f, -0.573735f, -0.39603f };
	Var1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam1, Var8) };
	Var3 = { fVar10, 0f, (fParam1 - fVar9) };
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam1, Var11) };
	Var2 = { fVar13, 0f, (fParam1 - fVar12) };
	Var4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam1, Var14) };
	Var5 = { 0.8351f, -0.0048f, (fParam1 - 186.50734f) };
	Var15 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam1, Var16) };
	Var6 = { 0.8351f, -0.0048f, (fParam1 - 186.50734f) };
	iLocal_75 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var0, Var2, fVar7, false, 2);
	iLocal_76 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var1, Var3, fVar7, false, 2);
	iLocal_77 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var4, Var5, 65f, false, 2);
	iLocal_78 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var15, Var6, 65f, false, 2);
	iLocal_79 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 65f, false, 2);
	iLocal_80 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 65f, false, 2);
	iLocal_82 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 65f, false, 2);
	iLocal_83 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 65f, false, 2);
	iLocal_81 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1996.235f, 3048.4558f, 48.0237f, -3.4831f, 0.0223f, 60.6925f, 38.1f, false, 2);
	CAM::SET_CAM_FOV(iLocal_77, 43.35f);
	CAM::SET_CAM_FOV(iLocal_78, 42.35f);
	CAM::SHAKE_CAM(iLocal_77, "HAND_SHAKE", 0.1f);
	CAM::SHAKE_CAM(iLocal_78, "HAND_SHAKE", 0.1f);
}

void func_467(var uParam0, var uParam1)//Position - 0x21BF1
{
	uParam0->f_1 = { *uParam1 };
	uParam0->f_4 = uParam1->f_3;
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_4))
	{
		*uParam0 = uParam1->f_4;
	}
	iLocal_33[0] = 20;
	iLocal_33[10] = 3;
	iLocal_33[1] = 1;
	iLocal_33[11] = 19;
	iLocal_33[2] = 18;
	iLocal_33[12] = 7;
	iLocal_33[3] = 4;
	iLocal_33[13] = 16;
	iLocal_33[4] = 13;
	iLocal_33[14] = 8;
	iLocal_33[5] = 6;
	iLocal_33[15] = 11;
	iLocal_33[6] = 10;
	iLocal_33[16] = 14;
	iLocal_33[7] = 15;
	iLocal_33[17] = 9;
	iLocal_33[8] = 2;
	iLocal_33[18] = 12;
	iLocal_33[9] = 17;
	iLocal_33[19] = 5;
	iLocal_33[20] = 20;
}

void func_475(int iParam0, var uParam1, var uParam2)//Position - 0x21FF4
{
	int iVar0;
	int iVar1;
	HUD::DISPLAY_AREA_NAME(true);
	func_271(8);
	func_324();
	if (bLocal_146)
	{
		__LIB_34__.func_848(&uLocal_162);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			__LIB_1__.func_869(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_28);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_29);
	if (!PED::IS_PED_INJURED(iLocal_138[0]) && !PED::IS_PED_INJURED(iLocal_138[1]))
	{
		TASK::TASK_CLEAR_LOOK_AT(iLocal_138[0]);
		TASK::TASK_CLEAR_LOOK_AT(iLocal_138[1]);
	}
	func_491();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_37);
	__LIB_1__.func_900();
	__LIB_11__.func_630(uParam1->f_645);
	__LIB_10__.func_840(&(uParam1->f_57));
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_11__.func_91(), false))
	{
		PED::SET_PED_AS_GROUP_MEMBER(__LIB_11__.func_91(), __LIB_0__.func_399());
		func_486(iLocal_170, iLocal_171);
	}
	else
	{
		func_484(&(iLocal_138[1]));
	}
	__LIB_8__.func_770(0);
	__LIB_6__.func_889(uParam2, 0);
	__LIB_0__.func_518(0);
	HUD::RESET_HUD_COMPONENT_VALUES(15);
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (iParam0->f_460 && !iLocal_160)
		{
			func_482(190, 0);
		}
	}
	__LIB_21__.func_672();
	__LIB_11__.func_629();
	__LIB_19__.func_72(&(uParam1->f_72), 0);
	SYSTEM::WAIT(200);
	if (iLocal_153)
	{
		__LIB_24__.func_943(130, 0, 0);
		__LIB_20__.func_174();
	}
	__LIB_9__.func_485(23, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_482(int iParam0, bool bParam1)//Position - 0x22772
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	if (!PLAYER::IS_PLAYER_ONLINE())
	{
		return;
	}
	StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_230(iParam0, &Var0, &Var1, 1, -1, 0, 0))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(103, iLocal_106[1], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(99, iLocal_106[2], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(109, iLocal_106[3], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(106, iLocal_106[5], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, iLocal_106[10], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(107, iLocal_106[8], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(116, iLocal_106[6], 0f);
	}
}

void func_484(var uParam0)//Position - 0x228CC
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !PED::IS_PED_INJURED(*uParam0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_173);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_173);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_138[0]))
		{
			TASK::TASK_LOOK_AT_ENTITY(0, iLocal_138[0], 8000, 2049, 3);
		}
		TASK::TASK_STAND_STILL(0, 1000);
		if (bLocal_151)
		{
			if (!BitTest(Global_113347, 10))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, __LIB_0__.func_998(iLocal_175 == 2, Local_210, Local_212), 1f, 20000, 0.25f, 0, __LIB_0__.func_316(iLocal_175 == 2, fLocal_214, fLocal_216));
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, __LIB_0__.func_998(iLocal_175 == 2, Local_209, Local_211), 1f, 20000, 0.25f, 0, __LIB_0__.func_316(iLocal_175 == 2, fLocal_213, fLocal_215));
			}
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
		}
		else
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, __LIB_0__.func_998(iLocal_175 == 2, Local_209, Local_211), 1f, 20000, 0.25f, 0, __LIB_0__.func_316(iLocal_175 == 2, 172.6813f, 142.6717f));
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, true);
		}
		TASK::CLOSE_SEQUENCE_TASK(iLocal_173);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, iLocal_173);
		PED::SET_PED_KEEP_TASK(*uParam0, true);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_172);
}

void func_486(int iParam0, var uParam1)//Position - 0x22A1F
{
	if (Global_96267 == iParam0)
	{
		Global_96268 = Global_96267;
		Global_96269 = uParam1;
		Global_96267 = 23;
	}
}

void func_491()//Position - 0x22AA2
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
	{
		OBJECT::DELETE_OBJECT(&iLocal_36);
	}
}

void func_493()//Position - 0x22AF0
{
	int iVar0;
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || __LIB_0__.func_2(0))
	{
		if (!__LIB_0__.func_134())
		{
			iVar0 = __LIB_0__.func_323();
			if (iVar0 != -1)
			{
				if (!func_495(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_26__.func_260();
		}
	}
}

int func_495(int iParam0)//Position - 0x22C50
{
	int iVar0;
	int iVar1;
	__LIB_26__.func_260();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__.func_322(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_496(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_113386.f_9085.f_330[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085)
		{
		}
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_496(var uParam0, int iParam1)//Position - 0x22D60
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
			if (!func_498(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				__LIB_0__.func_17(&(uParam0->f_2296[iVar0]));
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

int func_498(int iParam0, var uParam1, float fParam2)//Position - 0x22F34
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
			return func_498(8, uParam1, fParam2);
			break;
		case 10:
			return func_498(8, uParam1, fParam2);
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

void func_505()//Position - 0x239CE
{
	if (iLocal_135 == 1)
	{
		return;
	}
	func_324();
	PAD::INIT_PC_SCRIPTED_CONTROLS("Darts");
	iLocal_135 = 1;
}

