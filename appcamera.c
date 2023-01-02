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
	char* sLocal_19[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_20[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_21 = 0;
	char* sLocal_22[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	struct<3> Local_34 = { 0, 0, 0 } ;
	struct<3> Local_35 = { 0, 0, 0 } ;
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	struct<3> Local_41 = { 0, 0, 0 } ;
	struct<3> Local_42 = { 0, 0, 0 } ;
	struct<3> Local_43 = { 0, 0, 0 } ;
	struct<3> Local_44 = { 0, 0, 0 } ;
	struct<3> Local_45 = { 0, 0, 0 } ;
	struct<3> Local_46 = { 0, 0, 0 } ;
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	float fLocal_65 = 0f;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	char cLocal_96[16] = "";
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
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
	iLocal_26 = 1;
	bLocal_29 = true;
	bLocal_30 = true;
	fLocal_36 = 0f;
	fLocal_37 = 172f;
	fLocal_40 = 0.7f;
	iLocal_88 = 1200;
	iLocal_89 = 1200;
	iLocal_90 = 166;
	fLocal_107 = 0.5f;
	fLocal_108 = 0.85f;
	fLocal_109 = 0.5f;
	fLocal_110 = -0.25f;
	fLocal_111 = 0.25f;
	fLocal_112 = 0.3f;
	fLocal_113 = 0.3f;
	fLocal_114 = 0.075f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
	{
		fLocal_40 = 1f;
	}
	else
	{
		fLocal_40 = 0.7f;
	}
	if (!func_173())
	{
		Global_4539953 = 99;
		Global_4539954 = 99;
		iLocal_24 = 99;
	}
	else
	{
		Global_4539953 = 0;
		Global_4539954 = 0;
	}
	sLocal_19[0] = "No_Filter" /* GXT: No Filter */;
	sLocal_19[1] = "phone_cam1";
	sLocal_19[2] = "phone_cam2";
	sLocal_19[3] = "phone_cam3";
	sLocal_19[4] = "phone_cam4";
	sLocal_19[5] = "phone_cam5";
	sLocal_19[6] = "phone_cam6";
	sLocal_19[7] = "phone_cam7";
	sLocal_19[8] = "phone_cam8";
	sLocal_19[9] = "phone_cam9";
	sLocal_19[10] = "phone_cam10";
	sLocal_19[11] = "phone_cam11";
	sLocal_19[12] = "phone_cam12";
	sLocal_20[0] = "No_Border";
	sLocal_20[1] = "frame1";
	sLocal_20[2] = "frame2";
	sLocal_20[3] = "frame3";
	sLocal_20[4] = "frame4";
	sLocal_20[5] = "frame5";
	sLocal_20[6] = "frame6";
	sLocal_20[7] = "frame7";
	sLocal_20[8] = "frame8";
	sLocal_20[9] = "frame9";
	sLocal_20[10] = "frame10";
	sLocal_20[11] = "frame11";
	sLocal_20[12] = "frame12";
	sLocal_22[0] = "No_Expression";
	sLocal_22[1] = "mood_Aiming_1";
	sLocal_22[2] = "mood_Happy_1";
	sLocal_22[3] = "mood_smug_1";
	sLocal_22[4] = "mood_Injured_1";
	sLocal_22[5] = "mood_sulk_1";
	sLocal_22[6] = "mood_Angry_1";
	func_172();
	if (func_171(1, 1, !iLocal_31, 1))
	{
		iLocal_31 = 1;
	}
	__LIB_0__::func_467();
	iLocal_63 = AUDIO::GET_SOUND_ID();
	if (Global_20211 == 0)
	{
		fLocal_47 = 0.207f;
		fLocal_48 = 0.158f;
		fLocal_49 = 0.207f;
		fLocal_50 = 0.335f;
	}
	else
	{
		fLocal_47 = 0.24f;
		fLocal_48 = 0.258f;
		fLocal_49 = 0.24f;
		fLocal_50 = 0.435f;
	}
	Global_22638 = 0;
	Global_22639 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			Global_22638 = 1;
		}
		if (GRAPHICS::GET_USINGNIGHTVISION())
		{
			Global_22638 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
		{
			Global_22638 = 1;
		}
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			Global_22638 = 1;
		}
		if (PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
		{
			Global_22638 = 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (iLocal_82 == 1)
			{
				Global_22638 = 1;
			}
			iLocal_99 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if ((((ENTITY::GET_ENTITY_MODEL(iLocal_99) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(iLocal_99) == joaat("cutter")) || ENTITY::GET_ENTITY_MODEL(iLocal_99) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iLocal_99) == joaat("khanjali")) || (ENTITY::GET_ENTITY_MODEL(iLocal_99) == joaat("barrage") && VEHICLE::IS_TURRET_SEAT(iLocal_99, __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 1))))
			{
				Global_22638 = 1;
			}
			else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_99, -1, false) == PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_99) > 0f)
				{
					if (!Global_78319)
					{
						if (!__LIB_0__::func_157(0))
						{
							TASK::TASK_VEHICLE_TEMP_ACTION(PLAYER::PLAYER_PED_ID(), iLocal_99, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_78319)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
		}
	}
	MISC::CLEAR_BIT(&Global_8136, 21);
	__LIB_16__::func_922(0);
	MISC::SET_BIT(&Global_8136, 17);
	if (Global_20208 == 0)
	{
		func_166();
	}
	else
	{
		iLocal_91 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("camera_gallery");
		iLocal_92 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_91) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_92))
		{
			SYSTEM::WAIT(0);
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
		}
		if (Global_78319)
		{
			iLocal_95 = 2;
		}
		else
		{
			switch (__LIB_13__::func_533())
			{
				case 0:
					iLocal_95 = 2;
					break;
				case 2:
					iLocal_95 = 2;
					break;
				case 3:
					iLocal_95 = 2;
					break;
				}
		}
		__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
		__LIB_16__::func_287(iLocal_91, "CLOSE_SHUTTER");
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "DISPLAY_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	Local_41 = { Global_20226 };
	Local_42 = { Global_20219[Global_20211 /*3*/] };
	Global_22639 = 1;
	iLocal_69 = 1;
	iLocal_70 = 1;
	iLocal_71 = 1;
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 0;
	if (Global_20266.f_1 > 3)
	{
		Global_20266.f_1 = 8;
	}
	if (iLocal_82 == 0)
	{
		MISC::CLEAR_BIT(&Global_8138, 3);
	}
	func_161();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	if (NETWORK::NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV())
	{
	}
	if (Global_4718592.f_163007)
	{
	}
	if (Global_4718592.f_163009 == 1)
	{
		iLocal_106 = 1;
	}
	if (iLocal_106 == 1)
	{
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20235);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 186 /*INPUT_CELLPHONE_CAMERA_EXPRESSION*/);
		RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
		if (__LIB_0__::func_93())
		{
			if (!BitTest(Global_4541229, 2))
			{
				MISC::SET_BIT(&Global_4541229, 2);
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (!Global_113386.f_14051.f_81)
		{
			if (!BitTest(Global_4541229, 13))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!BitTest(Global_8137, 28))
					{
						if ((iLocal_79 && iLocal_82 == 0) && !__LIB_0__::func_93())
						{
							MISC::SET_BIT(&Global_4541229, 13);
							Global_113386.f_14051.f_81 = 1;
							__LIB_0__::func_151("CELL_FOC_HLP" /* GXT: Hold ~INPUT_CELLPHONE_CAMERA_FOCUS_LOCK~ to initiate Focus Lock. This will lock the viewfinder's focus distance and allow you to recompose your shot. */, -1);
						}
					}
				}
			}
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_4718592.f_163006 == 0 && Global_4718592.f_163007 == 0)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			func_158();
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
			}
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 91 /*INPUT_VEH_PASSENGER_AIM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
			if (iLocal_100 == 0)
			{
				PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20239);
			}
			PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20236);
			if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !__LIB_0__::func_93())
			{
				iLocal_81 = 1;
				Global_20266.f_1 = 3;
				MISC::SET_GAME_PAUSED(false);
			}
			if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
			{
				Global_20266.f_1 = 3;
				MISC::SET_GAME_PAUSED(false);
			}
			if (BitTest(Global_8137, 3))
			{
				Global_20266.f_1 = 3;
				MISC::SET_GAME_PAUSED(false);
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (__LIB_0__::func_959())
				{
					Global_20266.f_1 = 3;
					MISC::SET_GAME_PAUSED(false);
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
				{
					Global_20266.f_1 = 3;
					MISC::SET_GAME_PAUSED(false);
				}
				if ((PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					if (__LIB_13__::func_88())
					{
					}
					else
					{
						Global_20266.f_1 = 3;
						MISC::SET_GAME_PAUSED(false);
					}
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_78319 == 1)
					{
						Global_20266.f_1 = 3;
					}
				}
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f)
					{
						Global_20266.f_1 = 3;
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					func_148();
					iLocal_99 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_99) < 0f)
					{
						__LIB_0__::func_366(0);
					}
					if (iLocal_66 == 1)
					{
						if (iLocal_67 == 1)
						{
							if (!CAM::IS_IN_VEHICLE_MOBILE_PHONE_CAMERA_RENDERING())
							{
								__LIB_0__::func_366(0);
							}
						}
						else if (!CAM::IS_IN_VEHICLE_MOBILE_PHONE_CAMERA_RENDERING())
						{
							iLocal_67 = 1;
							SYSTEM::WAIT(0);
							RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
						}
					}
				}
				else if (Global_78319 == 0)
				{
					if (BitTest(Global_8136, 18))
					{
						__LIB_0__::func_698();
						if ((Global_20266 == 0 || Global_20266 == 1) || Global_20266 == 2)
						{
							if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
								{
								}
								else
								{
									Global_20266.f_1 = 3;
									MISC::SET_GAME_PAUSED(false);
								}
							}
						}
					}
				}
			}
			if (iLocal_93)
			{
				func_143();
			}
			if (Global_20266.f_1 < 4)
			{
			}
			if (iLocal_103 == 0)
			{
				if (iLocal_54 == 0)
				{
					if (iLocal_55 == 0)
					{
						if (iLocal_62 == 0)
						{
							if (Global_20266.f_1 > 3)
							{
								if (iLocal_100)
								{
									func_141();
									if (Global_22643 == 0 && Global_22640 == 6)
									{
										HUD::CLEAR_FLOATING_HELP(0, true);
										HUD::BUSYSPINNER_OFF();
										iLocal_100 = 0;
										func_140();
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
										{
											Local_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
										}
										__LIB_13__::func_90();
										iLocal_60++;
										if (func_173())
										{
											__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_128();
									}
									if (Global_22640 == 0)
									{
										iLocal_100 = 0;
										HUD::BUSYSPINNER_OFF();
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
										{
											Local_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
										}
										func_127();
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_128();
										if (func_173())
										{
											if (Global_4539954 == 0)
											{
												if (!BitTest(Global_4541229, 2))
												{
													__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!BitTest(Global_4541229, 2))
										{
											__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_126();
										func_125(1);
									}
								}
								else if (Global_20266.f_1 != 9)
								{
									if (Global_22639 == 1)
									{
										if (Global_22638 == 0)
										{
											func_124();
										}
									}
									else if ((Global_8744 - Global_8743) > Global_8745)
									{
										if (CAM::IS_SCREEN_FADED_OUT() && __LIB_13__::func_87())
										{
											if (__LIB_16__::func_923() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												MISC::SET_GAME_PAUSED(false);
												AUDIO::STOP_SOUND(iLocal_63);
												iLocal_94 = 0;
												if (Global_22638 == 0)
												{
													__LIB_13__::func_90();
													Global_22638 = 1;
													HUD::CLEAR_FLOATING_HELP(0, true);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_121(0, 0);
													func_125(0);
													iLocal_66 = 0;
													func_116(1);
													iLocal_93 = 0;
													__LIB_0__::func_203(0, 1);
													__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
													__LIB_31__::func_675(1);
												}
											}
										}
										if (__LIB_13__::func_85(2, Global_20234, 0))
										{
											if (__LIB_0__::func_93())
											{
												if (((Global_1931426 || Global_1574964) || Global_22641) || BitTest(Global_8136, 21))
												{
												}
												else if (__LIB_16__::func_923() && iLocal_78)
												{
												}
												else if (!__LIB_13__::func_87())
												{
													if (iLocal_78 == 0)
													{
														CAM::DO_SCREEN_FADE_OUT(500);
														iLocal_94 = 0;
														__LIB_0__::func_203(1, 1);
														__LIB_31__::func_674(1);
													}
												}
											}
											else if (__LIB_16__::func_923() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												MISC::SET_GAME_PAUSED(false);
												AUDIO::STOP_SOUND(iLocal_63);
												iLocal_94 = 0;
												if (Global_22638 == 0)
												{
													__LIB_13__::func_90();
													Global_22638 = 1;
													HUD::CLEAR_FLOATING_HELP(0, true);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_121(0, 0);
													func_125(0);
													iLocal_66 = 0;
													func_116(1);
													iLocal_93 = 0;
													__LIB_0__::func_203(0, 1);
													__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_52 == 0)
									{
										if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											func_109();
											iLocal_52 = 1;
										}
									}
									else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_109();
										iLocal_52 = 0;
									}
									if (iLocal_53 == 0)
									{
										if (BitTest(Global_8136, 28))
										{
											func_109();
											iLocal_53 = 1;
										}
									}
									else if (!BitTest(Global_8136, 28))
									{
										func_109();
										iLocal_53 = 0;
									}
									if (Global_22638 == 1)
									{
										func_98();
									}
									else if (Global_20266.f_1 > 4)
									{
										if (iLocal_75 == 1 && iLocal_76 == 0)
										{
											func_94();
										}
										if (iLocal_75 == 0 && iLocal_76 == 1)
										{
											func_127();
											if (iLocal_87 == 1 || iLocal_87 == 0)
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
													{
														__LIB_16__::func_287(iLocal_91, "CLOSE_SHUTTER");
														iLocal_86 = MISC::GET_GAME_TIMER();
														while (MISC::GET_GAME_TIMER() < (iLocal_86 + iLocal_88) && Global_20266.f_1 > 3)
														{
															func_158();
															func_143();
															func_93();
															RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
															SYSTEM::WAIT(0);
														}
													}
												}
												if (func_173())
												{
													if (Global_4539954 == 0)
													{
														if (!BitTest(Global_4541229, 2))
														{
															__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!BitTest(Global_4541229, 2))
												{
													__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_143();
												func_158();
												iLocal_83 = 0;
												iLocal_84 = 0;
												iLocal_85 = 0;
												iLocal_78 = 0;
												func_128();
												iLocal_87 = 0;
												__LIB_16__::func_287(iLocal_91, "OPEN_SHUTTER");
											}
											func_126();
											func_125(1);
											func_92();
										}
									}
									if (iLocal_94 == 1)
									{
										func_89();
									}
									if (iLocal_80)
									{
										if (SYSTEM::TIMERB() > 500)
										{
											iLocal_79 = 1;
											iLocal_80 = 0;
											MISC::SET_BIT(&Global_8136, 18);
											if (Global_22638 == 0)
											{
												__LIB_0__::func_203(1, 1);
											}
										}
									}
									if (iLocal_78 == 0)
									{
										if (iLocal_79 && Global_22638 == 0)
										{
											if ((iLocal_81 == 0 && iLocal_76 == 0) && Global_22641 == 0)
											{
												func_12();
											}
										}
										else
										{
											func_93();
										}
									}
									else if (iLocal_75 == 0)
									{
										func_7();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_20266.f_1 > 3)
					{
						if (Global_22639 == 1)
						{
							if (Global_22638 == 0)
							{
								func_124();
							}
						}
					}
					func_6();
				}
			}
			else
			{
				if (iLocal_105 == 1)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "CELL_CAM_FW_1" /* GXT: Camera storage device full. */, iLocal_102, "CELL_CAM_FW_2" /* GXT: Access the Gallery from the Pause Menu to delete some photos. */, false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 2)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "ERROR_NO_SC_CAMERAPHONE" /* GXT: Unable to save your Snapmatic photo as you are not signed up or in to ~HUD_COLOUR_SOCIAL_CLUB~Social Club~s~. */, iLocal_102, "", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 6)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "SC_ERROR_BANNED" /* GXT: You have been banned from using Social Club services. */, iLocal_102, "", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 3)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "ERROR_UPDATE_SC_CAMERAPHONE" /* GXT: Accept the latest ~HUD_COLOUR_SOCIAL_CLUB~Social Club~s~ Online Policies to save your Snapmatic photos to the Gallery. Sign in or visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ for more information. */, iLocal_102, "", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 7)
				{
					if (MISC::IS_XBOX360_VERSION() || __LIB_0__::func_53())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "CELL_CAM_TEMP_3X" /* GXT: To save Snapmatic phone app photos to the Gallery you must be signed in to Xbox LIVE */, iLocal_102, "", false, -1, "", "", true, 0);
					}
					if (MISC::IS_PS3_VERSION() || __LIB_0__::func_52())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "CELL_CAM_TEMP_3P" /* GXT: To save Snapmatic phone app photos to the Gallery you must be signed in to PSN℠ */, iLocal_102, "", false, -1, "", "", true, 0);
					}
					if (MISC::IS_PC_VERSION())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "CELL_CAM_TEMP_30" /* GXT: To save Snapmatic phone app photos to the Gallery you must be signed in. */, iLocal_102, "", false, -1, "", "", true, 0);
					}
				}
				if (iLocal_105 == 4)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "CELL_CAM_CCW_1" /* GXT: Unable to save photos as the cloud connection is unavailable. */, iLocal_102, "CELL_CAM_CCW_2" /* GXT: Please try again later. */, false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 5)
				{
					iVar0 = NETWORK::NETWORK_GET_AGE_GROUP();
					switch (iVar0)
					{
						case -1:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "HUD_AGE_I" /* GXT: Snapmatic features are unavailable. An error occurred whilst validating your account's eligibility. */, iLocal_102, "", false, -1, "", "", true, 0);
							break;
						case 0:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "HUD_AGE_P" /* GXT: Snapmatic features are temporarily unavailable. Please try again later. */, iLocal_102, "", false, -1, "", "", true, 0);
							break;
						case 1:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "HUD_AGE_C" /* GXT: Snapmatic features are disabled on this account due to eligibility restrictions. */, iLocal_102, "", false, -1, "", "", true, 0);
							break;
						case 2:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "HUD_AGE_T" /* GXT: Snapmatic features are currently disabled on this account due to eligibility restrictions. */, iLocal_102, "", false, -1, "", "", true, 0);
							break;
						default:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT" /* GXT: ALERT */, "HUD_AGE_P" /* GXT: Snapmatic features are temporarily unavailable. Please try again later. */, iLocal_102, "", false, -1, "", "", true, 0);
							break;
						}
				}
				if (iLocal_105 == 0)
				{
				}
				if (iLocal_105 == 2 || iLocal_105 == 3)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						__LIB_0__::func_203(0, 1);
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
					{
						iLocal_104 = 1;
					}
					if (iLocal_104 == 1)
					{
						if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							__LIB_0__::func_203(0, 1);
							iLocal_104 = 0;
							HUD::SET_SOCIAL_CLUB_TOUR("Gallery");
							HUD::OPEN_SOCIAL_CLUB_MENU();
						}
					}
				}
				else if (iLocal_105 == 7)
				{
					if (__LIB_0__::func_52())
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							__LIB_0__::func_203(0, 1);
							iLocal_62 = 0;
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						__LIB_0__::func_203(0, 1);
						iLocal_62 = 0;
					}
					if (!__LIB_0__::func_52())
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, Global_20238))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							__LIB_0__::func_203(0, 1);
							if (BitTest(Global_8137, 28))
							{
								iLocal_62 = 0;
							}
							else
							{
								iLocal_62 = 2;
							}
							iLocal_58 = MISC::GET_GAME_TIMER();
							PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(true);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
				{
					iLocal_103 = 0;
					iLocal_105 = 0;
					__LIB_0__::func_203(0, 1);
				}
			}
		}
		iLocal_59 = MISC::GET_GAME_TIMER();
		if (__LIB_0__::func_93())
		{
			if (!BitTest(Global_4541229, 2))
			{
				MISC::SET_BIT(&Global_4541229, 2);
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (__LIB_13__::func_83() || iLocal_81)
		{
			__LIB_13__::func_120(0);
			func_121(0, 0);
			func_125(0);
			iLocal_66 = 0;
			func_116(1);
			Global_22638 = 0;
			Global_22639 = 0;
			Global_22641 = 0;
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_91);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_92);
			MISC::SET_GAME_PAUSED(false);
			if (Global_20466 == 1)
			{
				MISC::SET_BIT(&Global_8136, 17);
			}
			else
			{
				MISC::CLEAR_BIT(&Global_8136, 17);
			}
			HUD::CLEAR_FLOATING_HELP(0, true);
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
			MISC::CLEAR_BIT(&Global_8138, 3);
			MISC::CLEAR_BIT(&Global_4541229, 3);
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_22642 = 1;
			AUDIO::STOP_SOUND(iLocal_63);
			AUDIO::RELEASE_SOUND_ID(iLocal_63);
			HUD::BUSYSPINNER_OFF();
			func_116(1);
			MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
			MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(1f);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
			}
			if (Global_4539954 > 0 && Global_4539954 < 13)
			{
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_20[Global_4539954]);
			}
			MISC::CLEAR_BIT(&Global_8136, 18);
			if (__LIB_0__::func_93())
			{
				__LIB_0__::func_203(1, 1);
			}
			else
			{
				__LIB_0__::func_203(0, 1);
			}
			if (func_171(0, 1, iLocal_31, 1))
			{
				iLocal_31 = 0;
			}
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
}

void func_6()//Position - 0x1304
{
	iLocal_57 = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(0);
	switch (iLocal_57)
	{
		case 0:
			iLocal_54 = 0;
			iLocal_60 = GRAPHICS::GET_CURRENT_NUMBER_OF_CLOUD_PHOTOS();
			iLocal_61 = GRAPHICS::GET_MAXIMUM_NUMBER_OF_CLOUD_PHOTOS();
			if (iLocal_55 == 1)
			{
				if (iLocal_78 == 0)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_91))
					{
						if (func_173())
						{
							if (Global_4539954 == 0)
							{
								if (!BitTest(Global_4541229, 2))
								{
									__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!BitTest(Global_4541229, 2))
							{
								__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_91))
				{
					__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
				}
				iLocal_55 = 0;
			}
			HUD::BUSYSPINNER_OFF();
			break;
		case 1:
			if (!HUD::BUSYSPINNER_IS_ON())
			{
				HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("CELL_SPINNER2" /* GXT: Scanning System Storage */);
				HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
			}
			break;
		case 2:
			if (BitTest(Global_8137, 28))
			{
				iLocal_54 = 0;
				iLocal_60 = 0;
				iLocal_61 = 0;
			}
			else
			{
				Global_20266.f_1 = 3;
				Global_22642 = 1;
			}
			HUD::BUSYSPINNER_OFF();
			break;
	}
}

