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
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	struct<3> Local_46 = { 0, 0, 0 } ;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	struct<2> Local_51 = { 0, 5 } ;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 5;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
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
	Local_45 = { ScriptParam_51.f_1[0 /*3*/] };
	__LIB_0__::func_199();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			if (func_3(3))
			{
				switch (iLocal_43)
				{
					case 0:
						if (iLocal_44 == 1)
						{
							iLocal_43 = 1;
						}
						else
						{
							func_2();
						}
						break;
					case 1:
						if (iLocal_47 == 0)
						{
							func_1();
						}
						break;
				}
			}
			else
			{
				__LIB_0__::func_199();
			}
		}
		else
		{
			__LIB_0__::func_199();
		}
	}
}

void func_1()//Position - 0xE7
{
	if (SYSTEM::TIMERB() > 7000)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_45, 10f, 10f, 10f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_45, 3f, 3f, 3f, false, true, 0))
		{
			SYSTEM::SETTIMERB(0);
			Local_46 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			TASK::OPEN_SEQUENCE_TASK(&iLocal_50);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_46, 0);
			TASK::TASK_PLAY_ANIM(0, "amb@BUSKER", "SAX_loop_B", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_50);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_48, false))
			{
				TASK::TASK_PERFORM_SEQUENCE(iLocal_48, iLocal_50);
			}
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_50);
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_45, 3f, 3f, 3f, false, true, 0))
		{
			Local_46 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			SYSTEM::SETTIMERB(0);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_50);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_46, 0);
			TASK::TASK_PLAY_ANIM(0, "amb@BUSKER", "SAX_loop_A", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_50);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_48, false))
			{
				TASK::TASK_PERFORM_SEQUENCE(iLocal_48, iLocal_50);
			}
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_50);
		}
	}
}

void func_2()//Position - 0x1FD
{
	iLocal_47 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_45, 50f, 50f, 50f, false, true, 0))
	{
		STREAMING::REQUEST_MODEL(joaat("A_F_M_BevHills_02"));
		STREAMING::REQUEST_MODEL(joaat("G_M_Y_MexGoon_02"));
		while (!STREAMING::HAS_MODEL_LOADED(joaat("A_F_M_BevHills_02")) || !STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_MexGoon_02")))
		{
			SYSTEM::WAIT(0);
		}
		STREAMING::REQUEST_ANIM_DICT("amb@BUSKER");
		while (!STREAMING::HAS_ANIM_DICT_LOADED("amb@BUSKER"))
		{
			SYSTEM::WAIT(0);
		}
		Local_46.f_2 = (Local_45.f_2 - 1f);
		iLocal_48 = PED::CREATE_PED(19, joaat("G_M_Y_MexGoon_02"), Local_45.f_0, Local_45.f_1, Local_46.f_2, 0f, true, true);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_48, false))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_50);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_46, 0);
			TASK::TASK_PLAY_ANIM(0, "amb@BUSKER", "SAX_loop_A", 8f, -8f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_50);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_48, iLocal_50);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_50);
		}
		if (iLocal_47 == 1)
		{
			Local_46 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_48, 3.8f, 0.8f, 0f) };
			iLocal_49 = PED::CREATE_PED(5, joaat("A_F_M_BevHills_02"), Local_46, 0f, true, true);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_49, false))
			{
				TASK::TASK_TURN_PED_TO_FACE_COORD(iLocal_49, Local_45, 0);
			}
		}
		iLocal_44 = 1;
	}
}

int func_3(int iParam0)//Position - 0x331
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		case 1:
			if (__LIB_0__::func_39(6) || __LIB_0__::func_39(7))
			{
				return 1;
			}
			else
			{
				return func_3(3);
			}
			break;
		case 2:
			return 1;
			break;
		case 3:
			if (__LIB_6__::func_763(5))
			{
				if (__LIB_32__::func_573(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

