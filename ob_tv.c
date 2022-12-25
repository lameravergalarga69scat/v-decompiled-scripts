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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int* iLocal_26 = NULL;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	struct<3> Local_31 = { 0, 0, 0 } ;
	float fLocal_32 = 0f;
	int iLocal_33 = 0;
	bool bLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	char cLocal_44[64] = "";
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	char cLocal_53[64] = "";
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	struct<3> Local_68 = { 0, 0, 0 } ;
	int iLocal_69 = 0;
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
	iLocal_21 = 3;
	iLocal_25 = 1;
	iLocal_33 = -1;
	iLocal_40 = -1;
	iLocal_41 = -1;
	iLocal_42 = -1;
	StringCopy(&cLocal_44, "NULL", 64);
	StringCopy(&cLocal_53, "NULL", 64);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_68();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_69))
	{
		iLocal_35 = iScriptParam_69;
		iLocal_38 = iScriptParam_69;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		__LIB_0__::func_467();
		if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_69))
		{
			if ((iLocal_41 != -1 && (__LIB_0__::func_767() && !__LIB_0__::func_766())) && !__LIB_17__::func_252(iLocal_41))
			{
				func_68();
			}
			if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() == 3)
			{
				func_68();
			}
			if (__LIB_0__::func_39(13) || __LIB_0__::func_39(14))
			{
				func_68();
			}
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(iScriptParam_69, 0))
			{
				func_68();
			}
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iScriptParam_69))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					func_62();
					if (ENTITY::GET_ENTITY_HEALTH(iScriptParam_69) < 950)
					{
						func_68();
					}
					switch (iLocal_29)
					{
						case 0:
							func_59();
							if (iLocal_41 == 5)
							{
								if (__LIB_0__::func_178(18) == 1 && __LIB_0__::func_178(20) == 0)
								{
									iLocal_39 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_39))
									{
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_39, 9);
									}
									SCRIPT::TERMINATE_THIS_THREAD();
								}
							}
							if (iLocal_41 == -1)
							{
								func_68();
							}
							else
							{
								__LIB_0__::func_467();
								AUDIO::HINT_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
								Global_32020[iLocal_41 /*11*/].f_2 = 0;
								Global_32020[iLocal_41 /*11*/].f_6 = 1;
								Global_32020[iLocal_41 /*11*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
								Global_32020[iLocal_41 /*11*/].f_1 = 0;
								Global_32020[iLocal_41 /*11*/].f_4 = 0;
								Global_32020[iLocal_41 /*11*/].f_7 = 0;
								Global_32020[iLocal_41 /*11*/].f_8 = 0;
								Global_32020[iLocal_41 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								__LIB_1__::func_31(&iLocal_26);
								func_53();
								func_52();
								SYSTEM::WAIT(0);
								iLocal_29 = 1;
							}
							break;
						case 1:
							if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								SYSTEM::WAIT(0);
							}
							else if (ENTITY::IS_ENTITY_STATIC(iLocal_35) && ENTITY::IS_ENTITY_UPRIGHT(iLocal_35, 90f))
							{
								if (func_44() || Global_32020[iLocal_41 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								__LIB_3__::func_422(&iLocal_40);
							}
							break;
						case 2:
							func_53();
							if (!__LIB_17__::func_252(iLocal_41))
							{
								__LIB_3__::func_422(&iLocal_40);
								if (__LIB_0__::func_1("TV_HLP1" /* GXT: Press ~INPUT_CONTEXT~ to turn on the TV. */))
								{
									HUD::CLEAR_HELP(true);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
							{
								if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_35))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_35, true, false);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
							{
								if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_37))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_37, true, false);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
							{
								if (ENTITY::IS_ENTITY_VISIBLE(iLocal_36))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_36, false, false);
								}
							}
							if (!MISC::ARE_STRINGS_EQUAL(&cLocal_44, "NULL"))
							{
								AUDIO::SET_STATIC_EMITTER_ENABLED(&cLocal_44, false);
							}
							GRAPHICS::SET_TV_AUDIO_FRONTEND(false);
							SYSTEM::WAIT(0);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
							{
								GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(iLocal_38);
							}
							if (!__LIB_17__::func_252(iLocal_41))
							{
								if ((Global_32020[iLocal_41 /*11*/] == 3 || Global_32020[iLocal_41 /*11*/] == 2) || Global_32020[iLocal_41 /*11*/] == -1)
								{
									Global_32020[iLocal_41 /*11*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
								}
								GRAPHICS::SET_TV_CHANNEL(Global_32020[iLocal_41 /*11*/]);
								GRAPHICS::SET_TV_VOLUME(fLocal_30);
							}
							else
							{
								iLocal_42 = Global_32020[iLocal_41 /*11*/];
								iLocal_43 = Global_32020[iLocal_41 /*11*/].f_1;
								GRAPHICS::SET_TV_CHANNEL_PLAYLIST(iLocal_42, __LIB_7__::func_692(iLocal_43), Global_32020[iLocal_41 /*11*/].f_9);
								GRAPHICS::SET_TV_CHANNEL(iLocal_42);
								if (Global_32020[iLocal_41 /*11*/].f_7)
								{
									Global_32020[iLocal_41 /*11*/].f_5 = 0;
									Global_32020[iLocal_41 /*11*/].f_7 = 0;
								}
							}
							Global_32020[iLocal_41 /*11*/].f_2 = 1;
							__LIB_0__::func_183(133, 1);
							__LIB_0__::func_183(131, 1);
							__LIB_0__::func_183(132, 1);
							iLocal_29 = 3;
							break;
						case 3:
							if (Global_32020[iLocal_41 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_32020[iLocal_41 /*11*/].f_7 && __LIB_17__::func_252(iLocal_41))
							{
								Global_32020[iLocal_41 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_38(iLocal_41))
							{
								func_37();
								iLocal_29 = 5;
							}
							else
							{
								func_35();
								if (GRAPHICS::GET_TV_CHANNEL() == -1)
								{
									GRAPHICS::SET_TV_CHANNEL(Global_32020[iLocal_41 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 6;
								}
							}
							break;
						case 5:
							if (func_38(iLocal_41))
							{
								iLocal_29 = 2;
							}
							if (Global_32020[iLocal_41 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						case 6:
							func_1();
							if (iLocal_40 != -1)
							{
								__LIB_3__::func_422(&iLocal_40);
							}
							Global_32020[iLocal_41 /*11*/].f_5 = 0;
							Global_32020[iLocal_41 /*11*/].f_4 = 0;
							Global_32020[iLocal_41 /*11*/].f_1 = 0;
							Global_32020[iLocal_41 /*11*/].f_2 = 0;
							Global_32020[iLocal_41 /*11*/].f_7 = 0;
							Global_32020[iLocal_41 /*11*/].f_8 = 0;
							Global_32020[iLocal_41 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_68();
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	func_68();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()//Position - 0x4E6
{
	if (iLocal_41 != -1)
	{
		Global_32020[iLocal_41 /*11*/] = GRAPHICS::GET_TV_CHANNEL();
	}
	fLocal_30 = GRAPHICS::GET_TV_VOLUME();
	GRAPHICS::SET_TV_CHANNEL(-1);
	func_4();
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("family5")) == 0)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&cLocal_44, "NULL"))
		{
			AUDIO::SET_STATIC_EMITTER_ENABLED(&cLocal_44, true);
		}
	}
	if (((__LIB_0__::func_1("TV_HLP1" /* GXT: Press ~INPUT_CONTEXT~ to turn on the TV. */) || __LIB_0__::func_1("TV_HLP2" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~Press ~INPUT_CONTEXT~ to stop watching.~n~ */)) || __LIB_0__::func_1("TV_HLP5" /* GXT: Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */)) || __LIB_0__::func_1("TV_HLP6" /* GXT: Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */))
	{
		HUD::CLEAR_HELP(true);
	}
	func_3();
	func_52();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_36))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_36, true, false);
		}
	}
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
	func_2();
}

