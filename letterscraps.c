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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<8> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<11> Local_50[50];
	int iLocal_51 = 0;
	char* sLocal_52 = NULL;
	int iLocal_53 = 0;
	int* iLocal_54 = NULL;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	char* sLocal_57[4] = { NULL, NULL, NULL, NULL };
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	bLocal_40 = true;
	bLocal_41 = true;
	iLocal_51 = 4;
	sLocal_52 = "id1_11_tunnel6_int";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
	{
		func_73();
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("letterscraps")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	__LIB_0__::func_694(12);
	if (__LIB_0__::func_425(106) == 1)
	{
		__LIB_0__::func_693(12);
		__LIB_0__::func_716(287, 0, 0);
		__LIB_0__::func_681(106, 1);
		__LIB_0__::func_71(168, 0);
		func_73();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		__LIB_0__::func_715(PLAYER::PLAYER_PED_ID());
		switch (iLocal_42)
		{
			case 0:
				func_21();
				break;
			case 1:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0xF8
{
	switch (iLocal_43)
	{
		case 0:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning")) > 0)
			{
				iLocal_43 = 2;
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					if (!__LIB_13__::func_94())
					{
						if (((!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() && !__LIB_8__::func_943()) && !__LIB_37__::func_144()) && !__LIB_16__::func_830())
						{
							iLocal_58 = 0;
							iLocal_56 = 0;
							sLocal_57[0] = "LETTERS_PAGE_ONE" /* GXT: March 15th, 1975~n~~n~ATTN; David Richards~n~~n~My Dear David,~n~~n~Listen, I know you're a little offended by your discovery of my 'petit indiscretion' as the French would say, but I want you to understand – that's all it is – a little indiscretion. I agree whole heartedly with you – my actions were a little inhumane. But that's not a bad thing. Inhumanity is the very watchword, the very currency, the very life blood of the artist! My inhumanity makes me human. It's thanks to my inhumanity that I'm able to speak to people with the moral authority of the sinner and the creator, all at once. I had to kill her. And I had to do it in that way. The way that would hurt me most – by torturing her slowly and painfully, then sending momentos from our date to her family. */;
							sLocal_57[1] = "LETTERS_PAGE_TWO" /* GXT: And in the years since, I've had to, at times, goad her family into further suffering. Just to prove how very much I understand suffering and how I can represent it best as an artist – isn't it better that one family suffers so the world can be free to enjoy, to learn and to be cleansed by my masterpieces? Don't even bother answering that. The answer is obvious and if you get it wrong, well, then you're less of a man than I thought.~n~~n~But let us not concern ourselves with such trivialities – we are artists, my friend. The last of a dying breed. I dread the day when you finally retire and Solomon takes over – sure I love the kid but he's a remorseless hack with none of your passion, your creative zeal. He's a weak livered moralizer hiding in the body of a Vinewood decadent. */;
							sLocal_57[2] = "LETTERS_PAGE_THREE" /* GXT: He understands nothing about why we act as we do! Not because we can, but because we must. And that's the thing. Some people take advantage of their position in this town for pleasure – as if sleeping with multiple young girls, or torturing hitchhikers or eating dogs could ever be fun? It's awful. I only do it to experience it so my art is truer, deeper, more meaningful, and I believe you know that.~n~~n~I cannot wait for you to read my new draft of LEARED. I have really removed the cliches that ruined Shakespeare's plays and found the power, the moment, the thing we talked about that wonderful night in Mexico when we paid the hookers to stab each other. */;
							sLocal_57[3] = "LETTERS_PAGE_FOUR" /* GXT: Anyway, I hope you and Rachel have worked through your problems. I look forward to making Friday supper again soon.  You've always been an inspiration to me.~n~~n~Your dear friend~n~~n~Dreyfuss */;
							iLocal_55 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("LETTER_SCRAPS");
							while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_55))
							{
								SYSTEM::WAIT(0);
							}
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_55, "SET_LETTER_TEXT");
							__LIB_0__::func_610(sLocal_57[0]);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
							__LIB_0__::func_366(1);
							__LIB_0__::func_963(1, 1, 1, 0);
							HUD::DISPLAY_HELP_TEXT_THIS_FRAME("LETTERS_HELP2" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ or ~INPUT_FRONTEND_LEFT~ to cycle between pages, or press ~INPUT_FRONTEND_CANCEL~ to stop reading. */, false);
							MISC::SET_GAME_PAUSED(true);
							HUD::DISPLAY_RADAR(false);
							iLocal_43 = 1;
						}
					}
				}
			}
			break;
		case 1:
			__LIB_1__::func_33(0);
			HUD::DISABLE_FRONTEND_THIS_FRAME();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			if (iLocal_56 < 4)
			{
				if (!iLocal_58)
				{
					if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
					{
						if (iLocal_56 >= 0 && iLocal_56 < 3)
						{
							iLocal_56++;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_55, "SET_LETTER_TEXT");
							__LIB_0__::func_610(sLocal_57[iLocal_56]);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						iLocal_58 = 1;
					}
					else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
					{
						if (iLocal_56 > 0 && iLocal_56 < 4)
						{
							iLocal_56 = (iLocal_56 - 1);
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_55, "SET_LETTER_TEXT");
							__LIB_0__::func_610(sLocal_57[iLocal_56]);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						iLocal_58 = 1;
					}
					else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
					{
						iLocal_43 = 2;
					}
				}
				else if (!func_2())
				{
					iLocal_58 = 0;
				}
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_55, 255, 255, 255, 255, 0);
			}
			else
			{
				iLocal_43 = 2;
			}
			break;
		case 2:
			HUD::DISPLAY_RADAR(true);
			HUD::CLEAR_HELP(true);
			__LIB_0__::func_963(0, 1, 1, 0);
			__LIB_0__::func_693(12);
			func_73();
			break;
	}
}

