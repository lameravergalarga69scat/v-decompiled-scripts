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
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_54[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_47 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_48 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_56 = -15;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_137();
	}
	func_136();
	func_134();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (__LIB_6__::func_854(4) || Global_97361)
		{
			func_137();
		}
		if (__LIB_0__::func_109())
		{
			bLocal_55 = false;
			iLocal_49 = (iLocal_49 + 1 % 60);
			iVar0 = 0;
			while (iVar0 < 63)
			{
				if ((iVar0 % 60) == iLocal_49 || Global_112473[iVar0 /*10*/].f_2)
				{
					func_83(iVar0);
				}
				iVar0++;
			}
			func_76();
			func_54();
			func_49();
			func_46();
			func_4();
		}
		else if (!bLocal_55)
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x121
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < 20)
	{
		__LIB_10__::func_604(iLocal_54[iVar1], 0, 0);
		iLocal_53[iVar1] = 0;
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 63)
	{
		iVar0 = iVar2;
		if (Global_112473[iVar0 /*10*/].f_8 != -1)
		{
			__LIB_10__::func_604(iLocal_54[Global_112473[iVar0 /*10*/].f_8], 0, 0);
			func_2(&(Global_112473[iVar0 /*10*/].f_8));
		}
		Global_112473[iVar0 /*10*/].f_7 = 0;
		iVar2++;
	}
	bLocal_55 = true;
}

void func_2(var uParam0)//Position - 0x1A4
{
	if (*uParam0 > -1 && *uParam0 < 20)
	{
		iLocal_53[*uParam0] = 0;
	}
	*uParam0 = -1;
}

void func_4()//Position - 0x2CB
{
	bool bVar0;
	int iVar1;
	struct<7> Var2;
	int iVar3;
	if (!__LIB_0__::func_67(58))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (__LIB_0__::func_176(17))
			{
				if (!__LIB_0__::func_368(74))
				{
					if (iLocal_56 == -15)
					{
						iLocal_56 = __LIB_13__::func_95();
						__LIB_32__::func_437(&iLocal_56, 0, 5, 0, 0, 0, 0);
					}
					else if (__LIB_32__::func_438(iLocal_56))
					{
						bVar0 = false;
						iVar1 = 243;
						while (iVar1 <= 262)
						{
							iVar3 = iVar1;
							__LIB_6__::func_773(58, &Var2);
							if (__LIB_0__::func_78(Var2.f_6, __LIB_11__::func_156(iVar3, 0), 0))
							{
								if (HUD::DOES_BLIP_EXIST(Global_32338[iVar3 /*23*/].f_19))
								{
									HUD::SET_BLIP_FLASHES(Global_32338[iVar3 /*23*/].f_19, true);
									HUD::SET_BLIP_FLASH_TIMER(Global_32338[iVar3 /*23*/].f_19, 10000);
									switch (__LIB_20__::func_728())
									{
										case 1:
											__LIB_18__::func_203("AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, 2, 0, 1000, 10000, 7, 0, 0, 0);
											break;
										case 0:
											__LIB_18__::func_203("AM_H_RCFS_M" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ Switch to Franklin to play this mission. */, 2, 0, 1000, 10000, 7, 0, 0, 0);
											break;
									}
									iLocal_56 = __LIB_13__::func_95();
									__LIB_32__::func_437(&iLocal_56, 0, 0, 8, 0, 0, 0);
									bVar0 = true;
								}
							}
							iVar1++;
						}
						if (!bVar0)
						{
							iLocal_56 = __LIB_13__::func_95();
							__LIB_32__::func_437(&iLocal_56, 0, 5, 0, 0, 0, 0);
						}
					}
				}
				else
				{
					__LIB_0__::func_460(58);
				}
			}
		}
	}
}

