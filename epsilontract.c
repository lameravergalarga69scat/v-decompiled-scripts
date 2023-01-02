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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	int* iLocal_45 = NULL;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	var uLocal_48 = 0;
	struct<11> Local_49[10];
	char* sLocal_50[10] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_37 = 1;
	iLocal_38 = 1;
	iLocal_40 = joaat("prop_time_capsule_01");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
	{
		func_48();
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("epsilontract")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	__LIB_0__::func_694(9);
	while (true)
	{
		SYSTEM::WAIT(0);
		switch (iLocal_39)
		{
			case 0:
				func_46();
				break;
			case 1:
				func_1();
				break;
			case 2:
				func_48();
				break;
		}
	}
}

void func_1()//Position - 0xCE
{
	int iVar0;
	int iVar1;
	if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && !__LIB_0__::isGlobal_43052EqualsValue(14)) && !CAM::IS_SCREEN_FADED_OUT())
	{
		if (iLocal_41 < 10)
		{
			if (iLocal_41 == 0)
			{
				if (!__LIB_0__::func_67(36) && (MISC::GET_GAME_TIMER() - iLocal_42) > iLocal_43)
				{
					func_42(0, 60, sLocal_50[0], 1, 0, 0, 0, 0, 1);
					__LIB_0__::func_592(36);
					iLocal_42 = -1;
				}
			}
			else if (iLocal_41 < 10)
			{
				if (!iLocal_42 == -1)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_42) > 15000)
					{
						func_42(0, 60, sLocal_50[iLocal_41], 1, 0, 0, 0, 0, 1);
						iLocal_42 = -1;
					}
				}
			}
			if (Local_49[iLocal_41 /*11*/].f_10)
			{
				if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(Local_49[iLocal_41 /*11*/].f_1) || __LIB_0__::func_744(Local_49[iLocal_41 /*11*/].f_1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					}
					__LIB_0__::func_733(&(Local_49[iLocal_41 /*11*/].f_1));
					Local_49[iLocal_41 /*11*/].f_10 = 0;
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 200, 250);
					iVar0 = (805 + iLocal_41);
					__LIB_0__::func_186(iVar0, 1, -1);
					STATS::STAT_INCREMENT(joaat("NUM_HIDDEN_PACKAGES_2"), 1f);
					bLocal_46 = true;
					if (iLocal_41 < 10)
					{
						iLocal_41++;
						iLocal_42 = MISC::GET_GAME_TIMER();
						__LIB_0__::func_734(1, 0);
						__LIB_0__::func_210();
					}
				}
				else if (OBJECT::DOES_PICKUP_EXIST(Local_49[iLocal_41 /*11*/].f_1))
				{
					func_33(Local_49[iLocal_41 /*11*/].f_3);
					func_32(&(Local_49[iLocal_41 /*11*/].f_1), &(Local_49[iLocal_41 /*11*/].f_10));
				}
			}
			else
			{
				while (func_31(4, iVar1) && iVar1 < 10)
				{
					iVar1++;
				}
				if (iVar1 == iLocal_41)
				{
					__LIB_17__::func_44(&(Local_49[iLocal_41 /*11*/]), iLocal_40, joaat("PICKUP_CUSTOM_SCRIPT"), 0, 0, 2);
				}
			}
		}
		else if (!bLocal_47 && !bLocal_46)
		{
			func_11();
		}
		func_2(&bLocal_46, &bLocal_47, &uLocal_48, 4, &uLocal_44, &iLocal_45, "TRACT_TITLE" /* GXT: Tract Collected~s~ */, "TRACT_COLLECT" /* GXT: ~1~/10 Epsilon tracts collected. */);
	}
}

void func_2(bool bParam0, bool bParam1, var uParam2, int iParam3, var uParam4, int* iParam5, char* sParam6, char* sParam7)//Position - 0x29E
{
	int iVar0;
	__LIB_0__::func_732(0);
	if (*bParam0)
	{
		switch (*uParam4)
		{
			case 0:
				*iParam5 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
				{
					iVar0 = AUDIO::GET_SOUND_ID();
					if (iParam3 == 6)
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", true);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar0, "COLLECTED", "HUD_AWARDS", true);
					}
					*uParam4++;
				}
				break;
			case 1:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam6);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
				HUD::ADD_TEXT_COMPONENT_INTEGER(__LIB_12__::func_895(iParam3));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				*uParam2 = MISC::GET_GAME_TIMER();
				*uParam4++;
				break;
			case 2:
				if ((MISC::GET_GAME_TIMER() - *uParam2) > 7000)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam5, "SHARD_ANIM_OUT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					*uParam4++;
				}
				else if (!__LIB_0__::func_691())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
					{
						__LIB_0__::func_732(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			case 3:
				if ((MISC::GET_GAME_TIMER() - *uParam2) > 7500)
				{
					*uParam4++;
				}
				else if (!__LIB_0__::func_691())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
					{
						__LIB_0__::func_732(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			case 4:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam5);
				}
				__LIB_0__::func_732(0);
				*bParam1 = 0;
				*bParam0 = 0;
				*uParam4 = 0;
				break;
			}
	}
}

void func_11()//Position - 0x604
{
	__LIB_0__::func_681(95, 1);
	__LIB_17__::func_20(27, 84, 0);
	__LIB_0__::func_693(9);
	iLocal_39 = 2;
}