void func_2()//Position - 0x590
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_67 == 1)
		{
			PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
			iLocal_67 = 0;
		}
	}
}

void func_3()//Position - 0x5AC
{
	if (!iLocal_33 == -1)
	{
		HUD::SET_TEXT_RENDER_ID(iLocal_33);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
		{
			if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_screen2") || ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_scre_off"))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_35, false, false);
				if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_scre_off"))
				{
					GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, false);
				}
			}
			else
			{
				GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_37, false, false);
	}
}

void func_4()//Position - 0x643
{
	if (iLocal_65)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (CAM::IS_CAM_ACTIVE(iLocal_62))
		{
			CAM::SET_CAM_ACTIVE(iLocal_62, false);
		}
		CAM::DESTROY_CAM(iLocal_62, false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_31, 1, 0, 2);
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (bLocal_34 == 1)
				{
					bLocal_34 = false;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
			}
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		}
		if (!MISC::ARE_STRINGS_EQUAL(&cLocal_53, "NULL"))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_53))
			{
				AUDIO::STOP_AUDIO_SCENE(&cLocal_53);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_37, true, false);
		}
		__LIB_0__::func_532(0, 1, 0, 0, 0, 0, 0);
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
		iLocal_65 = 0;
	}
}

int func_15()//Position - 0x9CE
{
	if (!__LIB_17__::func_252(iLocal_41))
	{
		if (((((((__LIB_37__::func_276(&iLocal_26) >= 1f && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_68, 1f, 1f, 1.5f, false, true, 0)) && INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_35) == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())) && !__LIB_0__::func_194(8, -1)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_31, 90f)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (iLocal_40 == -1)
			{
				func_29();
				__LIB_7__::func_954(&iLocal_40, 3, "TV_HLP5" /* GXT: Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */, 0, 0, 0, 0);
			}
			else if (__LIB_3__::func_113(iLocal_40, 1))
			{
				__LIB_3__::func_422(&iLocal_40);
				__LIB_1__::func_31(&iLocal_26);
				Global_32020[iLocal_41 /*11*/].f_7 = 0;
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (__LIB_0__::func_1("TV_HLP5" /* GXT: Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */))
			{
				HUD::CLEAR_HELP(true);
			}
			func_2();
			__LIB_3__::func_422(&iLocal_40);
		}
	}
	return 0;
}

void func_16()//Position - 0xADA
{
	if (iLocal_65 == 0)
	{
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/);
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/))
		{
			__LIB_3__::func_422(&iLocal_40);
			__LIB_7__::func_954(&iLocal_40, 3, "TV_HLP6" /* GXT: Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */, 0, 0, 0, 0);
			func_25();
		}
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
		if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		}
		if (bLocal_34)
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
		}
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		GRAPHICS::SET_TV_PLAYER_WATCHING_THIS_FRAME(PLAYER::PLAYER_PED_ID());
		func_23(1, 1);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/);
		__LIB_1__::func_33(0);
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/)))
		{
			__LIB_3__::func_422(&iLocal_40);
			func_4();
		}
	}
}

