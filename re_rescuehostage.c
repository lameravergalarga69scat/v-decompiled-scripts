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
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
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
	struct<3> Local_46 = { 0, 0, 0 } ;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	char* sLocal_82 = NULL;
	char* sLocal_83 = NULL;
	char* sLocal_84 = NULL;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	int iLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	struct<10> Local_93[16];
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	char* sLocal_99 = NULL;
	struct<18> Local_100 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	iLocal_19 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_59 = 8000;
	iLocal_64 = -1;
	bLocal_79 = true;
	sLocal_84 = "NULL";
	fLocal_85 = -120f;
	fLocal_86 = 120f;
	fLocal_87 = 40f;
	fLocal_88 = 90f;
	bLocal_90 = true;
	sLocal_99 = "RANDOM@RESCUE_HOSTAGE";
	Local_46 = { ScriptParam_100.f_1[0 /*3*/] };
	fLocal_47 = ScriptParam_100.f_17[0];
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_163();
	}
	if (Global_39990[0] == 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_42__.func_565(Local_46, -1, 0, 0, 0))
	{
		__LIB_35__.func_176(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_117();
	__LIB_0__.func_371();
	while (true)
	{
		SYSTEM::WAIT(0);
		__LIB_0__.func_371();
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			switch (iLocal_45)
			{
				case 0:
					if (func_112())
					{
						iLocal_91 = MISC::GET_GAME_TIMER();
						iLocal_45 = 1;
					}
					else if (__LIB_40__.func_738())
					{
						func_163();
					}
					break;
				case 1:
					if (iLocal_60 == 0)
					{
						iLocal_60 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(101 /*EVENT_SHOCKING_MUGGING*/, -104.982f, 6408.7373f, 30.4905f, 180000f);
					}
					func_110();
					if (!PED::IS_PED_INJURED(iLocal_49))
					{
						func_109();
					}
					else if (!PED::IS_PED_INJURED(iLocal_50))
					{
						func_105();
						func_104();
					}
					else
					{
						func_163();
					}
					if (bLocal_68)
					{
						func_102();
					}
					if (!PED::IS_PED_INJURED(iLocal_48))
					{
						if (!__LIB_35__.func_175())
						{
							if (__LIB_40__.func_735())
							{
								func_163();
							}
							func_74();
						}
						else if (!bLocal_68)
						{
							func_57();
						}
					}
					else
					{
						if (Local_93[1 /*10*/].f_7)
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_53))
							{
								HUD::REMOVE_BLIP(&iLocal_53);
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_54))
							{
								HUD::REMOVE_BLIP(&iLocal_54);
							}
							__LIB_0__.func_202(&Local_93, 1);
							__LIB_6__.func_771();
						}
						if (!PED::IS_PED_INJURED(iLocal_49))
						{
							if (bLocal_68)
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_63))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_63) == 1f)
									{
										if (!PED::IS_PED_INJURED(iLocal_49))
										{
											PED::SET_PED_CAN_RAGDOLL(iLocal_49, true);
											ENTITY::SET_ENTITY_HEALTH(iLocal_49, 0, 0);
										}
									}
								}
							}
							else
							{
								if (func_53())
								{
									iLocal_45 = 3;
								}
								if (!PED::IS_PED_INJURED(iLocal_50))
								{
								}
							}
						}
					}
					break;
				case 2:
					iLocal_52 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 35f, 0, 101383);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
					{
						if (!bLocal_92)
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						}
						func_163();
					}
					if (!iLocal_78)
					{
						if (MISC::CREATE_INCIDENT(7, Local_46, 2, 0f, &uLocal_80, 0, 0))
						{
							iLocal_78 = 1;
						}
					}
					break;
				case 3:
					if (iLocal_76)
					{
						if (SYSTEM::TIMERA() > 5000)
						{
							if (!PED::IS_PED_INJURED(iLocal_49))
							{
								PED::SET_PED_KEEP_TASK(iLocal_49, true);
								func_28();
							}
							func_163();
						}
					}
					else
					{
						if (func_53())
						{
							if (!bLocal_69)
							{
								if (bLocal_79)
								{
									if (__LIB_35__.func_536(&Local_93, "RERHOAU", "RERHO_THANK", 4, iLocal_98, 0, 0))
									{
										bLocal_69 = true;
									}
								}
								else if (__LIB_35__.func_536(&Local_93, "RERHOAU", "RERHO_NOGUN", 4, iLocal_98, 0, 0))
								{
									bLocal_69 = true;
								}
							}
						}
						func_3();
						if (!PED::IS_PED_INJURED(iLocal_49))
						{
							if (MISC::GET_GAME_TIMER() > iLocal_62 + 100)
							{
								__LIB_5__.func_759(iLocal_49, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
								iLocal_62 = MISC::GET_GAME_TIMER();
							}
						}
						if (bLocal_69)
						{
							if (!iLocal_77)
							{
								if (!PED::IS_PED_INJURED(iLocal_50))
								{
									if (__LIB_35__.func_536(&Local_93, "RERHOAU", "RERHO_CONS", 4, iLocal_98, 0, 0))
									{
										iLocal_77 = 1;
									}
								}
							}
						}
						iLocal_52 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Local_46, 5f, joaat("ambulance"), 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_76 = 1;
						}
						iLocal_51 = PED::GET_RANDOM_PED_AT_COORD(Local_46, 1.5f, 1.5f, 1.5f, -1);
						if (!PED::IS_PED_INJURED(iLocal_51))
						{
							SYSTEM::SETTIMERA(5000);
							iLocal_76 = 1;
						}
						if (!iLocal_78 && iLocal_77)
						{
							if (MISC::CREATE_INCIDENT(5, Local_46, 2, 0f, &uLocal_81, 0, 0))
							{
								iLocal_78 = 1;
							}
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_46) > 5625f && !CAM::IS_SPHERE_VISIBLE(Local_46, 10f))
						{
							func_28();
						}
					}
					break;
			}
		}
		else if (iLocal_45 == 3)
		{
			func_28();
		}
		else
		{
			func_163();
		}
	}
}

