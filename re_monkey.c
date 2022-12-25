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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	float fLocal_50 = 0f;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int* iLocal_53 = NULL;
	float fLocal_54 = 0f;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	struct<3> Local_57 = { 0, 0, 0 } ;
	int iLocal_58[4] = { 0, 0, 0, 0 };
	struct<3> Local_59 = { 0, 0, 0 } ;
	int iLocal_60 = 0;
	char* sLocal_61 = NULL;
	char* sLocal_62 = NULL;
	char* sLocal_63 = NULL;
	char* sLocal_64 = NULL;
	char* sLocal_65 = NULL;
	struct<3> Local_66 = { 0, 0, 0 } ;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	struct<2> Local_70 = { 0, 5 } ;
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 5;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	Local_49 = { -336.61462f, -93.668076f, 46.0005f };
	fLocal_50 = 256.1257f;
	fLocal_54 = 0f;
	Local_59 = { -334.8087f, -85.713f, 47.4504f };
	sLocal_61 = "scr_lamgraff_paint_spray";
	sLocal_62 = "switch@franklin@lamar_tagging_wall";
	sLocal_63 = "lamar_tagging_wall_loop_lamar";
	sLocal_64 = "lamar_tagging_wall_exit_lamar";
	sLocal_65 = "lamar_tagging_exit_loop_lamar";
	Local_66 = { 0f, 0f, 0f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_150();
	}
	func_85(ScriptParam_70.f_1[0 /*3*/]);
	while (true)
	{
		func_71();
		switch (iLocal_45)
		{
			case 0:
				if (func_55())
				{
					func_52();
				}
				break;
			case 1:
				if (func_1())
				{
					func_52();
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_1()//Position - 0x119
{
	if (iLocal_46 == 0)
	{
		return 1;
	}
	else if (iLocal_46 == 1)
	{
		func_51();
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_15__::func_889(PLAYER::PLAYER_PED_ID(), -347.4067f, -93.5801f, 44.6639f, 306.0178f);
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::DO_SCREEN_FADE_IN(250);
		return 1;
	}
	else if (iLocal_46 == 2)
	{
		switch (iLocal_47)
		{
			case 0:
				__LIB_17__::func_113(joaat("TEXT_MONKEY_MOSAIC_LAMAR"));
				func_31();
				__LIB_39__::func_24(-1, 0);
				__LIB_14__::func_557();
				func_150();
				break;
			}
	}
	return 0;
}

void func_31()//Position - 0x152A
{
	__LIB_28__::func_213(joaat("TEXT_MONKEY_CAR_UNLOCK"), 6, func_35(), 133, 30000, 10000, -1, 0, -1, 0, 0);
}

int func_35()//Position - 0x178E
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	switch (iVar0)
	{
		case joaat("Player_Zero"):
			return 1;
		case joaat("Player_One"):
			return 2;
		case joaat("Player_Two"):
			return 4;
		default:
	}
	return -1;
}

void func_51()//Position - 0x1E88
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		switch (iVar1)
		{
			case 0:
				break;
			case 1:
				iLocal_58[iVar1] = OBJECT::CREATE_OBJECT(joaat("prop_paints_can02"), -335.66f, -95.24f, 46.16f, true, true, false);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_58[iVar1], -335.66f, -95.24f, 46.16f, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_58[iVar1], -2.32f, 0.66f, -0.8f, 2, true);
				break;
			case 2:
				iLocal_58[iVar1] = OBJECT::CREATE_OBJECT(joaat("prop_paint_brush05"), -336.04f, -94.9f, 46.02f, true, true, false);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_58[iVar1], -336.04f, -94.9f, 46.02f, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_58[iVar1], 0.01f, 3.85f, 2.72f, 2, true);
				break;
			case 3:
				iLocal_58[iVar1] = OBJECT::CREATE_OBJECT(joaat("prop_paint_spray01b"), -336.34f, -95.66f, 46.02f, true, true, false);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_58[iVar1], -336.34f, -95.66f, 46.02f, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_58[iVar1], -2.86f, 0.76f, 28.89f, 2, true);
				break;
		}
		iVar0++;
	}
}

void func_52()//Position - 0x1FD9
{
	if (iLocal_46 == 2)
	{
		func_54();
		iLocal_47 = 0;
	}
	func_53();
}

void func_53()//Position - 0x1FF2
{
	switch (iLocal_46)
	{
		case 0:
			iLocal_46 = 2;
			break;
		case 1:
			iLocal_46 = 2;
			break;
		case 2:
			iLocal_46 = 0;
			break;
	}
}