void func_7()//Position - 0x1496
{
	if (__LIB_13__::func_85(2, Global_20235, 0))
	{
		__LIB_13__::func_120(0);
		if (BitTest(Global_8137, 28))
		{
			MISC::SET_GAME_PAUSED(false);
			SYSTEM::SETTIMERB(0);
			func_140();
			iLocal_78 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			__LIB_13__::func_90();
			iLocal_87 = 1;
		}
		else if (func_11())
		{
			if (BitTest(Global_8137, 14))
			{
				__LIB_0__::func_151("CELL_299" /* GXT: Cannot save as last picture failed. */, -1);
			}
			else
			{
				__LIB_13__::func_90();
				func_10();
			}
		}
		else
		{
			iLocal_103 = 1;
			__LIB_0__::func_203(1, 1);
		}
	}
	if (BitTest(Global_8136, 22))
	{
		__LIB_13__::func_120(0);
		while (SYSTEM::TIMERA() < 2000)
		{
			SYSTEM::WAIT(0);
			func_158();
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			func_93();
			func_148();
			func_143();
		}
		MISC::SET_GAME_PAUSED(false);
		func_140();
		SYSTEM::SETTIMERB(0);
		iLocal_78 = 0;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			Local_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_128();
		__LIB_13__::func_90();
	}
	if (__LIB_13__::func_85(2, Global_20239, 0))
	{
		__LIB_13__::func_120(0);
		if (__LIB_16__::func_923() || BitTest(Global_8137, 28))
		{
		}
		else
		{
			MISC::SET_GAME_PAUSED(false);
			SYSTEM::SETTIMERB(0);
			iLocal_87 = 1;
			func_140();
			iLocal_78 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			__LIB_13__::func_90();
		}
	}
	if (BitTest(Global_8136, 28))
	{
		if (__LIB_13__::func_85(2, Global_20238, 0))
		{
			__LIB_13__::func_120(0);
			MISC::SET_GAME_PAUSED(false);
			GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
			SYSTEM::WAIT(0);
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			func_158();
			SYSTEM::WAIT(0);
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			func_158();
			GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
			GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
			Global_22642 = 1;
			iLocal_94 = 0;
			iLocal_77 = 0;
			__LIB_0__::func_203(0, 1);
			Global_22638 = 1;
			HUD::CLEAR_FLOATING_HELP(0, true);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			__LIB_13__::func_111();
			iLocal_78 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			func_121(0, 0);
			func_125(0);
			iLocal_66 = 0;
			func_116(1);
			if (!Global_2815059.f_6689)
			{
				MISC::SET_BIT(&Global_8136, 9);
			}
			iLocal_93 = 0;
			__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_10()//Position - 0x16FC
{
	iLocal_100 = 1;
	Global_22643 = 1;
	HUD::CLEAR_FLOATING_HELP(0, true);
}

int func_11()//Position - 0x1711
{
	if (iLocal_58 == iLocal_59)
	{
		if (iLocal_56)
		{
			iLocal_56 = 1;
		}
	}
	if (Global_20266.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_60 == iLocal_61 || iLocal_60 > iLocal_61)
	{
		iLocal_105 = 1;
		iLocal_102 = 2;
		return 0;
	}
	return 1;
}

void func_12()//Position - 0x1759
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_82)
	{
		func_84();
		func_80();
		func_79();
		fLocal_36 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		fLocal_37 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		if (iLocal_84 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1))
			{
				iLocal_84 = 1;
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (BitTest(Global_8136, 28))
				{
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/, true), func_67());
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 178 /*INPUT_CELLPHONE_OPTION*/, true), "CELL_CAM_SELFIE_2" /* GXT: Reset Camera */);
				}
				else
				{
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_280" /* GXT: Take Photo */);
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 178 /*INPUT_CELLPHONE_OPTION*/, true), "CELL_CAM_SELFIE_2" /* GXT: Reset Camera */);
				}
				func_66();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_40);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1))
		{
			iLocal_84 = 0;
			func_128();
		}
		if (iLocal_85 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
			{
				iLocal_85 = 1;
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (BitTest(Global_8136, 28))
				{
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/, true), func_67());
				}
				else if (!__LIB_0__::func_93())
				{
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_280" /* GXT: Take Photo */);
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
				}
				else
				{
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_280" /* GXT: Take Photo */);
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
				}
				func_65();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_40);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
		{
			iLocal_85 = 0;
			func_128();
		}
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
	}
	if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
	{
		func_128();
	}
	func_148();
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
	}
	if (__LIB_0__::func_93())
	{
		if (!BitTest(Global_4541229, 2))
		{
			MISC::SET_BIT(&Global_4541229, 2);
			__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/) && iLocal_106 == 0) && !__LIB_0__::func_93())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20255, true);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (BitTest(Global_4541229, 2))
				{
					MISC::CLEAR_BIT(&Global_4541229, 2);
					if (!BitTest(Global_4541229, 2))
					{
						__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					MISC::SET_BIT(&Global_4541229, 2);
					__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_82)
	{
		if (iLocal_83 == 1)
		{
			iLocal_83 = 0;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("CELL_FOCUS" /* GXT: Focus Lock (Hold) */);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (!__LIB_0__::isGlobal_43052EqualsValue(14))
		{
			if (BitTest(Global_4541229, 10))
			{
				if ((Global_78319 == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_62())
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_FOCUS_LOCK");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL" /* GXT: Action: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_4542214));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					MISC::CLEAR_BIT(&Global_4541229, 10);
				}
			}
		}
		else if (BitTest(Global_4541229, 10))
		{
			MISC::CLEAR_BIT(&Global_4541229, 10);
		}
		iLocal_33 = MISC::GET_GAME_TIMER();
		if ((iLocal_33 - iLocal_32) > 1500)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_35 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_35, Local_34, true) > 5f)
				{
					Global_20266.f_1 = 3;
					MISC::SET_GAME_PAUSED(false);
				}
				iLocal_32 = MISC::GET_GAME_TIMER();
			}
		}
	}
	else if (iLocal_83)
	{
		if (!PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 182 /*INPUT_CELLPHONE_CAMERA_FOCUS_LOCK*/) && !__LIB_0__::func_93())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20255, true);
			iLocal_83 = 0;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("CELL_FOCUS" /* GXT: Focus Lock (Hold) */);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 182 /*INPUT_CELLPHONE_CAMERA_FOCUS_LOCK*/) && !__LIB_0__::func_93())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20255, true);
		iLocal_83 = 1;
		if (!__LIB_0__::isGlobal_43052EqualsValue(14))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("CELL_FOCUS" /* GXT: Focus Lock (Hold) */);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	if (func_173())
	{
		if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 186 /*INPUT_CELLPHONE_CAMERA_EXPRESSION*/) && iLocal_106 == 0) && !__LIB_0__::func_93())
		{
			if (iLocal_82)
			{
				iLocal_24++;
				if (iLocal_24 > 0 && iLocal_24 < 7)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20255, true);
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
						if (Global_20266 == 0)
						{
							iVar4 = 0;
							iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_24 == 2 || iLocal_24 == 3) || iLocal_24 == 4) || iLocal_24 == 8) || iLocal_24 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_24 == 3)
										{
											PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_22[iLocal_24], 0);
										}
									}
								}
								else
								{
									PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_22[iLocal_24], 0);
								}
							}
							else
							{
								PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_22[iLocal_24], 0);
							}
						}
						else
						{
							PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_22[iLocal_24], 0);
						}
					}
				}
				if (iLocal_24 == 7 || iLocal_24 > 7)
				{
					iLocal_24 = 0;
				}
				if (iLocal_24 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20255, true);
					}
				}
			}
		}
		if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/) && iLocal_106 == 0) && !__LIB_0__::func_93())
		{
			if (iLocal_82)
			{
				if (bLocal_29 == 1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20255, true);
					if (iLocal_28 == 0)
					{
						iLocal_28 = 1;
						iLocal_27 = 1;
						if (MISC::ARE_STRINGS_EQUAL(sLocal_19[Global_4539953], "phone_cam12DUMMY"))
						{
						}
						else
						{
							MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(true);
							MOBILE::SET_MOBILE_PHONE_DOF_STATE(true);
						}
					}
					else
					{
						iLocal_28 = 0;
						iLocal_27 = 0;
						MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
						MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
					}
				}
			}
			else if (bLocal_30 == 1)
			{
				if (iLocal_27 == 0)
				{
					iLocal_27 = 1;
					iLocal_28 = 1;
					MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(true);
					MOBILE::SET_MOBILE_PHONE_DOF_STATE(true);
				}
				else
				{
					iLocal_27 = 0;
					iLocal_28 = 0;
					MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
					MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
				}
			}
		}
	}
	if (iLocal_26 == 1 && !__LIB_0__::func_93())
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/) && iLocal_106 == 0)
		{
			if (func_173())
			{
				Global_4539954++;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20255, true);
			}
			if (Global_4539954 == 13)
			{
				func_125(0);
				MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(1f);
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_20[(Global_4539954 - 1)]);
				Global_4539954 = 0;
				func_61();
				if (iLocal_21 == 1)
				{
					MISC::CLEAR_BIT(&Global_4541229, 2);
					iLocal_21 = 0;
					__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_4539954 > 0 && Global_4539954 < 13)
			{
				iLocal_26 = 0;
				iLocal_25 = 0;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sLocal_20[Global_4539954], false);
			}
		}
	}
	if (Global_4539954 > 0)
	{
		if (iLocal_26 == 0)
		{
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sLocal_20[Global_4539954]))
			{
				iLocal_25 = 1;
				iLocal_26 = 1;
				if (!GRAPHICS::PHONEPHOTOEDITOR_IS_ACTIVE())
				{
					func_125(1);
				}
				if (iLocal_21 == 0)
				{
					if (!BitTest(Global_4541229, 2))
					{
						iLocal_21 = 1;
					}
				}
				MISC::SET_BIT(&Global_4541229, 2);
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(0.25f);
				GRAPHICS::PHONEPHOTOEDITOR_SET_FRAME_TXD(sLocal_20[Global_4539954], false);
			}
		}
		if (iLocal_25 == 1)
		{
			if (Global_4539954 == 1 || Global_4539954 == 3)
			{
			}
			if (Global_4539954 == 2 || Global_4539954 == 4)
			{
			}
		}
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/) && iLocal_106 == 0) && !__LIB_0__::func_93())
	{
		if (func_173())
		{
			func_116(0);
			Global_4539953++;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20255, true);
		}
		if (Global_4539953 == 13)
		{
			Global_4539953 = 0;
		}
		if (Global_4539953 == 0)
		{
			if (func_173())
			{
				func_116(0);
			}
		}
		else
		{
			func_126();
		}
		func_60();
	}
	if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/) && iLocal_106 == 0) && !__LIB_0__::func_93())
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				Local_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20255, true);
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				__LIB_16__::func_287(iLocal_91, "CLOSE_SHUTTER");
				iLocal_86 = MISC::GET_GAME_TIMER();
				while (MISC::GET_GAME_TIMER() < (iLocal_86 + iLocal_90) && Global_20266.f_1 > 3)
				{
					func_158();
					func_143();
					func_93();
					RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
					SYSTEM::WAIT(0);
				}
				if (iLocal_82 == 0)
				{
					AUDIO::STOP_SOUND(iLocal_63);
					iLocal_82 = 1;
					func_59(1);
					func_58();
					MISC::SET_BIT(&Global_8138, 3);
					iLocal_32 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_84 = 0;
					iLocal_85 = 0;
					func_59(0);
					iLocal_82 = 0;
					MISC::CLEAR_BIT(&Global_8138, 3);
				}
				iLocal_86 = MISC::GET_GAME_TIMER();
				while (MISC::GET_GAME_TIMER() < (iLocal_86 + iLocal_88) && Global_20266.f_1 > 3)
				{
					func_158();
					func_143();
					func_93();
					RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
					SYSTEM::WAIT(0);
				}
				__LIB_16__::func_287(iLocal_91, "OPEN_SHUTTER");
				if (func_173())
				{
					if (Global_4539954 == 0)
					{
						if (!BitTest(Global_4541229, 2))
						{
							__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!BitTest(Global_4541229, 2))
				{
					__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_143();
				func_158();
				if (BitTest(Global_8136, 28))
				{
					StringCopy(&cLocal_96, "CELL_296", 16);
					func_56();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_295", 16);
					func_30();
				}
			}
		}
	}
	if (iLocal_82 == 0)
	{
		if (iLocal_64 == 0)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 40 /*INPUT_SNIPER_ZOOM_IN_ONLY*/) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 41 /*INPUT_SNIPER_ZOOM_OUT_ONLY*/))
			{
				fLocal_65 = CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
				if (fLocal_65 > 1f && fLocal_65 < 4.5f)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_63))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_63, "Camera_Zoom", &Global_20255, true);
					}
				}
				else
				{
					AUDIO::STOP_SOUND(iLocal_63);
				}
				iLocal_64 = 1;
			}
		}
		else if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 40 /*INPUT_SNIPER_ZOOM_IN_ONLY*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 41 /*INPUT_SNIPER_ZOOM_OUT_ONLY*/))
		{
			fLocal_65 = CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
			if (fLocal_65 > 1f && fLocal_65 < 4.5f)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_63))
				{
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_63, "Camera_Zoom", &Global_20255, true);
				}
			}
			else
			{
				AUDIO::STOP_SOUND(iLocal_63);
			}
		}
		else
		{
			AUDIO::STOP_SOUND(iLocal_63);
		}
	}
	if ((__LIB_13__::func_85(2, Global_20235, 0) && !__LIB_13__::func_87()) && !__LIB_13__::func_85(2, Global_20234, 0))
	{
		fLocal_38 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		fLocal_39 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
		MISC::SET_BIT(&Global_8136, 21);
		AUDIO::STOP_SOUND(iLocal_63);
		iLocal_78 = 1;
		__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Camera_Shoot", &Global_20255, true);
		__LIB_16__::func_287(iLocal_91, "CLOSE_SHUTTER");
		Local_43 = { -90.3f, 0f, 90f };
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_43, 0);
		if (!func_173())
		{
			func_116(1);
		}
		Global_22641 = 1;
		HUD::CLEAR_FLOATING_HELP(0, true);
		while (Global_22640 < 6 && Global_20266.f_1 > 3)
		{
			func_158();
			func_143();
			func_93();
			func_148();
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			SYSTEM::WAIT(0);
		}
		MOBILE::CELL_CAM_ACTIVATE(false, false);
		if (Global_20208)
		{
			__LIB_13__::func_120(1);
		}
		iLocal_86 = MISC::GET_GAME_TIMER();
		while (MISC::GET_GAME_TIMER() < (iLocal_86 + iLocal_89) && Global_20266.f_1 > 3)
		{
			func_158();
			func_143();
			func_93();
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			SYSTEM::WAIT(0);
		}
		SYSTEM::SETTIMERA(0);
		__LIB_16__::func_287(iLocal_91, "OPEN_SHUTTER");
		MISC::CLEAR_BIT(&Global_8136, 21);
		func_128();
		if (Global_20266.f_1 > 3)
		{
			if (Global_78319)
			{
				__LIB_31__::func_753(1087, 1, -1);
				func_22();
				__LIB_1__::func_333(-1492367786, 23, 0);
			}
			else
			{
				switch (__LIB_0__::func_683())
				{
					case 0:
						STATS::STAT_INCREMENT(joaat("SP0_NO_PHOTOS_TAKEN"), 1f);
						break;
					case 1:
						STATS::STAT_INCREMENT(joaat("SP1_NO_PHOTOS_TAKEN"), 1f);
						break;
					case 2:
						STATS::STAT_INCREMENT(joaat("SP2_NO_PHOTOS_TAKEN"), 1f);
						break;
				}
				func_22();
			}
			func_125(0);
		}
		func_143();
	}
	if (BitTest(Global_8136, 28))
	{
		if (__LIB_13__::func_85(2, Global_20238, 0))
		{
			GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
			SYSTEM::WAIT(0);
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			func_158();
			SYSTEM::WAIT(0);
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			func_158();
			GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
			GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
			Global_22642 = 1;
			iLocal_94 = 0;
			iLocal_77 = 1;
			Global_22638 = 1;
			HUD::CLEAR_FLOATING_HELP(0, true);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			__LIB_13__::func_111();
			iLocal_78 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			func_121(0, 0);
			func_125(0);
			iLocal_66 = 0;
			func_116(1);
			if (!Global_2815059.f_6689)
			{
				MISC::SET_BIT(&Global_8136, 9);
			}
			MISC::SET_GAME_PAUSED(false);
			iLocal_93 = 0;
			__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_22()//Position - 0x28DB
{
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 1;
	iLocal_76 = 0;
	Global_20203 = { Global_20219[Global_20211 /*3*/] };
	__LIB_0__::func_203(0, 1);
	func_121(0, 0);
	func_125(0);
	iLocal_66 = 0;
	func_116(1);
	if (!BitTest(Global_8137, 28))
	{
		if (NETWORK::NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV() == 0)
		{
			if (MISC::IS_XBOX360_VERSION())
			{
				if (iLocal_68 == 0)
				{
					iLocal_68 = 1;
				}
			}
		}
	}
}

void func_30()//Position - 0x3810
{
	if (iLocal_106 == 1)
	{
		func_55();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		if (!__LIB_0__::func_93())
		{
			__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
			__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_280" /* GXT: Take Photo */);
		}
		else
		{
			__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
			__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_280" /* GXT: Take Photo */);
		}
		if (iLocal_82)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || __LIB_0__::func_52())
					{
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
					else
					{
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
				}
				else if ((Global_78319 == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_62())
				{
					func_53();
				}
				else
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || __LIB_0__::func_52())
					{
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
					else
					{
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/, true), "CELL_GRID" /* GXT: Grid */);
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					if (func_173())
					{
						func_52(5f);
						func_51(6f);
						if (func_32(1))
						{
							func_31(7f);
							if (bLocal_29)
							{
								__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
							}
						}
						else if (bLocal_29)
						{
							__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 7f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (!__LIB_0__::func_93())
					{
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/, true), "CELL_GRID" /* GXT: Grid */);
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true), "CELL_284" /* GXT: Zoom */);
					}
					else
					{
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
						if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
						{
							__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true), "CELL_284" /* GXT: Zoom */);
						}
						else
						{
							__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 29, true), "CELL_284" /* GXT: Zoom */);
						}
					}
					if (!__LIB_0__::func_93())
					{
						if (func_173())
						{
							func_52(6f);
							func_51(7f);
							if (bLocal_30)
							{
								__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 182 /*INPUT_CELLPHONE_CAMERA_FOCUS_LOCK*/, true), "CELL_FOCUS" /* GXT: Focus Lock (Hold) */);
							}
							__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
						}
					}
				}
				else
				{
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					if (func_173())
					{
						func_52(3f);
						func_51(4f);
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
					}
				}
			}
			else
			{
				if (!__LIB_0__::func_93())
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || __LIB_0__::func_52())
					{
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_1NP_XB" /* GXT: Self Portrait (Press) */);
					}
					else
					{
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_1NP_XB" /* GXT: Self Portrait (Press) */);
					}
				}
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (!__LIB_0__::func_93())
					{
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/, true), "CELL_GRID" /* GXT: Grid */);
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					}
					else
					{
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
						if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
						{
							__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true), "CELL_284" /* GXT: Zoom */);
						}
						else
						{
							__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 29, true), "CELL_284" /* GXT: Zoom */);
						}
					}
					if (!__LIB_0__::func_93())
					{
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true), "CELL_284" /* GXT: Zoom */);
					}
					if (!__LIB_0__::func_93())
					{
						if (func_173())
						{
							func_52(7f);
							func_51(8f);
							if (bLocal_30)
							{
								__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 182 /*INPUT_CELLPHONE_CAMERA_FOCUS_LOCK*/, true), "CELL_FOCUS" /* GXT: Focus Lock (Hold) */);
							}
							__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
						}
					}
				}
				else
				{
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					if (func_173())
					{
						func_52(3f);
						func_51(4f);
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
					}
				}
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_40);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_31(float fParam0)//Position - 0x3D82
{
	__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/, true), "CELL_ACTION" /* GXT: Play Action */);
}

