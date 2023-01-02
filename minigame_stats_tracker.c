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
	int* iLocal_47 = NULL;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<68> ScriptParam_0 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_19();
	}
	while (true)
	{
		switch (iLocal_45)
		{
			case 0:
				iLocal_46 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mission_complete");
				iLocal_45 = 1;
				break;
			case 1:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_46))
				{
					iLocal_45 = 2;
				}
				break;
			case 2:
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(iLocal_46, "SET_MISSION_TITLE", ScriptParam_50.f_0, ScriptParam_50.f_1, 0, 0, 0);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_46, "SET_MISSION_TITLE_COLOUR", ScriptParam_50.f_2, ScriptParam_50.f_2, ScriptParam_50.f_2, -1f, -1f);
				if (ScriptParam_50.f_5.f_1 != -1f && !MISC::IS_STRING_NULL(ScriptParam_50.f_5.f_2))
				{
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_46, "SET_TOTAL", SYSTEM::TO_FLOAT(ScriptParam_50.f_5), ScriptParam_50.f_5.f_1, -1f, -1f, -1f, ScriptParam_50.f_5.f_2, 0, 0, 0, 0);
				}
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_46, "SET_MEDAL", SYSTEM::TO_FLOAT(ScriptParam_50.f_5), -1f, -1f, -1f, -1f);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_46, "SET_SOCIAL_CLUB_INFO", 0f, -1f, -1f, -1f, -1f);
				iVar0 = 0;
				while (iVar0 < ScriptParam_50.f_66 + 1)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_46, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ScriptParam_50.f_9[iVar0 /*7*/]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ScriptParam_50.f_9[iVar0 /*7*/].f_1);
					if (ScriptParam_50.f_9[iVar0 /*7*/].f_2 == 4)
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(SYSTEM::FLOOR((ScriptParam_50.f_9[iVar0 /*7*/].f_3 * 1000f)), 6);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						if (!MISC::IS_STRING_NULL(ScriptParam_50.f_9[iVar0 /*7*/].f_5))
						{
							__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
						}
					}
					else if (ScriptParam_50.f_9[iVar0 /*7*/].f_2 == 8)
					{
						if (!MISC::IS_STRING_NULL(ScriptParam_50.f_9[iVar0 /*7*/].f_5) && !MISC::IS_STRING_NULL(ScriptParam_50.f_9[iVar0 /*7*/].f_6))
						{
							GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(ScriptParam_50.f_9[iVar0 /*7*/].f_6);
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
							GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						}
					}
					else
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ScriptParam_50.f_9[iVar0 /*7*/].f_2);
						if ((ScriptParam_50.f_9[iVar0 /*7*/].f_3 % 1f) == 0f)
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(ScriptParam_50.f_9[iVar0 /*7*/].f_3);
						}
						else
						{
							GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
							HUD::ADD_TEXT_COMPONENT_FLOAT(ScriptParam_50.f_9[iVar0 /*7*/].f_3, 2);
							GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						}
						if ((ScriptParam_50.f_9[iVar0 /*7*/].f_4 % 1f) == 0f)
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(ScriptParam_50.f_9[iVar0 /*7*/].f_4);
						}
						else
						{
							GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
							HUD::ADD_TEXT_COMPONENT_FLOAT(ScriptParam_50.f_9[iVar0 /*7*/].f_4, 2);
							GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						}
						if (!MISC::IS_STRING_NULL(ScriptParam_50.f_9[iVar0 /*7*/].f_5))
						{
							__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
						}
						if (!MISC::IS_STRING_NULL(ScriptParam_50.f_9[iVar0 /*7*/].f_6))
						{
							__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING(ScriptParam_50.f_9[iVar0 /*7*/].f_6);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iVar0++;
				}
				if (ScriptParam_50.f_5 != 0 && !MISC::IS_STRING_NULL(ScriptParam_50.f_5.f_2))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_46, "SET_TOTAL");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ScriptParam_50.f_5);
					if (!MISC::IS_STRING_NULL(ScriptParam_50.f_5.f_3))
					{
						__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING(ScriptParam_50.f_5.f_3);
					}
					else
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(ScriptParam_50.f_5.f_1);
					}
					__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING(ScriptParam_50.f_5.f_2);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_46, "DRAW_MENU_LIST");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				__LIB_0__::func_366(1);
				__LIB_3__::func_128(&iLocal_47);
				if (!__LIB_0__::func_703(Global_113386.f_19097, 4096))
				{
					__LIB_1__::func_330(&(Global_113386.f_19097), 4096);
				}
				iLocal_45 = 3;
				break;
			case 3:
				if (((__LIB_37__::func_276(&iLocal_47) > ScriptParam_50.f_67 && ScriptParam_50.f_67 != -1f) || CAM::IS_SCREEN_FADED_OUT()) || Global_32104)
				{
					func_19();
				}
				else
				{
					__LIB_0__::func_704(1);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_46, 0.1495f, 0.3159f, 0.2021f, 0.5111f, 255, 255, 255, 0, 0);
					if (HUD::IS_HUD_COMPONENT_ACTIVE(10))
					{
						HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
					}
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
	func_19();
}

void func_19()//Position - 0x736
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_46);
	Global_32104 = 0;
	__LIB_0__::func_704(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