void func_46()//Position - 0x2AE3
{
	if (!__LIB_0__::func_67(39))
	{
		if (BitTest(Global_113386.f_18574[27 /*6*/], 3))
		{
			if (__LIB_11__::func_512("FS_HELP1" /* GXT: Find and destroy all of Lenny Avery's "For Sale" signs that are located around the northern area of the city. */) == 2)
			{
				__LIB_18__::func_203("FS_HELP1" /* GXT: Find and destroy all of Lenny Avery's "For Sale" signs that are located around the northern area of the city. */, 1, 0, 2000, 10000, 7, 0, 0, 0);
			}
			else if (__LIB_11__::func_512("FS_HELP1" /* GXT: Find and destroy all of Lenny Avery's "For Sale" signs that are located around the northern area of the city. */) == 1)
			{
				__LIB_0__::func_460(39);
			}
		}
	}
}

void func_49()//Position - 0x2B9C
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_0__::func_67(55))
		{
			if ((__LIB_29__::func_790(5) && __LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), func_52(5), 1) < func_50(5)) || (__LIB_29__::func_790(6) && __LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), func_52(6), 1) < func_50(6)))
			{
				if (__LIB_11__::func_512("BARSTASH2" /* GXT: Areas where you can find vehicles with a hidden stash are marked on the map. Search them to find vehicles for Barry. */) == 2)
				{
					__LIB_18__::func_203("BARSTASH2" /* GXT: Areas where you can find vehicles with a hidden stash are marked on the map. Search them to find vehicles for Barry. */, 1, 0, 2000, 10000, 2, 0, 0, 0);
				}
				else if (__LIB_11__::func_512("BARSTASH2" /* GXT: Areas where you can find vehicles with a hidden stash are marked on the map. Search them to find vehicles for Barry. */) == 1)
				{
					__LIB_0__::func_460(55);
				}
			}
		}
	}
}

float func_50(int iParam0)//Position - 0x2C33
{
	if (iParam0 == 5 || iParam0 == 6)
	{
		return 250f;
	}
	else if (iParam0 == 38)
	{
		return 35f;
	}
	else if (iParam0 == 39)
	{
		return 37.5f;
	}
	else if (iParam0 == 40)
	{
		return 45f;
	}
	else if (iParam0 == 41)
	{
		return 150f;
	}
	else if (iParam0 == 49 || iParam0 == 50)
	{
		return 90f;
	}
	return 250f;
}

Vector3 func_52(int iParam0)//Position - 0x2CF9
{
	if (iParam0 == 5)
	{
		return 1161.31f, -1326.52f, 34.23f;
	}
	else if (iParam0 == 6)
	{
		return -533.15f, -1691.25f, 18.21f;
	}
	else if (iParam0 == 38)
	{
		return -565.8f, 293.14f, 90.8f;
	}
	else if (iParam0 == 39)
	{
		return -1036.65f, 363.59f, 79.82f;
	}
	else if (iParam0 == 40)
	{
		return -620.37f, -264.39f, 37.81f;
	}
	else if (iParam0 == 41)
	{
		return -1115.96f, 31.42f, 53.8f;
	}
	else if (iParam0 == 49)
	{
		return 305.52f, 157.19f, 102.94f;
	}
	else if (iParam0 == 50)
	{
		return 1040.96f, -534.42f, 60.17f;
	}
	return 0f, 0f, 0f;
}

void func_54()//Position - 0x2DF1
{
	if (__LIB_0__::func_116())
	{
		if (!__LIB_0__::func_368(114))
		{
			if (BitTest(Global_113386.f_18574[46 /*6*/], 3))
			{
				__LIB_35__::func_161(552744224, 6, 2, 50, 60000, 10000, -1, 181, -1, 0, 1);
				__LIB_0__::func_503(114, 1);
			}
		}
		else if (!__LIB_0__::func_368(83))
		{
			if (BitTest(Global_113386.f_18574[51 /*6*/], 3))
			{
				if (__LIB_11__::func_773(552744224))
				{
					__LIB_36__::func_57(552744224);
					__LIB_0__::func_71(181, 0);
				}
			}
		}
	}
}