void func_3()//Position - 0x662
{
	if (func_4())
	{
		if (!PED::IS_PED_INJURED(iLocal_49))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49, false);
			TASK::TASK_SMART_FLEE_COORD(iLocal_49, Local_46, 50f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iLocal_49, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_49);
			__LIB_6__.func_771();
		}
		if (!PED::IS_PED_INJURED(iLocal_50))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50, false);
			TASK::TASK_SMART_FLEE_COORD(iLocal_50, Local_46, 50f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iLocal_50, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_50);
			__LIB_6__.func_771();
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_49))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49, PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_RAGDOLL(iLocal_49))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_49, 0, 0);
			}
		}
		else if (PED::IS_PED_RAGDOLL(iLocal_49))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49, false);
			TASK::TASK_SMART_FLEE_COORD(iLocal_49, Local_46, 50f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iLocal_49, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_49);
			__LIB_6__.func_771();
			if (!PED::IS_PED_INJURED(iLocal_50))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50, false);
				TASK::TASK_SMART_FLEE_COORD(iLocal_50, Local_46, 50f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_50, true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_50);
				__LIB_6__.func_771();
			}
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_50))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50, false);
		TASK::TASK_SMART_FLEE_COORD(iLocal_50, Local_46, 50f, -1, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_50, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_50);
		__LIB_6__.func_771();
	}
	if (!PED::IS_PED_INJURED(iLocal_50))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50, PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_RAGDOLL(iLocal_50))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_50, 0, 0);
			}
		}
		else if (PED::IS_PED_RAGDOLL(iLocal_50))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50, false);
			TASK::TASK_SMART_FLEE_COORD(iLocal_50, Local_46, 50f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iLocal_50, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_50);
			__LIB_6__.func_771();
			if (!PED::IS_PED_INJURED(iLocal_49))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49, false);
				TASK::TASK_SMART_FLEE_COORD(iLocal_49, Local_46, 50f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_49, true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_49);
				__LIB_6__.func_771();
			}
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_49))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49, false);
		TASK::TASK_SMART_FLEE_COORD(iLocal_49, Local_46, 50f, -1, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_49, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_49);
		__LIB_6__.func_771();
	}
}

