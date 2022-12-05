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
	struct<3> Local_22 = { 0, 0, 0 } ;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	struct<4> Local_35[10];
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	struct<61> Local_39 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	char* sLocal_45 = NULL;
	char* sLocal_46 = NULL;
	char* sLocal_47[3] = { NULL, NULL, NULL };
	int iLocal_48[3] = { 0, 0, 0 };
	char* sLocal_49 = NULL;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 16;
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
	bool bLocal_225 = 0;
	var uLocal_226 = 0;
	struct<61> Local_227 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	uLocal_38 = __LIB_2__.func_108(69);
	sLocal_45 = "Omega";
	sLocal_46 = "FRANKLIN";
	sLocal_49 = "Flying_Saucer";
	Local_52 = { 2328.6006f, 2570.337f, 46.808f };
	Local_53 = { 90f, 0f, -45.358f };
	iLocal_54 = joaat("prop_cs_power_cell");
	Local_39 = { ScriptParam_227 };
	__LIB_20__.func_264(&Local_39);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__.func_135("Force cleanup [TERMINATING]");
		if (iLocal_40 != 3)
		{
			__LIB_38__.func_39(1);
		}
		else
		{
			func_284();
		}
		func_281();
	}
	if (__LIB_0__.func_294())
	{
		Global_78564 = 1;
		iLocal_37 = 0;
		while (!func_271(&Local_39))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_10__.func_700(&Local_39, 0, 1);
		Global_78564 = 0;
	}
	__LIB_32__.func_576(1, 1, 1, 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_Omega2", 0);
		__LIB_35__.func_898(Local_39.f_9, 0, 0, 0, 0, 0);
		switch (iLocal_40)
		{
			case 0:
				func_250();
				break;
			case 1:
				func_219();
				break;
			case 2:
				func_46();
				break;
			case 3:
				func_5();
				break;
			case 4:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x17E
{
	char* sVar0;
	switch (iLocal_41)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			switch (iLocal_42)
			{
				case 0:
					break;
				case 1:
					sVar0 = "O2_FAILKILL";
					break;
				case 2:
					sVar0 = "O2_FAILHURT";
					break;
				case 3:
					sVar0 = "O2_FAILSCARE";
					break;
			}
			if (iLocal_42 == 0)
			{
				__LIB_38__.func_39(1);
			}
			else
			{
				__LIB_39__.func_861(sVar0, 1);
			}
			iLocal_41 = 1;
			break;
		case 1:
			if (__LIB_0__.func_204())
			{
				func_281();
			}
			break;
	}
}

void func_5()//Position - 0x280
{
	switch (iLocal_41)
	{
		case 0:
			__LIB_0__.func_203(&uLocal_60, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			__LIB_10__.func_734(&iLocal_59, &(Local_39.f_35[0]));
			bLocal_225 = false;
			__LIB_32__.func_757(&Local_39, 1, 0, 0);
			iLocal_41 = 1;
			break;
		case 1:
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2326.2996f, 2564.4453f, 40.6678f, 2333.708f, 2581.939f, 65.6678f, 9f, false, true, 0))
				{
					func_284();
					iLocal_41 = 2;
				}
				else if (!bLocal_225)
				{
					if (__LIB_0__.func_121(iLocal_59) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_59, true))
					{
						bLocal_225 = __LIB_37__.func_799(&uLocal_60, "SCRAPAU", "SCRAP_DOCK", 7, 0, 0, 0);
					}
				}
			}
			break;
		case 2:
			func_281();
			break;
	}
}