int func_2()//Position - 0x304
{
	if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
	{
		return 1;
	}
	return 0;
}

void func_21()//Position - 0x712
{
	switch (iLocal_43)
	{
		case 0:
			func_62();
			__LIB_0__::func_740(&Local_44, 1, joaat("prop_ld_scrap"), "LETTERS_COLLECT" /* GXT: ~1~/50 letter scraps collected. */);
			__LIB_37__::func_367(&Local_44, joaat("NUM_HIDDEN_PACKAGES_0"), 705, 50);
			iLocal_43 = 1;
			iLocal_60 = 1;
			break;
		case 1:
			if (!__LIB_0__::func_39(14) && !CAM::IS_SCREEN_FADED_OUT())
			{
				if (func_23(&Local_44, &Local_50) || uLocal_59)
				{
					iLocal_43 = 2;
				}
				if (Local_44.f_1.f_4 == Local_44.f_1.f_3)
				{
					if (__LIB_0__::func_425(106) == 0)
					{
						__LIB_0__::func_681(106, 1);
						__LIB_0__::func_71(168, 0);
					}
				}
			}
			break;
		case 2:
			__LIB_0__::func_681(106, 1);
			__LIB_0__::func_71(168, 0);
			func_22(1);
			break;
	}
}

void func_22(int iParam0)//Position - 0x7CB
{
	iLocal_42 = iParam0;
	iLocal_43 = 0;
}