int func_32(int iParam0)//Position - 0x3DA2
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_16__::func_815(Global_4456522, Global_4456523))
		{
			if (iParam0 == 0 || !func_33(Global_4456522, Global_4456523, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_33(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3DE2
{
	return func_34(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_34(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x3DFC
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (__LIB_1__::func_100())
	{
		return 0;
	}
	uVar0 = 6;
	uVar1 = 6;
	uVar2 = 7;
	if (iParam1 == 0)
	{
		iVar6 = 3;
	}
	else if (bParam3)
	{
		iVar6 = 1;
	}
	else if (bParam4)
	{
		iVar6 = 2;
	}
	else
	{
		iVar6 = 0;
	}
	func_42(iParam1, iParam2, &uVar0, &uVar1, &uVar2, iVar6, bParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar3 = __LIB_1__::func_97(iParam0);
			if (!iVar3 == -1)
			{
				if (__LIB_2__::func_181(&uVar0, iVar3))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar4 = __LIB_1__::func_97(iParam0);
			if (!iVar4 == -1)
			{
				if (__LIB_2__::func_181(&uVar1, iVar4))
				{
					return 1;
				}
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar5 = __LIB_1__::func_96(iParam0);
			if (!iVar5 == 0)
			{
				if (__LIB_1__::func_95(&uVar2, iVar5))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_42(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)//Position - 0x3FAB
{
	__LIB_1__::func_99(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			__LIB_2__::func_551(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							__LIB_2__::func_182(uParam3, 13, 1);
							__LIB_2__::func_182(uParam3, 16, 1);
							__LIB_2__::func_182(uParam3, 48, 1);
							__LIB_2__::func_182(uParam3, 49, 1);
							__LIB_2__::func_182(uParam3, 38, 1);
							__LIB_2__::func_182(uParam3, 47, 1);
							__LIB_2__::func_182(uParam3, 111, 1);
							__LIB_2__::func_182(uParam2, 2, 1);
							__LIB_2__::func_182(uParam2, 20, 1);
							__LIB_2__::func_182(uParam2, 37, 1);
							__LIB_2__::func_182(uParam2, 46, 1);
							__LIB_2__::func_182(uParam2, 110, 1);
							__LIB_1__::func_99(uParam4, 33, 1);
							__LIB_1__::func_99(uParam4, 8, 1);
							__LIB_1__::func_99(uParam4, 31, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 75, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 74, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							break;
						case 1:
							__LIB_2__::func_182(uParam3, 4, 1);
							__LIB_2__::func_182(uParam3, 13, 1);
							__LIB_2__::func_182(uParam3, 16, 1);
							__LIB_2__::func_182(uParam3, 48, 1);
							__LIB_2__::func_182(uParam3, 49, 1);
							__LIB_2__::func_182(uParam3, 38, 1);
							__LIB_2__::func_182(uParam3, 47, 1);
							__LIB_2__::func_182(uParam3, 111, 1);
							__LIB_2__::func_182(uParam2, 2, 1);
							__LIB_2__::func_182(uParam2, 20, 1);
							__LIB_2__::func_182(uParam2, 37, 1);
							__LIB_2__::func_182(uParam2, 46, 1);
							__LIB_2__::func_182(uParam2, 110, 1);
							__LIB_1__::func_99(uParam4, 28, 1);
							__LIB_1__::func_99(uParam4, 33, 1);
							__LIB_1__::func_99(uParam4, 8, 1);
							__LIB_1__::func_99(uParam4, 31, 1);
							__LIB_1__::func_99(uParam4, 43, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 75, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 74, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							break;
						case 2:
							__LIB_2__::func_182(uParam3, 13, 1);
							__LIB_2__::func_182(uParam3, 16, 1);
							__LIB_2__::func_182(uParam3, 48, 1);
							__LIB_2__::func_182(uParam3, 49, 1);
							__LIB_2__::func_182(uParam3, 39, 1);
							__LIB_2__::func_182(uParam2, 2, 1);
							__LIB_2__::func_182(uParam2, 20, 1);
							__LIB_2__::func_182(uParam2, 38, 1);
							__LIB_1__::func_99(uParam4, 8, 1);
							__LIB_1__::func_99(uParam4, 10, 1);
							__LIB_1__::func_99(uParam4, 13, 1);
							__LIB_1__::func_99(uParam4, 19, 1);
							__LIB_1__::func_99(uParam4, 20, 1);
							__LIB_1__::func_99(uParam4, 59, 1);
							__LIB_1__::func_99(uParam4, 60, 1);
							__LIB_1__::func_99(uParam4, 61, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 63, 1);
							__LIB_1__::func_99(uParam4, 64, 1);
							__LIB_1__::func_99(uParam4, 65, 1);
							__LIB_1__::func_99(uParam4, 66, 1);
							__LIB_1__::func_99(uParam4, 67, 1);
							__LIB_1__::func_99(uParam4, 68, 1);
							__LIB_1__::func_99(uParam4, 69, 1);
							__LIB_1__::func_99(uParam4, 70, 1);
							__LIB_1__::func_99(uParam4, 71, 1);
							__LIB_1__::func_99(uParam4, 72, 1);
							__LIB_1__::func_99(uParam4, 21, 1);
							__LIB_1__::func_99(uParam4, 22, 1);
							__LIB_1__::func_99(uParam4, 23, 1);
							__LIB_1__::func_99(uParam4, 24, 1);
							__LIB_1__::func_99(uParam4, 25, 1);
							__LIB_1__::func_99(uParam4, 26, 1);
							__LIB_1__::func_99(uParam4, 28, 1);
							__LIB_1__::func_99(uParam4, 33, 1);
							__LIB_1__::func_99(uParam4, 31, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 75, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 74, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							break;
					}
					break;
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							__LIB_2__::func_182(uParam3, 16, 1);
							__LIB_2__::func_182(uParam3, 48, 1);
							__LIB_2__::func_182(uParam3, 49, 1);
							__LIB_2__::func_182(uParam3, 18, 1);
							__LIB_2__::func_182(uParam3, 50, 1);
							__LIB_2__::func_182(uParam3, 51, 1);
							__LIB_2__::func_182(uParam3, 52, 1);
							__LIB_2__::func_182(uParam3, 53, 1);
							__LIB_2__::func_182(uParam3, 38, 1);
							__LIB_2__::func_182(uParam3, 47, 1);
							__LIB_2__::func_182(uParam3, 111, 1);
							__LIB_2__::func_182(uParam3, 62, 1);
							__LIB_2__::func_182(uParam2, 16, 1);
							__LIB_2__::func_182(uParam2, 47, 1);
							__LIB_2__::func_182(uParam2, 48, 1);
							__LIB_2__::func_182(uParam2, 18, 1);
							__LIB_2__::func_182(uParam2, 49, 1);
							__LIB_2__::func_182(uParam2, 50, 1);
							__LIB_2__::func_182(uParam2, 51, 1);
							__LIB_2__::func_182(uParam2, 52, 1);
							__LIB_2__::func_182(uParam2, 62, 1);
							__LIB_2__::func_182(uParam2, 37, 1);
							__LIB_2__::func_182(uParam2, 46, 1);
							__LIB_2__::func_182(uParam2, 110, 1);
							__LIB_1__::func_99(uParam4, 1, 1);
							__LIB_1__::func_99(uParam4, 2, 1);
							__LIB_1__::func_99(uParam4, 3, 1);
							__LIB_1__::func_99(uParam4, 4, 1);
							__LIB_1__::func_99(uParam4, 5, 1);
							__LIB_1__::func_99(uParam4, 7, 1);
							__LIB_1__::func_99(uParam4, 8, 1);
							__LIB_1__::func_99(uParam4, 9, 1);
							__LIB_1__::func_99(uParam4, 10, 1);
							__LIB_1__::func_99(uParam4, 12, 1);
							__LIB_1__::func_99(uParam4, 13, 1);
							__LIB_1__::func_99(uParam4, 14, 1);
							__LIB_1__::func_99(uParam4, 15, 1);
							__LIB_1__::func_99(uParam4, 16, 1);
							__LIB_1__::func_99(uParam4, 17, 1);
							__LIB_1__::func_99(uParam4, 18, 1);
							__LIB_1__::func_99(uParam4, 19, 1);
							__LIB_1__::func_99(uParam4, 20, 1);
							__LIB_1__::func_99(uParam4, 59, 1);
							__LIB_1__::func_99(uParam4, 60, 1);
							__LIB_1__::func_99(uParam4, 61, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 63, 1);
							__LIB_1__::func_99(uParam4, 64, 1);
							__LIB_1__::func_99(uParam4, 65, 1);
							__LIB_1__::func_99(uParam4, 66, 1);
							__LIB_1__::func_99(uParam4, 67, 1);
							__LIB_1__::func_99(uParam4, 68, 1);
							__LIB_1__::func_99(uParam4, 69, 1);
							__LIB_1__::func_99(uParam4, 70, 1);
							__LIB_1__::func_99(uParam4, 71, 1);
							__LIB_1__::func_99(uParam4, 72, 1);
							__LIB_1__::func_99(uParam4, 21, 1);
							__LIB_1__::func_99(uParam4, 22, 1);
							__LIB_1__::func_99(uParam4, 23, 1);
							__LIB_1__::func_99(uParam4, 24, 1);
							__LIB_1__::func_99(uParam4, 25, 1);
							__LIB_1__::func_99(uParam4, 26, 1);
							__LIB_1__::func_99(uParam4, 36, 1);
							__LIB_1__::func_99(uParam4, 46, 1);
							__LIB_1__::func_99(uParam4, 38, 1);
							__LIB_1__::func_99(uParam4, 28, 1);
							__LIB_1__::func_99(uParam4, 33, 1);
							__LIB_1__::func_99(uParam4, 43, 1);
							__LIB_1__::func_99(uParam4, 29, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_1__::func_99(uParam4, 110, 1);
							__LIB_1__::func_99(uParam4, 112, 1);
							__LIB_1__::func_99(uParam4, 115, 1);
							__LIB_1__::func_99(uParam4, 116, 1);
							__LIB_1__::func_99(uParam4, 136, 1);
							__LIB_1__::func_99(uParam4, 138, 1);
							__LIB_1__::func_99(uParam4, 139, 1);
							__LIB_1__::func_99(uParam4, 143, 1);
							__LIB_1__::func_99(uParam4, 144, 1);
							__LIB_1__::func_99(uParam4, 145, 1);
							__LIB_1__::func_99(uParam4, 147, 1);
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 66, 1);
							__LIB_2__::func_182(uParam2, 67, 1);
							__LIB_2__::func_182(uParam2, 68, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 70, 1);
							__LIB_2__::func_182(uParam2, 71, 1);
							__LIB_2__::func_182(uParam2, 72, 1);
							__LIB_2__::func_182(uParam2, 73, 1);
							__LIB_2__::func_182(uParam2, 77, 1);
							__LIB_2__::func_182(uParam2, 78, 1);
							__LIB_2__::func_182(uParam2, 79, 1);
							__LIB_2__::func_182(uParam2, 80, 1);
							__LIB_2__::func_182(uParam2, 81, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							break;
						case 1:
							__LIB_2__::func_182(uParam3, 38, 1);
							__LIB_2__::func_182(uParam3, 47, 1);
							__LIB_2__::func_182(uParam3, 111, 1);
							__LIB_2__::func_182(uParam2, 16, 1);
							__LIB_2__::func_182(uParam2, 47, 1);
							__LIB_2__::func_182(uParam2, 48, 1);
							__LIB_2__::func_182(uParam2, 18, 1);
							__LIB_2__::func_182(uParam2, 49, 1);
							__LIB_2__::func_182(uParam2, 50, 1);
							__LIB_2__::func_182(uParam2, 51, 1);
							__LIB_2__::func_182(uParam2, 52, 1);
							__LIB_2__::func_182(uParam2, 62, 1);
							__LIB_2__::func_182(uParam2, 37, 1);
							__LIB_2__::func_182(uParam2, 46, 1);
							__LIB_2__::func_182(uParam2, 110, 1);
							__LIB_1__::func_99(uParam4, 8, 1);
							__LIB_1__::func_99(uParam4, 9, 1);
							__LIB_1__::func_99(uParam4, 20, 1);
							__LIB_1__::func_99(uParam4, 59, 1);
							__LIB_1__::func_99(uParam4, 60, 1);
							__LIB_1__::func_99(uParam4, 61, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 63, 1);
							__LIB_1__::func_99(uParam4, 64, 1);
							__LIB_1__::func_99(uParam4, 65, 1);
							__LIB_1__::func_99(uParam4, 66, 1);
							__LIB_1__::func_99(uParam4, 67, 1);
							__LIB_1__::func_99(uParam4, 68, 1);
							__LIB_1__::func_99(uParam4, 69, 1);
							__LIB_1__::func_99(uParam4, 70, 1);
							__LIB_1__::func_99(uParam4, 71, 1);
							__LIB_1__::func_99(uParam4, 72, 1);
							__LIB_1__::func_99(uParam4, 21, 1);
							__LIB_1__::func_99(uParam4, 22, 1);
							__LIB_1__::func_99(uParam4, 23, 1);
							__LIB_1__::func_99(uParam4, 24, 1);
							__LIB_1__::func_99(uParam4, 25, 1);
							__LIB_1__::func_99(uParam4, 26, 1);
							__LIB_1__::func_99(uParam4, 36, 1);
							__LIB_1__::func_99(uParam4, 46, 1);
							__LIB_1__::func_99(uParam4, 38, 1);
							__LIB_1__::func_99(uParam4, 28, 1);
							__LIB_1__::func_99(uParam4, 33, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_1__::func_99(uParam4, 110, 1);
							__LIB_1__::func_99(uParam4, 112, 1);
							__LIB_1__::func_99(uParam4, 115, 1);
							__LIB_1__::func_99(uParam4, 116, 1);
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 66, 1);
							__LIB_2__::func_182(uParam2, 67, 1);
							__LIB_2__::func_182(uParam2, 68, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 70, 1);
							__LIB_2__::func_182(uParam2, 71, 1);
							__LIB_2__::func_182(uParam2, 72, 1);
							__LIB_2__::func_182(uParam2, 73, 1);
							__LIB_2__::func_182(uParam2, 77, 1);
							__LIB_2__::func_182(uParam2, 78, 1);
							__LIB_2__::func_182(uParam2, 79, 1);
							__LIB_2__::func_182(uParam2, 80, 1);
							__LIB_2__::func_182(uParam2, 81, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							break;
						case 2:
							__LIB_2__::func_182(uParam3, 16, 1);
							__LIB_2__::func_182(uParam3, 48, 1);
							__LIB_2__::func_182(uParam3, 49, 1);
							__LIB_2__::func_182(uParam3, 18, 1);
							__LIB_2__::func_182(uParam3, 50, 1);
							__LIB_2__::func_182(uParam3, 51, 1);
							__LIB_2__::func_182(uParam3, 52, 1);
							__LIB_2__::func_182(uParam3, 53, 1);
							__LIB_2__::func_182(uParam3, 62, 1);
							__LIB_2__::func_182(uParam3, 38, 1);
							__LIB_2__::func_182(uParam3, 47, 1);
							__LIB_2__::func_182(uParam3, 111, 1);
							__LIB_2__::func_182(uParam2, 18, 1);
							__LIB_2__::func_182(uParam2, 49, 1);
							__LIB_2__::func_182(uParam2, 50, 1);
							__LIB_2__::func_182(uParam2, 51, 1);
							__LIB_2__::func_182(uParam2, 52, 1);
							__LIB_2__::func_182(uParam2, 62, 1);
							__LIB_2__::func_182(uParam2, 37, 1);
							__LIB_2__::func_182(uParam2, 46, 1);
							__LIB_2__::func_182(uParam2, 110, 1);
							__LIB_1__::func_99(uParam4, 4, 1);
							__LIB_1__::func_99(uParam4, 5, 1);
							__LIB_1__::func_99(uParam4, 8, 1);
							__LIB_1__::func_99(uParam4, 9, 1);
							__LIB_1__::func_99(uParam4, 10, 1);
							__LIB_1__::func_99(uParam4, 12, 1);
							__LIB_1__::func_99(uParam4, 14, 1);
							__LIB_1__::func_99(uParam4, 15, 1);
							__LIB_1__::func_99(uParam4, 16, 1);
							__LIB_1__::func_99(uParam4, 17, 1);
							__LIB_1__::func_99(uParam4, 18, 1);
							__LIB_1__::func_99(uParam4, 19, 1);
							__LIB_1__::func_99(uParam4, 20, 1);
							__LIB_1__::func_99(uParam4, 59, 1);
							__LIB_1__::func_99(uParam4, 60, 1);
							__LIB_1__::func_99(uParam4, 61, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 63, 1);
							__LIB_1__::func_99(uParam4, 64, 1);
							__LIB_1__::func_99(uParam4, 65, 1);
							__LIB_1__::func_99(uParam4, 66, 1);
							__LIB_1__::func_99(uParam4, 67, 1);
							__LIB_1__::func_99(uParam4, 68, 1);
							__LIB_1__::func_99(uParam4, 69, 1);
							__LIB_1__::func_99(uParam4, 70, 1);
							__LIB_1__::func_99(uParam4, 71, 1);
							__LIB_1__::func_99(uParam4, 72, 1);
							__LIB_1__::func_99(uParam4, 21, 1);
							__LIB_1__::func_99(uParam4, 22, 1);
							__LIB_1__::func_99(uParam4, 23, 1);
							__LIB_1__::func_99(uParam4, 24, 1);
							__LIB_1__::func_99(uParam4, 25, 1);
							__LIB_1__::func_99(uParam4, 26, 1);
							__LIB_1__::func_99(uParam4, 36, 1);
							__LIB_1__::func_99(uParam4, 46, 1);
							__LIB_1__::func_99(uParam4, 38, 1);
							__LIB_1__::func_99(uParam4, 28, 1);
							__LIB_1__::func_99(uParam4, 33, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_1__::func_99(uParam4, 110, 1);
							__LIB_1__::func_99(uParam4, 112, 1);
							__LIB_1__::func_99(uParam4, 115, 1);
							__LIB_1__::func_99(uParam4, 116, 1);
							__LIB_1__::func_99(uParam4, 136, 1);
							__LIB_1__::func_99(uParam4, 138, 1);
							__LIB_1__::func_99(uParam4, 139, 1);
							__LIB_1__::func_99(uParam4, 143, 1);
							__LIB_1__::func_99(uParam4, 144, 1);
							__LIB_1__::func_99(uParam4, 145, 1);
							__LIB_1__::func_99(uParam4, 147, 1);
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 66, 1);
							__LIB_2__::func_182(uParam2, 67, 1);
							__LIB_2__::func_182(uParam2, 68, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 70, 1);
							__LIB_2__::func_182(uParam2, 71, 1);
							__LIB_2__::func_182(uParam2, 72, 1);
							__LIB_2__::func_182(uParam2, 73, 1);
							__LIB_2__::func_182(uParam2, 77, 1);
							__LIB_2__::func_182(uParam2, 78, 1);
							__LIB_2__::func_182(uParam2, 79, 1);
							__LIB_2__::func_182(uParam2, 80, 1);
							__LIB_2__::func_182(uParam2, 81, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							break;
					}
					break;
				case 59:
					switch (iParam5)
					{
						case 0:
							__LIB_2__::func_182(uParam3, 66, 1);
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 77, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam3, 16, 1);
							__LIB_2__::func_182(uParam3, 48, 1);
							__LIB_2__::func_182(uParam3, 49, 1);
							__LIB_2__::func_182(uParam3, 18, 1);
							__LIB_2__::func_182(uParam3, 50, 1);
							__LIB_2__::func_182(uParam3, 51, 1);
							__LIB_2__::func_182(uParam3, 52, 1);
							__LIB_2__::func_182(uParam3, 53, 1);
							__LIB_2__::func_182(uParam3, 62, 1);
							__LIB_2__::func_182(uParam3, 38, 1);
							__LIB_2__::func_182(uParam3, 47, 1);
							__LIB_2__::func_182(uParam3, 111, 1);
							__LIB_2__::func_182(uParam2, 66, 1);
							__LIB_2__::func_182(uParam2, 67, 1);
							__LIB_2__::func_182(uParam2, 68, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 70, 1);
							__LIB_2__::func_182(uParam2, 71, 1);
							__LIB_2__::func_182(uParam2, 72, 1);
							__LIB_2__::func_182(uParam2, 73, 1);
							__LIB_2__::func_182(uParam2, 77, 1);
							__LIB_2__::func_182(uParam2, 78, 1);
							__LIB_2__::func_182(uParam2, 79, 1);
							__LIB_2__::func_182(uParam2, 80, 1);
							__LIB_2__::func_182(uParam2, 81, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							__LIB_2__::func_182(uParam2, 18, 1);
							__LIB_2__::func_182(uParam2, 49, 1);
							__LIB_2__::func_182(uParam2, 50, 1);
							__LIB_2__::func_182(uParam2, 51, 1);
							__LIB_2__::func_182(uParam2, 52, 1);
							__LIB_2__::func_182(uParam2, 62, 1);
							__LIB_2__::func_182(uParam2, 37, 1);
							__LIB_2__::func_182(uParam2, 46, 1);
							__LIB_2__::func_182(uParam2, 110, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_2__::func_422(uParam2, uParam3, uParam4);
							break;
						case 1:
							__LIB_2__::func_182(uParam3, 16, 1);
							__LIB_2__::func_182(uParam3, 48, 1);
							__LIB_2__::func_182(uParam3, 49, 1);
							__LIB_2__::func_182(uParam3, 18, 1);
							__LIB_2__::func_182(uParam3, 50, 1);
							__LIB_2__::func_182(uParam3, 51, 1);
							__LIB_2__::func_182(uParam3, 52, 1);
							__LIB_2__::func_182(uParam3, 53, 1);
							__LIB_2__::func_182(uParam3, 62, 1);
							__LIB_2__::func_182(uParam3, 38, 1);
							__LIB_2__::func_182(uParam3, 47, 1);
							__LIB_2__::func_182(uParam3, 111, 1);
							__LIB_2__::func_182(uParam2, 18, 1);
							__LIB_2__::func_182(uParam2, 49, 1);
							__LIB_2__::func_182(uParam2, 50, 1);
							__LIB_2__::func_182(uParam2, 51, 1);
							__LIB_2__::func_182(uParam2, 52, 1);
							__LIB_2__::func_182(uParam2, 62, 1);
							__LIB_2__::func_182(uParam2, 37, 1);
							__LIB_2__::func_182(uParam2, 46, 1);
							__LIB_2__::func_182(uParam2, 110, 1);
							__LIB_1__::func_99(uParam4, 9, 1);
							__LIB_1__::func_99(uParam4, 10, 1);
							__LIB_1__::func_99(uParam4, 12, 1);
							__LIB_1__::func_99(uParam4, 17, 1);
							__LIB_1__::func_99(uParam4, 18, 1);
							__LIB_1__::func_99(uParam4, 19, 1);
							__LIB_1__::func_99(uParam4, 20, 1);
							__LIB_1__::func_99(uParam4, 59, 1);
							__LIB_1__::func_99(uParam4, 60, 1);
							__LIB_1__::func_99(uParam4, 61, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 63, 1);
							__LIB_1__::func_99(uParam4, 64, 1);
							__LIB_1__::func_99(uParam4, 65, 1);
							__LIB_1__::func_99(uParam4, 66, 1);
							__LIB_1__::func_99(uParam4, 67, 1);
							__LIB_1__::func_99(uParam4, 68, 1);
							__LIB_1__::func_99(uParam4, 69, 1);
							__LIB_1__::func_99(uParam4, 70, 1);
							__LIB_1__::func_99(uParam4, 71, 1);
							__LIB_1__::func_99(uParam4, 72, 1);
							__LIB_1__::func_99(uParam4, 21, 1);
							__LIB_1__::func_99(uParam4, 22, 1);
							__LIB_1__::func_99(uParam4, 23, 1);
							__LIB_1__::func_99(uParam4, 24, 1);
							__LIB_1__::func_99(uParam4, 25, 1);
							__LIB_1__::func_99(uParam4, 26, 1);
							__LIB_1__::func_99(uParam4, 36, 1);
							__LIB_1__::func_99(uParam4, 46, 1);
							__LIB_1__::func_99(uParam4, 38, 1);
							__LIB_1__::func_99(uParam4, 29, 1);
							__LIB_1__::func_99(uParam4, 28, 1);
							__LIB_1__::func_99(uParam4, 8, 1);
							__LIB_1__::func_99(uParam4, 31, 1);
							__LIB_1__::func_99(uParam4, 32, 1);
							__LIB_1__::func_99(uParam4, 33, 1);
							__LIB_1__::func_99(uParam4, 34, 1);
							__LIB_1__::func_99(uParam4, 43, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_2__::func_422(uParam2, uParam3, uParam4);
							break;
					}
					break;
				case 60:
				case 63:
					__LIB_2__::func_182(uParam3, 67, 1);
					__LIB_2__::func_182(uParam3, 68, 1);
					__LIB_2__::func_182(uParam3, 69, 1);
					__LIB_2__::func_182(uParam3, 70, 1);
					__LIB_2__::func_182(uParam3, 71, 1);
					__LIB_2__::func_182(uParam3, 72, 1);
					__LIB_2__::func_182(uParam3, 73, 1);
					__LIB_2__::func_182(uParam3, 74, 1);
					__LIB_2__::func_182(uParam3, 78, 1);
					__LIB_2__::func_182(uParam3, 79, 1);
					__LIB_2__::func_182(uParam3, 80, 1);
					__LIB_2__::func_182(uParam3, 81, 1);
					__LIB_2__::func_182(uParam3, 82, 1);
					__LIB_2__::func_182(uParam3, 91, 1);
					__LIB_2__::func_182(uParam3, 92, 1);
					__LIB_2__::func_182(uParam2, 66, 1);
					__LIB_2__::func_182(uParam2, 67, 1);
					__LIB_2__::func_182(uParam2, 68, 1);
					__LIB_2__::func_182(uParam2, 69, 1);
					__LIB_2__::func_182(uParam2, 70, 1);
					__LIB_2__::func_182(uParam2, 71, 1);
					__LIB_2__::func_182(uParam2, 72, 1);
					__LIB_2__::func_182(uParam2, 73, 1);
					__LIB_2__::func_182(uParam2, 77, 1);
					__LIB_2__::func_182(uParam2, 78, 1);
					__LIB_2__::func_182(uParam2, 79, 1);
					__LIB_2__::func_182(uParam2, 80, 1);
					__LIB_2__::func_182(uParam2, 81, 1);
					__LIB_2__::func_182(uParam2, 90, 1);
					__LIB_2__::func_182(uParam2, 91, 1);
					__LIB_2__::func_182(uParam3, 38, 1);
					__LIB_2__::func_182(uParam3, 47, 1);
					__LIB_2__::func_182(uParam3, 111, 1);
					__LIB_2__::func_182(uParam2, 37, 1);
					__LIB_2__::func_182(uParam2, 46, 1);
					__LIB_2__::func_182(uParam2, 110, 1);
					__LIB_1__::func_99(uParam4, 92, 1);
					__LIB_1__::func_99(uParam4, 93, 1);
					__LIB_1__::func_99(uParam4, 94, 1);
					__LIB_1__::func_99(uParam4, 96, 1);
					__LIB_1__::func_99(uParam4, 97, 1);
					__LIB_1__::func_99(uParam4, 98, 1);
					__LIB_1__::func_99(uParam4, 100, 1);
					__LIB_1__::func_99(uParam4, 103, 1);
					__LIB_1__::func_99(uParam4, 104, 1);
					__LIB_1__::func_99(uParam4, 105, 1);
					__LIB_1__::func_99(uParam4, 106, 1);
					__LIB_1__::func_99(uParam4, 107, 1);
					__LIB_1__::func_99(uParam4, 108, 1);
					__LIB_2__::func_422(uParam2, uParam3, uParam4);
					break;
				case 61:
					__LIB_2__::func_182(uParam3, 67, 1);
					__LIB_2__::func_182(uParam3, 68, 1);
					__LIB_2__::func_182(uParam3, 69, 1);
					__LIB_2__::func_182(uParam3, 70, 1);
					__LIB_2__::func_182(uParam3, 71, 1);
					__LIB_2__::func_182(uParam3, 72, 1);
					__LIB_2__::func_182(uParam3, 73, 1);
					__LIB_2__::func_182(uParam3, 74, 1);
					__LIB_2__::func_182(uParam3, 78, 1);
					__LIB_2__::func_182(uParam3, 79, 1);
					__LIB_2__::func_182(uParam3, 80, 1);
					__LIB_2__::func_182(uParam3, 81, 1);
					__LIB_2__::func_182(uParam3, 82, 1);
					__LIB_2__::func_182(uParam3, 91, 1);
					__LIB_2__::func_182(uParam3, 92, 1);
					__LIB_2__::func_182(uParam2, 66, 1);
					__LIB_2__::func_182(uParam2, 67, 1);
					__LIB_2__::func_182(uParam2, 68, 1);
					__LIB_2__::func_182(uParam2, 69, 1);
					__LIB_2__::func_182(uParam2, 70, 1);
					__LIB_2__::func_182(uParam2, 71, 1);
					__LIB_2__::func_182(uParam2, 72, 1);
					__LIB_2__::func_182(uParam2, 73, 1);
					__LIB_2__::func_182(uParam2, 77, 1);
					__LIB_2__::func_182(uParam2, 78, 1);
					__LIB_2__::func_182(uParam2, 79, 1);
					__LIB_2__::func_182(uParam2, 80, 1);
					__LIB_2__::func_182(uParam2, 81, 1);
					__LIB_2__::func_182(uParam2, 90, 1);
					__LIB_2__::func_182(uParam2, 91, 1);
					__LIB_2__::func_182(uParam3, 38, 1);
					__LIB_2__::func_182(uParam3, 47, 1);
					__LIB_2__::func_182(uParam3, 111, 1);
					__LIB_2__::func_182(uParam2, 37, 1);
					__LIB_2__::func_182(uParam2, 46, 1);
					__LIB_2__::func_182(uParam2, 110, 1);
					__LIB_1__::func_99(uParam4, 92, 1);
					__LIB_1__::func_99(uParam4, 93, 1);
					__LIB_1__::func_99(uParam4, 94, 1);
					__LIB_1__::func_99(uParam4, 96, 1);
					__LIB_1__::func_99(uParam4, 97, 1);
					__LIB_1__::func_99(uParam4, 98, 1);
					__LIB_1__::func_99(uParam4, 100, 1);
					__LIB_1__::func_99(uParam4, 103, 1);
					__LIB_1__::func_99(uParam4, 104, 1);
					__LIB_1__::func_99(uParam4, 105, 1);
					__LIB_1__::func_99(uParam4, 106, 1);
					__LIB_1__::func_99(uParam4, 107, 1);
					__LIB_1__::func_99(uParam4, 108, 1);
					__LIB_2__::func_422(uParam2, uParam3, uParam4);
					break;
				case 62:
					__LIB_2__::func_182(uParam3, 67, 1);
					__LIB_2__::func_182(uParam3, 68, 1);
					__LIB_2__::func_182(uParam3, 69, 1);
					__LIB_2__::func_182(uParam3, 70, 1);
					__LIB_2__::func_182(uParam3, 71, 1);
					__LIB_2__::func_182(uParam3, 72, 1);
					__LIB_2__::func_182(uParam3, 73, 1);
					__LIB_2__::func_182(uParam3, 74, 1);
					__LIB_2__::func_182(uParam3, 78, 1);
					__LIB_2__::func_182(uParam3, 79, 1);
					__LIB_2__::func_182(uParam3, 80, 1);
					__LIB_2__::func_182(uParam3, 81, 1);
					__LIB_2__::func_182(uParam3, 82, 1);
					__LIB_2__::func_182(uParam3, 91, 1);
					__LIB_2__::func_182(uParam3, 92, 1);
					__LIB_2__::func_182(uParam2, 66, 1);
					__LIB_2__::func_182(uParam2, 67, 1);
					__LIB_2__::func_182(uParam2, 68, 1);
					__LIB_2__::func_182(uParam2, 69, 1);
					__LIB_2__::func_182(uParam2, 70, 1);
					__LIB_2__::func_182(uParam2, 71, 1);
					__LIB_2__::func_182(uParam2, 72, 1);
					__LIB_2__::func_182(uParam2, 73, 1);
					__LIB_2__::func_182(uParam2, 77, 1);
					__LIB_2__::func_182(uParam2, 78, 1);
					__LIB_2__::func_182(uParam2, 79, 1);
					__LIB_2__::func_182(uParam2, 80, 1);
					__LIB_2__::func_182(uParam2, 81, 1);
					__LIB_2__::func_182(uParam2, 90, 1);
					__LIB_2__::func_182(uParam2, 91, 1);
					__LIB_2__::func_182(uParam3, 38, 1);
					__LIB_2__::func_182(uParam3, 47, 1);
					__LIB_2__::func_182(uParam3, 111, 1);
					__LIB_2__::func_182(uParam2, 37, 1);
					__LIB_2__::func_182(uParam2, 46, 1);
					__LIB_2__::func_182(uParam2, 110, 1);
					__LIB_1__::func_99(uParam4, 92, 1);
					__LIB_1__::func_99(uParam4, 93, 1);
					__LIB_1__::func_99(uParam4, 94, 1);
					__LIB_1__::func_99(uParam4, 96, 1);
					__LIB_1__::func_99(uParam4, 97, 1);
					__LIB_1__::func_99(uParam4, 98, 1);
					__LIB_1__::func_99(uParam4, 100, 1);
					__LIB_1__::func_99(uParam4, 103, 1);
					__LIB_1__::func_99(uParam4, 104, 1);
					__LIB_1__::func_99(uParam4, 105, 1);
					__LIB_1__::func_99(uParam4, 106, 1);
					__LIB_1__::func_99(uParam4, 107, 1);
					__LIB_1__::func_99(uParam4, 108, 1);
					__LIB_2__::func_422(uParam2, uParam3, uParam4);
					break;
				case 64:
				case 65:
				case 66:
					switch (iParam5)
					{
						case 0:
							__LIB_2__::func_182(uParam3, 16, 1);
							__LIB_2__::func_182(uParam3, 48, 1);
							__LIB_2__::func_182(uParam3, 49, 1);
							__LIB_2__::func_182(uParam3, 18, 1);
							__LIB_2__::func_182(uParam3, 50, 1);
							__LIB_2__::func_182(uParam3, 51, 1);
							__LIB_2__::func_182(uParam3, 52, 1);
							__LIB_2__::func_182(uParam3, 53, 1);
							__LIB_2__::func_182(uParam3, 62, 1);
							__LIB_2__::func_182(uParam3, 38, 1);
							__LIB_2__::func_182(uParam3, 47, 1);
							__LIB_2__::func_182(uParam3, 111, 1);
							__LIB_2__::func_182(uParam2, 18, 1);
							__LIB_2__::func_182(uParam2, 49, 1);
							__LIB_2__::func_182(uParam2, 50, 1);
							__LIB_2__::func_182(uParam2, 51, 1);
							__LIB_2__::func_182(uParam2, 52, 1);
							__LIB_2__::func_182(uParam2, 62, 1);
							__LIB_2__::func_182(uParam2, 37, 1);
							__LIB_2__::func_182(uParam2, 46, 1);
							__LIB_2__::func_182(uParam2, 110, 1);
							__LIB_1__::func_99(uParam4, 9, 1);
							__LIB_1__::func_99(uParam4, 10, 1);
							__LIB_1__::func_99(uParam4, 12, 1);
							__LIB_1__::func_99(uParam4, 17, 1);
							__LIB_1__::func_99(uParam4, 18, 1);
							__LIB_1__::func_99(uParam4, 19, 1);
							__LIB_1__::func_99(uParam4, 20, 1);
							__LIB_1__::func_99(uParam4, 59, 1);
							__LIB_1__::func_99(uParam4, 60, 1);
							__LIB_1__::func_99(uParam4, 61, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 63, 1);
							__LIB_1__::func_99(uParam4, 64, 1);
							__LIB_1__::func_99(uParam4, 65, 1);
							__LIB_1__::func_99(uParam4, 66, 1);
							__LIB_1__::func_99(uParam4, 67, 1);
							__LIB_1__::func_99(uParam4, 68, 1);
							__LIB_1__::func_99(uParam4, 69, 1);
							__LIB_1__::func_99(uParam4, 70, 1);
							__LIB_1__::func_99(uParam4, 71, 1);
							__LIB_1__::func_99(uParam4, 72, 1);
							__LIB_1__::func_99(uParam4, 21, 1);
							__LIB_1__::func_99(uParam4, 22, 1);
							__LIB_1__::func_99(uParam4, 23, 1);
							__LIB_1__::func_99(uParam4, 24, 1);
							__LIB_1__::func_99(uParam4, 25, 1);
							__LIB_1__::func_99(uParam4, 26, 1);
							__LIB_1__::func_99(uParam4, 36, 1);
							__LIB_1__::func_99(uParam4, 46, 1);
							__LIB_1__::func_99(uParam4, 38, 1);
							__LIB_1__::func_99(uParam4, 29, 1);
							__LIB_1__::func_99(uParam4, 28, 1);
							__LIB_1__::func_99(uParam4, 8, 1);
							__LIB_1__::func_99(uParam4, 31, 1);
							__LIB_1__::func_99(uParam4, 32, 1);
							__LIB_1__::func_99(uParam4, 33, 1);
							__LIB_1__::func_99(uParam4, 34, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 66, 1);
							__LIB_2__::func_182(uParam2, 67, 1);
							__LIB_2__::func_182(uParam2, 68, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 70, 1);
							__LIB_2__::func_182(uParam2, 71, 1);
							__LIB_2__::func_182(uParam2, 72, 1);
							__LIB_2__::func_182(uParam2, 73, 1);
							__LIB_2__::func_182(uParam2, 77, 1);
							__LIB_2__::func_182(uParam2, 78, 1);
							__LIB_2__::func_182(uParam2, 79, 1);
							__LIB_2__::func_182(uParam2, 80, 1);
							__LIB_2__::func_182(uParam2, 81, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_2__::func_422(uParam2, uParam3, uParam4);
							break;
						case 1:
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 66, 1);
							__LIB_2__::func_182(uParam2, 67, 1);
							__LIB_2__::func_182(uParam2, 68, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 70, 1);
							__LIB_2__::func_182(uParam2, 71, 1);
							__LIB_2__::func_182(uParam2, 72, 1);
							__LIB_2__::func_182(uParam2, 73, 1);
							__LIB_2__::func_182(uParam2, 77, 1);
							__LIB_2__::func_182(uParam2, 78, 1);
							__LIB_2__::func_182(uParam2, 79, 1);
							__LIB_2__::func_182(uParam2, 80, 1);
							__LIB_2__::func_182(uParam2, 81, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_2__::func_422(uParam2, uParam3, uParam4);
							break;
						case 2:
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 66, 1);
							__LIB_2__::func_182(uParam2, 67, 1);
							__LIB_2__::func_182(uParam2, 68, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 70, 1);
							__LIB_2__::func_182(uParam2, 71, 1);
							__LIB_2__::func_182(uParam2, 72, 1);
							__LIB_2__::func_182(uParam2, 73, 1);
							__LIB_2__::func_182(uParam2, 77, 1);
							__LIB_2__::func_182(uParam2, 78, 1);
							__LIB_2__::func_182(uParam2, 79, 1);
							__LIB_2__::func_182(uParam2, 80, 1);
							__LIB_2__::func_182(uParam2, 81, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_2__::func_422(uParam2, uParam3, uParam4);
							break;
					}
					break;
				case 10:
					switch (iParam5)
					{
						case 0:
							__LIB_2__::func_182(uParam3, 3, 1);
							__LIB_2__::func_182(uParam3, 4, 1);
							__LIB_2__::func_182(uParam3, 6, 1);
							__LIB_2__::func_182(uParam3, 10, 1);
							__LIB_2__::func_182(uParam3, 54, 1);
							__LIB_2__::func_182(uParam3, 55, 1);
							__LIB_2__::func_182(uParam3, 56, 1);
							__LIB_2__::func_182(uParam3, 13, 1);
							__LIB_2__::func_182(uParam3, 16, 1);
							__LIB_2__::func_182(uParam3, 48, 1);
							__LIB_2__::func_182(uParam3, 49, 1);
							__LIB_2__::func_182(uParam3, 18, 1);
							__LIB_2__::func_182(uParam3, 50, 1);
							__LIB_2__::func_182(uParam3, 51, 1);
							__LIB_2__::func_182(uParam3, 52, 1);
							__LIB_2__::func_182(uParam3, 53, 1);
							__LIB_2__::func_182(uParam3, 62, 1);
							__LIB_2__::func_182(uParam3, 38, 1);
							__LIB_2__::func_182(uParam3, 47, 1);
							__LIB_2__::func_182(uParam3, 111, 1);
							__LIB_2__::func_182(uParam3, 20, 1);
							__LIB_2__::func_182(uParam3, 26, 1);
							__LIB_2__::func_182(uParam3, 27, 1);
							__LIB_2__::func_182(uParam3, 32, 1);
							__LIB_2__::func_182(uParam3, 33, 1);
							__LIB_2__::func_182(uParam3, 37, 1);
							__LIB_2__::func_182(uParam3, 39, 1);
							__LIB_2__::func_182(uParam3, 55, 1);
							__LIB_2__::func_182(uParam3, 106, 1);
							__LIB_2__::func_182(uParam3, 114, 1);
							__LIB_2__::func_182(uParam3, 116, 1);
							__LIB_2__::func_182(uParam3, 117, 1);
							__LIB_2__::func_182(uParam3, 118, 1);
							__LIB_2__::func_182(uParam3, 119, 1);
							__LIB_2__::func_182(uParam2, 3, 1);
							__LIB_2__::func_182(uParam2, 4, 1);
							__LIB_2__::func_182(uParam2, 6, 1);
							__LIB_2__::func_182(uParam2, 8, 1);
							__LIB_2__::func_182(uParam2, 9, 1);
							__LIB_2__::func_182(uParam2, 10, 1);
							__LIB_2__::func_182(uParam2, 53, 1);
							__LIB_2__::func_182(uParam2, 56, 1);
							__LIB_2__::func_182(uParam2, 55, 1);
							__LIB_2__::func_182(uParam2, 13, 1);
							__LIB_2__::func_182(uParam2, 18, 1);
							__LIB_2__::func_182(uParam2, 49, 1);
							__LIB_2__::func_182(uParam2, 50, 1);
							__LIB_2__::func_182(uParam2, 51, 1);
							__LIB_2__::func_182(uParam2, 52, 1);
							__LIB_2__::func_182(uParam2, 62, 1);
							__LIB_2__::func_182(uParam2, 37, 1);
							__LIB_2__::func_182(uParam2, 46, 1);
							__LIB_2__::func_182(uParam2, 110, 1);
							__LIB_2__::func_182(uParam2, 21, 1);
							__LIB_2__::func_182(uParam2, 26, 1);
							__LIB_2__::func_182(uParam2, 27, 1);
							__LIB_2__::func_182(uParam2, 28, 1);
							__LIB_2__::func_182(uParam2, 32, 1);
							__LIB_2__::func_182(uParam2, 36, 1);
							__LIB_2__::func_182(uParam2, 38, 1);
							__LIB_2__::func_182(uParam2, 55, 1);
							__LIB_2__::func_182(uParam2, 14, 1);
							__LIB_2__::func_182(uParam2, 105, 1);
							__LIB_2__::func_182(uParam2, 113, 1);
							__LIB_2__::func_182(uParam2, 114, 1);
							__LIB_2__::func_182(uParam2, 115, 1);
							__LIB_2__::func_182(uParam2, 116, 1);
							__LIB_2__::func_182(uParam2, 117, 1);
							__LIB_1__::func_99(uParam4, 3, 1);
							__LIB_1__::func_99(uParam4, 4, 1);
							__LIB_1__::func_99(uParam4, 14, 1);
							__LIB_1__::func_99(uParam4, 15, 1);
							__LIB_1__::func_99(uParam4, 16, 1);
							__LIB_1__::func_99(uParam4, 9, 1);
							__LIB_1__::func_99(uParam4, 10, 1);
							__LIB_1__::func_99(uParam4, 12, 1);
							__LIB_1__::func_99(uParam4, 13, 1);
							__LIB_1__::func_99(uParam4, 17, 1);
							__LIB_1__::func_99(uParam4, 18, 1);
							__LIB_1__::func_99(uParam4, 19, 1);
							__LIB_1__::func_99(uParam4, 20, 1);
							__LIB_1__::func_99(uParam4, 59, 1);
							__LIB_1__::func_99(uParam4, 60, 1);
							__LIB_1__::func_99(uParam4, 61, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 63, 1);
							__LIB_1__::func_99(uParam4, 64, 1);
							__LIB_1__::func_99(uParam4, 65, 1);
							__LIB_1__::func_99(uParam4, 66, 1);
							__LIB_1__::func_99(uParam4, 67, 1);
							__LIB_1__::func_99(uParam4, 68, 1);
							__LIB_1__::func_99(uParam4, 69, 1);
							__LIB_1__::func_99(uParam4, 70, 1);
							__LIB_1__::func_99(uParam4, 71, 1);
							__LIB_1__::func_99(uParam4, 72, 1);
							__LIB_1__::func_99(uParam4, 21, 1);
							__LIB_1__::func_99(uParam4, 22, 1);
							__LIB_1__::func_99(uParam4, 23, 1);
							__LIB_1__::func_99(uParam4, 24, 1);
							__LIB_1__::func_99(uParam4, 25, 1);
							__LIB_1__::func_99(uParam4, 26, 1);
							__LIB_1__::func_99(uParam4, 36, 1);
							__LIB_1__::func_99(uParam4, 46, 1);
							__LIB_1__::func_99(uParam4, 38, 1);
							__LIB_1__::func_99(uParam4, 29, 1);
							__LIB_1__::func_99(uParam4, 28, 1);
							__LIB_1__::func_99(uParam4, 8, 1);
							__LIB_1__::func_99(uParam4, 31, 1);
							__LIB_1__::func_99(uParam4, 32, 1);
							__LIB_1__::func_99(uParam4, 33, 1);
							__LIB_1__::func_99(uParam4, 34, 1);
							__LIB_1__::func_99(uParam4, 43, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_1__::func_99(uParam4, 110, 1);
							__LIB_1__::func_99(uParam4, 112, 1);
							__LIB_2__::func_182(uParam3, 65, 1);
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 75, 1);
							__LIB_2__::func_182(uParam3, 76, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 64, 1);
							__LIB_2__::func_182(uParam2, 65, 1);
							__LIB_2__::func_182(uParam2, 66, 1);
							__LIB_2__::func_182(uParam2, 67, 1);
							__LIB_2__::func_182(uParam2, 68, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 70, 1);
							__LIB_2__::func_182(uParam2, 71, 1);
							__LIB_2__::func_182(uParam2, 72, 1);
							__LIB_2__::func_182(uParam2, 73, 1);
							__LIB_2__::func_182(uParam2, 74, 1);
							__LIB_2__::func_182(uParam2, 75, 1);
							__LIB_2__::func_182(uParam2, 77, 1);
							__LIB_2__::func_182(uParam2, 78, 1);
							__LIB_2__::func_182(uParam2, 79, 1);
							__LIB_2__::func_182(uParam2, 80, 1);
							__LIB_2__::func_182(uParam2, 81, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							__LIB_2__::func_422(uParam2, uParam3, uParam4);
							break;
						case 1:
							__LIB_2__::func_182(uParam3, 3, 1);
							__LIB_2__::func_182(uParam3, 4, 1);
							__LIB_2__::func_182(uParam3, 6, 1);
							__LIB_2__::func_182(uParam3, 13, 1);
							__LIB_2__::func_182(uParam3, 18, 1);
							__LIB_2__::func_182(uParam3, 50, 1);
							__LIB_2__::func_182(uParam3, 51, 1);
							__LIB_2__::func_182(uParam3, 52, 1);
							__LIB_2__::func_182(uParam3, 53, 1);
							__LIB_2__::func_182(uParam3, 62, 1);
							__LIB_2__::func_182(uParam3, 38, 1);
							__LIB_2__::func_182(uParam3, 47, 1);
							__LIB_2__::func_182(uParam3, 111, 1);
							__LIB_2__::func_182(uParam3, 19, 1);
							__LIB_2__::func_182(uParam3, 20, 1);
							__LIB_2__::func_182(uParam3, 26, 1);
							__LIB_2__::func_182(uParam3, 27, 1);
							__LIB_2__::func_182(uParam3, 32, 1);
							__LIB_2__::func_182(uParam3, 33, 1);
							__LIB_2__::func_182(uParam3, 37, 1);
							__LIB_2__::func_182(uParam3, 39, 1);
							__LIB_2__::func_182(uParam3, 55, 1);
							__LIB_2__::func_182(uParam3, 106, 1);
							__LIB_2__::func_182(uParam3, 114, 1);
							__LIB_2__::func_182(uParam3, 116, 1);
							__LIB_2__::func_182(uParam3, 117, 1);
							__LIB_2__::func_182(uParam3, 118, 1);
							__LIB_2__::func_182(uParam3, 119, 1);
							__LIB_2__::func_182(uParam2, 3, 1);
							__LIB_2__::func_182(uParam2, 4, 1);
							__LIB_2__::func_182(uParam2, 6, 1);
							__LIB_2__::func_182(uParam2, 8, 1);
							__LIB_2__::func_182(uParam2, 9, 1);
							__LIB_2__::func_182(uParam2, 10, 1);
							__LIB_2__::func_182(uParam2, 53, 1);
							__LIB_2__::func_182(uParam2, 56, 1);
							__LIB_2__::func_182(uParam2, 55, 1);
							__LIB_2__::func_182(uParam2, 11, 1);
							__LIB_2__::func_182(uParam2, 13, 1);
							__LIB_2__::func_182(uParam2, 18, 1);
							__LIB_2__::func_182(uParam2, 49, 1);
							__LIB_2__::func_182(uParam2, 50, 1);
							__LIB_2__::func_182(uParam2, 51, 1);
							__LIB_2__::func_182(uParam2, 52, 1);
							__LIB_2__::func_182(uParam2, 62, 1);
							__LIB_2__::func_182(uParam2, 37, 1);
							__LIB_2__::func_182(uParam2, 46, 1);
							__LIB_2__::func_182(uParam2, 110, 1);
							__LIB_2__::func_182(uParam2, 21, 1);
							__LIB_2__::func_182(uParam2, 22, 1);
							__LIB_2__::func_182(uParam2, 54, 1);
							__LIB_2__::func_182(uParam2, 26, 1);
							__LIB_2__::func_182(uParam2, 27, 1);
							__LIB_2__::func_182(uParam2, 28, 1);
							__LIB_2__::func_182(uParam2, 30, 1);
							__LIB_2__::func_182(uParam2, 31, 1);
							__LIB_2__::func_182(uParam2, 32, 1);
							__LIB_2__::func_182(uParam2, 36, 1);
							__LIB_2__::func_182(uParam2, 38, 1);
							__LIB_2__::func_182(uParam2, 55, 1);
							__LIB_2__::func_182(uParam2, 14, 1);
							__LIB_2__::func_182(uParam2, 105, 1);
							__LIB_2__::func_182(uParam2, 113, 1);
							__LIB_2__::func_182(uParam2, 114, 1);
							__LIB_2__::func_182(uParam2, 115, 1);
							__LIB_2__::func_182(uParam2, 116, 1);
							__LIB_2__::func_182(uParam2, 117, 1);
							__LIB_1__::func_99(uParam4, 2, 1);
							__LIB_1__::func_99(uParam4, 3, 1);
							__LIB_1__::func_99(uParam4, 4, 1);
							__LIB_1__::func_99(uParam4, 14, 1);
							__LIB_1__::func_99(uParam4, 15, 1);
							__LIB_1__::func_99(uParam4, 16, 1);
							__LIB_1__::func_99(uParam4, 9, 1);
							__LIB_1__::func_99(uParam4, 10, 1);
							__LIB_1__::func_99(uParam4, 12, 1);
							__LIB_1__::func_99(uParam4, 13, 1);
							__LIB_1__::func_99(uParam4, 17, 1);
							__LIB_1__::func_99(uParam4, 18, 1);
							__LIB_1__::func_99(uParam4, 19, 1);
							__LIB_1__::func_99(uParam4, 20, 1);
							__LIB_1__::func_99(uParam4, 59, 1);
							__LIB_1__::func_99(uParam4, 60, 1);
							__LIB_1__::func_99(uParam4, 61, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 63, 1);
							__LIB_1__::func_99(uParam4, 64, 1);
							__LIB_1__::func_99(uParam4, 65, 1);
							__LIB_1__::func_99(uParam4, 66, 1);
							__LIB_1__::func_99(uParam4, 67, 1);
							__LIB_1__::func_99(uParam4, 68, 1);
							__LIB_1__::func_99(uParam4, 69, 1);
							__LIB_1__::func_99(uParam4, 70, 1);
							__LIB_1__::func_99(uParam4, 71, 1);
							__LIB_1__::func_99(uParam4, 72, 1);
							__LIB_1__::func_99(uParam4, 21, 1);
							__LIB_1__::func_99(uParam4, 22, 1);
							__LIB_1__::func_99(uParam4, 23, 1);
							__LIB_1__::func_99(uParam4, 24, 1);
							__LIB_1__::func_99(uParam4, 25, 1);
							__LIB_1__::func_99(uParam4, 26, 1);
							__LIB_1__::func_99(uParam4, 36, 1);
							__LIB_1__::func_99(uParam4, 46, 1);
							__LIB_1__::func_99(uParam4, 38, 1);
							__LIB_1__::func_99(uParam4, 29, 1);
							__LIB_1__::func_99(uParam4, 28, 1);
							__LIB_1__::func_99(uParam4, 8, 1);
							__LIB_1__::func_99(uParam4, 31, 1);
							__LIB_1__::func_99(uParam4, 32, 1);
							__LIB_1__::func_99(uParam4, 33, 1);
							__LIB_1__::func_99(uParam4, 34, 1);
							__LIB_1__::func_99(uParam4, 43, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_1__::func_99(uParam4, 110, 1);
							__LIB_1__::func_99(uParam4, 112, 1);
							__LIB_2__::func_182(uParam3, 65, 1);
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 75, 1);
							__LIB_2__::func_182(uParam3, 76, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 64, 1);
							__LIB_2__::func_182(uParam2, 65, 1);
							__LIB_2__::func_182(uParam2, 66, 1);
							__LIB_2__::func_182(uParam2, 67, 1);
							__LIB_2__::func_182(uParam2, 68, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 70, 1);
							__LIB_2__::func_182(uParam2, 71, 1);
							__LIB_2__::func_182(uParam2, 72, 1);
							__LIB_2__::func_182(uParam2, 73, 1);
							__LIB_2__::func_182(uParam2, 74, 1);
							__LIB_2__::func_182(uParam2, 75, 1);
							__LIB_2__::func_182(uParam2, 77, 1);
							__LIB_2__::func_182(uParam2, 78, 1);
							__LIB_2__::func_182(uParam2, 79, 1);
							__LIB_2__::func_182(uParam2, 80, 1);
							__LIB_2__::func_182(uParam2, 81, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							__LIB_2__::func_422(uParam2, uParam3, uParam4);
							break;
						case 2:
							__LIB_2__::func_182(uParam3, 38, 1);
							__LIB_2__::func_182(uParam3, 47, 1);
							__LIB_2__::func_182(uParam3, 111, 1);
							__LIB_2__::func_182(uParam3, 39, 1);
							__LIB_2__::func_182(uParam3, 106, 1);
							__LIB_2__::func_182(uParam3, 114, 1);
							__LIB_2__::func_182(uParam3, 116, 1);
							__LIB_2__::func_182(uParam3, 117, 1);
							__LIB_2__::func_182(uParam3, 118, 1);
							__LIB_2__::func_182(uParam3, 119, 1);
							__LIB_2__::func_182(uParam2, 37, 1);
							__LIB_2__::func_182(uParam2, 46, 1);
							__LIB_2__::func_182(uParam2, 110, 1);
							__LIB_2__::func_182(uParam2, 38, 1);
							__LIB_2__::func_182(uParam2, 14, 1);
							__LIB_2__::func_182(uParam2, 105, 1);
							__LIB_2__::func_182(uParam2, 113, 1);
							__LIB_2__::func_182(uParam2, 114, 1);
							__LIB_2__::func_182(uParam2, 115, 1);
							__LIB_2__::func_182(uParam2, 116, 1);
							__LIB_2__::func_182(uParam2, 117, 1);
							__LIB_1__::func_99(uParam4, 9, 1);
							__LIB_1__::func_99(uParam4, 10, 1);
							__LIB_1__::func_99(uParam4, 12, 1);
							__LIB_1__::func_99(uParam4, 18, 1);
							__LIB_1__::func_99(uParam4, 19, 1);
							__LIB_1__::func_99(uParam4, 20, 1);
							__LIB_1__::func_99(uParam4, 59, 1);
							__LIB_1__::func_99(uParam4, 60, 1);
							__LIB_1__::func_99(uParam4, 61, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 63, 1);
							__LIB_1__::func_99(uParam4, 64, 1);
							__LIB_1__::func_99(uParam4, 65, 1);
							__LIB_1__::func_99(uParam4, 66, 1);
							__LIB_1__::func_99(uParam4, 67, 1);
							__LIB_1__::func_99(uParam4, 68, 1);
							__LIB_1__::func_99(uParam4, 69, 1);
							__LIB_1__::func_99(uParam4, 70, 1);
							__LIB_1__::func_99(uParam4, 71, 1);
							__LIB_1__::func_99(uParam4, 72, 1);
							__LIB_1__::func_99(uParam4, 21, 1);
							__LIB_1__::func_99(uParam4, 22, 1);
							__LIB_1__::func_99(uParam4, 23, 1);
							__LIB_1__::func_99(uParam4, 24, 1);
							__LIB_1__::func_99(uParam4, 25, 1);
							__LIB_1__::func_99(uParam4, 26, 1);
							__LIB_1__::func_99(uParam4, 36, 1);
							__LIB_1__::func_99(uParam4, 46, 1);
							__LIB_1__::func_99(uParam4, 38, 1);
							__LIB_1__::func_99(uParam4, 29, 1);
							__LIB_1__::func_99(uParam4, 28, 1);
							__LIB_1__::func_99(uParam4, 8, 1);
							__LIB_1__::func_99(uParam4, 31, 1);
							__LIB_1__::func_99(uParam4, 32, 1);
							__LIB_1__::func_99(uParam4, 33, 1);
							__LIB_1__::func_99(uParam4, 34, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_1__::func_99(uParam4, 110, 1);
							__LIB_1__::func_99(uParam4, 112, 1);
							__LIB_2__::func_182(uParam3, 65, 1);
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 75, 1);
							__LIB_2__::func_182(uParam3, 76, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 64, 1);
							__LIB_2__::func_182(uParam2, 65, 1);
							__LIB_2__::func_182(uParam2, 66, 1);
							__LIB_2__::func_182(uParam2, 67, 1);
							__LIB_2__::func_182(uParam2, 68, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 70, 1);
							__LIB_2__::func_182(uParam2, 71, 1);
							__LIB_2__::func_182(uParam2, 72, 1);
							__LIB_2__::func_182(uParam2, 73, 1);
							__LIB_2__::func_182(uParam2, 74, 1);
							__LIB_2__::func_182(uParam2, 75, 1);
							__LIB_2__::func_182(uParam2, 77, 1);
							__LIB_2__::func_182(uParam2, 78, 1);
							__LIB_2__::func_182(uParam2, 79, 1);
							__LIB_2__::func_182(uParam2, 80, 1);
							__LIB_2__::func_182(uParam2, 81, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							__LIB_2__::func_422(uParam2, uParam3, uParam4);
							break;
					}
					break;
				case 13:
					switch (iParam5)
					{
						case 0:
							__LIB_2__::func_182(uParam3, 16, 1);
							__LIB_2__::func_182(uParam3, 48, 1);
							__LIB_2__::func_182(uParam3, 49, 1);
							__LIB_2__::func_182(uParam3, 18, 1);
							__LIB_2__::func_182(uParam3, 50, 1);
							__LIB_2__::func_182(uParam3, 51, 1);
							__LIB_2__::func_182(uParam3, 52, 1);
							__LIB_2__::func_182(uParam3, 53, 1);
							__LIB_2__::func_182(uParam3, 62, 1);
							__LIB_2__::func_182(uParam3, 38, 1);
							__LIB_2__::func_182(uParam3, 47, 1);
							__LIB_2__::func_182(uParam3, 111, 1);
							__LIB_2__::func_182(uParam2, 18, 1);
							__LIB_2__::func_182(uParam2, 49, 1);
							__LIB_2__::func_182(uParam2, 50, 1);
							__LIB_2__::func_182(uParam2, 51, 1);
							__LIB_2__::func_182(uParam2, 52, 1);
							__LIB_2__::func_182(uParam2, 62, 1);
							__LIB_2__::func_182(uParam2, 37, 1);
							__LIB_2__::func_182(uParam2, 46, 1);
							__LIB_2__::func_182(uParam2, 110, 1);
							__LIB_2__::func_182(uParam2, 19, 1);
							__LIB_1__::func_99(uParam4, 2, 1);
							__LIB_1__::func_99(uParam4, 3, 1);
							__LIB_1__::func_99(uParam4, 8, 1);
							__LIB_1__::func_99(uParam4, 9, 1);
							__LIB_1__::func_99(uParam4, 10, 1);
							__LIB_1__::func_99(uParam4, 13, 1);
							__LIB_1__::func_99(uParam4, 17, 1);
							__LIB_1__::func_99(uParam4, 18, 1);
							__LIB_1__::func_99(uParam4, 19, 1);
							__LIB_1__::func_99(uParam4, 20, 1);
							__LIB_1__::func_99(uParam4, 59, 1);
							__LIB_1__::func_99(uParam4, 60, 1);
							__LIB_1__::func_99(uParam4, 61, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 63, 1);
							__LIB_1__::func_99(uParam4, 64, 1);
							__LIB_1__::func_99(uParam4, 65, 1);
							__LIB_1__::func_99(uParam4, 66, 1);
							__LIB_1__::func_99(uParam4, 67, 1);
							__LIB_1__::func_99(uParam4, 68, 1);
							__LIB_1__::func_99(uParam4, 69, 1);
							__LIB_1__::func_99(uParam4, 70, 1);
							__LIB_1__::func_99(uParam4, 71, 1);
							__LIB_1__::func_99(uParam4, 72, 1);
							__LIB_1__::func_99(uParam4, 21, 1);
							__LIB_1__::func_99(uParam4, 22, 1);
							__LIB_1__::func_99(uParam4, 23, 1);
							__LIB_1__::func_99(uParam4, 24, 1);
							__LIB_1__::func_99(uParam4, 25, 1);
							__LIB_1__::func_99(uParam4, 26, 1);
							__LIB_1__::func_99(uParam4, 36, 1);
							__LIB_1__::func_99(uParam4, 46, 1);
							__LIB_1__::func_99(uParam4, 38, 1);
							__LIB_1__::func_99(uParam4, 29, 1);
							__LIB_1__::func_99(uParam4, 28, 1);
							__LIB_1__::func_99(uParam4, 31, 1);
							__LIB_1__::func_99(uParam4, 32, 1);
							__LIB_1__::func_99(uParam4, 33, 1);
							__LIB_1__::func_99(uParam4, 34, 1);
							__LIB_1__::func_99(uParam4, 43, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_1__::func_99(uParam4, 110, 1);
							__LIB_1__::func_99(uParam4, 112, 1);
							__LIB_1__::func_99(uParam4, 115, 1);
							__LIB_1__::func_99(uParam4, 116, 1);
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 66, 1);
							__LIB_2__::func_182(uParam2, 67, 1);
							__LIB_2__::func_182(uParam2, 68, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 70, 1);
							__LIB_2__::func_182(uParam2, 71, 1);
							__LIB_2__::func_182(uParam2, 72, 1);
							__LIB_2__::func_182(uParam2, 73, 1);
							__LIB_2__::func_182(uParam2, 77, 1);
							__LIB_2__::func_182(uParam2, 78, 1);
							__LIB_2__::func_182(uParam2, 79, 1);
							__LIB_2__::func_182(uParam2, 80, 1);
							__LIB_2__::func_182(uParam2, 81, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							__LIB_2__::func_422(uParam2, uParam3, uParam4);
							break;
						case 1:
							__LIB_2__::func_182(uParam3, 16, 1);
							__LIB_2__::func_182(uParam3, 48, 1);
							__LIB_2__::func_182(uParam3, 49, 1);
							__LIB_2__::func_182(uParam3, 18, 1);
							__LIB_2__::func_182(uParam3, 50, 1);
							__LIB_2__::func_182(uParam3, 51, 1);
							__LIB_2__::func_182(uParam3, 52, 1);
							__LIB_2__::func_182(uParam3, 53, 1);
							__LIB_2__::func_182(uParam3, 62, 1);
							__LIB_2__::func_182(uParam3, 38, 1);
							__LIB_2__::func_182(uParam3, 47, 1);
							__LIB_2__::func_182(uParam3, 111, 1);
							__LIB_2__::func_182(uParam2, 18, 1);
							__LIB_2__::func_182(uParam2, 49, 1);
							__LIB_2__::func_182(uParam2, 50, 1);
							__LIB_2__::func_182(uParam2, 51, 1);
							__LIB_2__::func_182(uParam2, 52, 1);
							__LIB_2__::func_182(uParam2, 62, 1);
							__LIB_2__::func_182(uParam2, 37, 1);
							__LIB_2__::func_182(uParam2, 46, 1);
							__LIB_2__::func_182(uParam2, 110, 1);
							__LIB_1__::func_99(uParam4, 2, 1);
							__LIB_1__::func_99(uParam4, 7, 1);
							__LIB_1__::func_99(uParam4, 8, 1);
							__LIB_1__::func_99(uParam4, 9, 1);
							__LIB_1__::func_99(uParam4, 10, 1);
							__LIB_1__::func_99(uParam4, 13, 1);
							__LIB_1__::func_99(uParam4, 17, 1);
							__LIB_1__::func_99(uParam4, 18, 1);
							__LIB_1__::func_99(uParam4, 19, 1);
							__LIB_1__::func_99(uParam4, 20, 1);
							__LIB_1__::func_99(uParam4, 59, 1);
							__LIB_1__::func_99(uParam4, 60, 1);
							__LIB_1__::func_99(uParam4, 61, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 63, 1);
							__LIB_1__::func_99(uParam4, 64, 1);
							__LIB_1__::func_99(uParam4, 65, 1);
							__LIB_1__::func_99(uParam4, 66, 1);
							__LIB_1__::func_99(uParam4, 67, 1);
							__LIB_1__::func_99(uParam4, 68, 1);
							__LIB_1__::func_99(uParam4, 69, 1);
							__LIB_1__::func_99(uParam4, 70, 1);
							__LIB_1__::func_99(uParam4, 71, 1);
							__LIB_1__::func_99(uParam4, 72, 1);
							__LIB_1__::func_99(uParam4, 21, 1);
							__LIB_1__::func_99(uParam4, 22, 1);
							__LIB_1__::func_99(uParam4, 23, 1);
							__LIB_1__::func_99(uParam4, 24, 1);
							__LIB_1__::func_99(uParam4, 25, 1);
							__LIB_1__::func_99(uParam4, 26, 1);
							__LIB_1__::func_99(uParam4, 36, 1);
							__LIB_1__::func_99(uParam4, 46, 1);
							__LIB_1__::func_99(uParam4, 38, 1);
							__LIB_1__::func_99(uParam4, 29, 1);
							__LIB_1__::func_99(uParam4, 28, 1);
							__LIB_1__::func_99(uParam4, 31, 1);
							__LIB_1__::func_99(uParam4, 32, 1);
							__LIB_1__::func_99(uParam4, 33, 1);
							__LIB_1__::func_99(uParam4, 34, 1);
							__LIB_1__::func_99(uParam4, 43, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_1__::func_99(uParam4, 110, 1);
							__LIB_1__::func_99(uParam4, 112, 1);
							__LIB_1__::func_99(uParam4, 115, 1);
							__LIB_1__::func_99(uParam4, 116, 1);
							__LIB_2__::func_422(uParam2, uParam3, uParam4);
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 66, 1);
							__LIB_2__::func_182(uParam2, 67, 1);
							__LIB_2__::func_182(uParam2, 68, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 70, 1);
							__LIB_2__::func_182(uParam2, 71, 1);
							__LIB_2__::func_182(uParam2, 72, 1);
							__LIB_2__::func_182(uParam2, 73, 1);
							__LIB_2__::func_182(uParam2, 77, 1);
							__LIB_2__::func_182(uParam2, 78, 1);
							__LIB_2__::func_182(uParam2, 79, 1);
							__LIB_2__::func_182(uParam2, 80, 1);
							__LIB_2__::func_182(uParam2, 81, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							break;
						case 2:
							__LIB_2__::func_182(uParam3, 18, 1);
							__LIB_2__::func_182(uParam3, 50, 1);
							__LIB_2__::func_182(uParam3, 51, 1);
							__LIB_2__::func_182(uParam3, 52, 1);
							__LIB_2__::func_182(uParam3, 53, 1);
							__LIB_2__::func_182(uParam3, 62, 1);
							__LIB_2__::func_182(uParam3, 38, 1);
							__LIB_2__::func_182(uParam3, 47, 1);
							__LIB_2__::func_182(uParam3, 111, 1);
							__LIB_2__::func_182(uParam2, 18, 1);
							__LIB_2__::func_182(uParam2, 49, 1);
							__LIB_2__::func_182(uParam2, 50, 1);
							__LIB_2__::func_182(uParam2, 51, 1);
							__LIB_2__::func_182(uParam2, 52, 1);
							__LIB_2__::func_182(uParam2, 62, 1);
							__LIB_2__::func_182(uParam2, 37, 1);
							__LIB_2__::func_182(uParam2, 46, 1);
							__LIB_2__::func_182(uParam2, 110, 1);
							__LIB_1__::func_99(uParam4, 1, 1);
							__LIB_1__::func_99(uParam4, 2, 1);
							__LIB_1__::func_99(uParam4, 3, 1);
							__LIB_1__::func_99(uParam4, 5, 1);
							__LIB_1__::func_99(uParam4, 8, 1);
							__LIB_1__::func_99(uParam4, 9, 1);
							__LIB_1__::func_99(uParam4, 10, 1);
							__LIB_1__::func_99(uParam4, 13, 1);
							__LIB_1__::func_99(uParam4, 17, 1);
							__LIB_1__::func_99(uParam4, 18, 1);
							__LIB_1__::func_99(uParam4, 19, 1);
							__LIB_1__::func_99(uParam4, 20, 1);
							__LIB_1__::func_99(uParam4, 59, 1);
							__LIB_1__::func_99(uParam4, 60, 1);
							__LIB_1__::func_99(uParam4, 61, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 63, 1);
							__LIB_1__::func_99(uParam4, 64, 1);
							__LIB_1__::func_99(uParam4, 65, 1);
							__LIB_1__::func_99(uParam4, 66, 1);
							__LIB_1__::func_99(uParam4, 67, 1);
							__LIB_1__::func_99(uParam4, 68, 1);
							__LIB_1__::func_99(uParam4, 69, 1);
							__LIB_1__::func_99(uParam4, 70, 1);
							__LIB_1__::func_99(uParam4, 71, 1);
							__LIB_1__::func_99(uParam4, 72, 1);
							__LIB_1__::func_99(uParam4, 21, 1);
							__LIB_1__::func_99(uParam4, 22, 1);
							__LIB_1__::func_99(uParam4, 23, 1);
							__LIB_1__::func_99(uParam4, 24, 1);
							__LIB_1__::func_99(uParam4, 25, 1);
							__LIB_1__::func_99(uParam4, 26, 1);
							__LIB_1__::func_99(uParam4, 36, 1);
							__LIB_1__::func_99(uParam4, 46, 1);
							__LIB_1__::func_99(uParam4, 38, 1);
							__LIB_1__::func_99(uParam4, 29, 1);
							__LIB_1__::func_99(uParam4, 28, 1);
							__LIB_1__::func_99(uParam4, 31, 1);
							__LIB_1__::func_99(uParam4, 32, 1);
							__LIB_1__::func_99(uParam4, 33, 1);
							__LIB_1__::func_99(uParam4, 34, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_1__::func_99(uParam4, 110, 1);
							__LIB_1__::func_99(uParam4, 112, 1);
							__LIB_1__::func_99(uParam4, 115, 1);
							__LIB_1__::func_99(uParam4, 116, 1);
							__LIB_2__::func_422(uParam2, uParam3, uParam4);
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 66, 1);
							__LIB_2__::func_182(uParam2, 67, 1);
							__LIB_2__::func_182(uParam2, 68, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 70, 1);
							__LIB_2__::func_182(uParam2, 71, 1);
							__LIB_2__::func_182(uParam2, 72, 1);
							__LIB_2__::func_182(uParam2, 73, 1);
							__LIB_2__::func_182(uParam2, 77, 1);
							__LIB_2__::func_182(uParam2, 78, 1);
							__LIB_2__::func_182(uParam2, 79, 1);
							__LIB_2__::func_182(uParam2, 80, 1);
							__LIB_2__::func_182(uParam2, 81, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							break;
					}
					break;
				case 16:
					switch (iParam5)
					{
						case 0:
							__LIB_2__::func_182(uParam3, 4, 1);
							break;
						case 1:
							__LIB_1__::func_99(uParam4, 43, 1);
							break;
						case 2:
							break;
					}
					break;
				case 23:
					switch (iParam5)
					{
						case 0:
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 66, 1);
							__LIB_2__::func_182(uParam2, 67, 1);
							__LIB_2__::func_182(uParam2, 68, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 70, 1);
							__LIB_2__::func_182(uParam2, 71, 1);
							__LIB_2__::func_182(uParam2, 72, 1);
							__LIB_2__::func_182(uParam2, 73, 1);
							__LIB_2__::func_182(uParam2, 74, 1);
							__LIB_2__::func_182(uParam2, 77, 1);
							__LIB_2__::func_182(uParam2, 78, 1);
							__LIB_2__::func_182(uParam2, 79, 1);
							__LIB_2__::func_182(uParam2, 80, 1);
							__LIB_2__::func_182(uParam2, 81, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_1__::func_99(uParam4, 110, 1);
							__LIB_1__::func_99(uParam4, 112, 1);
							__LIB_2__::func_422(uParam2, uParam3, uParam4);
							break;
						case 1:
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 66, 1);
							__LIB_2__::func_182(uParam2, 67, 1);
							__LIB_2__::func_182(uParam2, 68, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 70, 1);
							__LIB_2__::func_182(uParam2, 71, 1);
							__LIB_2__::func_182(uParam2, 72, 1);
							__LIB_2__::func_182(uParam2, 73, 1);
							__LIB_2__::func_182(uParam2, 74, 1);
							__LIB_2__::func_182(uParam2, 77, 1);
							__LIB_2__::func_182(uParam2, 78, 1);
							__LIB_2__::func_182(uParam2, 79, 1);
							__LIB_2__::func_182(uParam2, 80, 1);
							__LIB_2__::func_182(uParam2, 81, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_1__::func_99(uParam4, 110, 1);
							__LIB_1__::func_99(uParam4, 112, 1);
							__LIB_2__::func_422(uParam2, uParam3, uParam4);
							break;
						case 2:
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 66, 1);
							__LIB_2__::func_182(uParam2, 67, 1);
							__LIB_2__::func_182(uParam2, 68, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 70, 1);
							__LIB_2__::func_182(uParam2, 71, 1);
							__LIB_2__::func_182(uParam2, 72, 1);
							__LIB_2__::func_182(uParam2, 73, 1);
							__LIB_2__::func_182(uParam2, 74, 1);
							__LIB_2__::func_182(uParam2, 77, 1);
							__LIB_2__::func_182(uParam2, 78, 1);
							__LIB_2__::func_182(uParam2, 79, 1);
							__LIB_2__::func_182(uParam2, 80, 1);
							__LIB_2__::func_182(uParam2, 81, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_1__::func_99(uParam4, 110, 1);
							__LIB_1__::func_99(uParam4, 112, 1);
							__LIB_2__::func_422(uParam2, uParam3, uParam4);
							break;
					}
					break;
				case 17:
					switch (iParam5)
					{
						case 0:
							__LIB_2__::func_182(uParam3, 16, 1);
							__LIB_2__::func_182(uParam3, 48, 1);
							__LIB_2__::func_182(uParam3, 49, 1);
							__LIB_2__::func_182(uParam3, 18, 1);
							__LIB_2__::func_182(uParam3, 50, 1);
							__LIB_2__::func_182(uParam3, 51, 1);
							__LIB_2__::func_182(uParam3, 52, 1);
							__LIB_2__::func_182(uParam3, 53, 1);
							__LIB_2__::func_182(uParam3, 62, 1);
							__LIB_2__::func_182(uParam3, 38, 1);
							__LIB_2__::func_182(uParam3, 111, 1);
							__LIB_2__::func_182(uParam2, 16, 1);
							__LIB_2__::func_182(uParam2, 47, 1);
							__LIB_2__::func_182(uParam2, 48, 1);
							__LIB_2__::func_182(uParam2, 18, 1);
							__LIB_2__::func_182(uParam2, 49, 1);
							__LIB_2__::func_182(uParam2, 50, 1);
							__LIB_2__::func_182(uParam2, 51, 1);
							__LIB_2__::func_182(uParam2, 52, 1);
							__LIB_2__::func_182(uParam2, 62, 1);
							__LIB_2__::func_182(uParam2, 37, 1);
							__LIB_2__::func_182(uParam2, 46, 1);
							__LIB_2__::func_182(uParam2, 110, 1);
							__LIB_1__::func_99(uParam4, 1, 1);
							__LIB_1__::func_99(uParam4, 2, 1);
							__LIB_1__::func_99(uParam4, 3, 1);
							__LIB_1__::func_99(uParam4, 5, 1);
							__LIB_1__::func_99(uParam4, 6, 1);
							__LIB_1__::func_99(uParam4, 7, 1);
							__LIB_1__::func_99(uParam4, 8, 1);
							__LIB_1__::func_99(uParam4, 9, 1);
							__LIB_1__::func_99(uParam4, 10, 1);
							__LIB_1__::func_99(uParam4, 13, 1);
							__LIB_1__::func_99(uParam4, 18, 1);
							__LIB_1__::func_99(uParam4, 19, 1);
							__LIB_1__::func_99(uParam4, 20, 1);
							__LIB_1__::func_99(uParam4, 59, 1);
							__LIB_1__::func_99(uParam4, 60, 1);
							__LIB_1__::func_99(uParam4, 61, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 63, 1);
							__LIB_1__::func_99(uParam4, 64, 1);
							__LIB_1__::func_99(uParam4, 65, 1);
							__LIB_1__::func_99(uParam4, 66, 1);
							__LIB_1__::func_99(uParam4, 67, 1);
							__LIB_1__::func_99(uParam4, 68, 1);
							__LIB_1__::func_99(uParam4, 69, 1);
							__LIB_1__::func_99(uParam4, 70, 1);
							__LIB_1__::func_99(uParam4, 71, 1);
							__LIB_1__::func_99(uParam4, 72, 1);
							__LIB_1__::func_99(uParam4, 21, 1);
							__LIB_1__::func_99(uParam4, 22, 1);
							__LIB_1__::func_99(uParam4, 23, 1);
							__LIB_1__::func_99(uParam4, 24, 1);
							__LIB_1__::func_99(uParam4, 25, 1);
							__LIB_1__::func_99(uParam4, 26, 1);
							__LIB_1__::func_99(uParam4, 36, 1);
							__LIB_1__::func_99(uParam4, 46, 1);
							__LIB_1__::func_99(uParam4, 38, 1);
							__LIB_1__::func_99(uParam4, 29, 1);
							__LIB_1__::func_99(uParam4, 28, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 66, 1);
							__LIB_2__::func_182(uParam2, 67, 1);
							__LIB_2__::func_182(uParam2, 68, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 70, 1);
							__LIB_2__::func_182(uParam2, 71, 1);
							__LIB_2__::func_182(uParam2, 72, 1);
							__LIB_2__::func_182(uParam2, 73, 1);
							__LIB_2__::func_182(uParam2, 77, 1);
							__LIB_2__::func_182(uParam2, 78, 1);
							__LIB_2__::func_182(uParam2, 79, 1);
							__LIB_2__::func_182(uParam2, 80, 1);
							__LIB_2__::func_182(uParam2, 81, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							break;
						case 1:
							__LIB_2__::func_182(uParam3, 16, 1);
							__LIB_2__::func_182(uParam3, 48, 1);
							__LIB_2__::func_182(uParam3, 49, 1);
							__LIB_2__::func_182(uParam3, 18, 1);
							__LIB_2__::func_182(uParam3, 50, 1);
							__LIB_2__::func_182(uParam3, 51, 1);
							__LIB_2__::func_182(uParam3, 52, 1);
							__LIB_2__::func_182(uParam3, 53, 1);
							__LIB_2__::func_182(uParam3, 62, 1);
							__LIB_2__::func_182(uParam3, 38, 1);
							__LIB_2__::func_182(uParam3, 47, 1);
							__LIB_2__::func_182(uParam3, 111, 1);
							__LIB_2__::func_182(uParam2, 16, 1);
							__LIB_2__::func_182(uParam2, 47, 1);
							__LIB_2__::func_182(uParam2, 48, 1);
							__LIB_2__::func_182(uParam2, 18, 1);
							__LIB_2__::func_182(uParam2, 49, 1);
							__LIB_2__::func_182(uParam2, 50, 1);
							__LIB_2__::func_182(uParam2, 51, 1);
							__LIB_2__::func_182(uParam2, 52, 1);
							__LIB_2__::func_182(uParam2, 62, 1);
							__LIB_2__::func_182(uParam2, 37, 1);
							__LIB_2__::func_182(uParam2, 46, 1);
							__LIB_2__::func_182(uParam2, 110, 1);
							__LIB_1__::func_99(uParam4, 1, 1);
							__LIB_1__::func_99(uParam4, 2, 1);
							__LIB_1__::func_99(uParam4, 3, 1);
							__LIB_1__::func_99(uParam4, 5, 1);
							__LIB_1__::func_99(uParam4, 6, 1);
							__LIB_1__::func_99(uParam4, 7, 1);
							__LIB_1__::func_99(uParam4, 8, 1);
							__LIB_1__::func_99(uParam4, 9, 1);
							__LIB_1__::func_99(uParam4, 10, 1);
							__LIB_1__::func_99(uParam4, 13, 1);
							__LIB_1__::func_99(uParam4, 18, 1);
							__LIB_1__::func_99(uParam4, 19, 1);
							__LIB_1__::func_99(uParam4, 20, 1);
							__LIB_1__::func_99(uParam4, 59, 1);
							__LIB_1__::func_99(uParam4, 60, 1);
							__LIB_1__::func_99(uParam4, 61, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 63, 1);
							__LIB_1__::func_99(uParam4, 64, 1);
							__LIB_1__::func_99(uParam4, 65, 1);
							__LIB_1__::func_99(uParam4, 66, 1);
							__LIB_1__::func_99(uParam4, 67, 1);
							__LIB_1__::func_99(uParam4, 68, 1);
							__LIB_1__::func_99(uParam4, 69, 1);
							__LIB_1__::func_99(uParam4, 70, 1);
							__LIB_1__::func_99(uParam4, 71, 1);
							__LIB_1__::func_99(uParam4, 72, 1);
							__LIB_1__::func_99(uParam4, 21, 1);
							__LIB_1__::func_99(uParam4, 22, 1);
							__LIB_1__::func_99(uParam4, 23, 1);
							__LIB_1__::func_99(uParam4, 24, 1);
							__LIB_1__::func_99(uParam4, 25, 1);
							__LIB_1__::func_99(uParam4, 26, 1);
							__LIB_1__::func_99(uParam4, 36, 1);
							__LIB_1__::func_99(uParam4, 46, 1);
							__LIB_1__::func_99(uParam4, 38, 1);
							__LIB_1__::func_99(uParam4, 29, 1);
							__LIB_1__::func_99(uParam4, 28, 1);
							__LIB_1__::func_99(uParam4, 43, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 66, 1);
							__LIB_2__::func_182(uParam2, 67, 1);
							__LIB_2__::func_182(uParam2, 68, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 70, 1);
							__LIB_2__::func_182(uParam2, 71, 1);
							__LIB_2__::func_182(uParam2, 72, 1);
							__LIB_2__::func_182(uParam2, 73, 1);
							__LIB_2__::func_182(uParam2, 77, 1);
							__LIB_2__::func_182(uParam2, 78, 1);
							__LIB_2__::func_182(uParam2, 79, 1);
							__LIB_2__::func_182(uParam2, 80, 1);
							__LIB_2__::func_182(uParam2, 81, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							break;
						case 2:
							__LIB_2__::func_182(uParam3, 16, 1);
							__LIB_2__::func_182(uParam3, 48, 1);
							__LIB_2__::func_182(uParam3, 49, 1);
							__LIB_2__::func_182(uParam3, 18, 1);
							__LIB_2__::func_182(uParam3, 50, 1);
							__LIB_2__::func_182(uParam3, 51, 1);
							__LIB_2__::func_182(uParam3, 52, 1);
							__LIB_2__::func_182(uParam3, 53, 1);
							__LIB_2__::func_182(uParam3, 62, 1);
							__LIB_2__::func_182(uParam3, 38, 1);
							__LIB_2__::func_182(uParam3, 47, 1);
							__LIB_2__::func_182(uParam3, 111, 1);
							__LIB_2__::func_182(uParam2, 16, 1);
							__LIB_2__::func_182(uParam2, 47, 1);
							__LIB_2__::func_182(uParam2, 48, 1);
							__LIB_2__::func_182(uParam2, 18, 1);
							__LIB_2__::func_182(uParam2, 49, 1);
							__LIB_2__::func_182(uParam2, 50, 1);
							__LIB_2__::func_182(uParam2, 51, 1);
							__LIB_2__::func_182(uParam2, 52, 1);
							__LIB_2__::func_182(uParam2, 62, 1);
							__LIB_2__::func_182(uParam2, 37, 1);
							__LIB_2__::func_182(uParam2, 46, 1);
							__LIB_2__::func_182(uParam2, 110, 1);
							__LIB_1__::func_99(uParam4, 1, 1);
							__LIB_1__::func_99(uParam4, 2, 1);
							__LIB_1__::func_99(uParam4, 3, 1);
							__LIB_1__::func_99(uParam4, 5, 1);
							__LIB_1__::func_99(uParam4, 6, 1);
							__LIB_1__::func_99(uParam4, 7, 1);
							__LIB_1__::func_99(uParam4, 8, 1);
							__LIB_1__::func_99(uParam4, 9, 1);
							__LIB_1__::func_99(uParam4, 10, 1);
							__LIB_1__::func_99(uParam4, 13, 1);
							__LIB_1__::func_99(uParam4, 18, 1);
							__LIB_1__::func_99(uParam4, 19, 1);
							__LIB_1__::func_99(uParam4, 20, 1);
							__LIB_1__::func_99(uParam4, 59, 1);
							__LIB_1__::func_99(uParam4, 60, 1);
							__LIB_1__::func_99(uParam4, 61, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 63, 1);
							__LIB_1__::func_99(uParam4, 64, 1);
							__LIB_1__::func_99(uParam4, 65, 1);
							__LIB_1__::func_99(uParam4, 66, 1);
							__LIB_1__::func_99(uParam4, 67, 1);
							__LIB_1__::func_99(uParam4, 68, 1);
							__LIB_1__::func_99(uParam4, 69, 1);
							__LIB_1__::func_99(uParam4, 70, 1);
							__LIB_1__::func_99(uParam4, 71, 1);
							__LIB_1__::func_99(uParam4, 72, 1);
							__LIB_1__::func_99(uParam4, 21, 1);
							__LIB_1__::func_99(uParam4, 22, 1);
							__LIB_1__::func_99(uParam4, 23, 1);
							__LIB_1__::func_99(uParam4, 24, 1);
							__LIB_1__::func_99(uParam4, 25, 1);
							__LIB_1__::func_99(uParam4, 26, 1);
							__LIB_1__::func_99(uParam4, 36, 1);
							__LIB_1__::func_99(uParam4, 46, 1);
							__LIB_1__::func_99(uParam4, 38, 1);
							__LIB_1__::func_99(uParam4, 29, 1);
							__LIB_1__::func_99(uParam4, 28, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 66, 1);
							__LIB_2__::func_182(uParam2, 67, 1);
							__LIB_2__::func_182(uParam2, 68, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 70, 1);
							__LIB_2__::func_182(uParam2, 71, 1);
							__LIB_2__::func_182(uParam2, 72, 1);
							__LIB_2__::func_182(uParam2, 73, 1);
							__LIB_2__::func_182(uParam2, 77, 1);
							__LIB_2__::func_182(uParam2, 78, 1);
							__LIB_2__::func_182(uParam2, 79, 1);
							__LIB_2__::func_182(uParam2, 80, 1);
							__LIB_2__::func_182(uParam2, 81, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							break;
					}
					break;
				case 19:
					switch (iParam5)
					{
						case 0:
							__LIB_2__::func_182(uParam3, 3, 1);
							__LIB_2__::func_182(uParam3, 7, 1);
							__LIB_2__::func_182(uParam3, 0, 1);
							__LIB_2__::func_182(uParam3, 12, 1);
							__LIB_2__::func_182(uParam3, 13, 1);
							__LIB_2__::func_182(uParam3, 15, 1);
							__LIB_2__::func_182(uParam3, 16, 1);
							__LIB_2__::func_182(uParam3, 48, 1);
							__LIB_2__::func_182(uParam3, 49, 1);
							__LIB_2__::func_182(uParam3, 17, 1);
							__LIB_2__::func_182(uParam3, 18, 1);
							__LIB_2__::func_182(uParam3, 50, 1);
							__LIB_2__::func_182(uParam3, 51, 1);
							__LIB_2__::func_182(uParam3, 52, 1);
							__LIB_2__::func_182(uParam3, 53, 1);
							__LIB_2__::func_182(uParam3, 62, 1);
							__LIB_2__::func_182(uParam3, 38, 1);
							__LIB_2__::func_182(uParam3, 47, 1);
							__LIB_2__::func_182(uParam3, 111, 1);
							__LIB_2__::func_182(uParam3, 20, 1);
							__LIB_2__::func_182(uParam3, 21, 1);
							__LIB_2__::func_182(uParam3, 25, 1);
							__LIB_2__::func_182(uParam3, 26, 1);
							__LIB_2__::func_182(uParam3, 27, 1);
							__LIB_2__::func_182(uParam3, 30, 1);
							__LIB_2__::func_182(uParam3, 31, 1);
							__LIB_2__::func_182(uParam3, 32, 1);
							__LIB_2__::func_182(uParam3, 33, 1);
							__LIB_2__::func_182(uParam3, 39, 1);
							__LIB_2__::func_182(uParam3, 37, 1);
							__LIB_2__::func_182(uParam2, 0, 1);
							__LIB_2__::func_182(uParam2, 2, 1);
							__LIB_2__::func_182(uParam2, 3, 1);
							__LIB_2__::func_182(uParam2, 4, 1);
							__LIB_2__::func_182(uParam2, 6, 1);
							__LIB_2__::func_182(uParam2, 7, 1);
							__LIB_2__::func_182(uParam2, 8, 1);
							__LIB_2__::func_182(uParam2, 11, 1);
							__LIB_2__::func_182(uParam2, 13, 1);
							__LIB_2__::func_182(uParam2, 15, 1);
							__LIB_2__::func_182(uParam2, 16, 1);
							__LIB_2__::func_182(uParam2, 47, 1);
							__LIB_2__::func_182(uParam2, 48, 1);
							__LIB_2__::func_182(uParam2, 17, 1);
							__LIB_2__::func_182(uParam2, 18, 1);
							__LIB_2__::func_182(uParam2, 49, 1);
							__LIB_2__::func_182(uParam2, 50, 1);
							__LIB_2__::func_182(uParam2, 51, 1);
							__LIB_2__::func_182(uParam2, 52, 1);
							__LIB_2__::func_182(uParam2, 62, 1);
							__LIB_2__::func_182(uParam2, 37, 1);
							__LIB_2__::func_182(uParam2, 46, 1);
							__LIB_2__::func_182(uParam2, 110, 1);
							__LIB_2__::func_182(uParam2, 19, 1);
							__LIB_2__::func_182(uParam2, 20, 1);
							__LIB_2__::func_182(uParam2, 21, 1);
							__LIB_2__::func_182(uParam2, 22, 1);
							__LIB_2__::func_182(uParam2, 54, 1);
							__LIB_2__::func_182(uParam2, 24, 1);
							__LIB_2__::func_182(uParam2, 26, 1);
							__LIB_2__::func_182(uParam2, 27, 1);
							__LIB_2__::func_182(uParam2, 28, 1);
							__LIB_2__::func_182(uParam2, 30, 1);
							__LIB_2__::func_182(uParam2, 31, 1);
							__LIB_2__::func_182(uParam2, 32, 1);
							__LIB_2__::func_182(uParam2, 38, 1);
							__LIB_2__::func_182(uParam2, 36, 1);
							__LIB_1__::func_99(uParam4, 1, 1);
							__LIB_1__::func_99(uParam4, 2, 1);
							__LIB_1__::func_99(uParam4, 3, 1);
							__LIB_1__::func_99(uParam4, 4, 1);
							__LIB_1__::func_99(uParam4, 14, 1);
							__LIB_1__::func_99(uParam4, 15, 1);
							__LIB_1__::func_99(uParam4, 16, 1);
							__LIB_1__::func_99(uParam4, 8, 1);
							__LIB_1__::func_99(uParam4, 9, 1);
							__LIB_1__::func_99(uParam4, 10, 1);
							__LIB_1__::func_99(uParam4, 13, 1);
							__LIB_1__::func_99(uParam4, 17, 1);
							__LIB_1__::func_99(uParam4, 18, 1);
							__LIB_1__::func_99(uParam4, 19, 1);
							__LIB_1__::func_99(uParam4, 20, 1);
							__LIB_1__::func_99(uParam4, 59, 1);
							__LIB_1__::func_99(uParam4, 60, 1);
							__LIB_1__::func_99(uParam4, 61, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 63, 1);
							__LIB_1__::func_99(uParam4, 64, 1);
							__LIB_1__::func_99(uParam4, 65, 1);
							__LIB_1__::func_99(uParam4, 66, 1);
							__LIB_1__::func_99(uParam4, 67, 1);
							__LIB_1__::func_99(uParam4, 68, 1);
							__LIB_1__::func_99(uParam4, 69, 1);
							__LIB_1__::func_99(uParam4, 70, 1);
							__LIB_1__::func_99(uParam4, 71, 1);
							__LIB_1__::func_99(uParam4, 72, 1);
							__LIB_1__::func_99(uParam4, 21, 1);
							__LIB_1__::func_99(uParam4, 22, 1);
							__LIB_1__::func_99(uParam4, 23, 1);
							__LIB_1__::func_99(uParam4, 24, 1);
							__LIB_1__::func_99(uParam4, 25, 1);
							__LIB_1__::func_99(uParam4, 26, 1);
							__LIB_1__::func_99(uParam4, 36, 1);
							__LIB_1__::func_99(uParam4, 46, 1);
							__LIB_1__::func_99(uParam4, 38, 1);
							__LIB_1__::func_99(uParam4, 29, 1);
							__LIB_1__::func_99(uParam4, 28, 1);
							__LIB_1__::func_99(uParam4, 31, 1);
							__LIB_1__::func_99(uParam4, 33, 1);
							__LIB_1__::func_99(uParam4, 34, 1);
							__LIB_1__::func_99(uParam4, 43, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_2__::func_182(uParam3, 65, 1);
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 75, 1);
							__LIB_2__::func_182(uParam3, 76, 1);
							__LIB_2__::func_182(uParam3, 77, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 64, 1);
							__LIB_2__::func_182(uParam2, 65, 1);
							__LIB_2__::func_182(uParam2, 66, 1);
							__LIB_2__::func_182(uParam2, 67, 1);
							__LIB_2__::func_182(uParam2, 68, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 70, 1);
							__LIB_2__::func_182(uParam2, 71, 1);
							__LIB_2__::func_182(uParam2, 72, 1);
							__LIB_2__::func_182(uParam2, 73, 1);
							__LIB_2__::func_182(uParam2, 74, 1);
							__LIB_2__::func_182(uParam2, 75, 1);
							__LIB_2__::func_182(uParam2, 77, 1);
							__LIB_2__::func_182(uParam2, 78, 1);
							__LIB_2__::func_182(uParam2, 79, 1);
							__LIB_2__::func_182(uParam2, 80, 1);
							__LIB_2__::func_182(uParam2, 81, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							break;
						case 1:
							__LIB_2__::func_182(uParam3, 3, 1);
							__LIB_2__::func_182(uParam3, 7, 1);
							__LIB_2__::func_182(uParam3, 0, 1);
							__LIB_2__::func_182(uParam3, 12, 1);
							__LIB_2__::func_182(uParam3, 13, 1);
							__LIB_2__::func_182(uParam3, 15, 1);
							__LIB_2__::func_182(uParam3, 16, 1);
							__LIB_2__::func_182(uParam3, 48, 1);
							__LIB_2__::func_182(uParam3, 49, 1);
							__LIB_2__::func_182(uParam3, 17, 1);
							__LIB_2__::func_182(uParam3, 18, 1);
							__LIB_2__::func_182(uParam3, 50, 1);
							__LIB_2__::func_182(uParam3, 51, 1);
							__LIB_2__::func_182(uParam3, 52, 1);
							__LIB_2__::func_182(uParam3, 53, 1);
							__LIB_2__::func_182(uParam3, 62, 1);
							__LIB_2__::func_182(uParam3, 38, 1);
							__LIB_2__::func_182(uParam3, 47, 1);
							__LIB_2__::func_182(uParam3, 111, 1);
							__LIB_2__::func_182(uParam3, 20, 1);
							__LIB_2__::func_182(uParam3, 21, 1);
							__LIB_2__::func_182(uParam3, 25, 1);
							__LIB_2__::func_182(uParam3, 26, 1);
							__LIB_2__::func_182(uParam3, 27, 1);
							__LIB_2__::func_182(uParam3, 30, 1);
							__LIB_2__::func_182(uParam3, 31, 1);
							__LIB_2__::func_182(uParam3, 32, 1);
							__LIB_2__::func_182(uParam3, 33, 1);
							__LIB_2__::func_182(uParam3, 39, 1);
							__LIB_2__::func_182(uParam2, 0, 1);
							__LIB_2__::func_182(uParam2, 2, 1);
							__LIB_2__::func_182(uParam2, 3, 1);
							__LIB_2__::func_182(uParam2, 4, 1);
							__LIB_2__::func_182(uParam2, 6, 1);
							__LIB_2__::func_182(uParam2, 7, 1);
							__LIB_2__::func_182(uParam2, 11, 1);
							__LIB_2__::func_182(uParam2, 13, 1);
							__LIB_2__::func_182(uParam2, 15, 1);
							__LIB_2__::func_182(uParam2, 16, 1);
							__LIB_2__::func_182(uParam2, 47, 1);
							__LIB_2__::func_182(uParam2, 48, 1);
							__LIB_2__::func_182(uParam2, 17, 1);
							__LIB_2__::func_182(uParam2, 18, 1);
							__LIB_2__::func_182(uParam2, 49, 1);
							__LIB_2__::func_182(uParam2, 50, 1);
							__LIB_2__::func_182(uParam2, 51, 1);
							__LIB_2__::func_182(uParam2, 52, 1);
							__LIB_2__::func_182(uParam2, 62, 1);
							__LIB_2__::func_182(uParam2, 37, 1);
							__LIB_2__::func_182(uParam2, 46, 1);
							__LIB_2__::func_182(uParam2, 110, 1);
							__LIB_2__::func_182(uParam2, 19, 1);
							__LIB_2__::func_182(uParam2, 20, 1);
							__LIB_2__::func_182(uParam2, 21, 1);
							__LIB_2__::func_182(uParam2, 22, 1);
							__LIB_2__::func_182(uParam2, 54, 1);
							__LIB_2__::func_182(uParam2, 24, 1);
							__LIB_2__::func_182(uParam2, 38, 1);
							__LIB_1__::func_99(uParam4, 1, 1);
							__LIB_1__::func_99(uParam4, 2, 1);
							__LIB_1__::func_99(uParam4, 3, 1);
							__LIB_1__::func_99(uParam4, 4, 1);
							__LIB_1__::func_99(uParam4, 14, 1);
							__LIB_1__::func_99(uParam4, 15, 1);
							__LIB_1__::func_99(uParam4, 16, 1);
							__LIB_1__::func_99(uParam4, 6, 1);
							__LIB_1__::func_99(uParam4, 7, 1);
							__LIB_1__::func_99(uParam4, 8, 1);
							__LIB_1__::func_99(uParam4, 9, 1);
							__LIB_1__::func_99(uParam4, 10, 1);
							__LIB_1__::func_99(uParam4, 13, 1);
							__LIB_1__::func_99(uParam4, 17, 1);
							__LIB_1__::func_99(uParam4, 18, 1);
							__LIB_1__::func_99(uParam4, 19, 1);
							__LIB_1__::func_99(uParam4, 20, 1);
							__LIB_1__::func_99(uParam4, 59, 1);
							__LIB_1__::func_99(uParam4, 60, 1);
							__LIB_1__::func_99(uParam4, 61, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 63, 1);
							__LIB_1__::func_99(uParam4, 64, 1);
							__LIB_1__::func_99(uParam4, 65, 1);
							__LIB_1__::func_99(uParam4, 66, 1);
							__LIB_1__::func_99(uParam4, 67, 1);
							__LIB_1__::func_99(uParam4, 68, 1);
							__LIB_1__::func_99(uParam4, 69, 1);
							__LIB_1__::func_99(uParam4, 70, 1);
							__LIB_1__::func_99(uParam4, 71, 1);
							__LIB_1__::func_99(uParam4, 72, 1);
							__LIB_1__::func_99(uParam4, 21, 1);
							__LIB_1__::func_99(uParam4, 22, 1);
							__LIB_1__::func_99(uParam4, 23, 1);
							__LIB_1__::func_99(uParam4, 24, 1);
							__LIB_1__::func_99(uParam4, 25, 1);
							__LIB_1__::func_99(uParam4, 26, 1);
							__LIB_1__::func_99(uParam4, 36, 1);
							__LIB_1__::func_99(uParam4, 46, 1);
							__LIB_1__::func_99(uParam4, 38, 1);
							__LIB_1__::func_99(uParam4, 29, 1);
							__LIB_1__::func_99(uParam4, 28, 1);
							__LIB_1__::func_99(uParam4, 31, 1);
							__LIB_1__::func_99(uParam4, 33, 1);
							__LIB_1__::func_99(uParam4, 34, 1);
							__LIB_1__::func_99(uParam4, 43, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_2__::func_182(uParam3, 65, 1);
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 75, 1);
							__LIB_2__::func_182(uParam3, 76, 1);
							__LIB_2__::func_182(uParam3, 77, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 64, 1);
							__LIB_2__::func_182(uParam2, 65, 1);
							__LIB_2__::func_182(uParam2, 66, 1);
							__LIB_2__::func_182(uParam2, 67, 1);
							__LIB_2__::func_182(uParam2, 68, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 70, 1);
							__LIB_2__::func_182(uParam2, 71, 1);
							__LIB_2__::func_182(uParam2, 72, 1);
							__LIB_2__::func_182(uParam2, 73, 1);
							__LIB_2__::func_182(uParam2, 74, 1);
							__LIB_2__::func_182(uParam2, 75, 1);
							__LIB_2__::func_182(uParam2, 77, 1);
							__LIB_2__::func_182(uParam2, 78, 1);
							__LIB_2__::func_182(uParam2, 79, 1);
							__LIB_2__::func_182(uParam2, 80, 1);
							__LIB_2__::func_182(uParam2, 81, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							break;
						case 2:
							__LIB_2__::func_182(uParam3, 1, 1);
							__LIB_2__::func_182(uParam3, 3, 1);
							__LIB_2__::func_182(uParam3, 4, 1);
							__LIB_2__::func_182(uParam3, 5, 1);
							__LIB_2__::func_182(uParam3, 7, 1);
							__LIB_2__::func_182(uParam3, 10, 1);
							__LIB_2__::func_182(uParam3, 54, 1);
							__LIB_2__::func_182(uParam3, 55, 1);
							__LIB_2__::func_182(uParam3, 56, 1);
							__LIB_2__::func_182(uParam3, 0, 1);
							__LIB_2__::func_182(uParam3, 12, 1);
							__LIB_2__::func_182(uParam3, 13, 1);
							__LIB_2__::func_182(uParam3, 15, 1);
							__LIB_2__::func_182(uParam3, 16, 1);
							__LIB_2__::func_182(uParam3, 48, 1);
							__LIB_2__::func_182(uParam3, 49, 1);
							__LIB_2__::func_182(uParam3, 17, 1);
							__LIB_2__::func_182(uParam3, 18, 1);
							__LIB_2__::func_182(uParam3, 50, 1);
							__LIB_2__::func_182(uParam3, 51, 1);
							__LIB_2__::func_182(uParam3, 52, 1);
							__LIB_2__::func_182(uParam3, 53, 1);
							__LIB_2__::func_182(uParam3, 62, 1);
							__LIB_2__::func_182(uParam3, 38, 1);
							__LIB_2__::func_182(uParam3, 47, 1);
							__LIB_2__::func_182(uParam3, 111, 1);
							__LIB_2__::func_182(uParam3, 20, 1);
							__LIB_2__::func_182(uParam3, 21, 1);
							__LIB_2__::func_182(uParam3, 25, 1);
							__LIB_2__::func_182(uParam3, 26, 1);
							__LIB_2__::func_182(uParam3, 27, 1);
							__LIB_2__::func_182(uParam3, 30, 1);
							__LIB_2__::func_182(uParam3, 31, 1);
							__LIB_2__::func_182(uParam3, 32, 1);
							__LIB_2__::func_182(uParam3, 33, 1);
							__LIB_2__::func_182(uParam3, 37, 1);
							__LIB_2__::func_182(uParam3, 39, 1);
							__LIB_2__::func_182(uParam2, 0, 1);
							__LIB_2__::func_182(uParam2, 1, 1);
							__LIB_2__::func_182(uParam2, 2, 1);
							__LIB_2__::func_182(uParam2, 3, 1);
							__LIB_2__::func_182(uParam2, 4, 1);
							__LIB_2__::func_182(uParam2, 5, 1);
							__LIB_2__::func_182(uParam2, 6, 1);
							__LIB_2__::func_182(uParam2, 7, 1);
							__LIB_2__::func_182(uParam2, 8, 1);
							__LIB_2__::func_182(uParam2, 9, 1);
							__LIB_2__::func_182(uParam2, 10, 1);
							__LIB_2__::func_182(uParam2, 53, 1);
							__LIB_2__::func_182(uParam2, 56, 1);
							__LIB_2__::func_182(uParam2, 55, 1);
							__LIB_2__::func_182(uParam2, 11, 1);
							__LIB_2__::func_182(uParam2, 12, 1);
							__LIB_2__::func_182(uParam2, 13, 1);
							__LIB_2__::func_182(uParam2, 14, 1);
							__LIB_2__::func_182(uParam2, 15, 1);
							__LIB_2__::func_182(uParam2, 16, 1);
							__LIB_2__::func_182(uParam2, 47, 1);
							__LIB_2__::func_182(uParam2, 48, 1);
							__LIB_2__::func_182(uParam2, 17, 1);
							__LIB_2__::func_182(uParam2, 18, 1);
							__LIB_2__::func_182(uParam2, 49, 1);
							__LIB_2__::func_182(uParam2, 50, 1);
							__LIB_2__::func_182(uParam2, 51, 1);
							__LIB_2__::func_182(uParam2, 52, 1);
							__LIB_2__::func_182(uParam2, 62, 1);
							__LIB_2__::func_182(uParam2, 37, 1);
							__LIB_2__::func_182(uParam2, 46, 1);
							__LIB_2__::func_182(uParam2, 110, 1);
							__LIB_2__::func_182(uParam2, 19, 1);
							__LIB_2__::func_182(uParam2, 20, 1);
							__LIB_2__::func_182(uParam2, 21, 1);
							__LIB_2__::func_182(uParam2, 22, 1);
							__LIB_2__::func_182(uParam2, 54, 1);
							__LIB_2__::func_182(uParam2, 23, 1);
							__LIB_2__::func_182(uParam2, 24, 1);
							__LIB_2__::func_182(uParam2, 26, 1);
							__LIB_2__::func_182(uParam2, 27, 1);
							__LIB_2__::func_182(uParam2, 28, 1);
							__LIB_2__::func_182(uParam2, 29, 1);
							__LIB_2__::func_182(uParam2, 30, 1);
							__LIB_2__::func_182(uParam2, 31, 1);
							__LIB_2__::func_182(uParam2, 32, 1);
							__LIB_2__::func_182(uParam2, 33, 1);
							__LIB_2__::func_182(uParam2, 36, 1);
							__LIB_2__::func_182(uParam2, 38, 1);
							__LIB_2__::func_182(uParam2, 55, 1);
							__LIB_1__::func_99(uParam4, 1, 1);
							__LIB_1__::func_99(uParam4, 2, 1);
							__LIB_1__::func_99(uParam4, 3, 1);
							__LIB_1__::func_99(uParam4, 3, 1);
							__LIB_1__::func_99(uParam4, 4, 1);
							__LIB_1__::func_99(uParam4, 14, 1);
							__LIB_1__::func_99(uParam4, 15, 1);
							__LIB_1__::func_99(uParam4, 16, 1);
							__LIB_1__::func_99(uParam4, 6, 1);
							__LIB_1__::func_99(uParam4, 8, 1);
							__LIB_1__::func_99(uParam4, 9, 1);
							__LIB_1__::func_99(uParam4, 10, 1);
							__LIB_1__::func_99(uParam4, 12, 1);
							__LIB_1__::func_99(uParam4, 13, 1);
							__LIB_1__::func_99(uParam4, 17, 1);
							__LIB_1__::func_99(uParam4, 18, 1);
							__LIB_1__::func_99(uParam4, 19, 1);
							__LIB_1__::func_99(uParam4, 20, 1);
							__LIB_1__::func_99(uParam4, 59, 1);
							__LIB_1__::func_99(uParam4, 60, 1);
							__LIB_1__::func_99(uParam4, 61, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 62, 1);
							__LIB_1__::func_99(uParam4, 63, 1);
							__LIB_1__::func_99(uParam4, 64, 1);
							__LIB_1__::func_99(uParam4, 65, 1);
							__LIB_1__::func_99(uParam4, 66, 1);
							__LIB_1__::func_99(uParam4, 67, 1);
							__LIB_1__::func_99(uParam4, 68, 1);
							__LIB_1__::func_99(uParam4, 69, 1);
							__LIB_1__::func_99(uParam4, 70, 1);
							__LIB_1__::func_99(uParam4, 71, 1);
							__LIB_1__::func_99(uParam4, 72, 1);
							__LIB_1__::func_99(uParam4, 21, 1);
							__LIB_1__::func_99(uParam4, 22, 1);
							__LIB_1__::func_99(uParam4, 23, 1);
							__LIB_1__::func_99(uParam4, 24, 1);
							__LIB_1__::func_99(uParam4, 25, 1);
							__LIB_1__::func_99(uParam4, 26, 1);
							__LIB_1__::func_99(uParam4, 36, 1);
							__LIB_1__::func_99(uParam4, 46, 1);
							__LIB_1__::func_99(uParam4, 38, 1);
							__LIB_1__::func_99(uParam4, 29, 1);
							__LIB_1__::func_99(uParam4, 28, 1);
							__LIB_1__::func_99(uParam4, 31, 1);
							__LIB_1__::func_99(uParam4, 33, 1);
							__LIB_1__::func_99(uParam4, 34, 1);
							__LIB_1__::func_99(uParam4, 32, 1);
							__LIB_1__::func_99(uParam4, 92, 1);
							__LIB_1__::func_99(uParam4, 93, 1);
							__LIB_1__::func_99(uParam4, 94, 1);
							__LIB_1__::func_99(uParam4, 96, 1);
							__LIB_1__::func_99(uParam4, 97, 1);
							__LIB_1__::func_99(uParam4, 98, 1);
							__LIB_1__::func_99(uParam4, 100, 1);
							__LIB_1__::func_99(uParam4, 103, 1);
							__LIB_1__::func_99(uParam4, 104, 1);
							__LIB_1__::func_99(uParam4, 105, 1);
							__LIB_1__::func_99(uParam4, 106, 1);
							__LIB_1__::func_99(uParam4, 107, 1);
							__LIB_1__::func_99(uParam4, 108, 1);
							__LIB_2__::func_182(uParam3, 65, 1);
							__LIB_2__::func_182(uParam3, 67, 1);
							__LIB_2__::func_182(uParam3, 68, 1);
							__LIB_2__::func_182(uParam3, 69, 1);
							__LIB_2__::func_182(uParam3, 70, 1);
							__LIB_2__::func_182(uParam3, 71, 1);
							__LIB_2__::func_182(uParam3, 72, 1);
							__LIB_2__::func_182(uParam3, 73, 1);
							__LIB_2__::func_182(uParam3, 74, 1);
							__LIB_2__::func_182(uParam3, 75, 1);
							__LIB_2__::func_182(uParam3, 76, 1);
							__LIB_2__::func_182(uParam3, 77, 1);
							__LIB_2__::func_182(uParam3, 78, 1);
							__LIB_2__::func_182(uParam3, 79, 1);
							__LIB_2__::func_182(uParam3, 80, 1);
							__LIB_2__::func_182(uParam3, 81, 1);
							__LIB_2__::func_182(uParam3, 82, 1);
							__LIB_2__::func_182(uParam3, 91, 1);
							__LIB_2__::func_182(uParam3, 92, 1);
							__LIB_2__::func_182(uParam2, 64, 1);
							__LIB_2__::func_182(uParam2, 65, 1);
							__LIB_2__::func_182(uParam2, 66, 1);
							__LIB_2__::func_182(uParam2, 67, 1);
							__LIB_2__::func_182(uParam2, 68, 1);
							__LIB_2__::func_182(uParam2, 69, 1);
							__LIB_2__::func_182(uParam2, 70, 1);
							__LIB_2__::func_182(uParam2, 71, 1);
							__LIB_2__::func_182(uParam2, 72, 1);
							__LIB_2__::func_182(uParam2, 73, 1);
							__LIB_2__::func_182(uParam2, 74, 1);
							__LIB_2__::func_182(uParam2, 75, 1);
							__LIB_2__::func_182(uParam2, 77, 1);
							__LIB_2__::func_182(uParam2, 78, 1);
							__LIB_2__::func_182(uParam2, 79, 1);
							__LIB_2__::func_182(uParam2, 80, 1);
							__LIB_2__::func_182(uParam2, 81, 1);
							__LIB_2__::func_182(uParam2, 90, 1);
							__LIB_2__::func_182(uParam2, 91, 1);
							break;
					}
					break;
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						case 1:
							__LIB_2__::func_182(uParam2, 2, 1);
							__LIB_2__::func_182(uParam2, 20, 1);
							break;
						case 2:
							break;
					}
					break;
				case 0:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				case 9:
				case 11:
				case 13:
				case 15:
				case 19:
				case 23:
				case 26:
				case 30:
				case 34:
				case 20:
				case 22:
					func_42(2, 59, uParam2, uParam3, uParam4, 0, 0);
					break;
				case 32:
					func_42(2, 60, uParam2, uParam3, uParam4, 0, 0);
					break;
				case 17:
				case 27:
				case 31:
					break;
			}
			break;
	}
}

void func_51(float fParam0)//Position - 0xB979
{
	__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/, true), "CELL_BORDER" /* GXT: Border */);
}

void func_52(float fParam0)//Position - 0xB999
{
	if (Global_1941594)
	{
		fParam0 = -1f;
	}
	__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/, true), "CELL_FILTER" /* GXT: Filter */);
}

void func_53()//Position - 0xB9C3
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || __LIB_0__::func_52())
	{
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
	}
	else
	{
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
	}
	__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/, true), "CELL_GRID" /* GXT: Grid */);
	__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
	func_52(5f);
	func_51(6f);
	func_54(7f);
	func_31(8f);
	if (bLocal_29)
	{
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
	}
	if (!__LIB_0__::isGlobal_43052EqualsValue(14))
	{
		if ((Global_78319 == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_62())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL" /* GXT: Action: ~a~ */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_4542214));
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_54(float fParam0)//Position - 0xBAD0
{
	__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/, true), "CELL_ACCYC" /* GXT: Cycle Action */);
}

void func_55()//Position - 0xBAF0
{
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true), "CELL_284" /* GXT: Zoom */);
	__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
	__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
	__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_280" /* GXT: Take Photo */);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_40);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_56()//Position - 0xBBC9
{
	if (iLocal_106 == 1)
	{
		func_57();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/, true), func_67());
		if (iLocal_82)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || __LIB_0__::func_52())
					{
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
					else
					{
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
					if (func_173())
					{
						func_52(3f);
						func_51(4f);
					}
				}
				else if ((Global_78319 == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_62())
				{
					func_53();
				}
				else
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || __LIB_0__::func_52())
					{
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
					else
					{
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
					}
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/, true), "CELL_GRID" /* GXT: Grid */);
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					if (func_173())
					{
						func_52(5f);
						func_51(6f);
						if (func_32(1))
						{
							func_31(7f);
							if (bLocal_29)
							{
								__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
							}
						}
						else if (bLocal_29)
						{
							__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 7f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/, true), "CELL_GRID" /* GXT: Grid */);
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true), "CELL_284" /* GXT: Zoom */);
					if (func_173())
					{
						func_52(6f);
						func_51(7f);
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
					}
				}
				else
				{
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					if (func_173())
					{
						func_52(3f);
						func_51(4f);
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
					}
				}
			}
			else if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!__LIB_0__::func_93())
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || __LIB_0__::func_52())
					{
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_1NP_XB" /* GXT: Self Portrait (Press) */);
					}
					else
					{
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_1NP_XB" /* GXT: Self Portrait (Press) */);
					}
				}
				__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 183 /*INPUT_CELLPHONE_CAMERA_GRID*/, true), "CELL_GRID" /* GXT: Grid */);
				__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
				__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true), "CELL_284" /* GXT: Zoom */);
				if (func_173())
				{
					if (!__LIB_0__::func_93())
					{
						func_52(7f);
						func_51(8f);
						if (bLocal_30)
						{
							__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 182 /*INPUT_CELLPHONE_CAMERA_FOCUS_LOCK*/, true), "CELL_FOCUS" /* GXT: Focus Lock (Hold) */);
						}
						__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
					}
				}
				else
				{
					if (!__LIB_0__::func_93())
					{
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || __LIB_0__::func_52())
						{
							__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_1NP_XB" /* GXT: Self Portrait (Press) */);
						}
						else
						{
							__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_1NP_XB" /* GXT: Self Portrait (Press) */);
						}
					}
					__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
					if (func_173())
					{
						if (!__LIB_0__::func_93())
						{
							func_52(4f);
							func_51(5f);
							__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 185 /*INPUT_CELLPHONE_CAMERA_DOF*/, true), "CELL_DEPTH" /* GXT: Depth Of Field */);
						}
					}
				}
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_40);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_57()//Position - 0xC081
{
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true), "CELL_284" /* GXT: Zoom */);
	__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_285" /* GXT: Move */);
	__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/, true), func_67());
	__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true), "CELL_281" /* GXT: Exit */);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_40);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_58()//Position - 0xC15A
{
	if (iLocal_82)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_36, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_37);
	}
}

