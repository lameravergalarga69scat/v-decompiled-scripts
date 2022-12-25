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
	int iLocal_19[2] = { 0, 0 };
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		__LIB_0__::func_202();
	}
	while (true)
	{
		SYSTEM::WAIT(250);
		switch (iLocal_18)
		{
			case 0:
				if (iLocal_19[0])
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						Global_22724[3 /*42*/].f_27[0] = __LIB_12__::func_295(2);
						__LIB_15__::func_812(2, 32, Global_22724[3 /*42*/].f_27[0]);
					}
					StringCopy(&(Global_22724[3 /*42*/]), "PA_TREV1" /* GXT: Earn one million dollars. */, 16);
					StringCopy(&(Global_22724[3 /*42*/].f_4), "PA_TREV1" /* GXT: Earn one million dollars. */, 16);
					Global_22724[3 /*42*/].f_8 = 0;
					Global_22724[3 /*42*/].f_9 = 1;
					StringCopy(&(Global_22724[3 /*42*/].f_10[1 /*4*/]), "PA_TREV1A" /* GXT: Current wealth $~1~. */, 16);
					Global_22724[3 /*42*/].f_37[1] = 0;
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						Global_22724[3 /*42*/].f_27[1] = __LIB_12__::func_295(2);
					}
					__LIB_43__::func_569(2, 3, 1, 1);
					func_39("PA_TREV1A" /* GXT: Current wealth $~1~. */, Global_22724[3 /*42*/].f_27[1]);
					iLocal_18 = 1;
				}
				break;
			case 1:
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					Global_22724[3 /*42*/].f_27[1] = __LIB_12__::func_295(2);
					if (func_38(2, 999999))
					{
						__LIB_39__::func_108("PA_COMPLETE" /* GXT: Goal achieved ~a~ */, "PA_TREV1" /* GXT: Earn one million dollars. */, 2000, 1);
						Global_22724[3 /*42*/].f_37[1] = 1;
						Global_22724[3 /*42*/].f_8 = 1;
						iLocal_22 = MISC::GET_GAME_TIMER();
						iLocal_18 = 2;
					}
					else if (func_38(2, 499999))
					{
						if (!iLocal_20)
						{
							__LIB_0__::func_382("PA_TREV1" /* GXT: Earn one million dollars. */, 2000, 1);
							iLocal_20 = 1;
						}
					}
					if (iLocal_19[1])
					{
						__LIB_14__::func_593(2, 32, 500000, 0, 0);
						iLocal_19[1] = 0;
					}
				}
				break;
			case 2:
				iLocal_21 = MISC::GET_GAME_TIMER();
				if ((iLocal_21 - iLocal_22) < 5000)
				{
					func_39("PA_TREV1A" /* GXT: Current wealth $~1~. */, Global_22724[3 /*42*/].f_27[1]);
				}
				break;
		}
	}
}

int func_38(int iParam0, int iParam1)//Position - 0x1600
{
	if (__LIB_12__::func_295(iParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_39(char* sParam0, int iParam1)//Position - 0x161B
{
	GRAPHICS::DRAW_RECT(0.852f, 0.81f, 0.141f, 0.025f, 0, 0, 0, 175, false);
	__LIB_16__::func_301(255, 255, 255, 255);
	__LIB_3__::func_42(0.81f, 0.8f, sParam0, iParam1, 0);
}