bool func_4()//Position - 0x86D
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	Var1 = { 15f, 15f, 10f };
	Var2 = { -15f, -15f, -10f };
	if (!PED::IS_PED_INJURED(iLocal_49))
	{
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_49, 31086, 0f, 0f, 0f), 15f, true))
		{
			bVar0 = true;
		}
		Var1 = { Var1 + PED::GET_PED_BONE_COORDS(iLocal_49, 31086, 0f, 0f, 0f) };
		Var2 = { Var2 + PED::GET_PED_BONE_COORDS(iLocal_49, 31086, 0f, 0f, 0f) };
		if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("WEAPON_SMOKEGRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("WEAPON_GRENADE"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var2, Var1, joaat("WEAPON_STICKYBOMB"), true))
		{
			bLocal_90 = true;
			bVar0 = true;
		}
		if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -90.68654f, 6411.883f, 36.007286f, -103.859955f, 6398.8477f, 30.194529f, 23f) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(iLocal_49, 31086, 0f, 0f, 0f), 20f))
		{
			bLocal_90 = true;
			bVar0 = true;
		}
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_49, 31086, 0f, 0f, 0f), 6f))
		{
			bVar0 = true;
			bLocal_90 = true;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_50))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50, PLAYER::PLAYER_PED_ID(), true))
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
	}
	return bVar0;
}

void func_28()//Position - 0x12B3
{
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	__LIB_0__.func_109();
	__LIB_40__.func_737(-1, 0);
	__LIB_20__.func_174();
	func_163();
}

int func_53()//Position - 0x24D6
{
	if (!iLocal_73)
	{
		SYSTEM::WAIT(0);
		if (!PED::IS_PED_INJURED(iLocal_49))
		{
			if (iLocal_64 == -1)
			{
				PED::SET_PED_CAN_RAGDOLL(iLocal_49, false);
				MISC::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(5, 0.5f);
				MISC::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(5, 1f);
				PED::SET_PED_GENERATES_DEAD_BODY_EVENTS(iLocal_49, true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_49, true);
				TASK::TASK_PLAY_ANIM(iLocal_49, sLocal_99, "girl_villian_shot", 8f, -2f, -1, 10, 0f, false, false, false);
				iLocal_64 = PED::CREATE_SYNCHRONIZED_SCENE(Local_66, Local_67, 2);
				if (!PED::IS_PED_INJURED(iLocal_50))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_50, iLocal_55);
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -91.307045f, 6391.8535f, 30.640295f, -102.55954f, 6403.1025f, 32.454437f, 8.5f, false, true, 0))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_50, iLocal_64, sLocal_99, "bystander_villian_shot", 1000f, -2f, 5, 0, 1000f, 0);
					}
					else
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50, false);
					}
				}
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49, iLocal_64, sLocal_99, "girl_villian_shot", 1000f, -2f, 5, 0, 1000f, 0);
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_64))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_64) > 0.1f)
				{
					func_3();
				}
				if (!iLocal_70)
				{
					if (bLocal_79)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_64) > 0.5f)
						{
							if (__LIB_35__.func_536(&Local_93, "RERHOAU", "RERHO_SAINT", 4, iLocal_98, 0, 0))
							{
								iLocal_70 = 1;
							}
						}
					}
					else if (__LIB_35__.func_536(&Local_93, "RERHOAU", "RERHO_THANK", 4, iLocal_98, 0, 0))
					{
						iLocal_70 = 1;
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_64) == 1f)
				{
					iLocal_64 = PED::CREATE_SYNCHRONIZED_SCENE(Local_66, Local_67, 2);
					__LIB_5__.func_759(iLocal_49, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_64, true);
					if (!PED::IS_PED_INJURED(iLocal_50))
					{
						if (bLocal_79)
						{
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_50, iLocal_64, sLocal_99, "bystander_helping_girl_loop", 1000f, -2f, 5, 0, 1000f, 0);
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_49, -1, 1024, 2);
							TASK::TASK_GO_TO_ENTITY(0, iLocal_49, 20000, 3f, 1f, 2f, 0);
							TASK::TASK_STAND_STILL(0, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_50, iLocal_71);
						}
						PED::SET_PED_KEEP_TASK(iLocal_50, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_50, iLocal_57);
					}
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49, iLocal_64, sLocal_99, "girl_helping_girl_loop", 1000f, -2f, 5, 0, 1000f, 0);
					PED::SET_PED_KEEP_TASK(iLocal_49, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_49, iLocal_57);
					PED::SET_PED_CAN_RAGDOLL(iLocal_49, true);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					iLocal_73 = 1;
				}
			}
		}
	}
	return iLocal_73;
}