void func_46()//Position - 0x1016
{
	switch (iLocal_41)
	{
		case 0:
			__LIB_9__.func_485(23, 1);
			uLocal_226 = Global_32209;
			Global_32209 = 0;
			__LIB_26__.func_478("SCRAP_2_RCM", 0);
			if (__LIB_18__.func_170(1, 1093140480, 0))
			{
				if (__LIB_0__.func_121(Local_39.f_28[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_39.f_28[0], sLocal_45, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 0);
				}
				if (__LIB_0__.func_121(iLocal_48[2]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_48[2], sLocal_47[2], 1, 0, 0);
				}
				if (__LIB_0__.func_121(iLocal_48[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_48[0], sLocal_47[0], 0, 0, 0);
				}
				if (__LIB_0__.func_121(iLocal_48[1]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_48[1], sLocal_47[1], 0, 0, 0);
				}
				if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_46, 0, 0, 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_50, sLocal_49, 2, joaat("p_cs_saucer_01_s"), 0);
				__LIB_26__.func_252();
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(1);
				SYSTEM::WAIT(0);
				__LIB_40__.func_759(2314.6006f, 2592.442f, 43.6477f, 2331.976f, 2571.0579f, 50.62959f, 19f, 2313.334f, 2600.8425f, 45.8162f, 352.0448f, 1, 1, 1, 0, 0);
				func_62(2486.81f, 3433.98f, 50.09f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				MISC::CLEAR_AREA_OF_OBJECTS(2333.8325f, 2576.7463f, 45.6678f, 3f, 0);
				iLocal_41 = 1;
			}
			break;
		case 1:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_47[0], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_48[0], true);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_47[1], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_48[1], true);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_46, 0))
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), true, 0, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_50))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_49, 0)))
				{
					iLocal_50 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_49, 0));
				}
			}
			else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_49, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_50, true);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				__LIB_32__.func_576(1, 1, 1, 1);
				__LIB_10__.func_700(&Local_39, 0, 1);
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_51) && STREAMING::HAS_MODEL_LOADED(iLocal_54))
				{
					iLocal_51 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_54, Local_52, true, true, false);
					ENTITY::SET_ENTITY_ROTATION(iLocal_51, Local_53, 2, false);
				}
				__LIB_39__.func_850(18, 0);
				__LIB_9__.func_485(23, 0);
				Global_32209 = uLocal_226;
				iLocal_41 = 2;
			}
			break;
		case 2:
			RECORDING::REPLAY_STOP_EVENT();
			__LIB_30__.func_546(3);
			break;
	}
}

