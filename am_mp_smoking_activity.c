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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	float fLocal_62 = 0f;
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
	var uLocal_85 = -1;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
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
	struct<7> Local_109 = { 2, 0, 0, 2, 0, 0, 2 } ;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	struct<37> Local_112 = { 1065353216, 0, -1, 0, -1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_303();
	}
	else
	{
		func_301();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_27();
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_301();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_21();
		}
		if (__LIB_3__::func_870(PLAYER::PLAYER_ID()) && __LIB_6__::func_25() != 0)
		{
			func_301();
		}
		if ((((!__LIB_3__::func_880(PLAYER::PLAYER_ID()) && !__LIB_3__::func_870(PLAYER::PLAYER_ID())) && !__LIB_4__::func_970(PLAYER::PLAYER_ID())) && !__LIB_3__::func_996(PLAYER::PLAYER_ID())) && !__LIB_4__::func_738(PLAYER::PLAYER_ID()))
		{
			func_301();
		}
		if (__LIB_6__::func_949() || !func_1())
		{
			func_301();
		}
	}
}

int func_1()//Position - 0x13D
{
	if ((((((__LIB_2__::func_844(joaat("rm_GamingFloor_01")) || __LIB_2__::func_844(joaat("rm_Lounge_01"))) || __LIB_2__::func_844(joaat("rm_Lounge_02"))) || __LIB_3__::func_870(PLAYER::PLAYER_ID())) || __LIB_4__::func_970(PLAYER::PLAYER_ID())) || __LIB_3__::func_996(PLAYER::PLAYER_ID())) || __LIB_4__::func_738(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_21()//Position - 0x965
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	struct<3> Var9;
	struct<3> Var10;
	iVar0 = 0;
	while (iVar0 < Local_112.f_36)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109[iVar0]))
		{
			STREAMING::REQUEST_MODEL(joaat("p_cs_lighter_01"));
			if (!STREAMING::HAS_MODEL_LOADED(joaat("p_cs_lighter_01")))
			{
				return;
			}
			STREAMING::REQUEST_ANIM_DICT(__LIB_9__::func_117());
			if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_9__::func_117()))
			{
				return;
			}
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(__LIB_9__::func_117(), "blunt_enter_lighter", func_25(iVar0), func_24(iVar0), 0f, 2) };
				Var3 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(__LIB_9__::func_117(), "blunt_enter_lighter", func_25(iVar0), func_24(iVar0), 0f, 2) };
				iVar1 = OBJECT::CREATE_OBJECT(joaat("p_cs_lighter_01"), Var2, true, true, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cs_lighter_01"));
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, false);
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
				ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar1, true);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, Var2, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iVar1, Var3, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
				Local_109[iVar0] = NETWORK::OBJ_TO_NET(iVar1);
				STREAMING::REMOVE_ANIM_DICT(__LIB_9__::func_117());
			}
		}
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_3[iVar0]))
		{
			iVar4 = func_22(iVar0);
			STREAMING::REQUEST_MODEL(iVar4);
			if (!STREAMING::HAS_MODEL_LOADED(iVar4))
			{
				return;
			}
			STREAMING::REQUEST_ANIM_DICT(__LIB_9__::func_117());
			if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_9__::func_117()))
			{
				return;
			}
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				Var6 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(__LIB_9__::func_117(), "blunt_enter_joint", func_25(iVar0), func_24(iVar0), 0f, 2) };
				Var7 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(__LIB_9__::func_117(), "blunt_enter_joint", func_25(iVar0), func_24(iVar0), 0f, 2) };
				iVar5 = OBJECT::CREATE_OBJECT(iVar4, Var6, true, true, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar4);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar5, false);
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar5, true);
				ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar5, true);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar5, Var6, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iVar5, Var7, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iVar5, true);
				Local_109.f_3[iVar0] = NETWORK::OBJ_TO_NET(iVar5);
				STREAMING::REMOVE_ANIM_DICT(__LIB_9__::func_117());
			}
		}
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_6[iVar0]))
		{
			STREAMING::REQUEST_MODEL(joaat("ex_prop_exec_ashtray_01"));
			if (!STREAMING::HAS_MODEL_LOADED(joaat("ex_prop_exec_ashtray_01")))
			{
				return;
			}
			STREAMING::REQUEST_ANIM_DICT(__LIB_9__::func_117());
			if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_9__::func_117()))
			{
				return;
			}
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				Var9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(__LIB_9__::func_117(), "blunt_enter_ashtray", func_25(iVar0), func_24(iVar0), 0f, 2) };
				Var10 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(__LIB_9__::func_117(), "blunt_enter_ashtray", func_25(iVar0), func_24(iVar0), 0f, 2) };
				iVar8 = OBJECT::CREATE_OBJECT(joaat("ex_prop_exec_ashtray_01"), Var9, true, true, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ex_prop_exec_ashtray_01"));
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar8, false);
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar8, true);
				ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar8, true);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar8, Var9, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iVar8, Var10, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iVar8, true);
				Local_109.f_6[iVar0] = NETWORK::OBJ_TO_NET(iVar8);
				STREAMING::REMOVE_ANIM_DICT(__LIB_9__::func_117());
			}
		}
		iVar0++;
	}
}

int func_22(int iParam0)//Position - 0xC30
{
	if (func_23(iParam0))
	{
		return MISC::GET_HASH_KEY("P_CS_Joint_01");
	}
	return MISC::GET_HASH_KEY("ng_proc_cigarette01a");
}

bool func_23(int iParam0)//Position - 0xC52
{
	return Local_112.f_9[iParam0 /*13*/].f_12;
}

Vector3 func_24(int iParam0)//Position - 0xC64
{
	if (iParam0 >= 0 && iParam0 <= Local_112.f_36)
	{
		return Local_112.f_9[iParam0 /*13*/].f_9;
	}
	return 0f, 0f, 0f;
}

Vector3 func_25(int iParam0)//Position - 0xC91
{
	if (iParam0 >= 0 && iParam0 <= Local_112.f_36)
	{
		return Local_112.f_9[iParam0 /*13*/].f_6;
	}
	return 0f, 0f, 0f;
}

void func_27()//Position - 0xCC9
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	if (((Global_1946250.f_3603 || (Global_2667225.f_2681 && CAM::IS_SCREEN_FADED_OUT())) || __LIB_0__::func_497()) || (!__LIB_4__::func_715() && Local_112.f_8 > 2))
	{
		func_296(1, 0);
		Global_1946250.f_3603 = 0;
	}
	if (Local_112.f_8 > 1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CAN_HEAD_IK(PLAYER::PLAYER_PED_ID(), false);
		CAM::SET_THIRD_PERSON_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(-70.0027f, -5.1277f);
	}
	switch (Local_112.f_8)
	{
		case 0:
			func_295(1);
			break;
		case 1:
			if ((((((((((((__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_3__::func_633()) && !__LIB_2__::func_368()) && !BitTest(Global_1946250.f_4, 2)) && !__LIB_3__::func_998(PLAYER::PLAYER_ID())) && func_291(PLAYER::PLAYER_ID())) && func_288()) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109[Local_112.f_3])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_3[Local_112.f_3])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_6[Local_112.f_3])) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !(__LIB_2__::func_380() && __LIB_3__::func_880(PLAYER::PLAYER_ID())))
			{
				if (__LIB_4__::func_970(PLAYER::PLAYER_ID()))
				{
					MISC::SET_BIT(&(Global_1946250.f_7), 5);
				}
				if (__LIB_3__::func_996(PLAYER::PLAYER_ID()))
				{
					MISC::SET_BIT(&(Global_1946250.f_8), 2);
				}
				if (__LIB_4__::func_738(PLAYER::PLAYER_ID()))
				{
					MISC::SET_BIT(&(Global_1946250.f_9), 29);
				}
				if (Local_112.f_4 == -1)
				{
					__LIB_7__::func_508(&(Local_112.f_4), 4, "BLUNT_SIT_PRMPT" /* GXT: Press ~INPUT_CONTEXT~ to sit down. */, 0, 0, 0, 0);
				}
				else if (__LIB_2__::func_187(Local_112.f_4, 1))
				{
					__LIB_6__::func_404(&(Local_112.f_4));
					Local_112.f_4 = -1;
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
					MISC::SET_BIT(&(Global_1946250.f_6), 11);
					func_295(2);
				}
			}
			else
			{
				if (__LIB_4__::func_970(PLAYER::PLAYER_ID()))
				{
					MISC::CLEAR_BIT(&(Global_1946250.f_7), 5);
				}
				if (__LIB_3__::func_996(PLAYER::PLAYER_ID()))
				{
					MISC::CLEAR_BIT(&(Global_1946250.f_8), 2);
				}
				if (__LIB_4__::func_738(PLAYER::PLAYER_ID()))
				{
					MISC::CLEAR_BIT(&(Global_1946250.f_9), 29);
				}
				if (Local_112.f_4 != -1)
				{
					__LIB_6__::func_404(&(Local_112.f_4));
					Local_112.f_4 = -1;
				}
			}
			break;
		case 2:
			STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_safehouse");
			STREAMING::REQUEST_ANIM_DICT(__LIB_9__::func_117());
			if ((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SAFEHOUSE_FRANKLIN_SOFA", false, -1) && STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_safehouse")) && STREAMING::HAS_ANIM_DICT_LOADED(__LIB_9__::func_117()))
			{
				Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(__LIB_9__::func_117(), "enter", func_25(Local_112.f_3), func_24(Local_112.f_3), 0f, 2) };
				Var2 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(__LIB_9__::func_117(), "enter", func_25(Local_112.f_3), func_24(Local_112.f_3), 0f, 2) };
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var1, 1f, 20000, Var2.f_2, 0.05f);
				func_295(3);
			}
			break;
		case 3:
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_3[Local_112.f_3]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_3[Local_112.f_3]);
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_6[Local_112.f_3]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_6[Local_112.f_3]);
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109[Local_112.f_3]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109[Local_112.f_3]);
			}
			if ((((NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_3[Local_112.f_3]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_6[Local_112.f_3])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109[Local_112.f_3])) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0)
			{
				Local_112.f_2 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_25(Local_112.f_3), func_24(Local_112.f_3), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_112.f_2, __LIB_9__::func_117(), "enter", 2f, -2f, 13, 16, 1000f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_112.f_2);
				func_295(4);
			}
			break;
		case 4:
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_3[Local_112.f_3]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_3[Local_112.f_3]);
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_6[Local_112.f_3]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_6[Local_112.f_3]);
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109[Local_112.f_3]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109[Local_112.f_3]);
			}
			if ((NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_3[Local_112.f_3]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_6[Local_112.f_3])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109[Local_112.f_3]))
			{
				iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_112.f_2);
				if (iVar0 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.99f)
				{
					Local_112.f_2 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_25(Local_112.f_3), func_24(Local_112.f_3), 2, false, true, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_112.f_2, __LIB_9__::func_117(), "base", 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_112.f_2);
					func_295(5);
				}
			}
			break;
		case 5:
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_3[Local_112.f_3]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_3[Local_112.f_3]);
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_6[Local_112.f_3]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_6[Local_112.f_3]);
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109[Local_112.f_3]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109[Local_112.f_3]);
			}
			if ((NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_3[Local_112.f_3]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_6[Local_112.f_3])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109[Local_112.f_3]))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), __LIB_9__::func_117(), "base", 3))
				{
					Local_112.f_2 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_25(Local_112.f_3), func_24(Local_112.f_3), 2, false, true, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_112.f_2, __LIB_9__::func_117(), "base", 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_112.f_2);
				}
				else if ((((__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1) && !__LIB_3__::func_633()) && !__LIB_2__::func_368()) && !__LIB_3__::func_998(PLAYER::PLAYER_ID())) && !__LIB_1__::func_156())
				{
					if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
					{
						if (Local_112.f_4 != -1)
						{
							__LIB_6__::func_404(&(Local_112.f_4));
							Local_112.f_4 = -1;
						}
					}
					if (Local_112.f_4 == -1)
					{
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
						{
							__LIB_7__::func_508(&(Local_112.f_4), 4, "BLUNT_HELP_PC" /* GXT: Press ~INPUT_FRONTEND_X~ to smoke.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
						}
						else
						{
							__LIB_7__::func_508(&(Local_112.f_4), 4, "BLUNT_HELP" /* GXT: Press ~INPUT_FRONTEND_X~ to smoke.~n~Press ~INPUT_CONTEXT~ to stand up. */, 0, 0, 0, 0);
						}
					}
					else
					{
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
						{
							iVar3 = 225;
						}
						else
						{
							iVar3 = 190;
						}
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar3))
						{
							Local_112.f_2 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_25(Local_112.f_3), func_24(Local_112.f_3), 2, false, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_112.f_2, __LIB_9__::func_117(), "exit", 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_112.f_2);
							__LIB_6__::func_404(&(Local_112.f_4));
							Local_112.f_4 = -1;
							func_295(8);
						}
						else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/))
						{
							func_266();
							Local_112.f_2 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_25(Local_112.f_3), func_24(Local_112.f_3), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_112.f_2, __LIB_9__::func_117(), "blunt_enter", 1000f, -1000f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_6[Local_112.f_3]), Local_112.f_2, __LIB_9__::func_117(), "blunt_enter_ashtray", 1000f, -1000f, 13);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_3[Local_112.f_3]), Local_112.f_2, __LIB_9__::func_117(), "blunt_enter_joint", 1000f, -1000f, 13);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109[Local_112.f_3]), Local_112.f_2, __LIB_9__::func_117(), "blunt_enter_lighter", 1000f, -1000f, 13);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_112.f_2);
							__LIB_6__::func_404(&(Local_112.f_4));
							Local_112.f_4 = -1;
							func_295(6);
						}
					}
				}
				else if (Local_112.f_4 != -1)
				{
					__LIB_6__::func_404(&(Local_112.f_4));
					Local_112.f_4 = -1;
				}
			}
			break;
		case 6:
			__LIB_6__::func_842();
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_3[Local_112.f_3]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_3[Local_112.f_3]);
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_6[Local_112.f_3]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_6[Local_112.f_3]);
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109[Local_112.f_3]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109[Local_112.f_3]);
			}
			if ((NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_3[Local_112.f_3]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_6[Local_112.f_3])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109[Local_112.f_3]))
			{
				iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_112.f_2);
				if (!BitTest(Local_112.f_1, 0) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) > 0.25f)
				{
					GRAPHICS::USE_PARTICLE_FX_ASSET("scr_safehouse");
					GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_sh_lighter_sparks", NETWORK::NET_TO_OBJ(Local_109[Local_112.f_3]), 0f, 0f, 0.05f, 0f, 0f, 0f, 1f, false, false, false);
					MISC::SET_BIT(&(Local_112.f_1), 0);
				}
				if (!BitTest(Local_112.f_1, 1) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) > 0.255f)
				{
					GRAPHICS::USE_PARTICLE_FX_ASSET("scr_safehouse");
					Local_112.f_6 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sh_lighter_flame", NETWORK::NET_TO_OBJ(Local_109[Local_112.f_3]), 0f, 0f, 0.05f, 0f, 0f, 0f, 1f, false, false, false, 1f, 1f, 1f, 0f);
					MISC::SET_BIT(&(Local_112.f_1), 1);
				}
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_112.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) > 0.45f)
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_112.f_6, false);
				}
				if (!BitTest(Local_112.f_1, 2) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) > 0.346f)
				{
					GRAPHICS::USE_PARTICLE_FX_ASSET("scr_safehouse");
					Local_112.f_7 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sh_cig_smoke", NETWORK::NET_TO_OBJ(Local_109.f_3[Local_112.f_3]), -0.07f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false, 1f, 1f, 1f, 0f);
					MISC::SET_BIT(&(Local_112.f_1), 2);
				}
				if (!BitTest(Local_112.f_1, 3) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) > 0.82f)
				{
					GRAPHICS::USE_PARTICLE_FX_ASSET("scr_safehouse");
					GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_cig_exhale_mouth", PLAYER::PLAYER_PED_ID(), -0.025f, 0.13f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
					if (func_23(Local_112.f_3))
					{
						__LIB_25__::func_652(PLAYER::PLAYER_PED_ID(), 0, 1, 0, -1);
					}
					MISC::SET_BIT(&(Local_112.f_1), 3);
				}
				if (!BitTest(Local_112.f_1, 4) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) > 0.876f)
				{
					GRAPHICS::USE_PARTICLE_FX_ASSET("scr_safehouse");
					GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_cig_exhale_nose", PLAYER::PLAYER_PED_ID(), -0.025f, 0.12f, 0f, 0f, 90f, 0f, 31086, 1f, false, false, false);
					MISC::SET_BIT(&(Local_112.f_1), 4);
				}
				if (iVar0 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.99f)
				{
					Local_112.f_2 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_25(Local_112.f_3), func_24(Local_112.f_3), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_112.f_2, __LIB_9__::func_117(), "blunt_exit", 1000f, -1000f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_6[Local_112.f_3]), Local_112.f_2, __LIB_9__::func_117(), "blunt_exit_ashtray", 1000f, -1000f, 13);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109.f_3[Local_112.f_3]), Local_112.f_2, __LIB_9__::func_117(), "blunt_exit_joint", 1000f, -1000f, 13);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_109[Local_112.f_3]), Local_112.f_2, __LIB_9__::func_117(), "blunt_exit_lighter", 1000f, -1000f, 13);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_112.f_2);
					MISC::CLEAR_BIT(&(Local_112.f_1), 3);
					MISC::CLEAR_BIT(&(Local_112.f_1), 4);
					func_295(7);
				}
			}
			break;
		case 7:
			__LIB_6__::func_842();
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_3[Local_112.f_3]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_3[Local_112.f_3]);
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_6[Local_112.f_3]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_6[Local_112.f_3]);
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109[Local_112.f_3]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109[Local_112.f_3]);
			}
			if ((NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_3[Local_112.f_3]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_6[Local_112.f_3])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109[Local_112.f_3]))
			{
				iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_112.f_2);
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_112.f_7) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) > 0.27f)
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_112.f_7, false);
				}
				if (!BitTest(Local_112.f_1, 3) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) > 0.45f)
				{
					GRAPHICS::USE_PARTICLE_FX_ASSET("scr_safehouse");
					GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_cig_exhale_mouth", PLAYER::PLAYER_PED_ID(), -0.025f, 0.13f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
					MISC::SET_BIT(&(Local_112.f_1), 3);
				}
				if (!BitTest(Local_112.f_1, 4) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) > 0.45f)
				{
					GRAPHICS::USE_PARTICLE_FX_ASSET("scr_safehouse");
					GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_cig_exhale_nose", PLAYER::PLAYER_PED_ID(), -0.025f, 0.12f, 0f, 0f, 90f, 0f, 31086, 1f, false, false, false);
					MISC::SET_BIT(&(Local_112.f_1), 4);
				}
				if (iVar0 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.99f)
				{
					Local_112.f_2 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_25(Local_112.f_3), func_24(Local_112.f_3), 2, false, true, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_112.f_2, __LIB_9__::func_117(), "base", 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_112.f_2);
					func_28();
					Local_112.f_1 = 0;
					func_295(5);
				}
			}
			break;
		case 8:
			iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_112.f_2);
			if (iVar0 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.99f)
			{
				func_296(0, 0);
			}
			break;
	}
}

void func_28()//Position - 0x1AC4
{
	if (BitTest(Local_112.f_1, 6))
	{
		__LIB_4__::func_60(PLAYER::PLAYER_PED_ID());
		MISC::CLEAR_BIT(&(Local_112.f_1), 6);
	}
	if (BitTest(Local_112.f_1, 8))
	{
		func_29(PLAYER::PLAYER_PED_ID(), 1, Local_112.f_5, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		MISC::CLEAR_BIT(&(Local_112.f_1), 8);
	}
}

int func_29(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x1B14
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
		Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
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
			func_194(iVar5, iParam1, iParam2, 1);
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
					Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 10, 0, -1) };
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
						func_194(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_194(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_29(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_194(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iVar0, func_181(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__::func_180(iVar5, 0) };
					func_29(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__::func_395();
			if (iVar17 != -1)
			{
				__LIB_18__::func_394(iVar17, 0, iParam10);
			}
			func_172(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__::func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_194(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_39__::func_749(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_29(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_194(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_29(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_163(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_29(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_29(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_159(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_39__::func_749(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_29(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_37__::func_870(iParam0, iParam2);
							iVar31 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_29(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_29(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar32, -1) };
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
								func_29(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__::func_870(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar38, -1) };
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
								func_29(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_29(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_29(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_32__::func_56(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_172(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_159(iVar5, func_181(iParam0, 8, -1), iParam2, func_181(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_1__::func_556(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_1__::func_556(2160, iParam10, 0);
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
				func_88(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__::func_795(iParam0, 11);
				iVar45 = __LIB_6__::func_795(iParam0, 4);
				iVar46 = func_159(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_39__::func_749(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_172(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__::func_795(iParam0, 11);
			if (__LIB_6__::func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__::func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_32__::func_56(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_159(iVar5, iParam2, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
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
				iVar52 = __LIB_1__::func_556(2100, iParam10, 0);
				iVar53 = __LIB_1__::func_556(2101, iParam10, 0);
				iVar54 = __LIB_1__::func_556(2102, iParam10, 0);
				fVar55 = __LIB_2__::func_97(135, iParam10);
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
				__LIB_25__::func_44(iParam0, iParam10);
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
						func_29(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_29(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_159(iVar5, __LIB_6__::func_795(iParam0, 8), __LIB_6__::func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_159(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_39__::func_749(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_29(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_159(iVar5, iVar3, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_29(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_60(iParam0, 9, iVar63))
						{
							func_29(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_29(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_29(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_1__::func_556(2042, -1, 0);
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
						func_29(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_181(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_181(iParam0, 11, -1);
				}
				if (__LIB_6__::func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__::func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__::func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_29(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__::func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__::func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_29(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_29(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_29(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_29(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_29(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_29(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_29(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_29(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_29(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_163(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_29(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_29(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_30(iParam0, &uVar4))
		{
			func_29(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_29(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_29(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_29(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_254(iVar5, func_181(iParam0, 3, -1), iVar10);
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
				func_29(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_30(int iParam0, var uParam1)//Position - 0x39BE
{
	int iVar0;
	int iVar1;
	*uParam1 = func_181(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_1__::func_556(754, Global_78127, 0) != -99 && __LIB_6__::func_781())
	{
		if (__LIB_0__::func_214() == 4)
		{
			return 1;
		}
		if (__LIB_1__::func_556(754, Global_78127, 0) == 0 && __LIB_1__::func_556(755, Global_78127, 0) == 0)
		{
			if (__LIB_1__::func_563(161, Global_78127))
			{
				if (__LIB_1__::func_556(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_1__::func_556(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_1__::func_556(754, Global_78127, 0);
		iVar1 = __LIB_1__::func_556(755, Global_78127, 0);
		if (!func_60(iParam0, iVar1, iVar0))
		{
			if (__LIB_1__::func_563(161, Global_78127))
			{
				*uParam1 = __LIB_1__::func_556(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_1__::func_556(753, Global_78127, 0);
			}
			__LIB_1__::func_597(754, -99, Global_78127, 1, 0);
			__LIB_1__::func_597(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0, int iParam1, int iParam2)//Position - 0x82B7
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
	Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar0, iParam1, iParam2, -1) };
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
				if (!func_60(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_60(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_37__::func_856(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_60(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_37__::func_856(iVar0, iVar4, iVar1, -1) };
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
			if (__LIB_1__::func_556(1759, Global_78127, 0) != uVar8[10])
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
			if (!func_60(iParam0, 14, uVar11[iVar10]))
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
						return func_60(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__::func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_60(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_88(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xFFFE
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_25__::func_74(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__::func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_18__::func_394(iVar1, 1, iParam2);
	}
	func_89(iParam0, bParam3, 0, -1);
}

void func_89(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x1004D
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
		bVar3 = func_133(iParam0, 0);
		bVar4 = __LIB_31__::func_887(iParam0);
		bVar5 = func_124(iParam0, iParam3);
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
			if (__LIB_18__::func_373(iVar6, iVar0))
			{
				if (__LIB_6__::func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__::func_27(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__::func_373(123, iVar0))
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
					if (__LIB_18__::func_373(iVar10, iVar0))
					{
						if (__LIB_25__::func_27(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__::func_993(Var9.f_2, Var9.f_3, iVar10))
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

int func_124(int iParam0, int iParam1)//Position - 0x1F265
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
			iVar2 = __LIB_1__::func_556(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_181(iParam0, 11, -1);
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
			iVar2 = __LIB_1__::func_556(1759, -1, 0);
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
				iVar5 = func_181(iParam0, 11, -1);
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

int func_133(int iParam0, bool bParam1)//Position - 0x1F6C3
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
							iVar2 = __LIB_25__::func_110(joaat("MP_M_Freemode_01"), 11, func_181(iParam0, 11, -1), 0);
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
						if (__LIB_18__::func_373(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(72, -1))
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
						iVar3 = func_181(iParam0, 11, -1);
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
						iVar5 = func_181(iParam0, 8, -1);
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
							iVar7 = __LIB_25__::func_110(joaat("MP_F_Freemode_01"), 11, func_181(iParam0, 11, -1), 0);
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
						iVar8 = func_181(iParam0, 11, -1);
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
							iVar10 = __LIB_25__::func_110(joaat("MP_F_Freemode_01"), 11, func_181(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_25__::func_110(joaat("MP_F_Freemode_01"), 11, func_181(iParam0, 11, -1), 0);
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
						iVar12 = func_181(iParam0, 8, -1);
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

int func_159(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2951F
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
					iVar0 = func_159(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_159(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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

void func_163(int iParam0)//Position - 0x2AA2B
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
		if (!func_168(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_168(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_168(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2B3F5
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_709(iVar0, 14, func_181(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_172(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2DDDE
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_174(iParam0))
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
			__LIB_25__::func_74(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__::func_297(iVar0, iParam2, 13) && !__LIB_25__::func_297(iVar0, iParam2, 14)) && !__LIB_25__::func_297(iVar0, iParam2, 15)) && !__LIB_25__::func_297(iVar0, iParam2, 16)) && !__LIB_25__::func_297(iVar0, iParam2, 71)) && !__LIB_25__::func_297(iVar0, iParam2, 72))
				{
					__LIB_25__::func_74(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_25__::func_110(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__::func_393(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_18__::func_394(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_174(int iParam0)//Position - 0x2DF6D
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_2__::func_204(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_181(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_2__::func_204(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_181(iParam0, 11, -1);
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

int func_181(int iParam0, int iParam1, int iParam2)//Position - 0x2E3FF
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
				if (func_60(iParam0, iParam1, iVar0))
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
				if (func_60(iParam0, iParam1, iVar1))
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

void func_194(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3145E
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
		Global_78130[2 /*14*/] = { __LIB_37__::func_856(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
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
							__LIB_7__::func_86(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_194(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_194(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_194(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_1__::func_556(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_1__::func_597(iVar6, iVar7, Global_78127, 1, 0);
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
							func_194(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_194(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_194(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_194(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_194(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_194(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_194(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_194(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_194(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_194(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_194(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_194(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_194(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_194(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_37__::func_856(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__::func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_194(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_194(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__::func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_194(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

void func_266()//Position - 0x4E003
{
	Local_112.f_5 = func_181(PLAYER::PLAYER_PED_ID(), 1, -1);
	if (__LIB_0__::func_709(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, func_181(PLAYER::PLAYER_PED_ID(), 14, 0), -1))
	{
		MISC::SET_BIT(&(Local_112.f_1), 5);
	}
	if (__LIB_0__::func_812(PLAYER::PLAYER_PED_ID(), 7))
	{
		MISC::SET_BIT(&(Local_112.f_1), 7);
	}
	func_29(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	func_268(PLAYER::PLAYER_PED_ID(), 4, -1, -1);
	if (__LIB_2__::func_252(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_4__::func_60(PLAYER::PLAYER_PED_ID());
		MISC::SET_BIT(&(Local_112.f_1), 6);
	}
	if (BitTest(Local_112.f_1, 5))
	{
		PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (BitTest(Local_112.f_1, 7))
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
	}
	MISC::SET_BIT(&(Local_112.f_1), 8);
}

void func_268(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4E10A
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		Global_78200[iVar1] = -1;
		Global_78200.f_13[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_78200.f_26)
	{
		Global_78200.f_26[iVar1] = -1;
		Global_78200.f_36[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_78200.f_46)
	{
		Global_78200.f_46[iVar1] = -1;
		iVar1++;
	}
	bVar2 = false;
	if (__LIB_18__::func_485(iParam0, &Global_78200, iParam1, &iParam3))
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_78200[iVar1] != -1)
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar1) == Global_78200[iVar1] && PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar1) == Global_78200.f_13[iVar1])
				{
					if (iVar1 == 2)
					{
						bVar0 = true;
					}
					if (iVar1 == 1)
					{
						bVar2 = true;
					}
					PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar1, 0, 0, 0);
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < Global_78200.f_26)
		{
			if (Global_78200.f_26[iVar1] != -1 && Global_78200.f_26[iVar1] != 255)
			{
				if (PED::GET_PED_PROP_INDEX(iParam0, iVar1) == Global_78200.f_26[iVar1] && PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iVar1) == Global_78200.f_36[iVar1])
				{
					PED::CLEAR_PED_PROP(iParam0, iVar1);
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			if (!__LIB_0__::func_155(0))
			{
				if (__LIB_1__::func_563(161, -1))
				{
					func_29(iParam0, 2, __LIB_1__::func_556(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_29(iParam0, 2, __LIB_1__::func_556(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
		if (iParam1 == 4)
		{
			if (bVar2)
			{
				if (iParam2 != -1 && iParam2 != PLAYER::PLAYER_ID())
				{
					if (NETWORK::NETWORK_HAS_CACHED_PLAYER_HEAD_BLEND_DATA(PLAYER::INT_TO_PLAYERINDEX(iParam2)))
					{
						NETWORK::NETWORK_APPLY_CACHED_PLAYER_HEAD_BLEND_DATA(iParam0, PLAYER::INT_TO_PLAYERINDEX(iParam2));
					}
				}
				else
				{
					__LIB_25__::func_44(iParam0, -1);
				}
			}
			__LIB_0__::func_917(0);
			__LIB_18__::func_775(1, 2);
		}
	}
}

int func_288()//Position - 0x56444
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (__LIB_1__::func_264(iVar1, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(iVar1))
		{
			if (iVar1 != PLAYER::PLAYER_ID())
			{
				iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
				if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && __LIB_2__::func_461(iVar1) < 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_1__::func_265(iVar1), __LIB_1__::func_265(PLAYER::PLAYER_ID()), true) < 2f)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_291(int iParam0)//Position - 0x564F8
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_264(iParam0, 1, 1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = 0;
			while (iVar1 < Local_112.f_36)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Local_112.f_9[iVar1 /*13*/], Local_112.f_9[iVar1 /*13*/].f_3, Local_112.f_0, false, true, 0))
				{
					Local_112.f_3 = iVar1;
					return 1;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

void func_295(int iParam0)//Position - 0x565B7
{
	Local_112.f_8 = iParam0;
}

void func_296(int iParam0, bool bParam1)//Position - 0x565C5
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	if (__LIB_4__::func_970(PLAYER::PLAYER_ID()))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_7), 5);
	}
	if (__LIB_3__::func_996(PLAYER::PLAYER_ID()))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_8), 2);
	}
	if (__LIB_4__::func_738(PLAYER::PLAYER_ID()))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_9), 29);
	}
	if (Local_112.f_8 > 2)
	{
		NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_112.f_2);
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_112.f_7))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_112.f_7, false);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_112.f_6))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_112.f_6, false);
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109[Local_112.f_3]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109[Local_112.f_3]))
		{
			Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(__LIB_9__::func_117(), "blunt_enter_lighter", func_25(Local_112.f_3), func_24(Local_112.f_3), 0f, 2) };
			Var1 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(__LIB_9__::func_117(), "blunt_enter_lighter", func_25(Local_112.f_3), func_24(Local_112.f_3), 0f, 2) };
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_109[Local_112.f_3]), Var0, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_109[Local_112.f_3]), Var1, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_109[Local_112.f_3]), true);
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_3[Local_112.f_3]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_3[Local_112.f_3]))
		{
			Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(__LIB_9__::func_117(), "blunt_enter_joint", func_25(Local_112.f_3), func_24(Local_112.f_3), 0f, 2) };
			Var3 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(__LIB_9__::func_117(), "blunt_enter_joint", func_25(Local_112.f_3), func_24(Local_112.f_3), 0f, 2) };
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_109.f_3[Local_112.f_3]), Var2, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_109.f_3[Local_112.f_3]), Var3, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_109.f_3[Local_112.f_3]), true);
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_6[Local_112.f_3]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_6[Local_112.f_3]))
		{
			Var4 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(__LIB_9__::func_117(), "blunt_enter_ashtray", func_25(Local_112.f_3), func_24(Local_112.f_3), 0f, 2) };
			Var5 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(__LIB_9__::func_117(), "blunt_enter_ashtray", func_25(Local_112.f_3), func_24(Local_112.f_3), 0f, 2) };
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_109.f_6[Local_112.f_3]), Var4, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_109.f_6[Local_112.f_3]), Var5, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_109.f_6[Local_112.f_3]), true);
		}
	}
	if (Local_112.f_4 != -1)
	{
		__LIB_6__::func_404(&(Local_112.f_4));
		Local_112.f_4 = -1;
	}
	if (iParam0 && Local_112.f_8 > 2)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109[Local_112.f_3]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109[Local_112.f_3]))
		{
			__LIB_1__::func_96(&(Local_109[Local_112.f_3]));
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_3[Local_112.f_3]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_3[Local_112.f_3]))
		{
			__LIB_1__::func_96(&(Local_109.f_3[Local_112.f_3]));
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_6[Local_112.f_3]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_6[Local_112.f_3]))
		{
			__LIB_1__::func_96(&(Local_109.f_6[Local_112.f_3]));
		}
	}
	if (bParam1)
	{
		iVar6 = 0;
		while (iVar6 < 2)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109[iVar6]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109[iVar6]))
			{
				__LIB_1__::func_96(&(Local_109[iVar6]));
			}
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_3[iVar6]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_3[iVar6]))
			{
				__LIB_1__::func_96(&(Local_109.f_3[iVar6]));
			}
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_6[iVar6]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_6[iVar6]))
			{
				__LIB_1__::func_96(&(Local_109.f_6[iVar6]));
			}
			iVar6++;
		}
	}
	Local_112.f_1 = 0;
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SAFEHOUSE_FRANKLIN_SOFA");
	STREAMING::REMOVE_ANIM_DICT(__LIB_9__::func_117());
	if (Local_112.f_8 > 1)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
			PED::SET_PED_CAN_HEAD_IK(PLAYER::PLAYER_PED_ID(), true);
		}
		MISC::CLEAR_BIT(&(Global_1946250.f_6), 11);
	}
	func_28();
	func_295(1);
}

void func_301()//Position - 0x56A3D
{
	func_296(1, 0);
	__LIB_0__::func_199();
}

void func_303()//Position - 0x56A5B
{
	if (__LIB_3__::func_870(PLAYER::PLAYER_ID()))
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, __LIB_4__::func_673());
	}
	else if (__LIB_3__::func_880(PLAYER::PLAYER_ID()))
	{
		if (__LIB_2__::func_844(joaat("rm_GamingFloor_01")))
		{
			NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, 50);
		}
		else if (__LIB_2__::func_844(joaat("rm_Lounge_01")))
		{
			NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, 51);
		}
		else if (__LIB_2__::func_844(joaat("rm_Lounge_02")))
		{
			NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, 52);
		}
	}
	else if (__LIB_4__::func_970(PLAYER::PLAYER_ID()))
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, 53);
	}
	else if (__LIB_3__::func_996(PLAYER::PLAYER_ID()))
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, __LIB_4__::func_673());
	}
	else if (__LIB_4__::func_738(PLAYER::PLAYER_ID()))
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, __LIB_4__::func_673());
	}
	__LIB_1__::func_569(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_109, 9, 0);
	func_4721();
	if (!__LIB_0__::func_672())
	{
		func_301();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		func_301();
	}
	func_304();
}

void func_304()//Position - 0x56B48
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	if (__LIB_3__::func_880(PLAYER::PLAYER_ID()))
	{
		if (__LIB_2__::func_844(joaat("rm_GamingFloor_01")))
		{
			func_4719(1118.8385f, 206.91002f, -50.440166f, 1118.4812f, 205.88135f, -48.440166f, 1117.782f, 206.218f, -50.1848f, 0f, 0f, 144.75f, 0);
			func_4719(1110.718f, 199.7734f, -50.440166f, 1109.8242f, 198.97421f, -48.440166f, 1109.423f, 199.706f, -50.1848f, 0f, 0f, 114.25f, 0);
		}
		else if (__LIB_2__::func_844(joaat("rm_Lounge_01")))
		{
			func_4719(1126.8763f, 250.72433f, -51.040855f, 1127.0797f, 249.5234f, -49.040855f, 1126.094f, 249.629f, -50.7855f, 0f, 0f, 161.75f, 0);
			func_4719(1125.2815f, 247.21982f, -51.040855f, 1124.0564f, 247.12332f, -49.04085f, 1124.045f, 247.941f, -50.7855f, 0f, 0f, 77.25f, 0);
		}
		else if (__LIB_2__::func_844(joaat("rm_Lounge_02")))
		{
			func_4719(1129.2723f, 241.08862f, -51.040855f, 1129.1013f, 242.40112f, -49.040855f, 1130.002f, 242.343f, -50.7855f, 0f, 0f, -12.13f, 0);
			func_4719(1130.8468f, 244.75471f, -51.040855f, 1132.1768f, 244.9738f, -49.040855f, 1132.032f, 244.068f, -50.7855f, 0f, 0f, -105.13f, 0);
		}
	}
	else if (__LIB_3__::func_870(PLAYER::PLAYER_ID()))
	{
		func_4719(967.9169f, 71.112305f, 115.16414f, 967.0746f, 71.64975f, 117.16414f, 967.561f, 72.205f, 115.4196f, 0f, 0f, 40f, 0);
	}
	else if (__LIB_4__::func_970(PLAYER::PLAYER_ID()))
	{
		func_4719(1571.2314f, 251.42552f, -50.006115f, 1570.489f, 252.13762f, -48.00608f, 1570.582f, 250.999f, -49.7507f, 0f, 0f, -152f, 0);
		func_4719(1570.8164f, 247.94917f, -50.006096f, 1571.4226f, 248.84943f, -48.006126f, 1570.396f, 248.561f, -49.7507f, 0f, 0f, 129.25f, 0);
	}
	else if (__LIB_3__::func_996(PLAYER::PLAYER_ID()))
	{
		func_4719(-1355.4536f, 137.84387f, -96.10933f, -1354.7686f, 137.8266f, -95.10934f, -1355.569f, 138.672f, -95.87f, 0f, 0f, 70.68f, 0);
	}
	else if (__LIB_4__::func_738(PLAYER::PLAYER_ID()))
	{
		iVar4 = __LIB_3__::func_977(PLAYER::PLAYER_ID());
		Var0 = { func_4717(8.30409f, -8.89136f, 8.8415f, iVar4) };
		Var1 = { func_4717(7.33256f, -8.91478f, 10.8415f, iVar4) };
		Var2 = { func_4717(7.37722f, -8.16421f, 8.868f, iVar4) };
		fVar3 = func_312(74f, iVar4);
		func_4719(Var0, Var1, Var2, 0f, 0f, fVar3, 1);
		if (__LIB_0__::func_873(__LIB_19__::func_78()) > 0 || __LIB_2__::func_404(__LIB_19__::func_78()))
		{
			Var0 = { func_4717(3.77146f, -5.08128f, 3.8003f, iVar4) };
			Var1 = { func_4717(4.6057f, -5.09805f, 5.8003f, iVar4) };
			Var2 = { func_4717(4.5879f, -5.79855f, 4.062f, iVar4) };
			fVar3 = func_312(253.64f, iVar4);
			func_4719(Var0, Var1, Var2, 0f, 0f, fVar3, 0);
		}
	}
}

float func_312(float fParam0, int iParam1)//Position - 0x57049
{
	var uVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	func_313(iParam1, &uVar2, &uVar0, &fVar1, 0);
	fVar3 = (fParam0 + fVar1);
	while (fVar3 < 0f)
	{
		fVar3 = (fVar3 + 360f);
	}
	while (fVar3 >= 360f)
	{
		fVar3 = (fVar3 - 360f);
	}
	return fVar3;
}

void func_313(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x57093
{
	struct<31> Var0;
	func_314(iParam0, &Var0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(iParam4);
	Call_Loc(Var0.f_30);
}

void func_314(int iParam0, var uParam1, int iParam2)//Position - 0x570B3
{
	func_4712(uParam1, iParam2);
	func_4706(uParam1, iParam2);
	func_4698(uParam1, iParam2);
	func_315(__LIB_0__::func_170(iParam0), uParam1, iParam2);
}

void func_315(int iParam0, var uParam1, int iParam2)//Position - 0x570E1
{
	switch (iParam0)
	{
		case 0:
			func_4625(uParam1, iParam2);
			break;
		case 1:
			func_4492(uParam1, iParam2);
			break;
		case 2:
			func_4415(uParam1, iParam2);
			break;
		case 3:
			func_4337(uParam1, iParam2);
			break;
		case 4:
			func_4163(uParam1, iParam2);
			break;
		case 5:
			func_3997(uParam1, iParam2);
			break;
		case 6:
			func_3932(uParam1, iParam2);
			break;
		case 7:
			func_3764(uParam1, iParam2);
			break;
		case 8:
			func_3590(uParam1, iParam2);
			break;
		case 9:
			func_3345(uParam1, iParam2);
			break;
		case 10:
			func_3267(uParam1, iParam2);
			break;
		case 11:
			func_3036(uParam1, iParam2);
			break;
		case 12:
			func_2892(uParam1, iParam2);
			break;
		case 13:
			func_2724(uParam1, iParam2);
			break;
		case 14:
			func_2550(uParam1, iParam2);
			break;
		case 15:
			func_2372(uParam1, iParam2);
			break;
		case 16:
			func_2262(uParam1, iParam2);
			break;
		case 17:
			func_2005(uParam1, iParam2);
			break;
		case 18:
			func_1911(uParam1, iParam2);
			break;
		case 19:
			func_1787(uParam1, iParam2);
			break;
		case 20:
			func_1472(uParam1, iParam2);
			break;
		case 21:
			func_1350(uParam1, iParam2);
			break;
		case 22:
			func_1178(uParam1, iParam2);
			break;
		case 23:
			func_955(uParam1, iParam2);
			break;
		case 24:
			func_316(uParam1, iParam2);
			break;
	}
}

void func_316(var uParam0, int iParam1)//Position - 0x57299
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 537340/*func_954*/;
			break;
		case 111:
			uParam0->f_35 = 537326/*func_953*/;
			break;
		case 1:
			uParam0->f_30 = 537230/*func_952*/;
			break;
		case 2:
			uParam0->f_31 = 535879/*func_946*/;
			break;
		case 3:
			uParam0->f_34 = 535650/*func_945*/;
			break;
		case 4:
			uParam0->f_12 = 535638/*func_944*/;
			break;
		case 5:
			uParam0->f_11 = 535628/*func_943*/;
			break;
		case 37:
			uParam0->f_18 = 535439/*func_942*/;
			break;
		case 38:
			uParam0->f_9 = 535392/*func_941*/;
			break;
		case 42:
			uParam0->f_10 = 535364/*func_940*/;
			break;
		case 6:
			uParam0->f_32 = 535055/*func_939*/;
			break;
		case 11:
			uParam0->f_11 = 535046/*func_938*/;
			break;
		case 12:
			uParam0->f_33 = 532378/*func_930*/;
			break;
		case 14:
			uParam0->f_11 = 532369/*func_929*/;
			break;
		case 109:
			uParam0->f_56 = 525698/*func_926*/;
			break;
		case 8:
			uParam0->f_37 = 524823/*func_925*/;
			break;
		case 7:
			uParam0->f_36 = 524706/*func_924*/;
			break;
		case 79:
			*uParam0 = 524650/*func_921*/;
			break;
		case 9:
			uParam0->f_29 = 524497/*func_920*/;
			break;
		case 10:
			uParam0->f_27 = 524352/*func_918*/;
			break;
		case 13:
			uParam0->f_2 = 524269/*func_916*/;
			break;
		case 15:
			uParam0->f_2 = 522496/*func_894*/;
			break;
		case 16:
			uParam0->f_5 = 521299/*func_885*/;
			break;
		case 108:
			uParam0->f_55 = 464790/*func_757*/;
			break;
		case 17:
			uParam0->f_17 = 463062/*func_738*/;
			break;
		case 19:
			uParam0->f_17 = 462926/*func_734*/;
			break;
		case 18:
			uParam0->f_8 = 462901/*func_733*/;
			break;
		case 20:
			uParam0->f_3 = 462681/*func_731*/;
			break;
		case 21:
			uParam0->f_3 = 461240/*func_717*/;
			break;
		case 74:
			uParam0->f_53 = 461050/*func_715*/;
			break;
		case 75:
			uParam0->f_4 = 459715/*func_709*/;
			break;
		case 22:
			uParam0->f_24 = 459598/*func_707*/;
			break;
		case 23:
			uParam0->f_26 = 459555/*func_706*/;
			break;
		case 24:
			uParam0->f_26 = 459521/*func_705*/;
			break;
		case 26:
			uParam0->f_38 = 459513/*func_704*/;
			break;
		case 25:
			uParam0->f_23 = 456558/*func_685*/;
			break;
		case 27:
			uParam0->f_25 = 456550/*func_684*/;
			break;
		case 28:
			uParam0->f_24 = 456542/*func_683*/;
			break;
		case 30:
			uParam0->f_8 = 456392/*func_681*/;
			break;
		case 31:
			uParam0->f_39 = 456169/*func_678*/;
			break;
		case 33:
			uParam0->f_40 = 455176/*func_668*/;
			break;
		case 32:
			*uParam0 = 455121/*func_667*/;
			break;
		case 76:
			uParam0->f_13 = 455110/*func_666*/;
			break;
		case 34:
			uParam0->f_41 = 451358/*func_663*/;
			break;
		case 36:
			uParam0->f_58 = 451313/*func_662*/;
			break;
		case 35:
			uParam0->f_42 = 430311/*func_659*/;
			break;
		case 45:
			uParam0->f_14 = 430302/*func_658*/;
			break;
		case 46:
			uParam0->f_14 = 430293/*func_657*/;
			break;
		case 110:
			uParam0->f_57 = 430285/*func_656*/;
			break;
		case 77:
			uParam0->f_13 = 430262/*func_655*/;
			break;
		case 82:
			uParam0->f_19 = 430216/*func_653*/;
			break;
		case 47:
			uParam0->f_43 = 430084/*func_652*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 428942/*func_643*/;
			break;
		case 49:
			uParam0->f_8 = 428924/*func_642*/;
			break;
		case 50:
			*uParam0 = 428575/*func_638*/;
			break;
		case 51:
			*uParam0 = 428473/*func_637*/;
			break;
		case 52:
			uParam0->f_15 = 428462/*func_636*/;
			break;
		case 53:
			uParam0->f_13 = 428336/*func_635*/;
			break;
		case 54:
			uParam0->f_45 = 427949/*func_634*/;
			break;
		case 56:
			uParam0->f_46 = 427930/*func_633*/;
			break;
		case 57:
			uParam0->f_11 = 426721/*func_625*/;
			break;
		case 58:
			uParam0->f_13 = 426595/*func_624*/;
			break;
		case 59:
			*uParam0 = 425047/*func_609*/;
			break;
		case 60:
			*uParam0 = 425038/*func_608*/;
			break;
		case 61:
			uParam0->f_15 = 425027/*func_607*/;
			break;
		case 62:
			uParam0->f_13 = 424901/*func_606*/;
			break;
		case 55:
			uParam0->f_45 = 424893/*func_605*/;
			break;
		case 63:
			uParam0->f_11 = 424879/*func_604*/;
			break;
		case 64:
			uParam0->f_47 = 424871/*func_603*/;
			break;
		case 65:
			uParam0->f_21 = 423276/*func_586*/;
			break;
		case 66:
			uParam0->f_21 = 422590/*func_583*/;
			break;
		case 67:
			uParam0->f_21 = 422450/*func_581*/;
			break;
		case 68:
			*uParam0 = 421316/*func_577*/;
			break;
		case 69:
			*uParam0 = 421307/*func_576*/;
			break;
		case 70:
			uParam0->f_48 = 421295/*func_575*/;
			break;
		case 71:
			uParam0->f_49 = 421286/*func_574*/;
			break;
		case 107:
			uParam0->f_50 = 421274/*func_573*/;
			break;
		case 80:
			uParam0->f_7 = 420792/*func_570*/;
			break;
		case 84:
			uParam0->f_1 = 420783/*func_569*/;
			break;
		case 85:
			uParam0->f_1 = 378416/*func_468*/;
			break;
		case 87:
			uParam0->f_1 = 374555/*func_447*/;
			break;
		case 88:
			uParam0->f_1 = 374546/*func_446*/;
			break;
		case 89:
			uParam0->f_54 = 374538/*func_445*/;
			break;
		case 90:
			uParam0->f_1 = 373646/*func_427*/;
			break;
		case 91:
			uParam0->f_1 = 373612/*func_426*/;
			break;
		case 92:
			uParam0->f_1 = 371684/*func_412*/;
			break;
		case 94:
			uParam0->f_1 = 369685/*func_399*/;
			break;
		case 95:
			uParam0->f_22 = 365374/*func_357*/;
			break;
		case 96:
			uParam0->f_1 = 365365/*func_356*/;
			break;
		case 97:
			uParam0->f_1 = 365356/*func_355*/;
			break;
		case 98:
			uParam0->f_1 = 365347/*func_354*/;
			break;
		case 100:
			uParam0->f_22 = 365339/*func_353*/;
			break;
		case 101:
			uParam0->f_22 = 365331/*func_352*/;
			break;
		case 112:
			uParam0->f_13 = 365217/*func_351*/;
			break;
		case 113:
			uParam0->f_3 = 365063/*func_347*/;
			break;
		case 114:
			uParam0->f_16 = 364395/*func_346*/;
			break;
		case 115:
			uParam0->f_3 = 364386/*func_345*/;
			break;
		case 116:
			*uParam0 = 364377/*func_344*/;
			break;
		case 117:
			uParam0->f_16 = 359960/*func_343*/;
			break;
		case 118:
			uParam0->f_11 = 359951/*func_342*/;
			break;
		case 119:
			uParam0->f_27 = 359824/*func_337*/;
			break;
		case 120:
			uParam0->f_19 = 359769/*func_334*/;
			break;
		case 78:
			uParam0->f_59 = 358829/*func_319*/;
			break;
		case 124:
			uParam0->f_1 = 358820/*func_318*/;
			break;
		case 125:
			uParam0->f_19 = 358812/*func_317*/;
			break;
	}
}

int func_468(int iParam0, var uParam1)//Position - 0x5C630
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || ENTITY::DOES_ENTITY_EXIST(uParam1->f_262))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_262))
		{
			iVar0 = uParam1->f_262;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_483(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_477(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_2__::func_415(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_2__::func_415(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_2__::func_414(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_2__::func_414(iParam0, &Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[0 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 1);
		}
		__LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

int func_477(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x5CDA5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	iVar2 = 8;
	if (bParam7)
	{
		iVar2 = -1;
	}
	iVar0 = -1;
	while (iVar0 <= iVar2)
	{
		iVar1 = iVar0 + 1;
		iVar3 = iVar0;
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, iVar3, false))
		{
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, iVar3, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && (__LIB_0__::func_121(iVar4) || bParam5))
			{
				if (bParam3 && !PED::IS_PED_A_PLAYER(iVar4))
				{
				}
				else
				{
					if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]))
					{
						func_478(uParam2[iVar1], iVar4, bParam8, bParam6);
					}
					if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]) && (__LIB_0__::func_121((*uParam2)[iVar1]) || bParam5))
					{
						if (!PED::HAS_PED_HEAD_BLEND_FINISHED((*uParam2)[iVar1]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED((*uParam2)[iVar1]))
						{
							if (bParam4)
							{
								return 0;
							}
						}
						iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iVar3, false);
						if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
						{
							if (__LIB_0__::func_121(*uParam1))
							{
								ENTITY::FREEZE_ENTITY_POSITION((*uParam2)[iVar1], false);
								PED::SET_PED_INTO_VEHICLE((*uParam2)[iVar1], *uParam1, iVar3);
							}
						}
						if (iVar0 == 7 && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("insurgent3"))
						{
							VEHICLE::SET_VEHICLE_DOOR_CONTROL(*uParam1, 5, 5, 1f);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_478(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x5CF07
{
	struct<3> Var0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	*uParam0 = PED::CLONE_PED(iParam1, false, false, bParam2);
	if (__LIB_0__::func_121(iParam1))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
		__LIB_1__::func_137(*uParam0);
		if (func_480(iParam1) || __LIB_19__::func_37(iParam1))
		{
			PED::SET_PED_HELMET(*uParam0, true);
		}
		else
		{
			PED::SET_PED_HELMET(*uParam0, false);
			PED::REMOVE_PED_HELMET(*uParam0, true);
			PED::CLEAR_PED_PROP(*uParam0, 0);
		}
		if (bParam3)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, false) };
			Var0.f_2 = (Var0.f_2 - 10f);
			ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, false, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
			ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
		return 1;
	}
	return 0;
}

int func_480(int iParam0)//Position - 0x5D066
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_709(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_181(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_483(int iParam0, var uParam1, int iParam2)//Position - 0x5D154
{
	struct<101> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0) || ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (__LIB_0__::func_517(iParam2, 1))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam1, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam1, ENTITY::GET_ENTITY_COORDS(*iParam0, true), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*uParam1, ENTITY::GET_ENTITY_ROTATION(*iParam0, 2), 2, true);
		}
		if (__LIB_0__::func_517(iParam2, 2))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam1, 5f);
		}
		if (__LIB_0__::func_517(iParam2, 4))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_12, false))
			{
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(*uParam1, uParam1->f_12, 1f);
			}
		}
		return 1;
	}
	else if (__LIB_39__::func_750(uParam1, *iParam0, 10f, 20f, 15f, ENTITY::GET_ENTITY_HEADING(*iParam0), 0, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			Var0.f_9 = 49;
			Var0.f_59 = 2;
			Var0.f_78 = -1;
			Var0.f_79 = -1;
			Var0.f_96 = -1;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_100 = -1;
			__LIB_25__::func_536(*iParam0, &Var0);
			__LIB_37__::func_905(*uParam1, &Var0, 1, 1, 0);
			__LIB_1__::func_138(*iParam0, uParam1);
			ENTITY::SET_ENTITY_COLLISION(*uParam1, false, false);
			ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(*uParam1, true);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(*uParam1, false);
			iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam1);
			if (((((!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1)) && !__LIB_0__::func_652(iVar1)) && !iVar1 == joaat("oppressor")) && !iVar1 == joaat("kosatka"))
			{
				VEHICLE::SET_VEHICLE_CAN_BREAK(*uParam1, false);
			}
			VEHICLE::GET_VEHICLE_LIGHTS_STATE(*iParam0, &iVar2, &iVar3);
			if (iVar2 != 0)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(*uParam1, 2);
			}
			if (iVar3 != 0)
			{
				VEHICLE::SET_VEHICLE_FULLBEAM(*uParam1, true);
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(*uParam1, true, true, false);
			if (!__LIB_0__::func_517(iParam2, 32))
			{
				func_477(iParam0, uParam1, &(uParam1->f_1), __LIB_0__::func_517(iParam2, 16), __LIB_0__::func_517(iParam2, 128), __LIB_0__::func_517(iParam2, 64), !__LIB_0__::func_517(iParam2, 256), 0, 1);
			}
			if (__LIB_0__::func_517(iParam2, 4))
			{
				__LIB_40__::func_879(iParam0, &(uParam1->f_12));
				if (__LIB_0__::func_517(iParam2, 8))
				{
					iVar4 = 0;
					while (iVar4 <= 7)
					{
						if (VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, false))
						{
							VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar4);
						}
						iVar4++;
					}
				}
			}
			if (__LIB_0__::func_517(iParam2, 8))
			{
				iVar5 = 0;
				while (iVar5 <= 7)
				{
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, false))
					{
						VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar5);
					}
					iVar5++;
				}
			}
		}
	}
	return 0;
}

void func_634(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x687AD
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	if (__LIB_7__::func_926(iParam0))
	{
		if (*uParam3 != 1 && *uParam3 != 2)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			HUD::SET_BLIP_SCALE(*uParam1, 1.4f);
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 7000);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_826" /* GXT: Agency */);
			*uParam3 = 1;
			return;
		}
		else if (*uParam3 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::SET_BLIP_ROUTE(*uParam1, false);
				*uParam3 = 2;
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			*uParam3 = 1;
		}
	}
	else
	{
		if (*uParam3 == 1)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, false);
			HUD::SET_BLIP_SCALE(*uParam1, 1f);
			*uParam3 = 0;
		}
		bVar0 = false;
		if (!__LIB_2__::func_432(PLAYER::PLAYER_ID(), __LIB_2__::func_433(iParam0)) && __LIB_2__::func_432(__LIB_0__::func_582(), __LIB_2__::func_433(iParam0)))
		{
			iVar2 = 0;
			while (iVar2 < 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (__LIB_1__::func_264(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
				{
					if (__LIB_2__::func_432(iVar1, __LIB_2__::func_433(iParam0)))
					{
						Var3 = { __LIB_1__::func_267(iVar1) };
						if (__LIB_0__::func_585(Var3))
						{
							if (NETWORK::NETWORK_IS_FRIEND(&Var3))
							{
								iVar4 = joaat("FHQ_FRIEND");
								if (iVar4 != *uParam4)
								{
									*uParam4 = iVar4;
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "FHQ_FRIEND" /* GXT: Friend's Agency */);
								}
								bVar0 = true;
							}
							else
							{
								iVar2++;
							}
							if (!bVar0 && *uParam4 == joaat("FHQ_FRIEND"))
							{
								*uParam4 = joaat("BLIP_826");
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_826" /* GXT: Agency */);
							}
						}
Vector3 func_635(int iParam0)//Position - 0x68930
{
	switch (iParam0)
	{
		case 155:
			return 388.3036f, -74.6683f, 67.1805f;
			break;
		case 156:
			return -1016.5347f, -413.186f, 38.6161f;
			break;
		case 157:
			return -589.4908f, -707.4646f, 35.2844f;
			break;
		case 158:
			return -1039.0834f, -756.4792f, 18.8395f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_685(int iParam0, int iParam1)//Position - 0x6F76E
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	iVar2 = __LIB_2__::func_399();
	Var3 = { __LIB_2__::func_462(iParam0, iVar2) };
	if (__LIB_7__::func_372(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_696(iParam0, Var3, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if (!Global_2667225.f_2680 && !BitTest(Global_1946250, 27))
		{
			if ((((iVar2 == 0 || iVar2 == 1) || iVar2 == 4) || iVar2 == 5) || iVar2 == 6)
			{
				__LIB_2__::func_447(0);
			}
			else
			{
				__LIB_2__::func_447(1);
			}
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_25__::func_379(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var3, 1, 0, 0, 0, -1, -1, __LIB_6__::func_25());
			}
			__LIB_25__::func_417(iParam0, __LIB_6__::func_25());
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var3, 0, 0, 1, 0, -1, -1, __LIB_6__::func_25());
			}
			__LIB_25__::func_417(iParam0, __LIB_6__::func_25());
		}
	}
	else
	{
		if (__LIB_4__::func_973(0))
		{
			if (iVar2 == 3 && __LIB_5__::func_705(__LIB_0__::func_582()) == iParam0)
			{
				__LIB_2__::func_447(1);
			}
		}
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_696(int iParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x6FDCC
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<13> Var7;
	bool bVar8;
	iVar0 = -1;
	if (__LIB_6__::func_911())
	{
		iVar0 = __LIB_3__::func_808();
	}
	fVar1 = SYSTEM::POW(SYSTEM::TO_FLOAT(__LIB_3__::func_807(iParam0)), 2f);
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7;
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar5 = iVar4;
		if (iVar2 == iVar5 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
		{
		}
		else
		{
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			if (ENTITY::IS_ENTITY_DEAD(iVar6, false))
			{
			}
			else if (bParam5)
			{
				if (iVar3 != Global_2689235[iVar5 /*453*/].f_318.f_7)
				{
				}
				else
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true), Param1) <= fVar1)
					{
						Var7 = { __LIB_1__::func_267(iVar5) };
						bVar8 = false;
						if (__LIB_2__::func_461(iVar5) > -1)
						{
							if (iParam0 == 123 || iParam0 == 124)
							{
								bVar8 = true;
							}
						}
						if (bParam4 && !*iParam2)
						{
							if ((iVar0 != -1 && iVar0 == __LIB_2__::func_180(&Var7)) || NETWORK::NETWORK_IS_FRIEND(&Var7))
							{
								if (((((((((!__LIB_1__::func_425(iVar5, 1) && !__LIB_7__::func_291(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_0__::func_811(iVar6)) && !__LIB_8__::func_303(iVar5)) && !__LIB_8__::func_108(iVar5, 1)) && !((__LIB_4__::func_682(iVar5, 1) && !__LIB_2__::func_457(iVar2, iVar5)) && __LIB_6__::func_25() != 0)) && !func_697(iVar5)) && !__LIB_3__::func_998(iVar5)) && !bVar8)
								{
									*iParam2 = 1;
								}
							}
						}
						if ((((((((((!*iParam3 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar5)) && !__LIB_7__::func_291(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_0__::func_811(iVar6)) && !__LIB_8__::func_303(iVar5)) && !__LIB_8__::func_108(iVar5, 1)) && __LIB_2__::func_192(PLAYER::PLAYER_ID())) && !func_697(iVar5)) && !__LIB_3__::func_998(iVar5)) && !bVar8)
						{
							*iParam3 = 1;
						}
					}
					if (*iParam3 && *iParam2)
					{
					}
					else
					{
						iVar4 = (iVar4 + 1);
					}
				}
int func_697(bool bParam0)//Position - 0x70008
{
	int iVar0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2788198;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_955(var uParam0, int iParam1)//Position - 0x83305
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 593779/*func_1177*/;
			break;
		case 111:
			uParam0->f_35 = 593770/*func_1176*/;
			break;
		case 1:
			uParam0->f_30 = 593691/*func_1174*/;
			break;
		case 2:
			uParam0->f_31 = 593053/*func_1170*/;
			break;
		case 3:
			uParam0->f_34 = 592787/*func_1169*/;
			break;
		case 4:
			uParam0->f_12 = 592775/*func_1168*/;
			break;
		case 6:
			uParam0->f_32 = 592676/*func_1167*/;
			break;
		case 37:
			uParam0->f_18 = 592545/*func_1166*/;
			break;
		case 38:
			uParam0->f_9 = 592498/*func_1165*/;
			break;
		case 39:
			uParam0->f_11 = 592463/*func_1164*/;
			break;
		case 41:
			uParam0->f_20 = 592344/*func_1161*/;
			break;
		case 42:
			uParam0->f_10 = 592316/*func_1160*/;
			break;
		case 11:
			uParam0->f_11 = 592306/*func_1159*/;
			break;
		case 12:
			uParam0->f_33 = 590155/*func_1155*/;
			break;
		case 14:
			uParam0->f_11 = 590146/*func_1154*/;
			break;
		case 109:
			uParam0->f_56 = 587562/*func_1151*/;
			break;
		case 8:
			uParam0->f_37 = 587554/*func_1150*/;
			break;
		case 7:
			uParam0->f_36 = 587545/*func_1149*/;
			break;
		case 79:
			*uParam0 = 587536/*func_1148*/;
			break;
		case 13:
			uParam0->f_2 = 587474/*func_1147*/;
			break;
		case 15:
			uParam0->f_2 = 587393/*func_1146*/;
			break;
		case 16:
			uParam0->f_5 = 587040/*func_1145*/;
			break;
		case 108:
			uParam0->f_55 = 582607/*func_1130*/;
			break;
		case 17:
			uParam0->f_17 = 581465/*func_1128*/;
			break;
		case 19:
			uParam0->f_17 = 581439/*func_1127*/;
			break;
		case 20:
			uParam0->f_3 = 581430/*func_1126*/;
			break;
		case 21:
			uParam0->f_3 = 581299/*func_1124*/;
			break;
		case 74:
			uParam0->f_53 = 581195/*func_1123*/;
			break;
		case 75:
			uParam0->f_4 = 581179/*func_1122*/;
			break;
		case 22:
			uParam0->f_24 = 581029/*func_1121*/;
			break;
		case 23:
			uParam0->f_26 = 581021/*func_1120*/;
			break;
		case 26:
			uParam0->f_38 = 573167/*func_1081*/;
			break;
		case 25:
			uParam0->f_23 = 572118/*func_1077*/;
			break;
		case 27:
			uParam0->f_25 = 571904/*func_1074*/;
			break;
		case 28:
			uParam0->f_24 = 571866/*func_1073*/;
			break;
		case 29:
			uParam0->f_28 = 571843/*func_1072*/;
			break;
		case 30:
			uParam0->f_8 = 571084/*func_1068*/;
			break;
		case 31:
			uParam0->f_39 = 571054/*func_1067*/;
			break;
		case 43:
			uParam0->f_8 = 570940/*func_1066*/;
			break;
		case 33:
			uParam0->f_40 = 570822/*func_1065*/;
			break;
		case 76:
			uParam0->f_13 = 570773/*func_1064*/;
			break;
		case 34:
			uParam0->f_41 = 561935/*func_1063*/;
			break;
		case 36:
			uParam0->f_58 = 561887/*func_1062*/;
			break;
		case 35:
			uParam0->f_42 = 550798/*func_1055*/;
			break;
		case 45:
			uParam0->f_14 = 550789/*func_1054*/;
			break;
		case 46:
			uParam0->f_14 = 550780/*func_1053*/;
			break;
		case 110:
			uParam0->f_57 = 550772/*func_1052*/;
			break;
		case 77:
			uParam0->f_13 = 550761/*func_1051*/;
			break;
		case 47:
			uParam0->f_43 = 550644/*func_1050*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 549711/*func_1036*/;
			break;
		case 49:
			uParam0->f_8 = 549702/*func_1035*/;
			break;
		case 50:
			*uParam0 = 549533/*func_1034*/;
			break;
		case 51:
			*uParam0 = 549524/*func_1033*/;
			break;
		case 52:
			uParam0->f_15 = 549513/*func_1032*/;
			break;
		case 53:
			uParam0->f_13 = 549490/*func_1031*/;
			break;
		case 54:
			uParam0->f_45 = 549442/*func_1030*/;
			break;
		case 56:
			uParam0->f_46 = 549424/*func_1029*/;
			break;
		case 57:
			uParam0->f_11 = 549382/*func_1027*/;
			break;
		case 58:
			uParam0->f_13 = 549340/*func_1026*/;
			break;
		case 59:
			*uParam0 = 549211/*func_1024*/;
			break;
		case 60:
			*uParam0 = 549202/*func_1023*/;
			break;
		case 61:
			uParam0->f_15 = 549191/*func_1022*/;
			break;
		case 62:
			uParam0->f_13 = 549168/*func_1021*/;
			break;
		case 63:
			uParam0->f_11 = 549159/*func_1020*/;
			break;
		case 55:
			uParam0->f_45 = 549118/*func_1019*/;
			break;
		case 64:
			uParam0->f_47 = 549110/*func_1018*/;
			break;
		case 65:
			uParam0->f_21 = 549102/*func_1017*/;
			break;
		case 66:
			uParam0->f_21 = 548831/*func_1016*/;
			break;
		case 67:
			uParam0->f_21 = 548761/*func_1015*/;
			break;
		case 68:
			*uParam0 = 548089/*func_1013*/;
			break;
		case 69:
			*uParam0 = 548080/*func_1012*/;
			break;
		case 70:
			uParam0->f_48 = 548068/*func_1011*/;
			break;
		case 71:
			uParam0->f_49 = 547848/*func_1010*/;
			break;
		case 107:
			uParam0->f_50 = 547836/*func_1009*/;
			break;
		case 80:
			uParam0->f_7 = 547300/*func_1005*/;
			break;
		case 84:
			uParam0->f_1 = 547185/*func_1000*/;
			break;
		case 85:
			uParam0->f_1 = 546282/*func_998*/;
			break;
		case 87:
			uParam0->f_1 = 543653/*func_989*/;
			break;
		case 88:
			uParam0->f_1 = 543644/*func_988*/;
			break;
		case 89:
			uParam0->f_54 = 543636/*func_987*/;
			break;
		case 96:
			uParam0->f_1 = 543627/*func_986*/;
			break;
		case 97:
			uParam0->f_1 = 543618/*func_985*/;
			break;
		case 98:
			uParam0->f_1 = 543609/*func_984*/;
			break;
		case 100:
			uParam0->f_22 = 543601/*func_983*/;
			break;
		case 101:
			uParam0->f_22 = 543593/*func_982*/;
			break;
		case 112:
			uParam0->f_13 = 543558/*func_980*/;
			break;
		case 113:
			uParam0->f_3 = 543549/*func_979*/;
			break;
		case 114:
			uParam0->f_16 = 541611/*func_977*/;
			break;
		case 115:
			uParam0->f_3 = 541602/*func_976*/;
			break;
		case 116:
			*uParam0 = 541593/*func_975*/;
			break;
		case 117:
			uParam0->f_16 = 540371/*func_974*/;
			break;
		case 121:
			*uParam0 = 540289/*func_973*/;
			break;
		case 122:
			*uParam0 = 540272/*func_972*/;
			break;
		case 123:
			uParam0->f_19 = 540240/*func_970*/;
			break;
		case 78:
			uParam0->f_59 = 539024/*func_958*/;
			break;
		case 124:
			uParam0->f_1 = 539015/*func_957*/;
			break;
		case 125:
			uParam0->f_19 = 539007/*func_956*/;
			break;
	}
}

int func_998(int iParam0, var uParam1)//Position - 0x855EA
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	var uVar7;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = __LIB_2__::func_399();
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_483(&iVar1, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_477(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_2__::func_533(iParam0, &Var2, &Var4, &uVar6, 1, iVar0);
		__LIB_2__::func_533(iParam0, &Var3, &Var5, &uVar7, 0, iVar0);
		__LIB_25__::func_103(&(Global_1946250.f_3638), 5000, "TD Shot", Var2, Var4, uVar6, Var3, Var5, uVar7, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_1077(int iParam0, int iParam1)//Position - 0x8BAD6
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	bVar2 = !BitTest(iParam1->f_2, 7);
	iVar3 = __LIB_2__::func_399();
	iVar4 = 0;
	Var5 = { __LIB_2__::func_561(iVar3) };
	func_696(iParam0, Var5, &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		switch (iVar3)
		{
			case 12:
			case 13:
			case 14:
			case 15:
				__LIB_3__::func_805(iParam1, 0, 1);
				__LIB_3__::func_805(iParam1, 1, 0);
				__LIB_3__::func_805(iParam1, 2, 0);
				if (__LIB_2__::func_444(0, iParam1))
				{
					__LIB_2__::func_447(1);
				}
				break;
			default:
				__LIB_3__::func_805(iParam1, 0, !bVar2);
				__LIB_3__::func_805(iParam1, 1, 0);
				__LIB_3__::func_805(iParam1, 2, 0);
				__LIB_2__::func_447(0);
				MISC::SET_BIT(&(iParam1->f_2), 6);
				break;
		}
		return;
	}
	else if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_3__::func_805(iParam1, 0, 1);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_927(iParam0, -1);
		}
		if (((iVar3 == 12 || iVar3 == 13) || iVar3 == 14) || iVar3 == 15)
		{
			iVar4 = 1;
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_927(iParam0, -1);
			__LIB_2__::func_447(iVar4);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var5, 1, 0, 0, 0, -2, -1, iVar4);
			}
			__LIB_18__::func_905(iVar4, 1);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var5, 0, 0, 1, 0, -2, -1, iVar4);
			}
			__LIB_18__::func_905(iVar4, 1);
		}
	}
	else
	{
		__LIB_2__::func_447(iVar4);
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_1081(var uParam0, var uParam1)//Position - 0x8BEEF
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	if (!__LIB_4__::func_10() && iVar0 != 1)
	{
		__LIB_2__::func_565(1);
	}
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_567(uParam0, uParam1);
			break;
		case 1:
			func_1082(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_1082(var uParam0, var uParam1)//Position - 0x8BF45
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4[3];
	var uVar5[3];
	char* sVar6;
	int iVar7;
	int iVar8;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	bVar2 = __LIB_3__::func_820();
	func_696(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		if (bVar2 || (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_79[0 /*6*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[0 /*6*/]), __LIB_4__::func_724(0))))
		{
			uParam1->f_6 = 1;
			if (__LIB_2__::func_566() == 1)
			{
				uParam1->f_8 = 1;
				uParam1->f_11 = 10;
				uParam1->f_1 = 1;
				uParam1->f_10 = 1;
				__LIB_7__::func_396();
				if (bVar2)
				{
					__LIB_2__::func_447(1);
				}
				else if (BitTest(Global_1946250.f_8, 22))
				{
					__LIB_3__::func_816(PLAYER::PLAYER_ID());
				}
			}
			return;
		}
	}
	sVar6 = __LIB_2__::func_551();
	iVar8 = 0;
	while (iVar8 < 3)
	{
		uVar5[iVar7] = __LIB_4__::func_724(iVar8);
		if (__LIB_2__::func_563(iVar8, bVar0, bVar1))
		{
			iVar4[iVar7] = iVar8;
			if (!bVar3 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar7 /*6*/]), uVar5[iVar7]))
			{
				bVar3 = true;
			}
			iVar7++;
		}
		else if (!bVar3)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar7 /*6*/]), uVar5[iVar7]))
			{
				bVar3 = true;
			}
		}
		iVar8++;
	}
	if (uParam0->f_5 || bVar3)
	{
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CAR_MET_EXT_T" /* GXT: LS Car Meet */);
		__LIB_7__::func_286(1, sVar6, sVar6);
		__LIB_3__::func_874();
		iVar8 = 0;
		while (iVar8 < iVar7)
		{
			__LIB_25__::func_557(iVar8, uVar5[iVar8], 0, 1, 0, 0, 0);
			iVar8++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_2__::func_566() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			uParam1->f_10 = 1;
			__LIB_7__::func_396();
			if (bVar2)
			{
				__LIB_2__::func_447(1);
			}
			else if (BitTest(Global_1946250.f_8, 22))
			{
				__LIB_3__::func_816(PLAYER::PLAYER_ID());
			}
			if (iVar4[uParam0->f_4] != 0)
			{
				__LIB_25__::func_296(iVar4[uParam0->f_4], 154);
			}
		}
	}
	else if (uParam0->f_3)
	{
		uParam1->f_4 = !__LIB_4__::func_10();
		__LIB_7__::func_396();
		MISC::CLEAR_BIT(&(Global_1946250.f_8), 22);
	}
}

void func_1178(var uParam0, int iParam1)//Position - 0x90F7C
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 634225/*func_1349*/;
			break;
		case 111:
			uParam0->f_35 = 634211/*func_1348*/;
			break;
		case 1:
			uParam0->f_30 = 634120/*func_1346*/;
			break;
		case 2:
			uParam0->f_31 = 633899/*func_1343*/;
			break;
		case 3:
			uParam0->f_34 = 633742/*func_1342*/;
			break;
		case 4:
			uParam0->f_12 = 633730/*func_1341*/;
			break;
		case 5:
			uParam0->f_11 = 633720/*func_1340*/;
			break;
		case 37:
			uParam0->f_18 = 633605/*func_1339*/;
			break;
		case 38:
			uParam0->f_9 = 633558/*func_1338*/;
			break;
		case 42:
			uParam0->f_10 = 633530/*func_1337*/;
			break;
		case 6:
			uParam0->f_32 = 633442/*func_1336*/;
			break;
		case 11:
			uParam0->f_11 = 633433/*func_1335*/;
			break;
		case 12:
			uParam0->f_33 = 631688/*func_1330*/;
			break;
		case 14:
			uParam0->f_11 = 631679/*func_1329*/;
			break;
		case 109:
			uParam0->f_56 = 627616/*func_1326*/;
			break;
		case 8:
			uParam0->f_37 = 627139/*func_1325*/;
			break;
		case 7:
			uParam0->f_36 = 627045/*func_1324*/;
			break;
		case 79:
			*uParam0 = 627036/*func_1323*/;
			break;
		case 13:
			uParam0->f_2 = 626974/*func_1322*/;
			break;
		case 15:
			uParam0->f_2 = 626893/*func_1321*/;
			break;
		case 16:
			uParam0->f_5 = 625995/*func_1319*/;
			break;
		case 108:
			uParam0->f_55 = 622716/*func_1307*/;
			break;
		case 17:
			uParam0->f_17 = 621471/*func_1304*/;
			break;
		case 19:
			uParam0->f_17 = 621445/*func_1303*/;
			break;
		case 20:
			uParam0->f_3 = 621231/*func_1301*/;
			break;
		case 21:
			uParam0->f_3 = 621167/*func_1300*/;
			break;
		case 74:
			uParam0->f_53 = 621063/*func_1299*/;
			break;
		case 75:
			uParam0->f_4 = 621047/*func_1298*/;
			break;
		case 22:
			uParam0->f_24 = 620945/*func_1297*/;
			break;
		case 23:
			uParam0->f_26 = 620937/*func_1296*/;
			break;
		case 26:
			uParam0->f_38 = 616942/*func_1277*/;
			break;
		case 25:
			uParam0->f_23 = 616492/*func_1274*/;
			break;
		case 27:
			uParam0->f_25 = 616484/*func_1273*/;
			break;
		case 28:
			uParam0->f_24 = 616476/*func_1272*/;
			break;
		case 30:
			uParam0->f_8 = 615839/*func_1267*/;
			break;
		case 31:
			uParam0->f_39 = 615705/*func_1266*/;
			break;
		case 33:
			uParam0->f_40 = 614831/*func_1257*/;
			break;
		case 32:
			*uParam0 = 614628/*func_1253*/;
			break;
		case 76:
			uParam0->f_13 = 614475/*func_1252*/;
			break;
		case 34:
			uParam0->f_41 = 612863/*func_1248*/;
			break;
		case 36:
			uParam0->f_58 = 612818/*func_1247*/;
			break;
		case 35:
			uParam0->f_42 = 603780/*func_1244*/;
			break;
		case 45:
			uParam0->f_14 = 603771/*func_1243*/;
			break;
		case 46:
			uParam0->f_14 = 603762/*func_1242*/;
			break;
		case 110:
			uParam0->f_57 = 603754/*func_1241*/;
			break;
		case 77:
			uParam0->f_13 = 603731/*func_1240*/;
			break;
		case 47:
			uParam0->f_43 = 603682/*func_1239*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 603545/*func_1237*/;
			break;
		case 49:
			uParam0->f_8 = 603527/*func_1236*/;
			break;
		case 50:
			*uParam0 = 602695/*func_1232*/;
			break;
		case 51:
			*uParam0 = 602593/*func_1231*/;
			break;
		case 52:
			uParam0->f_15 = 602582/*func_1230*/;
			break;
		case 53:
			uParam0->f_13 = 602429/*func_1229*/;
			break;
		case 54:
			uParam0->f_45 = 602196/*func_1228*/;
			break;
		case 56:
			uParam0->f_46 = 602187/*func_1227*/;
			break;
		case 57:
			uParam0->f_11 = 601774/*func_1223*/;
			break;
		case 58:
			uParam0->f_13 = 601621/*func_1222*/;
			break;
		case 59:
			*uParam0 = 601612/*func_1221*/;
			break;
		case 60:
			*uParam0 = 601603/*func_1220*/;
			break;
		case 61:
			uParam0->f_15 = 601592/*func_1219*/;
			break;
		case 62:
			uParam0->f_13 = 601581/*func_1218*/;
			break;
		case 63:
			uParam0->f_11 = 601572/*func_1217*/;
			break;
		case 64:
			uParam0->f_47 = 601564/*func_1216*/;
			break;
		case 65:
			uParam0->f_21 = 600508/*func_1213*/;
			break;
		case 66:
			uParam0->f_21 = 600288/*func_1212*/;
			break;
		case 67:
			uParam0->f_21 = 600213/*func_1211*/;
			break;
		case 68:
			*uParam0 = 599524/*func_1210*/;
			break;
		case 69:
			*uParam0 = 599515/*func_1209*/;
			break;
		case 70:
			uParam0->f_48 = 599503/*func_1208*/;
			break;
		case 71:
			uParam0->f_49 = 599411/*func_1207*/;
			break;
		case 107:
			uParam0->f_50 = 599399/*func_1206*/;
			break;
		case 80:
			uParam0->f_7 = 599032/*func_1205*/;
			break;
		case 84:
			uParam0->f_1 = 599023/*func_1204*/;
			break;
		case 85:
			uParam0->f_1 = 598231/*func_1202*/;
			break;
		case 87:
			uParam0->f_1 = 596853/*func_1195*/;
			break;
		case 88:
			uParam0->f_1 = 596844/*func_1194*/;
			break;
		case 89:
			uParam0->f_54 = 596836/*func_1193*/;
			break;
		case 96:
			uParam0->f_1 = 596827/*func_1192*/;
			break;
		case 97:
			uParam0->f_1 = 596818/*func_1191*/;
			break;
		case 98:
			uParam0->f_1 = 596809/*func_1190*/;
			break;
		case 100:
			uParam0->f_22 = 596801/*func_1189*/;
			break;
		case 101:
			uParam0->f_22 = 596793/*func_1188*/;
			break;
		case 112:
			uParam0->f_13 = 596781/*func_1187*/;
			break;
		case 113:
			uParam0->f_3 = 596772/*func_1186*/;
			break;
		case 114:
			uParam0->f_16 = 541611/*func_977*/;
			break;
		case 115:
			uParam0->f_3 = 596763/*func_1185*/;
			break;
		case 116:
			*uParam0 = 596754/*func_1184*/;
			break;
		case 117:
			uParam0->f_16 = 595534/*func_1183*/;
			break;
		case 78:
			uParam0->f_59 = 595362/*func_1181*/;
			break;
		case 124:
			uParam0->f_1 = 595353/*func_1180*/;
			break;
		case 125:
			uParam0->f_19 = 595345/*func_1179*/;
			break;
	}
}

int func_1202(int iParam0, var uParam1)//Position - 0x920D7
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	var uVar5;
	var uVar6;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_483(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_477(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_2__::func_586(iParam0, &Var1, &Var3, &uVar5, 1);
		__LIB_2__::func_586(iParam0, &Var2, &Var4, &uVar6, 0);
		__LIB_25__::func_103(&(Global_1946250.f_3638), 5000, "TD Shot", Var1, Var3, uVar5, Var2, Var4, uVar6, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_1228(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x93054
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	bVar0 = false;
	if (!__LIB_2__::func_590(PLAYER::PLAYER_ID(), __LIB_2__::func_591(iParam0)) && !__LIB_2__::func_590(__LIB_0__::func_582(), __LIB_2__::func_591(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_264(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_2__::func_590(iVar1, __LIB_2__::func_591(iParam0)) && __LIB_7__::func_33(iVar1))
				{
					Var3 = { __LIB_1__::func_267(iVar1) };
					if (__LIB_0__::func_585(Var3))
					{
						if (NETWORK::NETWORK_IS_FRIEND(&Var3))
						{
							iVar4 = joaat("AUT_SHP_FRIEND");
							if (iVar4 != *uParam4)
							{
								*uParam4 = iVar4;
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "AUT_SHP_FRIEND" /* GXT: Friend's Auto Shop */);
							}
							bVar0 = true;
						}
						else
						{
							iVar2++;
						}
						if (!bVar0 && *uParam4 == joaat("AUT_SHP_FRIEND"))
						{
							*uParam4 = joaat("AUT_SHP_EXT_T");
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "AUT_SHP_EXT_T" /* GXT: Auto Shop */);
						}
					}
Vector3 func_1229(int iParam0)//Position - 0x9313D
{
	switch (iParam0)
	{
		case 149:
			return 759.8774f, -677.6455f, 27.8356f;
			break;
		case 150:
			return -147.1386f, -1341.7018f, 28.9145f;
			break;
		case 151:
			return -171.7504f, -33.8705f, 51.256f;
			break;
		case 152:
			return 233.9541f, -1873.8497f, 25.5283f;
			break;
		case 153:
			return 489.2497f, -894.8347f, 24.7408f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_1274(int iParam0, int iParam1)//Position - 0x9682C
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_611(iParam0) };
	if (__LIB_7__::func_408(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_696(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_19__::func_95(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_19__::func_174(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_19__::func_174(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_1277(var uParam0, var uParam1)//Position - 0x969EE
{
	if (__LIB_2__::func_399() == 2 || __LIB_2__::func_399() == 1)
	{
		func_1280(uParam0, uParam1);
	}
	else if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0) && __LIB_2__::func_590(__LIB_2__::func_191(PLAYER::PLAYER_ID()), __LIB_2__::func_591(*uParam0)))
	{
		__LIB_3__::func_829(uParam0, uParam1);
	}
	else
	{
		__LIB_2__::func_612(uParam1);
	}
}

void func_1280(var uParam0, var uParam1)//Position - 0x96ACD
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_569(uParam0, uParam1);
			break;
		case 1:
			func_1293(uParam0, uParam1);
			break;
		case 2:
			__LIB_32__::func_188(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_1293(var uParam0, var uParam1)//Position - 0x976BA
{
	var uVar0;
	var uVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_696(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
	bVar2 = (uVar0 || uVar1);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_10 = PLAYER::PLAYER_ID();
		bVar2 = false;
	}
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 0;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_7__::func_396();
		if (__LIB_19__::func_96(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			__LIB_1__::func_319("AUTOS_PROP_ET" /* GXT: AUTO SHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 0;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_19__::func_95(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_1326(int iParam0, var uParam1, int iParam2)//Position - 0x993A0
{
	var uVar0;
	var uVar1;
	bool bVar2;
	__LIB_2__::func_617(iParam0, &(uParam1->f_22.f_59), &(uParam1->f_22.f_62), &(uParam1->f_22.f_65), &(uParam1->f_22.f_66), 0);
	switch (iParam0)
	{
		case 149:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_6__::func_414(iParam0))
					{
						uParam1->f_22.f_13 = { 759.2274f, -676.1144f, 28.4832f };
						uParam1->f_22.f_16 = { 1.6526f, -0.0281f, 163.8247f };
						uParam1->f_22.f_20 = { 759.1586f, -676.3341f, 28.4767f };
						uParam1->f_22.f_23 = { -1.2492f, -0.0281f, 162.718f };
						uParam1->f_22.f_28 = { 758.865f, -677.805f, 27.851f };
						uParam1->f_22.f_31 = { 0f, 0f, -169.56f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 35.9236f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 35.9236f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 762.6814f, -670.9703f, 29.2607f };
						uParam1->f_22.f_16 = { -2.2932f, 0f, 155.9849f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 761.751f, -671.6803f, 29.2137f };
						uParam1->f_22.f_23 = { -2.2932f, 0f, 142.145f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 758.817f, -675.19f, 27.859f };
						uParam1->f_22.f_31 = { 0f, 0f, 86.76f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 150:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_6__::func_414(iParam0))
					{
						uParam1->f_22.f_13 = { -148.8068f, -1342.0701f, 30.7246f };
						uParam1->f_22.f_16 = { -34.2644f, -0.0028f, -60.8442f };
						uParam1->f_22.f_20 = { -148.5539f, -1341.93f, 30.5286f };
						uParam1->f_22.f_23 = { -29.8713f, -0.0028f, -66.758f };
						uParam1->f_22.f_28 = { -147.294f, -1341.401f, 29.079f };
						uParam1->f_22.f_31 = { 0f, 0f, 90f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 32.2852f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 32.2852f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_right";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { -141.0062f, -1343.925f, 30.1565f };
						uParam1->f_22.f_16 = { -1.2453f, 0f, 70.4482f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { -141.8038f, -1342.8387f, 30.1565f };
						uParam1->f_22.f_23 = { -1.4974f, 0f, 68.1876f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { -144.657f, -1340.95f, 29.104f };
						uParam1->f_22.f_31 = { 0f, 0f, 0f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 151:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_6__::func_414(iParam0))
					{
						uParam1->f_22.f_13 = { -171.5194f, -36.1929f, 51.856f };
						uParam1->f_22.f_16 = { -3.0092f, -0.0019f, 21.9527f };
						uParam1->f_22.f_20 = { -171.757f, -35.6036f, 51.825f };
						uParam1->f_22.f_23 = { 0.3106f, -0.0019f, 21.9527f };
						uParam1->f_22.f_28 = { -172.462f, -33.763f, 51.213f };
						uParam1->f_22.f_31 = { 0f, 0f, 166.32f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 27.0608f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 27.0608f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_right";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { -168.9393f, -35.3119f, 53.2555f };
						uParam1->f_22.f_16 = { -6.5936f, 0f, 28.147f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { -169.9362f, -34.4523f, 53.1079f };
						uParam1->f_22.f_23 = { -5.7999f, 0f, 21.853f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { -171.681f, -31.278f, 51.263f };
						uParam1->f_22.f_31 = { 0f, 0f, 66.96f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 152:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_6__::func_414(iParam0))
					{
						uParam1->f_22.f_13 = { 232.6328f, -1874.2069f, 26.443f };
						uParam1->f_22.f_16 = { -21.7924f, 0.0013f, -18.5176f };
						uParam1->f_22.f_20 = { 232.7041f, -1873.9943f, 26.4045f };
						uParam1->f_22.f_23 = { -8.5978f, 0.0013f, -18.5176f };
						uParam1->f_22.f_28 = { 233.075f, -1873.188f, 25.563f };
						uParam1->f_22.f_31 = { -4.32f, 0f, 167.76f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 35.3225f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 35.3225f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 235.8221f, -1874.9221f, 26.8194f };
						uParam1->f_22.f_16 = { -3.3056f, 0f, 105.796f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 234.5172f, -1874.7244f, 26.7432f };
						uParam1->f_22.f_23 = { -3.3056f, 0f, 115.5265f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 231.176f, -1875.411f, 25.388f };
						uParam1->f_22.f_31 = { 0f, 0f, 44.28f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 153:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_6__::func_414(iParam0))
					{
						uParam1->f_22.f_13 = { 488.4486f, -893.36f, 25.3835f };
						uParam1->f_22.f_16 = { -0.6473f, 0.0003f, 172.6925f };
						uParam1->f_22.f_20 = { 488.4122f, -893.6423f, 25.3794f };
						uParam1->f_22.f_23 = { 0.1603f, 0.0201f, 172.7169f };
						uParam1->f_22.f_28 = { 488.413f, -895.15f, 24.75f };
						uParam1->f_22.f_31 = { 0f, 0f, -180f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 33.1011f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 33.1011f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 491.9715f, -894.7998f, 26.1521f };
						uParam1->f_22.f_16 = { -3.0471f, 0f, 145.4612f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 490.8015f, -895.3118f, 26.0841f };
						uParam1->f_22.f_23 = { -1.2604f, 0f, 144.274f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 488.463f, -897.537f, 24.813f };
						uParam1->f_22.f_31 = { 0f, 0f, 90f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_22.f_5) && MISC::GET_HASH_KEY(uParam1->f_22.f_5) != joaat("buzz_short"))
	{
		if (iParam2 == 0)
		{
			uParam1->f_22.f_42 = 1;
		}
		else
		{
			if (!__LIB_4__::func_973(1) || (__LIB_2__::func_232() && __LIB_2__::func_590(PLAYER::PLAYER_ID(), __LIB_2__::func_591(iParam0))))
			{
				func_696(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
				bVar2 = (uVar0 || uVar1);
			}
			if (!bVar2 && !__LIB_19__::func_96(iParam0))
			{
				uParam1->f_22.f_42 = 1;
			}
			else
			{
				uParam1->f_22.f_42 = 0;
			}
		}
	}
	else
	{
		uParam1->f_22.f_42 = 0;
	}
}

void func_1350(var uParam0, int iParam1)//Position - 0x9AD7A
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 650632/*func_1471*/;
			break;
		case 111:
			uParam0->f_35 = 650623/*func_1470*/;
			break;
		case 1:
			uParam0->f_30 = 650556/*func_1468*/;
			break;
		case 2:
			uParam0->f_31 = 650116/*func_1465*/;
			break;
		case 3:
			uParam0->f_34 = 649968/*func_1464*/;
			break;
		case 4:
			uParam0->f_12 = 649956/*func_1463*/;
			break;
		case 37:
			uParam0->f_18 = 649741/*func_1462*/;
			break;
		case 38:
			uParam0->f_9 = 649652/*func_1461*/;
			break;
		case 39:
			uParam0->f_11 = 649632/*func_1460*/;
			break;
		case 40:
			uParam0->f_6 = 649527/*func_1459*/;
			break;
		case 41:
			uParam0->f_20 = 649502/*func_1458*/;
			break;
		case 42:
			uParam0->f_10 = 649489/*func_1457*/;
			break;
		case 6:
			uParam0->f_32 = 649425/*func_1456*/;
			break;
		case 11:
			uParam0->f_11 = 649416/*func_1455*/;
			break;
		case 12:
			uParam0->f_33 = 648879/*func_1451*/;
			break;
		case 14:
			uParam0->f_11 = 648870/*func_1450*/;
			break;
		case 109:
			uParam0->f_56 = 647921/*func_1448*/;
			break;
		case 8:
			uParam0->f_37 = 647913/*func_1447*/;
			break;
		case 7:
			uParam0->f_36 = 647904/*func_1446*/;
			break;
		case 79:
			*uParam0 = 647895/*func_1445*/;
			break;
		case 13:
			uParam0->f_2 = 647833/*func_1444*/;
			break;
		case 15:
			uParam0->f_2 = 647752/*func_1443*/;
			break;
		case 16:
			uParam0->f_5 = 647425/*func_1442*/;
			break;
		case 108:
			uParam0->f_55 = 647416/*func_1441*/;
			break;
		case 17:
			uParam0->f_17 = 647404/*func_1440*/;
			break;
		case 19:
			uParam0->f_17 = 647392/*func_1439*/;
			break;
		case 18:
			uParam0->f_8 = 647350/*func_1437*/;
			break;
		case 20:
			uParam0->f_3 = 647341/*func_1436*/;
			break;
		case 21:
			uParam0->f_3 = 647293/*func_1435*/;
			break;
		case 74:
			uParam0->f_53 = 647138/*func_1433*/;
			break;
		case 75:
			uParam0->f_4 = 647129/*func_1432*/;
			break;
		case 22:
			uParam0->f_24 = 647027/*func_1431*/;
			break;
		case 23:
			uParam0->f_26 = 647019/*func_1430*/;
			break;
		case 25:
			uParam0->f_23 = 646592/*func_1427*/;
			break;
		case 27:
			uParam0->f_25 = 646584/*func_1426*/;
			break;
		case 28:
			uParam0->f_24 = 646576/*func_1425*/;
			break;
		case 30:
			uParam0->f_8 = 646541/*func_1424*/;
			break;
		case 31:
			uParam0->f_39 = 646511/*func_1423*/;
			break;
		case 33:
			uParam0->f_40 = 646344/*func_1422*/;
			break;
		case 76:
			uParam0->f_13 = 646321/*func_1421*/;
			break;
		case 34:
			uParam0->f_41 = 642707/*func_1418*/;
			break;
		case 36:
			uParam0->f_58 = 642662/*func_1417*/;
			break;
		case 35:
			uParam0->f_42 = 639468/*func_1413*/;
			break;
		case 45:
			uParam0->f_14 = 639459/*func_1412*/;
			break;
		case 46:
			uParam0->f_14 = 639450/*func_1411*/;
			break;
		case 110:
			uParam0->f_57 = 639442/*func_1410*/;
			break;
		case 77:
			uParam0->f_13 = 639431/*func_1409*/;
			break;
		case 47:
			uParam0->f_43 = 639269/*func_1408*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 637997/*func_1400*/;
			break;
		case 49:
			uParam0->f_8 = 637988/*func_1399*/;
			break;
		case 50:
			*uParam0 = 637563/*func_1392*/;
			break;
		case 51:
			*uParam0 = 637554/*func_1391*/;
			break;
		case 52:
			uParam0->f_15 = 637543/*func_1390*/;
			break;
		case 53:
			uParam0->f_13 = 637520/*func_1389*/;
			break;
		case 54:
			uParam0->f_45 = 637512/*func_1388*/;
			break;
		case 56:
			uParam0->f_46 = 637503/*func_1387*/;
			break;
		case 57:
			uParam0->f_11 = 637490/*func_1386*/;
			break;
		case 58:
			uParam0->f_13 = 637448/*func_1385*/;
			break;
		case 59:
			*uParam0 = 637439/*func_1384*/;
			break;
		case 60:
			*uParam0 = 637430/*func_1383*/;
			break;
		case 61:
			uParam0->f_15 = 637419/*func_1382*/;
			break;
		case 62:
			uParam0->f_13 = 637408/*func_1381*/;
			break;
		case 63:
			uParam0->f_11 = 637399/*func_1380*/;
			break;
		case 64:
			uParam0->f_47 = 637391/*func_1379*/;
			break;
		case 65:
			uParam0->f_21 = 637383/*func_1378*/;
			break;
		case 66:
			uParam0->f_21 = 636770/*func_1375*/;
			break;
		case 67:
			uParam0->f_21 = 636700/*func_1374*/;
			break;
		case 68:
			*uParam0 = 636011/*func_1373*/;
			break;
		case 69:
			*uParam0 = 636002/*func_1372*/;
			break;
		case 70:
			uParam0->f_48 = 635990/*func_1371*/;
			break;
		case 71:
			uParam0->f_49 = 635981/*func_1370*/;
			break;
		case 107:
			uParam0->f_50 = 635969/*func_1369*/;
			break;
		case 80:
			uParam0->f_7 = 635960/*func_1368*/;
			break;
		case 84:
			uParam0->f_1 = 635951/*func_1367*/;
			break;
		case 85:
			uParam0->f_1 = 635942/*func_1366*/;
			break;
		case 87:
			uParam0->f_1 = 635933/*func_1365*/;
			break;
		case 88:
			uParam0->f_1 = 635924/*func_1364*/;
			break;
		case 89:
			uParam0->f_54 = 635916/*func_1363*/;
			break;
		case 96:
			uParam0->f_1 = 635907/*func_1362*/;
			break;
		case 97:
			uParam0->f_1 = 635898/*func_1361*/;
			break;
		case 98:
			uParam0->f_1 = 635889/*func_1360*/;
			break;
		case 100:
			uParam0->f_22 = 635881/*func_1359*/;
			break;
		case 101:
			uParam0->f_22 = 635873/*func_1358*/;
			break;
		case 112:
			uParam0->f_13 = 635861/*func_1357*/;
			break;
		case 113:
			uParam0->f_3 = 635852/*func_1356*/;
			break;
		case 114:
			uParam0->f_16 = 541611/*func_977*/;
			break;
		case 115:
			uParam0->f_3 = 635843/*func_1355*/;
			break;
		case 116:
			*uParam0 = 635834/*func_1354*/;
			break;
		case 117:
			uParam0->f_16 = 595534/*func_1183*/;
			break;
		case 78:
			uParam0->f_59 = 635826/*func_1353*/;
			break;
		case 124:
			uParam0->f_1 = 635817/*func_1352*/;
			break;
		case 125:
			uParam0->f_19 = 635809/*func_1351*/;
			break;
	}
}

void func_1400(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x9BC2D
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	iVar0 = 0;
	iParam1 = (iParam1 - 1);
	iParam3->f_46 = __LIB_2__::func_635();
	MISC::SET_BIT(&(iParam3->f_2), 4);
	switch (iParam1)
	{
		case 0:
			__LIB_3__::func_805(iParam3, 0, 1);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 0);
			__LIB_3__::func_805(iParam3, 3, 1);
			__LIB_3__::func_805(iParam3, 4, 0);
			__LIB_3__::func_805(iParam3, 5, 0);
			break;
		case 1:
			__LIB_3__::func_805(iParam3, 0, 0);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 1);
			__LIB_3__::func_805(iParam3, 3, 1);
			__LIB_3__::func_805(iParam3, 4, 0);
			__LIB_3__::func_805(iParam3, 5, 0);
			break;
		case 3:
			__LIB_3__::func_805(iParam3, 0, 1);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 0);
			__LIB_3__::func_805(iParam3, 3, 0);
			__LIB_3__::func_805(iParam3, 4, 0);
			__LIB_3__::func_805(iParam3, 5, 0);
			break;
		case 2:
			__LIB_3__::func_805(iParam3, 0, 1);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 0);
			__LIB_3__::func_805(iParam3, 3, 0);
			break;
	}
	if (iParam1 == 2)
	{
		MISC::SET_BIT(&uVar3, PLAYER::PLAYER_ID());
		if (__LIB_4__::func_727(PLAYER::PLAYER_ID(), 148, uVar3, 1))
		{
			bVar1 = false;
			bVar2 = false;
		}
		else
		{
			func_696(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar1, &bVar2, 1, 1);
		}
		__LIB_3__::func_805(iParam3, 4, bVar1);
		__LIB_3__::func_805(iParam3, 5, bVar2);
	}
	if (iParam3->f_3 != 0 && (iParam3->f_5 < iVar0 || iParam3->f_1 != 1))
	{
		return;
	}
	if (iParam3->f_3 == 0)
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	bVar4 = false;
	if (__LIB_2__::func_444(0, iParam3) || __LIB_2__::func_444(1, iParam3))
	{
		if (iParam1 == 2 || iParam1 == 3)
		{
			bVar4 = true;
			MISC::CLEAR_BIT(&(iParam3->f_2), 1);
		}
		else
		{
			return;
		}
	}
	else if (__LIB_2__::func_444(3, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 26);
		iParam3->f_5 = 0;
	}
	else if (__LIB_2__::func_444(2, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 27);
		iParam3->f_5 = 0;
	}
	else if (__LIB_2__::func_444(4, iParam3) || __LIB_2__::func_444(5, iParam3))
	{
		iVar5 = __LIB_8__::func_220(__LIB_2__::func_444(4, iParam3));
		__LIB_2__::func_633(iVar5);
		bVar4 = true;
	}
	if (bVar4)
	{
		if (__LIB_2__::func_626())
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 1);
		}
		else
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 0);
		}
		if (__LIB_3__::func_834())
		{
			MISC::SET_BIT(&(Global_1946250.f_6), 19);
		}
		else
		{
			__LIB_2__::func_549(iParam0, -1);
		}
	}
}

void func_1427(int iParam0, int iParam1)//Position - 0x9DDC0
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	int iVar3;
	if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar3 = __LIB_2__::func_399();
		Var2 = { __LIB_2__::func_640(iParam0, iVar3) };
		func_696(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && Global_1946250.f_3606 != 148)
		{
			__LIB_7__::func_928(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_928(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_907();
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_907();
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_1472(var uParam0, int iParam1)//Position - 0x9ED91
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 715893/*func_1786*/;
			break;
		case 1:
			uParam0->f_30 = 715838/*func_1785*/;
			break;
		case 2:
			uParam0->f_31 = 715178/*func_1783*/;
			break;
		case 3:
			uParam0->f_34 = 715051/*func_1782*/;
			break;
		case 4:
			uParam0->f_12 = 715019/*func_1781*/;
			break;
		case 5:
			uParam0->f_11 = 715008/*func_1780*/;
			break;
		case 6:
			uParam0->f_32 = 714944/*func_1779*/;
			break;
		case 111:
			uParam0->f_35 = 714921/*func_1778*/;
			break;
		case 79:
			*uParam0 = 714912/*func_1777*/;
			break;
		case 37:
			uParam0->f_18 = 714797/*func_1776*/;
			break;
		case 38:
			uParam0->f_9 = 714701/*func_1774*/;
			break;
		case 11:
			uParam0->f_11 = 714692/*func_1773*/;
			break;
		case 12:
			uParam0->f_33 = 714302/*func_1771*/;
			break;
		case 109:
			uParam0->f_56 = 713999/*func_1770*/;
			break;
		case 15:
			uParam0->f_2 = 712032/*func_1757*/;
			break;
		case 13:
			uParam0->f_2 = 712023/*func_1756*/;
			break;
		case 75:
			uParam0->f_4 = 712014/*func_1755*/;
			break;
		case 16:
			uParam0->f_5 = 711631/*func_1752*/;
			break;
		case 108:
			uParam0->f_55 = 707690/*func_1734*/;
			break;
		case 17:
			uParam0->f_17 = 706964/*func_1731*/;
			break;
		case 19:
			uParam0->f_17 = 706938/*func_1730*/;
			break;
		case 20:
			uParam0->f_3 = 706769/*func_1729*/;
			break;
		case 21:
			uParam0->f_3 = 706706/*func_1728*/;
			break;
		case 74:
			uParam0->f_53 = 706554/*func_1727*/;
			break;
		case 22:
			uParam0->f_24 = 706473/*func_1726*/;
			break;
		case 25:
			uParam0->f_23 = 705536/*func_1722*/;
			break;
		case 30:
			uParam0->f_8 = 704207/*func_1716*/;
			break;
		case 31:
			uParam0->f_39 = 703629/*func_1713*/;
			break;
		case 33:
			uParam0->f_40 = 702394/*func_1708*/;
			break;
		case 14:
			uParam0->f_11 = 702385/*func_1707*/;
			break;
		case 34:
			uParam0->f_41 = 699618/*func_1704*/;
			break;
		case 36:
			uParam0->f_58 = 699565/*func_1703*/;
			break;
		case 35:
			uParam0->f_42 = 694113/*func_1699*/;
			break;
		case 45:
			uParam0->f_14 = 694104/*func_1698*/;
			break;
		case 46:
			uParam0->f_14 = 694095/*func_1697*/;
			break;
		case 110:
			uParam0->f_57 = 694087/*func_1696*/;
			break;
		case 77:
			uParam0->f_13 = 694064/*func_1695*/;
			break;
		case 47:
			uParam0->f_43 = 694015/*func_1694*/;
			break;
		case 49:
			uParam0->f_8 = 693990/*func_1693*/;
			break;
		case 50:
			*uParam0 = 693952/*func_1692*/;
			break;
		case 51:
			*uParam0 = 693878/*func_1689*/;
			break;
		case 52:
			uParam0->f_15 = 693867/*func_1688*/;
			break;
		case 53:
			uParam0->f_13 = 693788/*func_1687*/;
			break;
		case 54:
			uParam0->f_45 = 693780/*func_1686*/;
			break;
		case 56:
			uParam0->f_46 = 693771/*func_1685*/;
			break;
		case 57:
			uParam0->f_11 = 693761/*func_1684*/;
			break;
		case 58:
			uParam0->f_13 = 693514/*func_1683*/;
			break;
		case 64:
			uParam0->f_47 = 692351/*func_1677*/;
			break;
		case 65:
			uParam0->f_21 = 691159/*func_1672*/;
			break;
		case 66:
			uParam0->f_21 = 690052/*func_1661*/;
			break;
		case 67:
			uParam0->f_21 = 689876/*func_1659*/;
			break;
		case 68:
			*uParam0 = 688216/*func_1645*/;
			break;
		case 69:
			*uParam0 = 688207/*func_1644*/;
			break;
		case 70:
			uParam0->f_48 = 688195/*func_1643*/;
			break;
		case 71:
			uParam0->f_49 = 688186/*func_1642*/;
			break;
		case 107:
			uParam0->f_50 = 688174/*func_1641*/;
			break;
		case 80:
			uParam0->f_7 = 687339/*func_1635*/;
			break;
		case 73:
			uParam0->f_51 = 687330/*func_1634*/;
			break;
		case 84:
			uParam0->f_1 = 686678/*func_1632*/;
			break;
		case 85:
			uParam0->f_1 = 685806/*func_1624*/;
			break;
		case 87:
			uParam0->f_1 = 684595/*func_1615*/;
			break;
		case 88:
			uParam0->f_1 = 684575/*func_1614*/;
			break;
		case 89:
			uParam0->f_54 = 684481/*func_1613*/;
			break;
		case 90:
			uParam0->f_1 = 684350/*func_1610*/;
			break;
		case 91:
			uParam0->f_1 = 683722/*func_1609*/;
			break;
		case 92:
			uParam0->f_1 = 682955/*func_1606*/;
			break;
		case 94:
			uParam0->f_1 = 682403/*func_1605*/;
			break;
		case 95:
			uParam0->f_22 = 681807/*func_1600*/;
			break;
		case 18:
			uParam0->f_8 = 681449/*func_1596*/;
			break;
		case 96:
			uParam0->f_1 = 681356/*func_1595*/;
			break;
		case 97:
			uParam0->f_1 = 680510/*func_1590*/;
			break;
		case 98:
			uParam0->f_1 = 657244/*func_1526*/;
			break;
		case 100:
			uParam0->f_22 = 653962/*func_1504*/;
			break;
		case 101:
			uParam0->f_22 = 652802/*func_1491*/;
			break;
		case 78:
			uParam0->f_59 = 652594/*func_1488*/;
			break;
		case 104:
			uParam0->f_1 = 652154/*func_1480*/;
			break;
		case 102:
			uParam0->f_1 = 652145/*func_1479*/;
			break;
		case 103:
			uParam0->f_22 = 652035/*func_1474*/;
			break;
		case 81:
			*uParam0 = 651992/*func_1473*/;
			break;
	}
}

int func_1526(var uParam0, var uParam1)//Position - 0xA075C
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (__LIB_2__::func_675())
	{
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		MISC::SET_BIT(&(Global_1946250.f_7), 24);
		if (uParam1->f_218 != -1)
		{
			uParam1->f_218 = -1;
		}
		return 1;
	}
	else if (__LIB_3__::func_842())
	{
		func_1542(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 1);
		if (__LIB_0__::func_121(uParam1->f_140[0]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[0]))
			{
				return 0;
			}
			bVar0 = (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_7__::func_43(PLAYER::PLAYER_PED_ID()));
			Var1 = { __LIB_2__::func_684(Global_1946250.f_3377) };
			Var2 = { __LIB_2__::func_683(Global_1946250.f_3377) };
			sVar3 = __LIB_2__::func_669(0, 1);
			sVar4 = __LIB_2__::func_682(0, 1);
			__LIB_2__::func_681(&(Global_1946250.f_4073), 2600, "sub_exit", Var1, Var2, sVar3, sVar4, 0, 0, 500, 0, 2);
			sVar3 = __LIB_2__::func_669(bVar0, 0);
			sVar4 = __LIB_2__::func_682(bVar0, 0);
			Global_1946250.f_4073.f_394 = PED::CREATE_SYNCHRONIZED_SCENE(Var1, Var2, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], Global_1946250.f_4073.f_394, sVar3, sVar4, 1000f, -1000f, 0, 0, 1000f, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_140[0], false, false);
			MISC::SET_BIT(&(Global_1946250.f_2), 20);
			MISC::SET_BIT(&(Global_1946250.f_5), 27);
			NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			return 1;
		}
	}
	else
	{
		Var6 = { uParam1->f_28 };
		Var7 = { uParam1->f_31 };
		iVar8 = -1;
		if (__LIB_2__::func_668(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("seasparrow3");
			iVar8 = 0;
			if (PLAYER::PLAYER_ID() == Global_1853194)
			{
				STREAMING::REQUEST_MODEL(joaat("seasparrow2"));
			}
			if (!__LIB_7__::func_636(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_2__::func_667(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("avisa");
			iVar8 = 1;
			if (!__LIB_7__::func_636(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_2__::func_660(PLAYER::PLAYER_ID()))
		{
			iVar5 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
			iVar8 = 2;
			if (!__LIB_7__::func_636(uParam1, iVar8))
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			iVar9 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			Var6 = { ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true) };
			Var7 = { ENTITY::GET_ENTITY_ROTATION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2) };
			func_483(&iVar9, &(uParam1->f_109), 4);
			__LIB_2__::func_416(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var6, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam1->f_109, Var7, 2, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			if (__LIB_2__::func_660(PLAYER::PLAYER_ID()))
			{
				VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam1->f_109, false);
				VEHICLE::TRANSFORM_TO_SUBMARINE(uParam1->f_109, true);
			}
			__LIB_7__::func_423(uParam1->f_109);
			return 0;
		}
		__LIB_2__::func_663(1);
		if (__LIB_7__::func_422())
		{
			__LIB_7__::func_635(iVar8);
			__LIB_2__::func_681(&(Global_1946250.f_4073), 6000, "Submarine INT exit", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
			Global_1946250.f_4073.f_394 = PED::CREATE_SYNCHRONIZED_SCENE(uParam1->f_28, uParam1->f_31, 2);
			iVar10 = 0;
			while (iVar10 < uParam1->f_219)
			{
				if (iVar10 < 3)
				{
					if (__LIB_0__::func_121(uParam1->f_176[iVar10]))
					{
						if (iVar10 == 0)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_228))
							{
								uParam1->f_218 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FROM_ENTITY(uParam1->f_218, uParam1->f_230, uParam1->f_176[iVar10], uParam1->f_228, false, 0);
							}
							__LIB_2__::func_677(uParam1, uParam1->f_176[iVar10]);
						}
						__LIB_2__::func_676(&Var6, &Var7, uParam1, iVar10);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_176[iVar10], Var6, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(uParam1->f_176[iVar10], Var7, 2, true);
						if (!ENTITY::IS_ENTITY_VISIBLE(uParam1->f_176[iVar10]))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[iVar10], true, false);
						}
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam1->f_176[iVar10], Global_1946250.f_4073.f_394, uParam1->f_221[iVar10], uParam1->f_3, 1000f, -1000f, 0, 1000f);
					}
				}
				iVar10++;
			}
			if (__LIB_0__::func_121(uParam1->f_109))
			{
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam1->f_109, Global_1946250.f_4073.f_394, uParam1->f_7, uParam1->f_3, 1000f, -1000f, 0, 1000f);
			}
			MISC::SET_BIT(&(Global_1946250.f_7), 29);
			MISC::SET_BIT(&(Global_1946250.f_2), 20);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar5);
			return 1;
		}
	}
	return 0;
}

int func_1542(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xA121A
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_478(uParam0, iVar0, bParam2, bParam3))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (!func_1543(uParam0, bParam1))
		{
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
	}
	return 1;
}

int func_1543(var uParam0, int iParam1)//Position - 0xA1278
{
	int iVar0;
	struct<10> Var1;
	if (__LIB_2__::func_204(iParam1))
	{
		iVar0 = __LIB_25__::func_208(iParam1);
		Var1.f_1 = -1;
		Var1.f_2 = -1;
		Var1.f_3 = -1;
		Var1.f_4 = -1;
		Var1.f_8 = -1;
		Var1.f_9 = 50;
		Var1.f_0 = *uParam0;
		Var1.f_6 = 1;
		func_1547(&Var1, __LIB_2__::func_262(iVar0), 0, 1, 1, !__LIB_18__::func_523(), 0, __LIB_19__::func_138(), __LIB_2__::func_685(__LIB_6__::func_417(iParam1), 0), __LIB_2__::func_261(iVar0));
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(iParam1, 0), false);
		if (GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(iParam1, 0), __LIB_7__::func_306(iParam1, 2)))
		{
		}
		return 1;
	}
	return 0;
}

int func_1547(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0xA1397
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	struct<14> Var12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<4> Var17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	bool bVar24;
	int iVar25;
	var uVar26;
	var uVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	struct<7> Var35;
	struct<9> Var36;
	int iVar37;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Global_78200[iVar0] = -1;
		Global_78200.f_13[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_78200.f_26)
	{
		Global_78200.f_26[iVar0] = -1;
		Global_78200.f_36[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_78200.f_46)
	{
		Global_78200.f_46[iVar0] = -1;
		iVar0++;
	}
	if (!PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam0);
		if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
		{
			bVar2 = false;
			if (uParam0->f_1 != -1 && uParam0->f_1 != 1711)
			{
				bVar2 = true;
			}
			if (uParam0->f_2 != -1 && uParam0->f_2 != 334)
			{
				bVar2 = true;
			}
			else if ((uParam0->f_2 == -1 && bParam1) && bParam2)
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				bVar3 = false;
				if (!bParam2)
				{
					if (__LIB_37__::func_867(&Global_78200, *uParam0, bParam1))
					{
						bVar3 = true;
					}
				}
				if ((bParam1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
				{
					if (__LIB_7__::func_307(&Global_78200, *uParam0, bParam2, bParam4))
					{
						bVar3 = true;
					}
				}
				iVar4 = -1;
				if (uParam0->f_3 != -1)
				{
					if (__LIB_18__::func_485(*uParam0, &Global_78200, uParam0->f_3, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (uParam0->f_4 != -1)
				{
					if (__LIB_18__::func_485(*uParam0, &Global_78200, uParam0->f_4, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (bVar3)
				{
					switch (uParam0->f_6)
					{
						case 0:
							bVar5 = true;
							if (!__LIB_2__::func_257(uParam0, &Global_78200))
							{
								bVar5 = false;
							}
							if (bVar5)
							{
								uParam0->f_6 = 1;
							}
							break;
						case 1:
							if (!bParam6)
							{
								PED::CLEAR_ALL_PED_PROPS(*uParam0);
								PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
								PED::REMOVE_PED_HELMET(*uParam0, true);
								if (bParam3)
								{
									PED::CLEAR_PED_WETNESS(*uParam0);
									PED::CLEAR_PED_BLOOD_DAMAGE(*uParam0);
								}
								iVar6 = 0;
								iVar7 = PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 5);
								iVar8 = -1;
								iVar7 = iVar7;
								iVar8 = iVar8;
								if (__LIB_1__::func_200(*uParam0))
								{
									iVar6 = 1;
								}
								if (iVar6 && bParam5)
								{
									Global_78200[5] = 0;
									if (Global_78200.f_13[5] == -1)
									{
										Global_78200.f_13[5] = 0;
									}
								}
								if (bParam1)
								{
									if (((uParam0->f_2 != -1 && uParam0->f_2 != -2) && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										if (__LIB_2__::func_256(uParam0->f_2) == 22)
										{
											Global_78200.f_26[2] = -1;
										}
										else if ((((__LIB_2__::func_256(uParam0->f_2) == 8 || __LIB_2__::func_256(uParam0->f_2) == 50) || __LIB_2__::func_256(uParam0->f_2) == 47) || uParam0->f_2 == 286) || uParam0->f_2 == 287)
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
										}
										else
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
											Global_78200.f_26[0] = -1;
											if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
											{
												PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
											}
										}
										if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
										{
											if (__LIB_7__::func_241(iVar1, 7, __LIB_0__::func_350(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
											{
												Global_78200[7] = 0;
												Global_78200.f_13[7] = 0;
											}
										}
									}
									else if (uParam0->f_2 == -2)
									{
										iVar9 = FILES::GET_HASH_NAME_FOR_COMPONENT(*uParam0, 1, Global_78200[1], Global_78200.f_13[1]);
										if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("FORCE_PROP"), 0) && PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1) == Global_78200[1])
										{
										}
										else
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
											Global_78200.f_26[0] = -1;
											if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
											{
												if (__LIB_7__::func_241(iVar1, 7, __LIB_0__::func_350(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
												{
													Global_78200[7] = 0;
													Global_78200.f_13[7] = 0;
												}
											}
											if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
											{
												PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
											}
										}
									}
									else if (uParam0->f_2 == -1 && bParam2)
									{
										Global_78200.f_26[1] = -1;
										Global_78200.f_26[2] = -1;
										Global_78200.f_26[0] = -1;
										if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
										{
											PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
										}
									}
								}
								__LIB_25__::func_113(*uParam0, &Global_78200, uParam0->f_8);
								if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 != -1 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && PLAYER::PLAYER_ID() != -1)
								{
									if (BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12179, 4))
									{
										if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 7 || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 2)
										{
											PED::SET_PED_HEAD_OVERLAY(*uParam0, 4, 0, 0f);
										}
									}
								}
								GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, "", "");
								bVar11 = false;
								iVar0 = 0;
								while (iVar0 < 12)
								{
									if (Global_78200[iVar0] != -1)
									{
										if (iVar0 == 10 && iParam7 != -1)
										{
											iVar10 = __LIB_0__::func_350(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
											if (__LIB_7__::func_240(iVar1, 10, iVar10, -1))
											{
												if (iParam7 == 0)
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
												else if (iParam7 == 1)
												{
													if (*uParam0 == PLAYER::PLAYER_PED_ID() && !__LIB_6__::func_911())
													{
														PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
													}
													else
													{
														PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
														PED::SET_PED_ENABLE_CREW_EMBLEM(*uParam0, true);
													}
												}
												else if (iParam7 == 2)
												{
													GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), false);
													GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), __LIB_7__::func_306(PLAYER::PLAYER_ID(), 2));
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
												}
												else
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
											}
											else
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
											}
										}
										else
										{
											if (iVar0 == 1)
											{
											}
											else if (iVar0 == 2)
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, Global_78200[1], Global_78200.f_13[1], 0);
												bVar11 = true;
											}
											else if (Global_78200[iVar0] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(*uParam0, iVar0) || Global_78200.f_13[iVar0] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(*uParam0, iVar0, Global_78200[iVar0]))
											{
											}
											else
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
											}
											if (iVar0 == 10)
											{
												iVar10 = __LIB_0__::func_350(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
												if (__LIB_7__::func_240(iVar1, 10, iVar10, -1))
												{
													PED::SET_PED_ENABLE_CREW_EMBLEM(*uParam0, true);
												}
											}
										}
									}
									iVar0++;
								}
								if (!bVar11 && Global_78200[1] != -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, Global_78200[1], Global_78200.f_13[1], 0);
								}
								iVar0 = 0;
								while (iVar0 < Global_78200.f_26)
								{
									if (Global_78200.f_26[iVar0] != -1 && Global_78200.f_26[iVar0] != 255)
									{
										__LIB_6__::func_810(*uParam0, iVar0, Global_78200.f_26[iVar0], Global_78200.f_36[iVar0]);
									}
									iVar0++;
								}
								if (*uParam0 == PLAYER::PLAYER_PED_ID())
								{
									if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(*uParam0, 8, joaat("SCUBA_GEAR")))
									{
										if (iVar1 == joaat("MP_M_Freemode_01"))
										{
											PLAYER::SET_PLAYER_PREVIOUS_VARIATION_DATA(PLAYER::PLAYER_ID(), 8, 15, 0, 0, 0);
										}
										else if (iVar1 == joaat("MP_F_Freemode_01"))
										{
											PLAYER::SET_PLAYER_PREVIOUS_VARIATION_DATA(PLAYER::PLAYER_ID(), 8, 3, 0, 0, 0);
										}
									}
								}
								if ((iVar6 && !bParam5) && *uParam0 == PLAYER::PLAYER_PED_ID())
								{
									__LIB_18__::func_734(PLAYER::PLAYER_ID(), -1, -1);
								}
								if (!func_480(*uParam0))
								{
									if (uParam0->f_2 >= 52 && uParam0->f_2 <= 59)
									{
										PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Global_78200.f_26[0], true);
										PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Global_78200.f_36[0]);
										__LIB_2__::func_255(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 1);
									}
									else
									{
										Var12 = { __LIB_37__::func_856(iVar1, 14, __LIB_1__::func_556(589, -1, 0), -1) };
										if (Var12.f_3 != -1 && Var12.f_4 != -1)
										{
											if (__LIB_0__::func_709(iVar1, 14, __LIB_1__::func_556(589, -1, 0), -1))
											{
												PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Var12.f_3, true);
												PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Var12.f_4);
												__LIB_2__::func_255(*uParam0, Var12.f_3, Var12.f_4, 1);
											}
										}
										PED::SET_PED_CONFIG_FLAG(*uParam0, 34, false);
										PED::SET_PED_CONFIG_FLAG(*uParam0, 36, false);
									}
								}
								else if (Global_78200.f_26[0] != -1 && Global_78200.f_26[0] != 255)
								{
									__LIB_2__::func_255(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 0);
								}
								if (!__LIB_0__::func_155(0))
								{
									if (uParam0->f_3 != -1)
									{
										func_1553(*uParam0, uParam0->f_3, uParam0->f_8);
									}
									if ((uParam0->f_4 != -1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										func_1553(*uParam0, uParam0->f_4, uParam0->f_8);
									}
									if ((*uParam0 == PLAYER::PLAYER_PED_ID() && uParam0->f_1 != 0) && uParam0->f_1 != -1)
									{
										__LIB_1__::func_597(2065, 1, -1, 1, 0);
									}
									if ((((((((((((((((__LIB_0__::func_812(*uParam0, 7) && uParam0->f_1 != 1147) && uParam0->f_1 != 1148) && uParam0->f_1 != 1149) && uParam0->f_1 != 1150) && uParam0->f_1 != 1155) && uParam0->f_1 != 1156) && uParam0->f_1 != 1157) && uParam0->f_1 != 1158) && uParam0->f_1 != 1265) && uParam0->f_1 != 1266) && uParam0->f_1 != 1267) && uParam0->f_1 != 1268) && uParam0->f_1 != 1261) && uParam0->f_1 != 1262) && uParam0->f_1 != 1263) && uParam0->f_1 != 1264)
									{
										if (!bParam1 || uParam0->f_2 == -1)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
											PED::CLEAR_PED_PROP(*uParam0, 0);
										}
									}
									else if (__LIB_2__::func_254(*uParam0))
									{
										iVar13 = __LIB_2__::func_253(*uParam0, 1);
										iVar14 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar13, iVar14, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									else if (!__LIB_2__::func_254(*uParam0) && __LIB_2__::func_252(*uParam0))
									{
										iVar15 = __LIB_2__::func_253(*uParam0, 0);
										iVar16 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar15, iVar16, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									if (!bParam9)
									{
										func_163(*uParam0);
									}
									if (uParam0->f_3 != 4 && uParam0->f_1 == 0)
									{
										if (iVar1 == joaat("MP_M_Freemode_01"))
										{
											FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_HAIR_0_0"), &Var17);
										}
										else if (iVar1 == joaat("MP_F_Freemode_01"))
										{
											FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_HAIR_0_0"), &Var17);
										}
										if (Global_78200[2] == Var17.f_3)
										{
											Global_78200[2] = -1;
										}
									}
									if (__LIB_2__::func_251(uParam0->f_1))
									{
										if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_20 == 0)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 0, 0, 0);
											__LIB_6__::func_810(*uParam0, 0, -1, 0);
											__LIB_6__::func_810(*uParam0, 1, -1, 0);
											__LIB_6__::func_810(*uParam0, 2, -1, 0);
											func_29(*uParam0, 14, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
											PED::SET_PED_CONFIG_FLAG(*uParam0, 380, true);
										}
									}
									if (Global_78200[2] == -1)
									{
										if ((uParam0->f_8 != -1 && PLAYER::INT_TO_PLAYERINDEX(uParam0->f_8) != PLAYER::PLAYER_ID()) && !*uParam0 == PLAYER::PLAYER_PED_ID())
										{
											iVar18 = Global_2689235[uParam0->f_8 /*453*/].f_249;
											iVar19 = Global_2689235[uParam0->f_8 /*453*/].f_250;
											iVar20 = 1;
											func_29(*uParam0, 2, Global_2689235[uParam0->f_8 /*453*/].f_248, 0, -1, 0, 0, iVar20, iVar18, iVar19, uParam0->f_8, 1, 0, 0);
										}
										else
										{
											iVar18 = __LIB_1__::func_556(2153, -1, 0);
											iVar19 = __LIB_1__::func_556(2160, -1, 0);
											if (__LIB_1__::func_563(161, -1))
											{
												iVar21 = __LIB_1__::func_556(2053, -1, 0);
												if (iVar21 != -99)
												{
													iVar22 = -99;
													if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_M_Freemode_01"))
													{
														iVar22 = __LIB_18__::func_181(iVar21);
													}
													else if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
													{
														iVar22 = __LIB_18__::func_186(iVar21);
													}
													if (iVar22 != -99 && iVar21 != iVar22)
													{
														iVar21 = iVar22;
													}
												}
												if (MISC::IS_PC_VERSION())
												{
													if (iVar1 == joaat("MP_M_Freemode_01"))
													{
														iVar21 = __LIB_18__::func_181(iVar21);
													}
													else if (iVar1 == joaat("MP_F_Freemode_01"))
													{
														iVar21 = __LIB_18__::func_186(iVar21);
														if (iVar21 == __LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4) || iVar21 == __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4)))
														{
															iVar21 = __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4));
														}
														else if (iVar21 == __LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4) || iVar21 == __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4)))
														{
															iVar21 = __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4));
														}
													}
												}
												func_29(*uParam0, 2, iVar21, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
											else
											{
												iVar23 = __LIB_1__::func_556(753, -1, 0);
												func_29(*uParam0, 2, iVar23, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
										}
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 1), 0);
									}
								}
							}
							if (!__LIB_0__::func_155(0))
							{
								iVar25 = -1;
								if (uParam0->f_1 == 0)
								{
									bVar24 = false;
								}
								else
								{
									bVar24 = true;
									if (uParam0->f_1 == 1642)
									{
										iVar25 = Global_78200.f_46[0];
									}
								}
								if (uParam0->f_8 != -1)
								{
									func_1550(*uParam0, &(Global_1886249[uParam0->f_8 /*51*/]), bVar24, iVar25);
								}
								else
								{
									func_89(*uParam0, bVar24, 0, iVar25);
								}
								if (iParam8 != -1)
								{
									iVar28 = FILES::GET_HASH_NAME_FOR_COMPONENT(*uParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 11), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 11));
									if (__LIB_2__::func_250(iVar28, iParam8, &uVar26, &uVar27))
									{
										Global_78200.f_46[0] = uVar27;
									}
								}
								iVar29 = 0;
								while (iVar29 < Global_78200.f_46)
								{
									if (Global_78200.f_46[iVar29] != -1)
									{
										bVar30 = true;
									}
									iVar29++;
								}
								if (bVar30)
								{
									iVar37 = __LIB_0__::func_250(*uParam0);
									iVar33 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar37);
									iVar31 = 0;
									while (iVar31 < 127)
									{
										if (__LIB_6__::func_785(&Var36, iVar31, iVar37, *uParam0, -1))
										{
											iVar29 = 0;
											while (iVar29 < Global_78200.f_46)
											{
												if (Global_78200.f_46[iVar29] == Var36.f_5 && Global_78200.f_46[iVar29] != -1)
												{
													bVar34 = false;
													if (Var36.f_8 == joaat("crewLogo"))
													{
														if (iParam7 == 0)
														{
															bVar34 = true;
														}
														else if (iParam7 == 1)
														{
														}
														else if (iParam7 == 2)
														{
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), __LIB_7__::func_306(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var36.f_4, Var36.f_5);
														__LIB_0__::func_235(*uParam0, Var36.f_4, Var36.f_5);
													}
												}
												iVar29++;
											}
										}
										iVar31++;
									}
									iVar32 = 0;
									while (iVar32 < iVar33)
									{
										if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar37, iVar32, &Var35))
										{
											iVar29 = 0;
											while (iVar29 < Global_78200.f_46)
											{
												if (Global_78200.f_46[iVar29] == Var35.f_3 && Global_78200.f_46[iVar29] != -1)
												{
													bVar34 = false;
													if (Var35.f_6 == joaat("crewLogo"))
													{
														if (iParam7 == 0)
														{
															bVar34 = true;
														}
														else if (iParam7 == 1)
														{
														}
														else if (iParam7 == 2)
														{
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), __LIB_7__::func_306(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var35.f_2, Var35.f_3);
														__LIB_0__::func_235(*uParam0, Var35.f_2, Var35.f_3);
													}
												}
												iVar29++;
											}
										}
										iVar32++;
									}
								}
							}
							PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*uParam0, false, 0);
							__LIB_2__::func_249(*uParam0);
							uParam0->f_6 = 2;
							break;
						case 2:
							if (!__LIB_0__::func_155(0))
							{
								if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0) || !PED::HAS_PED_HEAD_BLEND_FINISHED(*uParam0))
								{
									return 0;
								}
								else
								{
									PED::FINALIZE_HEAD_BLEND(*uParam0);
									__LIB_2__::func_249(*uParam0);
									uParam0->f_7 = 1;
									uParam0->f_6 = 0;
									uParam0->f_5 = 0;
									return 1;
								}
							}
							else
							{
								__LIB_2__::func_249(*uParam0);
								uParam0->f_7 = 1;
								uParam0->f_6 = 0;
								uParam0->f_5 = 0;
								return 1;
							}
							break;
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_1550(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0xA2986
{
	struct<9> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<8> Var8;
	int iVar9;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar1 = __LIB_0__::func_250(iParam0);
		bVar2 = func_133(iParam0, 0);
		bVar3 = __LIB_31__::func_887(iParam0);
		bVar4 = func_124(iParam0, iParam3);
		if (bParam2)
		{
			bVar3 = true;
		}
		iVar5 = 0;
		while (iVar5 < 127)
		{
			if (BitTest((*uParam1)[(iVar5 / 32)], (iVar5 % 32)))
			{
				if (__LIB_6__::func_785(&Var0, iVar5, iVar1, iParam0, -1))
				{
					if (__LIB_25__::func_27(iParam0, &Var0, iVar5, Var0.f_4, Var0.f_8, bVar2, bVar3, bParam2, bVar4))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var0.f_4, Var0.f_5);
					}
				}
			}
			iVar5++;
		}
		if (BitTest((*uParam1)[(123 / 32)], (123 % 32)))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar7 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar1);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar1, iVar6, &Var8))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var8.f_0))
				{
					iVar9 = (129 + iVar6);
					if ((iVar9 / 32) >= *uParam1)
					{
					}
					else if (BitTest((*uParam1)[(iVar9 / 32)], (iVar9 % 32)))
					{
						if (__LIB_25__::func_27(iParam0, &(Var8.f_7), iVar9, Var8.f_2, Var8.f_6, bVar2, bVar3, bParam2, bVar4))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var8.f_2, Var8.f_3);
							__LIB_0__::func_235(iParam0, Var8.f_2, Var8.f_3);
						}
					}
				}
			}
			iVar6++;
		}
	}
}

void func_1553(int iParam0, int iParam1, int iParam2)//Position - 0xA2E65
{
	struct<37> Var0;
	int iVar1;
	int iVar2;
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 9;
	Var0.f_36 = 9;
	Var0.f_46 = 3;
	iVar1 = -1;
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	}
	iVar2 = 0;
	while (iVar2 < 12)
	{
		Var0[iVar2] = -1;
		Var0.f_13[iVar2] = -1;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Var0.f_26)
	{
		Var0.f_26[iVar2] = -1;
		Var0.f_36[iVar2] = -1;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Var0.f_46)
	{
		Var0.f_46[iVar2] = -1;
		iVar2++;
	}
	if (__LIB_18__::func_485(iParam0, &Var0, iParam1, &iVar1))
	{
		if ((iParam1 == 1 || iParam1 == 4) || iParam1 == 3)
		{
			func_1554(iParam0);
			__LIB_25__::func_113(iParam0, &Var0, iParam2);
		}
		if (iParam1 == 11)
		{
			if (iVar1 != -1)
			{
				if (__LIB_2__::func_256(iVar1) == 22)
				{
					Var0.f_26[2] = -1;
				}
				else if (__LIB_2__::func_256(iVar1) == 8)
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
				}
				else
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
					Var0.f_26[0] = -1;
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
				{
					if (__LIB_7__::func_241(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_181(iParam0, 7, -1), -1))
					{
						Var0[7] = 0;
						Var0.f_13[7] = 0;
					}
				}
			}
			__LIB_25__::func_113(iParam0, &Var0, iParam2);
		}
		else if (iParam1 == 3)
		{
			PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0), 100f);
		}
		iVar2 = 0;
		while (iVar2 < 12)
		{
			if (Var0[iVar2] != -1)
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar2, Var0[iVar2], Var0.f_13[iVar2], 0);
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < Var0.f_26)
		{
			if (Var0.f_26[iVar2] != -1 && Var0.f_26[iVar2] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar2, Var0.f_26[iVar2], Var0.f_36[iVar2], true);
			}
			iVar2++;
		}
	}
}

void func_1554(int iParam0)//Position - 0xA3071
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_25__::func_111(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_268(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

int func_1606(var uParam0, var uParam1)//Position - 0xA6BCB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_2__::func_399();
	iVar2 = 0;
	iVar3 = -1;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar2);
	}
	else
	{
		iVar1 = __LIB_2__::func_696();
	}
	__LIB_2__::func_695(&iVar1);
	switch (iVar0)
	{
		case 4:
			switch (iVar1)
			{
				case joaat("avisa"):
					iVar3 = 1;
					if (!__LIB_7__::func_636(uParam1, iVar3))
					{
						return 0;
					}
					break;
				default:
					iVar3 = 2;
					if (!__LIB_7__::func_636(uParam1, iVar3))
					{
						return 0;
					}
					break;
			}
			break;
		case 3:
			switch (iVar1)
			{
				case joaat("seasparrow3"):
					iVar3 = 0;
					if (!__LIB_7__::func_636(uParam1, iVar3))
					{
						return 0;
					}
					break;
				default:
					return 1;
					break;
			}
			break;
		default:
			return 1;
			break;
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && iVar2 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_483(&iVar2, &(uParam1->f_109), 4);
			__LIB_2__::func_416(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
			__LIB_7__::func_423(uParam1->f_109);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar2, false);
			}
			if (iVar1 == joaat("stromberg") || iVar1 == joaat("toreador"))
			{
				VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam1->f_109, false);
				VEHICLE::TRANSFORM_TO_SUBMARINE(uParam1->f_109, true);
			}
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		uParam1->f_109 = VEHICLE::CREATE_VEHICLE(iVar1, uParam1->f_28, 0f, false, false, true);
		__LIB_2__::func_416(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
		VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
		__LIB_7__::func_423(uParam1->f_109);
		return 0;
	}
	if (iVar2 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
		{
			func_1542(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
			return 0;
		}
		if (__LIB_0__::func_121(uParam1->f_2) && __LIB_0__::func_121(uParam1->f_109))
		{
			if (__LIB_2__::func_95())
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, __LIB_2__::func_671());
			}
			else
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, -1);
			}
		}
	}
	__LIB_7__::func_635(iVar3);
	__LIB_2__::func_681(&(Global_1946250.f_4073), 6000, "Submarine INT enter", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	return 1;
}

int func_1624(int iParam0, var uParam1)//Position - 0xA76EE
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	if (__LIB_3__::func_845())
	{
		return 1;
	}
	if (__LIB_32__::func_25())
	{
		return 1;
	}
	iVar0 = __LIB_2__::func_399();
	iVar1 = __LIB_6__::func_418();
	Var2 = { __LIB_18__::func_737(iParam0, iVar0) };
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
	{
		if (func_1542(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_2, __LIB_2__::func_702(iParam0, iVar0, iVar1), false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam1->f_2, __LIB_7__::func_930(iParam0, iVar0));
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		func_483(&iVar1, &(uParam1->f_109), 32);
		__LIB_2__::func_416(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var2, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, __LIB_18__::func_736(iParam0, iVar0));
		VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
		ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && __LIB_0__::func_121(uParam1->f_109))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_109, true) };
		Var4 = { ENTITY::GET_ENTITY_ROTATION(uParam1->f_109, 2) };
		iVar5 = __LIB_2__::func_701(iParam0, iVar0);
		__LIB_2__::func_681(&(Global_1946250.f_3638), iVar5, "Submarine enter", Var3, Var4, uParam1->f_3, uParam1->f_8, 1, 0, 0, 0, 2);
		return 1;
	}
	return 0;
}

void func_1722(int iParam0, int iParam1)//Position - 0xAC400
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	int iVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_18__::func_911(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iVar7)) && !__LIB_1__::func_425(iVar7, 1)) && !__LIB_7__::func_291(iVar7)) && !__LIB_2__::func_509(iVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iVar7))) && !__LIB_1__::func_425(iVar7, 1)) && !__LIB_7__::func_291(iVar7)) && !__LIB_2__::func_509(iVar7, 14))
						{
							bVar1 = true;
						}
						if (!bVar1 && __LIB_2__::func_457(iVar7, PLAYER::PLAYER_ID()))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						__LIB_25__::func_388(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_388(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_933(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_1723(iParam0, 0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_933(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_1723(iParam0, 0);
					}
					Jump @652; //curOff = 633
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_1723(int iParam0, bool bParam1)//Position - 0xAC68F
{
	__LIB_25__::func_388(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
	if (bParam1)
	{
		__LIB_7__::func_394(2);
	}
}

void func_1787(var uParam0, int iParam1)//Position - 0xAEC7E
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 736985/*func_1910*/;
			break;
		case 111:
			uParam0->f_35 = 736976/*func_1909*/;
			break;
		case 1:
			uParam0->f_30 = 736909/*func_1907*/;
			break;
		case 2:
			uParam0->f_31 = 736583/*func_1904*/;
			break;
		case 3:
			uParam0->f_34 = 736422/*func_1903*/;
			break;
		case 4:
			uParam0->f_12 = 736410/*func_1902*/;
			break;
		case 6:
			uParam0->f_32 = 736346/*func_1901*/;
			break;
		case 11:
			uParam0->f_11 = 736337/*func_1900*/;
			break;
		case 12:
			uParam0->f_33 = 736001/*func_1896*/;
			break;
		case 14:
			uParam0->f_11 = 735992/*func_1895*/;
			break;
		case 109:
			uParam0->f_56 = 735256/*func_1893*/;
			break;
		case 8:
			uParam0->f_37 = 735248/*func_1892*/;
			break;
		case 7:
			uParam0->f_36 = 735239/*func_1891*/;
			break;
		case 79:
			*uParam0 = 735230/*func_1890*/;
			break;
		case 72:
			uParam0->f_12 = 735218/*func_1889*/;
			break;
		case 13:
			uParam0->f_2 = 735209/*func_1888*/;
			break;
		case 15:
			uParam0->f_2 = 735130/*func_1887*/;
			break;
		case 16:
			uParam0->f_5 = 734786/*func_1886*/;
			break;
		case 108:
			uParam0->f_55 = 734777/*func_1885*/;
			break;
		case 17:
			uParam0->f_17 = 734267/*func_1883*/;
			break;
		case 19:
			uParam0->f_17 = 734213/*func_1882*/;
			break;
		case 18:
			uParam0->f_8 = 734125/*func_1880*/;
			break;
		case 20:
			uParam0->f_3 = 734105/*func_1879*/;
			break;
		case 21:
			uParam0->f_3 = 734078/*func_1878*/;
			break;
		case 74:
			uParam0->f_53 = 734056/*func_1877*/;
			break;
		case 75:
			uParam0->f_4 = 734047/*func_1876*/;
			break;
		case 22:
			uParam0->f_24 = 733945/*func_1875*/;
			break;
		case 23:
			uParam0->f_26 = 733937/*func_1874*/;
			break;
		case 26:
			uParam0->f_38 = 733929/*func_1873*/;
			break;
		case 25:
			uParam0->f_23 = 733168/*func_1869*/;
			break;
		case 27:
			uParam0->f_25 = 733160/*func_1868*/;
			break;
		case 28:
			uParam0->f_24 = 733152/*func_1867*/;
			break;
		case 30:
			uParam0->f_8 = 733041/*func_1866*/;
			break;
		case 31:
			uParam0->f_39 = 732992/*func_1865*/;
			break;
		case 33:
			uParam0->f_40 = 732923/*func_1864*/;
			break;
		case 76:
			uParam0->f_13 = 732900/*func_1863*/;
			break;
		case 34:
			uParam0->f_41 = 728827/*func_1860*/;
			break;
		case 36:
			uParam0->f_58 = 728770/*func_1859*/;
			break;
		case 35:
			uParam0->f_42 = 722552/*func_1850*/;
			break;
		case 45:
			uParam0->f_14 = 722543/*func_1849*/;
			break;
		case 46:
			uParam0->f_14 = 722534/*func_1848*/;
			break;
		case 110:
			uParam0->f_57 = 722526/*func_1847*/;
			break;
		case 77:
			uParam0->f_13 = 722515/*func_1846*/;
			break;
		case 47:
			uParam0->f_43 = 722411/*func_1845*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 721344/*func_1837*/;
			break;
		case 49:
			uParam0->f_8 = 721335/*func_1836*/;
			break;
		case 50:
			*uParam0 = 720938/*func_1829*/;
			break;
		case 51:
			*uParam0 = 720929/*func_1828*/;
			break;
		case 52:
			uParam0->f_15 = 720919/*func_1827*/;
			break;
		case 53:
			uParam0->f_13 = 720892/*func_1826*/;
			break;
		case 54:
			uParam0->f_45 = 720398/*func_1824*/;
			break;
		case 56:
			uParam0->f_46 = 720389/*func_1823*/;
			break;
		case 57:
			uParam0->f_11 = 720380/*func_1822*/;
			break;
		case 58:
			uParam0->f_13 = 720338/*func_1821*/;
			break;
		case 59:
			*uParam0 = 720329/*func_1820*/;
			break;
		case 60:
			*uParam0 = 720320/*func_1819*/;
			break;
		case 61:
			uParam0->f_15 = 720309/*func_1818*/;
			break;
		case 62:
			uParam0->f_13 = 720298/*func_1817*/;
			break;
		case 63:
			uParam0->f_11 = 720289/*func_1816*/;
			break;
		case 64:
			uParam0->f_47 = 720281/*func_1815*/;
			break;
		case 65:
			uParam0->f_21 = 720273/*func_1814*/;
			break;
		case 66:
			uParam0->f_21 = 719963/*func_1813*/;
			break;
		case 67:
			uParam0->f_21 = 719893/*func_1812*/;
			break;
		case 68:
			*uParam0 = 719204/*func_1811*/;
			break;
		case 69:
			*uParam0 = 719195/*func_1810*/;
			break;
		case 70:
			uParam0->f_48 = 719183/*func_1809*/;
			break;
		case 71:
			uParam0->f_49 = 719174/*func_1808*/;
			break;
		case 107:
			uParam0->f_50 = 719162/*func_1807*/;
			break;
		case 80:
			uParam0->f_7 = 719153/*func_1806*/;
			break;
		case 84:
			uParam0->f_1 = 719144/*func_1805*/;
			break;
		case 85:
			uParam0->f_1 = 719135/*func_1804*/;
			break;
		case 87:
			uParam0->f_1 = 719126/*func_1803*/;
			break;
		case 88:
			uParam0->f_1 = 719117/*func_1802*/;
			break;
		case 89:
			uParam0->f_54 = 719109/*func_1801*/;
			break;
		case 96:
			uParam0->f_1 = 719084/*func_1800*/;
			break;
		case 97:
			uParam0->f_1 = 718975/*func_1799*/;
			break;
		case 98:
			uParam0->f_1 = 718264/*func_1798*/;
			break;
		case 100:
			uParam0->f_22 = 717600/*func_1796*/;
			break;
		case 101:
			uParam0->f_22 = 717473/*func_1795*/;
			break;
		case 112:
			uParam0->f_13 = 717461/*func_1794*/;
			break;
		case 113:
			uParam0->f_3 = 717452/*func_1793*/;
			break;
		case 114:
			uParam0->f_16 = 541611/*func_977*/;
			break;
		case 115:
			uParam0->f_3 = 717443/*func_1792*/;
			break;
		case 116:
			*uParam0 = 717434/*func_1791*/;
			break;
		case 117:
			uParam0->f_16 = 595534/*func_1183*/;
			break;
		case 78:
			uParam0->f_59 = 717426/*func_1790*/;
			break;
		case 124:
			uParam0->f_1 = 717417/*func_1789*/;
			break;
		case 125:
			uParam0->f_19 = 717409/*func_1788*/;
			break;
	}
}

int func_1798(var uParam0, var uParam1)//Position - 0xAF5B8
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	Var0 = { 1569.249f, 248.978f, -46.378f };
	Var1 = { 0f, 0f, 146.98f };
	sVar2 = "mini@strip_club@throwout_d@";
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
	{
		uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_ClubBar_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
	{
		uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_M_Bouncer_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[1]);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 11, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 8, 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
	{
		func_1542(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
			{
				return 0;
			}
		}
		iVar3++;
	}
	MISC::SET_BIT(&(Global_1946250.f_2), 20);
	Var0 = { Var0 + Vector(0f, 4f, 0f) };
	__LIB_2__::func_681(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 262144, 0);
	uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	if (__LIB_0__::func_121(uParam1->f_140[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[2]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 0, 0, 1000f, 0);
	}
	return 1;
}

void func_1869(int iParam0, int iParam1)//Position - 0xB2FF0
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	int iVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_3__::func_856(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_2__::func_776(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_425(iVar7, 1) && !__LIB_7__::func_291(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(iVar7, 14)) && !func_697(iVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_7__::func_291(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(iVar7, 14)) && !func_697(iVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_7__::func_937(iParam0, -1);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						__LIB_18__::func_917(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						__LIB_18__::func_917(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if ((!bVar1 && !bVar0) && !func_1870())
					{
						MISC::SET_BIT(&(iParam1->f_2), 5);
						MISC::SET_BIT(&(iParam1->f_2), 6);
					}
					Jump @651; //curOff = 632
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
bool func_1870()//Position - 0xB327E
{
	return BitTest(Global_1946250.f_3, 2);
}

void func_1911(var uParam0, int iParam1)//Position - 0xB3EE2
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 745577/*func_2004*/;
			break;
		case 111:
			uParam0->f_35 = 745568/*func_2003*/;
			break;
		case 1:
			uParam0->f_30 = 745497/*func_2001*/;
			break;
		case 2:
			uParam0->f_31 = 745259/*func_1998*/;
			break;
		case 3:
			uParam0->f_34 = 745208/*func_1997*/;
			break;
		case 4:
			uParam0->f_12 = 745196/*func_1996*/;
			break;
		case 6:
			uParam0->f_32 = 745132/*func_1995*/;
			break;
		case 11:
			uParam0->f_11 = 745123/*func_1994*/;
			break;
		case 12:
			uParam0->f_33 = 744683/*func_1990*/;
			break;
		case 14:
			uParam0->f_11 = 744674/*func_1989*/;
			break;
		case 109:
			uParam0->f_56 = 744000/*func_1987*/;
			break;
		case 8:
			uParam0->f_37 = 743992/*func_1986*/;
			break;
		case 7:
			uParam0->f_36 = 743983/*func_1985*/;
			break;
		case 79:
			*uParam0 = 743974/*func_1984*/;
			break;
		case 13:
			uParam0->f_2 = 743912/*func_1983*/;
			break;
		case 15:
			uParam0->f_2 = 743832/*func_1982*/;
			break;
		case 16:
			uParam0->f_5 = 743463/*func_1980*/;
			break;
		case 108:
			uParam0->f_55 = 743454/*func_1979*/;
			break;
		case 17:
			uParam0->f_17 = 743442/*func_1978*/;
			break;
		case 19:
			uParam0->f_17 = 743430/*func_1977*/;
			break;
		case 20:
			uParam0->f_3 = 743421/*func_1976*/;
			break;
		case 21:
			uParam0->f_3 = 743412/*func_1975*/;
			break;
		case 74:
			uParam0->f_53 = 743390/*func_1974*/;
			break;
		case 75:
			uParam0->f_4 = 743381/*func_1973*/;
			break;
		case 22:
			uParam0->f_24 = 743369/*func_1972*/;
			break;
		case 23:
			uParam0->f_26 = 743361/*func_1971*/;
			break;
		case 26:
			uParam0->f_38 = 743353/*func_1970*/;
			break;
		case 25:
			uParam0->f_23 = 743345/*func_1969*/;
			break;
		case 27:
			uParam0->f_25 = 743337/*func_1968*/;
			break;
		case 28:
			uParam0->f_24 = 743329/*func_1967*/;
			break;
		case 30:
			uParam0->f_8 = 743294/*func_1966*/;
			break;
		case 31:
			uParam0->f_39 = 743264/*func_1965*/;
			break;
		case 33:
			uParam0->f_40 = 743194/*func_1964*/;
			break;
		case 76:
			uParam0->f_13 = 743171/*func_1963*/;
			break;
		case 34:
			uParam0->f_41 = 743075/*func_1962*/;
			break;
		case 36:
			uParam0->f_58 = 743030/*func_1961*/;
			break;
		case 35:
			uParam0->f_42 = 740517/*func_1959*/;
			break;
		case 45:
			uParam0->f_14 = 740508/*func_1958*/;
			break;
		case 46:
			uParam0->f_14 = 740499/*func_1957*/;
			break;
		case 110:
			uParam0->f_57 = 740491/*func_1956*/;
			break;
		case 77:
			uParam0->f_13 = 740480/*func_1955*/;
			break;
		case 47:
			uParam0->f_43 = 740440/*func_1954*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 740332/*func_1953*/;
			break;
		case 49:
			uParam0->f_8 = 740323/*func_1952*/;
			break;
		case 50:
			*uParam0 = 740120/*func_1951*/;
			break;
		case 51:
			*uParam0 = 740111/*func_1950*/;
			break;
		case 52:
			uParam0->f_15 = 740100/*func_1949*/;
			break;
		case 53:
			uParam0->f_13 = 740077/*func_1948*/;
			break;
		case 54:
			uParam0->f_45 = 740069/*func_1947*/;
			break;
		case 56:
			uParam0->f_46 = 740060/*func_1946*/;
			break;
		case 57:
			uParam0->f_11 = 740047/*func_1945*/;
			break;
		case 58:
			uParam0->f_13 = 740005/*func_1944*/;
			break;
		case 59:
			*uParam0 = 739996/*func_1943*/;
			break;
		case 60:
			*uParam0 = 739987/*func_1942*/;
			break;
		case 61:
			uParam0->f_15 = 739976/*func_1941*/;
			break;
		case 62:
			uParam0->f_13 = 739965/*func_1940*/;
			break;
		case 63:
			uParam0->f_11 = 739956/*func_1939*/;
			break;
		case 64:
			uParam0->f_47 = 739948/*func_1938*/;
			break;
		case 65:
			uParam0->f_21 = 739940/*func_1937*/;
			break;
		case 66:
			uParam0->f_21 = 739707/*func_1936*/;
			break;
		case 67:
			uParam0->f_21 = 739637/*func_1935*/;
			break;
		case 68:
			*uParam0 = 738948/*func_1934*/;
			break;
		case 69:
			*uParam0 = 738939/*func_1933*/;
			break;
		case 70:
			uParam0->f_48 = 738927/*func_1932*/;
			break;
		case 71:
			uParam0->f_49 = 738918/*func_1931*/;
			break;
		case 107:
			uParam0->f_50 = 738906/*func_1930*/;
			break;
		case 80:
			uParam0->f_7 = 738897/*func_1929*/;
			break;
		case 84:
			uParam0->f_1 = 738888/*func_1928*/;
			break;
		case 85:
			uParam0->f_1 = 738879/*func_1927*/;
			break;
		case 87:
			uParam0->f_1 = 738870/*func_1926*/;
			break;
		case 88:
			uParam0->f_1 = 738861/*func_1925*/;
			break;
		case 89:
			uParam0->f_54 = 738853/*func_1924*/;
			break;
		case 96:
			uParam0->f_1 = 738844/*func_1923*/;
			break;
		case 97:
			uParam0->f_1 = 738835/*func_1922*/;
			break;
		case 98:
			uParam0->f_1 = 738826/*func_1921*/;
			break;
		case 100:
			uParam0->f_22 = 738818/*func_1920*/;
			break;
		case 101:
			uParam0->f_22 = 738810/*func_1919*/;
			break;
		case 112:
			uParam0->f_13 = 738798/*func_1918*/;
			break;
		case 113:
			uParam0->f_3 = 738789/*func_1917*/;
			break;
		case 114:
			uParam0->f_16 = 541611/*func_977*/;
			break;
		case 115:
			uParam0->f_3 = 738780/*func_1916*/;
			break;
		case 116:
			*uParam0 = 738771/*func_1915*/;
			break;
		case 117:
			uParam0->f_16 = 595534/*func_1183*/;
			break;
		case 78:
			uParam0->f_59 = 738763/*func_1914*/;
			break;
		case 124:
			uParam0->f_1 = 738754/*func_1913*/;
			break;
		case 125:
			uParam0->f_19 = 738746/*func_1912*/;
			break;
	}
}

void func_2005(var uParam0, int iParam1)//Position - 0xB6072
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 824859/*func_2261*/;
			break;
		case 111:
			uParam0->f_35 = 824845/*func_2260*/;
			break;
		case 1:
			uParam0->f_30 = 824689/*func_2258*/;
			break;
		case 2:
			uParam0->f_31 = 824207/*func_2254*/;
			break;
		case 3:
			uParam0->f_34 = 824008/*func_2253*/;
			break;
		case 4:
			uParam0->f_12 = 823886/*func_2252*/;
			break;
		case 5:
			uParam0->f_11 = 823876/*func_2251*/;
			break;
		case 37:
			uParam0->f_18 = 823738/*func_2250*/;
			break;
		case 38:
			uParam0->f_9 = 823693/*func_2249*/;
			break;
		case 42:
			uParam0->f_10 = 823609/*func_2247*/;
			break;
		case 6:
			uParam0->f_32 = 823515/*func_2246*/;
			break;
		case 11:
			uParam0->f_11 = 823506/*func_2245*/;
			break;
		case 12:
			uParam0->f_33 = 822328/*func_2241*/;
			break;
		case 14:
			uParam0->f_11 = 822319/*func_2240*/;
			break;
		case 109:
			uParam0->f_56 = 815783/*func_2238*/;
			break;
		case 8:
			uParam0->f_37 = 815483/*func_2237*/;
			break;
		case 7:
			uParam0->f_36 = 815426/*func_2236*/;
			break;
		case 79:
			*uParam0 = 815182/*func_2234*/;
			break;
		case 13:
			uParam0->f_2 = 815120/*func_2233*/;
			break;
		case 15:
			uParam0->f_2 = 815040/*func_2232*/;
			break;
		case 16:
			uParam0->f_5 = 814320/*func_2230*/;
			break;
		case 108:
			uParam0->f_55 = 811129/*func_2218*/;
			break;
		case 17:
			uParam0->f_17 = 808820/*func_2214*/;
			break;
		case 19:
			uParam0->f_17 = 808793/*func_2213*/;
			break;
		case 20:
			uParam0->f_3 = 808617/*func_2212*/;
			break;
		case 21:
			uParam0->f_3 = 808553/*func_2211*/;
			break;
		case 74:
			uParam0->f_53 = 808449/*func_2210*/;
			break;
		case 75:
			uParam0->f_4 = 808433/*func_2209*/;
			break;
		case 22:
			uParam0->f_24 = 808330/*func_2208*/;
			break;
		case 23:
			uParam0->f_26 = 808283/*func_2207*/;
			break;
		case 24:
			uParam0->f_26 = 808246/*func_2206*/;
			break;
		case 26:
			uParam0->f_38 = 806203/*func_2194*/;
			break;
		case 25:
			uParam0->f_23 = 805881/*func_2192*/;
			break;
		case 30:
			uParam0->f_8 = 805024/*func_2190*/;
			break;
		case 31:
			uParam0->f_39 = 804886/*func_2189*/;
			break;
		case 33:
			uParam0->f_40 = 804314/*func_2188*/;
			break;
		case 32:
			*uParam0 = 804029/*func_2183*/;
			break;
		case 34:
			uParam0->f_41 = 801401/*func_2181*/;
			break;
		case 36:
			uParam0->f_58 = 801344/*func_2180*/;
			break;
		case 35:
			uParam0->f_42 = 774381/*func_2177*/;
			break;
		case 45:
			uParam0->f_14 = 774372/*func_2176*/;
			break;
		case 46:
			uParam0->f_14 = 774363/*func_2175*/;
			break;
		case 110:
			uParam0->f_57 = 774355/*func_2174*/;
			break;
		case 77:
			uParam0->f_13 = 774332/*func_2173*/;
			break;
		case 47:
			uParam0->f_43 = 774260/*func_2171*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 774132/*func_2170*/;
			break;
		case 49:
			uParam0->f_8 = 774106/*func_2169*/;
			break;
		case 50:
			*uParam0 = 773419/*func_2165*/;
			break;
		case 51:
			*uParam0 = 773149/*func_2162*/;
			break;
		case 52:
			uParam0->f_15 = 773138/*func_2161*/;
			break;
		case 53:
			uParam0->f_13 = 772976/*func_2160*/;
			break;
		case 54:
			uParam0->f_45 = 772452/*func_2153*/;
			break;
		case 56:
			uParam0->f_46 = 772434/*func_2152*/;
			break;
		case 57:
			uParam0->f_11 = 772182/*func_2151*/;
			break;
		case 58:
			uParam0->f_13 = 772020/*func_2150*/;
			break;
		case 59:
			*uParam0 = 771524/*func_2143*/;
			break;
		case 60:
			*uParam0 = 771509/*func_2142*/;
			break;
		case 61:
			uParam0->f_15 = 771498/*func_2141*/;
			break;
		case 62:
			uParam0->f_13 = 771336/*func_2140*/;
			break;
		case 55:
			uParam0->f_45 = 771157/*func_2139*/;
			break;
		case 63:
			uParam0->f_11 = 771130/*func_2138*/;
			break;
		case 64:
			uParam0->f_47 = 769592/*func_2130*/;
			break;
		case 65:
			uParam0->f_21 = 768205/*func_2127*/;
			break;
		case 66:
			uParam0->f_21 = 767846/*func_2126*/;
			break;
		case 67:
			uParam0->f_21 = 767732/*func_2125*/;
			break;
		case 68:
			*uParam0 = 766772/*func_2122*/;
			break;
		case 69:
			*uParam0 = 766763/*func_2121*/;
			break;
		case 70:
			uParam0->f_48 = 766751/*func_2120*/;
			break;
		case 71:
			uParam0->f_49 = 766207/*func_2119*/;
			break;
		case 107:
			uParam0->f_50 = 766195/*func_2118*/;
			break;
		case 80:
			uParam0->f_7 = 766007/*func_2117*/;
			break;
		case 84:
			uParam0->f_1 = 765998/*func_2116*/;
			break;
		case 85:
			uParam0->f_1 = 764412/*func_2113*/;
			break;
		case 87:
			uParam0->f_1 = 762896/*func_2106*/;
			break;
		case 88:
			uParam0->f_1 = 762887/*func_2105*/;
			break;
		case 89:
			uParam0->f_54 = 762879/*func_2104*/;
			break;
		case 96:
			uParam0->f_1 = 762849/*func_2103*/;
			break;
		case 97:
			uParam0->f_1 = 762404/*func_2102*/;
			break;
		case 98:
			uParam0->f_1 = 756595/*func_2043*/;
			break;
		case 100:
			uParam0->f_22 = 748174/*func_2018*/;
			break;
		case 101:
			uParam0->f_22 = 747309/*func_2013*/;
			break;
		case 112:
			uParam0->f_13 = 747298/*func_2012*/;
			break;
		case 113:
			uParam0->f_3 = 747289/*func_2011*/;
			break;
		case 114:
			uParam0->f_16 = 747280/*func_2010*/;
			break;
		case 117:
			uParam0->f_16 = 747271/*func_2009*/;
			break;
		case 78:
			uParam0->f_59 = 747099/*func_2007*/;
			break;
		case 76:
			uParam0->f_13 = 747076/*func_2006*/;
			break;
	}
}

int func_2113(int iParam0, var uParam1)//Position - 0xBA9FC
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_483(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_477(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_2__::func_842(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_2__::func_842(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_2__::func_841(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_2__::func_841(iParam0, &Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[0 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 1);
		}
		__LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2153(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0xBC964
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	bVar0 = false;
	if (!__LIB_2__::func_851(PLAYER::PLAYER_ID(), __LIB_2__::func_852(iParam0)) && !__LIB_2__::func_851(__LIB_0__::func_582(), __LIB_2__::func_852(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_264(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_2__::func_851(iVar1, __LIB_2__::func_852(iParam0)) && __LIB_9__::func_217(iVar1))
				{
					Var3 = { __LIB_1__::func_267(iVar1) };
					if (__LIB_0__::func_585(Var3))
					{
						if (NETWORK::NETWORK_IS_FRIEND(&Var3))
						{
							iVar4 = joaat("ARC_FRIEND");
							if (iVar4 != *uParam4)
							{
								*uParam4 = iVar4;
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "ARC_FRIEND" /* GXT: Friend's Arcade */);
							}
							bVar0 = true;
						}
						else
						{
							iVar2++;
						}
						if (!bVar0 && *uParam4 == joaat("ARC_FRIEND"))
						{
							*uParam4 = joaat("BLIP_740");
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_740" /* GXT: Arcade */);
						}
						if (HUD::DOES_BLIP_EXIST(*uParam1) && __LIB_18__::func_676(iParam0))
						{
							if (!HUD::DOES_BLIP_EXIST(*iParam2))
							{
								Var5 = { __LIB_2__::func_856(iParam0) };
								iVar6 = __LIB_2__::func_855(iParam0);
								*iParam2 = __LIB_0__::func_392(Var5, 0);
								HUD::SET_BLIP_SPRITE(*iParam2, iVar6);
								HUD::SET_BLIP_SCALE(*iParam2, 1f);
								HUD::SET_BLIP_PRIORITY(*iParam2, 7);
								func_2154(iParam2, 18);
								HUD::SET_BLIP_AS_SHORT_RANGE(*iParam2, false);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam2, "BASE_HEIST_BLIP" /* GXT: The Doomsday Heist */);
								HUD::SET_BLIP_HIDDEN_ON_LEGEND(*iParam2, true);
							}
						}
						else if (HUD::DOES_BLIP_EXIST(*iParam2))
						{
							HUD::REMOVE_BLIP(iParam2);
						}
					}
void func_2154(var uParam0, int iParam1)//Position - 0xBCADD
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = __LIB_1__::func_48(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

void func_2192(int iParam0, int iParam1)//Position - 0xC4BF9
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_848(iParam0, 0) };
	if (__LIB_7__::func_461(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_696(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_939(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_939(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_914(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_914(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2194(var uParam0, var uParam1)//Position - 0xC4D3B
{
	if (__LIB_2__::func_399() == 3)
	{
		func_2198(uParam0, uParam1);
	}
	else if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0) && __LIB_2__::func_851(__LIB_2__::func_191(PLAYER::PLAYER_ID()), __LIB_2__::func_852(*uParam0)))
	{
		__LIB_3__::func_862(uParam0, uParam1);
	}
	else if (__LIB_2__::func_399() == 2)
	{
		func_2196(uParam0, uParam1);
	}
	else
	{
		__LIB_2__::func_868(uParam1);
	}
}

void func_2196(var uParam0, var uParam1)//Position - 0xC4DC4
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_696(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_1 = 1;
		uParam1->f_6 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		uParam1->f_4 = 1;
		__LIB_7__::func_396();
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
		}
		else if (uParam0->f_2)
		{
			uParam1->f_1 = 1;
			uParam1->f_5 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_7__::func_939(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_2198(var uParam0, var uParam1)//Position - 0xC4EE2
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_37__::func_974(uParam0, uParam1);
			break;
		case 1:
			func_2203(uParam0, uParam1);
			break;
		case 2:
			__LIB_37__::func_973(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2203(var uParam0, var uParam1)//Position - 0xC5263
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_696(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_7__::func_396();
		if (__LIB_35__::func_796(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_2__::func_399() == 3)
			{
				__LIB_1__::func_319("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_319("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_7__::func_939(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_2262(var uParam0, int iParam1)//Position - 0xC9624
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 841075/*func_2371*/;
			break;
		case 111:
			uParam0->f_35 = 841066/*func_2370*/;
			break;
		case 1:
			uParam0->f_30 = 840998/*func_2368*/;
			break;
		case 2:
			uParam0->f_31 = 840550/*func_2365*/;
			break;
		case 3:
			uParam0->f_34 = 840445/*func_2364*/;
			break;
		case 4:
			uParam0->f_12 = 840432/*func_2363*/;
			break;
		case 6:
			uParam0->f_32 = 840368/*func_2362*/;
			break;
		case 11:
			uParam0->f_11 = 840359/*func_2361*/;
			break;
		case 12:
			uParam0->f_33 = 839898/*func_2356*/;
			break;
		case 14:
			uParam0->f_11 = 839889/*func_2355*/;
			break;
		case 109:
			uParam0->f_56 = 839498/*func_2353*/;
			break;
		case 8:
			uParam0->f_37 = 839490/*func_2352*/;
			break;
		case 7:
			uParam0->f_36 = 839481/*func_2351*/;
			break;
		case 79:
			*uParam0 = 839457/*func_2350*/;
			break;
		case 13:
			uParam0->f_2 = 839395/*func_2349*/;
			break;
		case 15:
			uParam0->f_2 = 839316/*func_2348*/;
			break;
		case 16:
			uParam0->f_5 = 839019/*func_2347*/;
			break;
		case 108:
			uParam0->f_55 = 839010/*func_2346*/;
			break;
		case 17:
			uParam0->f_17 = 838998/*func_2345*/;
			break;
		case 19:
			uParam0->f_17 = 838971/*func_2344*/;
			break;
		case 20:
			uParam0->f_3 = 838962/*func_2343*/;
			break;
		case 21:
			uParam0->f_3 = 838953/*func_2342*/;
			break;
		case 74:
			uParam0->f_53 = 838931/*func_2341*/;
			break;
		case 75:
			uParam0->f_4 = 838922/*func_2340*/;
			break;
		case 22:
			uParam0->f_24 = 838914/*func_2339*/;
			break;
		case 23:
			uParam0->f_26 = 838906/*func_2338*/;
			break;
		case 26:
			uParam0->f_38 = 838898/*func_2337*/;
			break;
		case 25:
			uParam0->f_23 = 838566/*func_2334*/;
			break;
		case 27:
			uParam0->f_25 = 838558/*func_2333*/;
			break;
		case 28:
			uParam0->f_24 = 838550/*func_2332*/;
			break;
		case 30:
			uParam0->f_8 = 838229/*func_2329*/;
			break;
		case 31:
			uParam0->f_39 = 838199/*func_2328*/;
			break;
		case 33:
			uParam0->f_40 = 838130/*func_2327*/;
			break;
		case 34:
			uParam0->f_41 = 834397/*func_2326*/;
			break;
		case 36:
			uParam0->f_58 = 834352/*func_2325*/;
			break;
		case 35:
			uParam0->f_42 = 831185/*func_2322*/;
			break;
		case 45:
			uParam0->f_14 = 831176/*func_2321*/;
			break;
		case 46:
			uParam0->f_14 = 831167/*func_2320*/;
			break;
		case 110:
			uParam0->f_57 = 831159/*func_2319*/;
			break;
		case 77:
			uParam0->f_13 = 831148/*func_2318*/;
			break;
		case 47:
			uParam0->f_43 = 831040/*func_2317*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 829925/*func_2314*/;
			break;
		case 49:
			uParam0->f_8 = 829916/*func_2313*/;
			break;
		case 50:
			*uParam0 = 829907/*func_2312*/;
			break;
		case 51:
			*uParam0 = 829898/*func_2311*/;
			break;
		case 52:
			uParam0->f_15 = 829887/*func_2310*/;
			break;
		case 53:
			uParam0->f_13 = 829876/*func_2309*/;
			break;
		case 54:
			uParam0->f_45 = 829868/*func_2308*/;
			break;
		case 56:
			uParam0->f_46 = 829859/*func_2307*/;
			break;
		case 57:
			uParam0->f_11 = 829850/*func_2306*/;
			break;
		case 58:
			uParam0->f_13 = 829808/*func_2305*/;
			break;
		case 59:
			*uParam0 = 829799/*func_2304*/;
			break;
		case 60:
			*uParam0 = 829790/*func_2303*/;
			break;
		case 61:
			uParam0->f_15 = 829779/*func_2302*/;
			break;
		case 62:
			uParam0->f_13 = 829768/*func_2301*/;
			break;
		case 63:
			uParam0->f_11 = 829759/*func_2300*/;
			break;
		case 64:
			uParam0->f_47 = 829751/*func_2299*/;
			break;
		case 65:
			uParam0->f_21 = 829743/*func_2298*/;
			break;
		case 66:
			uParam0->f_21 = 829440/*func_2297*/;
			break;
		case 67:
			uParam0->f_21 = 829370/*func_2296*/;
			break;
		case 68:
			*uParam0 = 828721/*func_2295*/;
			break;
		case 69:
			*uParam0 = 828712/*func_2294*/;
			break;
		case 70:
			uParam0->f_48 = 828704/*func_2293*/;
			break;
		case 71:
			uParam0->f_49 = 828695/*func_2292*/;
			break;
		case 107:
			uParam0->f_50 = 828683/*func_2291*/;
			break;
		case 80:
			uParam0->f_7 = 828249/*func_2290*/;
			break;
		case 18:
			uParam0->f_8 = 828224/*func_2289*/;
			break;
		case 84:
			uParam0->f_1 = 828207/*func_2288*/;
			break;
		case 85:
			uParam0->f_1 = 827665/*func_2284*/;
			break;
		case 87:
			uParam0->f_1 = 826624/*func_2275*/;
			break;
		case 88:
			uParam0->f_1 = 826615/*func_2274*/;
			break;
		case 89:
			uParam0->f_54 = 826607/*func_2273*/;
			break;
		case 96:
			uParam0->f_1 = 826598/*func_2272*/;
			break;
		case 97:
			uParam0->f_1 = 826589/*func_2271*/;
			break;
		case 98:
			uParam0->f_1 = 826580/*func_2270*/;
			break;
		case 100:
			uParam0->f_22 = 826572/*func_2269*/;
			break;
		case 101:
			uParam0->f_22 = 826564/*func_2268*/;
			break;
		case 112:
			uParam0->f_13 = 826552/*func_2267*/;
			break;
		case 113:
			uParam0->f_3 = 826543/*func_2266*/;
			break;
		case 78:
			uParam0->f_59 = 826240/*func_2263*/;
			break;
	}
}

int func_2284(var uParam0, var uParam1)//Position - 0xCA111
{
	return func_2285(uParam1);
}

int func_2285(var uParam0)//Position - 0xCA11F
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_109))
		{
			func_483(&iVar0, &(uParam0->f_109), 60);
			__LIB_2__::func_416(&(uParam0->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
			return 0;
		}
		else if (func_477(&iVar0, &(uParam0->f_109), &(uParam0->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0->f_109), &(uParam0->f_189[1 /*3*/]), &(uParam0->f_189[0 /*3*/]));
		__LIB_2__::func_890(&Var1, &Var3, &uVar9, 1);
		__LIB_2__::func_890(&Var2, &Var4, &uVar10, 0);
		__LIB_2__::func_889(&Var5, &Var7, &uVar11, 1);
		__LIB_2__::func_889(&Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam0->f_189[0 /*3*/].f_1 - uParam0->f_189[1 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam0->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_188), 1);
		}
		__LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2334(int iParam0, int iParam1)//Position - 0xCCBA6
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_364(iParam0) };
	if (__LIB_0__::func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_696(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_937(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_937(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_917(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_917(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2372(var uParam0, int iParam1)//Position - 0xCD57C
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 876165/*func_2549*/;
			break;
		case 111:
			uParam0->f_35 = 876142/*func_2548*/;
			break;
		case 1:
			uParam0->f_30 = 876012/*func_2546*/;
			break;
		case 2:
			uParam0->f_31 = 875345/*func_2542*/;
			break;
		case 3:
			uParam0->f_34 = 875082/*func_2541*/;
			break;
		case 4:
			uParam0->f_12 = 875069/*func_2540*/;
			break;
		case 5:
			uParam0->f_11 = 875059/*func_2539*/;
			break;
		case 37:
			uParam0->f_18 = 874860/*func_2538*/;
			break;
		case 38:
			uParam0->f_9 = 874812/*func_2537*/;
			break;
		case 42:
			uParam0->f_10 = 874776/*func_2536*/;
			break;
		case 6:
			uParam0->f_32 = 874661/*func_2535*/;
			break;
		case 11:
			uParam0->f_11 = 874652/*func_2534*/;
			break;
		case 12:
			uParam0->f_33 = 873722/*func_2528*/;
			break;
		case 14:
			uParam0->f_11 = 873713/*func_2527*/;
			break;
		case 109:
			uParam0->f_56 = 872558/*func_2525*/;
			break;
		case 8:
			uParam0->f_37 = 872514/*func_2524*/;
			break;
		case 7:
			uParam0->f_36 = 872491/*func_2523*/;
			break;
		case 79:
			*uParam0 = 872467/*func_2522*/;
			break;
		case 13:
			uParam0->f_2 = 872405/*func_2521*/;
			break;
		case 15:
			uParam0->f_2 = 872326/*func_2520*/;
			break;
		case 16:
			uParam0->f_5 = 871652/*func_2515*/;
			break;
		case 108:
			uParam0->f_55 = 868370/*func_2502*/;
			break;
		case 17:
			uParam0->f_17 = 867447/*func_2501*/;
			break;
		case 19:
			uParam0->f_17 = 867401/*func_2500*/;
			break;
		case 20:
			uParam0->f_3 = 867228/*func_2499*/;
			break;
		case 21:
			uParam0->f_3 = 867143/*func_2498*/;
			break;
		case 74:
			uParam0->f_53 = 867003/*func_2497*/;
			break;
		case 75:
			uParam0->f_4 = 866987/*func_2496*/;
			break;
		case 22:
			uParam0->f_24 = 866884/*func_2495*/;
			break;
		case 23:
			uParam0->f_26 = 866837/*func_2494*/;
			break;
		case 24:
			uParam0->f_26 = 866800/*func_2493*/;
			break;
		case 26:
			uParam0->f_38 = 865395/*func_2480*/;
			break;
		case 25:
			uParam0->f_23 = 865029/*func_2477*/;
			break;
		case 27:
			uParam0->f_25 = 864216/*func_2473*/;
			break;
		case 28:
			uParam0->f_24 = 864177/*func_2472*/;
			break;
		case 29:
			uParam0->f_28 = 863942/*func_2468*/;
			break;
		case 30:
			uParam0->f_8 = 863617/*func_2464*/;
			break;
		case 31:
			uParam0->f_39 = 863417/*func_2463*/;
			break;
		case 43:
			uParam0->f_8 = 863311/*func_2462*/;
			break;
		case 33:
			uParam0->f_40 = 862995/*func_2461*/;
			break;
		case 34:
			uParam0->f_41 = 858003/*func_2458*/;
			break;
		case 36:
			uParam0->f_58 = 857946/*func_2457*/;
			break;
		case 35:
			uParam0->f_42 = 851697/*func_2453*/;
			break;
		case 45:
			uParam0->f_14 = 851688/*func_2452*/;
			break;
		case 46:
			uParam0->f_14 = 851679/*func_2451*/;
			break;
		case 110:
			uParam0->f_57 = 851671/*func_2450*/;
			break;
		case 77:
			uParam0->f_13 = 851648/*func_2449*/;
			break;
		case 82:
			uParam0->f_19 = 851635/*func_2448*/;
			break;
		case 47:
			uParam0->f_43 = 851343/*func_2445*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 849191/*func_2440*/;
			break;
		case 49:
			uParam0->f_8 = 849143/*func_2439*/;
			break;
		case 50:
			*uParam0 = 848951/*func_2437*/;
			break;
		case 51:
			*uParam0 = 848942/*func_2436*/;
			break;
		case 52:
			uParam0->f_15 = 848931/*func_2435*/;
			break;
		case 53:
			uParam0->f_13 = 848889/*func_2434*/;
			break;
		case 54:
			uParam0->f_45 = 848881/*func_2433*/;
			break;
		case 56:
			uParam0->f_46 = 848872/*func_2432*/;
			break;
		case 57:
			uParam0->f_11 = 848863/*func_2431*/;
			break;
		case 58:
			uParam0->f_13 = 848821/*func_2430*/;
			break;
		case 59:
			*uParam0 = 848812/*func_2429*/;
			break;
		case 60:
			*uParam0 = 848803/*func_2428*/;
			break;
		case 61:
			uParam0->f_15 = 848792/*func_2427*/;
			break;
		case 62:
			uParam0->f_13 = 848762/*func_2426*/;
			break;
		case 63:
			uParam0->f_11 = 848753/*func_2425*/;
			break;
		case 64:
			uParam0->f_47 = 848745/*func_2424*/;
			break;
		case 65:
			uParam0->f_21 = 847659/*func_2421*/;
			break;
		case 66:
			uParam0->f_21 = 847318/*func_2420*/;
			break;
		case 67:
			uParam0->f_21 = 847204/*func_2419*/;
			break;
		case 68:
			*uParam0 = 846376/*func_2418*/;
			break;
		case 69:
			*uParam0 = 846367/*func_2417*/;
			break;
		case 70:
			uParam0->f_48 = 846355/*func_2416*/;
			break;
		case 71:
			uParam0->f_49 = 846263/*func_2415*/;
			break;
		case 107:
			uParam0->f_50 = 846251/*func_2414*/;
			break;
		case 80:
			uParam0->f_7 = 846063/*func_2413*/;
			break;
		case 84:
			uParam0->f_1 = 846054/*func_2412*/;
			break;
		case 85:
			uParam0->f_1 = 846040/*func_2411*/;
			break;
		case 87:
			uParam0->f_1 = 846024/*func_2410*/;
			break;
		case 88:
			uParam0->f_1 = 846015/*func_2409*/;
			break;
		case 89:
			uParam0->f_54 = 846007/*func_2408*/;
			break;
		case 96:
			uParam0->f_1 = 845998/*func_2407*/;
			break;
		case 97:
			uParam0->f_1 = 845555/*func_2403*/;
			break;
		case 98:
			uParam0->f_1 = 844093/*func_2393*/;
			break;
		case 100:
			uParam0->f_22 = 843214/*func_2388*/;
			break;
		case 101:
			uParam0->f_22 = 843037/*func_2385*/;
			break;
		case 112:
			uParam0->f_13 = 843025/*func_2384*/;
			break;
		case 113:
			uParam0->f_3 = 843011/*func_2383*/;
			break;
		case 114:
			uParam0->f_16 = 541611/*func_977*/;
			break;
		case 117:
			uParam0->f_16 = 595534/*func_1183*/;
			break;
		case 118:
			uParam0->f_11 = 843002/*func_2382*/;
			break;
		case 119:
			uParam0->f_27 = 842901/*func_2378*/;
			break;
		case 120:
			uParam0->f_19 = 842876/*func_2376*/;
			break;
		case 78:
			uParam0->f_59 = 842704/*func_2374*/;
			break;
		case 125:
			uParam0->f_19 = 842677/*func_2373*/;
			break;
	}
}

int func_2393(int iParam0, var uParam1)//Position - 0xCE13D
{
	if (__LIB_2__::func_909(iParam0))
	{
		return func_2394(iParam0, uParam1);
	}
	return 1;
}

int func_2394(int iParam0, var uParam1)//Position - 0xCE15A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	char* sVar6;
	int iVar7;
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_1946250.f_4716.f_7, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_1946250.f_4716.f_7, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
		if (func_478(&(uParam1->f_109.f_1[0]), iVar1, 1, 1) && __LIB_0__::func_121(uParam1->f_109.f_1[0]))
		{
			if (__LIB_0__::func_121(uParam1->f_109))
			{
				VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			}
			if (PED::IS_PED_MALE(uParam1->f_109.f_1[0]))
			{
				MISC::SET_BIT(&(uParam1->f_188), 4);
			}
		}
		else
		{
			return 0;
		}
		if (!__LIB_7__::func_476(&(uParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		uParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_2__::func_915(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_915());
		if (__LIB_0__::func_121(uParam1->f_176[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_176[0], true);
		}
		else
		{
			return 0;
		}
		iVar2 = __LIB_2__::func_914(-395939522);
		iVar3 = __LIB_2__::func_914(-401740561);
		if (!BitTest(uParam1->f_188, 5))
		{
			__LIB_2__::func_912(__LIB_2__::func_913(-395939522), iVar2);
			__LIB_2__::func_912(__LIB_2__::func_913(-401740561), iVar3);
			MISC::SET_BIT(&(uParam1->f_188), 5);
		}
		if (!__LIB_2__::func_911(&(uParam1->f_50), __LIB_2__::func_913(-395939522), -48f, iVar2))
		{
			return 0;
		}
		if (!__LIB_2__::func_911(&(uParam1->f_58), __LIB_2__::func_913(-401740561), 157f, iVar3))
		{
			return 0;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
		Var4 = { 925.9088f, 51.242f, 80.095f };
		Var5 = { 0f, 0f, 58f };
		sVar6 = __LIB_3__::func_869(uParam1, 6);
		iVar7 = 3500;
		__LIB_2__::func_681(&(Global_1946250.f_4073), iVar7, "valet exit", Var4, Var5, uParam1->f_3, sVar6, 1, 0, 0, 0, 2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_2411(var uParam0, var uParam1)//Position - 0xCE8D8
{
	return func_2285(uParam1);
}

void func_2477(int iParam0, int iParam1)//Position - 0xD3305
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_935(iParam0) };
	if (__LIB_7__::func_480(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_696(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_943(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_943(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_919(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_919(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2480(var uParam0, var uParam1)//Position - 0xD3473
{
	if (__LIB_0__::func_834(PLAYER::PLAYER_ID()) || __LIB_2__::func_934(PLAYER::PLAYER_ID()))
	{
		func_2481(uParam0, uParam1);
	}
}

void func_2481(var uParam0, var uParam1)//Position - 0xD349F
{
	int iVar0;
	if (__LIB_2__::func_399() == 2 && __LIB_2__::func_566() != 1)
	{
		uParam1->f_1 = 1;
		if (func_2492(*uParam0, 0, 0))
		{
			__LIB_2__::func_447(0);
			__LIB_2__::func_565(1);
		}
		else
		{
			__LIB_7__::func_648(uParam1, 0);
			return;
		}
	}
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			func_2487(uParam0, uParam1);
			break;
		case 1:
			func_2483(uParam0, uParam1);
			break;
		case 2:
			__LIB_7__::func_647(*uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2483(var uParam0, var uParam1)//Position - 0xD355E
{
	bool bVar0;
	int iVar1[3];
	var uVar2[3];
	char* sVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	sVar3 = __LIB_2__::func_936();
	func_696(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar6, &bVar7, 1, 0);
	iVar5 = 0;
	while (iVar5 < 3)
	{
		uVar2[iVar4] = __LIB_4__::func_724(iVar5);
		if (__LIB_2__::func_563(iVar5, bVar6, bVar7))
		{
			iVar1[iVar4] = iVar5;
			if (!bVar0 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar4 /*6*/]), uVar2[iVar4]))
			{
				bVar0 = true;
			}
			iVar4++;
		}
		else if (!bVar0)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar4 /*6*/]), uVar2[iVar4]))
			{
				bVar0 = true;
			}
		}
		iVar5++;
	}
	if (uParam0->f_5 || bVar0)
	{
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar3, sVar3);
		__LIB_3__::func_874();
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			__LIB_25__::func_557(iVar5, uVar2[iVar5], 0, 1, 0, 0, 0);
			iVar5++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 1;
		uParam1->f_11 = 10;
		__LIB_7__::func_394(5);
		__LIB_7__::func_396();
		if (iVar1[uParam0->f_4] != 0)
		{
			__LIB_25__::func_301(iVar1[uParam0->f_4]);
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_7__::func_396();
		if (__LIB_2__::func_399() == 2)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_2487(var uParam0, var uParam1)//Position - 0xD375D
{
	bool bVar0;
	var uVar1[2];
	var uVar2[2];
	var uVar3[2];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar4 = __LIB_2__::func_936();
	iVar6 = 0;
	while (iVar6 < 2)
	{
		uVar3[iVar6] = __LIB_2__::func_939(iVar6);
		uVar1[iVar6] = __LIB_2__::func_938(iVar6);
		uVar2[iVar6] = uVar1[iVar6];
		if (!bVar0 && (Global_23150.f_1616[iVar6] != uVar2[iVar6] || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar6 /*6*/]), uVar3[iVar6])))
		{
			bVar0 = true;
		}
		iVar5++;
		iVar6++;
	}
	if (!__LIB_0__::func_834(PLAYER::PLAYER_ID()) && __LIB_2__::func_934(PLAYER::PLAYER_ID()))
	{
		__LIB_7__::func_647(*uParam0, uParam1);
	}
	else if (uParam0->f_5 || bVar0)
	{
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar4, sVar4);
		__LIB_3__::func_874();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_25__::func_557(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		__LIB_1__::func_342(__LIB_2__::func_937(uVar1[iVar7], iVar7), 0, 0);
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (iVar7 == 0)
			{
				*uParam1 = 1;
				__LIB_2__::func_565(2);
			}
			else if (func_2492(*uParam0, 0, 0))
			{
				*uParam1 = 1;
				__LIB_2__::func_447(1);
				__LIB_2__::func_565(1);
			}
			else
			{
				__LIB_7__::func_648(uParam1, 1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

int func_2492(int iParam0, bool bParam1, bool bParam2)//Position - 0xD39BE
{
	int iVar0;
	int iVar1;
	func_696(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, bParam2);
	if (bParam1)
	{
		return iVar1;
	}
	return (iVar0 || iVar1);
}

void func_2550(var uParam0, int iParam1)//Position - 0xD5E8E
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 906693/*func_2723*/;
			break;
		case 111:
			uParam0->f_35 = 906684/*func_2722*/;
			break;
		case 1:
			uParam0->f_30 = 906616/*func_2720*/;
			break;
		case 2:
			uParam0->f_31 = 906263/*func_2717*/;
			break;
		case 3:
			uParam0->f_34 = 906030/*func_2716*/;
			break;
		case 4:
			uParam0->f_12 = 906017/*func_2715*/;
			break;
		case 6:
			uParam0->f_32 = 905953/*func_2714*/;
			break;
		case 11:
			uParam0->f_11 = 905944/*func_2713*/;
			break;
		case 12:
			uParam0->f_33 = 905219/*func_2709*/;
			break;
		case 14:
			uParam0->f_11 = 905210/*func_2708*/;
			break;
		case 109:
			uParam0->f_56 = 904068/*func_2707*/;
			break;
		case 8:
			uParam0->f_37 = 904060/*func_2706*/;
			break;
		case 7:
			uParam0->f_36 = 904051/*func_2705*/;
			break;
		case 79:
			*uParam0 = 904027/*func_2704*/;
			break;
		case 13:
			uParam0->f_2 = 903955/*func_2703*/;
			break;
		case 15:
			uParam0->f_2 = 903866/*func_2702*/;
			break;
		case 16:
			uParam0->f_5 = 903506/*func_2701*/;
			break;
		case 108:
			uParam0->f_55 = 903367/*func_2699*/;
			break;
		case 17:
			uParam0->f_17 = 902709/*func_2698*/;
			break;
		case 19:
			uParam0->f_17 = 902682/*func_2697*/;
			break;
		case 20:
			uParam0->f_3 = 902673/*func_2696*/;
			break;
		case 21:
			uParam0->f_3 = 902625/*func_2695*/;
			break;
		case 74:
			uParam0->f_53 = 902570/*func_2694*/;
			break;
		case 75:
			uParam0->f_4 = 902457/*func_2693*/;
			break;
		case 22:
			uParam0->f_24 = 902449/*func_2692*/;
			break;
		case 23:
			uParam0->f_26 = 902441/*func_2691*/;
			break;
		case 26:
			uParam0->f_38 = 899896/*func_2675*/;
			break;
		case 25:
			uParam0->f_23 = 899888/*func_2674*/;
			break;
		case 27:
			uParam0->f_25 = 899880/*func_2673*/;
			break;
		case 28:
			uParam0->f_24 = 899872/*func_2672*/;
			break;
		case 30:
			uParam0->f_8 = 899591/*func_2671*/;
			break;
		case 31:
			uParam0->f_39 = 899561/*func_2670*/;
			break;
		case 33:
			uParam0->f_40 = 899492/*func_2669*/;
			break;
		case 76:
			uParam0->f_13 = 899469/*func_2668*/;
			break;
		case 34:
			uParam0->f_41 = 896915/*func_2665*/;
			break;
		case 36:
			uParam0->f_58 = 896870/*func_2664*/;
			break;
		case 35:
			uParam0->f_42 = 896774/*func_2663*/;
			break;
		case 45:
			uParam0->f_14 = 896765/*func_2662*/;
			break;
		case 46:
			uParam0->f_14 = 896756/*func_2661*/;
			break;
		case 110:
			uParam0->f_57 = 896748/*func_2660*/;
			break;
		case 77:
			uParam0->f_13 = 896737/*func_2659*/;
			break;
		case 47:
			uParam0->f_43 = 896630/*func_2658*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 895792/*func_2657*/;
			break;
		case 49:
			uParam0->f_8 = 895783/*func_2656*/;
			break;
		case 50:
			*uParam0 = 895570/*func_2655*/;
			break;
		case 51:
			*uParam0 = 895561/*func_2654*/;
			break;
		case 52:
			uParam0->f_15 = 895550/*func_2653*/;
			break;
		case 53:
			uParam0->f_13 = 895508/*func_2652*/;
			break;
		case 54:
			uParam0->f_45 = 895469/*func_2651*/;
			break;
		case 56:
			uParam0->f_46 = 895460/*func_2650*/;
			break;
		case 57:
			uParam0->f_11 = 895418/*func_2648*/;
			break;
		case 58:
			uParam0->f_13 = 895376/*func_2647*/;
			break;
		case 59:
			*uParam0 = 895367/*func_2646*/;
			break;
		case 60:
			*uParam0 = 895358/*func_2645*/;
			break;
		case 61:
			uParam0->f_15 = 895347/*func_2644*/;
			break;
		case 62:
			uParam0->f_13 = 895336/*func_2643*/;
			break;
		case 63:
			uParam0->f_11 = 895327/*func_2642*/;
			break;
		case 64:
			uParam0->f_47 = 895241/*func_2640*/;
			break;
		case 65:
			uParam0->f_21 = 895233/*func_2639*/;
			break;
		case 66:
			uParam0->f_21 = 894892/*func_2638*/;
			break;
		case 67:
			uParam0->f_21 = 894822/*func_2637*/;
			break;
		case 68:
			*uParam0 = 894125/*func_2636*/;
			break;
		case 69:
			*uParam0 = 894116/*func_2635*/;
			break;
		case 70:
			uParam0->f_48 = 894043/*func_2634*/;
			break;
		case 71:
			uParam0->f_49 = 894034/*func_2633*/;
			break;
		case 107:
			uParam0->f_50 = 894022/*func_2632*/;
			break;
		case 80:
			uParam0->f_7 = 894013/*func_2631*/;
			break;
		case 84:
			uParam0->f_1 = 893488/*func_2628*/;
			break;
		case 85:
			uParam0->f_1 = 891932/*func_2625*/;
			break;
		case 87:
			uParam0->f_1 = 888705/*func_2612*/;
			break;
		case 88:
			uParam0->f_1 = 888690/*func_2611*/;
			break;
		case 89:
			uParam0->f_54 = 888329/*func_2609*/;
			break;
		case 96:
			uParam0->f_1 = 888038/*func_2606*/;
			break;
		case 97:
			uParam0->f_1 = 887532/*func_2604*/;
			break;
		case 98:
			uParam0->f_1 = 885903/*func_2602*/;
			break;
		case 100:
			uParam0->f_22 = 885625/*func_2601*/;
			break;
		case 101:
			uParam0->f_22 = 885076/*func_2597*/;
			break;
		case 112:
			uParam0->f_13 = 885064/*func_2596*/;
			break;
		case 113:
			uParam0->f_3 = 885055/*func_2595*/;
			break;
		case 114:
			uParam0->f_16 = 541611/*func_977*/;
			break;
		case 115:
			uParam0->f_3 = 884918/*func_2592*/;
			break;
		case 116:
			*uParam0 = 884870/*func_2591*/;
			break;
		case 117:
			uParam0->f_16 = 595534/*func_1183*/;
			break;
		case 118:
			uParam0->f_11 = 843002/*func_2382*/;
			break;
		case 119:
			uParam0->f_27 = 842901/*func_2378*/;
			break;
		case 120:
			uParam0->f_19 = 842876/*func_2376*/;
			break;
		case 78:
			uParam0->f_59 = 884862/*func_2590*/;
			break;
		case 124:
			uParam0->f_1 = 877754/*func_2552*/;
			break;
		case 125:
			uParam0->f_19 = 877698/*func_2551*/;
			break;
	}
}

int func_2552(int iParam0, int* iParam1)//Position - 0xD64BA
{
	float fVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	var uVar5;
	if (!Global_2814119 || Global_2815059.f_6757)
	{
		if (iParam1->f_258 > 0)
		{
			__LIB_35__::func_659(iParam1);
		}
		return 0;
	}
	switch (iParam1->f_258)
	{
		case 0:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_3__::func_878(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 0, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, false, true))
				{
					__LIB_7__::func_394(0);
					__LIB_2__::func_962(iParam1, 1);
				}
				__LIB_3__::func_878(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 3, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_7__::func_394(3);
					__LIB_2__::func_962(iParam1, 1);
				}
				__LIB_3__::func_878(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 4, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_7__::func_394(4);
					__LIB_2__::func_962(iParam1, 1);
				}
				__LIB_3__::func_878(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 1, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_7__::func_394(1);
					__LIB_2__::func_962(iParam1, 1);
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_399() == 0)
			{
				if (__LIB_18__::func_751(iParam0, iParam1))
				{
					__LIB_2__::func_961();
					__LIB_2__::func_962(iParam1, 2);
				}
			}
			else
			{
				__LIB_7__::func_484(iParam0, iParam1, __LIB_2__::func_399());
				__LIB_2__::func_962(iParam1, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_399() == 0)
			{
				if (func_2625(iParam0, iParam1))
				{
					__LIB_2__::func_959(&(Global_1946250.f_3638), 60);
					__LIB_2__::func_962(iParam1, 3);
				}
			}
			else if (func_2578(iParam1))
			{
				__LIB_2__::func_962(iParam1, 3);
			}
			break;
		case 3:
			if (__LIB_2__::func_399() == 0)
			{
				__LIB_35__::func_658(&(Global_1946250.f_3638), 0, 1);
				__LIB_25__::func_302(iParam0, iParam1);
				if (__LIB_2__::func_413(&(Global_1946250.f_3638), 0))
				{
					__LIB_35__::func_602(&iParam0);
					MISC::SET_BIT(&(Global_1946250.f_6), 26);
					__LIB_2__::func_962(iParam1, 4);
				}
			}
			else
			{
				__LIB_18__::func_749(iParam1);
				__LIB_35__::func_602(&iParam0);
				MISC::SET_BIT(&(Global_1946250.f_6), 26);
				__LIB_2__::func_962(iParam1, 4);
			}
			break;
		case 4:
			if (__LIB_2__::func_399() == 0)
			{
				if (!BitTest(*iParam1, 16))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam1->f_27) && __LIB_0__::func_121(iParam1->f_50))
					{
						fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam1->f_27);
						if (fVar0 > 0.55f)
						{
							CAM::DO_SCREEN_FADE_OUT(500);
							MISC::SET_BIT(iParam1, 16);
						}
					}
				}
				__LIB_35__::func_658(&(Global_1946250.f_3638), 0, 1);
				if (__LIB_25__::func_302(iParam0, iParam1) && BitTest(Global_1946250.f_6, 27))
				{
					__LIB_35__::func_659(iParam1);
				}
			}
			else if (__LIB_18__::func_749(iParam1) && BitTest(Global_1946250.f_6, 27))
			{
				__LIB_35__::func_659(iParam1);
			}
			break;
	}
	return 1;
}

int func_2578(int* iParam0)//Position - 0xD7712
{
	STREAMING::REQUEST_ANIM_DICT(iParam0->f_3);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_3))
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_4))
	{
		STREAMING::REQUEST_ANIM_DICT(iParam0->f_4);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_4))
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_2))
	{
		func_1542(&(iParam0->f_2), PLAYER::PLAYER_ID(), 1, 1);
		return 0;
	}
	if ((__LIB_0__::func_121(iParam0->f_2) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam0->f_2)) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0->f_2))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_2, true, false);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_2602(int iParam0, var uParam1)//Position - 0xD848F
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	if (__LIB_2__::func_909(iParam0))
	{
		return func_2394(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		if (Global_1946250.f_4539 == __LIB_0__::func_160())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_1", 0, 0, 64);
			}
		}
		else if (!PED::IS_PED_INJURED(uParam1->f_2))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam1->f_2, "MP_1", 0, 0, 64);
		}
		__LIB_8__::func_454(1, 1, 1, 0, 0, 0, 0);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true);
		CUTSCENE::START_CUTSCENE(0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, false);
		}
		MISC::SET_BIT(&(Global_1946250.f_6), 19);
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		return 1;
	}
	else
	{
		Var0 = { 1082.001f, 187.749f, -49.349f };
		Var1 = { 0f, 0f, -110.19f };
		sVar2 = "mini@strip_club@throwout_d@";
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
		{
			uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_Casino_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
			PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[0], 6, 0, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
		{
			uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_Y_Casino_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
			__LIB_2__::func_966(MISC::GET_RANDOM_INT_IN_RANGE(0, 6), &(uParam1->f_140[1]));
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
		{
			func_1542(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
			return 0;
		}
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
			{
				if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
				{
					return 0;
				}
			}
			iVar3++;
		}
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		Var0 = { Var0 + Vector(0f, 0.5f, 3f) };
		__LIB_2__::func_681(&(Global_1946250.f_4073), 5000, "Casino Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
		__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 262144, 0);
		uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
		if (__LIB_0__::func_121(uParam1->f_140[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 4, 0, 1000f, 0);
		}
		if (__LIB_0__::func_121(uParam1->f_140[1]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 4, 0, 1000f, 0);
		}
		if (__LIB_0__::func_121(uParam1->f_140[2]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 4, 0, 1000f, 0);
		}
	}
	return 1;
}

int func_2604(int iParam0, var uParam1)//Position - 0xD8AEC
{
	char* sVar0;
	bool bVar1;
	if (__LIB_2__::func_909(iParam0))
	{
		return __LIB_18__::func_572(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_2), 21);
		STREAMING::REQUEST_IPL("ch_cutscene_casino");
		if (Global_1946250.f_4539 != __LIB_0__::func_160())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
			{
				if (!func_2605(&(uParam1->f_2), Global_1946250.f_4539))
				{
					return 0;
				}
			}
		}
		if (!BitTest(uParam1->f_188, 1))
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_1", 0, 1);
				MISC::SET_BIT(&(uParam1->f_188), 1);
			}
		}
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			ENTITY::CREATE_MODEL_HIDE(959.0179f, 40.0682f, 116.2767f, 1f, joaat("hei_ch3_12_casinonew_penthouse"), false);
			return 1;
		}
		return 0;
	}
	else
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 27);
		sVar0 = "mini@strip_club@throwout_d@";
		bVar1 = true;
		STREAMING::REQUEST_ANIM_DICT(sVar0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			bVar1 = false;
		}
		STREAMING::REQUEST_MODEL(joaat("S_M_Y_Casino_01"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Casino_01")))
		{
			bVar1 = false;
		}
		if (!bVar1)
		{
			return 0;
		}
	}
	return 1;
}

int func_2605(var uParam0, int iParam1)//Position - 0xD8BFA
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iParam1)))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam1));
				iVar1 = 4;
				if (__LIB_0__::func_308(iParam1))
				{
					iVar1 = 5;
				}
				*uParam0 = PED::CREATE_PED(iVar1, iVar0, 962.5547f, 59.6398f, 111.553f, 180f, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
				PED::CLONE_PED_TO_TARGET(PLAYER::GET_PLAYER_PED(iParam1), *uParam0);
				if (__LIB_0__::func_709(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_181(*uParam0, 14, 0), -1))
				{
					PED::CLEAR_PED_PROP(*uParam0, 0);
				}
				if (__LIB_0__::func_812(*uParam0, 7))
				{
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_2625(int iParam0, int* iParam1)//Position - 0xD9C1C
{
	var uVar0[25];
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	struct<3> Var10;
	char* sVar11;
	int iVar12;
	if (BitTest(iParam1->f_188, 12))
	{
		if (!func_478(&(iParam1->f_140[0]), PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 0;
		}
		if (!__LIB_7__::func_476(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		if (!BitTest(iParam1->f_188, 5))
		{
			__LIB_2__::func_912(__LIB_2__::func_913(-1805228339), __LIB_2__::func_914(-1805228339));
			MISC::SET_BIT(&(iParam1->f_188), 5);
		}
		if (!__LIB_2__::func_911(&(iParam1->f_50), __LIB_2__::func_913(-1805228339), __LIB_2__::func_974(-1805228339), __LIB_2__::func_914(-1805228339)))
		{
			return 0;
		}
		iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar2]) && __LIB_0__::func_121(uVar0[iVar2])) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uVar0[iVar2])) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar2]) == __LIB_2__::func_917())
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uVar0[iVar2], false, false);
			}
			else
			{
				iVar2++;
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_914(-1805228339));
		Var3 = { __LIB_2__::func_913(-1805228339) };
		Var4 = { 0f, 0f, -122f };
		sVar5 = __LIB_2__::func_972(6);
		__LIB_2__::func_681(&(Global_1946250.f_3638), 12000, "valet intro", Var3, Var4, iParam1->f_3, sVar5, 1, 0, 0, 0, 2);
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (((__LIB_0__::func_121(iVar6) && __LIB_0__::func_657(iVar6, 0)) && __LIB_6__::func_407(iVar6) == PLAYER::PLAYER_ID()) && __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				MISC::SET_BIT(&(iParam1->f_188), 13);
				iParam1->f_135[0] = iVar6;
			}
			MISC::SET_BIT(&(iParam1->f_188), 14);
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar7 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			func_483(&iVar7, &(iParam1->f_109), 60);
			__LIB_2__::func_416(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else
		{
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar7, -1, false);
			if (func_478(&(iParam1->f_109.f_1[0]), iVar8, 1, 1) && __LIB_0__::func_121(iParam1->f_109.f_1[0]))
			{
				if (__LIB_0__::func_121(iParam1->f_109))
				{
					VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
				}
				if (PED::IS_PED_MALE(iParam1->f_109.f_1[0]))
				{
					MISC::SET_BIT(&(iParam1->f_188), 4);
				}
				if (iVar8 == PLAYER::PLAYER_PED_ID())
				{
					MISC::SET_BIT(&(iParam1->f_188), 11);
				}
			}
			else
			{
				return 0;
			}
		}
		if (!__LIB_7__::func_476(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		iParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_2__::func_915(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_915());
		if (__LIB_0__::func_121(iParam1->f_176[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_176[0], true);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam1->f_109), &(iParam1->f_189[0 /*3*/]), &(iParam1->f_189[1 /*3*/]));
		Var9 = { 925.9088f, 51.242f, 80.095f };
		Var10 = { 0f, 0f, 58f };
		sVar11 = __LIB_7__::func_487(iParam1, 6);
		iVar12 = __LIB_2__::func_973(__LIB_2__::func_970(iParam1));
		__LIB_2__::func_681(&(Global_1946250.f_3638), iVar12, "valet", Var9, Var10, iParam1->f_3, sVar11, 1, 0, 0, 0, 2);
	}
	else if (__LIB_2__::func_399() == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_2))
		{
			func_1542(&(iParam1->f_2), PLAYER::PLAYER_ID(), 1, 1);
			return 0;
		}
		if ((__LIB_0__::func_121(iParam1->f_2) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_2)) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_2))
		{
			ENTITY::CREATE_MODEL_HIDE(__LIB_2__::func_913(-1805228339), 0.1f, __LIB_2__::func_914(-1805228339), false);
			iParam1->f_50 = OBJECT::CREATE_OBJECT(__LIB_2__::func_914(-1805228339), __LIB_2__::func_913(-1805228339), false, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_50))
			{
				return 0;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_50, __LIB_2__::func_913(-1805228339), false, false, false);
				ENTITY::SET_ENTITY_ROTATION(iParam1->f_50, 0f, 0f, -122f, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_50, true);
				ENTITY::SET_ENTITY_COLLISION(iParam1->f_50, false, false);
			}
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_2, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_914(-1805228339));
			__LIB_25__::func_103(&(Global_1946250.f_3638), 4000, "Enter_Casino", 916.7877f, 63.0506f, 81.6854f, 0.3236f, 0f, -151.6214f, 35.7535f, 916.9896f, 62.7016f, 81.6876f, 0.3236f, 0f, -149.9406f, 34.8284f, 0.1f, 0, 0, 0, 0, 0);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_2675(var uParam0, var uParam1)//Position - 0xDBB38
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	if (__LIB_2__::func_399() == 0 || __LIB_2__::func_399() == 2)
	{
		if (!__LIB_2__::func_779(PLAYER::PLAYER_ID()) || __LIB_2__::func_380())
		{
			if (!__LIB_2__::func_380())
			{
				if (__LIB_2__::func_192(PLAYER::PLAYER_ID()))
				{
					__LIB_25__::func_303(1, *uParam0);
				}
			}
			if (__LIB_2__::func_192(PLAYER::PLAYER_ID()))
			{
				__LIB_25__::func_303(1, *uParam0);
			}
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_7__::func_396();
			if (__LIB_2__::func_380())
			{
				uParam1->f_1 = 1;
			}
			return;
		}
	}
	if (__LIB_2__::func_380())
	{
		if ((__LIB_2__::func_399() == 3 || __LIB_2__::func_399() == 4) || __LIB_2__::func_399() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_1 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_7__::func_396();
			return;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_2679(uParam0, uParam1);
			break;
		case 4:
			__LIB_7__::func_652(*uParam0, uParam1);
			break;
		case 2:
		case 3:
		case 1:
		case 5:
			func_2676(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2676(var uParam0, var uParam1)//Position - 0xDBC76
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5[3];
	var uVar6[3];
	char* sVar7;
	int iVar8;
	int iVar9;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	bVar0 = true;
	iVar1 = __LIB_2__::func_566();
	bVar0 = iVar1 != 5;
	func_696(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar2, &bVar3, bVar0, 0);
	sVar7 = __LIB_2__::func_936();
	iVar9 = 0;
	while (iVar9 < 3)
	{
		uVar6[iVar8] = __LIB_4__::func_724(iVar9);
		if (__LIB_2__::func_563(iVar9, bVar2, bVar3))
		{
			iVar5[iVar8] = iVar9;
			if (!bVar4 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar8 /*6*/]), uVar6[iVar8]))
			{
				bVar4 = true;
			}
			iVar8++;
		}
		else if (!bVar4)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar8 /*6*/]), uVar6[iVar8]))
			{
				bVar4 = true;
			}
		}
		iVar9++;
	}
	if (uParam0->f_5 || bVar4)
	{
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar7, sVar7);
		__LIB_3__::func_874();
		iVar9 = 0;
		while (iVar9 < iVar8)
		{
			__LIB_25__::func_557(iVar9, uVar6[iVar9], 0, 1, 0, 0, 0);
			iVar9++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_2__::func_566() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			__LIB_7__::func_396();
			if ((__LIB_2__::func_399() == 1 || __LIB_2__::func_399() == 3) || __LIB_2__::func_399() == 4)
			{
				__LIB_2__::func_924();
			}
			else
			{
				uParam1->f_10 = 1;
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_25__::func_303(iVar5[uParam0->f_4], 123);
			}
		}
		else if (__LIB_2__::func_566() == 5)
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_7__::func_396();
			__LIB_2__::func_932(*uParam0, 146);
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_25__::func_303(iVar5[uParam0->f_4], 146);
			}
		}
		else
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_7__::func_396();
			__LIB_2__::func_932(*uParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
			if (__LIB_2__::func_566() == 3)
			{
				__LIB_2__::func_924();
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_25__::func_303(iVar5[uParam0->f_4], 124);
			}
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_7__::func_396();
	}
}

void func_2679(var uParam0, var uParam1)//Position - 0xDBF00
{
	var uVar0;
	var uVar1[5];
	var uVar2[5];
	var uVar3[5];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar4 = __LIB_2__::func_936();
	if (__LIB_2__::func_399() == 0)
	{
		uVar0 = __LIB_7__::func_491(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	else
	{
		uVar0 = __LIB_19__::func_101(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	if (uParam0->f_5 || uVar0)
	{
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar4, sVar4);
		__LIB_3__::func_874();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_25__::func_557(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		if (__LIB_2__::func_399() == 0)
		{
			__LIB_1__::func_342(__LIB_2__::func_986(uVar1[iVar7], iVar7), 0, 0);
		}
		else
		{
			__LIB_1__::func_342(__LIB_7__::func_653(uVar1[iVar7], iVar7), 0, 0);
		}
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (__LIB_2__::func_399() == 0)
			{
				func_2681(*uParam0, iVar7, uParam1, uParam1);
			}
			else
			{
				func_2680(*uParam0, iVar7, uParam1, uParam1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_2680(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xDC01F
{
	if (iParam1 == 0)
	{
		if (func_2492(iParam0, 0, 0))
		{
			__LIB_2__::func_565(1);
		}
		else
		{
			uParam3->f_8 = 1;
			uParam3->f_6 = 1;
			uParam3->f_11 = 10;
			uParam3->f_1 = 1;
			__LIB_2__::func_924();
		}
	}
	else if (iParam1 == 1)
	{
		__LIB_2__::func_447(0);
		if (func_2492(iParam0, 0, 0))
		{
			__LIB_2__::func_565(2);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
		}
	}
	else if (iParam1 == 4)
	{
		if (func_2492(iParam0, 1, 0))
		{
			__LIB_2__::func_565(5);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 146);
		}
	}
	else if (iParam1 == 3)
	{
		__LIB_2__::func_565(4);
		__LIB_2__::func_924();
	}
	else
	{
		__LIB_2__::func_447(1);
		if (func_2492(iParam0, 0, 0))
		{
			__LIB_2__::func_565(3);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
			__LIB_2__::func_924();
		}
	}
	*uParam2 = 1;
}

void func_2681(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xDC127
{
	if (iParam1 == 0)
	{
		if (func_2492(iParam0, 0, 0))
		{
			__LIB_2__::func_565(1);
			*uParam2 = 1;
		}
		else
		{
			uParam3->f_8 = 1;
			uParam3->f_6 = 1;
			uParam3->f_10 = 1;
			uParam3->f_1 = 1;
			uParam3->f_11 = 10;
		}
	}
	else if (iParam1 == 1)
	{
		__LIB_2__::func_447(0);
		if (func_2492(iParam0, 0, 0))
		{
			__LIB_2__::func_565(2);
			*uParam2 = 1;
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
		}
	}
}

void func_2724(var uParam0, int iParam1)//Position - 0xDD5CE
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 942307/*func_2891*/;
			break;
		case 111:
			uParam0->f_35 = 942293/*func_2890*/;
			break;
		case 1:
			uParam0->f_30 = 942194/*func_2889*/;
			break;
		case 2:
			uParam0->f_31 = 941130/*func_2885*/;
			break;
		case 3:
			uParam0->f_34 = 940976/*func_2884*/;
			break;
		case 4:
			uParam0->f_12 = 940922/*func_2882*/;
			break;
		case 5:
			uParam0->f_11 = 940867/*func_2881*/;
			break;
		case 37:
			uParam0->f_18 = 940747/*func_2880*/;
			break;
		case 38:
			uParam0->f_9 = 940615/*func_2876*/;
			break;
		case 6:
			uParam0->f_32 = 940500/*func_2875*/;
			break;
		case 11:
			uParam0->f_11 = 940490/*func_2874*/;
			break;
		case 12:
			uParam0->f_33 = 939321/*func_2869*/;
			break;
		case 14:
			uParam0->f_11 = 939312/*func_2868*/;
			break;
		case 109:
			uParam0->f_56 = 937988/*func_2867*/;
			break;
		case 8:
			uParam0->f_37 = 937944/*func_2866*/;
			break;
		case 7:
			uParam0->f_36 = 937921/*func_2865*/;
			break;
		case 79:
			*uParam0 = 937897/*func_2864*/;
			break;
		case 13:
			uParam0->f_2 = 937834/*func_2863*/;
			break;
		case 15:
			uParam0->f_2 = 937754/*func_2862*/;
			break;
		case 16:
			uParam0->f_5 = 937111/*func_2858*/;
			break;
		case 108:
			uParam0->f_55 = 933971/*func_2845*/;
			break;
		case 17:
			uParam0->f_17 = 933268/*func_2844*/;
			break;
		case 19:
			uParam0->f_17 = 933241/*func_2843*/;
			break;
		case 20:
			uParam0->f_3 = 933062/*func_2842*/;
			break;
		case 21:
			uParam0->f_3 = 932998/*func_2841*/;
			break;
		case 74:
			uParam0->f_53 = 932724/*func_2839*/;
			break;
		case 75:
			uParam0->f_4 = 932708/*func_2838*/;
			break;
		case 22:
			uParam0->f_24 = 932605/*func_2837*/;
			break;
		case 23:
			uParam0->f_26 = 932558/*func_2836*/;
			break;
		case 24:
			uParam0->f_26 = 932521/*func_2835*/;
			break;
		case 26:
			uParam0->f_38 = 931694/*func_2828*/;
			break;
		case 25:
			uParam0->f_23 = 931328/*func_2825*/;
			break;
		case 27:
			uParam0->f_25 = 930946/*func_2823*/;
			break;
		case 28:
			uParam0->f_24 = 930895/*func_2822*/;
			break;
		case 29:
			uParam0->f_28 = 930887/*func_2821*/;
			break;
		case 30:
			uParam0->f_8 = 930650/*func_2817*/;
			break;
		case 31:
			uParam0->f_39 = 930526/*func_2816*/;
			break;
		case 33:
			uParam0->f_40 = 930106/*func_2815*/;
			break;
		case 34:
			uParam0->f_41 = 918813/*func_2801*/;
			break;
		case 36:
			uParam0->f_58 = 918768/*func_2800*/;
			break;
		case 35:
			uParam0->f_42 = 915680/*func_2797*/;
			break;
		case 45:
			uParam0->f_14 = 915671/*func_2796*/;
			break;
		case 46:
			uParam0->f_14 = 915662/*func_2795*/;
			break;
		case 110:
			uParam0->f_57 = 915654/*func_2794*/;
			break;
		case 77:
			uParam0->f_13 = 915605/*func_2793*/;
			break;
		case 47:
			uParam0->f_43 = 915523/*func_2792*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 914759/*func_2785*/;
			break;
		case 49:
			uParam0->f_8 = 914712/*func_2784*/;
			break;
		case 50:
			*uParam0 = 914653/*func_2783*/;
			break;
		case 51:
			*uParam0 = 914421/*func_2780*/;
			break;
		case 52:
			uParam0->f_15 = 914410/*func_2779*/;
			break;
		case 53:
			uParam0->f_13 = 914368/*func_2778*/;
			break;
		case 54:
			uParam0->f_45 = 914360/*func_2777*/;
			break;
		case 56:
			uParam0->f_46 = 914351/*func_2776*/;
			break;
		case 57:
			uParam0->f_11 = 914342/*func_2775*/;
			break;
		case 58:
			uParam0->f_13 = 914300/*func_2774*/;
			break;
		case 59:
			*uParam0 = 914291/*func_2773*/;
			break;
		case 60:
			*uParam0 = 914282/*func_2772*/;
			break;
		case 61:
			uParam0->f_15 = 914271/*func_2771*/;
			break;
		case 62:
			uParam0->f_13 = 914229/*func_2770*/;
			break;
		case 63:
			uParam0->f_11 = 914220/*func_2769*/;
			break;
		case 64:
			uParam0->f_47 = 914212/*func_2768*/;
			break;
		case 65:
			uParam0->f_21 = 913150/*func_2765*/;
			break;
		case 66:
			uParam0->f_21 = 912847/*func_2764*/;
			break;
		case 67:
			uParam0->f_21 = 912733/*func_2763*/;
			break;
		case 68:
			*uParam0 = 911890/*func_2762*/;
			break;
		case 69:
			*uParam0 = 911881/*func_2761*/;
			break;
		case 70:
			uParam0->f_48 = 911808/*func_2760*/;
			break;
		case 71:
			uParam0->f_49 = 911799/*func_2759*/;
			break;
		case 107:
			uParam0->f_50 = 911787/*func_2758*/;
			break;
		case 80:
			uParam0->f_7 = 911585/*func_2757*/;
			break;
		case 84:
			uParam0->f_1 = 911576/*func_2756*/;
			break;
		case 85:
			uParam0->f_1 = 909843/*func_2743*/;
			break;
		case 87:
			uParam0->f_1 = 908390/*func_2735*/;
			break;
		case 88:
			uParam0->f_1 = 908381/*func_2734*/;
			break;
		case 89:
			uParam0->f_54 = 908373/*func_2733*/;
			break;
		case 96:
			uParam0->f_1 = 908364/*func_2732*/;
			break;
		case 97:
			uParam0->f_1 = 908355/*func_2731*/;
			break;
		case 98:
			uParam0->f_1 = 908346/*func_2730*/;
			break;
		case 100:
			uParam0->f_22 = 908338/*func_2729*/;
			break;
		case 101:
			uParam0->f_22 = 908330/*func_2728*/;
			break;
		case 78:
			uParam0->f_59 = 908158/*func_2726*/;
			break;
		case 125:
			uParam0->f_19 = 908125/*func_2725*/;
			break;
	}
}

int func_2743(int iParam0, var uParam1)//Position - 0xDE213
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (__LIB_18__::func_483())
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_483(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_477(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[2 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		Var1 = { __LIB_3__::func_10(iParam0, __LIB_2__::func_399()) };
		Var2 = { __LIB_3__::func_9(iParam0, __LIB_2__::func_399()) };
		uVar3 = __LIB_3__::func_6(iParam0, __LIB_2__::func_399());
		Var4 = { __LIB_3__::func_8(iParam0, __LIB_2__::func_399()) };
		Var5 = { __LIB_3__::func_7(iParam0, __LIB_2__::func_399()) };
		uVar6 = __LIB_3__::func_6(iParam0, __LIB_2__::func_399());
		Var7 = { __LIB_3__::func_5(iParam0, __LIB_2__::func_399()) };
		Var8 = { __LIB_3__::func_4(iParam0, __LIB_2__::func_399()) };
		uVar9 = __LIB_3__::func_1(iParam0, __LIB_2__::func_399());
		Var10 = { __LIB_3__::func_3(iParam0, __LIB_2__::func_399()) };
		Var11 = { __LIB_3__::func_2(iParam0, __LIB_2__::func_399()) };
		uVar12 = __LIB_3__::func_1(iParam0, __LIB_2__::func_399());
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[2 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 5);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 5);
		}
		return __LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var2, uVar3, Var4, Var5, uVar6, bVar13, Var7, Var8, uVar9, Var10, Var11, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2825(int iParam0, int iParam1)//Position - 0xE3600
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_33(iParam0) };
	if (__LIB_7__::func_499(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_696(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_948(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_948(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_923(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_923(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2828(var uParam0, var uParam1)//Position - 0xE376E
{
	if (__LIB_2__::func_710(PLAYER::PLAYER_ID()))
	{
		func_2829(uParam0, uParam1);
	}
}

void func_2829(var uParam0, var uParam1)//Position - 0xE378C
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_572(uParam0, uParam1);
			break;
		case 1:
			func_2830(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2830(var uParam0, var uParam1)//Position - 0xE37C6
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_696(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_32())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_32())
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			__LIB_1__::func_319("ARENA_ENT_T" /* GXT: ARENA WORKSHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_7__::func_396();
		}
	}
}

void func_2892(var uParam0, int iParam1)//Position - 0xE60EC
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1033598/*func_3035*/;
			break;
		case 1:
			uParam0->f_30 = 1033542/*func_3034*/;
			break;
		case 2:
			uParam0->f_31 = 1033198/*func_3033*/;
			break;
		case 3:
			uParam0->f_34 = 1033159/*func_3032*/;
			break;
		case 4:
			uParam0->f_12 = 1033126/*func_3031*/;
			break;
		case 5:
			uParam0->f_11 = 1033115/*func_3030*/;
			break;
		case 6:
			uParam0->f_32 = 1033051/*func_3029*/;
			break;
		case 111:
			uParam0->f_35 = 1033028/*func_3028*/;
			break;
		case 79:
			*uParam0 = 1033004/*func_3027*/;
			break;
		case 37:
			uParam0->f_18 = 1032884/*func_3026*/;
			break;
		case 38:
			uParam0->f_9 = 1032805/*func_3025*/;
			break;
		case 11:
			uParam0->f_11 = 1032796/*func_3024*/;
			break;
		case 12:
			uParam0->f_33 = 1032200/*func_3021*/;
			break;
		case 109:
			uParam0->f_56 = 1032192/*func_3020*/;
			break;
		case 15:
			uParam0->f_2 = 1026996/*func_2995*/;
			break;
		case 13:
			uParam0->f_2 = 1026987/*func_2994*/;
			break;
		case 75:
			uParam0->f_4 = 1026972/*func_2993*/;
			break;
		case 16:
			uParam0->f_5 = 1026497/*func_2989*/;
			break;
		case 108:
			uParam0->f_55 = 1023010/*func_2975*/;
			break;
		case 17:
			uParam0->f_17 = 1022232/*func_2974*/;
			break;
		case 19:
			uParam0->f_17 = 1022205/*func_2973*/;
			break;
		case 20:
			uParam0->f_3 = 1021994/*func_2972*/;
			break;
		case 21:
			uParam0->f_3 = 1021831/*func_2971*/;
			break;
		case 74:
			uParam0->f_53 = 1021222/*func_2968*/;
			break;
		case 22:
			uParam0->f_24 = 1021140/*func_2967*/;
			break;
		case 25:
			uParam0->f_23 = 1020224/*func_2964*/;
			break;
		case 30:
			uParam0->f_8 = 1018973/*func_2955*/;
			break;
		case 31:
			uParam0->f_39 = 1018296/*func_2951*/;
			break;
		case 33:
			uParam0->f_40 = 1017393/*func_2948*/;
			break;
		case 14:
			uParam0->f_11 = 1017384/*func_2947*/;
			break;
		case 34:
			uParam0->f_41 = 1016609/*func_2944*/;
			break;
		case 36:
			uParam0->f_58 = 1016556/*func_2943*/;
			break;
		case 35:
			uParam0->f_42 = 948102/*func_2931*/;
			break;
		case 45:
			uParam0->f_14 = 948093/*func_2930*/;
			break;
		case 46:
			uParam0->f_14 = 948084/*func_2929*/;
			break;
		case 110:
			uParam0->f_57 = 948076/*func_2928*/;
			break;
		case 77:
			uParam0->f_13 = 948053/*func_2927*/;
			break;
		case 47:
			uParam0->f_43 = 947913/*func_2926*/;
			break;
		case 49:
			uParam0->f_8 = 947878/*func_2925*/;
			break;
		case 50:
			*uParam0 = 947840/*func_2924*/;
			break;
		case 51:
			*uParam0 = 947816/*func_2923*/;
			break;
		case 52:
			uParam0->f_15 = 947805/*func_2922*/;
			break;
		case 53:
			uParam0->f_13 = 947726/*func_2921*/;
			break;
		case 54:
			uParam0->f_45 = 947718/*func_2920*/;
			break;
		case 56:
			uParam0->f_46 = 947709/*func_2919*/;
			break;
		case 57:
			uParam0->f_11 = 947699/*func_2918*/;
			break;
		case 58:
			uParam0->f_13 = 947410/*func_2917*/;
			break;
		case 64:
			uParam0->f_47 = 945820/*func_2909*/;
			break;
		case 65:
			uParam0->f_21 = 944857/*func_2906*/;
			break;
		case 66:
			uParam0->f_21 = 944662/*func_2905*/;
			break;
		case 67:
			uParam0->f_21 = 944559/*func_2904*/;
			break;
		case 68:
			*uParam0 = 943870/*func_2903*/;
			break;
		case 69:
			*uParam0 = 943861/*func_2902*/;
			break;
		case 70:
			uParam0->f_48 = 943849/*func_2901*/;
			break;
		case 71:
			uParam0->f_49 = 943840/*func_2900*/;
			break;
		case 107:
			uParam0->f_50 = 943828/*func_2899*/;
			break;
		case 80:
			uParam0->f_7 = 943454/*func_2896*/;
			break;
		case 73:
			uParam0->f_51 = 943445/*func_2895*/;
			break;
		case 78:
			uParam0->f_59 = 943328/*func_2893*/;
			break;
	}
}

void func_2964(int iParam0, int iParam1)//Position - 0xF9140
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	int iVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_25__::func_487(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iVar7)) && !__LIB_1__::func_425(iVar7, 1)) && !__LIB_7__::func_291(iVar7)) && !__LIB_2__::func_509(iVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iVar7))) && !__LIB_1__::func_425(iVar7, 1)) && !__LIB_7__::func_291(iVar7)) && !__LIB_2__::func_509(iVar7, 14))
						{
							bVar1 = true;
						}
						if ((!bVar1 && __LIB_25__::func_305(PLAYER::PLAYER_ID())) && __LIB_2__::func_457(iVar7, PLAYER::PLAYER_ID()))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						__LIB_25__::func_506(iParam0, -1);
					}
					bVar9 = __LIB_1__::func_229(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_506(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_465(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_3__::func_903(PLAYER::PLAYER_ID()))
						{
							func_2965(iParam0);
						}
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_465(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_3__::func_903(PLAYER::PLAYER_ID()))
						{
							func_2965(iParam0);
						}
					}
					Jump @693; //curOff = 674
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_2965(int iParam0)//Position - 0xF93F8
{
	__LIB_25__::func_506(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3036(var uParam0, int iParam1)//Position - 0xFC587
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1096853/*func_3266*/;
			break;
		case 1:
			uParam0->f_30 = 1096613/*func_3264*/;
			break;
		case 2:
			uParam0->f_31 = 1094310/*func_3258*/;
			break;
		case 3:
			uParam0->f_34 = 1094101/*func_3257*/;
			break;
		case 4:
			uParam0->f_12 = 1093894/*func_3255*/;
			break;
		case 5:
			uParam0->f_11 = 1093816/*func_3254*/;
			break;
		case 37:
			uParam0->f_18 = 1093676/*func_3253*/;
			break;
		case 38:
			uParam0->f_9 = 1093620/*func_3252*/;
			break;
		case 42:
			uParam0->f_10 = 1093459/*func_3249*/;
			break;
		case 6:
			uParam0->f_32 = 1093223/*func_3248*/;
			break;
		case 111:
			uParam0->f_35 = 1093209/*func_3247*/;
			break;
		case 11:
			uParam0->f_11 = 1093200/*func_3246*/;
			break;
		case 12:
			uParam0->f_33 = 1089830/*func_3237*/;
			break;
		case 14:
			uParam0->f_11 = 1089821/*func_3236*/;
			break;
		case 109:
			uParam0->f_56 = 1075971/*func_3235*/;
			break;
		case 79:
			*uParam0 = 1075715/*func_3231*/;
			break;
		case 13:
			uParam0->f_2 = 1075666/*func_3230*/;
			break;
		case 15:
			uParam0->f_2 = 1075455/*func_3227*/;
			break;
		case 44:
			*uParam0 = 1075446/*func_3226*/;
			break;
		case 75:
			uParam0->f_4 = 1075417/*func_3225*/;
			break;
		case 16:
			uParam0->f_5 = 1074690/*func_3222*/;
			break;
		case 108:
			uParam0->f_55 = 1070836/*func_3209*/;
			break;
		case 17:
			uParam0->f_17 = 1069522/*func_3205*/;
			break;
		case 19:
			uParam0->f_17 = 1069476/*func_3204*/;
			break;
		case 20:
			uParam0->f_3 = 1069311/*func_3203*/;
			break;
		case 21:
			uParam0->f_3 = 1069247/*func_3202*/;
			break;
		case 74:
			uParam0->f_53 = 1069020/*func_3201*/;
			break;
		case 22:
			uParam0->f_24 = 1068897/*func_3200*/;
			break;
		case 26:
			uParam0->f_38 = 1065519/*func_3174*/;
			break;
		case 25:
			uParam0->f_23 = 1065198/*func_3172*/;
			break;
		case 27:
			uParam0->f_25 = 1064048/*func_3163*/;
			break;
		case 28:
			uParam0->f_24 = 1063936/*func_3162*/;
			break;
		case 29:
			uParam0->f_28 = 1063855/*func_3161*/;
			break;
		case 30:
			uParam0->f_8 = 1062965/*func_3159*/;
			break;
		case 31:
			uParam0->f_39 = 1062415/*func_3157*/;
			break;
		case 33:
			uParam0->f_40 = 1061733/*func_3155*/;
			break;
		case 32:
			*uParam0 = 1061640/*func_3153*/;
			break;
		case 34:
			uParam0->f_41 = 1052374/*func_3138*/;
			break;
		case 36:
			uParam0->f_58 = 1052316/*func_3137*/;
			break;
		case 35:
			uParam0->f_42 = 948971/*func_2934*/;
			break;
		case 45:
			uParam0->f_14 = 1052307/*func_3136*/;
			break;
		case 46:
			uParam0->f_14 = 1052298/*func_3135*/;
			break;
		case 110:
			uParam0->f_57 = 1052290/*func_3134*/;
			break;
		case 77:
			uParam0->f_13 = 1052241/*func_3133*/;
			break;
		case 47:
			uParam0->f_43 = 1051949/*func_3132*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1048924/*func_3108*/;
			break;
		case 49:
			uParam0->f_8 = 1048820/*func_3107*/;
			break;
		case 50:
			*uParam0 = 1048536/*func_3106*/;
			break;
		case 51:
			*uParam0 = 1048374/*func_3105*/;
			break;
		case 52:
			uParam0->f_15 = 1048363/*func_3104*/;
			break;
		case 53:
			uParam0->f_13 = 1048105/*func_3103*/;
			break;
		case 54:
			uParam0->f_45 = 1047843/*func_3102*/;
			break;
		case 56:
			uParam0->f_46 = 1047834/*func_3101*/;
			break;
		case 57:
			uParam0->f_11 = 1046677/*func_3094*/;
			break;
		case 58:
			uParam0->f_13 = 1046419/*func_3093*/;
			break;
		case 59:
			*uParam0 = 1046140/*func_3090*/;
			break;
		case 60:
			*uParam0 = 1046131/*func_3089*/;
			break;
		case 61:
			uParam0->f_15 = 1046120/*func_3088*/;
			break;
		case 62:
			uParam0->f_13 = 1045862/*func_3087*/;
			break;
		case 55:
			uParam0->f_45 = 1045854/*func_3086*/;
			break;
		case 63:
			uParam0->f_11 = 1045796/*func_3085*/;
			break;
		case 64:
			uParam0->f_47 = 1045646/*func_3084*/;
			break;
		case 65:
			uParam0->f_21 = 1043939/*func_3077*/;
			break;
		case 66:
			uParam0->f_21 = 1043628/*func_3076*/;
			break;
		case 67:
			uParam0->f_21 = 1043476/*func_3075*/;
			break;
		case 68:
			*uParam0 = 1042476/*func_3072*/;
			break;
		case 69:
			*uParam0 = 1042467/*func_3071*/;
			break;
		case 70:
			uParam0->f_48 = 1042018/*func_3070*/;
			break;
		case 71:
			uParam0->f_49 = 1041739/*func_3069*/;
			break;
		case 107:
			uParam0->f_50 = 1041727/*func_3068*/;
			break;
		case 80:
			uParam0->f_7 = 1041494/*func_3067*/;
			break;
		case 84:
			uParam0->f_1 = 1041485/*func_3066*/;
			break;
		case 85:
			uParam0->f_1 = 1039390/*func_3057*/;
			break;
		case 87:
			uParam0->f_1 = 1036495/*func_3048*/;
			break;
		case 88:
			uParam0->f_1 = 1036486/*func_3047*/;
			break;
		case 89:
			uParam0->f_54 = 1036478/*func_3046*/;
			break;
		case 96:
			uParam0->f_1 = 1036452/*func_3045*/;
			break;
		case 97:
			uParam0->f_1 = 1036343/*func_3044*/;
			break;
		case 98:
			uParam0->f_1 = 1035632/*func_3043*/;
			break;
		case 100:
			uParam0->f_22 = 1035469/*func_3042*/;
			break;
		case 101:
			uParam0->f_22 = 1035342/*func_3041*/;
			break;
		case 78:
			uParam0->f_59 = 1035052/*func_3038*/;
			break;
		case 125:
			uParam0->f_19 = 1035028/*func_3037*/;
			break;
	}
}

int func_3043(var uParam0, var uParam1)//Position - 0xFCD70
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	Var0 = { -1560.336f, -3019.0583f, -74.8061f };
	Var1 = { 0f, 0f, -30f };
	sVar2 = "mini@strip_club@throwout_d@";
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
	{
		uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_ClubBar_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
	{
		uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_M_Bouncer_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[1]);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 11, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 8, 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
	{
		func_1542(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
			{
				return 0;
			}
		}
		iVar3++;
	}
	MISC::SET_BIT(&(Global_1946250.f_2), 20);
	Var0 = { Var0 + Vector(0f, 4f, 0f) };
	__LIB_2__::func_681(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 262144, 0);
	uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	if (__LIB_0__::func_121(uParam1->f_140[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[2]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 0, 0, 1000f, 0);
	}
	return 1;
}

int func_3057(int iParam0, var uParam1)//Position - 0xFDC1E
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	bool bVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	iVar0 = __LIB_3__::func_103(iParam0);
	if (__LIB_18__::func_486(iVar0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_483(&iVar1, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_477(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		Var2 = { __LIB_3__::func_110(iVar0) };
		Var3 = { __LIB_3__::func_109(iVar0) };
		fVar4 = __LIB_3__::func_108(iVar0);
		fVar5 = __LIB_3__::func_107(iVar0);
		bVar6 = false;
		Var7 = { __LIB_3__::func_106(iVar0) };
		Var8 = { __LIB_3__::func_105(iVar0) };
		fVar9 = __LIB_3__::func_104(iVar0);
		return __LIB_25__::func_164(&(Global_1946250.f_3638), Var2, Var3, fVar4, fVar5, bVar6, Var7, Var8, fVar9);
	}
	return 1;
}

void func_3172(int iParam0, int iParam1)//Position - 0x1040EE
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_82(iParam0) };
	if (__LIB_6__::func_426(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_696(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_25__::func_396(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_25__::func_396(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_25__::func_430(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_25__::func_430(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_3174(var uParam0, var uParam1)//Position - 0x10422F
{
	if (__LIB_2__::func_399() == 2)
	{
		func_3188(uParam0, uParam1);
	}
	else if (__LIB_2__::func_399() == 0)
	{
		if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_25__::func_432(uParam0, uParam1);
		}
		else
		{
			func_3176(uParam0, uParam1);
		}
	}
	else if (__LIB_2__::func_399() == 3)
	{
		if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_25__::func_432(uParam0, uParam1);
		}
		else
		{
			__LIB_3__::func_157(uParam1);
		}
	}
}

void func_3176(var uParam0, var uParam1)//Position - 0x1042BA
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_573(uParam0, uParam1);
			break;
		case 1:
			func_3177(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3177(var uParam0, var uParam1)//Position - 0x1042F4
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_696(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, __LIB_7__::func_514(PLAYER::PLAYER_ID()), 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_156())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_156())
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_2__::func_399() == 2)
			{
				__LIB_1__::func_319("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_319("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_7__::func_396();
		}
	}
}

void func_3188(var uParam0, var uParam1)//Position - 0x10480E
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_574(uParam0, uParam1);
			break;
		case 1:
			func_3197(uParam0, uParam1);
			break;
		case 2:
			__LIB_32__::func_189(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3197(var uParam0, var uParam1)//Position - 0x104CBB
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_696(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_7__::func_396();
		if (__LIB_19__::func_53(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_2__::func_399() == 2)
			{
				__LIB_1__::func_319("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_319("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_25__::func_396(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_3267(var uParam0, int iParam1)//Position - 0x10BC9E
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1104379/*func_3344*/;
			break;
		case 1:
			uParam0->f_30 = 1104323/*func_3343*/;
			break;
		case 2:
			uParam0->f_31 = 1104054/*func_3342*/;
			break;
		case 3:
			uParam0->f_34 = 1103993/*func_3341*/;
			break;
		case 4:
			uParam0->f_12 = 1103962/*func_3340*/;
			break;
		case 6:
			uParam0->f_32 = 1103898/*func_3339*/;
			break;
		case 111:
			uParam0->f_35 = 1103889/*func_3338*/;
			break;
		case 11:
			uParam0->f_11 = 1103880/*func_3337*/;
			break;
		case 14:
			uParam0->f_11 = 1103871/*func_3336*/;
			break;
		case 12:
			uParam0->f_33 = 1103660/*func_3334*/;
			break;
		case 109:
			uParam0->f_56 = 1103652/*func_3333*/;
			break;
		case 79:
			*uParam0 = 1103628/*func_3332*/;
			break;
		case 13:
			uParam0->f_2 = 1103619/*func_3331*/;
			break;
		case 15:
			uParam0->f_2 = 1102677/*func_3324*/;
			break;
		case 75:
			uParam0->f_4 = 1102668/*func_3323*/;
			break;
		case 16:
			uParam0->f_5 = 1102643/*func_3322*/;
			break;
		case 108:
			uParam0->f_55 = 1102634/*func_3321*/;
			break;
		case 17:
			uParam0->f_17 = 1102608/*func_3320*/;
			break;
		case 19:
			uParam0->f_17 = 1102596/*func_3319*/;
			break;
		case 20:
			uParam0->f_3 = 1102587/*func_3318*/;
			break;
		case 21:
			uParam0->f_3 = 1102578/*func_3317*/;
			break;
		case 74:
			uParam0->f_53 = 1102110/*func_3314*/;
			break;
		case 22:
			uParam0->f_24 = 1101991/*func_3313*/;
			break;
		case 25:
			uParam0->f_23 = 1101221/*func_3309*/;
			break;
		case 30:
			uParam0->f_8 = 1101075/*func_3307*/;
			break;
		case 31:
			uParam0->f_39 = 1101063/*func_3306*/;
			break;
		case 33:
			uParam0->f_40 = 1100856/*func_3304*/;
			break;
		case 34:
			uParam0->f_41 = 1100539/*func_3302*/;
			break;
		case 36:
			uParam0->f_58 = 1100486/*func_3301*/;
			break;
		case 35:
			uParam0->f_42 = 1099713/*func_3298*/;
			break;
		case 45:
			uParam0->f_14 = 1099704/*func_3297*/;
			break;
		case 46:
			uParam0->f_14 = 1099695/*func_3296*/;
			break;
		case 110:
			uParam0->f_57 = 1099687/*func_3295*/;
			break;
		case 77:
			uParam0->f_13 = 1099676/*func_3294*/;
			break;
		case 47:
			uParam0->f_43 = 1099437/*func_3292*/;
			break;
		case 49:
			uParam0->f_8 = 1099428/*func_3291*/;
			break;
		case 50:
			*uParam0 = 1099419/*func_3290*/;
			break;
		case 51:
			*uParam0 = 1099410/*func_3289*/;
			break;
		case 52:
			uParam0->f_15 = 1099399/*func_3288*/;
			break;
		case 53:
			uParam0->f_13 = 1099388/*func_3287*/;
			break;
		case 54:
			uParam0->f_45 = 1099380/*func_3286*/;
			break;
		case 56:
			uParam0->f_46 = 1099371/*func_3285*/;
			break;
		case 57:
			uParam0->f_11 = 1099362/*func_3284*/;
			break;
		case 58:
			uParam0->f_13 = 1099069/*func_3282*/;
			break;
		case 64:
			uParam0->f_47 = 1098525/*func_3279*/;
			break;
		case 65:
			uParam0->f_21 = 1098517/*func_3278*/;
			break;
		case 66:
			uParam0->f_21 = 1098449/*func_3277*/;
			break;
		case 67:
			uParam0->f_21 = 1098309/*func_3275*/;
			break;
		case 68:
			*uParam0 = 1097865/*func_3274*/;
			break;
		case 69:
			*uParam0 = 1097856/*func_3273*/;
			break;
		case 70:
			uParam0->f_48 = 1097844/*func_3272*/;
			break;
		case 71:
			uParam0->f_49 = 1097835/*func_3271*/;
			break;
		case 107:
			uParam0->f_50 = 1097823/*func_3270*/;
			break;
		case 80:
			uParam0->f_7 = 1097814/*func_3269*/;
			break;
		case 78:
			uParam0->f_59 = 1097806/*func_3268*/;
			break;
	}
}

void func_3309(int iParam0, int iParam1)//Position - 0x10CDA5
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_0__::func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar1 = __LIB_3__::func_808();
		}
		Var4 = { __LIB_19__::func_148(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_267(iVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_425(iVar7, 1) && !__LIB_7__::func_291(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()))
								{
									bVar2 = true;
								}
							}
						}
						if ((((!bVar3 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_7__::func_291(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_2__::func_560())
					{
						__LIB_19__::func_147(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_19__::func_147(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_3310(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3310(iParam0);
					}
					Jump @551; //curOff = 532
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_3310(int iParam0)//Position - 0x10CFCF
{
	__LIB_19__::func_147(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3345(var uParam0, int iParam1)//Position - 0x10DA04
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1203568/*func_3589*/;
			break;
		case 1:
			uParam0->f_30 = 1203464/*func_3588*/;
			break;
		case 2:
			uParam0->f_31 = 1202729/*func_3586*/;
			break;
		case 3:
			uParam0->f_34 = 1202647/*func_3585*/;
			break;
		case 4:
			uParam0->f_12 = 1202504/*func_3584*/;
			break;
		case 5:
			uParam0->f_11 = 1202494/*func_3583*/;
			break;
		case 37:
			uParam0->f_18 = 1202357/*func_3582*/;
			break;
		case 42:
			uParam0->f_10 = 1202290/*func_3581*/;
			break;
		case 6:
			uParam0->f_32 = 1202178/*func_3580*/;
			break;
		case 111:
			uParam0->f_35 = 1201939/*func_3576*/;
			break;
		case 11:
			uParam0->f_11 = 1201930/*func_3575*/;
			break;
		case 12:
			uParam0->f_33 = 1201430/*func_3572*/;
			break;
		case 14:
			uParam0->f_11 = 1201421/*func_3571*/;
			break;
		case 109:
			uParam0->f_56 = 1201413/*func_3570*/;
			break;
		case 79:
			*uParam0 = 1201389/*func_3569*/;
			break;
		case 38:
			uParam0->f_9 = 1201309/*func_3568*/;
			break;
		case 13:
			uParam0->f_2 = 1201213/*func_3567*/;
			break;
		case 15:
			uParam0->f_2 = 1201008/*func_3566*/;
			break;
		case 75:
			uParam0->f_4 = 1200992/*func_3565*/;
			break;
		case 16:
			uParam0->f_5 = 1200183/*func_3562*/;
			break;
		case 108:
			uParam0->f_55 = 1195476/*func_3544*/;
			break;
		case 17:
			uParam0->f_17 = 1194658/*func_3543*/;
			break;
		case 19:
			uParam0->f_17 = 1194631/*func_3542*/;
			break;
		case 20:
			uParam0->f_3 = 1194547/*func_3541*/;
			break;
		case 21:
			uParam0->f_3 = 1194483/*func_3540*/;
			break;
		case 74:
			uParam0->f_53 = 1194331/*func_3539*/;
			break;
		case 22:
			uParam0->f_24 = 1194164/*func_3538*/;
			break;
		case 25:
			uParam0->f_23 = 1193018/*func_3532*/;
			break;
		case 30:
			uParam0->f_8 = 1192400/*func_3530*/;
			break;
		case 31:
			uParam0->f_39 = 1192087/*func_3529*/;
			break;
		case 33:
			uParam0->f_40 = 1191148/*func_3527*/;
			break;
		case 34:
			uParam0->f_41 = 1189788/*func_3526*/;
			break;
		case 36:
			uParam0->f_58 = 1189730/*func_3525*/;
			break;
		case 35:
			uParam0->f_42 = 1141858/*func_3522*/;
			break;
		case 45:
			uParam0->f_14 = 1141849/*func_3521*/;
			break;
		case 46:
			uParam0->f_14 = 1141840/*func_3520*/;
			break;
		case 110:
			uParam0->f_57 = 1141832/*func_3519*/;
			break;
		case 77:
			uParam0->f_13 = 1141809/*func_3518*/;
			break;
		case 47:
			uParam0->f_43 = 1141681/*func_3517*/;
			break;
		case 49:
			uParam0->f_8 = 1141640/*func_3516*/;
			break;
		case 50:
			*uParam0 = 1141372/*func_3513*/;
			break;
		case 51:
			*uParam0 = 1141303/*func_3512*/;
			break;
		case 52:
			uParam0->f_15 = 1141292/*func_3511*/;
			break;
		case 53:
			uParam0->f_13 = 1141058/*func_3510*/;
			break;
		case 54:
			uParam0->f_45 = 1140708/*func_3507*/;
			break;
		case 56:
			uParam0->f_46 = 1140699/*func_3506*/;
			break;
		case 57:
			uParam0->f_11 = 1140628/*func_3505*/;
			break;
		case 58:
			uParam0->f_13 = 1140394/*func_3504*/;
			break;
		case 64:
			uParam0->f_47 = 1140194/*func_3502*/;
			break;
		case 65:
			uParam0->f_21 = 1139296/*func_3500*/;
			break;
		case 66:
			uParam0->f_21 = 1138585/*func_3492*/;
			break;
		case 67:
			uParam0->f_21 = 1136286/*func_3472*/;
			break;
		case 68:
			*uParam0 = 1135653/*func_3468*/;
			break;
		case 69:
			*uParam0 = 1135644/*func_3467*/;
			break;
		case 70:
			uParam0->f_48 = 1135632/*func_3466*/;
			break;
		case 71:
			uParam0->f_49 = 1135623/*func_3465*/;
			break;
		case 107:
			uParam0->f_50 = 1135611/*func_3464*/;
			break;
		case 80:
			uParam0->f_7 = 1134918/*func_3458*/;
			break;
		case 84:
			uParam0->f_1 = 1134378/*func_3456*/;
			break;
		case 85:
			uParam0->f_1 = 1130275/*func_3448*/;
			break;
		case 87:
			uParam0->f_1 = 1126288/*func_3436*/;
			break;
		case 88:
			uParam0->f_1 = 1125774/*func_3432*/;
			break;
		case 89:
			uParam0->f_54 = 1125603/*func_3431*/;
			break;
		case 90:
			uParam0->f_1 = 1125397/*func_3426*/;
			break;
		case 91:
			uParam0->f_1 = 1125201/*func_3424*/;
			break;
		case 92:
			uParam0->f_1 = 1123749/*func_3420*/;
			break;
		case 94:
			uParam0->f_1 = 1119612/*func_3409*/;
			break;
		case 95:
			uParam0->f_22 = 1119316/*func_3406*/;
			break;
		case 96:
			uParam0->f_1 = 1119286/*func_3405*/;
			break;
		case 97:
			uParam0->f_1 = 1118618/*func_3402*/;
			break;
		case 98:
			uParam0->f_1 = 1115969/*func_3383*/;
			break;
		case 100:
			uParam0->f_22 = 1107859/*func_3359*/;
			break;
		case 101:
			uParam0->f_22 = 1105916/*func_3349*/;
			break;
		case 78:
			uParam0->f_59 = 1105696/*func_3347*/;
			break;
		case 125:
			uParam0->f_19 = 1105672/*func_3346*/;
			break;
	}
}

int func_3383(int iParam0, int* iParam1)//Position - 0x110741
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<4> Var4;
	struct<4> Var5;
	struct<3> Var6;
	struct<3> Var7;
	char* sVar8;
	struct<3> Var9;
	struct<3> Var10;
	if ((__LIB_0__::func_175() || __LIB_2__::func_500()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (Global_2824886)
		{
			if (!BitTest(*iParam1, 13))
			{
				if (__LIB_4__::func_715() || __LIB_2__::func_835())
				{
					if (!BitTest(Global_1946250.f_2, 21))
					{
						__LIB_0__::func_495(&(iParam1->f_101), 1, 0);
						STREAMING::SET_FOCUS_POS_AND_VEL(482.435f, 4812.798f, -59.383f, 0f, 0f, 0f);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(482.435f, 4812.798f, -59.383f, 20f, 1);
					}
				}
				__LIB_0__::func_495(&(iParam1->f_101), 1, 0);
				MISC::SET_BIT(iParam1, 13);
			}
		}
		if (((Global_2824886 && __LIB_2__::func_47(&(iParam1->f_101), 1000, 1)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
		{
			if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 0))
			{
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 0);
			}
		}
		else
		{
			return 0;
		}
		if (!BitTest(Global_1946250.f_2, 21))
		{
			bVar3 = false;
		}
		else
		{
			bVar3 = true;
			if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 1))
			{
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if ((__LIB_1__::func_264(bVar2, 1, 1) && !__LIB_8__::func_303(bVar2)) && !Global_2824892)
			{
				if (!BitTest(Global_2689235[bVar2 /*453*/].f_318.f_3, bVar3) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::GET_PLAYER_PED(bVar2)))
				{
					return 0;
				}
			}
			iVar0++;
		}
		if (!BitTest(*iParam1, 12))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
			{
				ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(482.435f, 4812.798f, -59.383f, 0.5f, __LIB_3__::func_198(0), false);
				Var4 = { __LIB_3__::func_207() };
				__LIB_7__::func_660(&(iParam1->f_176[0]), Var4, Var4.f_3, 1, 1);
			}
			Global_2824887 = -1;
			if (Global_1853191 != __LIB_0__::func_160())
			{
				if (__LIB_0__::func_121(PLAYER::GET_PLAYER_PED(Global_1853191)))
				{
					if (iVar1 < 4)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
						{
							func_1542(&(iParam1->f_140[0]), Global_1853191, 1, 0);
							if (Global_1853191 == PLAYER::PLAYER_ID())
							{
								Global_2824887 = iVar1;
							}
							iVar1++;
						}
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (Global_1853191 != bVar2)
				{
					if (__LIB_1__::func_264(bVar2, 0, 1) && !__LIB_8__::func_303(bVar2))
					{
						if (iVar1 < 4)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar1]))
							{
								func_1542(&(iParam1->f_140[iVar1]), bVar2, 1, 0);
								if (__LIB_0__::func_121(iParam1->f_140[iVar1]))
								{
									PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[iVar1]);
								}
								if (bVar2 == PLAYER::PLAYER_ID())
								{
									Global_2824887 = iVar1;
								}
								iVar1++;
							}
						}
					}
				}
				iVar0++;
			}
			__LIB_3__::func_223();
			MISC::SET_BIT(iParam1, 12);
			return 0;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar0]) && __LIB_0__::func_121(iParam1->f_140[iVar0]))
				{
					if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar0]))
					{
						return 0;
					}
				}
				iVar0++;
			}
		}
		if (__LIB_1__::func_206() || BitTest(Global_1574942, 4))
		{
			if (__LIB_4__::func_715() || __LIB_2__::func_835())
			{
			}
			else
			{
				__LIB_35__::func_794(0, 1, 0, 1, 0, 1, 0, 1, 1, 0);
				return 0;
			}
		}
		Var5 = { __LIB_25__::func_125(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[1]))
		{
			__LIB_7__::func_659(&(iParam1->f_176[1]), Var5, Var5.f_3);
		}
		Var5 = { __LIB_25__::func_125(iParam0, 3) };
		if (BitTest(Global_1946250.f_2, 21))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var5 + Vector(-2f, 0f, 0f), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam1->f_176[0], Var5.f_3, 2, true);
		}
		Var5 = { __LIB_25__::func_125(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
		{
			__LIB_18__::func_635(&(iParam1->f_176[3]), Var5, Var5.f_3);
		}
		iParam1->f_11 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), false);
		if (BitTest(Global_1946250.f_2, 21))
		{
		}
	}
	else
	{
		if (!BitTest(*iParam1, 12))
		{
			func_1542(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
			MISC::SET_BIT(iParam1, 12);
			return 0;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]) && __LIB_0__::func_121(iParam1->f_140[0]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[0]))
			{
				return 0;
			}
		}
		iParam1->f_176[1] = 0;
		if (__LIB_0__::func_121(iParam1->f_140[0]))
		{
			Var6 = { ENTITY::GET_ENTITY_COORDS(iParam1->f_140[0], false) };
			Var6.f_2 = (Var6.f_2 - 20f);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_140[0], Var6, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_140[0], true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
		{
			Var7 = { __LIB_3__::func_207() };
			__LIB_7__::func_660(&(iParam1->f_176[0]), Var7, Var7.f_3, 1, 0);
			Var7.f_2 = (Var7.f_2 - 10f);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var7, false, false, true);
			ENTITY::SET_ENTITY_COLLISION(iParam1->f_176[0], true, false);
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[0], true, false);
		}
		sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
		Var9 = { 481.253f, 4813.742f, -59.148f };
		Var10 = { 0f, 0f, -10f };
		if (__LIB_6__::func_925())
		{
			sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
		}
		__LIB_2__::func_681(&(Global_1946250.f_4073), 6500, "Base exit", Var9, Var10, sVar8, "control_operation_cam", 0, 0, 0, 0, 2);
		__LIB_3__::func_209(&(iParam1->f_176[1]), 1);
		MISC::SET_BIT(&(Global_1946250.f_5), 27);
	}
	__LIB_7__::func_449(iParam1, 0);
	__LIB_0__::func_495(&(iParam1->f_101), 1, 0);
	return 1;
}

int func_3420(int iParam0, int* iParam1)//Position - 0x1125A5
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
	{
		Var0 = { __LIB_3__::func_208() };
		__LIB_7__::func_660(&(iParam1->f_176[0]), Var0, Var0.f_3, 1, 0);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("avenger"))
			{
				__LIB_39__::func_751(&iVar1, &(iParam1->f_109), 48, 10f, 20f, 15f);
			}
			else
			{
				func_483(&iVar1, &(iParam1->f_109), 40);
			}
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else if (func_3422(&iVar1, &(iParam1->f_109), &(iParam1->f_109.f_1), &(Global_1946250.f_4508), 1))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1->f_109, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar3 = 0;
		iVar2 = 0;
		while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar4 = iVar2;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
			{
				bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
				if (iVar2 < 30)
				{
					if ((__LIB_1__::func_264(bVar5, 1, 1) && __LIB_3__::func_977(bVar5) == iParam0) && __LIB_3__::func_998(bVar5))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar3]))
						{
							func_1542(&(iParam1->f_140[iVar3]), bVar5, 1, 0);
							if (__LIB_0__::func_121(iParam1->f_140[iVar3]))
							{
								PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[iVar3]);
								if (ENTITY::GET_ENTITY_MODEL(iParam1->f_140[iVar3]) == joaat("MP_M_Freemode_01"))
								{
									MISC::SET_BIT(&(iParam1->f_188), 27);
								}
								else
								{
									MISC::SET_BIT(&(iParam1->f_188), 28);
								}
								if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[iVar3]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar3]))
								{
									return 0;
								}
								else
								{
									PED::FINALIZE_HEAD_BLEND(iParam1->f_140[iVar3]);
								}
							}
							iVar3++;
						}
						else if (__LIB_0__::func_121(iParam1->f_140[iVar3]))
						{
							if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[iVar3]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar3]))
							{
								return 0;
							}
							else
							{
								PED::FINALIZE_HEAD_BLEND(iParam1->f_140[iVar3]);
							}
							iVar3++;
						}
					}
				}
			}
			iVar2++;
		}
	}
	__LIB_7__::func_449(iParam1, 0);
	iParam1->f_183[0] = 0.4f;
	__LIB_7__::func_536(&(iParam1->f_176[0]), iParam1->f_183[0], 0);
	__LIB_25__::func_126(iParam0, &(Global_1946250.f_4073));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_3__::func_198(0));
	return 1;
}

int func_3422(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x1128B7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	iVar0 = -1;
	while (iVar0 <= 8)
	{
		iVar1 = iVar0 + 1;
		iVar2 = iVar0;
		if ((*uParam3)[iVar1] != __LIB_0__::func_160() && __LIB_1__::func_264((*uParam3)[iVar1], 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED((*uParam3)[iVar1]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]))
				{
					func_478(uParam2[iVar1], iVar3, 1, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]) && __LIB_0__::func_121((*uParam2)[iVar1]))
				{
					if (!PED::HAS_PED_HEAD_BLEND_FINISHED((*uParam2)[iVar1]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED((*uParam2)[iVar1]))
					{
						if (bParam4)
						{
							return 0;
						}
					}
					else
					{
						PED::FINALIZE_HEAD_BLEND((*uParam2)[iVar1]);
					}
					iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iVar2, false);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						if (__LIB_0__::func_121(*uParam1))
						{
							PED::SET_PED_INTO_VEHICLE((*uParam2)[iVar1], *uParam1, iVar2);
						}
					}
					if (iVar0 == 7 && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("insurgent3"))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(*uParam1, 5, 5, 1f);
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_3448(int iParam0, int* iParam1)//Position - 0x113F23
{
	int iVar0;
	struct<4> Var1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			func_483(&iVar0, &(iParam1->f_109), 60);
			__LIB_2__::func_416(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			if (__LIB_3__::func_234(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				MISC::SET_BIT(&(iParam1->f_188), 9);
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("avenger"))
				{
					if (VEHICLE::GET_LANDING_GEAR_STATE(iVar0) == 4 || VEHICLE::GET_LANDING_GEAR_STATE(iVar0) == 1)
					{
						MISC::SET_BIT(&(iParam1->f_188), 14);
					}
					MISC::SET_BIT(&(iParam1->f_188), 13);
				}
			}
			return 0;
		}
		else if (func_477(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1->f_109, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
			__LIB_3__::func_246(iVar0);
		}
		else
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_1542(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
		if (__LIB_0__::func_121(iParam1->f_140[0]))
		{
			if (PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[0]) || PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[0]))
			{
				PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[0]);
				PED::FINALIZE_HEAD_BLEND(iParam1->f_140[0]);
			}
			else
			{
				return 0;
			}
		}
	}
	Var1 = { __LIB_25__::func_125(iParam0, 0) };
	__LIB_7__::func_659(&(iParam1->f_176[1]), Var1, Var1.f_3);
	Var1 = { 0f, 0f, 0f };
	Var1.f_3 = { 0f, 0f, 0f };
	Var1 = { __LIB_25__::func_125(iParam0, 3) };
	__LIB_7__::func_660(&(iParam1->f_176[0]), Var1, Var1.f_3, 1, 1);
	if (BitTest(iParam1->f_188, 1) && __LIB_7__::func_542(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		Var1 = { __LIB_25__::func_125(iParam0, 19) };
		Var1.f_2 = (Var1.f_2 - 1f);
		__LIB_7__::func_660(&(iParam1->f_176[4]), Var1, Var1.f_3, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[4], false, false);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iParam1->f_176[4]);
	}
	Var1 = { __LIB_25__::func_125(iParam0, 0) };
	__LIB_18__::func_635(&(iParam1->f_176[3]), Var1, Var1.f_3);
	__LIB_25__::func_166(iParam0, &(iParam1->f_176[0]), 0f, 1, 1f);
	__LIB_25__::func_127(iParam0, &(Global_1946250.f_3638), 0, -1);
	__LIB_7__::func_449(iParam1, 0);
	return 1;
}

int func_3456(int iParam0, var uParam1)//Position - 0x114F2A
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	char* sVar3;
	bVar0 = true;
	if (!BitTest(uParam1->f_188, 17))
	{
		__LIB_7__::func_538(iParam0);
		MISC::SET_BIT(&(uParam1->f_188), 17);
	}
	STREAMING::REQUEST_MODEL(__LIB_3__::func_240(iParam0));
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_240(iParam0)))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_3__::func_222());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_222()))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_3__::func_221());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_221()))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_ANIM_DICT("anim@amb@facility@hanger_doors");
	if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@facility@hanger_doors"))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(joaat("xm_prop_out_hanger_lift"));
	if (!STREAMING::HAS_MODEL_LOADED(joaat("xm_prop_out_hanger_lift")))
	{
		bVar0 = false;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_CHRISTMAS2017/XM_FACILITY_ENTRY_EXIT", false, -1))
	{
		MISC::CLEAR_BIT(&(uParam1->f_188), 22);
		bVar0 = false;
	}
	else
	{
		MISC::SET_BIT(&(uParam1->f_188), 22);
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_0__::func_121(iVar1) && ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("avenger"))
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true) };
				Var2.f_2 = (Var2.f_2 - 10f);
				__LIB_0__::func_584(__LIB_3__::func_226());
				if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_226()))
				{
					bVar0 = false;
				}
				else if (!__LIB_39__::func_751(&iVar1, &(uParam1->f_122), 16, Var2))
				{
					bVar0 = false;
				}
				else
				{
					func_483(&iVar1, &(uParam1->f_122), 24);
					__LIB_3__::func_237(uParam1->f_122, 0);
					if (__LIB_0__::func_121(uParam1->f_122))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_122, true);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam1->f_122, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
					}
					__LIB_3__::func_247(uParam1->f_122, 1);
				}
			}
		}
		else
		{
			sVar3 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
			if (__LIB_6__::func_925())
			{
				sVar3 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
			}
			STREAMING::REQUEST_ANIM_DICT(sVar3);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar3))
			{
				bVar0 = false;
			}
		}
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_3507(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x1167E4
{
	struct<3> Var0;
	int iVar1;
	if (__LIB_7__::func_926(iParam0))
	{
		if (*uParam3 != 1 && *uParam3 != 2)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			HUD::SET_BLIP_SCALE(*uParam1, 1.1f);
			HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 7000);
			*uParam3 = 1;
			return;
		}
		else if (*uParam3 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::SET_BLIP_ROUTE(*uParam1, false);
				*uParam3 = 2;
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			*uParam3 = 1;
		}
	}
	else if (*uParam3 == 1)
	{
		HUD::SET_BLIP_ROUTE(*uParam1, false);
		HUD::SET_BLIP_SCALE(*uParam1, 1f);
		HUD::SET_BLIP_PRIORITY(*uParam1, 5);
		*uParam3 = 0;
	}
	if (__LIB_0__::func_170(iParam0) == 9)
	{
		if (__LIB_0__::func_109(iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!HUD::DOES_BLIP_EXIST(*iParam2))
				{
					Var0 = { __LIB_3__::func_77(iParam0) };
					iVar1 = __LIB_2__::func_855(iParam0);
					*iParam2 = __LIB_0__::func_392(Var0, 0);
					HUD::SET_BLIP_SPRITE(*iParam2, iVar1);
					HUD::SET_BLIP_SCALE(*iParam2, 1f);
					HUD::SET_BLIP_PRIORITY(*iParam2, 5);
					func_2154(iParam2, 166);
					HUD::SET_BLIP_AS_SHORT_RANGE(*iParam2, false);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam2, "BASE_HEIST_BLIP" /* GXT: The Doomsday Heist */);
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(*iParam2, true);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(*iParam2))
			{
				HUD::REMOVE_BLIP(iParam2);
			}
		}
	}
}

void func_3532(int iParam0, int iParam1)//Position - 0x12343A
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_6__::func_431(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar1 = __LIB_3__::func_808();
		}
		Var4 = { __LIB_3__::func_77(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(uVar0[iVar6])) && !__LIB_8__::func_303(bVar7)) && !__LIB_8__::func_108(bVar7, 1)) && !__LIB_7__::func_764(bVar7)) && !func_697(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if ((((((((!bVar3 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(uVar0[iVar6])) && !__LIB_8__::func_303(bVar7)) && !__LIB_8__::func_108(bVar7, 1)) && !__LIB_7__::func_764(bVar7)) && !func_697(bVar7))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_2__::func_560())
					{
						__LIB_25__::func_398(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_398(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_3533(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3533(iParam0);
					}
					Jump @653; //curOff = 634
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_3533(int iParam0)//Position - 0x1236CA
{
	__LIB_25__::func_398(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3590(var uParam0, int iParam1)//Position - 0x125D79
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1231872/*func_3763*/;
			break;
		case 1:
			uParam0->f_30 = 1231816/*func_3762*/;
			break;
		case 2:
			uParam0->f_31 = 1231547/*func_3761*/;
			break;
		case 3:
			uParam0->f_34 = 1231488/*func_3760*/;
			break;
		case 4:
			uParam0->f_12 = 1231457/*func_3759*/;
			break;
		case 37:
			uParam0->f_18 = 1231337/*func_3758*/;
			break;
		case 38:
			uParam0->f_9 = 1231253/*func_3757*/;
			break;
		case 6:
			uParam0->f_32 = 1231189/*func_3756*/;
			break;
		case 111:
			uParam0->f_35 = 1231166/*func_3755*/;
			break;
		case 11:
			uParam0->f_11 = 1231157/*func_3754*/;
			break;
		case 12:
			uParam0->f_33 = 1230704/*func_3751*/;
			break;
		case 14:
			uParam0->f_11 = 1230695/*func_3750*/;
			break;
		case 109:
			uParam0->f_56 = 1230687/*func_3749*/;
			break;
		case 79:
			*uParam0 = 1230663/*func_3748*/;
			break;
		case 13:
			uParam0->f_2 = 1230654/*func_3747*/;
			break;
		case 15:
			uParam0->f_2 = 1225583/*func_3721*/;
			break;
		case 75:
			uParam0->f_4 = 1225574/*func_3720*/;
			break;
		case 16:
			uParam0->f_5 = 1225390/*func_3719*/;
			break;
		case 108:
			uParam0->f_55 = 1222291/*func_3705*/;
			break;
		case 17:
			uParam0->f_17 = 1221783/*func_3703*/;
			break;
		case 19:
			uParam0->f_17 = 1221756/*func_3702*/;
			break;
		case 20:
			uParam0->f_3 = 1221678/*func_3701*/;
			break;
		case 21:
			uParam0->f_3 = 1221615/*func_3700*/;
			break;
		case 74:
			uParam0->f_53 = 1221400/*func_3698*/;
			break;
		case 22:
			uParam0->f_24 = 1221281/*func_3697*/;
			break;
		case 25:
			uParam0->f_23 = 1220334/*func_3692*/;
			break;
		case 30:
			uParam0->f_8 = 1219770/*func_3690*/;
			break;
		case 31:
			uParam0->f_39 = 1219591/*func_3687*/;
			break;
		case 33:
			uParam0->f_40 = 1218479/*func_3682*/;
			break;
		case 34:
			uParam0->f_41 = 1217785/*func_3680*/;
			break;
		case 36:
			uParam0->f_58 = 1217732/*func_3679*/;
			break;
		case 35:
			uParam0->f_42 = 1217155/*func_3677*/;
			break;
		case 45:
			uParam0->f_14 = 1217146/*func_3676*/;
			break;
		case 46:
			uParam0->f_14 = 1217137/*func_3675*/;
			break;
		case 110:
			uParam0->f_57 = 1216960/*func_3674*/;
			break;
		case 77:
			uParam0->f_13 = 1216949/*func_3673*/;
			break;
		case 47:
			uParam0->f_43 = 1216451/*func_3670*/;
			break;
		case 49:
			uParam0->f_8 = 1216410/*func_3669*/;
			break;
		case 50:
			*uParam0 = 1216401/*func_3668*/;
			break;
		case 51:
			*uParam0 = 1216392/*func_3667*/;
			break;
		case 52:
			uParam0->f_15 = 1216381/*func_3666*/;
			break;
		case 53:
			uParam0->f_13 = 1216370/*func_3665*/;
			break;
		case 54:
			uParam0->f_45 = 1216362/*func_3664*/;
			break;
		case 56:
			uParam0->f_46 = 1216353/*func_3663*/;
			break;
		case 57:
			uParam0->f_11 = 1216344/*func_3662*/;
			break;
		case 58:
			uParam0->f_13 = 1216115/*func_3661*/;
			break;
		case 64:
			uParam0->f_47 = 1210124/*func_3629*/;
			break;
		case 65:
			uParam0->f_21 = 1208392/*func_3617*/;
			break;
		case 66:
			uParam0->f_21 = 1208066/*func_3614*/;
			break;
		case 67:
			uParam0->f_21 = 1207341/*func_3610*/;
			break;
		case 68:
			*uParam0 = 1206796/*func_3609*/;
			break;
		case 69:
			*uParam0 = 1206787/*func_3608*/;
			break;
		case 70:
			uParam0->f_48 = 1206775/*func_3607*/;
			break;
		case 71:
			uParam0->f_49 = 1206766/*func_3606*/;
			break;
		case 107:
			uParam0->f_50 = 1206754/*func_3605*/;
			break;
		case 80:
			uParam0->f_7 = 1205038/*func_3595*/;
			break;
		case 78:
			uParam0->f_59 = 1204588/*func_3592*/;
			break;
		case 125:
			uParam0->f_19 = 1204572/*func_3591*/;
			break;
	}
}

void func_3629(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x12770C
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar0 = func_3658();
	if ((func_3721(iParam1) && !__LIB_3__::func_925(PLAYER::PLAYER_ID())) && PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
	{
		__LIB_25__::func_561(uParam0, 1);
		__LIB_3__::func_307(0);
	}
	if (__LIB_7__::func_556(iVar0))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_25__::func_562(uParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !func_3721(iParam1))
		{
		}
		else if (!__LIB_3__::func_998(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
		{
			__LIB_25__::func_561(uParam0, 1);
			__LIB_3__::func_307(0);
		}
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false);
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("deluxo") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("oppressor2"))
				{
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(iVar1, 0f);
				}
			}
		}
	}
	if ((__LIB_3__::func_326(PLAYER::PLAYER_ID()) || __LIB_3__::func_325(PLAYER::PLAYER_ID())) && func_3647(iParam1))
	{
		if (!__LIB_4__::func_658())
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			__LIB_3__::func_324(0);
			__LIB_3__::func_323(0);
			__LIB_3__::func_309(0);
			__LIB_3__::func_322(0);
			CAM::DO_SCREEN_FADE_IN(500);
			if (__LIB_2__::func_560())
			{
				__LIB_3__::func_321(1);
			}
			__LIB_3__::func_320(0);
			__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
			__LIB_3__::func_319(0);
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
			}
			__LIB_3__::func_320(0);
		}
	}
	if (__LIB_0__::func_618())
	{
		if (Global_1946250.f_523)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
		}
	}
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (Global_1853190 != __LIB_0__::func_160())
		{
			if (PLAYER::PLAYER_ID() == Global_1853190)
			{
				if (__LIB_1__::func_237(PLAYER::PLAYER_ID()))
				{
					if (((__LIB_3__::func_283(PLAYER::PLAYER_ID()) || __LIB_3__::func_233()) || __LIB_3__::func_232()) || Global_1957730)
					{
						__LIB_8__::func_611(1);
					}
				}
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_2__::func_278(uParam0->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_6__::func_404(&(uParam0->f_22.f_94));
			}
		}
		if (!__LIB_3__::func_925(PLAYER::PLAYER_ID()))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (!__LIB_1__::func_237(__LIB_4__::func_925(iVar0, 1, 0)))
				{
					__LIB_32__::func_41(uParam0, iVar0);
				}
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) != -1 && __LIB_3__::func_325(PLAYER::PLAYER_ID()))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				bVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
				if (__LIB_1__::func_264(bVar3, 1, 1))
				{
					if (__LIB_3__::func_311(bVar3))
					{
						if (func_3721(iParam1) && !__LIB_3__::func_925(PLAYER::PLAYER_ID()))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							__LIB_3__::func_319(0);
							__LIB_3__::func_320(0);
							__LIB_3__::func_321(1);
						}
					}
				}
			}
		}
	}
	if (__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		HUD::DISABLE_FRONTEND_THIS_FRAME();
	}
	__LIB_18__::func_584();
	if (!__LIB_4__::func_715() || __LIB_0__::func_706())
	{
		__LIB_3__::func_272(0);
	}
}

int func_3647(int iParam0)//Position - 0x12831B
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_3721(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (Global_1946250.f_3630 != __LIB_0__::func_160())
				{
					if (((!__LIB_3__::func_998(Global_1946250.f_3630) && !__LIB_3__::func_859(Global_1946250.f_3630)) && !BitTest(Global_2689235[Global_1946250.f_3630 /*453*/].f_318, 5)) && !__LIB_3__::func_311(Global_1946250.f_3630))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_3658()//Position - 0x128AE0
{
	int iVar0;
	var uVar1;
	var uVar2[25];
	char* sVar3;
	int iVar4;
	int iVar5;
	var uVar6[25];
	int iVar7;
	int iVar8;
	var uVar9[25];
	int iVar10;
	int iVar11;
	if ((Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_16 != -1 && __LIB_4__::func_735(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_16) == 9)
	{
		return -1;
	}
	if (__LIB_3__::func_930(PLAYER::PLAYER_ID()) && !__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_3__::func_325(PLAYER::PLAYER_ID()) && __LIB_1__::func_237(Global_1853191))
		{
			iVar4 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar2);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar2[iVar0]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar2[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar2[iVar0], false))
					{
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Avenger", 3))
						{
							if (__LIB_1__::func_580(uVar2[iVar0], 1))
							{
								sVar3 = ENTITY::GET_ENTITY_SCRIPT(uVar2[iVar0], &uVar1);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
								{
									if (MISC::ARE_STRINGS_EQUAL(sVar3, "am_mp_defunct_base"))
									{
										if (__LIB_1__::func_264(Global_1853191, 1, 1))
										{
											if (__LIB_4__::func_925(uVar2[iVar0], 1, 0) == Global_1853191)
											{
												return uVar2[iVar0];
											}
										}
									}
								}
							}
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_582())
		{
			iVar7 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar6);
			iVar5 = 0;
			while (iVar5 < iVar7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar6[iVar5]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar6[iVar5]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar6[iVar5], false))
					{
						if (VEHICLE::IS_VEHICLE_MODEL(uVar6[iVar5], __LIB_3__::func_328()))
						{
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Avenger", 3))
							{
								if (__LIB_1__::func_580(uVar6[iVar5], 1))
								{
									if (__LIB_1__::func_264(__LIB_0__::func_582(), 1, 1))
									{
										if (__LIB_4__::func_925(uVar6[iVar5], 1, 0) == __LIB_0__::func_582())
										{
											return uVar6[iVar5];
										}
									}
								}
							}
						}
					}
				}
				iVar5++;
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_3__::func_325(PLAYER::PLAYER_ID()))
		{
			if (__LIB_3__::func_930(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1640744))
				{
					Global_2815059.f_293 = Global_1640744;
					return Global_1640744;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_293))
			{
				iVar10 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar9);
				iVar8 = 0;
				while (iVar8 < iVar10)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar9[iVar8]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar9[iVar8]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uVar9[iVar8], false))
						{
							if (VEHICLE::IS_VEHICLE_MODEL(uVar9[iVar8], __LIB_3__::func_328()))
							{
								if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Avenger", 3))
								{
									if (__LIB_1__::func_580(uVar9[iVar8], 1))
									{
										if (__LIB_1__::func_264(Global_1946250.f_3630, 1, 1))
										{
											if (__LIB_4__::func_925(uVar9[iVar8], 1, 0) == Global_1946250.f_3630)
											{
												Global_2815059.f_293 = uVar9[iVar8];
												return uVar9[iVar8];
											}
										}
									}
								}
							}
						}
					}
					iVar8++;
				}
			}
			else
			{
				return Global_2815059.f_293;
			}
		}
	}
	else if (__LIB_3__::func_325(PLAYER::PLAYER_ID()))
	{
		__LIB_3__::func_322(0);
	}
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 1))
	{
		iVar11 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
		if (iVar11 != __LIB_0__::func_160() && __LIB_3__::func_330(iVar11))
		{
			return __LIB_3__::func_329(iVar11);
		}
	}
	return Global_2815059.f_308;
}

Vector3 func_3661(var uParam0)//Position - 0x128E73
{
	int iVar0;
	iVar0 = func_3658();
	if (Global_1853190 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_237(Global_1853190))
		{
			return 487.6422f, 4792.5854f, -59.3939f;
		}
		else if (Global_1853190 != PLAYER::PLAYER_ID())
		{
			return Global_2689235[Global_1853190 /*453*/].f_318.f_18;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			return ENTITY::GET_ENTITY_COORDS(iVar0, true);
		}
		else
		{
			return Global_2689235[Global_1853190 /*453*/].f_318.f_18;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return ENTITY::GET_ENTITY_COORDS(iVar0, true);
	}
	else if (__LIB_4__::func_925(iVar0, 1, 0) != __LIB_0__::func_160())
	{
		return Global_2689235[__LIB_4__::func_925(iVar0, 1, 0) /*453*/].f_318.f_18;
	}
	return 0f, 0f, 0f;
}

void func_3682(int iParam0, int iParam1)//Position - 0x1297AF
{
	int iVar0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = __LIB_0__::func_160();
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_8 = 0;
	Global_1946250.f_506 = 0;
	iVar0 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
	if (((__LIB_3__::func_286() && Global_1853191 != __LIB_0__::func_160()) && Global_1853191 != PLAYER::PLAYER_ID()) && !__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		if (Global_1946250.f_3280 != PLAYER::PLAYER_ID())
		{
			if (Global_1946250.f_3280 != -1)
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 5);
				Global_1853190 = Global_1853191;
			}
			else
			{
				if (Global_1946250.f_3280 == -1)
				{
					__LIB_2__::func_452(Global_1853191);
				}
				Global_1853190 = Global_1853191;
			}
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853190;
		}
	}
	else if ((Global_1946250.f_3280 != -1 && Global_1946250.f_3280 != PLAYER::PLAYER_ID()) && !__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		__LIB_19__::func_61(iVar0, 1);
		MISC::SET_BIT(&(Global_1946250.f_506), 5);
		Global_1853190 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853190;
	}
	else if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0) && !__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		__LIB_19__::func_61(iVar0, 0);
		if (iVar0 != __LIB_0__::func_160())
		{
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = iVar0;
		}
	}
	else if (__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		__LIB_19__::func_61(iVar0, 1);
		MISC::SET_BIT(&(Global_1946250.f_506), 5);
		Global_1853190 = Global_1946250.f_3630;
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1946250.f_3630;
	}
	else if (__LIB_3__::func_330(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == __LIB_4__::func_925(func_3658(), 1, 0))
	{
		Global_1853190 = PLAYER::PLAYER_ID();
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_18__::func_179(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
			{
				__LIB_3__::func_335(PLAYER::PLAYER_ID(), 88, 3);
			}
			else if (__LIB_0__::func_657(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
			{
				__LIB_4__::func_692(PLAYER::PLAYER_ID(), 88, 3);
			}
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
		MISC::SET_BIT(&(Global_1946250.f_506), 31);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853190;
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__::func_160())
	{
		Global_1946250.f_3636 = __LIB_1__::func_243(__LIB_1__::func_244(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9));
	}
	__LIB_7__::func_369();
}

void func_3692(int iParam0, int iParam1)//Position - 0x129EEE
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_4__::func_981(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_697(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_697(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						func_3682(iParam0, -1);
					}
					bVar9 = __LIB_3__::func_339(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						func_3682(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							func_3694(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3693(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							func_3694(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3693(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_3693(int iParam0)//Position - 0x12A181
{
	func_3682(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3694(int iParam0)//Position - 0x12A1AF
{
	int iVar0;
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || iParam0)
	{
		iVar0 = func_3658();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if ((__LIB_4__::func_925(iVar0, 1, 0) == PLAYER::PLAYER_ID() && !__LIB_1__::func_237(PLAYER::PLAYER_ID())) && !__LIB_3__::func_931())
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_18 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 2f, -17f, 0f) };
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_24 = ENTITY::GET_ENTITY_HEADING(iVar0);
			}
		}
	}
}

int func_3705(var uParam0, var uParam1, var uParam2)//Position - 0x12A693
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	*uParam2 = 1;
	if (Global_262145.f_23133 /* Tunable: 200197103 */)
	{
		return 0;
	}
	iVar0 = func_3658();
	if (__LIB_3__::func_233() || __LIB_3__::func_232())
	{
		return 0;
	}
	if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
	{
		if (__LIB_0__::func_1("HELP_APC_TUR" /* GXT: Hold ~INPUT_VEH_SHUFFLE~ to move between the passenger turret and the driver seat while stationary. */))
		{
			return 0;
		}
		if (__LIB_4__::func_925(iVar0, 1, 0) != PLAYER::PLAYER_ID())
		{
			return 0;
		}
	}
	if ((!__LIB_4__::func_715() || __LIB_2__::func_368()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_25__::func_561(uParam1, 1);
		__LIB_3__::func_307(0);
	}
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_6__::func_404(&(uParam1->f_22.f_94));
			}
			__LIB_25__::func_561(uParam1, 1);
			__LIB_3__::func_307(0);
		}
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (((__LIB_7__::func_556(iVar0) && __LIB_3__::func_464(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -1f, 0f))) || __LIB_3__::func_930(PLAYER::PLAYER_ID())) || __LIB_3__::func_285())
					{
						if (!func_3721(*uParam0) && __LIB_25__::func_562(uParam1, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 0))
						{
							if (MISC::IS_PC_VERSION())
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("voltic2")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor")))
									{
										if ((__LIB_2__::func_278(uParam1->f_22.f_94, 0) || __LIB_2__::func_161("GR_ENTERAOC" /* GXT: Press ~a~ to enter your Avenger with this vehicle. */, "STRING")) || __LIB_2__::func_161("BASE_MOD_ENTER" /* GXT: ~a~ Access the Facility Vehicle Workshop. ~n~ ~INPUT_CONTEXT_SECONDARY~ Enter your Avenger with this vehicle. */, "STRING"))
										{
											PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
										}
									}
								}
							}
							__LIB_3__::func_345(1);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
							if (!__LIB_3__::func_311(PLAYER::PLAYER_ID()))
							{
								if (__LIB_1__::func_177(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										__LIB_0__::func_151("GAN_ETFE_AIR" /* GXT: You cannot modify this aircraft in your Avenger. */, -1);
									}
									return 0;
								}
								if (__LIB_3__::func_930(PLAYER::PLAYER_ID()))
								{
									bVar1 = true;
								}
								if (!bVar1)
								{
									sVar2 = "GR_ENTERAOC" /* GXT: Press ~a~ to enter your Avenger with this vehicle. */;
								}
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
								if (!bVar1)
								{
									if (uParam1->f_22.f_94 == -1 && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
									{
										__LIB_7__::func_508(&(uParam1->f_22.f_94), 5, sVar2, 0, 0, 0, 0);
									}
									if (__LIB_0__::func_77(0))
									{
										__LIB_6__::func_404(&(uParam1->f_22.f_94));
									}
								}
								if (((!bVar1 && __LIB_2__::func_187(uParam1->f_22.f_94, 1)) || ((bVar1 && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 52 /*INPUT_CONTEXT_SECONDARY*/)) && !HUD::IS_WARNING_MESSAGE_ACTIVE())) || BitTest(uParam1->f_22, 1))
								{
									__LIB_25__::func_561(uParam1, 0);
									__LIB_3__::func_344(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 25f, 0);
									__LIB_6__::func_404(&(uParam1->f_22.f_94));
									if (BitTest(uParam1->f_22, 1))
									{
										MISC::CLEAR_BIT(&(uParam1->f_22), 1);
									}
									if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
									{
										__LIB_4__::func_736(1, 1);
										MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 19);
									}
									if (!__LIB_3__::func_930(PLAYER::PLAYER_ID()))
									{
										__LIB_3__::func_343(1);
									}
									__LIB_7__::func_375(1, 88);
									__LIB_3__::func_307(1);
								}
							}
							else
							{
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, true);
								__LIB_8__::func_611(0);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
								PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
								PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
								PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
								HUD::DISABLE_FRONTEND_THIS_FRAME();
								HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
								VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1f, 1, false);
								if (__LIB_4__::func_32() && __LIB_7__::func_560())
								{
									if (__LIB_3__::func_930(PLAYER::PLAYER_ID()))
									{
										__LIB_3__::func_308(1);
									}
									if (__LIB_18__::func_179(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
									{
										__LIB_3__::func_335(PLAYER::PLAYER_ID(), 88, 3);
									}
									else if (__LIB_0__::func_657(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
									{
										__LIB_4__::func_692(PLAYER::PLAYER_ID(), 88, 3);
									}
									if (!__LIB_3__::func_285())
									{
										__LIB_7__::func_394(1);
										__LIB_3__::func_934(88, uParam1, 0, 0);
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
										__LIB_18__::func_904(1);
										__LIB_3__::func_344(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 25f, 0);
										__LIB_3__::func_345(0);
										__LIB_7__::func_375(1, 88);
										return 1;
									}
									else if (!__LIB_2__::func_560())
									{
										__LIB_3__::func_324(1);
										__LIB_3__::func_323(1);
										__LIB_18__::func_904(1);
										__LIB_7__::func_375(1, 88);
										return 1;
									}
								}
								else
								{
									if (!__LIB_4__::func_32())
									{
									}
									if (!__LIB_7__::func_560())
									{
									}
								}
							}
						}
						else if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_6__::func_404(&(uParam1->f_22.f_94));
						}
					}
					else
					{
						__LIB_3__::func_345(0);
						if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_6__::func_404(&(uParam1->f_22.f_94));
						}
						__LIB_25__::func_561(uParam1, 1);
						__LIB_3__::func_307(0);
					}
				}
				else
				{
					if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
					{
						if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_6__::func_404(&(uParam1->f_22.f_94));
						}
					}
					__LIB_25__::func_561(uParam1, 1);
					__LIB_3__::func_307(0);
				}
			}
			else
			{
				func_3706(*uParam0);
				if (__LIB_3__::func_186(PLAYER::PLAYER_ID()))
				{
					if (!__LIB_0__::func_649(&(uParam1->f_22.f_101)))
					{
						__LIB_0__::func_580(&(uParam1->f_22.f_101), 0, 0);
					}
					if (__LIB_1__::func_264(Global_1946250.f_3630, 1, 1))
					{
					}
					if (!__LIB_4__::func_735(Global_1946250.f_3630) && __LIB_3__::func_925(Global_1946250.f_3630))
					{
						if (__LIB_0__::func_649(&(uParam1->f_22.f_101)))
						{
							if (__LIB_2__::func_47(&(uParam1->f_22.f_101), 15000, 0) && CAM::IS_SCREEN_FADING_OUT())
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
								}
								if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
								{
									NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
								}
								CAM::DO_SCREEN_FADE_IN(500);
								__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
								__LIB_3__::func_320(0);
								__LIB_3__::func_322(0);
								__LIB_3__::func_319(0);
								__LIB_0__::func_579(&(uParam1->f_22.f_101));
							}
						}
					}
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
					__LIB_8__::func_611(0);
					__LIB_2__::func_452(Global_1946250.f_3630);
					MISC::SET_BIT(&(Global_1946250.f_506), 5);
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
					__LIB_3__::func_343(1);
					__LIB_7__::func_375(1, 88);
					__LIB_3__::func_307(1);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
					Global_1853190 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
					__LIB_0__::func_579(&(uParam1->f_22.f_101));
					return 1;
				}
			}
		}
		else
		{
			if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_6__::func_404(&(uParam1->f_22.f_94));
			}
			__LIB_25__::func_561(uParam1, 1);
			__LIB_3__::func_307(0);
		}
	}
	else if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
	{
		HUD::CLEAR_HELP(true);
		__LIB_6__::func_404(&(uParam1->f_22.f_94));
	}
	if (((__LIB_0__::func_1("GR_ETFE_NOTV" /* GXT: You cannot modify this vehicle in your Mobile Operations Center. */) || __LIB_0__::func_1("GR_ETFE_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFS_TRAIL" /* GXT: You cannot store this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFA_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. The Anti-Aircraft Trailer can only be modified in the Bunker. */))
	{
		HUD::CLEAR_HELP(true);
	}
	return 0;
}

void func_3706(int iParam0)//Position - 0x12ADBC
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_3__::func_325(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_1__::func_183(iVar0))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
							if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(bVar2, 1, 1))
							{
								if ((__LIB_3__::func_311(bVar2) && __LIB_0__::func_170(__LIB_4__::func_2(bVar2)) == 8) || __LIB_3__::func_311(bVar2))
								{
									if (func_3647(iParam0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
										if (__LIB_3__::func_326(PLAYER::PLAYER_ID()))
										{
											if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
											{
												CAM::DO_SCREEN_FADE_IN(500);
											}
											__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
											__LIB_3__::func_320(0);
											__LIB_3__::func_322(0);
										}
									}
									else if (__LIB_4__::func_31())
									{
										if (CAM::IS_SCREEN_FADED_IN())
										{
											__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
											CAM::DO_SCREEN_FADE_OUT(500);
											__LIB_3__::func_320(1);
										}
										if (CAM::IS_SCREEN_FADED_OUT())
										{
											if (__LIB_3__::func_930(PLAYER::PLAYER_ID()))
											{
												__LIB_3__::func_309(1);
												__LIB_3__::func_324(1);
												__LIB_3__::func_308(1);
												__LIB_3__::func_323(1);
											}
											if (VEHICLE::IS_TURRET_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0)) || (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("hakuchou2")) && __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) != -1))
											{
												TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
											}
											PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
											__LIB_3__::func_319(1);
											__LIB_3__::func_320(0);
										}
									}
									else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("halftrack")))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
										}
										else
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
										if (BitTest(Global_1946250.f_1, 17))
										{
											MISC::CLEAR_BIT(&(Global_1946250.f_1), 17);
										}
										__LIB_3__::func_322(0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_3721(int iParam0)//Position - 0x12B36F
{
	int iVar0;
	bool bVar1;
	if (__LIB_3__::func_165() || __LIB_3__::func_164(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	bVar1 = false;
	iVar0 = func_3658();
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_3__::func_165()) || __LIB_3__::func_334())
	{
		if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_1__::func_580(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1)) || __LIB_3__::func_165()) || __LIB_3__::func_334())
		{
			bVar1 = true;
		}
	}
	if (BitTest(Global_1946250.f_4523, 4) && !__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (((__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && !bVar1)
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if ((((ENTITY::GET_ENTITY_SPEED(iVar0) > 0.5f && !bVar1) && !__LIB_3__::func_186(PLAYER::PLAYER_ID())) && !__LIB_3__::func_311(PLAYER::PLAYER_ID())) && !__LIB_3__::func_326(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!ENTITY::IS_ENTITY_UPRIGHT(iVar0, 25f) && !bVar1)
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (ENTITY::IS_ENTITY_UPSIDEDOWN(iVar0) && !bVar1)
		{
			return 1;
		}
	}
	if (__LIB_2__::func_477())
	{
		return 1;
	}
	if (__LIB_0__::func_706())
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!__LIB_1__::func_237(__LIB_4__::func_925(iVar0, 1, 0)))
		{
			if ((((ENTITY::IS_ENTITY_IN_AIR(iVar0) && !bVar1) && !__LIB_3__::func_186(PLAYER::PLAYER_ID())) && !__LIB_3__::func_311(PLAYER::PLAYER_ID())) && !__LIB_3__::func_326(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
		{
			return 1;
		}
	}
	if (func_3742(iParam0, iVar0))
	{
		return 1;
	}
	if (func_3741(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3738(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3737(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3731(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3730(iParam0, iVar0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
		{
			if (!__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0)))
			{
			}
			else
			{
				__LIB_3__::func_347(1);
			}
		}
		else
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3727(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3726(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (__LIB_1__::func_154(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if ((NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_0__::func_740(PLAYER::PLAYER_ID()) || __LIB_7__::func_268(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 1;
	}
	if (func_3725(iParam0))
	{
		return 1;
	}
	if (__LIB_1__::func_174(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_233())
	{
		return 1;
	}
	if (__LIB_2__::func_509(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 == 8 && __LIB_1__::func_307()) && !__LIB_0__::func_494())
	{
		return 1;
	}
	if (__LIB_3__::func_185(__LIB_4__::func_925(iVar0, 1, 0)))
	{
		return 1;
	}
	if (__LIB_3__::func_338(__LIB_4__::func_925(iVar0, 1, 0)))
	{
		return 1;
	}
	if (__LIB_2__::func_745())
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (__LIB_3__::func_931())
	{
		return 1;
	}
	if (__LIB_0__::func_702(PLAYER::PLAYER_ID(), 21))
	{
		return 1;
	}
	if (__LIB_0__::func_702(PLAYER::PLAYER_ID(), 25))
	{
		return 1;
	}
	if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false)) && func_3723())
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (((((((((BitTest(Global_1946250, 19) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_186(PLAYER::PLAYER_ID())) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false)) && !__LIB_3__::func_930(PLAYER::PLAYER_ID())) && !__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_1__::func_237(__LIB_4__::func_925(iVar0, 1, 0)) && !__LIB_3__::func_930(PLAYER::PLAYER_ID()))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (((__LIB_3__::func_930(PLAYER::PLAYER_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(iVar0) || NETWORK::NETWORK_IS_ENTITY_FADING(iVar0))
		{
			return 1;
		}
	}
	if (__LIB_2__::func_161("BASE_ENTER" /* GXT: Press ~INPUT_CONTEXT~ to enter the Facility with current vehicle. */, "STRING"))
	{
		return 1;
	}
	if (Global_2787784)
	{
		return 1;
	}
	if (!__LIB_3__::func_930(PLAYER::PLAYER_ID()) && __LIB_2__::func_39(iVar0, 0))
	{
		return 1;
	}
	if (__LIB_3__::func_998(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_170(__LIB_4__::func_721(PLAYER::PLAYER_ID())) != 8)
		{
		}
	}
	if (__LIB_1__::func_205(PLAYER::PLAYER_ID()) == 5)
	{
		return 1;
	}
	if (__LIB_2__::func_509(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (__LIB_1__::func_909())
	{
		return 1;
	}
	if (__LIB_1__::func_302(23))
	{
		return 1;
	}
	if (__LIB_2__::func_104())
	{
		return 1;
	}
	__LIB_3__::func_347(0);
	return 0;
}

int func_3723()//Position - 0x12BAA1
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	iVar2 = func_3658();
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, false))
	{
		func_3724(88, &Var0);
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar2, 0f, -8f, -0.6f) };
		if (MISC::ABSF((Var0.f_2 - Var1.f_2)) > 5f)
		{
			return 1;
		}
	}
	return 0;
}

void func_3724(int iParam0, var uParam1)//Position - 0x12BAF9
{
	int iVar0;
	var uVar1;
	switch (iParam0)
	{
		case 88:
			iVar0 = func_3658();
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				*uParam1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -8f, -0.6f) };
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, &uVar1, false, false) && !ENTITY::IS_ENTITY_IN_AIR(iVar0))
				{
					*uParam1 = { *uParam1, uParam1->f_1, uVar1 };
				}
				else
				{
					*uParam1 = { *uParam1, uParam1->f_1, (uParam1->f_2 - 1.5f) };
				}
			}
			break;
	}
}

int func_3725(int iParam0)//Position - 0x12BB82
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	iVar0 = func_3658();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		func_3724(iParam0, &Var1);
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if (!__LIB_0__::func_78(Global_1310720.f_1445[iVar2 /*3*/], 0f, 0f, 0f, 0))
			{
				if (SYSTEM::VDIST2(Global_1310720.f_1445[iVar2 /*3*/], Var1) <= 225f)
				{
					return 1;
				}
			}
			iVar2++;
		}
	}
	return 0;
}

int func_3726(int iParam0, int iParam1)//Position - 0x12BBFD
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3724(iParam0, &Var0);
		if (!__LIB_2__::func_710(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(-376.2393f, -1878.2488f, 19.5278f, Var0) <= 1600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3727(int iParam0, int iParam1)//Position - 0x12BC58
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3724(iParam0, &Var0);
		if (SYSTEM::VDIST2(__LIB_3__::func_82(__LIB_6__::func_932(__LIB_4__::func_925(iParam1, 1, 0))), Var0) <= 3600f || SYSTEM::VDIST2(__LIB_3__::func_81(__LIB_6__::func_932(__LIB_4__::func_925(iParam1, 1, 0))), Var0) <= 3600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3730(int iParam0, int iParam1)//Position - 0x12BEEA
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3724(iParam0, &Var0);
		if (!__LIB_1__::func_233(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(__LIB_3__::func_77(__LIB_6__::func_933(__LIB_4__::func_925(iParam1, 1, 0))), Var0) <= 3600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3731(int iParam0, int iParam1)//Position - 0x12BF46
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3724(iParam0, &Var0);
		if (!__LIB_1__::func_247(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Var0, __LIB_3__::func_83(__LIB_7__::func_561(__LIB_4__::func_925(iParam1, 1, 0)))) <= 1600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3737(int iParam0, int iParam1)//Position - 0x12C0FC
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3724(iParam0, &Var0);
		if ((((SYSTEM::VDIST2(759.36f, -675.13f, 27.86f, Var0) <= 900f || SYSTEM::VDIST2(-144.58f, -1341.37f, 28.87f, Var0) <= 900f) || SYSTEM::VDIST2(-171f, -31.4f, 51.27f, Var0) <= 900f) || SYSTEM::VDIST2(231.54f, -1875.7f, 25.41f, Var0) <= 900f) || SYSTEM::VDIST2(488.98f, -897.41f, 24.79f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3738(int iParam0, int iParam1)//Position - 0x12C1D3
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3724(iParam0, &Var0);
		if (((((SYSTEM::VDIST2(-237.12f, 6228.7554f, 30.5005f, Var0) <= 900f || SYSTEM::VDIST2(1710.83f, 4760.13f, 41.0504f, Var0) <= 900f) || SYSTEM::VDIST2(-105.19f, -1778.3f, 28.51f, Var0) <= 900f) || SYSTEM::VDIST2(-617.7421f, 285.8363f, 80.6871f, Var0) <= 900f) || SYSTEM::VDIST2(-1287.1135f, -278.0045f, 37.5935f, Var0) <= 900f) || SYSTEM::VDIST2(726.7626f, -822.4685f, 23.8603f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3741(int iParam0, int iParam1)//Position - 0x12C335
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3724(iParam0, &Var0);
		if (((((((((SYSTEM::VDIST2(931.99f, 43.83f, 80.1f, Var0) <= 900f || SYSTEM::VDIST2(930.45f, 41.36f, 80.1f, Var0) <= 900f) || SYSTEM::VDIST2(964.4556f, 57.9093f, 112.1931f, Var0) <= 900f) || SYSTEM::VDIST2(926.4164f, 45.5401f, 59.9018f, Var0) <= 900f) || SYSTEM::VDIST2(936.3319f, 1.1849f, 77.7649f, Var0) <= 900f) || SYSTEM::VDIST2(968.591f, 63.923855f, 111.55298f, Var0) <= 900f) || SYSTEM::VDIST2(967.22f, 62.69f, 111.5531f, Var0) <= 900f) || SYSTEM::VDIST2(936.5542f, 1.1273f, 77.7649f, Var0) <= 900f) || SYSTEM::VDIST2(925.04f, 46.48f, 80.096f, Var0) <= 900f) || SYSTEM::VDIST2(924.507f, 60.3318f, 79.89629f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3742(int iParam0, int iParam1)//Position - 0x12C4BB
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3724(iParam0, &Var0);
		if (!__LIB_3__::func_932(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Var0, __LIB_3__::func_84(__LIB_5__::func_702(__LIB_4__::func_925(iParam1, 1, 0)))) <= 1600f)
		{
			return 1;
		}
	}
	return 0;
}

void func_3751(int iParam0, int iParam1, var uParam2)//Position - 0x12C770
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = func_3658();
	switch (iParam1)
	{
		case 0:
			func_3724(iParam0, &(uParam2->f_4));
			uParam2->f_7 = { 1f, 1f, 2f };
			MISC::SET_BIT(&(uParam2->f_3), 4);
			MISC::SET_BIT(&(uParam2->f_3), 1);
			MISC::SET_BIT(&(uParam2->f_3), 5);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(iVar1) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar1, true))
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				__LIB_2__::func_749(iParam0, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
				uParam2->f_18 = 0;
			}
			else
			{
				__LIB_2__::func_749(iParam0, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
			}
			break;
		case 1:
			func_3752(iParam0, &(uParam2->f_4), &(uParam2->f_7), &(uParam2->f_10), &(uParam2->f_13), &(uParam2->f_14));
			uParam2->f_2 = 1;
			MISC::SET_BIT(&(uParam2->f_3), 0);
			MISC::SET_BIT(&(uParam2->f_3), 2);
			MISC::SET_BIT(&(uParam2->f_3), 5);
			break;
	}
}

void func_3752(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x12C86E
{
	int iVar0;
	var uVar1;
	iVar0 = func_3658();
	switch (iParam0)
	{
		case 88:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == __LIB_3__::func_328())
				{
					*uParam1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -5f, 0f) };
					*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, ENTITY::GET_ENTITY_HEADING(iVar0), 0f, 6f, -1.5f) };
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam2, &uVar1, false, false))
					{
						*uParam2 = { *uParam2, uParam2->f_1, uVar1 };
					}
					*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -6f, 2.5f) };
					*uParam4 = 1f;
					*uParam5 = ENTITY::GET_ENTITY_HEADING(iVar0);
				}
			}
			break;
	}
}

void func_3764(var uParam0, int iParam1)//Position - 0x12CC09
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1284374/*func_3931*/;
			break;
		case 1:
			uParam0->f_30 = 1284294/*func_3930*/;
			break;
		case 2:
			uParam0->f_31 = 1283795/*func_3929*/;
			break;
		case 3:
			uParam0->f_34 = 1283745/*func_3928*/;
			break;
		case 4:
			uParam0->f_12 = 1283658/*func_3927*/;
			break;
		case 5:
			uParam0->f_11 = 1283648/*func_3926*/;
			break;
		case 37:
			uParam0->f_18 = 1283528/*func_3925*/;
			break;
		case 38:
			uParam0->f_9 = 1283406/*func_3924*/;
			break;
		case 6:
			uParam0->f_32 = 1283318/*func_3923*/;
			break;
		case 111:
			uParam0->f_35 = 1283304/*func_3922*/;
			break;
		case 11:
			uParam0->f_11 = 1283295/*func_3921*/;
			break;
		case 12:
			uParam0->f_33 = 1282916/*func_3918*/;
			break;
		case 14:
			uParam0->f_11 = 1282907/*func_3917*/;
			break;
		case 109:
			uParam0->f_56 = 1282899/*func_3916*/;
			break;
		case 79:
			*uParam0 = 1282875/*func_3915*/;
			break;
		case 13:
			uParam0->f_2 = 1282743/*func_3914*/;
			break;
		case 15:
			uParam0->f_2 = 1282461/*func_3912*/;
			break;
		case 75:
			uParam0->f_4 = 1282447/*func_3911*/;
			break;
		case 16:
			uParam0->f_5 = 1281929/*func_3909*/;
			break;
		case 108:
			uParam0->f_55 = 1278305/*func_3897*/;
			break;
		case 17:
			uParam0->f_17 = 1277767/*func_3895*/;
			break;
		case 19:
			uParam0->f_17 = 1277740/*func_3894*/;
			break;
		case 20:
			uParam0->f_3 = 1277656/*func_3893*/;
			break;
		case 21:
			uParam0->f_3 = 1277592/*func_3892*/;
			break;
		case 74:
			uParam0->f_53 = 1277412/*func_3891*/;
			break;
		case 22:
			uParam0->f_24 = 1277269/*func_3890*/;
			break;
		case 25:
			uParam0->f_23 = 1276645/*func_3888*/;
			break;
		case 30:
			uParam0->f_8 = 1276130/*func_3886*/;
			break;
		case 31:
			uParam0->f_39 = 1275843/*func_3885*/;
			break;
		case 33:
			uParam0->f_40 = 1275172/*func_3883*/;
			break;
		case 34:
			uParam0->f_41 = 1273908/*func_3882*/;
			break;
		case 36:
			uParam0->f_58 = 1273863/*func_3881*/;
			break;
		case 35:
			uParam0->f_42 = 1247820/*func_3873*/;
			break;
		case 45:
			uParam0->f_14 = 1247811/*func_3872*/;
			break;
		case 46:
			uParam0->f_14 = 1247802/*func_3871*/;
			break;
		case 110:
			uParam0->f_57 = 1247794/*func_3870*/;
			break;
		case 77:
			uParam0->f_13 = 1247771/*func_3869*/;
			break;
		case 47:
			uParam0->f_43 = 1247667/*func_3868*/;
			break;
		case 49:
			uParam0->f_8 = 1247626/*func_3867*/;
			break;
		case 50:
			*uParam0 = 1247412/*func_3864*/;
			break;
		case 51:
			*uParam0 = 1247343/*func_3863*/;
			break;
		case 52:
			uParam0->f_15 = 1247332/*func_3862*/;
			break;
		case 53:
			uParam0->f_13 = 1247194/*func_3861*/;
			break;
		case 54:
			uParam0->f_45 = 1247006/*func_3860*/;
			break;
		case 56:
			uParam0->f_46 = 1246997/*func_3859*/;
			break;
		case 57:
			uParam0->f_11 = 1246820/*func_3857*/;
			break;
		case 58:
			uParam0->f_13 = 1246682/*func_3856*/;
			break;
		case 64:
			uParam0->f_47 = 1246674/*func_3855*/;
			break;
		case 65:
			uParam0->f_21 = 1245838/*func_3853*/;
			break;
		case 66:
			uParam0->f_21 = 1245731/*func_3852*/;
			break;
		case 67:
			uParam0->f_21 = 1245667/*func_3851*/;
			break;
		case 68:
			*uParam0 = 1245178/*func_3850*/;
			break;
		case 69:
			*uParam0 = 1245169/*func_3849*/;
			break;
		case 70:
			uParam0->f_48 = 1245157/*func_3848*/;
			break;
		case 71:
			uParam0->f_49 = 1245148/*func_3847*/;
			break;
		case 107:
			uParam0->f_50 = 1245136/*func_3846*/;
			break;
		case 80:
			uParam0->f_7 = 1244433/*func_3842*/;
			break;
		case 84:
			uParam0->f_1 = 1244333/*func_3840*/;
			break;
		case 85:
			uParam0->f_1 = 1242349/*func_3837*/;
			break;
		case 87:
			uParam0->f_1 = 1239926/*func_3825*/;
			break;
		case 88:
			uParam0->f_1 = 1239917/*func_3824*/;
			break;
		case 96:
			uParam0->f_1 = 1239854/*func_3823*/;
			break;
		case 97:
			uParam0->f_1 = 1239532/*func_3820*/;
			break;
		case 98:
			uParam0->f_1 = 1235525/*func_3786*/;
			break;
		case 100:
			uParam0->f_22 = 1233249/*func_3768*/;
			break;
		case 78:
			uParam0->f_59 = 1233045/*func_3766*/;
			break;
		case 125:
			uParam0->f_19 = 1233029/*func_3765*/;
			break;
	}
}

int func_3786(int iParam0, int* iParam1)//Position - 0x12DA45
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	__LIB_25__::func_129(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		func_483(&iVar0, &(iParam1->f_109), 12);
		__LIB_7__::func_568(iParam0, &(iParam1->f_109));
	}
	__LIB_31__::func_964(iParam0, Global_1853189, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
	{
		OBJECT::DELETE_OBJECT(&(iParam1->f_176[3]));
	}
	Var1 = { __LIB_3__::func_936(iParam0) };
	STREAMING::SET_FOCUS_POS_AND_VEL(Var1, 0f, 0f, 0f);
	fVar2 = 2f;
	__LIB_7__::func_665(iParam0, &(iParam1->f_176[1]), &(iParam1->f_176[2]), &fVar2);
	__LIB_7__::func_449(iParam1, 0);
	iParam1->f_188 = 0;
	return 1;
}

int func_3837(int iParam0, int* iParam1)//Position - 0x12F4ED
{
	int iVar0;
	bool bVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			func_483(&iVar0, &(iParam1->f_109), 60);
			__LIB_2__::func_416(&(iParam1->f_109));
			return 0;
		}
		else
		{
			func_477(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 0, 0, 0, 0, 1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_1542(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
	}
	bVar1 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
	{
		bVar1 = __LIB_3__::func_390(iParam0, &(iParam1->f_109));
	}
	__LIB_25__::func_130(iParam0, &(Global_1946250.f_3638), 0, bVar1);
	__LIB_31__::func_964(iParam0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	__LIB_7__::func_449(iParam1, 0);
	return 1;
}

void func_3888(int iParam0, int iParam1)//Position - 0x137AE5
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_4__::func_984(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar1 = __LIB_3__::func_808();
		}
		Var4 = { __LIB_3__::func_83(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !func_697(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if (((((!bVar3 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !func_697(bVar7))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_2__::func_560())
					{
						__LIB_25__::func_309(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_309(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_3889(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3889(iParam0);
					}
					Jump @575; //curOff = 556
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_3889(int iParam0)//Position - 0x137D27
{
	__LIB_25__::func_309(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3932(var uParam0, int iParam1)//Position - 0x13991F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1293888/*func_3996*/;
			break;
		case 1:
			uParam0->f_30 = 1293832/*func_3995*/;
			break;
		case 2:
			uParam0->f_31 = 1293613/*func_3994*/;
			break;
		case 3:
			uParam0->f_34 = 1293562/*func_3993*/;
			break;
		case 4:
			uParam0->f_12 = 1293529/*func_3992*/;
			break;
		case 6:
			uParam0->f_32 = 1293465/*func_3991*/;
			break;
		case 111:
			uParam0->f_35 = 1293456/*func_3990*/;
			break;
		case 79:
			*uParam0 = 1293432/*func_3989*/;
			break;
		case 11:
			uParam0->f_11 = 1293423/*func_3988*/;
			break;
		case 12:
			uParam0->f_33 = 1293331/*func_3987*/;
			break;
		case 14:
			uParam0->f_11 = 1293322/*func_3986*/;
			break;
		case 109:
			uParam0->f_56 = 1293314/*func_3985*/;
			break;
		case 15:
			uParam0->f_2 = 1293062/*func_3984*/;
			break;
		case 13:
			uParam0->f_2 = 1293053/*func_3983*/;
			break;
		case 75:
			uParam0->f_4 = 1293044/*func_3982*/;
			break;
		case 16:
			uParam0->f_5 = 1293035/*func_3981*/;
			break;
		case 108:
			uParam0->f_55 = 1293026/*func_3980*/;
			break;
		case 17:
			uParam0->f_17 = 1292981/*func_3979*/;
			break;
		case 19:
			uParam0->f_17 = 1292969/*func_3978*/;
			break;
		case 20:
			uParam0->f_3 = 1292922/*func_3977*/;
			break;
		case 21:
			uParam0->f_3 = 1292870/*func_3976*/;
			break;
		case 74:
			uParam0->f_53 = 1292814/*func_3975*/;
			break;
		case 22:
			uParam0->f_24 = 1292732/*func_3974*/;
			break;
		case 25:
			uParam0->f_23 = 1291765/*func_3969*/;
			break;
		case 30:
			uParam0->f_8 = 1291460/*func_3967*/;
			break;
		case 31:
			uParam0->f_39 = 1291428/*func_3966*/;
			break;
		case 33:
			uParam0->f_40 = 1291238/*func_3965*/;
			break;
		case 34:
			uParam0->f_41 = 1287235/*func_3962*/;
			break;
		case 36:
			uParam0->f_58 = 1287182/*func_3961*/;
			break;
		case 35:
			uParam0->f_42 = 1285991/*func_3959*/;
			break;
		case 45:
			uParam0->f_14 = 1285982/*func_3958*/;
			break;
		case 46:
			uParam0->f_14 = 1285973/*func_3957*/;
			break;
		case 110:
			uParam0->f_57 = 1285965/*func_3956*/;
			break;
		case 77:
			uParam0->f_13 = 1285954/*func_3955*/;
			break;
		case 47:
			uParam0->f_43 = 1285851/*func_3954*/;
			break;
		case 49:
			uParam0->f_8 = 1285826/*func_3953*/;
			break;
		case 50:
			*uParam0 = 1285788/*func_3952*/;
			break;
		case 51:
			*uParam0 = 1285779/*func_3951*/;
			break;
		case 52:
			uParam0->f_15 = 1285768/*func_3950*/;
			break;
		case 53:
			uParam0->f_13 = 1285687/*func_3949*/;
			break;
		case 54:
			uParam0->f_45 = 1285679/*func_3948*/;
			break;
		case 56:
			uParam0->f_46 = 1285670/*func_3947*/;
			break;
		case 57:
			uParam0->f_11 = 1285660/*func_3946*/;
			break;
		case 58:
			uParam0->f_13 = 1285453/*func_3945*/;
			break;
		case 64:
			uParam0->f_47 = 1285445/*func_3944*/;
			break;
		case 65:
			uParam0->f_21 = 1285437/*func_3943*/;
			break;
		case 66:
			uParam0->f_21 = 1285429/*func_3942*/;
			break;
		case 67:
			uParam0->f_21 = 1285421/*func_3941*/;
			break;
		case 68:
			*uParam0 = 1285412/*func_3940*/;
			break;
		case 69:
			*uParam0 = 1285403/*func_3939*/;
			break;
		case 70:
			uParam0->f_48 = 1285391/*func_3938*/;
			break;
		case 71:
			uParam0->f_49 = 1285382/*func_3937*/;
			break;
		case 107:
			uParam0->f_50 = 1285370/*func_3936*/;
			break;
		case 80:
			uParam0->f_7 = 1285361/*func_3935*/;
			break;
		case 73:
			uParam0->f_51 = 1285352/*func_3934*/;
			break;
		case 78:
			uParam0->f_59 = 1285344/*func_3933*/;
			break;
	}
}

void func_3969(int iParam0, int iParam1)//Position - 0x13B5F5
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_18__::func_763(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		__LIB_6__::func_439(iParam0, &Var6);
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_2__::func_560())
					{
						__LIB_18__::func_762(iParam0, -1);
					}
					bVar9 = __LIB_3__::func_419(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_18__::func_762(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_6__::func_438(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_6__::func_137(), true), ENTITY::GET_ENTITY_HEADING(__LIB_6__::func_137()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3970(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_6__::func_438(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_6__::func_137(), true), ENTITY::GET_ENTITY_HEADING(__LIB_6__::func_137()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3970(iParam0);
					}
					Jump @634; //curOff = 615
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_3970(int iParam0)//Position - 0x13B872
{
	__LIB_18__::func_762(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3997(var uParam0, int iParam1)//Position - 0x13BE49
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1373468/*func_4162*/;
			break;
		case 1:
			uParam0->f_30 = 1373412/*func_4161*/;
			break;
		case 2:
			uParam0->f_31 = 1371867/*func_4160*/;
			break;
		case 3:
			uParam0->f_34 = 1371818/*func_4159*/;
			break;
		case 4:
			uParam0->f_12 = 1371785/*func_4158*/;
			break;
		case 6:
			uParam0->f_32 = 1371721/*func_4157*/;
			break;
		case 111:
			uParam0->f_35 = 1371698/*func_4156*/;
			break;
		case 79:
			*uParam0 = 1371674/*func_4155*/;
			break;
		case 37:
			uParam0->f_18 = 1371554/*func_4154*/;
			break;
		case 38:
			uParam0->f_9 = 1371487/*func_4153*/;
			break;
		case 11:
			uParam0->f_11 = 1371478/*func_4152*/;
			break;
		case 12:
			uParam0->f_33 = 1371133/*func_4150*/;
			break;
		case 14:
			uParam0->f_11 = 1371124/*func_4149*/;
			break;
		case 109:
			uParam0->f_56 = 1371116/*func_4148*/;
			break;
		case 15:
			uParam0->f_2 = 1365792/*func_4126*/;
			break;
		case 13:
			uParam0->f_2 = 1365783/*func_4125*/;
			break;
		case 75:
			uParam0->f_4 = 1365774/*func_4124*/;
			break;
		case 16:
			uParam0->f_5 = 1365749/*func_4123*/;
			break;
		case 108:
			uParam0->f_55 = 1357551/*func_4102*/;
			break;
		case 17:
			uParam0->f_17 = 1356967/*func_4101*/;
			break;
		case 19:
			uParam0->f_17 = 1356940/*func_4100*/;
			break;
		case 20:
			uParam0->f_3 = 1356879/*func_4099*/;
			break;
		case 21:
			uParam0->f_3 = 1356759/*func_4098*/;
			break;
		case 74:
			uParam0->f_53 = 1356703/*func_4097*/;
			break;
		case 22:
			uParam0->f_24 = 1356621/*func_4096*/;
			break;
		case 25:
			uParam0->f_23 = 1355649/*func_4091*/;
			break;
		case 30:
			uParam0->f_8 = 1354909/*func_4090*/;
			break;
		case 31:
			uParam0->f_39 = 1354638/*func_4089*/;
			break;
		case 33:
			uParam0->f_40 = 1353702/*func_4086*/;
			break;
		case 34:
			uParam0->f_41 = 1350358/*func_4085*/;
			break;
		case 36:
			uParam0->f_58 = 1350305/*func_4084*/;
			break;
		case 35:
			uParam0->f_42 = 1349622/*func_4082*/;
			break;
		case 45:
			uParam0->f_14 = 1349613/*func_4081*/;
			break;
		case 46:
			uParam0->f_14 = 1349604/*func_4080*/;
			break;
		case 110:
			uParam0->f_57 = 1349161/*func_4079*/;
			break;
		case 77:
			uParam0->f_13 = 1349150/*func_4078*/;
			break;
		case 47:
			uParam0->f_43 = 1349047/*func_4077*/;
			break;
		case 49:
			uParam0->f_8 = 1349022/*func_4076*/;
			break;
		case 50:
			*uParam0 = 1348984/*func_4075*/;
			break;
		case 51:
			*uParam0 = 1348960/*func_4074*/;
			break;
		case 52:
			uParam0->f_15 = 1348949/*func_4073*/;
			break;
		case 53:
			uParam0->f_13 = 1348870/*func_4072*/;
			break;
		case 54:
			uParam0->f_45 = 1348862/*func_4071*/;
			break;
		case 56:
			uParam0->f_46 = 1348853/*func_4070*/;
			break;
		case 57:
			uParam0->f_11 = 1348843/*func_4069*/;
			break;
		case 58:
			uParam0->f_13 = 1348614/*func_4068*/;
			break;
		case 64:
			uParam0->f_47 = 1302133/*func_4035*/;
			break;
		case 65:
			uParam0->f_21 = 1300995/*func_4032*/;
			break;
		case 66:
			uParam0->f_21 = 1300772/*func_4030*/;
			break;
		case 67:
			uParam0->f_21 = 1299877/*func_4026*/;
			break;
		case 68:
			*uParam0 = 1299332/*func_4025*/;
			break;
		case 69:
			*uParam0 = 1299323/*func_4024*/;
			break;
		case 70:
			uParam0->f_48 = 1299311/*func_4023*/;
			break;
		case 71:
			uParam0->f_49 = 1299302/*func_4022*/;
			break;
		case 107:
			uParam0->f_50 = 1299290/*func_4021*/;
			break;
		case 80:
			uParam0->f_7 = 1297196/*func_4012*/;
			break;
		case 73:
			uParam0->f_51 = 1295428/*func_4004*/;
			break;
		case 78:
			uParam0->f_59 = 1294895/*func_3998*/;
			break;
	}
}

void func_4091(int iParam0, int iParam1)//Position - 0x14AF81
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_25__::func_439(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_697(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_697(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						__LIB_25__::func_968(iParam0, -1);
					}
					bVar9 = __LIB_3__::func_419(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_968(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_617(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4092(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_617(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4092(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_4092(int iParam0)//Position - 0x14B214
{
	__LIB_25__::func_968(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4163(var uParam0, int iParam1)//Position - 0x14F525
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1409446/*func_4336*/;
			break;
		case 1:
			uParam0->f_30 = 1409330/*func_4335*/;
			break;
		case 2:
			uParam0->f_31 = 1408098/*func_4332*/;
			break;
		case 3:
			uParam0->f_34 = 1408028/*func_4331*/;
			break;
		case 4:
			uParam0->f_12 = 1407855/*func_4330*/;
			break;
		case 6:
			uParam0->f_32 = 1407731/*func_4329*/;
			break;
		case 106:
			uParam0->f_52 = 1407508/*func_4327*/;
			break;
		case 111:
			uParam0->f_35 = 1407494/*func_4326*/;
			break;
		case 79:
			*uParam0 = 1407470/*func_4325*/;
			break;
		case 37:
			uParam0->f_18 = 1407350/*func_4324*/;
			break;
		case 38:
			uParam0->f_9 = 1407112/*func_4321*/;
			break;
		case 11:
			uParam0->f_11 = 1407103/*func_4320*/;
			break;
		case 12:
			uParam0->f_33 = 1405399/*func_4318*/;
			break;
		case 14:
			uParam0->f_11 = 1405390/*func_4317*/;
			break;
		case 109:
			uParam0->f_56 = 1405382/*func_4316*/;
			break;
		case 15:
			uParam0->f_2 = 1404876/*func_4312*/;
			break;
		case 13:
			uParam0->f_2 = 1404837/*func_4311*/;
			break;
		case 44:
			*uParam0 = 1404828/*func_4310*/;
			break;
		case 75:
			uParam0->f_4 = 1404819/*func_4309*/;
			break;
		case 16:
			uParam0->f_5 = 1404351/*func_4304*/;
			break;
		case 108:
			uParam0->f_55 = 1402312/*func_4300*/;
			break;
		case 17:
			uParam0->f_17 = 1400176/*func_4292*/;
			break;
		case 19:
			uParam0->f_17 = 1400149/*func_4291*/;
			break;
		case 20:
			uParam0->f_3 = 1400065/*func_4290*/;
			break;
		case 21:
			uParam0->f_3 = 1399965/*func_4289*/;
			break;
		case 74:
			uParam0->f_53 = 1399798/*func_4288*/;
			break;
		case 22:
			uParam0->f_24 = 1399695/*func_4287*/;
			break;
		case 25:
			uParam0->f_23 = 1399043/*func_4285*/;
			break;
		case 30:
			uParam0->f_8 = 1398543/*func_4282*/;
			break;
		case 31:
			uParam0->f_39 = 1398248/*func_4281*/;
			break;
		case 33:
			uParam0->f_40 = 1397250/*func_4277*/;
			break;
		case 32:
			*uParam0 = 1397146/*func_4276*/;
			break;
		case 34:
			uParam0->f_41 = 1395001/*func_4275*/;
			break;
		case 35:
			uParam0->f_42 = 1307581/*func_4059*/;
			break;
		case 36:
			uParam0->f_58 = 1394941/*func_4274*/;
			break;
		case 45:
			uParam0->f_14 = 1394932/*func_4273*/;
			break;
		case 46:
			uParam0->f_14 = 1394923/*func_4272*/;
			break;
		case 110:
			uParam0->f_57 = 1394657/*func_4271*/;
			break;
		case 77:
			uParam0->f_13 = 1394646/*func_4270*/;
			break;
		case 47:
			uParam0->f_43 = 1394506/*func_4269*/;
			break;
		case 49:
			uParam0->f_8 = 1394465/*func_4268*/;
			break;
		case 50:
			*uParam0 = 1394268/*func_4265*/;
			break;
		case 51:
			*uParam0 = 1394184/*func_4264*/;
			break;
		case 52:
			uParam0->f_15 = 1394173/*func_4263*/;
			break;
		case 53:
			uParam0->f_13 = 1393891/*func_4262*/;
			break;
		case 54:
			uParam0->f_45 = 1393883/*func_4261*/;
			break;
		case 56:
			uParam0->f_46 = 1393874/*func_4260*/;
			break;
		case 57:
			uParam0->f_11 = 1393813/*func_4259*/;
			break;
		case 58:
			uParam0->f_13 = 1393531/*func_4258*/;
			break;
		case 64:
			uParam0->f_47 = 1391615/*func_4249*/;
			break;
		case 65:
			uParam0->f_21 = 1391572/*func_4248*/;
			break;
		case 66:
			uParam0->f_21 = 1390869/*func_4245*/;
			break;
		case 67:
			uParam0->f_21 = 1389785/*func_4237*/;
			break;
		case 68:
			*uParam0 = 1389194/*func_4235*/;
			break;
		case 69:
			*uParam0 = 1389185/*func_4234*/;
			break;
		case 70:
			uParam0->f_48 = 1389173/*func_4233*/;
			break;
		case 71:
			uParam0->f_49 = 1389164/*func_4232*/;
			break;
		case 107:
			uParam0->f_50 = 1389152/*func_4231*/;
			break;
		case 80:
			uParam0->f_7 = 1386478/*func_4219*/;
			break;
		case 84:
			uParam0->f_1 = 1384632/*func_4208*/;
			break;
		case 85:
			uParam0->f_1 = 1382298/*func_4202*/;
			break;
		case 87:
			uParam0->f_1 = 1378072/*func_4181*/;
			break;
		case 88:
			uParam0->f_1 = 1378063/*func_4180*/;
			break;
		case 90:
			uParam0->f_1 = 1378020/*func_4179*/;
			break;
		case 91:
			uParam0->f_1 = 1377719/*func_4177*/;
			break;
		case 92:
			uParam0->f_1 = 1376956/*func_4175*/;
			break;
		case 94:
			uParam0->f_1 = 1375459/*func_4174*/;
			break;
		case 102:
			uParam0->f_1 = 1374889/*func_4168*/;
			break;
		case 103:
			uParam0->f_22 = 1374881/*func_4167*/;
			break;
		case 104:
			uParam0->f_1 = 1374806/*func_4166*/;
			break;
		case 78:
			uParam0->f_59 = 1374732/*func_4165*/;
			break;
		case 125:
			uParam0->f_19 = 1374708/*func_4164*/;
			break;
	}
}

int func_4175(var uParam0, var uParam1)//Position - 0x1502BC
{
	__LIB_25__::func_103(&(Global_1946250.f_4073), 7500, "TruckTunel1", 919.1599f, -3242.047f, -97.191f, -4.6979f, 0.1417f, -118.0924f, 36.2643f, 920.1234f, -3242.478f, -97.1018f, 7.9062f, 0.1417f, -113.0609f, 36.2643f, 1f, 50, 0, 0, 0, 0);
	__LIB_25__::func_103(&(Global_1946250.f_4073), 6000, "TruckPark", 826.3912f, -3231.1902f, -98.5252f, 1.494f, -0.1848f, -114.9899f, 38.3697f, 826.9343f, -3231.013f, -97.8158f, -0.7301f, -0.1848f, -118.0463f, 38.3697f, 1f, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
	{
		func_483(&(uParam1->f_248), &(uParam1->f_109), 14);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		uParam1->f_109 = VEHICLE::CREATE_VEHICLE(joaat("phantom3"), 0f, 10f, 0f, 0f, false, false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
	{
		uParam1->f_109.f_12 = VEHICLE::CREATE_VEHICLE(joaat("trailerlarge"), 0f, 10f, 10f, 0f, false, false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
	{
		uParam1->f_109.f_1[0] = PED::CREATE_PED(26, joaat("MP_M_WeapExp_01"), 832.953f, -3243.084f, -98.716f, -18f, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED_XY(uParam1->f_109, 8f);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_109, 942.387f, -3245.778f, -94.91f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, 87.91f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam1->f_109, 5f);
		uParam1->f_140[1] = PED::CREATE_PED(26, joaat("MP_M_WeapExp_01"), 832.953f, -3243.084f, -98.716f, -18f, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		__LIB_2__::func_818(&(uParam1->f_109), 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, true, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(uParam1->f_109, 3);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
		{
			VEHICLE::ATTACH_VEHICLE_TO_TRAILER(uParam1->f_109, uParam1->f_109.f_12, 1f);
			VEHICLE::VEHICLE_SET_OVERRIDE_EXTENABLE_SIDE_RATIO(uParam1->f_109.f_12, 1);
			VEHICLE::VEHICLE_SET_EXTENABLE_SIDE_TARGET_RATIO(uParam1->f_109.f_12, 0f);
			VEHICLE::VEHICLE_SET_OVERRIDE_SIDE_RATIO(uParam1->f_109.f_12, 0f);
		}
	}
	__LIB_3__::func_477(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_109.f_1[0], PLAYER::PLAYER_PED_ID(), false);
	}
	return 1;
}

int func_4208(int iParam0, var uParam1)//Position - 0x1520B8
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	__LIB_3__::func_478(uParam1);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_2__::func_399() == 1)
		{
			__LIB_7__::func_394(0);
		}
	}
	switch (__LIB_2__::func_399())
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				func_1542(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				iVar0 = 1;
				__LIB_7__::func_673(iParam0, &(uParam1->f_140[0]));
				ENTITY::SET_ENTITY_VISIBLE(uParam1->f_140[0], false, false);
				ENTITY::SET_ENTITY_COLLISION(uParam1->f_140[0], false, false);
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_248) == joaat("trailersmall2"))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_248))
					{
						iVar1 = ENTITY::GET_ENTITY_ATTACHED_TO(uParam1->f_248);
						if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2))
							{
								func_483(&iVar2, &(uParam1->f_109), 14);
								func_477(&(uParam1->f_248), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
							}
						}
						else
						{
							func_483(&(uParam1->f_248), &(uParam1->f_109), 10);
						}
					}
					else
					{
						func_483(&(uParam1->f_248), &(uParam1->f_109), 10);
					}
				}
				else
				{
					func_483(&(uParam1->f_248), &(uParam1->f_109), 14);
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_249))
					{
						if (ENTITY::GET_ENTITY_MODEL(uParam1->f_249) == joaat("trailersmall2"))
						{
							func_477(&(uParam1->f_249), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, 0f, 50f, 10f, false, false, true);
					__LIB_7__::func_673(iParam0, &(uParam1->f_109));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_109.f_12))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109.f_12, 50f, 50f, 50f, false, false, true);
					}
					__LIB_7__::func_673(iParam0, &(uParam1->f_109.f_12));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					iVar0 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_109, uParam1->f_248, false);
			}
			__LIB_3__::func_477(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
			break;
	}
	if (!__LIB_7__::func_676(iParam0, uParam1))
	{
		return 0;
	}
	if (__LIB_18__::func_706(iParam0, &(uParam1->f_176[0]), &(uParam1->f_176[1]), 1101004800))
	{
		uParam1->f_183[0] = 0f;
		uParam1->f_183[1] = 0f;
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[0], false, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[1], false, false);
		uParam1->f_189[8 /*3*/] = { ENTITY::GET_ENTITY_ROTATION(uParam1->f_176[0], 2) };
	}
	if ((ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[0]) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[1])) && iVar0)
	{
		if (__LIB_2__::func_399() == 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
			{
				func_1542(&(uParam1->f_109.f_1[0]), PLAYER::PLAYER_ID(), 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					PED::SET_PED_INTO_VEHICLE(uParam1->f_109.f_1[0], uParam1->f_109, -1);
				}
			}
		}
		__LIB_3__::func_493(&(uParam1->f_109.f_1), 5f);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			VEHICLE::SET_VEHICLE_STEER_FOR_BUILDINGS(uParam1->f_109, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_140[0], false))
		{
			PED::SET_PED_LOD_MULTIPLIER(uParam1->f_140[0], 5f);
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[0]))
			{
				return 0;
			}
		}
		if (!__LIB_7__::func_587(&(uParam1->f_109)))
		{
			return 0;
		}
		if (!__LIB_3__::func_491(&(uParam1->f_188), 15))
		{
			return 0;
		}
		STREAMING::SET_FOCUS_POS_AND_VEL(uParam1->f_189[6 /*3*/], 0f, 0f, 0f);
		return 1;
	}
	return 0;
}

void func_4285(int iParam0, int iParam1)//Position - 0x155903
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_7__::func_680(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_3__::func_84(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(bVar7, 14)) && !func_697(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(bVar7, 14)) && !func_697(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_2__::func_560())
					{
						__LIB_25__::func_444(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_444(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4286(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4286(iParam0);
					}
					Jump @603; //curOff = 584
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_4286(int iParam0)//Position - 0x155B61
{
	__LIB_25__::func_444(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4337(var uParam0, int iParam1)//Position - 0x1581AF
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1451451/*func_4413*/;
			break;
		case 1:
			uParam0->f_30 = 1449132/*func_4408*/;
			break;
		case 2:
			uParam0->f_31 = 1449069/*func_4406*/;
			break;
		case 3:
			uParam0->f_34 = 1449013/*func_4405*/;
			break;
		case 4:
			uParam0->f_12 = 1448297/*func_4404*/;
			break;
		case 6:
			uParam0->f_32 = 1448289/*func_4403*/;
			break;
		case 111:
			uParam0->f_35 = 1448280/*func_4402*/;
			break;
		case 79:
			*uParam0 = 1448256/*func_4401*/;
			break;
		case 11:
			uParam0->f_11 = 1448247/*func_4400*/;
			break;
		case 12:
			uParam0->f_33 = 1446419/*func_4397*/;
			break;
		case 14:
			uParam0->f_11 = 1446410/*func_4396*/;
			break;
		case 109:
			uParam0->f_56 = 1446402/*func_4395*/;
			break;
		case 13:
			uParam0->f_2 = 1446393/*func_4394*/;
			break;
		case 15:
			uParam0->f_2 = 1446384/*func_4393*/;
			break;
		case 75:
			uParam0->f_4 = 1446375/*func_4392*/;
			break;
		case 16:
			uParam0->f_5 = 1446366/*func_4391*/;
			break;
		case 108:
			uParam0->f_55 = 1446357/*func_4390*/;
			break;
		case 17:
			uParam0->f_17 = 1446331/*func_4389*/;
			break;
		case 19:
			uParam0->f_17 = 1446319/*func_4388*/;
			break;
		case 20:
			uParam0->f_3 = 1446310/*func_4387*/;
			break;
		case 21:
			uParam0->f_3 = 1446301/*func_4386*/;
			break;
		case 74:
			uParam0->f_53 = 1446292/*func_4385*/;
			break;
		case 22:
			uParam0->f_24 = 1446284/*func_4384*/;
			break;
		case 25:
			uParam0->f_23 = 1446276/*func_4383*/;
			break;
		case 30:
			uParam0->f_8 = 1445115/*func_4381*/;
			break;
		case 31:
			uParam0->f_39 = 1445103/*func_4380*/;
			break;
		case 33:
			uParam0->f_40 = 1445075/*func_4379*/;
			break;
		case 34:
			uParam0->f_41 = 1445066/*func_4378*/;
			break;
		case 36:
			uParam0->f_58 = 1445021/*func_4377*/;
			break;
		case 35:
			uParam0->f_42 = 1411339/*func_4374*/;
			break;
		case 45:
			uParam0->f_14 = 1411330/*func_4373*/;
			break;
		case 46:
			uParam0->f_14 = 1411321/*func_4372*/;
			break;
		case 110:
			uParam0->f_57 = 1411313/*func_4371*/;
			break;
		case 77:
			uParam0->f_13 = 1411302/*func_4370*/;
			break;
		case 47:
			uParam0->f_43 = 1411294/*func_4369*/;
			break;
		case 49:
			uParam0->f_8 = 1411285/*func_4368*/;
			break;
		case 50:
			*uParam0 = 1410965/*func_4361*/;
			break;
		case 51:
			*uParam0 = 1410936/*func_4360*/;
			break;
		case 52:
			uParam0->f_15 = 1410905/*func_4359*/;
			break;
		case 53:
			uParam0->f_13 = 1410871/*func_4358*/;
			break;
		case 54:
			uParam0->f_45 = 1410827/*func_4357*/;
			break;
		case 56:
			uParam0->f_46 = 1410798/*func_4356*/;
			break;
		case 57:
			uParam0->f_11 = 1410789/*func_4355*/;
			break;
		case 58:
			uParam0->f_13 = 1410732/*func_4353*/;
			break;
		case 64:
			uParam0->f_47 = 1410724/*func_4352*/;
			break;
		case 65:
			uParam0->f_21 = 1410716/*func_4351*/;
			break;
		case 66:
			uParam0->f_21 = 1410708/*func_4350*/;
			break;
		case 67:
			uParam0->f_21 = 1410700/*func_4349*/;
			break;
		case 68:
			*uParam0 = 1410674/*func_4348*/;
			break;
		case 69:
			*uParam0 = 1410648/*func_4347*/;
			break;
		case 70:
			uParam0->f_48 = 1410636/*func_4346*/;
			break;
		case 71:
			uParam0->f_49 = 1410627/*func_4345*/;
			break;
		case 107:
			uParam0->f_50 = 1410615/*func_4344*/;
			break;
		case 80:
			uParam0->f_7 = 1410606/*func_4343*/;
			break;
		case 78:
			uParam0->f_59 = 1410598/*func_4342*/;
			break;
		case 126:
			*uParam0 = 1410415/*func_4338*/;
			break;
	}
}

void func_4415(var uParam0, int iParam1)//Position - 0x162AAC
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1495320/*func_4491*/;
			break;
		case 1:
			uParam0->f_30 = 1495010/*func_4490*/;
			break;
		case 2:
			uParam0->f_31 = 1490070/*func_4484*/;
			break;
		case 3:
			uParam0->f_34 = 1490041/*func_4483*/;
			break;
		case 4:
			uParam0->f_12 = 1489847/*func_4482*/;
			break;
		case 6:
			uParam0->f_32 = 1489497/*func_4481*/;
			break;
		case 111:
			uParam0->f_35 = 1489355/*func_4479*/;
			break;
		case 79:
			*uParam0 = 1489331/*func_4478*/;
			break;
		case 37:
			uParam0->f_18 = 1488793/*func_4476*/;
			break;
		case 38:
			uParam0->f_9 = 1488688/*func_4475*/;
			break;
		case 11:
			uParam0->f_11 = 1488679/*func_4474*/;
			break;
		case 12:
			uParam0->f_33 = 1488574/*func_4472*/;
			break;
		case 14:
			uParam0->f_11 = 1488565/*func_4471*/;
			break;
		case 109:
			uParam0->f_56 = 1488557/*func_4470*/;
			break;
		case 13:
			uParam0->f_2 = 1488548/*func_4469*/;
			break;
		case 44:
			*uParam0 = 1488539/*func_4468*/;
			break;
		case 15:
			uParam0->f_2 = 1488250/*func_4467*/;
			break;
		case 75:
			uParam0->f_4 = 1488241/*func_4466*/;
			break;
		case 16:
			uParam0->f_5 = 1488157/*func_4465*/;
			break;
		case 108:
			uParam0->f_55 = 1488148/*func_4464*/;
			break;
		case 17:
			uParam0->f_17 = 1487527/*func_4462*/;
			break;
		case 19:
			uParam0->f_17 = 1487326/*func_4461*/;
			break;
		case 20:
			uParam0->f_3 = 1487262/*func_4460*/;
			break;
		case 21:
			uParam0->f_3 = 1487202/*func_4459*/;
			break;
		case 74:
			uParam0->f_53 = 1487193/*func_4458*/;
			break;
		case 22:
			uParam0->f_24 = 1486952/*func_4457*/;
			break;
		case 25:
			uParam0->f_23 = 1486579/*func_4454*/;
			break;
		case 30:
			uParam0->f_8 = 1486441/*func_4453*/;
			break;
		case 31:
			uParam0->f_39 = 1485999/*func_4451*/;
			break;
		case 33:
			uParam0->f_40 = 1485334/*func_4446*/;
			break;
		case 34:
			uParam0->f_41 = 1482756/*func_4445*/;
			break;
		case 36:
			uParam0->f_58 = 1482711/*func_4444*/;
			break;
		case 35:
			uParam0->f_42 = 1456867/*func_4443*/;
			break;
		case 45:
			uParam0->f_14 = 1456639/*func_4442*/;
			break;
		case 46:
			uParam0->f_14 = 1456463/*func_4441*/;
			break;
		case 110:
			uParam0->f_57 = 1456455/*func_4440*/;
			break;
		case 77:
			uParam0->f_13 = 1456444/*func_4439*/;
			break;
		case 47:
			uParam0->f_43 = 1456202/*func_4438*/;
			break;
		case 49:
			uParam0->f_8 = 1456170/*func_4437*/;
			break;
		case 50:
			*uParam0 = 1456104/*func_4436*/;
			break;
		case 51:
			*uParam0 = 1456080/*func_4435*/;
			break;
		case 52:
			uParam0->f_15 = 1455897/*func_4434*/;
			break;
		case 53:
			uParam0->f_13 = 1455302/*func_4432*/;
			break;
		case 54:
			uParam0->f_45 = 1455065/*func_4431*/;
			break;
		case 56:
			uParam0->f_46 = 1455056/*func_4430*/;
			break;
		case 57:
			uParam0->f_11 = 1454991/*func_4429*/;
			break;
		case 58:
			uParam0->f_13 = 1454569/*func_4428*/;
			break;
		case 64:
			uParam0->f_47 = 1454561/*func_4427*/;
			break;
		case 65:
			uParam0->f_21 = 1454553/*func_4426*/;
			break;
		case 66:
			uParam0->f_21 = 1454493/*func_4425*/;
			break;
		case 67:
			uParam0->f_21 = 1454475/*func_4424*/;
			break;
		case 68:
			*uParam0 = 1454466/*func_4423*/;
			break;
		case 69:
			*uParam0 = 1454457/*func_4422*/;
			break;
		case 70:
			uParam0->f_48 = 1453953/*func_4421*/;
			break;
		case 71:
			uParam0->f_49 = 1453805/*func_4420*/;
			break;
		case 107:
			uParam0->f_50 = 1453760/*func_4419*/;
			break;
		case 80:
			uParam0->f_7 = 1453751/*func_4418*/;
			break;
		case 78:
			uParam0->f_59 = 1453743/*func_4417*/;
			break;
		case 125:
			uParam0->f_19 = 1453727/*func_4416*/;
			break;
	}
}

void func_4454(int iParam0, int iParam1)//Position - 0x16AEF3
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_1__::func_359(PLAYER::PLAYER_ID()) && __LIB_7__::func_959(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_3__::func_553(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_7__::func_684())
		{
			bVar2 = __LIB_2__::func_377(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::func_160() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_264(bVar2, 1, 1)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_2__::func_509(bVar2, 14)) && !func_697(bVar2))
			{
				Var1 = { __LIB_1__::func_265(bVar2) };
				Var1.f_2 = 0f;
				if (SYSTEM::VDIST(Var1, Var0) <= IntToFloat(__LIB_3__::func_807(iParam0)))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 == 0)
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		if (__LIB_2__::func_444(1, iParam1))
		{
			if (iVar3 > 0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
			}
			Global_1946250.f_504 = -1;
			__LIB_18__::func_658(1, iParam0);
			Global_1946250.f_3607 = 0;
			Global_1946250.f_3612 = 1;
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
	}
}

void func_4492(var uParam0, int iParam1)//Position - 0x16D121
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1530367/*func_4624*/;
			break;
		case 1:
			uParam0->f_30 = 1530257/*func_4623*/;
			break;
		case 2:
			uParam0->f_31 = 1527803/*func_4618*/;
			break;
		case 3:
			uParam0->f_34 = 1527774/*func_4617*/;
			break;
		case 4:
			uParam0->f_12 = 1527614/*func_4616*/;
			break;
		case 6:
			uParam0->f_32 = 1527496/*func_4615*/;
			break;
		case 111:
			uParam0->f_35 = 1527279/*func_4612*/;
			break;
		case 79:
			*uParam0 = 1527255/*func_4611*/;
			break;
		case 37:
			uParam0->f_18 = 1527135/*func_4610*/;
			break;
		case 38:
			uParam0->f_9 = 1526984/*func_4607*/;
			break;
		case 11:
			uParam0->f_11 = 1526975/*func_4606*/;
			break;
		case 12:
			uParam0->f_33 = 1525972/*func_4603*/;
			break;
		case 14:
			uParam0->f_11 = 1525963/*func_4602*/;
			break;
		case 109:
			uParam0->f_56 = 1525955/*func_4601*/;
			break;
		case 13:
			uParam0->f_2 = 1525946/*func_4600*/;
			break;
		case 15:
			uParam0->f_2 = 1525792/*func_4599*/;
			break;
		case 75:
			uParam0->f_4 = 1525783/*func_4598*/;
			break;
		case 16:
			uParam0->f_5 = 1525695/*func_4597*/;
			break;
		case 108:
			uParam0->f_55 = 1524908/*func_4591*/;
			break;
		case 17:
			uParam0->f_17 = 1524279/*func_4587*/;
			break;
		case 19:
			uParam0->f_17 = 1524252/*func_4586*/;
			break;
		case 20:
			uParam0->f_3 = 1524213/*func_4585*/;
			break;
		case 21:
			uParam0->f_3 = 1524153/*func_4584*/;
			break;
		case 74:
			uParam0->f_53 = 1524144/*func_4583*/;
			break;
		case 22:
			uParam0->f_24 = 1524091/*func_4582*/;
			break;
		case 25:
			uParam0->f_23 = 1523787/*func_4581*/;
			break;
		case 30:
			uParam0->f_8 = 1523662/*func_4580*/;
			break;
		case 31:
			uParam0->f_39 = 1523441/*func_4579*/;
			break;
		case 33:
			uParam0->f_40 = 1523156/*func_4578*/;
			break;
		case 34:
			uParam0->f_41 = 1522750/*func_4577*/;
			break;
		case 36:
			uParam0->f_58 = 1522705/*func_4576*/;
			break;
		case 35:
			uParam0->f_42 = 1505174/*func_4575*/;
			break;
		case 45:
			uParam0->f_14 = 1505165/*func_4574*/;
			break;
		case 46:
			uParam0->f_14 = 1505081/*func_4573*/;
			break;
		case 110:
			uParam0->f_57 = 1505073/*func_4572*/;
			break;
		case 77:
			uParam0->f_13 = 1505050/*func_4571*/;
			break;
		case 47:
			uParam0->f_43 = 1504998/*func_4570*/;
			break;
		case 49:
			uParam0->f_8 = 1504966/*func_4569*/;
			break;
		case 50:
			*uParam0 = 1504788/*func_4568*/;
			break;
		case 51:
			*uParam0 = 1504691/*func_4567*/;
			break;
		case 52:
			uParam0->f_15 = 1504680/*func_4566*/;
			break;
		case 53:
			uParam0->f_13 = 1504365/*func_4564*/;
			break;
		case 54:
			uParam0->f_45 = 1503500/*func_4557*/;
			break;
		case 56:
			uParam0->f_46 = 1503491/*func_4556*/;
			break;
		case 57:
			uParam0->f_11 = 1498684/*func_4519*/;
			break;
		case 58:
			uParam0->f_13 = 1498670/*func_4518*/;
			break;
		case 64:
			uParam0->f_47 = 1497162/*func_4504*/;
			break;
		case 65:
			uParam0->f_21 = 1497154/*func_4503*/;
			break;
		case 66:
			uParam0->f_21 = 1497103/*func_4502*/;
			break;
		case 67:
			uParam0->f_21 = 1497075/*func_4501*/;
			break;
		case 68:
			*uParam0 = 1497066/*func_4500*/;
			break;
		case 69:
			*uParam0 = 1497057/*func_4499*/;
			break;
		case 70:
			uParam0->f_48 = 1496773/*func_4498*/;
			break;
		case 71:
			uParam0->f_49 = 1496677/*func_4497*/;
			break;
		case 107:
			uParam0->f_50 = 1496665/*func_4496*/;
			break;
		case 80:
			uParam0->f_7 = 1496479/*func_4495*/;
			break;
		case 78:
			uParam0->f_59 = 1496307/*func_4493*/;
			break;
	}
}

void func_4581(int iParam0, int iParam1)//Position - 0x17404B
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_2__::func_192(PLAYER::PLAYER_ID()) && __LIB_4__::func_51(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_3__::func_600(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_7__::func_684())
		{
			bVar2 = __LIB_2__::func_377(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::func_160() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_264(bVar2, 1, 1)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_2__::func_509(bVar2, 14)) && !func_697(bVar2))
			{
				Var1 = { __LIB_1__::func_265(bVar2) };
				Var1.f_2 = 0f;
				if (SYSTEM::VDIST(Var1, Var0) <= IntToFloat(__LIB_3__::func_807(iParam0)))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 == 0)
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		if (__LIB_2__::func_444(1, iParam1))
		{
			if (iVar3 > 0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
			}
			Global_1946250.f_504 = -1;
			__LIB_18__::func_658(1, iParam0);
			Global_1946250.f_3607 = 0;
			Global_1946250.f_3612 = 1;
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
	}
}

void func_4625(var uParam0, int iParam1)//Position - 0x175A08
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1558164/*func_4697*/;
			break;
		case 1:
			uParam0->f_30 = 1558018/*func_4696*/;
			break;
		case 2:
			uParam0->f_31 = 1552829/*func_4690*/;
			break;
		case 3:
			uParam0->f_34 = 1552800/*func_4689*/;
			break;
		case 4:
			uParam0->f_12 = 1552389/*func_4687*/;
			break;
		case 6:
			uParam0->f_32 = 1552219/*func_4686*/;
			break;
		case 111:
			uParam0->f_35 = 1551824/*func_4683*/;
			break;
		case 79:
			*uParam0 = 1551800/*func_4682*/;
			break;
		case 11:
			uParam0->f_11 = 1551791/*func_4681*/;
			break;
		case 12:
			uParam0->f_33 = 1551696/*func_4679*/;
			break;
		case 14:
			uParam0->f_11 = 1551687/*func_4678*/;
			break;
		case 109:
			uParam0->f_56 = 1551679/*func_4677*/;
			break;
		case 13:
			uParam0->f_2 = 1551670/*func_4676*/;
			break;
		case 15:
			uParam0->f_2 = 1551385/*func_4673*/;
			break;
		case 75:
			uParam0->f_4 = 1551376/*func_4672*/;
			break;
		case 16:
			uParam0->f_5 = 1551288/*func_4671*/;
			break;
		case 108:
			uParam0->f_55 = 1551279/*func_4670*/;
			break;
		case 17:
			uParam0->f_17 = 1551025/*func_4669*/;
			break;
		case 19:
			uParam0->f_17 = 1550998/*func_4668*/;
			break;
		case 20:
			uParam0->f_3 = 1550989/*func_4667*/;
			break;
		case 21:
			uParam0->f_3 = 1550980/*func_4666*/;
			break;
		case 74:
			uParam0->f_53 = 1550971/*func_4665*/;
			break;
		case 22:
			uParam0->f_24 = 1550963/*func_4664*/;
			break;
		case 25:
			uParam0->f_23 = 1550955/*func_4663*/;
			break;
		case 30:
			uParam0->f_8 = 1550832/*func_4662*/;
			break;
		case 31:
			uParam0->f_39 = 1550585/*func_4661*/;
			break;
		case 33:
			uParam0->f_40 = 1550329/*func_4660*/;
			break;
		case 34:
			uParam0->f_41 = 1548176/*func_4658*/;
			break;
		case 36:
			uParam0->f_58 = 1548131/*func_4657*/;
			break;
		case 35:
			uParam0->f_42 = 1533678/*func_4656*/;
			break;
		case 45:
			uParam0->f_14 = 1533669/*func_4655*/;
			break;
		case 46:
			uParam0->f_14 = 1533660/*func_4654*/;
			break;
		case 110:
			uParam0->f_57 = 1533652/*func_4653*/;
			break;
		case 77:
			uParam0->f_13 = 1533641/*func_4652*/;
			break;
		case 47:
			uParam0->f_43 = 1533589/*func_4651*/;
			break;
		case 49:
			uParam0->f_8 = 1533557/*func_4650*/;
			break;
		case 50:
			*uParam0 = 1533428/*func_4649*/;
			break;
		case 51:
			*uParam0 = 1533404/*func_4648*/;
			break;
		case 52:
			uParam0->f_15 = 1533393/*func_4647*/;
			break;
		case 53:
			uParam0->f_13 = 1532742/*func_4645*/;
			break;
		case 54:
			uParam0->f_45 = 1532106/*func_4641*/;
			break;
		case 56:
			uParam0->f_46 = 1532097/*func_4640*/;
			break;
		case 57:
			uParam0->f_11 = 1532030/*func_4639*/;
			break;
		case 58:
			uParam0->f_13 = 1532016/*func_4638*/;
			break;
		case 64:
			uParam0->f_47 = 1531637/*func_4637*/;
			break;
		case 65:
			uParam0->f_21 = 1531562/*func_4635*/;
			break;
		case 66:
			uParam0->f_21 = 1531511/*func_4634*/;
			break;
		case 67:
			uParam0->f_21 = 1531493/*func_4633*/;
			break;
		case 68:
			*uParam0 = 1531484/*func_4632*/;
			break;
		case 69:
			*uParam0 = 1531475/*func_4631*/;
			break;
		case 70:
			uParam0->f_48 = 1531358/*func_4630*/;
			break;
		case 71:
			uParam0->f_49 = 1531349/*func_4629*/;
			break;
		case 107:
			uParam0->f_50 = 1531337/*func_4628*/;
			break;
		case 80:
			uParam0->f_7 = 1531328/*func_4627*/;
			break;
		case 78:
			uParam0->f_59 = 1531320/*func_4626*/;
			break;
	}
}

void func_4698(var uParam0, int iParam1)//Position - 0x17C69D
{
	switch (iParam1)
	{
		case 96:
			uParam0->f_1 = 1558631/*func_4705*/;
			break;
		case 97:
			uParam0->f_1 = 1558622/*func_4704*/;
			break;
		case 98:
			uParam0->f_1 = 1558613/*func_4703*/;
			break;
		case 99:
			uParam0->f_1 = 1558453/*func_4702*/;
			break;
		case 100:
			uParam0->f_22 = 1558445/*func_4701*/;
			break;
		case 101:
			uParam0->f_22 = 1558290/*func_4699*/;
			break;
	}
}

void func_4706(var uParam0, int iParam1)//Position - 0x17C870
{
	switch (iParam1)
	{
		case 90:
			uParam0->f_1 = 1558848/*func_4711*/;
			break;
		case 91:
			uParam0->f_1 = 1558839/*func_4710*/;
			break;
		case 92:
			uParam0->f_1 = 1558830/*func_4709*/;
			break;
		case 93:
			uParam0->f_1 = 1558453/*func_4702*/;
			break;
		case 94:
			uParam0->f_1 = 1558821/*func_4708*/;
			break;
		case 95:
			uParam0->f_22 = 1558757/*func_4707*/;
			break;
	}
}

void func_4712(var uParam0, int iParam1)//Position - 0x17C949
{
	switch (iParam1)
	{
		case 84:
			uParam0->f_1 = 1559075/*func_4716*/;
			break;
		case 85:
			uParam0->f_1 = 1559066/*func_4715*/;
			break;
		case 86:
			uParam0->f_1 = 1558453/*func_4702*/;
			break;
		case 87:
			uParam0->f_1 = 1559057/*func_4714*/;
			break;
		case 89:
			uParam0->f_54 = 1558957/*func_4713*/;
			break;
	}
}

Vector3 func_4717(struct<3> Param0, int iParam1)//Position - 0x17CA2C
{
	struct<3> Var0;
	float fVar1;
	var uVar2;
	func_313(iParam1, &uVar2, &Var0, &fVar1, 0);
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar1, Param0);
}

void func_4719(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, int iParam4)//Position - 0x17CABE
{
	if (Local_112.f_36 < 2)
	{
		Local_112.f_9[Local_112.f_36 /*13*/] = { Param0 };
		Local_112.f_9[Local_112.f_36 /*13*/].f_3 = { Param1 };
		Local_112.f_9[Local_112.f_36 /*13*/].f_6 = { Param2 };
		Local_112.f_9[Local_112.f_36 /*13*/].f_9 = { Param3 };
		Local_112.f_9[Local_112.f_36 /*13*/].f_12 = iParam4;
		Local_112.f_36++;
	}
}

void func_4721()//Position - 0x17CB88
{
	if (__LIB_3__::func_880(PLAYER::PLAYER_ID()) || __LIB_4__::func_970(PLAYER::PLAYER_ID()))
	{
		NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(6);
	}
	else if (__LIB_3__::func_870(PLAYER::PLAYER_ID()) || __LIB_3__::func_996(PLAYER::PLAYER_ID()))
	{
		NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(3);
	}
	else if (__LIB_4__::func_738(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_873(__LIB_19__::func_78()) > 0 || __LIB_2__::func_404(__LIB_19__::func_78()))
		{
			NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(6);
		}
		else
		{
			NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(3);
		}
	}
}