void func_76()//Position - 0x3997
{
	int iVar0;
	struct<7> Var1;
	iLocal_50++;
	bLocal_51++;
	if (iLocal_50 >= 63)
	{
		iLocal_50 = 0;
		bLocal_51 = false;
		iLocal_52 = 0;
	}
	else if (bLocal_51 > 31)
	{
		bLocal_51 = false;
		iLocal_52++;
	}
	iVar0 = iLocal_50;
	if (!__LIB_29__::func_760(iVar0) || iVar0 == 52)
	{
		if (!BitTest(Global_113386.f_18574.f_390[iLocal_52], bLocal_51))
		{
			__LIB_6__::func_773(iVar0, &Var1);
			if (iVar0 == 58)
			{
				MISC::SET_BIT(&(Global_113386.f_18574.f_390[iLocal_52]), bLocal_51);
			}
			else if (HUD::GET_MINIMAP_FOW_COORDINATE_IS_REVEALED(Var1.f_6))
			{
				MISC::SET_BIT(&(Global_113386.f_18574.f_390[iLocal_52]), bLocal_51);
			}
			else if (Global_112473[iVar0 /*10*/].f_8 != -1)
			{
				if (iLocal_53[Global_112473[iVar0 /*10*/].f_8])
				{
					if (BitTest(Global_32338[iLocal_54[Global_112473[iVar0 /*10*/].f_8] /*23*/].f_11, 6))
					{
						__LIB_20__::func_576(iLocal_54[Global_112473[iVar0 /*10*/].f_8]);
					}
				}
			}
		}
		else if (Global_112473[iVar0 /*10*/].f_8 != -1)
		{
			if (iLocal_53[Global_112473[iVar0 /*10*/].f_8])
			{
				if (!BitTest(Global_32338[iLocal_54[Global_112473[iVar0 /*10*/].f_8] /*23*/].f_11, 6))
				{
					__LIB_20__::func_574(iLocal_54[Global_112473[iVar0 /*10*/].f_8]);
				}
			}
		}
	}
}

