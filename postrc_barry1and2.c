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
	var uLocal_39 = 0;
	int* iLocal_40 = NULL;
	int* iLocal_41 = NULL;
	int* iLocal_42 = NULL;
	int iLocal_43 = 0;
	char* sLocal_44 = NULL;
	char* sLocal_45 = NULL;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
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
	sLocal_44 = "RCMBarryLeadInOut";
	sLocal_45 = "idle";
	Local_49 = { 189.5964f, -956.0344f, 29.5771f };
	Local_50 = { 190.2424f, -956.379f, 28.63f };
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
	if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		}
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_22(0);
	}
	STREAMING::REQUEST_ANIM_DICT(sLocal_44);
	HUD::REQUEST_ADDITIONAL_TEXT("BARY1", 7);
	while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_44) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
		SYSTEM::WAIT(0);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
	__LIB_0__::func_715(PLAYER::PLAYER_PED_ID());
	iLocal_46 = MISC::GET_GAME_TIMER() + 13000;
	iLocal_47 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	func_19();
	while (!__LIB_12__::func_754(&iLocal_43, 49, Local_50, __LIB_0__::func_503(1.12f), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
		SYSTEM::WAIT(0);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
	func_12();
	iLocal_48 = MISC::GET_GAME_TIMER() + 1000;
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
	while (true)
	{
		__LIB_0__::func_715(PLAYER::PLAYER_PED_ID());
		if (MISC::GET_GAME_TIMER() < iLocal_48)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
		}
		func_11();
		if (!__LIB_0__::func_715(iLocal_43))
		{
			func_22(0);
		}
		if (func_3())
		{
		}
		if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_50, 1) > 70f)
		{
			__LIB_0__::func_122(&iLocal_40, 0);
			__LIB_0__::func_122(&iLocal_41, 0);
			__LIB_0__::func_122(&iLocal_42, 0);
			func_22(0);
		}
		SYSTEM::WAIT(0);
	}
}

int func_3()//Position - 0x24E
{
	var uVar0;
	if (((((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(iLocal_43)) && !__LIB_0__::func_75()) && MISC::GET_GAME_TIMER() > iLocal_46) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_43, 1) < 20f) && !MISC::GET_MISSION_FLAG())
	{
		uVar0 = 16;
		__LIB_0__::func_222(&uVar0, 0, iLocal_43, "BARRY", 0, 1);
		__LIB_14__::func_654(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(12000, 18000));
		return 1;
	}
	return 0;
}

char* func_6()//Position - 0x36F
{
	char* sVar0;
	switch (iLocal_47)
	{
		case 0:
			sVar0 = "BARY1_RCMLI1";
			break;
		case 1:
			sVar0 = "BARY1_RCMLI2";
			break;
		case 2:
			sVar0 = "BARY1_RCMLI3";
			break;
		case 3:
			sVar0 = "BARY1_RCMLI4";
			break;
		case 4:
			sVar0 = "BARY1_RCMLI5";
			break;
	}
	iLocal_47++;
	if (iLocal_47 > 4)
	{
		iLocal_47 = 0;
	}
	return sVar0;
}

void func_11()//Position - 0x511
{
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_50, 5f))
	{
		if (__LIB_0__::func_121(iLocal_43))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_43, false);
			PED::APPLY_DAMAGE_TO_PED(iLocal_43, 1000, true, 0);
		}
		if (__LIB_0__::func_121(iLocal_41))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_41, false);
		}
		if (__LIB_0__::func_121(iLocal_40))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_40, false);
		}
	}
}

void func_12()//Position - 0x561
{
	if (__LIB_0__::func_121(iLocal_43))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_43))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_43, true, false);
		}
		PED::SET_PED_PROP_INDEX(iLocal_43, 1, 0, 0, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_43, true);
		PED::SET_PED_MONEY(iLocal_43, 0);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_43, false);
		PED::SET_PED_NAME_DEBUG(iLocal_43, "POSTBARRY");
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_43, joaat("PLAYER"));
		ENTITY::SET_ENTITY_COLLISION(iLocal_43, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_43, true);
		ENTITY::SET_ENTITY_COORDS(iLocal_43, Local_50, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_43, __LIB_0__::func_503(1.12f));
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_43, true);
		TASK::TASK_PLAY_ANIM(iLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0f, false, false, false);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_43, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	}
}

void func_19()//Position - 0x737
{
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), false))
	{
		iLocal_41 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), false, false, true);
		if (__LIB_0__::func_715(iLocal_41))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_41))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_41, true, false);
			}
			Local_49 = { 189.5964f, -956.0344f, 29.54f };
			ENTITY::SET_ENTITY_COORDS(iLocal_41, Local_49, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_41, __LIB_0__::func_503(-2.01f));
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_41, true);
		}
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), false))
	{
		iLocal_40 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), false, false, true);
		if (__LIB_0__::func_715(iLocal_40))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_40))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_40, true, false);
			}
			Local_49 = { 190.2574f, -956.3513f, 29.621f };
			ENTITY::SET_ENTITY_COORDS(iLocal_40, Local_49, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_40, __LIB_0__::func_503(-1.68f));
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_40, true);
		}
	}
	else
	{
		Local_49 = { 190.2574f, -956.3513f, 29.621f };
		__LIB_14__::func_807(&iLocal_40, joaat("prop_chair_08"), Local_49, __LIB_0__::func_503(-1.68f));
		ENTITY::SET_ENTITY_COORDS(iLocal_40, Local_49, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_40, __LIB_0__::func_503(-1.68f));
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_40, true);
	}
	Local_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_49, 25f, joaat("prop_protest_sign_01"), false))
	{
		iLocal_42 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_49, 25f, joaat("prop_protest_sign_01"), false, false, true);
		if (__LIB_0__::func_715(iLocal_42))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_42))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_42, true, false);
			}
			Local_49.f_2 = 29.603f;
			ENTITY::SET_ENTITY_COORDS(iLocal_42, Local_49, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_42, 23.45f);
		}
	}
	else
	{
		__LIB_14__::func_807(&iLocal_42, joaat("prop_protest_sign_01"), Local_49, 23.45f);
		ENTITY::SET_ENTITY_COORDS(iLocal_42, Local_49, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_42, 23.45f);
	}
}

void func_22(bool bParam0)//Position - 0x9BA
{
	if (bParam0)
	{
		__LIB_0__::func_0(&iLocal_43);
	}
	else
	{
		__LIB_0__::func_124(&iLocal_43, 1, 0, 1);
	}
	if (__LIB_0__::func_121(iLocal_41))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_41, false);
	}
	if (__LIB_0__::func_121(iLocal_40))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_40, false);
	}
	if (bParam0)
	{
		__LIB_0__::func_123(&iLocal_40);
		__LIB_0__::func_123(&iLocal_41);
		__LIB_0__::func_123(&iLocal_42);
	}
	else
	{
		__LIB_0__::func_122(&iLocal_40, 0);
		__LIB_0__::func_122(&iLocal_41, 0);
		__LIB_0__::func_122(&iLocal_42, 0);
	}
	STREAMING::REMOVE_ANIM_DICT(sLocal_44);
	HUD::CLEAR_ADDITIONAL_TEXT(7, false);
	SCRIPT::TERMINATE_THIS_THREAD();
}