int func_23(var uParam0, int iParam1)//Position - 0x7DA
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	bool bVar3;
	bVar3 = (!__LIB_13__::func_94() && !__LIB_13__::func_94());
	PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar1 = __LIB_0__::func_727(&(uParam0->f_1), uParam0->f_10);
		if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
		{
			if (!bVar1)
			{
				if (((((((uParam0->f_10 == 1 || uParam0->f_10 == 5) || uParam0->f_10 == 7) || uParam0->f_10 == 13) || uParam0->f_10 == 18) || uParam0->f_10 == 20) || uParam0->f_10 == 37) || uParam0->f_10 == 42)
				{
					__LIB_17__::func_44(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("PICKUP_CUSTOM_SCRIPT"), 0, 1, 2);
				}
				else if (uParam0->f_10 == iLocal_51)
				{
					__LIB_17__::func_44(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("PICKUP_CUSTOM_SCRIPT"), 0, 1, 2);
					if (OBJECT::DOES_PICKUP_EXIST((iParam1[uParam0->f_10 /*11*/])->f_1))
					{
						INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME((iParam1[uParam0->f_10 /*11*/])->f_1, sLocal_52);
					}
				}
				else
				{
					__LIB_17__::func_44(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("PICKUP_CUSTOM_SCRIPT"), 0, 0, 2);
				}
			}
		}
		else if (!bVar1)
		{
			if (__LIB_39__::func_404(uParam0, iParam1, Var2))
			{
				if (bVar3)
				{
					if (!__LIB_0__::func_67(33))
					{
						__LIB_0__::func_697("LETTERS_FIRST" /* GXT: Part of a confession has been found. Collect all letter scraps to solve the mystery of Leonora Johnson's murder. */, 1, 0, -1, 10000, 7, 0, 0, 0);
						__LIB_0__::func_592(33);
					}
				}
			}
		}
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1)
		{
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (uParam0->f_11)
	{
		if (!Global_78579)
		{
			__LIB_30__::func_870(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 1, &iLocal_53, &iLocal_54, "LETTERS_TITLE" /* GXT: Scrap Collected~s~ */, "LETTERS_COLLECT" /* GXT: ~1~/50 letter scraps collected. */);
		}
	}
	if (!uParam0->f_12 && !uParam0->f_11)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

void func_62()//Position - 0x196F
{
	int iVar0;
	Global_113386.f_10049.f_122.f_2 = 1;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Local_50[iVar0 /*11*/].f_3 = { __LIB_37__::func_365(iVar0, 0) };
		Local_50[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	iLocal_53 = 0;
	Local_50[0 /*11*/].f_9 = 179.4746f;
	Local_50[1 /*11*/].f_6 = { 0f, 0f, 198f };
	Local_50[2 /*11*/].f_9 = 104f;
	Local_50[3 /*11*/].f_9 = 321.5f;
	Local_50[4 /*11*/].f_6 = { 0f, 0f, 49f };
	Local_50[5 /*11*/].f_6 = { 0f, 0f, 286.5f };
	Local_50[6 /*11*/].f_9 = 278.0092f;
	Local_50[7 /*11*/].f_6 = { 5.3f, -1801.4f, 15.57f };
	Local_50[8 /*11*/].f_9 = 80.5f;
	Local_50[9 /*11*/].f_9 = 116f;
	Local_50[10 /*11*/].f_9 = 15f;
	Local_50[11 /*11*/].f_9 = 305.5f;
	Local_50[12 /*11*/].f_9 = 0f;
	Local_50[13 /*11*/].f_9 = 95f;
	Local_50[13 /*11*/].f_6 = { -0.91f, -0.03f, -0.81f };
	Local_50[14 /*11*/].f_9 = 40f;
	Local_50[15 /*11*/].f_9 = 40f;
	Local_50[16 /*11*/].f_9 = 40f;
	Local_50[17 /*11*/].f_9 = 90f;
	Local_50[17 /*11*/].f_6 = { -0.55f, 0f, 0.78f };
	Local_50[18 /*11*/].f_6 = { 0f, 0f, 0f };
	Local_50[19 /*11*/].f_9 = 40f;
	Local_50[20 /*11*/].f_6 = { 0f, 2f, 15f };
	Local_50[21 /*11*/].f_9 = 40f;
	Local_50[22 /*11*/].f_9 = 40f;
	Local_50[23 /*11*/].f_9 = 40f;
	Local_50[24 /*11*/].f_9 = 40f;
	Local_50[25 /*11*/].f_9 = 40f;
	Local_50[26 /*11*/].f_9 = 40f;
	Local_50[26 /*11*/].f_6 = { -6f, 10f, 0f };
	Local_50[27 /*11*/].f_9 = 40f;
	Local_50[27 /*11*/].f_6 = { -4.66f, 8.7f, 67.03f };
	Local_50[28 /*11*/].f_9 = 40f;
	Local_50[28 /*11*/].f_6 = { 1.54f, -8.31f, -19.94f };
	Local_50[29 /*11*/].f_9 = 40f;
	Local_50[30 /*11*/].f_9 = 40f;
	Local_50[30 /*11*/].f_6 = { 27.21f, -3.11f, -2.09f };
	Local_50[31 /*11*/].f_9 = 40f;
	Local_50[32 /*11*/].f_9 = 40f;
	Local_50[33 /*11*/].f_9 = 40f;
	Local_50[33 /*11*/].f_6 = { -9.89f, 0.3f, -0.01f };
	Local_50[34 /*11*/].f_9 = 40f;
	Local_50[35 /*11*/].f_9 = 40f;
	Local_50[36 /*11*/].f_9 = 40f;
	Local_50[36 /*11*/].f_6 = { 6.5f, -4.41f, -0.62f };
	Local_50[37 /*11*/].f_6 = { -9f, 5.3f, -2f };
	Local_50[38 /*11*/].f_9 = 40f;
	Local_50[38 /*11*/].f_6 = { -13.32f, -0.57f, -0.15f };
	Local_50[39 /*11*/].f_9 = 40f;
	Local_50[39 /*11*/].f_6 = { 4.71f, -21.26f, -0.06f };
	Local_50[40 /*11*/].f_9 = 40f;
	Local_50[41 /*11*/].f_9 = 80f;
	Local_50[42 /*11*/].f_6 = { -2f, 9f, 1f };
	Local_50[43 /*11*/].f_9 = 198f;
	Local_50[44 /*11*/].f_9 = 198f;
	Local_50[44 /*11*/].f_6 = { 0f, -20f, 0f };
	Local_50[45 /*11*/].f_9 = 198f;
	Local_50[46 /*11*/].f_9 = 198f;
	Local_50[47 /*11*/].f_9 = 198f;
	Local_50[48 /*11*/].f_9 = 198f;
	Local_50[49 /*11*/].f_9 = 198f;
}

void func_73()//Position - 0x2C6F
{
	int iVar0;
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_55);
	MISC::SET_GAME_PAUSED(false);
	Global_113386.f_10049.f_122.f_2 = 0;
	iVar0 = 0;
	while (iVar0 < Local_50.f_0)
	{
		__LIB_0__::func_714(&(Local_50[iVar0 /*11*/].f_2));
		__LIB_0__::func_733(&(Local_50[iVar0 /*11*/].f_1));
		Local_50[iVar0 /*11*/].f_1 = 0;
		iVar0++;
	}
	if (__LIB_0__::func_425(106) == 1)
	{
		__LIB_0__::func_681(106, 1);
		func_75();
		__LIB_0__::func_693(12);
	}
	else if (__LIB_0__::func_742(&(Local_44.f_1)))
	{
		__LIB_0__::func_681(106, 1);
		func_75();
		__LIB_0__::func_693(12);
	}
	else
	{
		__LIB_0__::func_694(12);
	}
	if (iLocal_60)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_44.f_7);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_75()//Position - 0x2D39
{
	int iVar0;
	iVar0 = __LIB_0__::func_993(64);
	Global_2676732[iVar0 /*83*/] = 64;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