void func_57()//Position - 0x2780
{
	if (((((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -91.307045f, 6391.8535f, 30.640295f, -102.55954f, 6403.1025f, 32.454437f, 8.5f, false, true, 0) && PED::CAN_PED_SEE_HATED_PED(iLocal_48, PLAYER::PLAYER_PED_ID())) || (func_67(iLocal_48, &uLocal_58, &iLocal_59, 0, 0, 1077936128, 0) && PED::CAN_PED_SEE_HATED_PED(iLocal_48, PLAYER::PLAYER_PED_ID()))) || (__LIB_0__.func_77(1) && PED::CAN_PED_SEE_HATED_PED(iLocal_48, PLAYER::PLAYER_PED_ID()))) || func_64()) || func_63()) || func_4()) || func_62()) || PED::IS_PED_RAGDOLL(iLocal_48)) || func_61()) || func_60()) || func_58(iLocal_48))
	{
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			if (!WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iLocal_48, joaat("WEAPON_STUNGUN"), 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_49))
				{
					if (!PED::IS_PED_RAGDOLL(iLocal_48))
					{
						iLocal_63 = PED::CREATE_SYNCHRONIZED_SCENE(Local_66, Local_67, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_63, false);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49, iLocal_63, sLocal_99, "girl_girl_shot", 4f, -4f, 5, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_48, iLocal_63, sLocal_99, "villian_girl_shot", 4f, -4f, 5, 0, 1000f, 0);
						PED::SET_PED_KEEP_TASK(iLocal_49, true);
						PED::SET_PED_CAN_RAGDOLL(iLocal_49, false);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_50))
				{
					PED::SET_PED_CAN_RAGDOLL(iLocal_50, true);
				}
				bLocal_68 = true;
			}
			else
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_48, 50, 0);
			}
		}
	}
	else if (SYSTEM::TIMERA() > 6000)
	{
		if ((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_48) && PED::CAN_PED_SEE_HATED_PED(iLocal_48, PLAYER::PLAYER_PED_ID())) || (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_48) && PED::CAN_PED_SEE_HATED_PED(iLocal_48, PLAYER::PLAYER_PED_ID())))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_53))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_53, true);
			}
			if (!iLocal_72)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -91.307045f, 6391.8535f, 30.640295f, -102.55954f, 6403.1025f, 32.454437f, 8.5f, false, true, 0))
				{
					if (__LIB_35__.func_536(&Local_93, "RERHOAU", sLocal_83, 4, 0, 0, 0))
					{
						iLocal_59 = 24000;
					}
					SYSTEM::SETTIMERA(0);
					iLocal_72 = 1;
				}
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(sLocal_84, "NULL"))
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 10))
			{
				case 6:
				case 5:
				case 4:
				case 3:
				case 0:
				case 9:
				case 8:
				case 7:
				case 1:
					if (iLocal_89)
					{
						sLocal_84 = "RERHO_HELP";
						iLocal_89 = 0;
					}
					else
					{
						sLocal_84 = "RERHO_RANT";
						iLocal_89 = 1;
					}
					break;
				case 2:
					sLocal_84 = "RERHO_SCREAM";
					break;
			}
		}
		else if (__LIB_35__.func_536(&Local_93, "RERHOAU", sLocal_84, 4, iLocal_98, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
		}
	}
	else
	{
		sLocal_84 = "NULL";
	}
}

int func_58(int iParam0)//Position - 0x2A59
{
	int iVar0;
	bool bVar1;
	bVar1 = false;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
	if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iVar0, joaat("COMPONENT_AT_AR_FLSH")))
	{
		if (WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(PLAYER::PLAYER_PED_ID(), iVar0, joaat("COMPONENT_AT_AR_FLSH")))
		{
			bVar1 = true;
		}
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iVar0, joaat("COMPONENT_AT_PI_FLSH")))
	{
		if (WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(PLAYER::PLAYER_PED_ID(), iVar0, joaat("COMPONENT_AT_PI_FLSH")))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), __LIB_0__.func_85(PLAYER::PLAYER_ID())) < 8f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_60()//Position - 0x2B32
{
	if (__LIB_35__.func_175())
	{
		if (MISC::GET_GAME_TIMER() > (iLocal_91 + 60000))
		{
			bLocal_92 = true;
			return 1;
		}
	}
	else if (MISC::GET_GAME_TIMER() > (iLocal_91 + 120000))
	{
		bLocal_92 = true;
		return 1;
	}
	return 0;
}