void func_54()//Position - 0x2025
{
	int iVar0;
	iVar0 = iLocal_45 + 1;
	if (iVar0 >= 0 && iVar0 < 2)
	{
		iLocal_45 = iVar0;
	}
}

int func_55()//Position - 0x2047
{
	if (iLocal_46 == 0)
	{
		return 1;
	}
	else if (iLocal_46 == 1)
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_15__::func_889(PLAYER::PLAYER_PED_ID(), -366.6139f, -79.7531f, 44.6616f, 230.7299f);
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::DO_SCREEN_FADE_IN(250);
		return 1;
	}
	else if (iLocal_46 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_48))
		{
			if (PED::IS_PED_DEAD_OR_DYING(iLocal_48, true))
			{
				func_150();
			}
		}
		else if (iLocal_47 > 0)
		{
			if (iLocal_52)
			{
				return 1;
			}
			else
			{
				func_150();
			}
		}
		switch (iLocal_47)
		{
			case 0:
				if (func_57())
				{
					func_51();
					iLocal_47++;
				}
				break;
			case 1:
				if (__LIB_16__::func_926())
				{
					if (__LIB_0__::func_121(iLocal_48))
					{
						if (CAM::GET_FOCUS_PED_ON_SCREEN(30f, 31086, 0.8f, 0.7f, 0.25f, 8f, 0.333f, 31086, 24818) == iLocal_48)
						{
							iLocal_69 = MISC::GET_GAME_TIMER() + 2000;
							iLocal_47++;
						}
					}
				}
				break;
			case 2:
				if (iLocal_69 < MISC::GET_GAME_TIMER())
				{
					iLocal_52 = 1;
					iLocal_47++;
				}
				break;
			}
	}
	return 0;
}

int func_57()//Position - 0x2186
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_48))
	{
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(joaat("U_M_M_StreetArt_01"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("U_M_M_StreetArt_01")))
		{
			iLocal_48 = PED::CREATE_PED(26, joaat("U_M_M_StreetArt_01"), Local_49, fLocal_50, true, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("U_M_M_StreetArt_01"));
			iLocal_58[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_spray_can"), Local_59, true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_58[0], iLocal_48, PED::GET_PED_BONE_INDEX(iLocal_48, 28422), 0f, -0.01f, -0.02f, Local_66, true, true, false, false, 2, true, 0);
			PED::SET_PED_KEEP_TASK(iLocal_48, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_48, 42, true);
			iLocal_53 = __LIB_0__::func_666(iLocal_48, 0, 145);
			__LIB_39__::func_11(1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_48, joaat("PLAYER"));
			PED::SET_PED_LOD_MULTIPLIER(iLocal_48, 2.5f);
		}
	}
	return 0;
}

void func_71()//Position - 0x28A1
{
	func_72();
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && iLocal_51 < 3)
	{
		func_150();
	}
}

