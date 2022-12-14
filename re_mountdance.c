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
	struct<3> Local_44 = { 0, 0, 0 } ;
	var uLocal_45 = 0;
	var uLocal_46 = 10;
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
	int iLocal_88 = 0;
	struct<3> Local_89 = { 0, 0, 0 } ;
	float fLocal_90 = 0f;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	char* sLocal_94 = NULL;
	int iLocal_95 = 0;
	int* iLocal_96 = NULL;
	int iLocal_97 = 0;
	struct<18> Local_98 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_88 = joaat("U_M_O_TapHillBilly");
	sLocal_94 = "SPECIAL_PED@MOUNTAIN_DANCER@MONOLOGUE_1@MONOLOGUE_1A";
	iLocal_97 = -1;
	Local_89 = { ScriptParam_98.f_1[0 /*3*/] };
	fLocal_90 = ScriptParam_98.f_17[0];
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_37(0);
	}
	if (__LIB_0__::func_703(Global_113386.f_20117, 16384))
	{
		func_37(0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_91))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_91, false) && !iLocal_95 == 7)
			{
				__LIB_0__::func_989(&(Global_113386.f_20117), 16384);
				iLocal_95 = 7;
			}
		}
		switch (iLocal_95)
		{
			case 0:
				if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && !__LIB_39__::func_350()) && !__LIB_39__::func_340())
				{
					if (func_11())
					{
						iLocal_91 = PED::CREATE_PED(26, iLocal_88, Local_89, fLocal_90, true, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_91, true);
						iLocal_92 = OBJECT::CREATE_OBJECT(joaat("prop_tapeplayer_01"), 704.7615f, 4179.5737f, 39.7093f, true, true, false);
						ENTITY::SET_ENTITY_HEADING(iLocal_92, (233.8288f + 180f));
						PED::SET_PED_PROP_INDEX(iLocal_91, 0, 0, 0, false);
						iLocal_95 = 1;
					}
				}
				else
				{
					func_37(0);
				}
				break;
			case 1:
				iLocal_97 = PED::CREATE_SYNCHRONIZED_SCENE(Local_89 + Vector(1f, 0f, 0f), 0f, 0f, fLocal_90, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_91, iLocal_97, sLocal_94, "MTN_DNC_if_you_want_to_get_to_heaven", 2f, -2f, 1, 0, 1000f, 0);
				AUDIO::INIT_SYNCH_SCENE_AUDIO_WITH_ENTITY("MNT_DNC", iLocal_91);
				iLocal_95 = 2;
				break;
			case 2:
				if (AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT_FOR_SCENE(iLocal_97, "MNT_DNC") == 1)
				{
					AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(iLocal_97);
					iLocal_95 = 3;
				}
				break;
			case 3:
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_91, true) };
				PED::SET_PED_LOD_MULTIPLIER(iLocal_91, 3f);
				if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_91) < 10f)
				{
					PED::SET_IK_TARGET(PLAYER::PLAYER_PED_ID(), 1, iLocal_91, 31086, 0f, 0f, 0f, 0, -1, -1);
					PED::SET_IK_TARGET(iLocal_91, 1, PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f, 0, -1, -1);
				}
				if (__LIB_0__::func_76(iLocal_91, PLAYER::PLAYER_PED_ID(), 1) < 25f)
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_96))
					{
						__LIB_39__::func_90(&iLocal_96, &iLocal_91, 0);
						HUD::SET_BLIP_COLOUR(iLocal_96, 3);
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_96))
				{
					__LIB_13__::func_808(&iLocal_96);
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_97) > 0.9999999f)
				{
					iLocal_95 = 1;
				}
				if (PED::IS_PED_RAGDOLL(iLocal_91))
				{
					AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_97);
					iLocal_95 = 4;
				}
				if (((((PED::IS_PED_INJURED(iLocal_91) || MISC::IS_BULLET_IN_AREA(Var0, 50f, true)) || MISC::IS_BULLET_IN_AREA(Var0, 50f, false)) || MISC::IS_PROJECTILE_IN_AREA(Var0, 20f, 20f, 20f, false)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, 50f)) || (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_91) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_91)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0, true) < 25f) && __LIB_14__::func_736(iLocal_91, PLAYER::PLAYER_PED_ID(), 1126825984, 0)))
				{
					AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_97);
					iLocal_95 = 4;
					iLocal_93 = 1;
				}
				break;
			case 4:
				if (HUD::DOES_BLIP_EXIST(iLocal_96))
				{
					__LIB_13__::func_808(&iLocal_96);
				}
				if (!PED::IS_PED_RAGDOLL(iLocal_91))
				{
					if (iLocal_93 == 1)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_91, 723.1315f, 4171.9565f, 39.7091f, 2f, -1, 1f, 1024, 40000f);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_91, 723.1315f, 4171.9565f, 39.7091f, 1f, -1, 1f, 1024, 40000f);
					}
					PED::SET_PED_KEEP_TASK(iLocal_91, true);
					iLocal_95 = 6;
				}
				break;
			case 6:
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_91, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_91, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_91, false);
					if (iLocal_93 == 1)
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_91, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
					}
					else
					{
						TASK::TASK_WANDER_STANDARD(iLocal_91, 40000f, 0);
					}
					PED::SET_PED_KEEP_TASK(iLocal_91, true);
					iLocal_95 = 5;
				}
				break;
			case 5:
				if ((ENTITY::IS_ENTITY_OCCLUDED(iLocal_91) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_91, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 50f) && !BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
				{
					func_37(1);
				}
				break;
			case 7:
				if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
				{
					func_37(0);
				}
				break;
		}
	}
}

int func_11()//Position - 0x754
{
	STREAMING::REQUEST_MODEL(iLocal_88);
	STREAMING::REQUEST_ANIM_DICT(sLocal_94);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_88) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_94))
	{
		return 1;
	}
	return 0;
}

void func_37(bool bParam0)//Position - 0x27A4
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_92))
	{
		OBJECT::DELETE_OBJECT(&iLocal_92);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_96))
	{
		__LIB_13__::func_808(&iLocal_96);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_91))
	{
		if (bParam0)
		{
			PED::DELETE_PED(&iLocal_91);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_91);
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