int func_61()//Position - 0x2B6F
{
	float fVar0;
	var uVar1[32];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	fVar0 = 75f;
	iVar4 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_48, false), fVar0, fVar0, fVar0, -1);
	if (!PED::IS_PED_INJURED(iVar4))
	{
		if (ENTITY::GET_ENTITY_MODEL(iVar4) == joaat("S_F_Y_Cop_01") || ENTITY::GET_ENTITY_MODEL(iVar4) == joaat("S_M_Y_Cop_01"))
		{
			return 1;
		}
	}
	iVar5 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_48, false), fVar0, 0, 66561);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar5, false))
	{
		return 1;
	}
	iVar3 = PED::GET_PED_NEARBY_VEHICLES(iLocal_48, &uVar1);
	if (iVar3 > 0)
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar1[iVar2], false))
			{
				if (((ENTITY::GET_ENTITY_MODEL(uVar1[iVar2]) == joaat("police") || ENTITY::GET_ENTITY_MODEL(uVar1[iVar2]) == joaat("pranger")) || ENTITY::GET_ENTITY_MODEL(uVar1[iVar2]) == joaat("sheriff")) || ENTITY::GET_ENTITY_MODEL(uVar1[iVar2]) == joaat("sheriff2"))
				{
					return 1;
				}
			}
			iVar2++;
		}
	}
	return 0;
}

int func_62()//Position - 0x2C74
{
	if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_48, PLAYER::PLAYER_PED_ID(), 2f, 2f, 1.5f, false, true, 0))
	{
		if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_48))
		{
			return 1;
		}
	}
	return 0;
}

bool func_63()//Position - 0x2CA5
{
	bool bVar0;
	bVar0 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == joaat("bulldozer"))
		{
			if (!PED::IS_PED_INJURED(iLocal_50))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_50))
				{
					bVar0 = true;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_49))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_49))
				{
					bVar0 = true;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_48))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iLocal_48))
				{
					bVar0 = true;
				}
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_64()//Position - 0x2D35
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	var uVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	bVar0 = false;
	bVar1 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), &uVar3, &Var4);
		fVar6 = Var4.f_1;
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), &iVar8))
			{
				MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar8), &uVar3, &Var4);
				fVar6 = (fVar6 + Var4.f_1);
				fVar6 = (fVar6 + 3f);
			}
		}
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 15f)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_48, (fVar6 + 17f), (fVar6 + 17f), 6f, false, true, 0))
			{
				bVar1 = true;
			}
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 10f)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_48, (fVar6 + 12f), (fVar6 + 12f), 6f, false, true, 0))
			{
				bVar1 = true;
			}
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_48, (fVar6 + 8f), (fVar6 + 8f), 6f, false, true, 0))
			{
				bVar1 = true;
			}
		}
	}
	if (bVar1)
	{
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Local_46 };
		fVar5 = MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1);
		if (__LIB_30__.func_887(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fVar5, 15f))
		{
			bVar0 = true;
		}
		Var2 = { Local_46 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		fVar5 = MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1);
		if (__LIB_30__.func_887(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fVar5, 15f))
		{
			bVar0 = true;
		}
	}
	iVar7 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar7, -91.56341f, 6391.747f, 30.639702f, -101.2611f, 6401.6997f, 32.454494f, 7.5f, false, true, 0))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_67(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, float fParam5, int iParam6)//Position - 0x2FE5
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	bVar2 = false;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !bParam4)
	{
		if (PED::IS_PED_ON_FOOT(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !bParam4)
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			Var4 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fVar5 = SYSTEM::VDIST(Var3, Var4);
			if (!BitTest(iParam3, 3))
			{
				if (__LIB_30__.func_886(iParam0, iParam6))
				{
					__LIB_30__.func_882("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					__LIB_30__.func_882("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					__LIB_30__.func_885(iParam0);
					return 1;
				}
			}
			if (!BitTest(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (MISC::IS_BULLET_IN_AREA(Var4, fParam5, true))
				{
					__LIB_30__.func_882("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					__LIB_30__.func_882("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					__LIB_30__.func_885(iParam0);
					return 1;
				}
				if (MISC::IS_PROJECTILE_IN_AREA(Var4 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var4 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), false))
				{
					__LIB_30__.func_882("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					__LIB_30__.func_882("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					__LIB_30__.func_885(iParam0);
					return 1;
				}
			}
			if (!BitTest(iParam3, 2))
			{
				fVar0 = WEAPON::GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						if (fVar5 < fVar0)
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 17))
							{
								__LIB_30__.func_882("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								__LIB_30__.func_882("	aggro Ped knows player is pointing gun\n");
								__LIB_35__.func_177("		lockOnTimer = ", *iParam2);
								__LIB_30__.func_882("\n");
								__LIB_35__.func_177("		time since not LockedOn = ", (MISC::GET_GAME_TIMER() - iLocal_2));
								__LIB_30__.func_882("\n");
								bVar2 = true;
								if (MISC::GET_GAME_TIMER() > (iLocal_2 + *iParam2))
								{
									__LIB_30__.func_882("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									__LIB_30__.func_885(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!BitTest(iParam3, 0))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_30__.func_882("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					__LIB_30__.func_882("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					__LIB_30__.func_885(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_2 = MISC::GET_GAME_TIMER();
	}
	return 0;
}

void func_74()//Position - 0x32D5
{
	if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -62.6571f, 6447.0796f, 40.49928f, -153.64105f, 6354.579f, 23.990635f, 144.25f, false, true, 0) || CAM::IS_SPHERE_VISIBLE(Local_46, 15f)) || bLocal_68) || func_4())
	{
		iLocal_53 = __LIB_35__.func_198(iLocal_48, 1, 0);
		if (HUD::DOES_BLIP_EXIST(iLocal_53))
		{
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_53, false);
		}
		__LIB_40__.func_733(1);
		iLocal_91 = MISC::GET_GAME_TIMER();
		PED::SET_CREATE_RANDOM_COPS(false);
	}
	else
	{
		func_57();
	}
}

void func_102()//Position - 0x5654
{
	if (HUD::DOES_BLIP_EXIST(iLocal_53))
	{
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_53, true);
	}
	if (!PED::IS_PED_INJURED(iLocal_48))
	{
		PED::SET_PED_RESET_FLAG(iLocal_48, 156, true);
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_63))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_63) > 0.1f)
			{
				if (!iLocal_74)
				{
					if (!PED::IS_PED_INJURED(iLocal_49))
					{
						PED::SET_PED_SHOOTS_AT_COORD(iLocal_48, PED::GET_PED_BONE_COORDS(iLocal_49, 31086, 0f, 0f, -0.1f), false);
					}
					iLocal_74 = 1;
					iLocal_72 = 1;
					func_103();
				}
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_49))
		{
			PED::SET_PED_CAN_RAGDOLL(iLocal_49, true);
			ENTITY::SET_ENTITY_HEALTH(iLocal_49, 0, 0);
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_63))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_63) > 0.6f)
			{
				func_103();
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_49))
		{
			PED::SET_PED_CAN_RAGDOLL(iLocal_49, true);
			ENTITY::SET_ENTITY_HEALTH(iLocal_49, 0, 0);
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_63))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_63) == 1f)
			{
				if (!PED::IS_PED_INJURED(iLocal_49))
				{
					PED::SET_PED_CAN_RAGDOLL(iLocal_49, true);
					ENTITY::SET_ENTITY_HEALTH(iLocal_49, 0, 0);
				}
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_49))
			{
				PED::SET_PED_CAN_RAGDOLL(iLocal_49, true);
				ENTITY::SET_ENTITY_HEALTH(iLocal_49, 0, 0);
			}
			func_103();
		}
	}
}