void func_72()//Position - 0x28C2
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	struct<3> Var5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	if (__LIB_0__::func_121(iLocal_48))
	{
		bVar0 = __LIB_0__::func_121(iLocal_48);
		bVar1 = __LIB_0__::func_121(PLAYER::PLAYER_PED_ID());
		Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_48, false) };
		fVar4 = 7.5f;
		Var5 = { fVar4, fVar4, fVar4 };
		if (bVar1)
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			bVar6 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
			bVar7 = PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID());
		}
		if (iLocal_51 < 3)
		{
			if (MISC::IS_BULLET_IN_AREA(Var2, fVar4, false) || MISC::IS_PROJECTILE_IN_AREA(Var2 - Var5, Var2 + Var5, false))
			{
				iLocal_51 = 3;
			}
		}
		switch (iLocal_51)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT(sLocal_62);
				if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_62))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_48, true);
					TASK::TASK_PLAY_ANIM(iLocal_48, sLocal_62, sLocal_63, 1000f, -8f, -1, 8193, 0f, false, false, false);
					iLocal_51++;
				}
				break;
			case 1:
				if (func_83(joaat("SCRIPT_TASK_PLAY_ANIM")))
				{
					iLocal_51 = 5;
				}
				if (func_82(PLAYER::PLAYER_PED_ID(), iLocal_48, 35f))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_68);
					TASK::TASK_PLAY_ANIM(0, sLocal_62, sLocal_64, 8f, -8f, -1, 8192, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_62, sLocal_65, 8f, -2f, -1, 8193, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_68);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_48, iLocal_68);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_68);
					STREAMING::REMOVE_ANIM_DICT(sLocal_62);
					iLocal_51++;
				}
				break;
			case 2:
				if (func_83(joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
				{
					iLocal_51 = 5;
				}
				if (bVar7)
				{
					fVar8 = 30f;
				}
				else if (bVar6)
				{
					fVar8 = 17.5f;
				}
				else
				{
					fVar8 = 5f;
				}
				if ((bVar0 && bVar1) && func_82(PLAYER::PLAYER_PED_ID(), iLocal_48, fVar8))
				{
					iLocal_51 = 3;
				}
				if (iLocal_52)
				{
					iLocal_51 = 3;
				}
				if (func_81())
				{
					iLocal_51 = 3;
				}
				if (bVar1 && func_80(Var3, Var2))
				{
					iLocal_51 = 3;
				}
				func_78();
				break;
			case 3:
				if (func_73())
				{
					iLocal_51++;
				}
				break;
			case 4:
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_48, 8, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_48, 32, true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_68);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 800);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 9999f, -1, true, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_68);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_48, iLocal_68);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_68);
				iLocal_51++;
				break;
			case 5:
				if (func_83(joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
				{
					iLocal_51 = 5;
				}
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_48) && SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) > 2500f)
				{
					iLocal_67 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var3, Var2, 1, 0, 7);
					iLocal_51++;
				}
				break;
			case 6:
				if (func_83(joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
				{
					iLocal_51 = 5;
				}
				iVar13 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_67, &iVar9, &uVar10, &uVar11, &uVar12);
				if (iVar13 == 2)
				{
					if (iVar9 == 1)
					{
						iLocal_51++;
					}
					else
					{
						iLocal_51 = (iLocal_51 - 1);
					}
				}
				else if (iVar13 == 0)
				{
					iLocal_51++;
				}
				break;
			case 7:
				PED::DELETE_PED(&iLocal_48);
				break;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_48))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_48, false);
	}
}

int func_73()//Position - 0x2BE9
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	Var0 = { -335.71f, -93.39f, 46f };
	Var1 = { -336.7188f, -93.5128f, 46f };
	switch (iLocal_56)
	{
		case 0:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_48, sLocal_62, sLocal_65, 3))
			{
				fLocal_54 = 0.349f;
				iLocal_55 = 900;
				Local_57 = { Var0 };
				iLocal_56 = 1;
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_48, sLocal_62, sLocal_64, 3))
			{
				fLocal_54 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_48, sLocal_62, sLocal_64);
				fLocal_54 = __LIB_0__::func_331(fLocal_54, 0.2f, 0.349f);
				if (fLocal_54 != 0.2f)
				{
					fVar2 = ((1f / (0.349f - 0.161f)) * SYSTEM::TO_FLOAT(900));
					iLocal_55 = SYSTEM::ROUND(((fLocal_54 - 0.161f) * fVar2));
					Local_57 = { ENTITY::GET_ENTITY_COORDS(iLocal_48, false) - Vector(1f, 0f, 0f) };
					iLocal_56 = 1;
				}
				else
				{
					iLocal_56 = 3;
				}
			}
			else
			{
				iLocal_56 = 3;
			}
			break;
		case 1:
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_48, true);
			TASK::TASK_PLAY_ANIM(iLocal_48, sLocal_62, sLocal_64, 4f, -8f, -1, 0, fLocal_54, true, false, false);
			iLocal_69 = MISC::GET_GAME_TIMER();
			__LIB_0__::func_714(&iLocal_53);
			func_75();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_58[0]))
			{
				ENTITY::DETACH_ENTITY(iLocal_58[0], true, true);
			}
			iLocal_56++;
			break;
		case 2:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_48, sLocal_62, sLocal_64, 3))
			{
				iVar3 = (MISC::GET_GAME_TIMER() - iLocal_69);
				fVar4 = (SYSTEM::TO_FLOAT(iVar3) / SYSTEM::TO_FLOAT(iLocal_55));
				fVar5 = (fLocal_54 - ((fLocal_54 - 0.161f) * fVar4));
				fVar5 = __LIB_0__::func_331(fVar5, 0.161f, fLocal_54);
				ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_48, sLocal_62, sLocal_64, fVar5);
				fVar6 = (fVar4 - 0.12f);
				fVar6 = __LIB_0__::func_331(fVar6, 0f, 0.8f);
				Var7 = { __LIB_1__::func_576(Local_57, Var1, fVar6) };
				ENTITY::SET_ENTITY_COORDS(iLocal_48, Var7, false, true, false, true);
				if (fVar5 == 0.161f)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_48, false);
					return 1;
				}
			}
			break;
		case 3:
			__LIB_0__::func_714(&iLocal_53);
			func_75();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_58[0]))
			{
				ENTITY::DETACH_ENTITY(iLocal_58[0], true, true);
			}
			return 1;
	}
	return 0;
}