void func_59(bool bParam0)//Position - 0xC178
{
	if (iLocal_106 == 1)
	{
		return;
	}
	if (Global_4718592.f_163006 == 1)
	{
	}
	else if (Global_4718592.f_163007 == 1)
	{
	}
	else
	{
		MOBILE::CELL_CAM_ACTIVATE_SELFIE_MODE(bParam0);
	}
}

void func_60()//Position - 0xC1B1
{
	if (iLocal_28 == 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sLocal_19[Global_4539953], "phone_cam12DUMMY"))
		{
			MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
			MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
		}
		else
		{
			MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(true);
			MOBILE::SET_MOBILE_PHONE_DOF_STATE(true);
		}
	}
}

void func_61()//Position - 0xC1E9
{
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_173())
	{
		if (!Global_1941594)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER("phone_cam");
		}
	}
}

int func_62()//Position - 0xC228
{
	if (__LIB_0__::isGlobal_43052EqualsValue(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if ((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[2 /*29*/])
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_65()//Position - 0xC2C4
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || __LIB_0__::func_52())
	{
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
	}
	else
	{
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true), "CELL_RT_RSTICK" /* GXT: Tilt Head */);
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 1, true), "CELL_RT_LSTICK" /* GXT: Rotate Head */);
	}
	else
	{
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true), "CELL_RT_RSTICK" /* GXT: Tilt Head */);
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 0, true), "CELL_RT_LSTICK" /* GXT: Rotate Head */);
	}
}