void func_103()//Position - 0x5769
{
	if (!iLocal_75)
	{
		if (!PED::IS_PED_INJURED(iLocal_48))
		{
			TASK::CLEAR_PED_TASKS(iLocal_48);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_56, iLocal_55);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_55, iLocal_56);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_57, iLocal_55);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_57, iLocal_56);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_56, iLocal_57);
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_48, PLAYER::PLAYER_PED_ID(), 50f, 50f, 50f, false, true, 0))
			{
				TASK::TASK_COMBAT_PED(iLocal_48, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_48, 1);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_48, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
			}
			PED::SET_PED_KEEP_TASK(iLocal_48, true);
			__LIB_35__.func_536(&Local_93, "RERHOAU", "RERHO_DIE", 4, 0, 0, 0);
			iLocal_75 = 1;
		}
	}
}

void func_104()//Position - 0x5818
{
	if (bLocal_90)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50, false);
		TASK::TASK_SMART_FLEE_COORD(iLocal_50, Local_46, 50f, -1, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_50, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_50);
		__LIB_6__.func_771();
	}
}

void func_105()//Position - 0x584F
{
	if (Local_93[2 /*10*/].f_7)
	{
		__LIB_0__.func_202(&Local_93, 2);
	}
	func_108();
	PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &Local_46, 1, 3f, 0f);
	MISC::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(1, 0.5f);
	MISC::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(1, 1f);
	if (Local_93[1 /*10*/].f_7)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_53))
		{
			HUD::REMOVE_BLIP(&iLocal_53);
		}
		__LIB_0__.func_202(&Local_93, 1);
	}
	if (iLocal_72)
	{
		if (!WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_50, joaat("WEAPON_PISTOL"), 0) && PED::IS_PED_INJURED(iLocal_48))
		{
			if (!bLocal_92)
			{
				iLocal_45 = 2;
			}
			else if (__LIB_36__.func_42(&Local_93, "RERHOAU", "RERHO_BLAME", "RERHO_BLAME_3", 4, iLocal_98, 0))
			{
				iLocal_45 = 2;
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_50))
			{
				if (!PED::IS_PED_INJURED(iLocal_48))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_50, iLocal_48, 100f, -1, false, false);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_50, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
				}
				PED::SET_PED_KEEP_TASK(iLocal_50, true);
				if (!bLocal_92)
				{
					if (__LIB_36__.func_42(&Local_93, "RERHOAU", "RERHO_BLAME", "RERHO_BLAME_3", 4, iLocal_98, 0))
					{
					}
					else
					{
						__LIB_6__.func_834(iLocal_50, "GENERIC_SHOCKED_HIGH", 24);
					}
				}
				else
				{
					__LIB_6__.func_834(iLocal_50, "GENERIC_SHOCKED_HIGH", 24);
				}
				SYSTEM::WAIT(0);
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PED::SET_CREATE_RANDOM_COPS(true);
			iLocal_45 = 2;
		}
	}
	else
	{
		func_163();
	}
}

