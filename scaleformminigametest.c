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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23 = 0;
	bool bLocal_24 = 0;
	float fLocal_25 = 0f;
	bool bLocal_26 = 0;
	bool bLocal_27 = 0;
	float fLocal_28 = 0f;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	float fLocal_31 = 0f;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	float fLocal_34 = 0f;
	bool bLocal_35 = 0;
	bool bLocal_36 = 0;
	float fLocal_37 = 0f;
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	float fLocal_40 = 0f;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	float fLocal_43 = 0f;
	bool bLocal_44 = 0;
	bool bLocal_45 = 0;
	float fLocal_46 = 0f;
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
	iLocal_20 = HUD::ADD_BLIP_FOR_COORD(100f, 100f, 30f);
	iLocal_22 = 1;
	fLocal_25 = 0f;
	fLocal_28 = 0f;
	fLocal_31 = 0f;
	fLocal_34 = 0f;
	fLocal_37 = 0f;
	fLocal_40 = 0f;
	fLocal_43 = 0f;
	fLocal_46 = 0f;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_2();
	}
	iLocal_18 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("p_bubblegum");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_18))
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		if (iLocal_21 == 1)
		{
		}
		if (iLocal_22 == 1)
		{
			iLocal_22 = 0;
			iLocal_19 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
			if (CAM::DOES_CAM_EXIST(iLocal_19))
			{
				CAM::SET_CAM_PARAMS(iLocal_19, -160.6632f, -1072.1438f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				CAM::SET_CAM_NEAR_CLIP(iLocal_19, 0.01f);
				CAM::SET_CAM_FAR_CLIP(iLocal_19, 0.02f);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			HUD::SET_BLIP_SPRITE(iLocal_20, 66);
		}
		iLocal_21 = 1;
		GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_18);
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x13F
{
	if (Global_20245 == 0)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
		{
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	else if (SYSTEM::TIMERA() > 50)
	{
		Global_20245 = 0;
	}
	if (Global_20245 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
		{
			bLocal_23 = false;
			fLocal_25 = 0f;
		}
		if (!bLocal_23 == bLocal_24)
		{
			bLocal_24 = bLocal_23;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_25);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
		{
			bLocal_26 = false;
			fLocal_28 = 0f;
		}
		if (!bLocal_26 == bLocal_27)
		{
			bLocal_27 = bLocal_26;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_28);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
		{
			bLocal_29 = false;
			fLocal_31 = 0f;
		}
		if (!bLocal_29 == bLocal_30)
		{
			bLocal_30 = bLocal_29;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_31);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
		{
			bLocal_32 = false;
			fLocal_34 = 0f;
		}
		if (!bLocal_32 == bLocal_33)
		{
			bLocal_33 = bLocal_32;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_34);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			bLocal_35 = false;
			fLocal_37 = 0f;
		}
		if (!bLocal_35 == bLocal_36)
		{
			bLocal_36 = bLocal_35;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(17);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_37);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/))
		{
			bLocal_38 = false;
			fLocal_40 = 0f;
		}
		if (!bLocal_38 == bLocal_39)
		{
			bLocal_39 = bLocal_38;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(15);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_40);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			bLocal_41 = false;
			fLocal_43 = 0f;
		}
		if (!bLocal_41 == bLocal_42)
		{
			bLocal_42 = bLocal_41;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_43);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/))
		{
			bLocal_44 = false;
			fLocal_46 = 0f;
		}
		if (!bLocal_44 == bLocal_45)
		{
			bLocal_45 = bLocal_44;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(14);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_46);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_2()//Position - 0x43D
{
	if (CAM::DOES_CAM_EXIST(iLocal_19))
	{
		CAM::DESTROY_CAM(iLocal_19, false);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	__LIB_0__::func_671(0);
	MISC::SET_GAME_PAUSED(false);
	HUD::CLEAR_HELP(true);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_18);
	SCRIPT::TERMINATE_THIS_THREAD();
}