void func_66()//Position - 0xC373
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || __LIB_0__::func_52())
	{
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
	}
	else
	{
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 184 /*INPUT_CELLPHONE_CAMERA_SELFIE*/, true), "CELL_SP_2NP_XB" /* GXT: Normal Mode (Press) */);
	}
	__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 1, true), "CELL_LT_RSTICK" /* GXT: Pan Camera */);
	if (__LIB_0__::isGlobal_43052EqualsValue(14))
	{
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true), "CELL_LT_LSTICK" /* GXT: Rotate Camera */);
	}
	else
	{
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true), "CELL_LT_LSTICKZ" /* GXT: Zoom Camera */);
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true), "CELL_LT_LSTICK" /* GXT: Rotate Camera */);
	}
}

char* func_67()//Position - 0xC425
{
	if (func_76())
	{
		return "FHHUD_SENDLES" /* GXT: Send to Lester */;
	}
	if (func_74())
	{
		return "CSH_PHONEC" /* GXT: Send to Pavel */;
	}
	if (func_73(PLAYER::PLAYER_ID(), 275) && Global_1964888)
	{
		return "RE_SS_SNDOMG" /* GXT: Send to Omega */;
	}
	switch (__LIB_13__::func_551(PLAYER::PLAYER_ID()))
	{
		case 14:
		case 3:
		case 7:
		case 8:
		case 12:
		case 2:
		case 15:
			return "TR_SESS_PHTO" /* GXT: Send to Sessanta */;
		default:
	}
	switch (__LIB_13__::func_553(PLAYER::PLAYER_ID()))
	{
		case 3:
			return "FXR_FRAN_PHTO" /* GXT: Send to Franklin */;
		case 2:
			return "FXR_IMAN_PHTO" /* GXT: Send to Imani */;
		default:
	}
	return "CELL_287" /* GXT: Send Photo(s) */;
}

