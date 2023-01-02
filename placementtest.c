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
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
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
	iVar0 = func_13();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iVar0))
		{
			switch (iLocal_45)
			{
				case 0:
					func_11(&iVar0, "OFFR_BLIP_R5", 255, 0, 255, 255, 0);
					func_10(&iVar0);
					iLocal_46 = MISC::GET_GAME_TIMER();
					iLocal_45 = 1;
					break;
				case 1:
					if ((MISC::GET_GAME_TIMER() - iLocal_46) > 3000)
					{
						func_9(&iVar0);
						iLocal_45 = 2;
					}
					break;
			}
			if (func_1(&iVar0, 0))
			{
			}
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(int iParam0, bool bParam1)//Position - 0xEF
{
	if (!__LIB_0__::func_702(&(iParam0->f_2)))
	{
		__LIB_1__::func_31(&(iParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
	if (bParam1)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			return 0;
		}
	}
	if (iParam0->f_1 == -1)
	{
		return 1;
	}
	if (__LIB_3__::func_108(&(iParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(iParam0->f_1)
	{
		__LIB_1__::func_377(&(iParam0->f_2));
		return 0;
	}
	return 1;
}

void func_9(int iParam0)//Position - 0x273
{
	iParam0->f_1 = 300;
	__LIB_1__::func_31(&(iParam0->f_2));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SPLASH_TEXT_TRANSITION_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(300);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_10(int iParam0)//Position - 0x2A0
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SPLASH_TEXT_TRANSITION_IN");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_11(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x2B7
{
	iParam0->f_1 = -1;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SPLASH_TEXT_LABEL");
	__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam6)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SPLASH_TEXT_TRANSITION_IN");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_13()//Position - 0x317
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("SPLASH_TEXT");
}

