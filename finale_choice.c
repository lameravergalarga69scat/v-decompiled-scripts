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
#endregion
void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
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
	iLocal_28 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_43();
	}
	__LIB_0__::func_694(20);
	func_41();
	func_40(1);
	func_40(0);
	func_40(2);
	func_40(13);
	func_40(12);
	Global_8141 = 1;
	__LIB_17__::func_864();
	if (!__LIB_16__::func_982(joaat("CALL_FIN_CHOICE_1A")))
	{
		__LIB_17__::func_673(joaat("CALL_FIN_CHOICE_1A"), 2, 2, 2, 1, -1, 5);
	}
	if (!__LIB_16__::func_982(joaat("CALL_FIN_CHOICE_2A")))
	{
		__LIB_17__::func_673(joaat("CALL_FIN_CHOICE_2A"), 2, 0, 0, 1, -1, 5);
	}
	if (!__LIB_16__::func_982(joaat("CALL_FIN_CHOICE_3")))
	{
		__LIB_17__::func_673(joaat("CALL_FIN_CHOICE_3"), 2, 12, 3, 1, -1, 5);
	}
	bVar0 = false;
	while (__LIB_0__::func_178(23) && !__LIB_0__::func_425(134))
	{
		if (__LIB_0__::func_683() == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if ((!PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
					{
						if (!bVar0)
						{
							if (!((__LIB_0__::func_217() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || __LIB_0__::func_201()))
							{
								if (func_13())
								{
									bVar0 = true;
								}
							}
						}
						else
						{
							if (iLocal_28)
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 384);
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
								PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/, true);
								PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/, true);
								PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/, true);
								PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/, true);
								PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true);
								PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true);
								PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 178 /*INPUT_CELLPHONE_OPTION*/, true);
								PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/, true);
								PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/, true);
								PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/, true);
							}
							else
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							}
							switch (__LIB_17__::func_672())
							{
								case joaat("CALL_FIN_CHOICE_1A"):
									if (!__LIB_16__::func_982(joaat("CALL_FIN_CHOICE_1B")))
									{
										__LIB_17__::func_526(joaat("CALL_FIN_CHOICE_1B"), 0, 1, 0, 1, 6000, 6000, -1, 0, -1, 68);
									}
									break;
								case joaat("CALL_FIN_CHOICE_1B"):
									__LIB_17__::func_784(12, 0);
									__LIB_0__::func_681(134, 1);
									STATS::STAT_SET_INT(joaat("SP_FINAL_DECISION"), 2, true);
									break;
								case joaat("CALL_FIN_CHOICE_2A"):
									if (!__LIB_16__::func_982(joaat("CALL_FIN_CHOICE_2B")))
									{
										__LIB_17__::func_526(joaat("CALL_FIN_CHOICE_2B"), 0, 1, 2, 2, 6000, 6000, -1, 0, -1, 68);
									}
									break;
								case joaat("CALL_FIN_CHOICE_2B"):
									__LIB_17__::func_784(12, 1);
									__LIB_0__::func_681(134, 1);
									STATS::STAT_SET_INT(joaat("SP_FINAL_DECISION"), 1, true);
									break;
								case joaat("CALL_FIN_CHOICE_3"):
									__LIB_17__::func_784(12, 2);
									__LIB_0__::func_681(134, 1);
									STATS::STAT_SET_INT(joaat("SP_FINAL_DECISION"), 3, true);
									break;
								default:
									if (!__LIB_0__::func_77(0))
									{
										bVar0 = false;
									}
									else if (iLocal_28)
									{
										if (__LIB_13__::func_810())
										{
											iLocal_28 = 0;
										}
									}
									break;
								}
							}
						}
					}
				}
		}
		SYSTEM::WAIT(0);
	}
	__LIB_0__::func_693(20);
	Global_100480 = 0;
	__LIB_0__::func_210();
	func_43();
}

int func_13()//Position - 0x75E
{
	if (Global_20266.f_1 > 3)
	{
		MISC::CLEAR_BIT(&Global_8137, 0);
		__LIB_0__::func_366(0);
		return 0;
	}
	MISC::SET_BIT(&Global_8137, 0);
	if (__LIB_19__::func_581(0, 0, 1, 1))
	{
		return 1;
	}
	MISC::CLEAR_BIT(&Global_8137, 0);
	return 0;
}

void func_40(int iParam0)//Position - 0x16CF
{
	if (((((iParam0 == 144 || iParam0 == 145) || iParam0 == 161) || iParam0 == 188) || iParam0 == 187) || iParam0 == 162)
	{
		return;
	}
	Global_43604[iParam0] = MISC::GET_GAME_TIMER();
}

void func_41()//Position - 0x1724
{
	Global_43603 = MISC::GET_GAME_TIMER();
}

void func_43()//Position - 0x178A
{
	__LIB_17__::func_113(joaat("CALL_FIN_CHOICE_1A"));
	__LIB_17__::func_113(joaat("CALL_FIN_CHOICE_1B"));
	__LIB_17__::func_113(joaat("CALL_FIN_CHOICE_2A"));
	__LIB_17__::func_113(joaat("CALL_FIN_CHOICE_2B"));
	__LIB_17__::func_113(joaat("CALL_FIN_CHOICE_3"));
	Global_8141 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