void func_62(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x15D4
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
					if (func_181(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_65(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_181(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_65(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_181(PLAYER::PLAYER_PED_ID(), 8, 1) || func_181(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_65(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_181(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_65(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			iLocal_34 = 0;
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_34 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__.func_84(500, 0);
		}
	}
}

int func_65(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x17E1
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
										func_65(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_65(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, func_74(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_73(iParam0, iVar10, &iVar4, 1))
							{
								func_65(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_65(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_65(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_65(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_65(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_65(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_65(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_65(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_65(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_65(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_73(iParam0, iVar10, &iVar4, 0))
		{
			func_65(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_66(iParam0, iVar10, &iVar4))
		{
			func_65(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_66(int iParam0, int iParam1, int iParam2)//Position - 0x1FF1
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_181(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_73(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x28E5
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_181(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_74(int iParam0, int iParam1, int iParam2)//Position - 0x297B
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
				if (func_181(iParam0, iParam1, iVar0))
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
				if (func_181(iParam0, iParam1, iVar1))
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

int func_181(int iParam0, int iParam1, int iParam2)//Position - 0x1F5E4
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
				if (!func_181(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_181(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_181(iParam0, 14, iVar4))
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
			if (!func_181(iParam0, 14, uVar8[iVar7]))
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

void func_219()//Position - 0x22337
{
	__LIB_24__.func_930();
	func_241();
	if (func_221())
	{
		if (MISC::GET_GAME_TIMER() < iLocal_44 && !__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), Local_39.f_28[0], 5f, 1))
		{
			CAM::SET_GAMEPLAY_ENTITY_HINT(Local_39.f_28[0], 0f, 0f, 0f, true, 2000, 2500, 2000, 0);
			CAM::SET_GAMEPLAY_HINT_FOV(35f);
			CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
			CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.3f);
			CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(0.02f);
			CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0.05f);
			CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_39.f_28[0], 2000, 0, 2);
		}
		else
		{
			__LIB_30__.func_546(2);
		}
	}
}

int func_221()//Position - 0x223F4
{
	if (!__LIB_0__.func_121(Local_39.f_28[0]))
	{
		iLocal_42 = 1;
		__LIB_30__.func_546(4);
		return 0;
	}
	else if (PED::IS_PED_INJURED(Local_39.f_28[0]) || PED::IS_PED_RAGDOLL(Local_39.f_28[0]))
	{
		iLocal_42 = 2;
		__LIB_30__.func_546(4);
		return 0;
	}
	else if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (__LIB_38__.func_135(Local_39.f_28[0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || __LIB_20__.func_647(PLAYER::PLAYER_PED_ID(), Local_39.f_28[0], 1))
		{
			TASK::TASK_SMART_FLEE_PED(Local_39.f_28[0], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
			iLocal_42 = 3;
			__LIB_30__.func_546(4);
			return 0;
		}
	}
	return 1;
}

void func_241()//Position - 0x22E27
{
	struct<3> Var0;
	float fVar1;
	if (!iLocal_55)
	{
		if (__LIB_0__.func_121(Local_39.f_35[0]))
		{
			iLocal_58 = INTERIOR::GET_INTERIOR_AT_COORDS(ENTITY::GET_ENTITY_COORDS(Local_39.f_35[0], true));
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_58))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_58);
				iLocal_55 = 1;
			}
		}
	}
	else if (!iLocal_56)
	{
		if (INTERIOR::IS_INTERIOR_READY(iLocal_58))
		{
			iLocal_56 = 1;
		}
	}
	else if (!iLocal_57)
	{
		if (__LIB_0__.func_121(Local_39.f_35[0]))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(Local_39.f_35[0], true) };
			fVar1 = ENTITY::GET_ENTITY_HEADING(Local_39.f_35[0]);
			__LIB_11__.func_32(&(Local_39.f_35[0]));
			Local_39.f_35[0] = VEHICLE::CREATE_VEHICLE(joaat("dune2"), Var0, fVar1, true, true, false);
			INTERIOR::UNPIN_INTERIOR(iLocal_58);
			iLocal_57 = 1;
		}
	}
}

void func_250()//Position - 0x230EF
{
	__LIB_24__.func_930();
	func_241();
	HUD::REQUEST_ADDITIONAL_TEXT("OMEGA2", 0);
	STREAMING::REQUEST_MODEL(iLocal_54);
	if (func_221())
	{
		if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			if (__LIB_0__.func_121(Local_39.f_28[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_39.f_28[0], true);
				PED::SET_PED_KEEP_TASK(Local_39.f_28[0], true);
			}
			if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()) && __LIB_1__.func_197(Local_39.f_28[0]))
			{
				iLocal_43 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_39.f_28[0], iLocal_43);
			}
			iLocal_44 = MISC::GET_GAME_TIMER() + 3500;
			func_251();
			__LIB_30__.func_546(1);
		}
	}
}

void func_251()//Position - 0x23187
{
	iLocal_48[0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(2333.23f, 2574.97f, 47.03f, 5f, joaat("prop_ch3_01_trlrdoor_l"), true, false, true);
	iLocal_48[1] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(2329.65f, 2576.64f, 47.03f, 5f, joaat("prop_ch3_01_trlrdoor_r"), true, false, true);
	sLocal_47[0] = "Scrap_Door_L";
	sLocal_47[1] = "Scrap_Door_R";
	sLocal_47[2] = "Scrap_Latch";
}

int func_271(var uParam0)//Position - 0x23DDE
{
	int iVar0[2];
	int iVar1;
	bool bVar2;
	iVar0[0] = uLocal_38;
	iVar0[1] = joaat("dune2");
	switch (iLocal_37)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 2337.3762f, 2585.722f, 45.110653f };
			uParam0->f_17[1 /*3*/] = { 2302.158f, 2586.5054f, 47.999573f };
			uParam0->f_24 = 26f;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "SCRAP_2_RCM", 24);
			uParam0->f_25 = 1;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_11__.func_794(&(uParam0->f_48), "rcmrc_omega_2", "omega_idle_looking_around", 0);
			iLocal_37 = 1;
			break;
		case 1:
			if (!__LIB_10__.func_716(&iVar0) || !__LIB_20__.func_273(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_37 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!__LIB_26__.func_256(&(uParam0->f_28[0]), 69, 2319.443f, 2583.5881f, 46.7663f, 220f, "OMEGA LAUNCHER RC", 1))
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_20__.func_649(&(uParam0->f_35[0]), iVar0[1], 2331.08f, 2573.53f, 46.13f, 358.61f);
			}
			if (bVar2)
			{
				iLocal_37 = 3;
			}
			break;
		case 3:
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(2314.546f, 2576.3296f, 44.7f, 2326.4463f, 2579.6082f, 47.6645f, false, true);
			MISC::CLEAR_AREA_OF_VEHICLES(2321.2522f, 2578.8513f, 46.7f, 10f, false, false, false, false, false, false, 0);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_281()//Position - 0x24200
{
	int iVar0;
	__LIB_26__.func_252();
	if (__LIB_26__.func_257())
	{
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		__LIB_0__.func_122(&(iLocal_48[iVar0]), 0);
		iVar0++;
	}
	__LIB_0__.func_122(&iLocal_50, 0);
	__LIB_0__.func_122(&iLocal_51, 0);
	__LIB_0__.func_106(&iLocal_59);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(2314.546f, 2576.3296f, 44.7f, 2326.4463f, 2579.6082f, 47.6645f, true, true);
	__LIB_32__.func_757(&Local_39, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_284()//Position - 0x2433E
{
	func_285(67, 1);
}

void func_285(int iParam0, bool bParam1)//Position - 0x2434D
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_18__.func_205();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_112473[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_112473[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_112473[iVar0 /*10*/].f_6)
	{
		return;
	}
	__LIB_38__.func_136(iVar0, 0);
	MISC::SET_BIT(&Global_78567, 1);
	if (Global_112473[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		__LIB_0__.func_56(&(Global_112473[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			PLAYER::START_FIRING_AMNESTY(5000);
		}
	}
	__LIB_32__.func_577(iVar0, 1, 0, 0);
	__LIB_0__.func_46(0, 0);
	MemCopy(&sVar1, {__LIB_0__.func_339(iVar0)}, 4);
	__LIB_0__.func_44(&sVar1, __LIB_26__.func_250());
	func_311();
	if (BitTest(Global_113386.f_10016.f_25, 3))
	{
		__LIB_0__.func_18();
	}
	__LIB_35__.func_897();
	if (iParam0 == 210 || iParam0 == 211)
	{
		__LIB_24__.func_943(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		__LIB_24__.func_943(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		__LIB_24__.func_943(iParam0, 0, 0);
	}
	__LIB_0__.func_533();
}

void func_311()//Position - 0x254CB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_97810[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = __LIB_18__.func_168(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				case 1:
					iVar2 = 158;
					break;
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (func_181(iVar1, 14, iVar2))
				{
					func_312(iVar1, 14, iVar2);
				}
				if (Global_113386.f_2363.f_539[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_113386.f_2363.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_312(int iParam0, int iParam1, int iParam2)//Position - 0x2558C
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_181(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { __LIB_18__.func_180(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_312(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_312(iParam0, 14, uVar5[iVar3]))
			{
				iVar4 = 0;
			}
			iVar3++;
		}
		return iVar4;
	}
	else if (iParam1 == 14)
	{
		PED::CLEAR_PED_PROP(iParam0, Global_78130[1 /*14*/].f_12);
	}
	else
	{
		uVar6 = { __LIB_18__.func_180(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__.func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
		}
	}
	if (func_73(iParam0, iVar0, &iVar7, 0))
	{
		func_65(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_66(iParam0, iVar0, &iVar7))
	{
		func_65(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