void func_83(int iParam0)//Position - 0x3D0C
{
	struct<31> Var0;
	var uVar1;
	int iVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<2> Var10;
	bool bVar11;
	int iVar12;
	float fVar13;
	int iVar14;
	int iVar15;
	char* sVar16;
	if (iParam0 == -1)
	{
		return;
	}
	__LIB_6__::func_773(iParam0, &Var0);
	Global_112473[iParam0 /*10*/].f_2 = 0;
	if (!BitTest(Global_113386.f_18574[iParam0 /*6*/], 1))
	{
		if (!Var0.f_23)
		{
			MISC::SET_BIT(&(Global_113386.f_18574[iParam0 /*6*/]), 1);
		}
	}
	if (BitTest(Global_113386.f_18574[iParam0 /*6*/], 0) && !BitTest(Global_113386.f_18574[iParam0 /*6*/], 3))
	{
		if (!Global_113386.f_18574[iParam0 /*6*/].f_1)
		{
			uVar1 = __LIB_13__::func_95();
			__LIB_32__::func_437(&uVar1, 0, 0, Var0.f_15, 0, 0, 0);
			if (iParam0 == 57)
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(3, 11);
				iVar2 *= 30;
				__LIB_32__::func_437(&uVar1, 0, 0, iVar2, 0, 0, 0);
			}
			Global_113386.f_18574[iParam0 /*6*/].f_2 = uVar1;
			Global_113386.f_18574[iParam0 /*6*/].f_1 = 1;
		}
		if (BitTest(Global_113386.f_18574[iParam0 /*6*/], 1))
		{
			if (!BitTest(Global_113386.f_18574[iParam0 /*6*/], 2))
			{
				bVar3 = true;
				if (Var0.f_14 != -1)
				{
					if (!__LIB_0__::func_368(Var0.f_14))
					{
						bVar3 = false;
					}
				}
				if (func_128(iParam0))
				{
					bVar3 = false;
				}
				if (__LIB_29__::func_776(iParam0))
				{
					bVar3 = false;
				}
				if (func_125(Var0.f_30))
				{
					bVar3 = false;
				}
				if (Var0.f_15 > 0 && bVar3)
				{
					if (!__LIB_32__::func_438(Global_113386.f_18574[iParam0 /*6*/].f_2))
					{
						__LIB_36__::func_56(Global_113386.f_18574[iParam0 /*6*/].f_2, &uVar4, &uVar5, &uVar6, &iVar7, &iVar8, &iVar9);
						if ((iVar9 > 0 || iVar8 > 0) || iVar7 > 10)
						{
							Var10 = { __LIB_0__::func_339(iParam0) };
							Global_113386.f_18574[iParam0 /*6*/].f_2 = __LIB_13__::func_95();
							__LIB_32__::func_437(&(Global_113386.f_18574[iParam0 /*6*/].f_2), 0, 0, Var0.f_15, 0, 0, 0);
						}
						bVar3 = false;
					}
				}
				if (!func_121(Var0.f_27, Var0.f_28))
				{
					bVar3 = false;
				}
				if (bVar3)
				{
					MISC::SET_BIT(&(Global_113386.f_18574[iParam0 /*6*/]), 2);
					Global_112473[iParam0 /*10*/].f_4 = 0;
					Global_112473[iParam0 /*10*/].f_6 = 0;
					Global_112473[iParam0 /*10*/].f_5 = 0;
					if (iParam0 == 35)
					{
						Global_112473[iParam0 /*10*/].f_3 = 0;
						BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE("launcher_MrsPhilips");
					}
					else if (iParam0 == 58)
					{
						Global_112473[iParam0 /*10*/].f_3 = 0;
						BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE("launcher_Tonya");
					}
					else
					{
						Global_112473[iParam0 /*10*/].f_3 = 1;
					}
				}
			}
		}
	}
	if (BitTest(Global_113386.f_18574[iParam0 /*6*/], 2) && !BitTest(Global_113386.f_18574[iParam0 /*6*/], 3))
	{
		bVar11 = true;
		if (func_128(iParam0))
		{
			bVar11 = false;
		}
		if (__LIB_29__::func_776(iParam0))
		{
			bVar11 = false;
		}
		if (func_125(Var0.f_30))
		{
			bVar11 = false;
		}
		if (bVar11)
		{
			if (!func_121(Var0.f_27, Var0.f_28))
			{
				bVar11 = false;
			}
		}
		if (!bVar11)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_18574[iParam0 /*6*/]), 2);
		}
	}
	iVar12 = 1;
	if (Global_112473[iParam0 /*10*/].f_1)
	{
		Global_112473[iParam0 /*10*/].f_2 = 1;
		Global_112473[iParam0 /*10*/].f_1 = 0;
		Global_112473[iParam0 /*10*/].f_3 = 1;
	}
	else if (Global_112473[iParam0 /*10*/].f_3)
	{
		if (((((Var0.f_4 == 0 || Var0.f_4 == 2) || Var0.f_4 == 3) || Var0.f_4 == 11) || Var0.f_4 == 16) || Var0.f_4 == 17)
		{
			fVar13 = 100f;
		}
		else
		{
			fVar13 = 209f;
		}
		if (!__LIB_0__::func_134() && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, false) > fVar13)
		{
			Global_112473[iParam0 /*10*/].f_3 = 0;
		}
		else
		{
			if (iParam0 == 10 && Global_113386.f_7261[109] != 1)
			{
				__LIB_39__::func_848(109, 1);
			}
			iVar12 = 0;
		}
	}
	iVar14 = 0;
	if ((((iVar12 && !BitTest(Global_113386.f_18574[iParam0 /*6*/], 3)) && BitTest(Global_113386.f_18574[iParam0 /*6*/], 0)) && BitTest(Global_113386.f_18574[iParam0 /*6*/], 1)) && BitTest(Global_113386.f_18574[iParam0 /*6*/], 2))
	{
		if (iParam0 == 58 && __LIB_0__::func_511())
		{
		}
		else
		{
			iVar14 = 2;
		}
	}
	if (Global_112473[iParam0 /*10*/].f_7 != iVar14)
	{
		if (func_105(&(Global_112473[iParam0 /*10*/].f_8)))
		{
			if (__LIB_0__::func_78(Var0.f_6, 0f, 0f, 0f, 0))
			{
			}
			else
			{
				iVar15 = iLocal_54[Global_112473[iParam0 /*10*/].f_8];
				if (iVar14 == 0)
				{
					__LIB_10__::func_604(iVar15, 0, 0);
					__LIB_11__::func_504(iVar15, 0);
					func_2(&(Global_112473[iParam0 /*10*/].f_8));
				}
				else if (iVar14 == 2)
				{
					if (func_103(iParam0))
					{
						func_102(iVar15, 1);
						__LIB_29__::func_871(iVar15, func_52(iParam0));
						func_100(iVar15, func_50(iParam0));
					}
					else
					{
						func_102(iVar15, 0);
						__LIB_30__::func_826(iVar15, Var0.f_9);
						__LIB_29__::func_871(iVar15, Var0.f_6);
					}
					func_96(iVar15, iParam0);
					__LIB_30__::func_824(iVar15);
					if (__LIB_11__::func_510(Var0.f_26, 1))
					{
						__LIB_35__::func_162(iVar15, 1, 1, 0);
					}
					if (__LIB_11__::func_510(Var0.f_26, 0))
					{
						__LIB_35__::func_162(iVar15, 1, 0, 0);
					}
					if (__LIB_11__::func_510(Var0.f_26, 2))
					{
						__LIB_35__::func_162(iVar15, 1, 2, 0);
					}
					if (__LIB_29__::func_760(iParam0) && iParam0 != 52)
					{
						__LIB_20__::func_576(iVar15);
					}
					if (__LIB_29__::func_760(iParam0))
					{
						if (func_91(iParam0))
						{
							__LIB_11__::func_504(iVar15, 1);
						}
					}
					if (iParam0 == 58)
					{
						__LIB_30__::func_825(iVar15, 4);
					}
					else
					{
						__LIB_30__::func_825(iVar15, 8);
					}
					__LIB_10__::func_604(iVar15, 1, 0);
				}
			}
			Global_112473[iParam0 /*10*/].f_7 = iVar14;
		}
	}
	if (!BitTest(Global_113386.f_18574[iParam0 /*6*/], 4))
	{
		if (MISC::GET_HASH_KEY(&(Var0.f_10)) == MISC::GET_HASH_KEY(""))
		{
			MISC::SET_BIT(&(Global_113386.f_18574[iParam0 /*6*/]), 4);
		}
		else if (iVar14 == 2)
		{
			if (__LIB_11__::func_510(Var0.f_26, __LIB_20__::func_728()))
			{
				if (!__LIB_0__::func_200() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (iParam0 == 58)
						{
							if (__LIB_30__::func_299(243))
							{
								if (__LIB_10__::func_861(243))
								{
									__LIB_18__::func_203(&(Var0.f_10), 1, 0, -1, 10000, Var0.f_26, 0, 0, 0);
									__LIB_0__::func_71(63, 1000);
									MISC::SET_BIT(&(Global_113386.f_18574[iParam0 /*6*/]), 4);
								}
							}
						}
						else if ((iParam0 == 5 || iParam0 == 38) || iParam0 == 49)
						{
							__LIB_18__::func_203(&(Var0.f_10), 1, 5000, -1, 10000, Var0.f_26, 0, 0, 0);
							MISC::SET_BIT(&(Global_113386.f_18574[iParam0 /*6*/]), 4);
						}
						else
						{
							__LIB_18__::func_203(&(Var0.f_10), 1, 0, -1, 10000, Var0.f_26, 0, 0, 0);
							MISC::SET_BIT(&(Global_113386.f_18574[iParam0 /*6*/]), 4);
						}
					}
				}
			}
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_0__::func_67(35))
		{
			if (BitTest(Global_113386.f_18574[iParam0 /*6*/], 2) && !BitTest(Global_113386.f_18574[iParam0 /*6*/], 3))
			{
				if (((((!__LIB_11__::func_510(Var0.f_26, __LIB_20__::func_728()) && !func_103(iParam0)) && !__LIB_29__::func_760(iParam0)) && !func_86(iParam0)) && !func_85(iParam0)) && !Global_112473[iParam0 /*10*/].f_3)
				{
					if (SYSTEM::VDIST2(Var0.f_6, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 81f)
					{
						sVar16 = "";
						if (BitTest(Var0.f_26, 1))
						{
							sVar16 = "TRIG_RC_F" /* GXT: Return as Franklin to start this Strangers and Freaks mission. */;
						}
						else if (BitTest(Var0.f_26, 0))
						{
							sVar16 = "TRIG_RC_M" /* GXT: Return as Michael to start this Strangers and Freaks mission. */;
						}
						else
						{
							sVar16 = "TRIG_RC_T" /* GXT: Return as Trevor to start this Strangers and Freaks mission. */;
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar16))
						{
							switch (__LIB_11__::func_512(sVar16))
							{
								case 2:
									__LIB_18__::func_203(sVar16, 1, 0, 1000, 10000, __LIB_32__::func_721(), 0, 0, 0);
									break;
								case 1:
									__LIB_0__::func_460(35);
									StringCopy(&Global_112029, "", 16);
									break;
								}
							}
						}
					}
				}
			}
	}
}

