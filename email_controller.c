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
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0[122];
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		__LIB_0__::func_202();
	}
	__LIB_37__::func_698();
	func_68();
	Global_44246 = 0;
	iVar1 = __LIB_11__::func_762();
	iVar2 = __LIB_11__::func_762();
	iVar3 = 2000;
	Global_44248 = 1;
	bVar4 = true;
	while (true)
	{
		iVar5 = 0;
		if (bVar4)
		{
			if (BitTest(Global_113386.f_24986, (4 - 1)))
			{
				__LIB_17__::func_15(26);
				bVar4 = false;
			}
		}
		if (!Global_44247 && MISC::GET_GAME_TIMER() > Global_43603)
		{
			iVar5 = 0;
			while (iVar5 < 122)
			{
				if ((Global_47582[iVar5 /*46*/] && !Global_47582[iVar5 /*46*/].f_1) && !Global_47582[iVar5 /*46*/].f_45)
				{
					iVar0[iVar5] = (iVar0[iVar5] + iVar3);
					if (iVar0[iVar5] > Global_47582[iVar5 /*46*/].f_43)
					{
						if (func_34(7, 144, 2, -1, 0))
						{
							__LIB_33__::func_505(iVar5, 0);
							iVar0[iVar5] = 0;
							Global_44248 = 1;
						}
					}
				}
				SYSTEM::WAIT(0);
				iVar5++;
			}
			iVar1 = __LIB_11__::func_762();
			iVar6 = 0;
			iVar7 = 0;
			iVar8 = 0;
			func_20(iVar1, iVar2, &iVar7, &iVar7, &iVar6, &iVar7, &iVar7, &iVar7);
			if (iVar6 < 0)
			{
				iVar6 = (iVar6 * -1);
			}
			if (iVar6 > 0 && Global_20266.f_1 == 3)
			{
				iVar2 = iVar1;
				if (Global_54979 > 0)
				{
					iVar9 = Global_54979;
					iVar10 = 0;
					while (iVar9 != 0)
					{
						if ((Global_54980[iVar10 /*53*/].f_52 != 0 && iVar10 < 8) && Global_54980[iVar10 /*53*/].f_4)
						{
							Global_54980[iVar10 /*53*/].f_2 = (Global_54980[iVar10 /*53*/].f_2 - iVar6);
							bVar11 = false;
							bVar12 = false;
							bVar13 = false;
							iVar14 = 0;
							while (!bVar13)
							{
								if (Global_53557[iVar14 /*203*/].f_1 != Global_54980[iVar10 /*53*/].f_52)
								{
									iVar14++;
								}
								else
								{
									bVar12 = true;
									bVar13 = true;
								}
								if (iVar14 == 7)
								{
									bVar13 = true;
									Global_54980[iVar10 /*53*/].f_52 = 0;
									bVar11 = true;
								}
							}
							if (!bVar12)
							{
								bVar11 = true;
								Global_54980[iVar10 /*53*/].f_4 = 0;
							}
							else if (Global_54980[iVar10 /*53*/].f_2 < 1)
							{
								if (func_34(7, 145, 2, -1, 0))
								{
									bVar15 = false;
									if (Global_54980[iVar10 /*53*/].f_5 || Global_54980[iVar10 /*53*/].f_10 > 0)
									{
										bVar15 = true;
									}
									if (__LIB_17__::func_17(Global_54980[iVar10 /*53*/], Global_54980[iVar10 /*53*/].f_1, bVar15))
									{
										bVar16 = true;
										if (Global_54980[iVar10 /*53*/].f_10 > 0)
										{
											bVar16 = false;
										}
										if (Global_54980[iVar10 /*53*/].f_5)
										{
											__LIB_17__::func_29(Global_54980[iVar10 /*53*/], &(Global_54980[iVar10 /*53*/].f_6), bVar16);
										}
										if (Global_54980[iVar10 /*53*/].f_10 > 0)
										{
											iVar8 = 0;
											iVar8 = 0;
											while (iVar8 < Global_54980[iVar10 /*53*/].f_10)
											{
												__LIB_17__::func_10(Global_54980[iVar10 /*53*/], &(Global_54980[iVar10 /*53*/].f_11[iVar8 /*4*/]));
												iVar8++;
											}
										}
										if (bVar15 && !bVar16)
										{
											__LIB_17__::func_16(Global_54980[iVar10 /*53*/]);
										}
										__LIB_17__::func_15(Global_54980[iVar10 /*53*/]);
									}
									Global_54980[iVar10 /*53*/].f_52 = 0;
									Global_54980[iVar10 /*53*/].f_5 = 0;
									Global_54980[iVar10 /*53*/].f_2 = 0;
									bVar11 = true;
									Global_54980[iVar10 /*53*/].f_4 = 0;
								}
							}
							if (bVar11)
							{
								Global_54979 = (Global_54979 - 1);
							}
							iVar9 = (iVar9 - 1);
						}
						iVar10++;
						if (iVar10 == 8)
						{
							iVar9 = 0;
						}
						SYSTEM::WAIT(0);
					}
				}
			}
		}
		SYSTEM::WAIT(iVar3);
		Global_44249 = 0;
		Global_44250 = 0;
		Global_44251 = 0;
		iVar17 = Global_53195[0 /*120*/];
		if (iVar17 > 16)
		{
			iVar17 = 16;
		}
		iVar5 = 0;
		while (iVar5 < iVar17)
		{
			if (!Global_53195[0 /*120*/].f_69[iVar5])
			{
				Global_44249++;
			}
			iVar5++;
		}
		iVar17 = Global_53195[1 /*120*/];
		if (iVar17 > 16)
		{
			iVar17 = 16;
		}
		iVar5 = 0;
		while (iVar5 < iVar17)
		{
			if (!Global_53195[1 /*120*/].f_69[iVar5])
			{
				Global_44250++;
			}
			iVar5++;
		}
		iVar17 = Global_53195[2 /*120*/];
		if (iVar17 > 16)
		{
			iVar17 = 16;
		}
		iVar5 = 0;
		while (iVar5 < iVar17)
		{
			if (!Global_53195[2 /*120*/].f_69[iVar5])
			{
				Global_44251++;
			}
			iVar5++;
		}
		SYSTEM::WAIT(iVar3);
	}
}

