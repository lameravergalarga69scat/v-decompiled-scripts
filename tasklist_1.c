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
	var uLocal_18[3] = { 0, 0, 0 };
	int iLocal_19 = 0;
	var uLocal_20[3] = { 0, 0, 0 };
	int iLocal_21 = 0;
	int iLocal_22 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		__LIB_0__::func_202();
	}
	while (true)
	{
		SYSTEM::WAIT(250);
		switch (iLocal_21)
		{
			case 0:
				if (uLocal_18[0])
				{
					StringCopy(&(Global_22724[1 /*42*/]), "CL_C1A" /* GXT: Killer photo */, 16);
					StringCopy(&(Global_22724[1 /*42*/].f_4), "CL_C1A_BR" /* GXT: Kill some gang members and take a photo of the corpses. */, 16);
					Global_22724[1 /*42*/].f_8 = 0;
					Global_22724[1 /*42*/].f_9 = 2;
					StringCopy(&(Global_22724[1 /*42*/].f_10[1 /*4*/]), "CL_C1A_J1" /* GXT: Gang members killed ~1~/~1~ */, 16);
					Global_22724[1 /*42*/].f_37[1] = 0;
					Global_22724[1 /*42*/].f_32[1] = 3;
					Global_22724[1 /*42*/].f_27[1] = 0;
					StringCopy(&(Global_22724[1 /*42*/].f_10[2 /*4*/]), "CL_C1A_J2" /* GXT: Photos taken of dead gang members ~1~/~1~ */, 16);
					Global_22724[1 /*42*/].f_37[2] = 0;
					Global_22724[1 /*42*/].f_32[2] = 3;
					Global_22724[1 /*42*/].f_27[2] = 0;
					iLocal_19 = 0;
					while (iLocal_19 < Global_22724[1 /*42*/].f_32[1])
					{
						Global_32014[iLocal_19] = 0;
						Global_32010[iLocal_19] = 0;
						iLocal_19++;
					}
					__LIB_43__::func_569(1, 1, 1, 1);
					__LIB_39__::func_108("CL_ADDED" /* GXT: Job ~a~ added to phone checklist */, "CL_C1A" /* GXT: Killer photo */, 3000, 1);
					iLocal_21 = 1;
				}
				break;
			case 1:
				iLocal_19 = 0;
				while (iLocal_19 < Global_22724[1 /*42*/].f_32[1])
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_20[iLocal_19]))
						{
							if (PED::IS_PED_INJURED(uLocal_20[iLocal_19]))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_20[iLocal_19], PLAYER::PLAYER_PED_ID(), true))
								{
									if (!Global_32010[iLocal_19])
									{
										Global_22724[1 /*42*/].f_27[1]++;
										func_2("CL_C1A_J1" /* GXT: Gang members killed ~1~/~1~ */, Global_22724[1 /*42*/].f_27[1], Global_22724[1 /*42*/].f_32[1], 2000, 1);
										Global_32010[iLocal_19] = 1;
									}
									if (ENTITY::IS_ENTITY_DEAD(uLocal_20[iLocal_19], false))
									{
										if (!Global_32014[iLocal_19])
										{
											if (MOBILE::CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK(uLocal_20[iLocal_19]) && __LIB_16__::func_926())
											{
												Global_22724[1 /*42*/].f_27[2]++;
												func_2("CL_C1A_J2" /* GXT: Photos taken of dead gang members ~1~/~1~ */, Global_22724[1 /*42*/].f_27[2], Global_22724[1 /*42*/].f_32[2], 2000, 1);
												Global_32014[iLocal_19] = 1;
											}
										}
									}
									if (Global_22724[1 /*42*/].f_27[1] >= Global_22724[1 /*42*/].f_32[1] && Global_22724[1 /*42*/].f_27[2] >= Global_22724[1 /*42*/].f_32[2])
									{
										__LIB_39__::func_108("CL_COMPLETE" /* GXT: ~a~ job complete. */, "CL_C1A" /* GXT: Killer photo */, 3000, 1);
										Global_22724[1 /*42*/].f_8 = 1;
										iLocal_21 = 2;
									}
								}
							}
						}
					}
					iLocal_19++;
				}
				break;
			case 2:
				break;
		}
		SYSTEM::WAIT(250);
		switch (iLocal_22)
		{
			case 0:
				if (uLocal_18[1])
				{
					StringCopy(&(Global_22724[2 /*42*/]), "CL_C1B" /* GXT: Bike Pro */, 16);
					StringCopy(&(Global_22724[2 /*42*/].f_4), "CL_C1B_BR" /* GXT: Perform various bike stunts. */, 16);
					Global_22724[2 /*42*/].f_8 = 0;
					Global_22724[2 /*42*/].f_9 = 3;
					StringCopy(&(Global_22724[2 /*42*/].f_10[1 /*4*/]), "CL_C1B_J1" /* GXT: Hold a wheelie for 200m without crashing. */, 16);
					Global_22724[2 /*42*/].f_37[1] = 0;
					Global_22724[2 /*42*/].f_32[1] = -1;
					Global_22724[2 /*42*/].f_27[1] = -1;
					StringCopy(&(Global_22724[2 /*42*/].f_10[2 /*4*/]), "CL_C1B_J2" /* GXT: Successfully perform a stoppie. */, 16);
					Global_22724[2 /*42*/].f_37[2] = 0;
					Global_22724[2 /*42*/].f_32[2] = -1;
					Global_22724[2 /*42*/].f_27[2] = -1;
					StringCopy(&(Global_22724[2 /*42*/].f_10[3 /*4*/]), "CL_C1B_J3" /* GXT: Perform a 360 flip on a bike. */, 16);
					Global_22724[2 /*42*/].f_37[3] = 0;
					Global_22724[2 /*42*/].f_32[3] = -1;
					Global_22724[2 /*42*/].f_27[3] = -1;
					__LIB_43__::func_569(136, 2, 1, 1);
					__LIB_39__::func_108("CL_ADDED" /* GXT: Job ~a~ added to phone checklist */, "CL_C1B" /* GXT: Bike Pro */, 3000, 1);
					iLocal_22 = 1;
				}
				break;
			case 1:
				if (!Global_22724[2 /*42*/].f_37[1])
				{
				}
				if (!Global_22724[2 /*42*/].f_37[2])
				{
				}
				if (!Global_22724[2 /*42*/].f_37[3])
				{
				}
				if ((Global_22724[2 /*42*/].f_37[1] == 1 && Global_22724[2 /*42*/].f_37[2] == 1) && Global_22724[2 /*42*/].f_37[3] == 1)
				{
					__LIB_39__::func_108("CL_COMPLETE" /* GXT: ~a~ job complete. */, "CL_C1B" /* GXT: Bike Pro */, 3000, 1);
					Global_22724[2 /*42*/].f_8 = 1;
					iLocal_22 = 2;
				}
				break;
			case 2:
				break;
		}
	}
}

void func_2(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x44E
{
	iParam4 = iParam4;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_PRINT(iParam3, false);
}