void func_23(bool bParam0, bool bParam1)//Position - 0xD39
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar0 = 64;
	if (bParam0)
	{
		if (__LIB_38__::func_424(0))
		{
			if (!iLocal_22)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, true);
				}
				if (GRAPHICS::GET_TV_CHANNEL() == 0)
				{
					GRAPHICS::SET_TV_CHANNEL(1);
				}
				else
				{
					GRAPHICS::SET_TV_CHANNEL(0);
				}
				iLocal_22 = 1;
			}
		}
		else if (iLocal_22)
		{
			iLocal_22 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				GRAPHICS::SET_TV_VOLUME(fVar2);
				iLocal_24 = MISC::GET_GAME_TIMER();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				GRAPHICS::SET_TV_VOLUME(fVar2);
				iLocal_24 = MISC::GET_GAME_TIMER();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, true);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || MISC::GET_GAME_TIMER() > iLocal_24 + 24)
			{
				iLocal_23 = 0;
			}
		}
	}
}

void func_25()//Position - 0xECC
{
	float fVar0;
	fVar0 = 50f;
	if (iLocal_65 == 0)
	{
		iLocal_62 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Local_63, Local_64, fVar0, false, 2);
		CAM::SET_CAM_FAR_CLIP(iLocal_62, 100f);
		CAM::SET_CAM_ACTIVE(iLocal_62, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_37, false, false);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				bLocal_34 = true;
			}
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_31, -1, 0, 2);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		}
		if (!MISC::ARE_STRINGS_EQUAL(&cLocal_53, "NULL"))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_53))
			{
				AUDIO::START_AUDIO_SCENE(&cLocal_53);
			}
		}
		__LIB_0__::func_532(1, 1, 0, 0, 0, 0, 0);
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(true);
		iLocal_65 = 1;
	}
}

void func_29()//Position - 0x11C1
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_67 == 0)
		{
			PAD::INIT_PC_SCRIPTED_CONTROLS("TV_Controls");
			iLocal_67 = 1;
		}
	}
}