void func_108()//Position - 0x59FF
{
	if (func_4())
	{
		bLocal_90 = true;
	}
	if (bLocal_90 == 0)
	{
		if (!PED::IS_PED_INJURED(iLocal_50) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_72)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
				TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 5f, 2f, 2f, 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				TASK::TASK_PLAY_ANIM(0, sLocal_99, "bystander_bystander_angry", 8f, -8f, 1500, 0, 0f, false, false, false);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_50, iLocal_71);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
				PED::SET_PED_KEEP_TASK(iLocal_50, true);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_46, 1f, 20000, 40000f, 0.5f);
				TASK::TASK_LOOK_AT_COORD(0, Local_46, -1, 2048, 2);
				TASK::TASK_PLAY_ANIM(0, sLocal_99, "bystander_bystander_angry", 8f, -8f, 1500, 0, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_50, iLocal_71);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
				PED::SET_PED_KEEP_TASK(iLocal_50, true);
			}
		}
	}
}

void func_109()//Position - 0x5B11
{
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49, PLAYER::PLAYER_PED_ID(), true))
	{
		if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 2))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
		PED::SET_PED_CAN_RAGDOLL(iLocal_49, true);
		ENTITY::SET_ENTITY_HEALTH(iLocal_49, 0, 0);
		bLocal_68 = true;
		iLocal_72 = 1;
		func_103();
	}
	else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_49))
	{
		AUDIO::PLAY_PAIN(iLocal_49, 4, 0, 0);
	}
}

void func_110()//Position - 0x5B76
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_46, 50f, 50f, 25f, false, true, 0))
	{
		iLocal_98 = 0;
	}
	else
	{
		iLocal_98 = 1;
	}
}