int func_73(int iParam0, int iParam1)//Position - 0xC58D
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < Global_1888817)
	{
		if (Global_1888817[iVar1] == iParam1)
		{
			if (Global_1888862[iVar0 /*120*/].f_77.f_1[iVar1 /*3*/] == 2)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_74()//Position - 0xC5DE
{
	switch (__LIB_2__::func_813(PLAYER::PLAYER_ID()))
	{
		case 16:
			return 1;
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			return 1;
		default:
	}
	return 0;
}

int func_76()//Position - 0xC63E
{
	switch (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33)
	{
		case 233:
			switch (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_182)
			{
				case 9:
					return 1;
				default:
			}
			break;
		case 158:
			switch (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_182)
			{
				case 3:
				case 1:
				case 41:
					return 1;
				default:
			}
			break;
	}
	if (Global_1973075)
	{
		return 1;
	}
	return 0;
}

void func_79()//Position - 0xC70D
{
	if (Global_78319)
	{
		switch (Global_22722)
		{
			case 0:
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					__LIB_0__::func_151("CELL_CAM_SELFIE_0_KM" /* GXT: Hold ~INPUT_CELLPHONE_EXTRA_OPTION~ and use ~INPUTGROUP_LOOK~ or ~INPUT_MOVE_LR~ to adjust your shot in Self Portrait mode. */, -1);
				}
				else
				{
					__LIB_0__::func_151("CELL_CAM_SELFIE_0" /* GXT: Hold ~INPUT_SCRIPT_LT~ and use ~INPUTGROUP_LOOK~ or ~INPUTGROUP_MOVE~ to adjust your shot in Self Portrait mode. */, -1);
				}
				Global_22722++;
				break;
			case 1:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
					{
						__LIB_0__::func_151("CELL_CAM_SELFIE_1_KM" /* GXT: Hold ~INPUT_SPRINT~ and use ~INPUTGROUP_LOOK~ or ~INPUT_MOVE_LR~ to control head movement in Self Portrait mode. */, -1);
					}
					else
					{
						__LIB_0__::func_151("CELL_CAM_SELFIE_1" /* GXT: Hold ~INPUT_SCRIPT_RT~ and use ~INPUTGROUP_LOOK~ or ~INPUTGROUP_MOVE~ to control head movement in Self Portrait mode. Press ~INPUT_CELLPHONE_CAMERA_EXPRESSION~ to alter facial expression. */, -1);
					}
					Global_22722++;
				}
				break;
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_22721)
		{
			case 0:
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					__LIB_0__::func_151("CELL_CAM_SELFIE_0_KM" /* GXT: Hold ~INPUT_CELLPHONE_EXTRA_OPTION~ and use ~INPUTGROUP_LOOK~ or ~INPUT_MOVE_LR~ to adjust your shot in Self Portrait mode. */, -1);
				}
				else
				{
					__LIB_0__::func_151("CELL_CAM_SELFIE_0" /* GXT: Hold ~INPUT_SCRIPT_LT~ and use ~INPUTGROUP_LOOK~ or ~INPUTGROUP_MOVE~ to adjust your shot in Self Portrait mode. */, -1);
				}
				Global_22721++;
				break;
			case 1:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
					{
						__LIB_0__::func_151("CELL_CAM_SELFIE_1_KM" /* GXT: Hold ~INPUT_SPRINT~ and use ~INPUTGROUP_LOOK~ or ~INPUT_MOVE_LR~ to control head movement in Self Portrait mode. */, -1);
					}
					else
					{
						__LIB_0__::func_151("CELL_CAM_SELFIE_1" /* GXT: Hold ~INPUT_SCRIPT_RT~ and use ~INPUTGROUP_LOOK~ or ~INPUTGROUP_MOVE~ to control head movement in Self Portrait mode. Press ~INPUT_CELLPHONE_CAMERA_EXPRESSION~ to alter facial expression. */, -1);
					}
					Global_22721++;
				}
				break;
			case 2:
				break;
			}
	}
}