void func_75()//Position - 0x2E12
{
	if (iLocal_60 != 0)
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_60, false);
		iLocal_60 = 0;
	}
}

void func_78()//Position - 0x2E71
{
	float fVar0;
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_48, sLocal_62, sLocal_64, 3))
	{
		fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_48, sLocal_62, sLocal_64);
		if (fVar0 < 0.383793f)
		{
			func_75();
		}
		else if (fVar0 < 0.612112f)
		{
			func_79();
		}
		else if (fVar0 < 1f)
		{
			func_75();
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_48, sLocal_62, sLocal_65, 3))
	{
		fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_48, sLocal_62, sLocal_65);
		if (fVar0 < 0.1124f)
		{
			func_75();
		}
		else if (fVar0 < 0.5566f)
		{
			func_79();
		}
		else if (fVar0 < 0.7546f)
		{
			func_75();
		}
		else if (fVar0 < 0.9f)
		{
			func_79();
		}
		else if (fVar0 < 1f)
		{
			func_75();
		}
	}
}

void func_79()//Position - 0x2F32
{
	if (iLocal_60 == 0)
	{
		iLocal_60 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(sLocal_61, iLocal_58[0], Local_66, Local_66, 1f, false, false, false);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(iLocal_60, 1f, 1f, 1f, false);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(iLocal_60, 0.2f);
	}
}

bool func_80(struct<3> Param0, struct<3> Param1)//Position - 0x2F72
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	fVar0 = PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID());
	fVar1 = __LIB_0__::func_331((fVar0 / 14f), 0f, 1f);
	fVar2 = SYSTEM::VDIST(Param0, Param1);
	fVar3 = (__LIB_0__::func_331((30f - fVar2), 0f, 30f) / 30f);
	fVar4 = (fVar1 * fVar3);
	return fVar4 > 0.25f;
}

bool func_81()//Position - 0x2FCB
{
	return (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -334.46515f, -93.421715f, 48.573284f, -332.2641f, -82.78552f, 45.810303f, 3f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -329.1134f, -83.87273f, 45.79989f, -331.09372f, -88.05348f, 48.718784f, 3f, false, true, 0));
}

int func_82(int iParam0, int iParam1, float fParam2)//Position - 0x302D
{
	float fVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		fVar0 = (fParam2 * fParam2);
		return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iParam1, false)) <= fVar0;
	}
	return 0;
}

int func_83(int iParam0)//Position - 0x3069
{
	if (!__LIB_39__::func_70(iLocal_48, iParam0) && !__LIB_39__::func_70(iLocal_48, joaat("SCRIPT_TASK_SMART_FLEE_PED")))
	{
		__LIB_0__::func_714(&iLocal_53);
		TASK::TASK_SMART_FLEE_PED(iLocal_48, PLAYER::PLAYER_PED_ID(), 9999f, -1, true, false);
		return 1;
	}
	return 0;
}

void func_85(struct<3> Param0)//Position - 0x30CB
{
	if (func_89(Param0))
	{
		__LIB_39__::func_9(33);
	}
	else
	{
		func_150();
	}
	STREAMING::REQUEST_PTFX_ASSET();
}

int func_89(struct<3> Param0)//Position - 0x3170
{
	if (__LIB_39__::func_20(Param0, 33, 0, 0, 0))
	{
		if (__LIB_0__::func_720(58))
		{
			if (func_91())
			{
				if (__LIB_0__::func_116())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_91()//Position - 0x325C
{
	return __LIB_0__::func_61(func_93(), 5);
}

int func_93()//Position - 0x328D
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	switch (iVar0)
	{
		case joaat("Player_Zero"):
			return 21;
		case joaat("Player_One"):
			return 22;
		case joaat("Player_Two"):
			return 23;
		default:
	}
	return -1;
}

void func_150()//Position - 0x64F3
{
	STREAMING::REMOVE_PTFX_ASSET();
	__LIB_0__::func_714(&iLocal_53);
	__LIB_39__::func_19(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