int func_112()//Position - 0x5C30
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	Local_46 = { -96.4f, 6398.201f, 30.4542f };
	fLocal_47 = 0f;
	iVar0 = joaat("A_M_M_Hillbilly_02");
	iVar1 = joaat("A_M_M_Business_01");
	iVar2 = joaat("A_F_M_Tourist_01");
	sVar3 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar2);
	STREAMING::REQUEST_MODEL(iVar1);
	STREAMING::REQUEST_ANIM_DICT(sLocal_99);
	if (((STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar2)) && STREAMING::HAS_MODEL_LOADED(iVar1)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_99))
	{
		MISC::CLEAR_AREA(Local_46, 5f, true, true, false, false);
		iLocal_49 = PED::CREATE_PED(5, iVar2, Local_46, fLocal_47, true, true);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_49, true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_49, sVar3);
		PED::SET_PED_CONFIG_FLAG(iLocal_49, 20, true);
		iLocal_48 = PED::CREATE_PED(22, iVar0, Local_46, fLocal_47, true, true);
		ENTITY::SET_ENTITY_HEALTH(iLocal_48, 125, 0);
		PED::SET_PED_MAX_HEALTH(iLocal_48, 125);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_48, 128, true);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_48, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_48, 42, true);
		PED::SET_PED_HEARING_RANGE(iLocal_48, 1.5f);
		AUDIO::STOP_PED_SPEAKING(iLocal_48, true);
		PED::SET_PED_SEEING_RANGE(iLocal_48, 40f);
		PED::SET_PED_CONFIG_FLAG(iLocal_48, 20, true);
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iLocal_48, fLocal_85);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iLocal_48, fLocal_86);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iLocal_48, fLocal_87);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iLocal_48, fLocal_88);
		iLocal_50 = PED::CREATE_PED(4, iVar1, -98.113f, 6405.354f, 30.6005f, fLocal_47, true, true);
		TASK::ADD_COVER_BLOCKING_AREA(Vector(31.640238f, 6405.0576f, -98.41389f) - Vector(5f, 5f, 5f), Vector(31.640238f, 6405.0576f, -98.41389f) + Vector(5f, 5f, 5f), false, false, true, false);
		iLocal_61 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(31.640238f, 6405.0576f, -98.41389f) - Vector(40f, 40f, 40f), Vector(31.640238f, 6405.0576f, -98.41389f) + Vector(40f, 40f, 40f), false, true, true, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_50, false);
		AUDIO::STOP_PED_SPEAKING(iLocal_50, true);
		Local_46.f_2 = (Local_46.f_2 + 1f);
		Local_66 = { Local_46 };
		Local_67 = { 0f, 0f, fLocal_47 };
		iLocal_63 = PED::CREATE_SYNCHRONIZED_SCENE(Local_66, Local_67, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_63, true);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_48, iLocal_63, sLocal_99, "villian_struggle_loop", 1000f, -4f, 5, 0, 1000f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49, iLocal_63, sLocal_99, "girl_struggle_loop", 1000f, -4f, 5, 0, 1000f, 0);
		iLocal_65 = PED::CREATE_SYNCHRONIZED_SCENE(Local_66, Local_67, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_65, true);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_50, iLocal_65, sLocal_99, "bystander_taking_cover", 1000f, -1.5f, 5, 0, 1000f, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_50, 185, true);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_48, joaat("WEAPON_PISTOL"), -1, true, true);
		PED::SET_PED_AS_ENEMY(iLocal_48, true);
		PED::ADD_RELATIONSHIP_GROUP("re_rescuehostage relManager", &iLocal_57);
		PED::ADD_RELATIONSHIP_GROUP("re_rescuehostage relBadGuy", &iLocal_56);
		iLocal_55 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_56, iLocal_55);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_55, iLocal_56);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_50, iLocal_57);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_48, iLocal_56);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_48, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50, 11, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50, 17, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50, 13, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50, 5, false);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_50, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49, 11, true);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_49, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49, 13, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49, 5, false);
		__LIB_0__.func_203(&Local_93, 0, PLAYER::PLAYER_PED_ID(), sLocal_82, 0, 1);
		__LIB_0__.func_203(&Local_93, 1, iLocal_48, "RHCriminal", 0, 1);
		__LIB_0__.func_203(&Local_93, 2, iLocal_49, "RHHostage", 0, 1);
		__LIB_0__.func_203(&Local_93, 3, iLocal_50, "RHBystander", 0, 1);
		PED::SET_CREATE_RANDOM_COPS(false);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		__LIB_30__.func_909(1);
		MISC::CLEAR_AREA_OF_OBJECTS(-89f, 6392f, 32f, 3f, 2);
		SYSTEM::SETTIMERA(8000);
		return 1;
	}
	return 0;
}

void func_117()//Position - 0x609D
{
	switch (__LIB_18__.func_173())
	{
		case 0:
			sLocal_82 = "MICHAEL";
			sLocal_83 = "RERHO_MDOWN";
			break;
		case 1:
			sLocal_82 = "FRANKLIN";
			sLocal_83 = "RERHO_FDOWN";
			break;
		case 2:
			sLocal_82 = "TREVOR";
			sLocal_83 = "RERHO_TDOWN";
			break;
	}
}

void func_163()//Position - 0x77E1
{
	if (__LIB_35__.func_175())
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PED::SET_CREATE_RANDOM_COPS(true);
	}
	if (iLocal_45 != 0)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_56);
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_57);
		AUDIO::SET_AUDIO_SCRIPT_CLEANUP_TIME(20000);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_61, false);
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_60);
		__LIB_30__.func_909(0);
	}
	if (!PED::IS_PED_INJURED(iLocal_48) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_SMART_FLEE_PED(iLocal_48, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_48, true);
		SYSTEM::WAIT(0);
	}
	__LIB_41__.func_466(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