void func_80()//Position - 0xC809
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar10) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar9))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
		iVar0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/)) * 127;
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			}
		}
		else if (MISC::ABSI(iVar2) > 28 || MISC::ABSI(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
		}
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			fVar7 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 290 /*INPUT_SCALED_LOOK_LR*/);
			fVar8 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 291 /*INPUT_SCALED_LOOK_UD*/);
			if (PAD::IS_MOUSE_LOOK_INVERTED())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_114);
		}
		func_83(fVar5);
		func_82(fVar6);
		func_81(fVar4);
	}
	else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar9))
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
	}
}

void func_81(float fParam0)//Position - 0xC988
{
	fLocal_111 = (fLocal_111 + fParam0);
	if (fLocal_111 > 1f)
	{
		fLocal_111 = 1f;
	}
	else if (fLocal_111 < -1f)
	{
		fLocal_111 = -1f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_YAW_OFFSET(fLocal_111);
}

void func_82(float fParam0)//Position - 0xC9B4
{
	fLocal_112 = (fLocal_112 + fParam0);
	if (fLocal_112 > 1f)
	{
		fLocal_112 = 1f;
	}
	else if (fLocal_112 < -1f)
	{
		fLocal_112 = -1f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_ROLL_OFFSET(fLocal_112);
}

void func_83(float fParam0)//Position - 0xC9E0
{
	fLocal_113 = (fLocal_113 + fParam0);
	if (fLocal_113 > 1f)
	{
		fLocal_113 = 1f;
	}
	else if (fLocal_113 < -1f)
	{
		fLocal_113 = -1f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_PITCH_OFFSET(fLocal_113);
}

void func_84()//Position - 0xCA0C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar10))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 178 /*INPUT_CELLPHONE_OPTION*/) && !__LIB_0__::func_93())
			{
				MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(0.5f);
				MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(0.85f);
				MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(0.5f);
				MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(-0.25f);
				fLocal_107 = 0.5f;
				fLocal_108 = 0.85f;
				fLocal_109 = 0.5f;
				fLocal_110 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar10) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar11))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 178 /*INPUT_CELLPHONE_OPTION*/) && !__LIB_0__::func_93())
		{
			MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(0.5f);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(0.85f);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(0.5f);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(-0.25f);
			fLocal_107 = 0.5f;
			fLocal_108 = 0.85f;
			fLocal_109 = 0.5f;
			fLocal_110 = -0.25f;
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
		iVar0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/)) * 127;
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/)) * 127;
			fVar8 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 290 /*INPUT_SCALED_LOOK_LR*/);
			fVar9 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 291 /*INPUT_SCALED_LOOK_UD*/);
			if (PAD::IS_MOUSE_LOOK_INVERTED())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (MISC::ABSI(iVar2) > 15 || MISC::ABSI(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		func_88(fVar6);
		func_87(fVar7);
		func_86(fVar4);
		if (!__LIB_0__::isGlobal_43052EqualsValue(14))
		{
			func_85(fVar5);
		}
	}
	else if (!PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar11))
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
	}
	if (!PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar10) && !PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar11))
	{
		iVar0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 290 /*INPUT_SCALED_LOOK_LR*/)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 291 /*INPUT_SCALED_LOOK_UD*/)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 294 /*INPUT_SCALED_LOOK_LEFT_ONLY*/)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 295 /*INPUT_SCALED_LOOK_RIGHT_ONLY*/)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 292 /*INPUT_SCALED_LOOK_UP_ONLY*/)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 293 /*INPUT_SCALED_LOOK_DOWN_ONLY*/)) * 127;
		if (MISC::ABSI(iVar2) > 28 || MISC::ABSI(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		if (!__LIB_0__::isGlobal_43052EqualsValue(14))
		{
			func_85(fVar5);
		}
	}
}