bool func_31(int iParam0, int iParam1)//Position - 0x1B6C
{
	int iVar0;
	int iVar1;
	if (iParam0 == 1)
	{
		iVar1 = 705;
	}
	else if (iParam0 == 0)
	{
		iVar1 = 755;
	}
	else if (iParam0 == 3)
	{
		iVar1 = 815;
	}
	else if (iParam0 == 4)
	{
		iVar1 = 805;
	}
	else if (iParam0 == 5)
	{
		iVar1 = 845;
	}
	iVar0 = (iVar1 + iParam1);
	return __LIB_0__::func_137(iVar0, -1);
}

void func_32(var uParam0, var uParam1)//Position - 0x1BC5
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), OBJECT::GET_PICKUP_COORDS(*uParam0), true) >= 60f)
		{
			__LIB_0__::func_733(uParam0);
			*uParam0 = 0;
			*uParam1 = 0;
		}
	}
}

void func_33(struct<3> Param0)//Position - 0x1C05
{
	if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Param0, 7f, 1))
	{
		TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Param0, 100, 2048, 1);
	}
}

int func_42(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1DDE
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 21;
			break;
		case 1:
			iVar0 = 22;
			break;
		case 2:
			iVar0 = 23;
			break;
		default:
			return 0;
			break;
	}
	StringCopy(&(Global_113386.f_14141[iVar0 /*104*/]), sParam2, 64);
	Global_113386.f_14141[iVar0 /*104*/].f_17 = iParam1;
	if (iParam3 == 0)
	{
		return 0;
	}
	else
	{
		Global_113386.f_14141[iVar0 /*104*/].f_24 = iParam3;
	}
	Global_113386.f_14141[iVar0 /*104*/].f_25 = iParam4;
	Global_113386.f_14141[iVar0 /*104*/].f_26 = iParam5;
	Global_113386.f_14141[iVar0 /*104*/].f_29 = iParam6;
	Global_113386.f_14141[iVar0 /*104*/].f_30 = iParam8;
	Global_113386.f_14141[iVar0 /*104*/].f_31 = iParam7;
	Global_113386.f_14141[iVar0 /*104*/].f_28 = 0;
	return 1;
}

void func_46()//Position - 0x1F1E
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (Global_113386.f_18574.f_388)
	{
		sLocal_50[0] = "TRACT_HINT1B" /* GXT: Kifflom.  The ingratitude and self-centeredness of your actions is unforgiveable in my eyes but Kraff is not without mercy.  To have a chance of redeeming yourself, you must write the tract, which has already been written... WE WORSHIP KRAFF WHERE THE EARTH REACHES OUT TO THE 9Th PARADIGM. */;
		iLocal_43 = 300000;
	}
	else
	{
		sLocal_50[0] = "TRACT_HINT1" /* GXT: Kifflom, brother. You are now truly one of us and are ready to write the tract, which has already been written...WE WORSHIP KRAFF WHERE THE EARTH REACHES OUT TO THE 9Th PARADIGM. */;
		iLocal_43 = 16000;
	}
	Local_49[0 /*11*/].f_3 = { 501.9415f, 5604.429f, 796.9146f };
	Local_49[1 /*11*/].f_3 = { 2658.18f, -1361.14f, -21.63f };
	sLocal_50[1] = "TRACT_HINT2" /* GXT: Where the first of the fleet succumbed to the waves, there the message is seeded. */;
	Local_49[2 /*11*/].f_3 = { 24.7139f, 7644.334f, 18.0792f };
	sLocal_50[2] = "TRACT_HINT3" /* GXT: When they sail from the North, they will find this offering. */;
	Local_49[3 /*11*/].f_3 = { -263.55f, 4729.6f, 137.37f };
	sLocal_50[3] = "TRACT_HINT4" /* GXT: In the core of the mountain, where the blast is not felt, there you shall find it. */;
	Local_49[4 /*11*/].f_3 = { -771.98f, -685.22f, 28.86f };
	sLocal_50[4] = "TRACT_HINT5" /* GXT: In the rubble of the old religion, will be the basis for the new. */;
	Local_49[5 /*11*/].f_3 = { -1605.03f, 5256.55f, 1.08f };
	sLocal_50[5] = "TRACT_HINT6" /* GXT: Where the first fleet sailed, the new fleet will find its map. */;
	Local_49[6 /*11*/].f_3 = { -1804.5464f, 403.9298f, 112.1966f };
	sLocal_50[6] = "TRACT_HINT7" /* GXT: What dwelling is worthy of Kraff? He is humble, yet we exalt him. */;
	Local_49[7 /*11*/].f_3 = { 484.2701f, 5617.175f, 787.4708f };
	sLocal_50[7] = "TRACT_HINT8" /* GXT: We are not dinosaurs, nor plants, but a tree in the jet stream may hold Kraff's true word. */;
	Local_49[8 /*11*/].f_3 = { -75.1004f, -819.0673f, 325.3656f };
	sLocal_50[8] = "TRACT_HINT9" /* GXT: The tallest obelisk of glass and steel holds no comparison to the word of Kraff. */;
	Local_49[9 /*11*/].f_3 = { -1725.34f, -189.95f, 57.52f };
	sLocal_50[9] = "TRACT_HINT10" /* GXT: Where they discard their earthly prisons, there you may find the germ of a higher civilization. */;
	iLocal_42 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = (805 + iVar0);
		if (__LIB_0__::func_137(iVar1, -1))
		{
			iLocal_41++;
		}
		iVar0++;
	}
	iLocal_39 = 1;
}

void func_48()//Position - 0x2126
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		__LIB_0__::func_733(&(Local_49[iVar0 /*11*/].f_1));
		iVar0++;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