void func_20(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1CDB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (__LIB_11__::func_761(iParam0, iParam1))
	{
		iVar0 = __LIB_0__::func_553(iParam1);
		iVar1 = __LIB_0__::func_214(iParam0);
		iVar2 = (__LIB_0__::func_214(iParam0) - __LIB_0__::func_214(iParam1));
		iVar3 = (__LIB_0__::func_553(iParam0) - __LIB_0__::func_553(iParam1));
		iVar4 = (__LIB_0__::func_614(iParam0) - __LIB_0__::func_614(iParam1));
		iVar5 = (__LIB_0__::func_199(iParam0) - __LIB_0__::func_199(iParam1));
		iVar6 = (__LIB_0__::func_198(iParam0) - __LIB_0__::func_198(iParam1));
		iVar7 = (__LIB_0__::func_615(iParam0) - __LIB_0__::func_615(iParam1));
	}
	else
	{
		iVar0 = __LIB_0__::func_553(iParam0);
		iVar1 = __LIB_0__::func_214(iParam1);
		iVar2 = (__LIB_0__::func_214(iParam1) - __LIB_0__::func_214(iParam0));
		iVar3 = (__LIB_0__::func_553(iParam1) - __LIB_0__::func_553(iParam0));
		iVar4 = (__LIB_0__::func_614(iParam1) - __LIB_0__::func_614(iParam0));
		iVar5 = (__LIB_0__::func_199(iParam1) - __LIB_0__::func_199(iParam0));
		iVar6 = (__LIB_0__::func_198(iParam1) - __LIB_0__::func_198(iParam0));
		iVar7 = (__LIB_0__::func_615(iParam1) - __LIB_0__::func_615(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + __LIB_0__::func_139(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(__LIB_1__::func_9(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

int func_34(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x241A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[16];
	int iVar6[2];
	int iVar7;
	int iVar8;
	int iVar9;
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (__LIB_1__::func_861())
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
		{
			return 0;
		}
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 0;
	}
	if (__LIB_13__::func_94() && iParam2 < 4)
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (__LIB_4__::func_962(PLAYER::PLAYER_PED_ID()))
		{
			if (BitTest(iParam0, __LIB_0__::func_683()) && !BitTest(iParam4, 19))
			{
				return 0;
			}
		}
	}
	if (Global_78317)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (Global_75485)
	{
		return 0;
	}
	if (Global_96448)
	{
		return 0;
	}
	if ((__LIB_0__::func_201() || (Global_23011.f_4 && Global_23011.f_104 == 4)) || __LIB_0__::func_217())
	{
		return 0;
	}
	if (BitTest(iParam4, 18))
	{
		if (!BitTest(iParam0, __LIB_0__::func_683()))
		{
			return 0;
		}
	}
	iVar0 = 1;
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	else if (iParam2 != 5)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 1)
		{
			return 0;
		}
		if (MISC::IS_AUTO_SAVE_IN_PROGRESS())
		{
			return 0;
		}
		if (Global_97369)
		{
			return 0;
		}
		if (__LIB_16__::func_606(50f, 1) != -1)
		{
			return 0;
		}
		if (((((iParam1 == 17 || iParam1 == 19) || iParam1 == 14) || iParam1 == 0) || iParam1 == 1) || iParam1 == 2)
		{
			if (BitTest(iParam0, __LIB_0__::func_683()))
			{
				iVar1 = __LIB_14__::func_791(__LIB_0__::func_683());
				iVar2 = __LIB_14__::func_791(iParam1);
				iVar3 = __LIB_13__::func_95(iVar1, iVar2);
				if (iVar3 < 9)
				{
					if (Global_113386.f_18103.f_175[iVar3 /*19*/].f_8 == 1 || Global_113386.f_18103.f_175[iVar3 /*19*/].f_8 == 2)
					{
						if (__LIB_0__::func_702(&(Global_113386.f_18103.f_175[iVar3 /*19*/].f_5)))
						{
							if (__LIB_3__::func_108(&(Global_113386.f_18103.f_175[iVar3 /*19*/].f_5)) < 30f)
							{
								return 0;
							}
						}
					}
				}
			}
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 2)
	{
		return 0;
	}
	if (__LIB_0__::func_691())
	{
		return 0;
	}
	if (BitTest(iParam4, 3))
	{
		if (Global_112433)
		{
			return 0;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				return 0;
			}
		}
		if (Global_112096.f_19 != 0)
		{
			return 0;
		}
		if (Global_43052 == 5)
		{
			return 0;
		}
	}
	if (iParam3 != -1)
	{
		if (func_36(PLAYER::PLAYER_PED_ID(), iParam3, 0))
		{
			return 0;
		}
	}
	iVar4 = __LIB_0__::func_683();
	if (__LIB_0__::func_43(iVar4))
	{
		PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		switch (iParam1)
		{
			case 4:
				switch (iVar4)
				{
					case 0:
						iVar6[0] = __LIB_0__::func_154(1);
						iVar6[1] = __LIB_0__::func_154(2);
						break;
					case 1:
						iVar6[0] = __LIB_0__::func_154(0);
						iVar6[1] = __LIB_0__::func_154(2);
						break;
					case 2:
						iVar6[0] = __LIB_0__::func_154(0);
						iVar6[1] = __LIB_0__::func_154(1);
						break;
				}
				break;
			case 5:
				iVar6[0] = __LIB_0__::func_154(1);
				iVar6[1] = __LIB_0__::func_154(2);
				break;
			case 6:
				iVar6[0] = __LIB_2__::func_910(12);
				iVar6[1] = __LIB_0__::func_154(1);
				break;
			case 7:
				iVar6[0] = __LIB_2__::func_910(12);
				iVar6[1] = __LIB_0__::func_154(0);
				break;
			case 8:
				iVar6[0] = __LIB_0__::func_154(0);
				iVar6[1] = __LIB_0__::func_154(1);
				break;
			case 9:
				iVar6[0] = __LIB_0__::func_154(0);
				iVar6[1] = __LIB_0__::func_154(2);
				break;
			case 10:
				iVar6[0] = __LIB_2__::func_910(23);
				iVar6[1] = __LIB_0__::func_154(0);
				break;
			case 11:
				iVar6[0] = __LIB_2__::func_910(23);
				iVar6[1] = __LIB_0__::func_154(0);
				break;
			default:
				if (__LIB_0__::func_43(iParam1))
				{
					iVar6[0] = __LIB_0__::func_154(iParam1);
				}
				else
				{
					iVar6[0] = __LIB_2__::func_910(iParam1);
				}
				iVar6[1] = 0;
				break;
		}
		iVar7 = 0;
		while (iVar7 < 2)
		{
			if (iVar6[iVar7] != 0)
			{
				iVar8 = 0;
				while (iVar8 < 16)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar5[iVar8]))
					{
						if (ENTITY::GET_ENTITY_MODEL(uVar5[iVar8]) == iVar6[iVar7])
						{
							if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar8], false))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uVar5[iVar8], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 6400f)
									{
										return 0;
									}
								}
							}
							else
							{
								return 0;
							}
						}
					}
					iVar8++;
				}
				iVar9 = 0;
				switch (iVar6[iVar7])
				{
					case joaat("Player_Zero"):
						iVar9 = Global_97919[0];
						break;
					case joaat("Player_One"):
						iVar9 = Global_97919[1];
						break;
					case joaat("Player_Two"):
						iVar9 = Global_97919[2];
						break;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar9))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar9, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 6400f)
						{
							return 0;
						}
					}
				}
				switch (iVar6[iVar7])
				{
					case joaat("Player_Zero"):
						iVar9 = Global_100366[0];
						break;
					case joaat("Player_One"):
						iVar9 = Global_100366[1];
						break;
					case joaat("Player_Two"):
						iVar9 = Global_100366[2];
						break;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar9))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar9, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 6400f)
						{
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_36(int iParam0, int iParam1, float fParam2)//Position - 0x2A2C
{
	struct<5> Var0;
	float fVar1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { Global_43053[iParam1 /*5*/] };
		fVar1 = Var0.f_3;
		if (fParam2 > 0f)
		{
			fVar1 = fParam2;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), Var0, true) < fVar1)
		{
			return 1;
		}
		else if (Var0.f_4 != -1)
		{
			return func_36(iParam0, Var0.f_4, fParam2);
		}
	}
	return 0;
}