void func_85(float fParam0)//Position - 0xCD4B
{
	fLocal_109 = (fLocal_109 + fParam0);
	if (fLocal_109 > 1f)
	{
		fLocal_109 = 1f;
	}
	else if (fLocal_109 < 0f)
	{
		fLocal_109 = 0f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(fLocal_109);
}

void func_86(float fParam0)//Position - 0xCD77
{
	fLocal_110 = (fLocal_110 + fParam0);
	if (fLocal_110 > 1f)
	{
		fLocal_110 = 1f;
	}
	else if (fLocal_110 < -1f)
	{
		fLocal_110 = -1f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(fLocal_110);
}

void func_87(float fParam0)//Position - 0xCDA3
{
	fLocal_108 = (fLocal_108 + fParam0);
	if (fLocal_108 > 1.5f)
	{
		fLocal_108 = 1.5f;
	}
	else if (fLocal_108 < 0.5f)
	{
		fLocal_108 = 0.5f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(fLocal_108);
}

void func_88(float fParam0)//Position - 0xCDDF
{
	fLocal_107 = (fLocal_107 + fParam0);
	if (fLocal_107 > 2f)
	{
		fLocal_107 = 2f;
	}
	else if (fLocal_107 < -1.7f)
	{
		fLocal_107 = -1.7f;
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(fLocal_107);
}

void func_89()//Position - 0xCE13
{
	if (Global_78579 || Global_78580)
	{
		return;
	}
	if (iLocal_75 == 0)
	{
		if (!iLocal_100)
		{
			if (Global_4718592.f_163006 == 0 && Global_4718592.f_163007 == 0)
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_92, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_78 == 0)
	{
		if (Global_20208)
		{
			if (Global_20464)
			{
				if (iLocal_100 == 0)
				{
					if (Global_20266.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_91(255, 255, 255, 255);
			__LIB_13__::func_84(0.059f, 0.644f, "CELL_284" /* GXT: Zoom */, 0);
			func_91(255, 255, 255, 255);
			__LIB_13__::func_84(0.165f, 0.644f, "CELL_285" /* GXT: Move */, 0);
			func_91(255, 255, 255, 255);
			__LIB_13__::func_84(0.275f, 0.75f, "CELL_280" /* GXT: Take Photo */, 0);
			func_91(255, 255, 255, 255);
			__LIB_13__::func_84(0.275f, 0.83f, "CELL_281" /* GXT: Exit */, 0);
		}
	}
	else if (Global_20208)
	{
	}
	else
	{
		func_91(255, 255, 255, 255);
		__LIB_13__::func_84(0.275f, 0.75f, func_67(), 0);
		func_91(255, 255, 255, 255);
		__LIB_13__::func_84(0.275f, 0.79f, "CELL_286" /* GXT: Continue */, 0);
		func_91(255, 255, 255, 255);
		__LIB_13__::func_84(0.275f, 0.83f, "CELL_281" /* GXT: Exit */, 0);
	}
}

void func_91(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xCF7A
{
	HUD::SET_TEXT_SCALE(0.4f, 0.4f);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
	HUD::SET_TEXT_PROPORTIONAL(true);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
}

void func_92()//Position - 0xCFB9
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_38, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_39);
}

void func_93()//Position - 0xCFD2
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 3 /*INPUT_LOOK_UP_ONLY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 4 /*INPUT_LOOK_DOWN_ONLY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 5 /*INPUT_LOOK_LEFT_ONLY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 6 /*INPUT_LOOK_RIGHT_ONLY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 56 /*INPUT_DROP_WEAPON*/, true);
}

void func_94()//Position - 0xD02C
{
	Local_44 = { Global_20219[Global_20211 /*3*/] };
	if (Global_20208)
	{
		if (__LIB_13__::func_98())
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Local_46);
			Local_44 = { Local_46 };
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		__LIB_13__::func_120(1);
		if (iLocal_72)
		{
			Local_42.f_0 = (Local_42.f_0 + 12f);
		}
		if (Local_42.f_0 > Local_44.f_0 || Local_42.f_0 == Local_44.f_0)
		{
			Local_42.f_0 = Local_44.f_0;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			Local_42.f_1 = (Local_42.f_1 - 6f);
		}
		if (BitTest(Global_8138, 4))
		{
			if (Local_42.f_1 < (Local_44.f_1 + 15f) || Local_42.f_1 == (Local_44.f_1 + 15f))
			{
				Local_42.f_1 = (Local_44.f_1 + 15f);
				iLocal_73 = 0;
			}
		}
		else if (Local_42.f_1 < (Local_44.f_1 + 10f) || Local_42.f_1 == (Local_44.f_1 + 10f))
		{
			Local_42.f_1 = (Local_44.f_1 + 10f);
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			Local_42.f_2 = (Local_42.f_2 - 10f);
		}
		if (Local_42.f_2 < Local_44.f_2 || Local_42.f_2 == Local_44.f_2)
		{
			Local_42.f_2 = Local_44.f_2;
			iLocal_74 = 0;
		}
		if (__LIB_13__::func_98() == 0)
		{
			if (BitTest(Global_8138, 4))
			{
				Local_44.f_1 = (Local_44.f_1 + 15f);
			}
			else
			{
				Local_44.f_1 = (Local_44.f_1 + 10f);
			}
			Local_44.f_0 = (Local_44.f_0 - 14f);
		}
		else
		{
			Local_44 = { Global_20212[Global_20211 /*3*/] };
		}
		Local_42 = { Local_44 };
		iLocal_74 = 0;
		iLocal_73 = 0;
		iLocal_72 = 0;
		MOBILE::SET_MOBILE_PHONE_POSITION(Local_42);
		if ((iLocal_72 == 0 && iLocal_73 == 0) && iLocal_74 == 0)
		{
			iLocal_75 = 0;
			Local_43 = { -90.3f, 0f, 90f };
			MOBILE::SET_MOBILE_PHONE_ROTATION(Local_43, 0);
			if (!BitTest(Global_8136, 22))
			{
				if (BitTest(Global_8136, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_96();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_95();
				}
				iLocal_51 = 2;
			}
		}
	}
}

void func_95()//Position - 0xD21F
{
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (BitTest(Global_8137, 28))
	{
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_286" /* GXT: Continue */);
	}
	else
	{
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 178 /*INPUT_CELLPHONE_OPTION*/, true), "CELL_277" /* GXT: Delete */);
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_GALSAVE" /* GXT: Save to Gallery */);
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_40);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_96()//Position - 0xD2EE
{
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (BitTest(Global_8137, 28))
	{
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/, true), func_67());
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_286" /* GXT: Continue */);
	}
	else
	{
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/, true), func_67());
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 178 /*INPUT_CELLPHONE_OPTION*/, true), "CELL_277" /* GXT: Delete */);
		__LIB_13__::func_308(iLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true), "CELL_GALSAVE" /* GXT: Save to Gallery */);
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_40);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_98()//Position - 0xD634
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
	PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20236);
	Local_43 = { Global_20226 };
	Local_44 = { Global_20219[Global_20211 /*3*/] };
	if (__LIB_13__::func_98())
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_45, 0);
		Local_43 = { Local_45 };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Local_46);
		Local_44 = { Local_46 };
		iLocal_69 = 0;
		iLocal_70 = 0;
		iLocal_71 = 0;
		iLocal_72 = 0;
		iLocal_73 = 0;
		iLocal_74 = 0;
	}
	if (Global_20208)
	{
		__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_59(0);
		iLocal_82 = 0;
		if (BitTest(Global_8136, 30))
		{
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			func_99();
		}
		if (iLocal_72)
		{
			if (BitTest(Global_8136, 9))
			{
				Local_42.f_0 = (Local_42.f_0 + 2f);
			}
			else
			{
				Local_42.f_0 = (Local_42.f_0 + 12f);
			}
		}
		if (Local_42.f_0 > Local_44.f_0 || Local_42.f_0 == Local_44.f_0)
		{
			Local_42.f_0 = Local_44.f_0;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			Local_42.f_1 = (Local_42.f_1 - 6f);
		}
		if (Local_42.f_1 < Local_44.f_1 || Local_42.f_1 == Local_44.f_1)
		{
			Local_42.f_1 = Local_44.f_1;
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			Local_42.f_2 = (Local_42.f_2 - 10f);
		}
		if (Local_42.f_2 < Local_44.f_2 || Local_42.f_2 == Local_44.f_2)
		{
			Local_42.f_2 = Local_44.f_2;
			iLocal_74 = 0;
		}
		if (iLocal_74 == 0)
		{
			if (iLocal_69)
			{
				Local_41.f_0 = (Local_41.f_0 + 1f);
			}
			if (Local_41.f_0 > Local_43.f_0 || Local_41.f_0 == Local_43.f_0)
			{
				Local_41.f_0 = Local_43.f_0;
				iLocal_69 = 0;
			}
			if (iLocal_70)
			{
				Local_41.f_1 = (Local_41.f_1 - 2f);
			}
			if (Local_41.f_1 < Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
			{
				Local_41.f_1 = Local_43.f_1;
				iLocal_70 = 0;
			}
			if (iLocal_71)
			{
				Local_41.f_2 = (Local_41.f_2 - 14f);
			}
			if (Local_41.f_2 < Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
			{
				Local_41.f_2 = Local_43.f_2;
				iLocal_71 = 0;
			}
		}
		if (iLocal_77)
		{
			Local_41 = { Local_43 };
			Local_42 = { Local_44 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			if (__LIB_13__::func_98() == 0)
			{
				MOBILE::SET_MOBILE_PHONE_ROTATION(Local_41, 0);
				MOBILE::SET_MOBILE_PHONE_POSITION(Local_42);
			}
			__LIB_0__::func_203(0, 1);
		}
		else if (__LIB_13__::func_98() == 0)
		{
			MOBILE::SET_MOBILE_PHONE_ROTATION(Local_41, 0);
			MOBILE::SET_MOBILE_PHONE_POSITION(Local_42);
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_99();
		}
	}
	else
	{
		if (iLocal_69)
		{
			Local_41.f_0 = (Local_41.f_0 + 1f);
		}
		if (Local_41.f_0 > Local_43.f_0 || Local_41.f_0 == Local_43.f_0)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			Local_41.f_1 = (Local_41.f_1 - 2f);
		}
		if (Local_41.f_1 < Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			Local_41.f_2 = (Local_41.f_2 - 7f);
		}
		if (Local_41.f_2 < Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
		{
			iLocal_71 = 0;
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_99();
		}
	}
	MOBILE::SET_MOBILE_PHONE_ROTATION(Local_41, 0);
}

void func_99()//Position - 0xD938
{
	__LIB_13__::func_120(0);
	if (__LIB_13__::func_98() == 0)
	{
		if (BitTest(Global_8136, 30))
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20212[Global_20211 /*3*/]);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20219[Global_20211 /*3*/]);
		}
		Local_41 = { Local_43 };
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_41, 0);
	}
	Global_22638 = 0;
	func_121(0, 0);
	func_125(0);
	iLocal_66 = 0;
	func_116(1);
	Global_20253 = 1;
	Global_22641 = 0;
	if (Global_20266.f_1 > 4)
	{
		Global_20266.f_1 = 6;
		Global_20244 = 1;
		__LIB_13__::func_424();
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_91))
	{
		__LIB_16__::func_287(iLocal_91, "SHUTDOWN_MOVIE");
	}
	SYSTEM::WAIT(0);
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_92);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_91);
	if (Global_20466 == 1)
	{
		MISC::SET_BIT(&Global_8136, 17);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 17);
	}
	MISC::CLEAR_BIT(&Global_8136, 18);
	MISC::CLEAR_BIT(&Global_8136, 21);
	HUD::CLEAR_FLOATING_HELP(0, true);
	MISC::CLEAR_BIT(&Global_8138, 3);
	MISC::CLEAR_BIT(&Global_4541229, 3);
	MISC::SET_GAME_PAUSED(false);
	PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
	HUD::RESET_HUD_COMPONENT_VALUES(15);
	Global_22642 = 1;
	AUDIO::STOP_SOUND(iLocal_63);
	AUDIO::RELEASE_SOUND_ID(iLocal_63);
	HUD::BUSYSPINNER_OFF();
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
	}
	func_116(1);
	MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(false);
	MOBILE::SET_MOBILE_PHONE_DOF_STATE(false);
	MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(1f);
	if (Global_4539954 > 0 && Global_4539954 < 13)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_20[Global_4539954]);
	}
	__LIB_0__::func_203(0, 1);
	if (func_171(0, 1, iLocal_31, 1))
	{
		iLocal_31 = 0;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_109()//Position - 0xEBA1
{
	switch (iLocal_51)
	{
		case 1:
			HUD::CLEAR_FLOATING_HELP(0, true);
			if (BitTest(Global_8136, 28))
			{
				StringCopy(&cLocal_96, "CELL_296", 16);
				func_56();
			}
			else
			{
				StringCopy(&cLocal_96, "CELL_295", 16);
				func_30();
			}
			break;
		case 2:
			if (!BitTest(Global_8136, 22))
			{
				HUD::CLEAR_FLOATING_HELP(0, true);
				if (BitTest(Global_8136, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_96();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_95();
				}
				iLocal_51 = 2;
			}
			break;
		default:
			break;
	}
}

void func_116(int iParam0)//Position - 0xEDD8
{
	if ((Global_4718592.f_163006 == 0 && Global_4718592.f_163007 == 0) && !Global_1941594)
	{
		if (__LIB_2__::func_573(PLAYER::PLAYER_ID()) && iParam0)
		{
			Global_1973148 = 1;
		}
		else
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
}

void func_121(bool bParam0, bool bParam1)//Position - 0xF35F
{
	if (Global_4718592.f_163006 == 1)
	{
	}
	else if (Global_4718592.f_163007 == 1)
	{
	}
	else
	{
		MOBILE::CELL_CAM_ACTIVATE(bParam0, bParam1);
	}
}

void func_124()//Position - 0xF3B9
{
	if (Global_20208)
	{
		Local_43 = { -90.3f, 0f, 90f };
		Local_44 = { 1.5f, 0f, -17f };
		if (__LIB_13__::func_98())
		{
			MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_45, 0);
			Local_43 = { Local_45 };
			MOBILE::GET_MOBILE_PHONE_POSITION(&Local_46);
			Local_44 = { Local_46 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		if (iLocal_71 == 0)
		{
			if (iLocal_72)
			{
				Local_42.f_0 = (Local_42.f_0 - 14f);
			}
			if (Local_42.f_0 < Local_44.f_0 || Local_42.f_0 == Local_44.f_0)
			{
				iLocal_72 = 0;
			}
			if (iLocal_73)
			{
				Local_42.f_1 = (Local_42.f_1 + 7f);
			}
			if (Local_42.f_1 > Local_44.f_1 || Local_42.f_1 == Local_44.f_1)
			{
				iLocal_73 = 0;
			}
			if (iLocal_74)
			{
				Local_42.f_2 = (Local_42.f_2 + 12f);
			}
			if (Local_42.f_2 > Local_44.f_2 || Local_42.f_2 == Local_44.f_2)
			{
				iLocal_74 = 0;
			}
		}
		if (iLocal_69)
		{
			Local_41.f_0 = (Local_41.f_0 - 1f);
		}
		if (Local_41.f_0 < Local_43.f_0 || Local_41.f_0 == Local_43.f_0)
		{
			Local_41.f_0 = Local_43.f_0;
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			Local_41.f_1 = (Local_41.f_1 - 0.5f);
		}
		if (Local_41.f_1 < Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
		{
			Local_41.f_1 = Local_43.f_1;
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			Local_41.f_2 = (Local_41.f_2 + 11f);
		}
		if (Local_41.f_2 > Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
		{
			Local_41.f_2 = Local_43.f_2;
			iLocal_71 = 0;
		}
		if (__LIB_13__::func_98() == 0)
		{
			MOBILE::SET_MOBILE_PHONE_ROTATION(Local_41, 0);
			MOBILE::SET_MOBILE_PHONE_POSITION(Local_42);
		}
	}
	else
	{
		Local_43 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_69)
		{
			Local_41.f_0 = (Local_41.f_0 - 1f);
		}
		if (Local_41.f_0 < Local_43.f_0 || Local_41.f_0 == Local_43.f_0)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			Local_41.f_1 = (Local_41.f_1 + 2f);
		}
		if (Local_41.f_1 > Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			Local_41.f_2 = (Local_41.f_2 + 7f);
		}
		if (Local_41.f_2 > Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
		{
			iLocal_71 = 0;
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_41, 0);
	}
	if (Global_20208)
	{
		if (((((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0) && iLocal_72 == 0) && iLocal_73 == 0) && iLocal_74 == 0)
		{
			if (__LIB_13__::func_98())
			{
			}
			else
			{
				Local_41 = { Local_43 };
				MOBILE::SET_MOBILE_PHONE_ROTATION(Local_41, 0);
				Local_42 = { Local_44 };
				MOBILE::SET_MOBILE_PHONE_POSITION(Local_42);
			}
			if (iLocal_54 == 0)
			{
				Global_22639 = 0;
				func_121(1, 1);
				iLocal_66 = 1;
				func_125(1);
				func_61();
				func_126();
				func_59(0);
				SYSTEM::SETTIMERA(0);
				iLocal_93 = 1;
				iLocal_94 = 1;
				func_143();
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!BitTest(Global_4541229, 2))
				{
					__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
				func_166();
			}
		}
	}
	else if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
	{
		Local_41 = { Local_43 };
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_41, 0);
		Global_22639 = 0;
	}
}

void func_125(bool bParam0)//Position - 0xF72E
{
	if (func_173())
	{
		if (bParam0)
		{
			if (!GRAPHICS::PHONEPHOTOEDITOR_IS_ACTIVE())
			{
				GRAPHICS::PHONEPHOTOEDITOR_TOGGLE(true);
				if (Global_4539954 > 0 && Global_4539954 < 99)
				{
					GRAPHICS::PHONEPHOTOEDITOR_SET_FRAME_TXD(sLocal_20[Global_4539954], false);
					MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(0.25f);
				}
			}
		}
		else if (GRAPHICS::PHONEPHOTOEDITOR_IS_ACTIVE())
		{
			GRAPHICS::PHONEPHOTOEDITOR_TOGGLE(false);
		}
	}
}

void func_126()//Position - 0xF78C
{
	if (Global_4539953 > 0 && Global_4539953 < 99)
	{
		if (!Global_1941594)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER(sLocal_19[Global_4539953]);
		}
	}
}

void func_127()//Position - 0xF7BD
{
	if (Global_20208)
	{
		iLocal_76 = 0;
		func_61();
		__LIB_0__::func_203(1, 1);
		func_121(1, 1);
		iLocal_66 = 1;
		Global_22642 = 1;
	}
}

void func_128()//Position - 0xF7E5
{
	if (Global_4718592.f_163006 == 1 && __LIB_1__::func_758())
	{
		return;
	}
	if (iLocal_78 == 0)
	{
		if (BitTest(Global_8136, 28))
		{
			StringCopy(&cLocal_96, "CELL_296", 16);
			func_56();
		}
		else
		{
			StringCopy(&cLocal_96, "CELL_295", 16);
			func_30();
		}
		if (MISC::ARE_STRINGS_EQUAL(&cLocal_96, "DUMMYCOMPARISON"))
		{
			fLocal_49 = fLocal_50;
			fLocal_47 = fLocal_48;
			fLocal_50 = fLocal_49;
			fLocal_48 = fLocal_47;
		}
		iLocal_51 = 1;
	}
}

void func_140()//Position - 0xF9B7
{
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 1;
}

void func_141()//Position - 0xF9D4
{
	func_142();
}

void func_142()//Position - 0xF9E0
{
	if (iLocal_101)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_101 = 0;
		}
	}
	if (iLocal_101 == 0)
	{
	}
}

void func_143()//Position - 0xF9FF
{
	if (Global_20266.f_1 > 3)
	{
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_91, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_148()//Position - 0xFB93
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 56 /*INPUT_DROP_WEAPON*/, true);
	if (iLocal_100 == 0)
	{
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20239);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20236);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 278 /*INPUT_VEH_MOVE_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 279 /*INPUT_VEH_MOVE_RIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 280 /*INPUT_VEH_MOVE_UP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 281 /*INPUT_VEH_MOVE_DOWN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 282 /*INPUT_VEH_GUN_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 282 /*INPUT_VEH_GUN_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 284 /*INPUT_VEH_GUN_UP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 285 /*INPUT_VEH_GUN_DOWN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 77 /*INPUT_VEH_HOTWIRE_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 78 /*INPUT_VEH_HOTWIRE_RIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 286 /*INPUT_VEH_LOOK_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 287 /*INPUT_VEH_LOOK_RIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 79 /*INPUT_VEH_LOOK_BEHIND*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 61 /*INPUT_VEH_MOVE_UP_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 62 /*INPUT_VEH_MOVE_DOWN_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 63 /*INPUT_VEH_MOVE_LEFT_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 64 /*INPUT_VEH_MOVE_RIGHT_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 87 /*INPUT_VEH_FLY_THROTTLE_UP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 88 /*INPUT_VEH_FLY_THROTTLE_DOWN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 90 /*INPUT_VEH_FLY_YAW_RIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 107 /*INPUT_VEH_FLY_ROLL_LR*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 108 /*INPUT_VEH_FLY_ROLL_LEFT_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 109 /*INPUT_VEH_FLY_ROLL_RIGHT_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 110 /*INPUT_VEH_FLY_PITCH_UD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 111 /*INPUT_VEH_FLY_PITCH_UP_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 112 /*INPUT_VEH_FLY_PITCH_DOWN_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 113 /*INPUT_VEH_FLY_UNDERCARRIAGE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 91 /*INPUT_VEH_PASSENGER_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 102 /*INPUT_VEH_JUMP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 136 /*INPUT_VEH_PUSHBIKE_PEDAL*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 137 /*INPUT_VEH_PUSHBIKE_SPRINT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 138 /*INPUT_VEH_PUSHBIKE_FRONT_BRAKE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 139 /*INPUT_VEH_PUSHBIKE_REAR_BRAKE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 102 /*INPUT_VEH_JUMP*/, true);
	}
}

void func_158()//Position - 0xFEEC
{
	if (iLocal_106 == 1)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	}
	else
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
}

void func_161()//Position - 0xFF50
{
	if (func_162())
	{
		GRAPHICS::CLEAR_STATUS_OF_SORTED_LIST_OPERATION();
		if (GRAPHICS::QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS(0))
		{
			iLocal_54 = 1;
			iLocal_62 = 0;
		}
		else
		{
			Global_22642 = 1;
			Global_20266.f_1 = 3;
			HUD::BUSYSPINNER_OFF();
		}
	}
	else
	{
		iLocal_60 = 0;
		iLocal_61 = 0;
		if (iLocal_55 == 1)
		{
			if (iLocal_78 == 0)
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_91))
				{
					if (func_173())
					{
						if (Global_4539954 == 0)
						{
							if (!BitTest(Global_4541229, 2))
							{
								__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!BitTest(Global_4541229, 2))
						{
							__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_91))
			{
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
			}
			iLocal_55 = 0;
		}
		iLocal_62 = 0;
		HUD::BUSYSPINNER_OFF();
	}
}

int func_162()//Position - 0x100AB
{
	if (Global_4718592.f_163006 == 1)
	{
		if (Global_78319)
		{
			return 0;
		}
	}
	if (Global_4718592.f_163007 == 1)
	{
		if (Global_78319)
		{
			return 0;
		}
	}
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_PS3_VERSION())
	{
		if (BitTest(Global_8137, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_166()//Position - 0x101B2
{
	if (Global_20266.f_1 > 3)
	{
		Global_20266.f_1 = 8;
	}
	Global_22641 = 0;
	iLocal_78 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Local_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (Global_20208)
	{
		while (SYSTEM::TIMERA() < iLocal_88)
		{
			SYSTEM::WAIT(0);
			func_143();
			func_93();
			RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
		}
		__LIB_16__::func_287(iLocal_91, "OPEN_SHUTTER");
		func_158();
		func_128();
		iLocal_80 = 1;
		SYSTEM::SETTIMERB(0);
	}
	else
	{
		func_121(1, 1);
		func_125(1);
		func_61();
		func_126();
		func_59(0);
		iLocal_66 = 1;
	}
}

int func_171(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x10307
{
	int iVar0;
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && bParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_172()//Position - 0x1033A
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(fLocal_107);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(fLocal_108);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(fLocal_109);
		}
		else
		{
			MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(fLocal_107);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(fLocal_108);
			MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(fLocal_109);
		}
	}
	MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(fLocal_110);
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_YAW_OFFSET(fLocal_111);
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_ROLL_OFFSET(fLocal_112);
	MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_PITCH_OFFSET(fLocal_113);
	func_58();
}

int func_173()//Position - 0x103A7
{
	if (iLocal_23 == 0)
	{
		iLocal_23 = 1;
	}
	return 1;
}

