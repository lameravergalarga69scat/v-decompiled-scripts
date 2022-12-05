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
	struct<17> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_21 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(50))
	{
		func_23();
	}
	while (true)
	{
		if (Global_113386.f_20410.f_145 > 0 || Global_112026)
		{
			if (!Global_112026)
			{
				if ((Global_43052 != 6 && Global_43052 != 15) && !Global_96448)
				{
					func_23();
				}
				if (!Global_112025)
				{
					if (Global_113386.f_20410.f_145 > 0)
					{
						if (func_20(&(Global_113386.f_20410[iLocal_21 /*16*/])))
						{
							if (__LIB_0__.func_43(__LIB_18__.func_173()))
							{
								if (BitTest(Global_113386.f_20410[iLocal_21 /*16*/].f_11, __LIB_18__.func_173()))
								{
									if (Global_113386.f_20410[iLocal_21 /*16*/].f_12 == Global_113386.f_20410.f_146[__LIB_18__.func_173()])
									{
										if (MISC::GET_GAME_TIMER() > Global_112028)
										{
											if (MISC::GET_GAME_TIMER() > Global_113386.f_20410[iLocal_21 /*16*/].f_8)
											{
												if (MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_20410[iLocal_21 /*16*/].f_4), ""))
												{
													HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(true);
													__LIB_0__.func_187(&(Global_113386.f_20410[iLocal_21 /*16*/]));
												}
												else
												{
													HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(true);
													__LIB_9__.func_565(&(Global_113386.f_20410[iLocal_21 /*16*/]), &(Global_113386.f_20410[iLocal_21 /*16*/].f_4));
												}
												if (Global_113386.f_20410[iLocal_21 /*16*/].f_13 != 0)
												{
													__LIB_0__.func_71(Global_113386.f_20410[iLocal_21 /*16*/].f_13, 0);
												}
												Local_20 = { Global_113386.f_20410[iLocal_21 /*16*/] };
												Local_20.f_4 = { Global_113386.f_20410[iLocal_21 /*16*/].f_4 };
												Local_20.f_8 = Global_113386.f_20410[iLocal_21 /*16*/].f_8;
												Local_20.f_10 = Global_113386.f_20410[iLocal_21 /*16*/].f_10;
												Local_20.f_9 = Global_113386.f_20410[iLocal_21 /*16*/].f_9;
												Local_20.f_11 = Global_113386.f_20410[iLocal_21 /*16*/].f_11;
												Local_20.f_12 = Global_113386.f_20410[iLocal_21 /*16*/].f_12;
												Local_20.f_13 = Global_113386.f_20410[iLocal_21 /*16*/].f_13;
												Local_20.f_14 = Global_113386.f_20410[iLocal_21 /*16*/].f_14;
												Local_20.f_15 = Global_113386.f_20410[iLocal_21 /*16*/].f_15;
												Local_20.f_16 = 0;
												Global_112029 = { Global_113386.f_20410[iLocal_21 /*16*/] };
												Global_112027 = MISC::GET_GAME_TIMER();
												iVar0 = iLocal_21;
												while (iVar0 <= (Global_113386.f_20410.f_145 - 2))
												{
													__LIB_9__.func_609(iVar0, iVar0 + 1);
													iVar0++;
												}
												__LIB_9__.func_608((Global_113386.f_20410.f_145 - 1));
												Global_113386.f_20410.f_145 = (Global_113386.f_20410.f_145 - 1);
												__LIB_0__.func_66();
												Global_112026 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!func_4())
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Local_20.f_4), ""))
				{
					if (__LIB_0__.func_1(&Local_20))
					{
						HUD::CLEAR_HELP(false);
					}
				}
				else if (__LIB_2__.func_161(&Local_20, &(Local_20.f_4)))
				{
					HUD::CLEAR_HELP(false);
				}
				if ((MISC::GET_GAME_TIMER() - Global_112027) > 4000 || Local_20.f_16)
				{
					if (Local_20.f_14 != 0)
					{
						__LIB_0__.func_71(Local_20.f_14, 0);
					}
					Global_112028 = MISC::GET_GAME_TIMER() + 250;
				}
				else
				{
					if (Local_20.f_10 != -1)
					{
						iVar1 = 20000;
					}
					else
					{
						iVar1 = -1;
					}
					__LIB_6__.func_764(&Local_20, &(Local_20.f_4), Local_20.f_12, 1000, iVar1, Local_20.f_9, Local_20.f_11, Local_20.f_13, Local_20.f_14, Local_20.f_15);
				}
				StringCopy(&Local_20, "", 16);
				StringCopy(&(Local_20.f_4), "", 16);
				Local_20.f_8 = 0;
				Local_20.f_9 = 0;
				Local_20.f_10 = -1;
				Local_20.f_11 = 0;
				Local_20.f_12 = 0;
				Local_20.f_13 = 0;
				Local_20.f_14 = 0;
				Local_20.f_15 = 0;
				Local_20.f_16 = 0;
				Global_112027 = 0;
				Global_112026 = 0;
			}
			if (!MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_20410[iLocal_21 /*16*/]), &Local_20) && !MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_20410[iLocal_21 /*16*/]), ""))
			{
				if (Global_113386.f_20410[iLocal_21 /*16*/].f_10 != -1)
				{
					if (MISC::GET_GAME_TIMER() > Global_113386.f_20410[iLocal_21 /*16*/].f_10)
					{
						iVar2 = iLocal_21;
						while (iVar2 <= (Global_113386.f_20410.f_145 - 2))
						{
							__LIB_9__.func_609(iVar2, iVar2 + 1);
							iVar2++;
						}
						__LIB_9__.func_608((Global_113386.f_20410.f_145 - 1));
						Global_113386.f_20410.f_145 = (Global_113386.f_20410.f_145 - 1);
						__LIB_0__.func_66();
					}
				}
			}
			iLocal_21++;
			if (iLocal_21 >= Global_113386.f_20410.f_145)
			{
				iLocal_21 = 0;
			}
		}
		else if ((Global_43052 != 6 && Global_43052 != 15) && !Global_96448)
		{
			func_23();
		}
		SYSTEM::WAIT(0);
	}
}

int func_4()//Position - 0x670
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (__LIB_0__.func_200())
	{
		return 0;
	}
	if (Local_20.f_9 != -1 && (MISC::GET_GAME_TIMER() - Global_112027) > Local_20.f_9)
	{
		return 0;
	}
	if (Global_112025)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (MISC::ARE_STRINGS_EQUAL(&(Local_20.f_4), ""))
	{
		if (!__LIB_0__.func_1(&Local_20))
		{
			Local_20.f_16 = 1;
			return 0;
		}
	}
	else if (!__LIB_2__.func_161(&Local_20, &(Local_20.f_4)))
	{
		Local_20.f_16 = 1;
		return 0;
	}
	return 1;
}

int func_20(var uParam0)//Position - 0xC01
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (__LIB_0__.func_198())
	{
		return 0;
	}
	if (__LIB_0__.func_200())
	{
		return 0;
	}
	if (uParam0->f_12 < 3)
	{
		if (__LIB_0__.func_511())
		{
			return 0;
		}
		if (Global_78317)
		{
			return 0;
		}
		if (Global_97361)
		{
			return 0;
		}
		if (!BitTest(uParam0->f_15, 1))
		{
			if (Global_97369)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_23()//Position - 0xCD1
{
	if (Global_112026)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Local_20.f_4), ""))
		{
			if (__LIB_0__.func_1(&Local_20))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		else if (__LIB_2__.func_161(&Local_20, &(Local_20.f_4)))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	Global_112027 = 0;
	Global_112026 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