void func_35()//Position - 0x12C7
{
	float fVar0;
	fVar0 = 1f;
	func_36(&fVar0);
	HUD::SET_TEXT_RENDER_ID(iLocal_33);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
	GRAPHICS::DRAW_TV_CHANNEL(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
}

void func_36(float fParam0)//Position - 0x1308
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_37()//Position - 0x1345
{
	Global_32020[iLocal_41 /*11*/].f_7 = 0;
	Global_32020[iLocal_41 /*11*/] = GRAPHICS::GET_TV_CHANNEL();
	fLocal_30 = GRAPHICS::GET_TV_VOLUME();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_53))
	{
		AUDIO::STOP_AUDIO_SCENE(&cLocal_53);
	}
	if (((__LIB_0__::func_1("TV_HLP1" /* GXT: Press ~INPUT_CONTEXT~ to turn on the TV. */) || __LIB_0__::func_1("TV_HLP2" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~Press ~INPUT_CONTEXT~ to stop watching.~n~ */)) || __LIB_0__::func_1("TV_HLP5" /* GXT: Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */)) || __LIB_0__::func_1("TV_HLP6" /* GXT: Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */))
	{
		HUD::CLEAR_HELP(true);
	}
	__LIB_3__::func_422(&iLocal_40);
	GRAPHICS::SET_TV_CHANNEL(-1);
	SYSTEM::WAIT(0);
	func_3();
	func_52();
}

int func_38(int iParam0)//Position - 0x13C5
{
	struct<3> Var0;
	Var0 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
			break;
		case 4:
			if (Var0.f_2 < 74f)
			{
				return 1;
			}
			break;
		case 5:
			if (Var0.f_2 > 75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_44()//Position - 0x15F3
{
	if (__LIB_37__::func_276(&iLocal_26) < 1f)
	{
		__LIB_3__::func_422(&iLocal_40);
		return 0;
	}
	if ((!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_68, 1f, 1f, 1.5f, false, true, 0) || !PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_31, 90f)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_3__::func_422(&iLocal_40);
		return 0;
	}
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_35) != INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_3__::func_422(&iLocal_40);
		return 0;
	}
	if (__LIB_0__::func_194(8, -1))
	{
		__LIB_3__::func_422(&iLocal_40);
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		__LIB_3__::func_422(&iLocal_40);
		return 0;
	}
	if (Global_97369)
	{
		__LIB_3__::func_422(&iLocal_40);
		return 0;
	}
	if (Global_32020[iLocal_41 /*11*/].f_8)
	{
		__LIB_3__::func_422(&iLocal_40);
		return 0;
	}
	if (iLocal_40 == -1)
	{
		__LIB_7__::func_954(&iLocal_40, 3, "TV_HLP1" /* GXT: Press ~INPUT_CONTEXT~ to turn on the TV. */, 0, 0, 0, 0);
		return 0;
	}
	if (__LIB_3__::func_113(iLocal_40, 1))
	{
		__LIB_3__::func_422(&iLocal_40);
		__LIB_1__::func_31(&iLocal_26);
		Global_32020[iLocal_41 /*11*/].f_7 = 1;
		if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
		}
		__LIB_0__::func_716(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_52()//Position - 0x1DB3
{
	SYSTEM::WAIT(0);
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
		iLocal_33 = -1;
		HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
	}
}

void func_53()//Position - 0x1DDF
{
	int iVar0;
	if (iLocal_41 == 4)
	{
		func_54();
	}
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
	}
	SYSTEM::WAIT(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35))
	{
		func_68();
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_35);
	HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", false);
	HUD::LINK_NAMED_RENDERTARGET(iVar0);
	SYSTEM::WAIT(0);
	if (iLocal_41 != 4)
	{
		while (!HUD::IS_NAMED_RENDERTARGET_LINKED(iVar0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35))
			{
				func_68();
			}
			if (!BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iLocal_35))
			{
				func_68();
			}
			if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
			{
				HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", false);
			}
			if (!HUD::IS_NAMED_RENDERTARGET_LINKED(iVar0))
			{
				HUD::LINK_NAMED_RENDERTARGET(iVar0);
			}
			SYSTEM::WAIT(0);
		}
	}
	iLocal_33 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("tvscreen");
	func_3();
}

void func_54()//Position - 0x1E9D
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
	{
		if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_35 = 0;
	iLocal_35 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2"), Local_31, true, true, false);
	ENTITY::SET_ENTITY_HEADING(iLocal_35, fLocal_32);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_35, true);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_35, false, false);
	iLocal_37 = 0;
	iLocal_37 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2_vl"), Local_31, true, true, false);
	ENTITY::SET_ENTITY_HEADING(iLocal_37, fLocal_32);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_37, true);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_37, false, false);
}

