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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2) || REPLAY::REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_1();
}

void func_1()//Position - 0x4F
{
	struct<3> Var0;
	int iVar1;
	while (!func_9(&iLocal_20))
	{
		SYSTEM::WAIT(0);
	}
	if (!PED::IS_PED_INJURED(iLocal_20))
	{
		if (!Global_96936)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_20, true, true);
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_20, joaat("SCRIPT_TASK_ANY")) != 7)
			{
				TASK::CLEAR_PED_TASKS(iLocal_20);
			}
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_20, true);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_20, false))
			{
				if (!PED::IS_PED_IN_COMBAT(iLocal_20, 0) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_20, false))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, Var0, 6000);
				}
			}
			TASK::TASK_LOOK_AT_COORD(0, Var0, 6000, 0, 2);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_20, iVar1);
		}
		func_2(iLocal_20);
	}
	while (!CAM::IS_SCREEN_FADED_OUT())
	{
		SYSTEM::WAIT(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_20))
	{
		if (!PED::IS_PED_INJURED(iLocal_20))
		{
			PED::SET_PED_KEEP_TASK(iLocal_20, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_20);
	}
	Global_96936 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_2(int iParam0)//Position - 0x13C
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER() + 1000;
	while (MISC::GET_GAME_TIMER() < iVar0 && !CAM::IS_SCREEN_FADED_OUT())
	{
		SYSTEM::WAIT(0);
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (__LIB_18__::func_168(PLAYER::PLAYER_PED_ID()))
			{
				case 2:
					__LIB_5__::func_759(iParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3);
					break;
				case 0:
					__LIB_5__::func_759(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 2)
		{
			switch (__LIB_18__::func_168(PLAYER::PLAYER_PED_ID()))
			{
				case 1:
					__LIB_5__::func_759(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3);
					break;
				case 0:
					__LIB_5__::func_759(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 0)
		{
			switch (__LIB_18__::func_168(PLAYER::PLAYER_PED_ID()))
			{
				case 2:
					__LIB_5__::func_759(iParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3);
					break;
				case 1:
					__LIB_5__::func_759(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3);
					break;
				}
			}
	}
}

int func_9(var uParam0)//Position - 0x4B9
{
	int iVar0;
	iLocal_18 = 0;
	while (iLocal_18 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97810[iLocal_18]) && !PED::IS_PED_INJURED(Global_97810[iLocal_18]))
		{
			if (Global_97810[iLocal_18] != PLAYER::PLAYER_PED_ID())
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_97810[iLocal_18]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Global_97810[iLocal_18], false) || !ENTITY::IS_ENTITY_ATTACHED(Global_97810[iLocal_18]))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_97810[iLocal_18], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) < 10f)
						{
							iLocal_19 = __LIB_18__::func_168(Global_97810[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != __LIB_18__::func_173())
								{
									if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_97810[iLocal_18], PLAYER::PLAYER_PED_ID(), 17))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(Global_97810[iLocal_18], false))
										{
											iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_97810[iLocal_18], false);
										}
										if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) || !ENTITY::DOES_ENTITY_EXIST(iVar0))
										{
											*uParam0 = Global_97810[iLocal_18];
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_18++;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	return 0;
}