void func_68()//Position - 0x4C32
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_53195[iVar0 /*120*/] = Global_113386.f_21037[iVar0 /*103*/];
		iVar1 = 0;
		while (iVar1 < 16)
		{
			Global_53195[iVar0 /*120*/].f_1[iVar1] = Global_113386.f_21037[iVar0 /*103*/].f_1[iVar1];
			Global_53195[iVar0 /*120*/].f_18[iVar1] = Global_113386.f_21037[iVar0 /*103*/].f_18[iVar1];
			Global_53195[iVar0 /*120*/].f_35[iVar1] = Global_113386.f_21037[iVar0 /*103*/].f_35[iVar1];
			Global_53195[iVar0 /*120*/].f_52[iVar1] = Global_113386.f_21037[iVar0 /*103*/].f_52[iVar1];
			Global_53195[iVar0 /*120*/].f_69[iVar1] = Global_113386.f_21037[iVar0 /*103*/].f_69[iVar1];
			Global_53195[iVar0 /*120*/].f_86[iVar1] = Global_113386.f_21037[iVar0 /*103*/].f_86[iVar1];
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_53557[iVar0 /*203*/].f_2 = Global_113386.f_21037.f_311[iVar0 /*203*/];
		Global_53557[iVar0 /*203*/] = Global_113386.f_21037.f_311[iVar0 /*203*/].f_2;
		Global_53557[iVar0 /*203*/].f_3 = Global_113386.f_21037.f_311[iVar0 /*203*/].f_3;
		Global_53557[iVar0 /*203*/].f_1 = Global_113386.f_21037.f_311[iVar0 /*203*/].f_1;
		Global_53557[iVar0 /*203*/].f_9 = Global_113386.f_21037.f_311[iVar0 /*203*/].f_9;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_53557[iVar0 /*203*/].f_4[iVar1] = Global_113386.f_21037.f_311[iVar0 /*203*/].f_4[iVar1];
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_53557[iVar0 /*203*/].f_10[iVar1 /*48*/] = Global_113386.f_21037.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/];
			Global_53557[iVar0 /*203*/].f_10[iVar1 /*48*/].f_1 = Global_113386.f_21037.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_1;
			Global_53557[iVar0 /*203*/].f_10[iVar1 /*48*/].f_2 = { Global_113386.f_21037.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_2 };
			Global_53557[iVar0 /*203*/].f_10[iVar1 /*48*/].f_6 = Global_113386.f_21037.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_6;
			iVar2 = 0;
			while (iVar2 < 10)
			{
				Global_53557[iVar0 /*203*/].f_10[iVar1 /*48*/].f_7[iVar2 /*4*/] = { Global_113386.f_21037.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_7[iVar2 /*4*/] };
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 122)
	{
		Global_47582[iVar0 /*46*/] = Global_113386.f_21037.f_1733[iVar0 /*14*/];
		Global_47582[iVar0 /*46*/].f_1 = Global_113386.f_21037.f_1733[iVar0 /*14*/].f_1;
		Global_47582[iVar0 /*46*/].f_45 = Global_113386.f_21037.f_1733[iVar0 /*14*/].f_2;
		Global_47582[iVar0 /*46*/].f_31 = Global_113386.f_21037.f_1733[iVar0 /*14*/].f_3;
		iVar1 = 0;
		while (iVar1 < 9)
		{
			if (Global_113386.f_21037.f_1733[iVar0 /*14*/].f_4[iVar1] > 0)
			{
				Global_47582[iVar0 /*46*/].f_32[iVar1] = (Global_113386.f_21037.f_1733[iVar0 /*14*/].f_4[iVar1] - 1);
				Global_47582[iVar0 /*46*/].f_42++;
			}
			iVar1++;
		}
		iVar0++;
	}
	Global_54979 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_54980[iVar0 /*53*/] = Global_113386.f_21037.f_3442[iVar0 /*53*/];
		Global_54980[iVar0 /*53*/].f_1 = Global_113386.f_21037.f_3442[iVar0 /*53*/].f_1;
		Global_54980[iVar0 /*53*/].f_2 = Global_113386.f_21037.f_3442[iVar0 /*53*/].f_2;
		Global_54980[iVar0 /*53*/].f_5 = Global_113386.f_21037.f_3442[iVar0 /*53*/].f_5;
		Global_54980[iVar0 /*53*/].f_6 = { Global_113386.f_21037.f_3442[iVar0 /*53*/].f_6 };
		Global_54980[iVar0 /*53*/].f_10 = Global_113386.f_21037.f_3442[iVar0 /*53*/].f_10;
		iVar1 = 0;
		while (iVar1 < 10)
		{
			Global_54980[iVar0 /*53*/].f_11[iVar1 /*4*/] = { Global_113386.f_21037.f_3442[iVar0 /*53*/].f_11[iVar1 /*4*/] };
			iVar1++;
		}
		Global_54980[iVar0 /*53*/].f_52 = Global_113386.f_21037.f_3442[iVar0 /*53*/].f_52;
		if (Global_54980[iVar0 /*53*/].f_52 != 0)
		{
			Global_54979++;
		}
		iVar0++;
	}
}

