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
	var uLocal_45 = 0;
	float fLocal_46 = 0f;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	struct<8> Local_54[50];
	struct<3> Local_55 = { 0, 0, 0 } ;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	int iVar9;
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
	fLocal_46 = (20f * 20f);
	iLocal_49 = -1;
	iLocal_50 = -1;
	iLocal_51 = -1;
	iLocal_52 = -1;
	iLocal_53 = -1;
	Local_55 = { 0f, 0f, 0f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
	{
		__LIB_17__::func_236(&iLocal_49);
		__LIB_17__::func_236(&iLocal_50);
		__LIB_17__::func_236(&iLocal_51);
		__LIB_17__::func_236(&iLocal_52);
		__LIB_17__::func_236(&iLocal_53);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_115();
	while (__LIB_11__::func_741())
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		func_107();
		if (func_106() && iLocal_47 == 0)
		{
			iLocal_47 = 2;
		}
		if (!__LIB_0__::func_2(0) && !__LIB_0__::func_39(14))
		{
			if (iLocal_47 == 0)
			{
				if (__LIB_11__::func_741())
				{
					fVar0 = 0f;
					iLocal_48 = func_103(&fVar0);
					iLocal_59 = BitTest(Global_8137, 28);
					if (iLocal_48 != -1)
					{
						if (fVar0 < fLocal_46)
						{
							Var1 = { Local_55 };
							Var2 = { Local_55 };
							Var3 = { Local_55 };
							Var4 = { Local_55 };
							func_100(iLocal_48, &Var1, &Var2, &Var3, &Var4);
							fVar5 = 0f;
							fVar6 = 0f;
							func_99(Var1, Var2, Var3, &fVar5, &fVar6);
							fVar7 = (fVar5 * fVar6);
							if (((((fVar7 >= 0.35f && __LIB_14__::func_724(Var1, 0f, 1f)) && __LIB_14__::func_724(Var2, 0f, 1f)) && __LIB_14__::func_724(Var3, 0f, 1f)) && __LIB_14__::func_724(Var4, 0f, 1f)) || ((((fVar7 < 0.35f && __LIB_14__::func_724(Var1, 0.05f, 0.95f)) && __LIB_14__::func_724(Var2, 0.05f, 0.95f)) && __LIB_14__::func_724(Var3, 0.05f, 0.95f)) && __LIB_14__::func_724(Var4, 0.05f, 0.95f)))
							{
								if (fVar5 >= 0.08f && fVar6 >= 0.101f)
								{
									__LIB_30__::func_613(&iLocal_49, Local_54[iLocal_48 /*8*/], 0.01f);
									__LIB_30__::func_613(&iLocal_50, Var1, 0.01f);
									__LIB_30__::func_613(&iLocal_51, Var2, 0.01f);
									__LIB_30__::func_613(&iLocal_52, Var3, 0.01f);
									__LIB_30__::func_613(&iLocal_53, Var4, 0.01f);
									bVar8 = false;
									iVar9 = 0;
									while (iVar9 < 10 && !bVar8)
									{
										bVar8 = ((((GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_49) && GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_50)) && GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_51)) && GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_52)) && GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_53));
										iVar9++;
										SYSTEM::WAIT(0);
									}
									if (bVar8)
									{
										func_96(iLocal_48, 1);
										STATS::STAT_SET_INT(joaat("NUM_HIDDEN_PACKAGES_6"), func_93(), true);
										bLocal_58 = true;
										if (func_106())
										{
											func_6();
										}
										__LIB_0__::func_533();
										__LIB_14__::func_366(1);
									}
									__LIB_17__::func_236(&iLocal_49);
									__LIB_17__::func_236(&iLocal_50);
									__LIB_17__::func_236(&iLocal_51);
									__LIB_17__::func_236(&iLocal_52);
									__LIB_17__::func_236(&iLocal_53);
								}
							}
						}
					}
					iLocal_47 = 1;
				}
			}
			else if (iLocal_47 == 1)
			{
				if (!__LIB_11__::func_741())
				{
					__LIB_14__::func_366(iLocal_59);
					iLocal_47 = 0;
				}
			}
			else if (iLocal_47 == 2)
			{
				if (!bLocal_58)
				{
					if (__LIB_0__::func_116())
					{
						__LIB_29__::func_825(33, 1);
						func_1();
						__LIB_0__::func_533();
						SCRIPT::TERMINATE_THIS_THREAD();
					}
				}
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x398
{
	Global_113386.f_10049.f_135[1] = -1;
}

void func_6()//Position - 0x538
{
	bool bVar0;
	bool bVar1;
	bVar0 = true;
	bVar1 = true;
	func_7(joaat("Player_Two"), 3, 22, bVar0, bVar1, 0, 0);
	func_7(joaat("Player_Two"), 3, 23, bVar0, bVar1, 0, 0);
	func_7(joaat("Player_Two"), 3, 24, bVar0, bVar1, 0, 0);
	func_7(joaat("Player_Two"), 3, 25, bVar0, bVar1, 0, 0);
	func_7(joaat("Player_Two"), 3, 26, bVar0, bVar1, 0, 0);
	func_7(joaat("Player_Two"), 3, 76, bVar0, bVar1, 0, 0);
	func_7(joaat("Player_Two"), 3, 77, bVar0, bVar1, 0, 0);
	func_7(joaat("Player_Two"), 3, 78, bVar0, bVar1, 0, 0);
	func_7(joaat("Player_Two"), 4, 87, bVar0, bVar1, 0, 0);
	func_7(joaat("Player_Two"), 4, 88, bVar0, bVar1, 0, 0);
	func_7(joaat("Player_Two"), 4, 89, bVar0, bVar1, 0, 0);
	func_7(joaat("Player_Two"), 4, 90, bVar0, bVar1, 0, 0);
	func_7(joaat("Player_Two"), 4, 97, bVar0, bVar1, 0, 0);
	func_7(joaat("Player_Two"), 4, 98, bVar0, bVar1, 0, 0);
	func_7(joaat("Player_Two"), 4, 99, bVar0, bVar1, 0, 0);
	func_7(joaat("Player_Two"), 4, 100, bVar0, bVar1, 0, 0);
	func_7(joaat("Player_Two"), 4, 101, bVar0, bVar1, 0, 0);
	func_7(joaat("Player_Two"), 4, 102, bVar0, bVar1, 0, 0);
	func_7(joaat("Player_Two"), 4, 103, bVar0, bVar1, 0, 0);
}

void func_7(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x69C
{
	__LIB_38__::func_82(iParam0, iParam1, iParam2, bParam3);
	func_80(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_364(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_38__::func_81(iParam0, iParam1, iParam2, 0);
	}
}

int func_80(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x172E0
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_35__::func_896(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
			if (iParam1 == 12)
			{
				iVar0 = 1;
				if (iParam0 == joaat("Player_Zero"))
				{
					if (iParam2 == 31)
					{
						iVar0 = 0;
					}
				}
				if (iVar0 == 1)
				{
					uVar3 = { __LIB_18__::func_180(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_80(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_38__::func_82(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__::func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_80(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_38__::func_82(iParam0, 14, uVar4[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
		}
		if (iParam4 == 1 && bParam3 == 1)
		{
			switch (iParam0)
			{
				case joaat("Player_Zero"):
					break;
				case joaat("Player_One"):
					switch (iParam1)
					{
						case 3:
							if (iParam2 >= 176 && iParam2 <= 191)
							{
								iVar5 = (227 + Global_78130[1 /*14*/].f_4);
								func_80(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_80(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_80(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_80(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_80(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_80(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_80(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_80(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_80(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_80(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_80(iParam0, 14, iVar5, 1, 0);
							}
							break;
					}
					break;
				case joaat("Player_Two"):
					switch (iParam1)
					{
						case 4:
							if (iParam2 >= 81 && iParam2 <= 90)
							{
								iVar5 = (94 + Global_78130[1 /*14*/].f_4);
								func_80(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_80(iParam0, 14, 17, 1, 0);
							}
							break;
					}
					break;
				}
		}
		return 1;
	}
	return 0;
}

int func_93()//Position - 0x1A870
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (func_94(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_94(int iParam0)//Position - 0x1A89F
{
	int iVar0;
	var uVar1;
	func_95(iParam0, &iVar0, &uVar1);
	return BitTest(Global_113386.f_10049.f_135[iVar0], uVar1);
}

void func_95(int iParam0, var uParam1, var uParam2)//Position - 0x1A8C1
{
	*uParam1 = (iParam0 / 32);
	*uParam2 = (iParam0 % 32);
}

void func_96(int iParam0, bool bParam1)//Position - 0x1A8D9
{
	int iVar0;
	int iVar1;
	func_95(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_113386.f_10049.f_135[iVar0]), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_10049.f_135[iVar0]), iVar1);
	}
}

void func_99(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4)//Position - 0x1A97F
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Param0, &Var0, &(Var0.f_1));
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Param1, &Var1, &(Var1.f_1));
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Param2, &Var2, &(Var2.f_1));
	*fParam3 = SYSTEM::VDIST(Var0, Var1);
	*fParam4 = SYSTEM::VDIST(Var0, Var2);
}

void func_100(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x1A9D2
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var9;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	fVar5 = 0.01f;
	if (iParam0 == 29 && Var0.f_2 <= 35f)
	{
		Var1 = { -95.402f, -744.506f, 37.2165f };
		Var2 = { 0.9047f, 0.4261f, 0f };
		fVar3 = 0.51f;
		fVar4 = 0.35f;
	}
	else if (iParam0 == 29 && Var0.f_2 <= 36f)
	{
		Var1 = { -95.4013f, -744.5073f, 37.1846f };
		Var2 = { 0.9047f, 0.4261f, 0f };
		fVar3 = 0.51f;
		fVar4 = 0.43f;
	}
	else
	{
		Var1 = { Local_54[iParam0 /*8*/] };
		Var2 = { Local_54[iParam0 /*8*/].f_3 };
		fVar3 = Local_54[iParam0 /*8*/].f_6;
		fVar4 = Local_54[iParam0 /*8*/].f_7;
	}
	fVar6 = (fVar3 / 2f);
	fVar7 = (fVar4 / 2f);
	Var8 = { func_101(__LIB_0__::func_620(Var2, 0f, 0f, -1f)) };
	Var9 = { func_101(__LIB_0__::func_620(Var2, Var8)) };
	*uParam1 = { Var1 + Vector(fVar6, fVar6, fVar6) * Var8 + Vector(fVar7, fVar7, fVar7) * Var9 + Var2 * Vector(fVar5, fVar5, fVar5) };
	*uParam2 = { Var1 + Vector(fVar6, fVar6, fVar6) * -Var8 + Vector(fVar7, fVar7, fVar7) * Var9 + Var2 * Vector(fVar5, fVar5, fVar5) };
	*uParam3 = { Var1 + Vector(fVar6, fVar6, fVar6) * Var8 + Vector(fVar7, fVar7, fVar7) * -Var9 + Var2 * Vector(fVar5, fVar5, fVar5) };
	*uParam4 = { Var1 + Vector(fVar6, fVar6, fVar6) * -Var8 + Vector(fVar7, fVar7, fVar7) * -Var9 + Var2 * Vector(fVar5, fVar5, fVar5) };
}

Vector3 func_101(struct<3> Param0)//Position - 0x1AB73
{
	float fVar0;
	fVar0 = SYSTEM::VMAG(Param0);
	return Param0 / Vector(fVar0, fVar0, fVar0);
}

int func_103(float fParam0)//Position - 0x1ABC6
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	iVar1 = -1;
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (!func_94(iVar0))
		{
			fVar3 = SYSTEM::VDIST2(Var2, Local_54[iVar0 /*8*/]);
			if (iVar1 == -1 || fVar3 < *fParam0)
			{
				iVar1 = iVar0;
				*fParam0 = fVar3;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_106()//Position - 0x1AC61
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Global_113386.f_10049.f_135[1] == -1)
	{
		return 1;
	}
	func_95(49, &iVar0, &iVar1);
	if (iVar0 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iVar0 - 1))
		{
			if (Global_113386.f_10049.f_135[iVar2] != -1)
			{
				return 0;
			}
			iVar2++;
		}
	}
	if (iVar1 == 31)
	{
		return Global_113386.f_10049.f_135[iVar0] == -1;
	}
	return Global_113386.f_10049.f_135[iVar0] == (SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(iVar1 + 1))) - 1);
}

void func_107()//Position - 0x1ACF4
{
	if (bLocal_58)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_57))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_57, 0.5f, 0.5f, 1f, 1f, 100, 100, 100, 255, 0);
		}
		switch (iLocal_56)
		{
			case 0:
				iLocal_60 = MISC::GET_GAME_TIMER() + 2000;
				iLocal_56++;
				break;
			case 1:
				if (iLocal_60 < MISC::GET_GAME_TIMER())
				{
					if (!__LIB_0__::func_511())
					{
						iLocal_57 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
						iLocal_60 = MISC::GET_GAME_TIMER() + 5000;
						iLocal_56++;
					}
				}
				break;
			case 2:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_57) || iLocal_60 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_60 < MISC::GET_GAME_TIMER())
					{
						bLocal_58 = false;
						iLocal_56 = 0;
					}
					else
					{
						iLocal_56++;
					}
				}
				break;
			case 3:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_57, "SHOW_BRIDGES_KNIVES_PROGRESS");
				__LIB_0__::func_478("PM_TITLE" /* GXT: Mosaic Photographed~s~ */);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(50);
				__LIB_0__::func_478("PM_PASS" /* GXT: Success! */);
				__LIB_0__::func_478("PM_CHALLENGE" /* GXT: monkey mosaics photographed */);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_93());
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iLocal_60 = MISC::GET_GAME_TIMER() + 7500;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", true);
				iLocal_56++;
				break;
			case 4:
				if ((((((iLocal_60 < MISC::GET_GAME_TIMER() || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || __LIB_0__::func_511()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || __LIB_0__::func_134()) || __LIB_30__::func_614())
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_57, "SHARD_ANIM_OUT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_60 = MISC::GET_GAME_TIMER() + 500;
					iLocal_56++;
				}
				break;
			case 5:
				if ((((((iLocal_60 < MISC::GET_GAME_TIMER() || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || __LIB_0__::func_511()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || __LIB_0__::func_134()) || __LIB_30__::func_614())
				{
					iLocal_56++;
				}
				break;
			case 6:
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_57);
				if (func_106())
				{
					iLocal_60 = MISC::GET_GAME_TIMER() + 1000;
					iLocal_56++;
				}
				else
				{
					bLocal_58 = false;
					iLocal_56 = 0;
				}
				break;
			case 7:
				if (iLocal_60 < MISC::GET_GAME_TIMER())
				{
					if (__LIB_0__::func_176(62) && !__LIB_0__::func_176(24))
					{
						__LIB_0__::func_151("PM_CLOTHES" /* GXT: New clothes have been added to Trevor's wardrobe. */, 10000);
					}
					bLocal_58 = false;
				}
				break;
			}
	}
}

void func_115()//Position - 0x1B075
{
	func_116(0, 157.9448f, -1171.397f, 29.1414f, -0.0872f, 0.9962f, -0.0002f, 0.505f, 0.47f);
	func_116(1, 1124.1533f, -1270.9707f, 23.3037f, -0.8098f, -0.5868f, 0f, 0.4f, 0.4f);
	func_116(2, 149.5787f, -1183.7872f, 31.1711f, 0.4427f, -0.7223f, 0.5313f, 0.49f, 0.5f);
	func_116(3, -146.9499f, 229.0641f, 97.7295f, 0f, 1f, 0f, 0.42f, 0.42f);
	func_116(4, -1939.495f, -408.4034f, 37.6704f, 0.5596f, 0.8288f, -0.0011f, 0.41f, 0.38f);
	func_116(5, 2547.1548f, 394.4722f, 111.3622f, -0.9994f, 0.0341f, 0f, 0.54f, 0.52f);
	func_116(6, -1104.9414f, 2724.4644f, 21.7053f, 0.7479f, 0.6638f, 0f, 0.44f, 0.41f);
	func_116(7, 205.5913f, -2026.6046f, 17.8582f, -0.3632f, -0.9317f, -0.0015f, 0.39f, 0.33f);
	func_116(8, 1143.9529f, -667.2766f, 58.1309f, 0.9955f, 0.0953f, 0f, 0.59f, 0.51f);
	func_116(9, -495.583f, -457.0046f, 32.6311f, -0.9928f, 0.1194f, -0.0002f, 0.6f, 0.61f);
	func_116(10, 1674.2952f, 4973.919f, 45.5824f, -0.707f, 0.7072f, 0f, 0.38f, 0.35f);
	func_116(11, 1511.48f, 3567.6128f, 38.0881f, 0.866f, 0.5f, -0.0004f, 0.39f, 0.38f);
	func_116(12, 84.4525f, 213.9647f, 119.2064f, 0.9397f, -0.3419f, -0.0018f, 0.6f, 0.6f);
	func_116(13, 3420.168f, 3769.68f, 35.8602f, -0.4229f, 0.9062f, 0.0001f, 0.71f, 0.72f);
	func_116(14, -420.5195f, 1090.3248f, 332.0972f, -0.9639f, 0.2661f, 0.0007f, 0.41f, 0.39f);
	func_116(15, 341.514f, 345.7831f, 105.1536f, 0.9709f, -0.2397f, 0f, 0.51f, 0.5f);
	func_116(16, -940.438f, 332.8253f, 72.5064f, 0f, 1f, 0f, 0.33f, 0.31f);
	func_116(17, -1828.9017f, -1266.7217f, 7.7045f, 0.766f, -0.6428f, 0f, 0.189f, 0.16f);
	func_116(18, -1168.0094f, -2033.2712f, 14.4629f, -0.6428f, -0.766f, 0f, 0.409f, 0.41f);
	func_116(19, -346.3339f, -2275.362f, 7.0538f, 1f, 0f, 0f, 0.419f, 0.42f);
	func_116(20, 1725.7247f, 4780.778f, 42.7613f, 1f, 0f, 0f, 0.38f, 0.38f);
	func_116(21, 2394.6416f, 3142.6284f, 48.0601f, 0.9096f, -0.4155f, 0f, 0.52f, 0.52f);
	func_116(22, 559.5842f, -551.627f, 27.5494f, 0.9925f, -0.1219f, 0f, 0.32f, 0.32f);
	func_116(23, 282.2999f, -477.448f, 33.6627f, -0.2438f, 0.9698f, -0.0001f, 0.3f, 0.3f);
	func_116(24, -808.8348f, -2749.262f, 13.5377f, 0.866f, -0.5f, 0f, 0.42f, 0.42f);
	func_116(25, 354.246f, 3397.849f, 36.0745f, 0.3677f, -0.93f, 0f, 0.39f, 0.36f);
	func_116(26, 472.6187f, -1470.4248f, 34.864f, 0.2627f, -0.9649f, 0f, 0.59f, 0.54f);
	func_116(27, -466.3089f, -1447.8661f, 20.7979f, 0.6997f, -0.7144f, 0f, 0.58f, 0.58f);
	func_116(28, -1370.4216f, -524.2557f, 30.5145f, -0.8256f, -0.5643f, -0.0001f, 0.41f, 0.39f);
	func_116(29, -95.4015f, -744.507f, 37.1422f, 0.9047f, 0.4261f, 0f, 0.48f, 0.48f);
	func_116(30, -1985.9196f, 4521.6475f, 19.9029f, 0.6943f, 0.6959f, -0.1836f, 0.63f, 0.62f);
	func_116(31, 555.9847f, 2800.7842f, 41.7896f, -0.0712f, 0.9975f, 0f, 0.44f, 0.43f);
	func_116(32, 1914.3754f, 3735.6611f, 33.7799f, -0.8666f, -0.4989f, 0.0002f, 0.34f, 0.33f);
	func_116(33, 753.8581f, -1861.106f, 51.9038f, 0.0823f, 0.9966f, -0.0012f, 0.54f, 0.53f);
	func_116(34, 1570.8441f, -2130.8457f, 77.1156f, 0.9637f, 0.267f, 0.0006f, 0.48f, 0.45f);
	func_116(35, 894.0941f, 3619.2463f, 32.319f, 0f, -1f, 0f, 0.36f, 0.35f);
	func_116(36, -251.753f, 6235.92f, 30.9796f, 0.7092f, -0.705f, 0f, 0.23f, 0.23f);
	func_116(37, 1240.0862f, -3318.4395f, 5.6199f, 1f, 0f, 0f, 0.42f, 0.42f);
	func_116(38, -1382.7864f, -905.4655f, 15.0535f, 0.7934f, 0.6087f, 0f, 0.7f, 0.54f);
	func_116(39, -1677.9526f, 174.439f, 62.1203f, 0.4226f, -0.9063f, 0.6201f, 0.244f, 0.23f);
	func_116(40, 249.8769f, -3310.7395f, 5.6313f, 0f, -0.9063f, 0.0001f, 0.654f, 0.66f);
	func_116(41, 158.6217f, 6657.8584f, 35.7506f, 0.7054f, 0.7059f, 0f, 0.544f, 0.47f);
	func_116(42, -1378.4717f, -362.0254f, 42.8204f, -0.9687f, 0.2484f, 0f, 1.744f, 1.65f);
	func_116(43, -1706.7347f, -265.9444f, 50.891f, -0.8055f, 0.5926f, 0f, 0.365f, 0.32f);
	func_116(44, -1279.3156f, -1611.9532f, 6.3379f, -0.8219f, -0.5697f, 0.0001f, 2.439f, 2.091f);
	func_116(45, -1035.4744f, -160.1076f, 37.9679f, -0.9366f, 0.3504f, 0f, 0.273f, 0.228f);
	func_116(46, 591.9451f, 142.8853f, 103.5083f, -0.3445f, -0.9388f, 0.0038f, 0.355f, 0.36f);
	func_116(47, -463.3655f, -18.1181f, 51.925f, -0.9986f, 0.0523f, 0f, 0.834f, 0.829f);
	func_116(48, -956.4725f, -775.4922f, 16.6361f, 0.6088f, 0.7934f, 0f, 0.258f, 0.263f);
	func_116(49, -814.0197f, -1255.7089f, 5.4366f, -0.6431f, -0.7658f, -0.0001f, 0.471f, 0.471f);
}

void func_116(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4)//Position - 0x1B8C5
{
	Local_54[iParam0 /*8*/] = { Param1 };
	Local_54[iParam0 /*8*/].f_3 = { Param2 };
	Local_54[iParam0 /*8*/].f_6 = fParam3;
	Local_54[iParam0 /*8*/].f_7 = fParam4;
}