int func_85(int iParam0)//Position - 0x4520
{
	if (iParam0 == 2)
	{
		if (BitTest(Global_113386.f_18574[3 /*6*/], 3) && Global_112473[3 /*10*/].f_3 == 1)
		{
			return 1;
		}
	}
	else if (iParam0 == 3)
	{
		if (BitTest(Global_113386.f_18574[2 /*6*/], 3) && Global_112473[2 /*10*/].f_3 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_86(int iParam0)//Position - 0x457E
{
	if (iParam0 == 2 || iParam0 == 3)
	{
		if (BitTest(Global_113386.f_18574[2 /*6*/], 0) && BitTest(Global_113386.f_18574[3 /*6*/], 0))
		{
			if (!BitTest(Global_113386.f_18574[2 /*6*/], 3) && !BitTest(Global_113386.f_18574[3 /*6*/], 3))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_91(int iParam0)//Position - 0x472C
{
	int iVar0;
	int iVar1;
	if (!__LIB_29__::func_760(iParam0))
	{
		return 0;
	}
	iVar0 = 194;
	iVar1 = (iParam0 - 52);
	if (__LIB_0__::func_368(108) == 1)
	{
		return 1;
	}
	if (Global_113386.f_2352[iVar1 /*2*/] >= 1)
	{
		return 1;
	}
	if (BitTest(Global_113386.f_18574[iParam0 /*6*/], 3))
	{
		return 1;
	}
	return __LIB_30__::func_823((iVar0 + iVar1), 0);
}

void func_96(int iParam0, int iParam1)//Position - 0x4930
{
	__LIB_29__::func_873(iParam0, 0);
	if (iParam1 == 1)
	{
		__LIB_29__::func_872(iParam0, "B_ABI" /* GXT: Abigail */);
	}
	else if (((iParam1 == 2 || iParam1 == 3) || iParam1 == 4) || iParam1 == 7)
	{
		if ((BitTest(Global_113386.f_18574[2 /*6*/], 3) || BitTest(Global_113386.f_18574[3 /*6*/], 3)) || BitTest(Global_113386.f_18574[4 /*6*/], 3))
		{
			__LIB_29__::func_872(iParam0, "B_BAR" /* GXT: Barry */);
		}
		else
		{
			__LIB_29__::func_872(iParam0, "BLIP_66" /* GXT: Strangers and Freaks */);
			__LIB_30__::func_826(iParam0, 66);
		}
	}
	else if (iParam1 == 5 || iParam1 == 6)
	{
		__LIB_29__::func_872(iParam0, "B_STA" /* GXT: Weed Stash */);
	}
	else if (iParam1 == 8)
	{
		__LIB_29__::func_872(iParam0, "B_DRE" /* GXT: Killer */);
	}
	else if ((((((iParam1 == 10 || iParam1 == 11) || iParam1 == 12) || iParam1 == 13) || iParam1 == 14) || iParam1 == 15) || iParam1 == 16)
	{
		__LIB_29__::func_872(iParam0, "B_EPS" /* GXT: Epsilon */);
	}
	else if ((iParam1 == 18 || iParam1 == 19) || iParam1 == 20)
	{
		__LIB_29__::func_872(iParam0, "B_EXT" /* GXT: Dom */);
	}
	else if ((iParam1 == 21 || iParam1 == 22) || iParam1 == 23)
	{
		if ((BitTest(Global_113386.f_18574[21 /*6*/], 3) || BitTest(Global_113386.f_18574[22 /*6*/], 3)) || BitTest(Global_113386.f_18574[23 /*6*/], 3))
		{
			__LIB_29__::func_872(iParam0, "B_FAN" /* GXT: Mary-Ann */);
		}
		else
		{
			__LIB_29__::func_872(iParam0, "BLIP_66" /* GXT: Strangers and Freaks */);
			__LIB_30__::func_826(iParam0, 66);
		}
	}
	else if (iParam1 == 26)
	{
		__LIB_29__::func_872(iParam0, "B_HUN" /* GXT: Cletus */);
	}
	else if ((iParam1 == 28 || iParam1 == 29) || iParam1 == 30)
	{
		__LIB_29__::func_872(iParam0, "B_JOS" /* GXT: Josh */);
	}
	else if (iParam1 == 33 || iParam1 == 34)
	{
		__LIB_29__::func_872(iParam0, "B_MIN" /* GXT: Minute Men */);
	}
	else if (((iParam1 == 38 || iParam1 == 39) || iParam1 == 40) || iParam1 == 41)
	{
		__LIB_29__::func_872(iParam0, "B_CEL" /* GXT: Celebrity Item */);
	}
	else if (iParam1 == 42 || iParam1 == 43)
	{
		__LIB_29__::func_872(iParam0, "B_NIG" /* GXT: Nigel */);
	}
	else if (iParam1 == 45)
	{
		__LIB_29__::func_872(iParam0, "B_OME" /* GXT: Omega */);
	}
	else if ((iParam1 == 47 || iParam1 == 48) || iParam1 == 51)
	{
		__LIB_29__::func_872(iParam0, "B_PAP" /* GXT: Beverly */);
	}
	else if (iParam1 == 49 || iParam1 == 50)
	{
		__LIB_29__::func_872(iParam0, "B_PHO" /* GXT: Photo Opportunity */);
	}
	else if (iParam1 == 52)
	{
		__LIB_29__::func_872(iParam0, "BLIP_66" /* GXT: Strangers and Freaks */);
	}
	else if (((iParam1 == 53 || iParam1 == 54) || iParam1 == 55) || iParam1 == 56)
	{
		__LIB_29__::func_872(iParam0, "BLIP_84" /* GXT: Rampage */);
	}
	else if (((iParam1 == 59 || iParam1 == 60) || iParam1 == 61) || iParam1 == 62)
	{
		__LIB_29__::func_872(iParam0, "B_TON" /* GXT: Tonya */);
	}
	else
	{
		__LIB_29__::func_872(iParam0, "BLIP_66" /* GXT: Strangers and Freaks */);
	}
}

void func_100(int iParam0, var uParam1)//Position - 0x4DBA
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	Global_32335 = 1;
	Global_32338[iVar0 /*23*/].f_10 = uParam1;
	Global_38388 = 1;
	MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
}

void func_102(int iParam0, bool bParam1)//Position - 0x4E9E
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 28);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 28);
	}
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
	MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
}

int func_103(int iParam0)//Position - 0x4F10
{
	if (((((((iParam0 == 5 || iParam0 == 6) || iParam0 == 38) || iParam0 == 39) || iParam0 == 40) || iParam0 == 41) || iParam0 == 49) || iParam0 == 50)
	{
		return 1;
	}
	return 0;
}

int func_105(var uParam0)//Position - 0x4FF6
{
	int iVar0;
	if (*uParam0 != -1)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!iLocal_53[iVar0])
		{
			*uParam0 = iVar0;
			iLocal_53[iVar0] = 1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_121(int iParam0, int iParam1)//Position - 0x8FD8
{
	int iVar0;
	iVar0 = (__LIB_0__::func_196(__LIB_13__::func_95()) * 100 + __LIB_0__::func_195(__LIB_13__::func_95()));
	if (iParam1 > iParam0)
	{
		if (iVar0 < iParam0 || iVar0 > iParam1)
		{
			return 0;
		}
	}
	else if (iVar0 < iParam0 && iVar0 > iParam1)
	{
		return 0;
	}
	return 1;
}

int func_125(bool bParam0)//Position - 0x928E
{
	if (bParam0)
	{
		if (__LIB_0__::func_368(130) && !__LIB_0__::func_368(131))
		{
			return 1;
		}
	}
	return 0;
}

int func_128(int iParam0)//Position - 0x9329
{
	if ((iParam0 == 58 || iParam0 == 59) || iParam0 == 62)
	{
		if (((__LIB_8__::func_915(40) || __LIB_8__::func_915(41)) || __LIB_8__::func_915(43)) || __LIB_8__::func_915(47))
		{
			return 1;
		}
	}
	if (iParam0 == 24)
	{
		if (__LIB_8__::func_915(41))
		{
			return 1;
		}
	}
	return 0;
}

void func_134()//Position - 0x961A
{
	int iVar0;
	iLocal_54[0] = 243;
	iLocal_54[1] = 244;
	iLocal_54[2] = 245;
	iLocal_54[3] = 246;
	iLocal_54[4] = 247;
	iLocal_54[5] = 248;
	iLocal_54[6] = 249;
	iLocal_54[7] = 250;
	iLocal_54[8] = 251;
	iLocal_54[9] = 252;
	iLocal_54[10] = 253;
	iLocal_54[11] = 254;
	iLocal_54[12] = 255;
	iLocal_54[13] = 256;
	iLocal_54[14] = 257;
	iLocal_54[15] = 258;
	iLocal_54[16] = 259;
	iLocal_54[17] = 260;
	iLocal_54[18] = 261;
	iLocal_54[19] = 262;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iLocal_53[iVar0] = 0;
		__LIB_10__::func_604(iLocal_54[iVar0], 0, 0);
		__LIB_30__::func_827(iLocal_54[iVar0], 4);
		__LIB_30__::func_825(iLocal_54[iVar0], 8);
		__LIB_20__::func_574(iLocal_54[iVar0]);
		__LIB_29__::func_873(iLocal_54[iVar0], 0);
		__LIB_30__::func_826(iLocal_54[iVar0], 66);
		__LIB_30__::func_824(iLocal_54[iVar0]);
		iVar0++;
	}
}

void func_136()//Position - 0x978A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 63)
	{
		Global_112473[iVar0 /*10*/].f_5 = 0;
		Global_112473[iVar0 /*10*/].f_6 = 0;
		Global_112473[iVar0 /*10*/].f_4 = 0;
		Global_112473[iVar0 /*10*/].f_7 = 0;
		Global_112473[iVar0 /*10*/].f_8 = -1;
		Global_112473[iVar0 /*10*/].f_9 = -1;
		iVar0++;
	}
}

void func_137()//Position - 0x97E7
{
	func_1();
	SCRIPT::TERMINATE_THIS_THREAD();
}