void func_59()//Position - 0x1F88
{
	Local_31 = { ENTITY::GET_ENTITY_COORDS(iLocal_35, true) };
	fLocal_32 = ENTITY::GET_ENTITY_HEADING(iLocal_35);
	__LIB_10__::func_910();
	if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("prop_tv_03"))
	{
		if (SYSTEM::VDIST(Local_31, -9.541955f, -1440.9166f, 31.346916f) < 3f)
		{
			iLocal_41 = 0;
			Local_63 = { -9.8135f, -1440.9128f, 31.3654f };
			Local_64 = { 0f, 0f, -134.3211f };
			Local_68 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_44, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("prop_trev_tv_01"))
	{
		if (SYSTEM::VDIST(Local_31, 1978.425f, 3819.6572f, 34.26763f) < 3f)
		{
			iLocal_41 = 2;
			Local_63 = { 1978.2303f, 3819.6504f, 34.2724f };
			Local_64 = { 0f, 0f, -105.15f };
			Local_68 = { 1978.3303f, 3819.717f, 32.4501f };
			func_60();
			StringCopy(&cLocal_44, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("prop_tv_flat_01"))
	{
		if (SYSTEM::VDIST(Local_31, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_41 = 1;
			Local_63 = { 2.5724f, 527.9989f, 176.1619f };
			Local_64 = { 0f, 0f, -29.9488f };
			Local_68 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_44, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("prop_tv_flat_02"))
	{
		if (SYSTEM::VDIST(Local_31, -1160.6947f, -1520.7448f, 10.49168f) < 3f)
		{
			iLocal_41 = 3;
			Local_63 = { -1160.5024f, -1520.7598f, 10.7393f };
			Local_64 = { 0f, 0f, 60.061f };
			Local_68 = { -1160.143f, -1520.4946f, 9.6555f };
			StringCopy(&cLocal_44, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_53, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_screen2") || ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_scre_off"))
	{
		if (SYSTEM::VDIST(Local_31, -802.25275f, 173.03743f, 74.35708f) < 3f)
		{
			iLocal_41 = 4;
			Local_63 = { -802.8972f, 172.537f, 74.5801f };
			Local_64 = { 0f, 0f, -69.0273f };
			Local_68 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_53, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("des_tvsmash_start"))
	{
		if (SYSTEM::VDIST(Local_31, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_41 = 5;
			Local_63 = { -808.3051f, 171.2623f, 77.2822f };
			Local_64 = { 1.8886f, 0f, 110.9232f };
			Local_68 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_53, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_60()//Position - 0x2277
{
	iLocal_36 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_tt_screenstatic"), Local_31, true, true, false);
	ENTITY::SET_ENTITY_HEADING(iLocal_36, fLocal_32);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_36, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_36, true);
}

void func_62()//Position - 0x22DE
{
	if (iLocal_41 == -1)
	{
		return;
	}
	if (Global_32020[iLocal_41 /*11*/].f_10 == 0)
	{
		if (iLocal_66 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_38, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_35, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_37, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_36, false);
			}
			iLocal_66 = 0;
		}
	}
	else if (iLocal_66 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_38, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_35, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_37, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_36, true);
		}
		iLocal_66 = 1;
	}
}

void func_68()//Position - 0x2406
{
	if (iLocal_41 == -1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	__LIB_3__::func_422(&iLocal_40);
	if (iLocal_41 != -1)
	{
		func_1();
		Global_32020[iLocal_41 /*11*/].f_6 = 0;
		Global_32020[iLocal_41 /*11*/].f_7 = 0;
		Global_32020[iLocal_41 /*11*/].f_8 = 0;
		Global_32020[iLocal_41 /*11*/].f_4 = 0;
		Global_32020[iLocal_41 /*11*/].f_5 = 0;
		Global_32020[iLocal_41 /*11*/].f_2 = 0;
		Global_32020[iLocal_41 /*11*/] = -1;
		Global_32020[iLocal_41 /*11*/].f_1 = 0;
		Global_32020[iLocal_41 /*11*/].f_10 = 0;
	}
	if ((__LIB_0__::func_1("TV_HLP1" /* GXT: Press ~INPUT_CONTEXT~ to turn on the TV. */) || __LIB_0__::func_1("TV_HLP5" /* GXT: Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */)) || __LIB_0__::func_1("TV_HLP6" /* GXT: Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */))
	{
		HUD::CLEAR_HELP(true);
	}
	SYSTEM::WAIT(0);
	func_69();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_53))
	{
		AUDIO::STOP_AUDIO_SCENE(&cLocal_53);
	}
	AUDIO::UNHINT_AMBIENT_AUDIO_BANK();
	func_2();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_69()//Position - 0x24CD
{
	func_52();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_35))
	{
		if (ENTITY::GET_ENTITY_MODEL(iLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			OBJECT::DELETE_OBJECT(&iLocal_35);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_screen2"));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
	{
		OBJECT::DELETE_OBJECT(&iLocal_37);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_screen2_vl"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
	{
		OBJECT::DELETE_OBJECT(&iLocal_36);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tt_screenstatic"));
	}
}

