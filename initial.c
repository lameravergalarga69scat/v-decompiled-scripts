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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = 202;
	iLocal_47 = 201;
	iLocal_48 = 24;
	iLocal_49 = 202;
	iLocal_50 = 25;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
	func_219();
	func_84();
	func_77();
	func_62();
	func_56();
	if (Global_1)
	{
		if (!Global_78320 || Global_2)
		{
			func_43();
			func_39();
			func_36();
			func_35();
		}
	}
	Global_2 = 0;
	if (MISC::GET_INDEX_OF_CURRENT_LEVEL() != 5)
	{
		func_34();
	}
	func_32();
	__LIB_29__.func_727();
	func_7();
	func_6();
	func_2();
	__LIB_0__.func_371();
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_2()//Position - 0x108
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!__LIB_0__.func_176(86))
	{
		__LIB_9__.func_989(4, 0, 0);
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_113386.f_1.f_12[1 /*6*/][iVar0] = 0;
			Global_113386.f_1.f_12[2 /*6*/][iVar0] = 0;
			iVar0++;
		}
		__LIB_9__.func_989(5, 0, 0);
		__LIB_12__.func_177(7, 0);
		Global_113386.f_1.f_120[0] = 0;
	}
	if (!__LIB_0__.func_176(71))
	{
		__LIB_9__.func_989(4, 1, 0);
		iVar1 = 0;
		while (iVar1 < 5)
		{
			Global_113386.f_1.f_12[3 /*6*/][iVar1] = 0;
			Global_113386.f_1.f_12[4 /*6*/][iVar1] = 0;
			iVar1++;
		}
		__LIB_9__.func_989(5, 1, 0);
		__LIB_12__.func_177(8, 0);
		Global_113386.f_1.f_120[1] = 0;
	}
	if (!__LIB_0__.func_176(91))
	{
		__LIB_9__.func_989(4, 2, 0);
		iVar2 = 0;
		while (iVar2 < 5)
		{
			Global_113386.f_1.f_12[5 /*6*/][iVar2] = 0;
			iVar2++;
		}
		Global_113386.f_1.f_120[2] = 0;
	}
	if (!__LIB_0__.func_176(67))
	{
		__LIB_9__.func_989(4, 3, 0);
		iVar3 = 0;
		while (iVar3 < 5)
		{
			Global_113386.f_1.f_12[6 /*6*/][iVar3] = 0;
			Global_113386.f_1.f_12[7 /*6*/][iVar3] = 0;
			iVar3++;
		}
		__LIB_9__.func_989(5, 3, 0);
		__LIB_12__.func_177(10, 0);
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[3]), 2);
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[3]), 3);
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[3]), 4);
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[3]), 5);
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[3]), 6);
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[3]), 7);
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[3]), 8);
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[3]), 9);
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[3]), 10);
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[3]), 11);
	}
	if (!__LIB_0__.func_176(77))
	{
		__LIB_9__.func_989(4, 4, 0);
		iVar4 = 0;
		while (iVar4 < 5)
		{
			Global_113386.f_1.f_12[9 /*6*/][iVar4] = 0;
			Global_113386.f_1.f_12[8 /*6*/][iVar4] = 0;
			iVar4++;
		}
		__LIB_9__.func_989(5, 4, 0);
		__LIB_12__.func_177(11, 0);
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[4]), 2);
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[4]), 3);
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[4]), 4);
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[4]), 5);
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[4]), 6);
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[4]), 7);
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[4]), 8);
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[4]), 9);
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[4]), 10);
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[4]), 11);
	}
}

void func_6()//Position - 0x4E7
{
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(8))
	{
		HUD::REQUEST_ADDITIONAL_TEXT("MISHSTA", 8);
	}
}

void func_7()//Position - 0x501
{
	func_30();
	func_29();
	func_24();
	func_23();
	func_22();
	func_21();
	func_20();
	func_19();
	func_15();
	func_14();
	func_12();
	func_11(19, 65);
	func_11(1, 67);
	func_11(2, 68);
	func_11(5, 76);
	func_11(9, 94);
	func_11(13, 96);
	func_8();
	func_11(13, 98);
	func_11(13, 99);
	func_11(13, 100);
	func_11(13, 101);
	func_11(13, 102);
	func_11(13, 103);
	func_11(18, 110);
	func_11(18, 111);
	Global_38391 = 1;
}

void func_8()//Position - 0x59F
{
	if (__LIB_0__.func_176(21) && !__LIB_0__.func_176(22))
	{
		__LIB_10__.func_604(97, 0, 0);
	}
	else
	{
		__LIB_10__.func_604(97, __LIB_29__.func_726(13), 0);
	}
}

void func_11(int iParam0, int iParam1)//Position - 0x6EC
{
	__LIB_10__.func_604(iParam1, __LIB_29__.func_726(iParam0), 0);
}

void func_12()//Position - 0x701
{
	bool bVar0;
	__LIB_10__.func_604(107, __LIB_29__.func_726(17), 0);
	__LIB_10__.func_604(108, Global_113386.f_20011.f_8 >= 1, 0);
	__LIB_11__.func_504(107, Global_113386.f_20011.f_8 > 0);
	__LIB_11__.func_504(108, Global_113386.f_20011.f_8 > 1);
	if (Global_113386.f_9085.f_99.f_58[130] && !Global_113386.f_9085.f_99.f_58[131])
	{
		__LIB_10__.func_604(109, 0, 0);
	}
	else
	{
		__LIB_10__.func_604(109, Global_113386.f_20011.f_8 >= 2, 0);
		bVar0 = (Global_113386.f_20011[2] <= 3 && Global_113386.f_20011[2] != 0);
		__LIB_11__.func_504(109, bVar0);
	}
}

void func_14()//Position - 0x83A
{
	__LIB_10__.func_604(105, __LIB_29__.func_726(15), 0);
	__LIB_10__.func_604(106, __LIB_29__.func_726(16), 0);
}

void func_15()//Position - 0x85A
{
	if ((__LIB_0__.func_109() || __LIB_0__.func_109()) || __LIB_0__.func_114())
	{
		func_11(10, 95);
	}
	else
	{
		__LIB_10__.func_604(95, 0, 0);
	}
}

void func_19()//Position - 0x8AA
{
	__LIB_10__.func_604(86, BitTest(Global_113386.f_24979.f_1, 0), 0);
	__LIB_10__.func_604(87, BitTest(Global_113386.f_24979.f_1, 1), 0);
	__LIB_10__.func_604(88, BitTest(Global_113386.f_24979.f_1, 2), 0);
	__LIB_10__.func_604(89, BitTest(Global_113386.f_24979.f_1, 3), 0);
	__LIB_10__.func_604(90, BitTest(Global_113386.f_24979.f_1, 4), 0);
	if (BitTest(Global_113386.f_24979.f_2, 0))
	{
		__LIB_11__.func_504(86, 1);
	}
	if (BitTest(Global_113386.f_24979.f_2, 1))
	{
		__LIB_11__.func_504(87, 1);
	}
	if (BitTest(Global_113386.f_24979.f_2, 2))
	{
		__LIB_11__.func_504(88, 1);
	}
	if (BitTest(Global_113386.f_24979.f_2, 3))
	{
		__LIB_11__.func_504(89, 1);
	}
	if (BitTest(Global_113386.f_24979.f_2, 4))
	{
		__LIB_11__.func_504(90, 1);
	}
}

void func_20()//Position - 0x975
{
	__LIB_10__.func_604(82, __LIB_29__.func_726(7), 0);
	__LIB_10__.func_604(83, __LIB_29__.func_726(7), 0);
	__LIB_10__.func_604(84, __LIB_29__.func_726(7), 0);
	__LIB_10__.func_604(85, __LIB_29__.func_726(7), 0);
	if (BitTest(Global_113386.f_24976.f_1, 0))
	{
		__LIB_11__.func_504(82, 1);
	}
	if (BitTest(Global_113386.f_24976.f_1, 1))
	{
		__LIB_11__.func_504(83, 1);
	}
	if (BitTest(Global_113386.f_24976.f_1, 2))
	{
		__LIB_11__.func_504(84, 1);
	}
	if (BitTest(Global_113386.f_24976.f_1, 3))
	{
		__LIB_11__.func_504(85, 1);
	}
}

void func_21()//Position - 0xA01
{
	__LIB_10__.func_604(70, __LIB_29__.func_726(4), 0);
	__LIB_11__.func_504(70, (Global_113386.f_19016.f_2[0] <= 3 && Global_113386.f_19016.f_2[0] > 0));
	__LIB_10__.func_604(71, Global_113386.f_19016.f_1 >= 1, 0);
	__LIB_11__.func_504(71, (Global_113386.f_19016.f_2[1] <= 3 && Global_113386.f_19016.f_2[1] > 0));
	__LIB_10__.func_604(72, Global_113386.f_19016.f_1 >= 2, 0);
	__LIB_11__.func_504(72, (Global_113386.f_19016.f_2[2] <= 3 && Global_113386.f_19016.f_2[2] > 0));
	__LIB_10__.func_604(73, Global_113386.f_19016.f_1 >= 3, 0);
	__LIB_11__.func_504(73, (Global_113386.f_19016.f_2[3] <= 3 && Global_113386.f_19016.f_2[3] > 0));
	__LIB_10__.func_604(74, Global_113386.f_19016.f_1 >= 4, 0);
	__LIB_11__.func_504(74, (Global_113386.f_19016.f_2[4] <= 3 && Global_113386.f_19016.f_2[4] > 0));
	__LIB_10__.func_604(75, Global_113386.f_19016.f_1 >= 5, 0);
	__LIB_11__.func_504(75, (Global_113386.f_19016.f_2[5] <= 3 && Global_113386.f_19016.f_2[5] > 0));
}

void func_22()//Position - 0xB59
{
	__LIB_10__.func_604(69, __LIB_29__.func_726(3), 0);
}

void func_23()//Position - 0xB6D
{
	int iVar0;
	__LIB_10__.func_604(125, __LIB_29__.func_726(0), 0);
	__LIB_10__.func_604(126, __LIB_29__.func_726(0), 0);
	__LIB_10__.func_604(127, __LIB_29__.func_726(0), 0);
	__LIB_10__.func_604(128, __LIB_29__.func_726(0), 0);
	__LIB_10__.func_604(129, (__LIB_29__.func_726(0) && !Global_112473[19 /*10*/].f_1), 0);
	__LIB_10__.func_604(130, __LIB_29__.func_726(0), 0);
	__LIB_10__.func_604(131, __LIB_29__.func_726(0), 0);
	__LIB_10__.func_604(132, (__LIB_29__.func_726(0) && (!__LIB_0__.func_176(16) || __LIB_0__.func_176(65))), 0);
	__LIB_10__.func_604(133, __LIB_29__.func_726(0), 0);
	__LIB_10__.func_604(134, __LIB_29__.func_726(0), 0);
	__LIB_10__.func_604(135, __LIB_29__.func_726(0), 0);
	__LIB_10__.func_604(136, __LIB_29__.func_726(0), 0);
	__LIB_10__.func_604(137, __LIB_29__.func_726(0), 0);
	iVar0 = 125;
	if (BitTest(Global_113386.f_18967.f_1, (125 - iVar0)))
	{
		__LIB_11__.func_504(125, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (126 - iVar0)))
	{
		__LIB_11__.func_504(126, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (127 - iVar0)))
	{
		__LIB_11__.func_504(127, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (128 - iVar0)))
	{
		__LIB_11__.func_504(128, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (129 - iVar0)))
	{
		__LIB_11__.func_504(129, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (130 - iVar0)))
	{
		__LIB_11__.func_504(130, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (131 - iVar0)))
	{
		__LIB_11__.func_504(131, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (132 - iVar0)))
	{
		__LIB_11__.func_504(132, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (133 - iVar0)))
	{
		__LIB_11__.func_504(133, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (134 - iVar0)))
	{
		__LIB_11__.func_504(134, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (135 - iVar0)))
	{
		__LIB_11__.func_504(135, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (136 - iVar0)))
	{
		__LIB_11__.func_504(136, 1);
	}
	if (BitTest(Global_113386.f_18967.f_1, (137 - iVar0)))
	{
		__LIB_11__.func_504(137, 1);
	}
}

void func_24()//Position - 0xD82
{
	if (__LIB_0__.func_176(0) == 1)
	{
		__LIB_10__.func_604(160, 1, 0);
		__LIB_10__.func_604(161, 1, 0);
		__LIB_10__.func_604(156, 1, 0);
		__LIB_10__.func_604(157, 1, 0);
		__LIB_10__.func_604(158, 1, 0);
		__LIB_20__.func_576(158);
		__LIB_10__.func_604(159, 1, 0);
		__LIB_20__.func_576(159);
	}
}

void func_29()//Position - 0xF9C
{
	if (__LIB_0__.func_176(0) == 1)
	{
		__LIB_10__.func_604(112, 1, 0);
		__LIB_10__.func_604(113, 1, 0);
		__LIB_10__.func_604(114, 1, 0);
	}
}

void func_30()//Position - 0xFC5
{
	if (Global_113386.f_9085.f_99.f_58[63])
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("chop")) == 0)
		{
			if (Global_113386.f_9085.f_99.f_58[126])
			{
				__LIB_10__.func_604(139, 1, 0);
			}
			else
			{
				__LIB_10__.func_604(138, 1, 0);
			}
		}
	}
}

void func_32()//Position - 0x1151
{
	func_33("heist_ctrl_agency", joaat("heist_ctrl_agency"), 2050, 0);
	func_33("heist_ctrl_docks", joaat("heist_ctrl_docks"), 2050, 1);
	func_33("heist_ctrl_finale", joaat("heist_ctrl_finale"), 2050, 2);
	func_33("heist_ctrl_jewel", joaat("heist_ctrl_jewel"), 2050, 3);
	func_33("heist_ctrl_rural", joaat("heist_ctrl_rural"), 2050, 5);
	func_33("epsCars", joaat("epscars"), 1424, 6);
	func_33("epsDesert", joaat("epsdesert"), 1424, 7);
	func_33("epsRobes", joaat("epsrobes"), 1424, 8);
	func_33("epsilonTract", joaat("epsilontract"), 1424, 9);
	func_33("ambient_MrsPhilips", joaat("ambient_mrsphilips"), 1424, 10);
	func_33("forSaleSigns", joaat("forsalesigns"), 1424, 11);
	func_33("letterScraps", joaat("letterscraps"), 1424, 12);
	func_33("ambient_Sonar", joaat("ambient_sonar"), 1424, 13);
	func_33("spaceshipParts", joaat("spaceshipparts"), 1424, 14);
	func_33("controller_towing", joaat("controller_towing"), 1424, 15);
	func_33("controller_Taxi", joaat("controller_taxi"), 1424, 16);
	func_33("controller_Trafficking", joaat("controller_trafficking"), 1424, 17);
	func_33("exile_city_denial", joaat("exile_city_denial"), 1424, 18);
	func_33("buildingSiteAmbience", joaat("buildingsiteambience"), 128, 19);
	func_33("finale_choice", joaat("finale_choice"), 512, 20);
	func_33("pickupVehicles", joaat("pickupvehicles"), 128, 21);
	func_33("BailBond_Launcher", joaat("bailbond_launcher"), 1424, 22);
	func_33("rampage_controller", joaat("rampage_controller"), 1424, 23);
	func_33("SH_Intro_F_Hills", joaat("sh_intro_f_hills"), 1424, 24);
	func_33("SH_Intro_M_Home", joaat("sh_intro_m_home"), 1424, 25);
	func_33("FBI4_Prep3Amb", joaat("fbi4_prep3amb"), 2050, 26);
	func_33("finale_heist_prepEamb", joaat("finale_heist_prepeamb"), 2050, 31);
	func_33("agency_prep2Amb", joaat("agency_prep2amb"), 2050, 32);
	func_33("ambient_Diving", joaat("ambient_diving"), 1424, 27);
	func_33("ambient_Tonya", joaat("ambient_tonya"), 1424, 28);
	func_33("AF_Intro_T_Sandy", joaat("af_intro_t_sandy"), 1424, 29);
	func_33("ambient_Solomon", joaat("ambient_solomon"), 1424, 30);
}

void func_33(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x137D
{
	StringCopy(&(Global_94620[iParam3 /*18*/]), sParam0, 64);
	Global_94620[iParam3 /*18*/].f_17 = iParam1;
	Global_94620[iParam3 /*18*/].f_16 = iParam2;
}

void func_34()//Position - 0x13A9
{
	SCRIPT::REQUEST_SCRIPT("blip_controller");
	SCRIPT::REQUEST_SCRIPT("bootycallhandler");
	SCRIPT::REQUEST_SCRIPT("candidate_controller");
	SCRIPT::REQUEST_SCRIPT("cheat_controller");
	SCRIPT::REQUEST_SCRIPT("CompletionPercentage_controller");
	SCRIPT::REQUEST_SCRIPT("controller_AmbientArea");
	SCRIPT::REQUEST_SCRIPT("email_controller");
	SCRIPT::REQUEST_SCRIPT("emergencycalllauncher");
	SCRIPT::REQUEST_SCRIPT("event_controller");
	SCRIPT::REQUEST_SCRIPT("taxiLauncher");
	SCRIPT::REQUEST_SCRIPT("restrictedAreas");
	SCRIPT::REQUEST_SCRIPT("flow_controller");
	SCRIPT::REQUEST_SCRIPT("pickup_controller");
	SCRIPT::REQUEST_SCRIPT("player_controller");
	SCRIPT::REQUEST_SCRIPT("randomchar_controller");
	SCRIPT::REQUEST_SCRIPT("vehicle_gen_controller");
	SCRIPT::REQUEST_SCRIPT("mission_stat_alerter");
	SCRIPT::REQUEST_SCRIPT("MPStatsInit");
	SCRIPT::REQUEST_SCRIPT("stock_controller");
	while ((((((((((((((((((!SCRIPT::HAS_SCRIPT_LOADED("blip_controller") || !SCRIPT::HAS_SCRIPT_LOADED("bootycallhandler")) || !SCRIPT::HAS_SCRIPT_LOADED("candidate_controller")) || !SCRIPT::HAS_SCRIPT_LOADED("cheat_controller")) || !SCRIPT::HAS_SCRIPT_LOADED("CompletionPercentage_controller")) || !SCRIPT::HAS_SCRIPT_LOADED("controller_AmbientArea")) || !SCRIPT::HAS_SCRIPT_LOADED("email_controller")) || !SCRIPT::HAS_SCRIPT_LOADED("emergencycalllauncher")) || !SCRIPT::HAS_SCRIPT_LOADED("event_controller")) || !SCRIPT::HAS_SCRIPT_LOADED("taxiLauncher")) || !SCRIPT::HAS_SCRIPT_LOADED("restrictedAreas")) || !SCRIPT::HAS_SCRIPT_LOADED("flow_controller")) || !SCRIPT::HAS_SCRIPT_LOADED("pickup_controller")) || !SCRIPT::HAS_SCRIPT_LOADED("player_controller")) || !SCRIPT::HAS_SCRIPT_LOADED("randomchar_controller")) || !SCRIPT::HAS_SCRIPT_LOADED("vehicle_gen_controller")) || !SCRIPT::HAS_SCRIPT_LOADED("mission_stat_alerter")) || !SCRIPT::HAS_SCRIPT_LOADED("MPStatsInit")) || !SCRIPT::HAS_SCRIPT_LOADED("stock_controller"))
	{
		SYSTEM::WAIT(0);
		SCRIPT::REQUEST_SCRIPT("blip_controller");
		SCRIPT::REQUEST_SCRIPT("bootycallhandler");
		SCRIPT::REQUEST_SCRIPT("candidate_controller");
		SCRIPT::REQUEST_SCRIPT("cheat_controller");
		SCRIPT::REQUEST_SCRIPT("CompletionPercentage_controller");
		SCRIPT::REQUEST_SCRIPT("controller_AmbientArea");
		SCRIPT::REQUEST_SCRIPT("email_controller");
		SCRIPT::REQUEST_SCRIPT("emergencycalllauncher");
		SCRIPT::REQUEST_SCRIPT("event_controller");
		SCRIPT::REQUEST_SCRIPT("taxiLauncher");
		SCRIPT::REQUEST_SCRIPT("restrictedAreas");
		SCRIPT::REQUEST_SCRIPT("flow_controller");
		SCRIPT::REQUEST_SCRIPT("pickup_controller");
		SCRIPT::REQUEST_SCRIPT("player_controller");
		SCRIPT::REQUEST_SCRIPT("randomchar_controller");
		SCRIPT::REQUEST_SCRIPT("vehicle_gen_controller");
		SCRIPT::REQUEST_SCRIPT("mission_stat_alerter");
		SCRIPT::REQUEST_SCRIPT("MPStatsInit");
		SCRIPT::REQUEST_SCRIPT("stock_controller");
	}
	SYSTEM::START_NEW_SCRIPT("blip_controller", 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("blip_controller");
	SYSTEM::START_NEW_SCRIPT("bootycallhandler", 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("bootycallhandler");
	SYSTEM::START_NEW_SCRIPT("candidate_controller", 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("candidate_controller");
	SYSTEM::START_NEW_SCRIPT("cheat_controller", 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cheat_controller");
	SYSTEM::START_NEW_SCRIPT("CompletionPercentage_controller", 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("CompletionPercentage_controller");
	SYSTEM::START_NEW_SCRIPT("controller_AmbientArea", 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("controller_AmbientArea");
	SYSTEM::START_NEW_SCRIPT("email_controller", 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("email_controller");
	SYSTEM::START_NEW_SCRIPT("emergencycalllauncher", 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("emergencycalllauncher");
	SYSTEM::START_NEW_SCRIPT("event_controller", 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("event_controller");
	SYSTEM::START_NEW_SCRIPT("taxiLauncher", 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("taxiLauncher");
	SYSTEM::START_NEW_SCRIPT("restrictedAreas", 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("restrictedAreas");
	SYSTEM::START_NEW_SCRIPT("flow_controller", 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("flow_controller");
	SYSTEM::START_NEW_SCRIPT("player_controller", 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("player_controller");
	SYSTEM::START_NEW_SCRIPT("pickup_controller", 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("pickup_controller");
	SYSTEM::START_NEW_SCRIPT("randomchar_controller", 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("randomchar_controller");
	SYSTEM::START_NEW_SCRIPT("vehicle_gen_controller", 1828);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("vehicle_gen_controller");
	SYSTEM::START_NEW_SCRIPT("mission_stat_alerter", 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mission_stat_alerter");
	SYSTEM::START_NEW_SCRIPT("MPStatsInit", 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("MPStatsInit");
	SYSTEM::START_NEW_SCRIPT("stock_controller", 1424);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("stock_controller");
}

void func_35()//Position - 0x177F
{
	Global_113386.f_7688.f_924 = MISC::GET_GAME_TIMER();
}

void func_36()//Position - 0x1795
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (__LIB_0__.func_516(&(Global_113386.f_18103.f_175[iVar0 /*19*/].f_5)))
		{
			func_37(&(Global_113386.f_18103.f_175[iVar0 /*19*/].f_5));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (__LIB_0__.func_516(&(Global_113386.f_18103.f_362[iVar1 /*3*/])))
		{
			func_37(&(Global_113386.f_18103.f_362[iVar1 /*3*/]));
		}
		iVar1++;
	}
}

void func_37(var uParam0)//Position - 0x1812
{
	uParam0->f_1 = (uParam0->f_1 - (SYSTEM::TO_FLOAT(Global_113386.f_7688.f_924) / 1000f));
	uParam0->f_1 = (uParam0->f_1 + (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f));
}

void func_39()//Position - 0x185B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_136)
	{
		Global_113386.f_7688[iVar0 /*15*/].f_4 = (Global_113386.f_7688[iVar0 /*15*/].f_4 - Global_113386.f_7688.f_924);
		Global_113386.f_7688[iVar0 /*15*/].f_4 = (Global_113386.f_7688[iVar0 /*15*/].f_4 + MISC::GET_GAME_TIMER());
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_650)
	{
		Global_113386.f_7688.f_199[iVar0 /*15*/].f_4 = (Global_113386.f_7688.f_199[iVar0 /*15*/].f_4 - Global_113386.f_7688.f_924);
		Global_113386.f_7688.f_199[iVar0 /*15*/].f_4 = (Global_113386.f_7688.f_199[iVar0 /*15*/].f_4 + MISC::GET_GAME_TIMER());
		__LIB_29__.func_728(&(Global_113386.f_7688.f_199[iVar0 /*15*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_198)
	{
		Global_113386.f_7688.f_137[iVar0 /*15*/].f_4 = (Global_113386.f_7688.f_137[iVar0 /*15*/].f_4 - Global_113386.f_7688.f_924);
		Global_113386.f_7688.f_137[iVar0 /*15*/].f_4 = (Global_113386.f_7688.f_137[iVar0 /*15*/].f_4 + MISC::GET_GAME_TIMER());
		__LIB_29__.func_728(&(Global_113386.f_7688.f_137[iVar0 /*15*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_764)
	{
		Global_113386.f_7688.f_651[iVar0 /*14*/].f_4 = (Global_113386.f_7688.f_651[iVar0 /*14*/].f_4 - Global_113386.f_7688.f_924);
		Global_113386.f_7688.f_651[iVar0 /*14*/].f_4 = (Global_113386.f_7688.f_651[iVar0 /*14*/].f_4 + MISC::GET_GAME_TIMER());
		__LIB_29__.func_728(&(Global_113386.f_7688.f_651[iVar0 /*14*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_866)
	{
		Global_113386.f_7688.f_765[iVar0 /*10*/].f_4 = (Global_113386.f_7688.f_765[iVar0 /*10*/].f_4 - Global_113386.f_7688.f_924);
		Global_113386.f_7688.f_765[iVar0 /*10*/].f_4 = (Global_113386.f_7688.f_765[iVar0 /*10*/].f_4 + MISC::GET_GAME_TIMER());
		__LIB_29__.func_728(&(Global_113386.f_7688.f_765[iVar0 /*10*/]));
		iVar0++;
	}
}

void func_43()//Position - 0x1B28
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (!func_55(iVar1))
		{
			if (!bVar0)
			{
				bVar0 = true;
			}
			if (!func_44(iVar1))
			{
				return;
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
	}
}

int func_44(int iParam0)//Position - 0x1B6B
{
	int iVar0;
	int iVar1;
	iVar0 = Global_113386.f_9085.f_2[iParam0 /*3*/].f_2;
	iVar1 = Global_78588.f_12526[iParam0 /*2*/];
	while (iVar1 <= Global_78588.f_12526[iParam0 /*2*/].f_1)
	{
		if (iVar0 == __LIB_32__.func_616(iVar1))
		{
			Global_113386.f_9085.f_2[iParam0 /*3*/].f_1 = iVar1;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_55(int iParam0)//Position - 0x222C
{
	int iVar0;
	int iVar1;
	if (Global_113386.f_9085.f_2[iParam0 /*3*/].f_1 < 1900)
	{
		iVar0 = Global_113386.f_9085.f_2[iParam0 /*3*/].f_2;
		iVar1 = __LIB_32__.func_616(Global_113386.f_9085.f_2[iParam0 /*3*/].f_1);
		if (iVar0 != iVar1)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_56()//Position - 0x227F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (!BitTest(Global_113386.f_20410[iVar0 /*16*/].f_15, 0))
		{
			__LIB_19__.func_856(&(Global_113386.f_20410[iVar0 /*16*/]), 1);
		}
		iVar0++;
	}
}

void func_62()//Position - 0x2647
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_136)
	{
		if (BitTest(Global_113386.f_7688[iVar0 /*15*/].f_1, 6))
		{
			__LIB_19__.func_912(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_650)
	{
		if (BitTest(Global_113386.f_7688.f_199[iVar0 /*15*/].f_1, 6))
		{
			__LIB_9__.func_775(Global_113386.f_7688.f_199[iVar0 /*15*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_198)
	{
		if (BitTest(Global_113386.f_7688.f_137[iVar0 /*15*/].f_1, 6))
		{
			__LIB_32__.func_719(Global_113386.f_7688.f_137[iVar0 /*15*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_764)
	{
		if (BitTest(Global_113386.f_7688.f_651[iVar0 /*14*/].f_1, 6))
		{
			__LIB_20__.func_660(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_866)
	{
		if (BitTest(Global_113386.f_7688.f_765[iVar0 /*10*/].f_1, 6))
		{
			__LIB_9__.func_774(iVar0);
		}
		iVar0++;
	}
}

void func_77()//Position - 0x2D92
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < 317)
	{
		if (func_78(iVar0, &Var1))
		{
			Global_98880[iVar0 /*3*/] = { Var1 };
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < 3)
	{
		Global_4541522[iVar2] = -1;
		iVar2++;
	}
	if (!Global_113386.f_18514.f_16)
	{
		iVar3 = 0;
		while (iVar3 < 15)
		{
			Global_113386.f_18514[iVar3] = 139;
			iVar3++;
		}
		Global_113386.f_18514.f_16 = 1;
	}
	iVar3 = 0;
	while (iVar3 < 15)
	{
		Global_95447[iVar3] = 141;
		iVar3++;
	}
}

int func_78(int iParam0, var uParam1)//Position - 0x2E36
{
	float fVar0;
	struct<8> Var1;
	int iVar2;
	struct<3> Var3;
	var uVar4;
	struct<3> Var5;
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 1:
			__LIB_12__.func_128(&iVar2);
			if (iVar2 < 5)
			{
				*uParam1 = { Global_95644[iVar2 /*9*/].f_3 };
				return 1;
			}
			else
			{
				*uParam1 = { Global_95644[0 /*9*/].f_3 };
				return 1;
			}
			break;
		case 2:
			*uParam1 = { Global_98552[0 /*109*/].f_4 };
			fVar0 = Global_98552[0 /*109*/].f_7;
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		case 3:
			*uParam1 = { Global_98552[1 /*109*/].f_4 };
			fVar0 = Global_98552[1 /*109*/].f_7;
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		case 4:
			*uParam1 = { Global_98552[2 /*109*/].f_4 };
			fVar0 = Global_98552[2 /*109*/].f_7;
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		case 5:
			*uParam1 = { Global_113386.f_2363.f_539.f_2300[0 /*3*/] + Vector(-1f, 0f, 0f) };
			fVar0 = Global_113386.f_2363.f_539.f_2310[0];
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		case 6:
			*uParam1 = { Global_113386.f_2363.f_539.f_2300[1 /*3*/] + Vector(-1f, 0f, 0f) };
			fVar0 = Global_113386.f_2363.f_539.f_2310[1];
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		case 7:
			*uParam1 = { Global_113386.f_2363.f_539.f_2300[2 /*3*/] + Vector(-1f, 0f, 0f) };
			fVar0 = Global_113386.f_2363.f_539.f_2310[2];
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		case 11:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				StringCopy(&Var1, "v_strip3", 32);
				return 1;
			}
			break;
		case 8:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				StringCopy(&Var1, "v_strip3", 32);
				return 1;
			}
			break;
		case 9:
			return func_78(8, uParam1);
			break;
		case 10:
			return func_78(8, uParam1);
			break;
		case 13:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 14:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 15:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 12:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 16:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 17:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 18:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 19:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 20:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 21:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 22:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 74:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 23:
			return func_78(208, uParam1);
			break;
		case 24:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 67:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 25:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 26:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 27:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 28:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		case 58:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 59:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 60:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 38:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 39:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
		case 40:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				StringCopy(&Var1, "v_trailer", 32);
				return 1;
			}
			break;
		case 41:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 42:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 43:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 44:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 45:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 46:
			*uParam1 = { -803.734f, 168.148f, 76.3542f };
			return 1;
			break;
		case 47:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 49:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 48:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 124:
			*uParam1 = { -803.734f, 168.148f, 76.3542f };
			return 1;
			break;
		case 50:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 51:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 52:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 66:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			return 1;
			break;
			return 0;
			break;
		case 54:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 55:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 56:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 57:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 61:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 62:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 63:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 68:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 69:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 64:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 65:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 70:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 71:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 72:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 73:
			if (func_81(iParam0, uParam1, &fVar0))
			{
				return 1;
			}
			break;
		case 234:
			*uParam1 = { 1970.746f, 3818.998f, 33.42f };
			return 1;
			break;
		case 316:
			*uParam1 = { 1971.186f, 3818.968f, 33.4287f };
			return 1;
			break;
		case 315:
			*uParam1 = { 1975.312f, 3817.041f, 33.53f };
			return 1;
			break;
		case 75:
			*uParam1 = { 1424.3041f, -1898.6106f, 69.8678f };
			return 1;
			break;
		case 76:
			*uParam1 = { 1357.3f, -2267.1f, 61.1f };
			return 1;
			break;
		case 77:
			*uParam1 = { -814.246f, 181.264f, 75.7407f };
			return 1;
			break;
		case 78:
			*uParam1 = { -813.766f, 181.054f, 76.7504f };
			return 1;
			break;
		case 79:
			*uParam1 = { -805.17f, 173.99f, 72.6949f };
			StringCopy(&Var1, "v_michael", 32);
			return 1;
			break;
		case 80:
			*uParam1 = { -774.9665f, 183.9946f, (71.835f + 0.5f) };
			return 1;
			break;
		case 81:
			*uParam1 = { -1313.748f, 121.405f, 56.6578f };
			return 1;
			break;
		case 82:
			*uParam1 = { -812.926f, 181.614f, (76.7408f - 0.0097f) };
			return 1;
			break;
		case 83:
			*uParam1 = { -813.196f, 181.764f, 76.7407f };
			return 1;
			break;
		case 84:
			*uParam1 = { 1968.02f, 3816.76f, 32.4291f };
			return 1;
			break;
		case 85:
			*uParam1 = { -802.3999f, 172.44f, 72.8447f };
			return 1;
			break;
		case 86:
			*uParam1 = { -805.173f, 173.987f, 72.6876f };
			return 1;
			break;
		case 87:
			*uParam1 = { -780.694f, 187.325f, ((72.812f - 1f) + 1f) };
			return 1;
			break;
		case 88:
			*uParam1 = { -1353.311f, 355.9345f, 64.0704f };
			return 1;
			break;
		case 89:
			*uParam1 = { -826.5596f, 155.8342f, 68.3283f };
			return 1;
			break;
		case 90:
			*uParam1 = { -887.9781f, 133.6231f, 58.3423f };
			return 1;
			break;
		case 91:
			*uParam1 = { -1210.317f, -955.7397f, 1.6553f };
			return 1;
			break;
		case 92:
			*uParam1 = { -848.0614f, 855.916f, 202.5614f };
			return 1;
			break;
		case 93:
			*uParam1 = { -1268.64f, -711.4f, 22.4619f };
			return 1;
			break;
		case 94:
			*uParam1 = { -117.021f, 361.432f, 111.8857f };
			return 1;
			break;
		case 95:
			*uParam1 = { 394.68f, 176.81f, 103.8401f };
			return 1;
			break;
		case 96:
			*uParam1 = { -1368.025f, 54.7852f, 52.7046f };
			return 1;
			break;
		case 97:
			*uParam1 = { -1415.52f, -198.59f, 47.2507f };
			return 1;
			break;
		case 98:
			*uParam1 = { Vector((36.1054f + 1f), -211.7579f, -613.756f) + Vector(-0.0069f, 0.026f, 0.0203f) };
			*uParam1 = { *uParam1 + Vector(-0.0009f, 0.0261f, 0.0164f) };
			fVar0 = (fVar0 + 0.0004f);
			*uParam1 = { *uParam1 + Vector(0.0011f, 0.0264f, 0.0168f) };
			fVar0 = (fVar0 + 0.0015f);
			*uParam1 = { *uParam1 + Vector(0.0011f, 0.0268f, 0.0173f) };
			fVar0 = (fVar0 + 0.0002f);
			*uParam1 = { *uParam1 + Vector(0.0011f, 0.0271f, 0.0179f) };
			fVar0 = (fVar0 + -0.0009f);
			return 1;
			break;
		case 99:
			*uParam1 = { -1360.1561f, -559.5457f, 29.0697f };
			return 1;
			break;
		case 100:
			*uParam1 = { -590.0963f, 270.147f, 81.2426f };
			return 1;
			break;
		case 101:
			*uParam1 = { 166.4449f, -211.298f, 53.0941f };
			return 1;
			break;
		case 102:
			*uParam1 = { 401.7279f, 308.2417f, 102.5f };
			return 1;
			break;
		case 103:
			*uParam1 = { -1731.94f, -1125.13f, (12.0176f + 1f) };
			return 1;
			break;
		case 104:
			*uParam1 = { -1927.78f, -579.07f, 11.1705f };
			return 1;
			break;
		case 105:
			*uParam1 = { -464.22f, -1592.98f, 38.1269f };
			return 1;
			break;
		case 106:
			*uParam1 = { -1744.1995f, -625.3162f, 9.8308f };
			return 1;
			break;
		case 107:
			*uParam1 = { -1426.91f, -39f, 51.8742f };
			return 1;
			break;
		case 108:
			*uParam1 = { 260.98f, 1117.81f, 220.1383f };
			return 1;
			break;
		case 109:
			*uParam1 = { -1819.58f, -677.59f, 10.4119f };
			return 1;
			break;
		case 110:
			*uParam1 = { -95.55f, -415.1f, 35.6806f };
			return 1;
			break;
		case 111:
			*uParam1 = { -1292.701f, -697.2287f, 24.2677f };
			return 1;
			break;
		case 112:
			*uParam1 = { 814.98f, 1270.01f, 360.4754f };
			return 1;
			break;
		case 113:
			*uParam1 = { -1668.26f, 488.3f, 128.876f };
			return 1;
			break;
		case 135:
			*uParam1 = { 667.7f, 3503.7f, 33.9937f };
			return 1;
			break;
		case 136:
			*uParam1 = { 2405.11f, 4296.96f, 35.1743f };
			return 1;
			break;
		case 137:
			*uParam1 = { 100.9571f, 3363.993f, 34.4471f };
			return 1;
			break;
		case 138:
			*uParam1 = { 2445.2058f, 3800.6694f, 40.0793f };
			return 1;
			break;
		case 139:
			*uParam1 = { 1775.4447f, 4584.743f, 37.6512f };
			return 1;
			break;
		case 140:
			*uParam1 = { -760.5784f, 229.583f, 74.6747f };
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		case 141:
			*uParam1 = { 1316.4146f, -1599.345f, 51.3924f };
			StringCopy(&Var1, "", 32);
			return 1;
			break;
		case 142:
			*uParam1 = { 2365.105f, 3904.715f, 35.2f };
			return 1;
			break;
		case 143:
			*uParam1 = { -483.2213f, 5876.392f, 33f };
			return 1;
			break;
		case 144:
			*uParam1 = { -180.0459f, 6464.799f, 30.2f };
			return 1;
			break;
		case 145:
			*uParam1 = { 1663.859f, 4876.284f, 41.6f };
			return 1;
			break;
		case 146:
			*uParam1 = { 2156.0642f, 3253.6323f, 46.9f };
			return 1;
			break;
		case 147:
			*uParam1 = { 2782.836f, 3476.8198f, 54.8f };
			return 1;
			break;
		case 148:
			*uParam1 = { 2543.831f, 2618.3198f, 37.5f };
			return 1;
			break;
		case 149:
			*uParam1 = { 1295.529f, 1529.811f, 96.6f };
			return 1;
			break;
		case 150:
			*uParam1 = { 1978.07f, 3819.564f, 32.429f };
			return 1;
			break;
		case 114:
			*uParam1 = { 68.79f, -1561.2699f, 29.4564f };
			return 1;
			break;
		case 115:
			*uParam1 = { -511.73f, -21.87f, 45.5884f };
			return 1;
			break;
		case 116:
			*uParam1 = { -628.8f, 242.463f, 81.8695f };
			return 1;
			break;
		case 117:
			*uParam1 = { -834.53f, -350.71f, 38.6537f };
			return 1;
			break;
		case 118:
			*uParam1 = { -1073.127f, -1538.832f, 4.11f };
			return 1;
			break;
		case 119:
			*uParam1 = { 123.0931f, 649.6752f, 207.7751f };
			return 1;
			break;
		case 120:
			*uParam1 = { -820.9f, 85.3f, 51.9813f };
			return 1;
			break;
		case 121:
			*uParam1 = { -831.353f, -1358.748f, 4.9732f };
			return 1;
			break;
		case 122:
			*uParam1 = { -812.346f, 179.87f, 72.1592f };
			return 1;
			break;
		case 123:
			*uParam1 = { -2015.68f, -495.4f, 11.7326f };
			return 1;
			break;
		case 125:
			*uParam1 = { -1499.98f, -677.09f, 27.0668f };
			return 1;
			break;
		case 126:
			*uParam1 = { 1971.862f, 3813.91f, 32.9309f };
			return 1;
			break;
		case 127:
			*uParam1 = { 669.7389f, 3503.83f, 32.9168f };
			return 1;
			break;
		case 128:
			*uParam1 = { 1974.768f, 3821.242f, (32.4384f + 0.5f) };
			return 1;
			break;
		case 129:
			*uParam1 = { 1981.238f, 3821.543f, 31.9677f };
			return 1;
			break;
		case 130:
			*uParam1 = { 1976.75f, 3822.76f, 33.28f };
			return 1;
			break;
		case 131:
			*uParam1 = { 1981.332f, 3821.52f, 31.9535f };
			return 1;
			break;
		case 132:
			*uParam1 = { 1974.312f, 3821.1f, 32.8864f };
			return 1;
			break;
		case 133:
			*uParam1 = { 1940.0519f, 4018.8535f, 28.9009f };
			return 1;
			break;
		case 134:
			*uParam1 = { 1992.15f, 3056.42f, 47.0342f };
			return 1;
			break;
		case 151:
			*uParam1 = { -115.92f, 363.5f, 112.8857f };
			return 1;
			break;
		case 152:
			*uParam1 = { -1353.791f, 355.1845f, 64.08f };
			return 1;
			break;
		case 153:
			*uParam1 = { -718.8135f, 256.7636f, 79.8384f };
			return 1;
			break;
		case 154:
			*uParam1 = { -718.8735f, 256.4936f, 79.8259f };
			return 1;
			break;
		case 155:
			*uParam1 = { -770.6851f, 157.8133f, 67.5042f };
			return 1;
			break;
		case 156:
			*uParam1 = { -796.7593f, 180.4725f, 71.8266f };
			return 1;
			break;
		case 157:
			*uParam1 = { -718.0311f, 254.9289f, 79.7959f };
			return 1;
			break;
		case 158:
			*uParam1 = { 533.1877f, 109.0133f, 96.4624f };
			return 1;
			break;
		case 159:
			*uParam1 = { -823.2f, -187.083f, 37.7753f };
			return 1;
			break;
		case 160:
			*uParam1 = { -715.6204f, -155.5691f, 37.4023f };
			return 1;
			break;
		case 161:
			*uParam1 = { -790.3314f, 186.4809f, 71.835f };
			return 1;
			break;
		case 162:
			*uParam1 = { -1367.35f, -208.84f, (((44.4134f + 44.416f) / 2f) - 0.01f) };
			return 1;
			break;
		case 163:
			*uParam1 = { -812.896f, 181.114f, 76.7233f };
			return 1;
			break;
		case 164:
			*uParam1 = { -781.264f, 187.115f, 72.8425f };
			return 1;
			break;
		case 165:
			*uParam1 = { -1135.5466f, -450.7346f, 35.4977f };
			return 1;
			break;
		case 166:
			*uParam1 = { -1050.013f, -481.4982f, 36.7625f };
			return 1;
			break;
		case 167:
			*uParam1 = { -1180.062f, -498.2454f, 35.567f };
			return 1;
			break;
		case 168:
			if (func_79(0, 25, &Var3, &uVar4))
			{
				*uParam1 = { Var3 + Vector(71.1531f, 179.5117f, -812.0607f) };
				StringCopy(&Var1, "v_michael", 32);
				return 1;
			}
			break;
		case 169:
			*uParam1 = { -808.3299f, 170.7319f, 76.7408f };
			return 1;
			break;
		case 170:
			*uParam1 = { -656.9569f, -276.9062f, 35.6524f };
			return 1;
			break;
		case 171:
			*uParam1 = { -250.9305f, -80.8638f, 48.4993f };
			return 1;
			break;
		case 173:
			*uParam1 = { -817.75f, 170.02f, 70.4911f };
			return 1;
			break;
		case 172:
			*uParam1 = { -248.9653f, -81.0186f, 48.6174f };
			*uParam1 = { *uParam1 + Vector(0.0134f, 0.0273f, 0.0091f) };
			fVar0 = (fVar0 + 0.003f);
			return 1;
			break;
		case 174:
			*uParam1 = { -803.27f, 183.78f, 71.61f };
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 175:
			*uParam1 = { -17.2168f, -1441.224f, 30.1015f };
			return 1;
			break;
		case 176:
			*uParam1 = { -0.45f, 525.49f, 169.64f };
			return 1;
			break;
		case 177:
			*uParam1 = { -0.109f, 524.3119f, 170.3068f };
			return 1;
			break;
		case 178:
			*uParam1 = { 9.0865f, 528.0272f, 170.6172f };
			return 1;
			break;
		case 179:
			*uParam1 = { -17.2672f, -1441.154f, 30.1015f };
			return 1;
			break;
		case 180:
			*uParam1 = { 1.76f, 525.92f, 173.63f };
			return 1;
			break;
		case 181:
			*uParam1 = { -17.4073f, -1439.401f, 31.1023f };
			return 1;
			break;
		case 182:
			*uParam1 = { -13.8167f, -1423.673f, 30.7231f };
			return 1;
			break;
		case 183:
			*uParam1 = { 15.3608f, 523.6475f, (169.2282f + 1f) };
			return 1;
			break;
		case 184:
			*uParam1 = { -11.5281f, 512.304f, 174.5978f };
			return 1;
			break;
		case 185:
			*uParam1 = { 20.9569f, 521.8147f, 170.1977f };
			return 1;
			break;
		case 186:
			*uParam1 = { -1.579f, 535.2489f, 175.3424f };
			return 1;
			break;
		case 187:
			*uParam1 = { 3.8524f, 525.7295f, 174.6234f };
			return 1;
			break;
		case 188:
			*uParam1 = { -8.86f, 515.84f, 174.628f };
			return 1;
			break;
		case 189:
			*uParam1 = { -6.9799f, 524.9367f, 174.9997f };
			return 1;
			break;
		case 190:
			*uParam1 = { 1.4483f, 527.5843f, 170.0596f };
			return 1;
			break;
		case 191:
			*uParam1 = { 1.8291f, 526.745f, 174.6267f };
			return 1;
			break;
		case 196:
			*uParam1 = { -14.8689f, -1441.1821f, 31.1932f };
			return 1;
			break;
		case 197:
			*uParam1 = { 3.641f, 530.1489f, 175.6695f };
			return 1;
			break;
		case 192:
			*uParam1 = { -1174.458f, -1573.632f, 4.7619f };
			return 1;
			break;
		case 193:
			*uParam1 = { -1175.298f, -1573.692f, 4.3599f };
			return 1;
			break;
		case 194:
			*uParam1 = { -1153.511f, -1371.652f, 4.073f };
			return 1;
			break;
		case 195:
			*uParam1 = { -1162.987f, -1427.264f, 3.637f };
			return 1;
			break;
		case 198:
			*uParam1 = { -13.7603f, -1451.2f, 29.6322f };
			return 1;
			break;
		case 199:
			*uParam1 = { 14.379f, 544.128f, 175.0021f };
			return 1;
			break;
		case 200:
			*uParam1 = { 2.8895f, -1607.2864f, 29.2949f };
			return 1;
			break;
		case 201:
			*uParam1 = { 2.8895f, -1607.2864f, 29.2866f };
			return 1;
			break;
		case 202:
			*uParam1 = { -1244.888f, -1613.656f, 4.1295f };
			return 1;
			break;
		case 203:
			*uParam1 = { -16.4273f, -1452.266f, 30.5424f };
			return 1;
			break;
		case 204:
			*uParam1 = { -15.0259f, -1422.9363f, 30.6908f };
			return 1;
			break;
		case 205:
			*uParam1 = { 15.3678f, 523.712f, 170.2095f };
			return 1;
			break;
		case 206:
			*uParam1 = { 154.0731f, 765.5721f, 209.672f };
			return 1;
			break;
		case 207:
			*uParam1 = { -268.139f, 415.2881f, 109.7258f };
			return 1;
			break;
		case 208:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			return 1;
			break;
		case 209:
			*uParam1 = { 31.9f, -1483.3f, 29.26f };
			return 1;
			break;
		case 210:
			*uParam1 = { 208.9683f, 222.0408f, 104.6f };
			return 1;
			break;
		case 211:
			*uParam1 = { -24.5203f, -1436.2f, 30.1544f };
			return 1;
			break;
		case 212:
			*uParam1 = { -23.8762f, -1444.5953f, 30.6345f };
			return 1;
			break;
		case 213:
			*uParam1 = { 14f, 546.19f, 175.4851f };
			return 1;
			break;
		case 214:
			*uParam1 = { 8.8185f, 545.03f, 175.6051f };
			return 1;
			break;
		case 215:
			*uParam1 = { 10.9694f, 551.7596f, 176.1069f };
			return 1;
			break;
		case 216:
			*uParam1 = { -1150.82f, 943.27f, 198.237f };
			return 1;
			break;
		case 217:
			*uParam1 = { -1689f, -946.16f, 7.1768f };
			return 1;
			break;
		case 221:
			*uParam1 = { -521.13f, -28.54f, 45.2617f };
			return 1;
			break;
		case 222:
			*uParam1 = { 480.9113f, -1316.355f, 29.1966f };
			return 1;
			break;
		case 223:
			*uParam1 = { 473.3613f, -1309.995f, 29.2326f };
			return 1;
			break;
		case 224:
			return func_78(222, uParam1);
			break;
		case 226:
			*uParam1 = { 28.986f, -1351.412f, 29.3437f };
			return 1;
			break;
		case 227:
			*uParam1 = { -379.1773f, 220.9259f, 84.144f };
			return 1;
			break;
		case 228:
			*uParam1 = { 131.5816f, -1303.558f, 29.1592f };
			return 1;
			break;
		case 229:
			*uParam1 = { 792.1553f, -735.5871f, 27.5721f };
			return 1;
			break;
		case 230:
			*uParam1 = { -297.4081f, -1332.343f, 31.3057f };
			return 1;
			break;
		case 218:
			*uParam1 = { -9.4f, -1415.3f, 28.32f };
			return 1;
			break;
		case 219:
			*uParam1 = { -242.0927f, -1538.1809f, 30.5334f };
			return 1;
			break;
		case 220:
			*uParam1 = { -18.8892f, -1823.912f, 25.8711f };
			return 1;
			break;
		case 225:
			*uParam1 = { 192.751f, -1672.653f, 28.8033f };
			return 1;
			break;
		case 231:
			*uParam1 = { -2654.6338f, 2625.161f, 15.6744f };
			return 1;
			break;
		case 232:
			*uParam1 = { -78.4023f, -1019.2347f, 28.5449f };
			return 1;
			break;
		case 233:
			*uParam1 = { -78.4023f, -1019.2347f, 28.5449f };
			return 1;
			break;
		case 235:
			*uParam1 = { 116.9369f, -1287.704f, 28.2979f };
			return 1;
			break;
		case 236:
			*uParam1 = { 126.8211f, -1283.766f, 29.274f };
			return 1;
			break;
		case 237:
			*uParam1 = { 127.957f, -1298.513f, 29.427f };
			return 1;
			break;
		case 238:
			*uParam1 = { 130.2769f, -1300.874f, 29.1559f };
			return 1;
			break;
		case 239:
			*uParam1 = { -55.8087f, 358.255f, 113.061f };
			return 1;
			break;
		case 240:
			*uParam1 = { 1534.043f, 3613.122f, 34.367f };
			return 1;
			break;
		case 241:
			*uParam1 = { -175.4296f, 6428.75f, 29.6226f };
			return 1;
			break;
		case 242:
			*uParam1 = { -1654.937f, -147.5126f, 57.461f };
			return 1;
			break;
		case 245:
			*uParam1 = { 1972.81f, 3818.273f, 32.005f };
			return 1;
			break;
		case 243:
			*uParam1 = { 433.885f, -1462.478f, 28.2735f };
			return 1;
			break;
		case 244:
			*uParam1 = { 433.885f, -1462.478f, 28.2804f };
			return 1;
			break;
		case 246:
			*uParam1 = { -1199.55f, -1569.688f, 4.612f };
			return 1;
			break;
		case 247:
			*uParam1 = { -1325.88f, -1667.49f, 1.5744f };
			return 1;
			break;
		case 248:
			*uParam1 = { 285.93f, 182.18f, 103.3496f };
			return 1;
			break;
		case 249:
			*uParam1 = { 292.17f, 191.09f, (103.3496f + 1f) };
			return 1;
			break;
		case 250:
			*uParam1 = { 288.0774f, -3201.881f, 5.808f };
			return 1;
			break;
		case 251:
			*uParam1 = { -871.2493f, 67.3477f, 52.1137f };
			return 1;
			break;
		case 252:
			*uParam1 = { -46.1798f, -1474.164f, 32.0083f };
			return 1;
			break;
		case 253:
			*uParam1 = { 1876.025f, 2620.827f, 45.6722f };
			return 1;
			break;
		case 254:
			*uParam1 = { 154.73f, -219.21f, 54.303f };
			return 1;
			break;
		case 255:
			*uParam1 = { 411.625f, -1488.989f, 30.1244f };
			return 1;
			break;
		case 264:
			*uParam1 = { 488.0162f, -1342.394f, 29.4108f };
			return 1;
			break;
		case 265:
			*uParam1 = { -438.0249f, 1595.895f, 356.5938f };
			return 1;
			break;
		case 266:
			*uParam1 = { -3067.868f, 130.6339f, 9.9056f };
			return 1;
			break;
		case 267:
			*uParam1 = { 2209.699f, 4914.914f, 39.676f };
			return 1;
			break;
		case 268:
			*uParam1 = { 1800.0305f, 6293.462f, 48.6294f };
			return 1;
			break;
		case 269:
			*uParam1 = { 418.6078f, -788.4689f, 43.5311f };
			return 1;
			break;
		case 270:
			*uParam1 = { 2949.567f, 5755.339f, 317.8481f };
			return 1;
			break;
		case 271:
			*uParam1 = { -1267.389f, -1098.899f, 6.8082f };
			return 1;
			break;
		case 272:
			*uParam1 = { 107.0137f, -1316.035f, 28.2084f };
			return 1;
			break;
		case 273:
			*uParam1 = { -118.1968f, -442.9148f, 35.282f };
			return 1;
			break;
		case 274:
			*uParam1 = { -1858.957f, 2071.23f, 140.3656f };
			return 1;
			break;
		case 275:
			*uParam1 = { Vector(49.4f, -1195.9f, 937.3f) + Vector(48.8f, -1200.3f, 895.4f) / Vector(2f, 2f, 2f) };
			return 1;
			break;
		case 276:
			*uParam1 = { Vector(54.5f, 2303.4f, 1893.4f) * Vector(1f, 1f, 1f) + Vector(54.5f, 2251.8f, 1885.6f) * Vector(2f, 2f, 2f) / FtoV((1f + 2f)) };
			return 1;
			break;
		case 277:
			*uParam1 = { 1076.9883f, 2685.1528f, 37.973f };
			return 1;
			break;
		case 278:
			*uParam1 = { 642.68f, -1001.27f, 36.8997f };
			return 1;
			break;
		case 279:
			*uParam1 = { -145.8739f, 868.3813f, 231.6979f };
			return 1;
			break;
		case 280:
			*uParam1 = { 2789.845f, -1453.731f, 0.5519f };
			return 1;
			break;
		case 281:
			*uParam1 = { 612.6f, -932.6f, 10.6f };
			return 1;
			break;
		case 282:
			*uParam1 = { -975.9f, 2891f, 15.7f };
			return 1;
			break;
		case 283:
			*uParam1 = { Vector(1f, 1f, 1f) * Vector(15.66f, 303.17f, -3019.98f) + Vector(2f, 2f, 2f) * Vector(15.7f, 285.2f, -3031.2f) / FtoV((1f + 2f)) };
			return 1;
			break;
		case 284:
			*uParam1 = { Vector(51.5964f, -1128.6865f, 1356.0322f) + Vector(51.5f, -1149f, 1316.7f) / Vector(2f, 2f, 2f) };
			return 1;
			break;
		case 285:
			*uParam1 = { 48.1743f, -2057.1294f, 18.3524f };
			return 1;
			break;
		case 256:
			*uParam1 = { -1242.68f, -1105.15f, 7.1f };
			return 1;
			break;
		case 257:
			*uParam1 = { -1667.148f, -974.7168f, 6.479f };
			return 1;
			break;
		case 258:
			*uParam1 = { -301.4778f, 6250.9f, 30.5054f };
			return 1;
			break;
		case 259:
			*uParam1 = { -724.26f, -1307.05f, 5.0602f };
			return 1;
			break;
		case 260:
			*uParam1 = { -1280.054f, 303.9235f, 63.9553f };
			return 1;
			break;
		case 261:
			*uParam1 = { 924.1288f, 48.0048f, 79.7644f };
			return 1;
			break;
		case 286:
			*uParam1 = { -1273.69f, -1195.01f, 5.0372f };
			return 1;
			break;
		case 287:
			*uParam1 = { -888.45f, -853.11f, 19.5602f };
			return 1;
			break;
		case 288:
			*uParam1 = { -1696.14f, -1073.2f, 0.6898f };
			return 1;
			break;
		case 262:
			*uParam1 = { -1155.957f, -1521.686f, 4.3519f };
			return 1;
			break;
		case 263:
			*uParam1 = { -565.37f, -1258.02f, 13.8618f };
			return 1;
			break;
		case 289:
			*uParam1 = { 440.6737f, -228.7473f, 55.9725f };
			return 1;
			break;
		case 290:
			*uParam1 = { 118.4869f, -1286.414f, 28.261f };
			return 1;
			break;
		case 291:
			*uParam1 = { -1159.273f, -1522.504f, 9.634f };
			return 1;
			break;
		case 292:
			*uParam1 = { -1145.368f, -1515.59f, 9.5847f };
			return 1;
			break;
		case 293:
			*uParam1 = { -1145.437f, -1515.649f, 9.5894f };
			return 1;
			break;
		case 294:
			return func_78(293, uParam1);
			break;
		case 295:
			return func_78(292, uParam1);
			break;
		case 299:
			*uParam1 = { -1158.133f, -1521.394f, 9.6327f };
			return 1;
			break;
		case 300:
			return func_78(303, uParam1);
			break;
		case 301:
			return func_78(303, uParam1);
			break;
		case 302:
			return func_78(303, uParam1);
			break;
		case 303:
			*uParam1 = { -1157.803f, -1521.334f, 9.6327f };
			return 1;
			break;
		case 296:
			*uParam1 = { -1146.127f, -1515.525f, 9.6346f };
			return 1;
			break;
		case 297:
			*uParam1 = { -1153.515f, -1518.435f, 9.6346f };
			return 1;
			break;
		case 298:
			*uParam1 = { -1156.422f, -1519.561f, 10.6327f };
			return 1;
			break;
		case 304:
			*uParam1 = { 1972.432f, 3814.38f, 32.932f };
			return 1;
			break;
		case 305:
			*uParam1 = { 1394.2081f, 3602.284f, 37.9419f };
			return 1;
			break;
		case 306:
			Var5 = { 0.0055f, 7.499f, -1.2748f };
			*uParam1 = { Vector(42.2955f, 5619.934f, -557.5234f) + Var5 };
			return 1;
			break;
		case 307:
			*uParam1 = { -1574.4655f, 4693.425f, 47.6226f };
			return 1;
			break;
		case 308:
			*uParam1 = { -1557.3943f, 4590.1157f, 18.6076f };
			return 1;
			break;
		case 309:
			*uParam1 = { 2113.6938f, 4792.3525f, 40.2104f };
			return 1;
			break;
		case 310:
			*uParam1 = { 2020.2517f, 3401.1543f, 42.7215f };
			return 1;
			break;
		case 311:
			*uParam1 = { 1972.237f, 3817.86f, 33.4287f };
			return 1;
			break;
		case 312:
			*uParam1 = { -275.7407f, 6629.9688f, 6.4377f };
			return 1;
			break;
		case 313:
			*uParam1 = { 1838.1f, 4381.3f, (19.6f + 5f) };
			return 1;
			break;
		case 314:
			*uParam1 = { 1126.4146f, 2035.1354f, 243.9449f };
			return 1;
			break;
	}
	*uParam1 = { 0f, 0f, 0f };
	fVar0 = 0f;
	Var1 = { Var1 };
	return 0;
}

int func_79(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x5668
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 13.904f, 1.193f, 0.7f };
					*uParam3 = -144f;
					return 1;
					break;
				case 1:
					if (func_79(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1.1731f, 0.809f) };
						*uParam3 = (*uParam3 + (456.7661f - 360f));
						return 1;
					}
					break;
				case 2:
					*uParam2 = { Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((16f - 222.8314f) + 360f);
					return 1;
					break;
			}
			return 0;
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 10.9793f, -5.9f, 4.6f };
					*uParam3 = 163.0716f;
					return 1;
					break;
				case 1:
					if (func_79(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0.25f, -0.6f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
				case 2:
					if (func_79(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0.5f, -1.2f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { Vector(71.835f, 180.548f, -796.991f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = (((16f + 90f) - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { 6.8878f, -5.5247f, 1.5228f };
					*uParam3 = 160f;
					return 1;
					break;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.1937f, -9.0309f, 4.5877f };
					*uParam3 = 255f;
					return 1;
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.4577f, -9.6399f, 4.5876f };
					*uParam3 = 252f;
					return 1;
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.799f, -9.41f, 4.5877f };
					*uParam3 = 273f;
					return 1;
					break;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_79(0, 5, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 12.552f, 4.373f, (4.6f + 1f) };
					*uParam3 = 318f;
					return 1;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { -0.4395f, -11.0022f, 0.0747f };
					*uParam3 = 306f;
					return 1;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 5.5001f, -12.4406f, 4.6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.5f, -9.1f, 4.6f };
					*uParam3 = 330f;
					return 1;
					break;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 0.849f, 1.575f, 0f };
					*uParam3 = 272.857f;
					return 1;
					break;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 8.183f, -3.0467f, 5.5876f };
					*uParam3 = 158f;
					return 1;
					break;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 9.383f, -3.3887f, 5.73f };
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.488f, -9.098f, 5.4864f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 9.04f, 5.71f, 1.44f };
					*uParam3 = 159.3182f;
					return 1;
					break;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.25f, -9.53f, 4.588f };
					*uParam3 = 333f;
					return 1;
					break;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(0f, -11.0022f, -0.4395f) + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f)) };
					*uParam3 = (306f + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 10f));
					return 1;
					break;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(60.2063f, 141.5129f, -863.5425f) - Vector(71.1531f, 179.5117f, -812.0607f) - Vector(1f, 0f, 0f) };
					*uParam2 = { *uParam2 * Vector(0.95f, 0.95f, 0.95f) };
					*uParam3 = MISC::GET_HEADING_FROM_VECTOR_2D(*uParam2, uParam2->f_1);
					return 1;
					break;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((26.087f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((13f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(72.8447f, 172.4196f, -803.1823f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-28.7112f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 27.9648f, 8.3766f, 0.7f };
					*uParam3 = 319f;
					return 1;
					break;
			}
			break;
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f) };
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { -0.3142f, -10.9926f, 0.0747f };
					*uParam3 = 304.1026f;
					return 1;
					break;
			}
			break;
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.3f, -6.5f, 4.6f };
					*uParam3 = 180f;
					return 1;
					break;
			}
			break;
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_79(1, 32, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		case 38:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.505f, -10.9717f, 4.6019f };
					*uParam3 = 228f;
					return 1;
					break;
			}
			break;
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 12.7165f, 4.7109f, (4.6f + 1f) };
					*uParam3 = 310.6696f;
					return 1;
					break;
			}
			break;
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.0529f, -8.9175f, 1.6907f };
					*uParam3 = 102.156f;
					return 1;
					break;
			}
			break;
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.4799f, -7.5315f, 0.682f };
					*uParam3 = 264f;
					return 1;
					break;
			}
			break;
		case 37:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.352f, -3.356f, 5.7338f };
					*uParam3 = 338f;
					return 1;
					break;
			}
			break;
		case 39:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.3003f, -10.3127f, 4.5874f };
					*uParam3 = 262.789f;
					return 1;
					break;
			}
			break;
		case 40:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.76f, -5.95f, 4.59f };
					*uParam3 = 177.6766f;
					return 1;
					break;
			}
			break;
		case 36:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.6691f, -7.6405f, 0.6817f };
					*uParam3 = 159.156f;
					return 1;
					break;
			}
			break;
		case 28:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 1.228f, 4.044f, 0.7665f };
					*uParam3 = 165f;
					return 1;
					break;
			}
			break;
		case 42:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.2365f, -7.6073f, 6.2761f };
					*uParam3 = 157.0716f;
					return 1;
					break;
			}
			break;
		case 43:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.161f, -7.562f, 2.17f };
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.7668f, -7.8757f, 5.5559f };
					*uParam3 = 144.6939f;
					return 1;
					break;
			}
			break;
		case 45:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.6257f, -9.4927f, 5.5876f };
					*uParam3 = 257.4583f;
					return 1;
					break;
			}
			break;
		case 46:
			return func_79(iParam0, 26, uParam2, uParam3);
			break;
		case 47:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 8.4451f, 3.1568f, 1.47f };
					*uParam3 = 159f;
					return 1;
					break;
			}
			break;
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 9.0477f, -7.9397f, 0.6817f };
					*uParam3 = 88.5686f;
					return 1;
					break;
			}
			break;
		case 49:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
					return 0;
					break;
			}
			break;
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 21.7f, 9f, 1.7029f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		case 51:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 1.3278f, 1.534f, 0f };
					*uParam3 = 159.72f;
					return 1;
					break;
			}
			break;
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -3.0265f, 1.7627f, 0.1273f };
					*uParam3 = 338.5f;
					return 1;
					break;
			}
			break;
		case 53:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 15.2374f, 8.723f, 1.4495f };
					*uParam3 = 205.677f;
					return 1;
					break;
			}
			break;
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 28.7f, 8.8241f, 0.6f };
					*uParam3 = 39f;
					return 1;
					break;
			}
			break;
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(1.1936f, -9.0107f, 9.0567f) + Vector((0.03f - 0.02f), 0f, 0f) };
					*uParam3 = 94.2086f;
					return 1;
					break;
			}
			break;
		case 64:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(5.2891f, 2.0403f, -2.8213f) + Vector((0.03f - 0.05f), 0f, 0f) };
					*uParam3 = 336f;
					return 1;
					break;
			}
			break;
		case 56:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.84f };
					*uParam3 = 311.4f;
					return 1;
					break;
			}
			break;
		case 57:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.8418f };
					*uParam3 = 306.6f;
					return 1;
					break;
			}
			break;
		case 58:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 5.8092f, 5.7965f, 3.85f };
					*uParam3 = 337.4f;
					return 1;
					break;
			}
			break;
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 13.3221f, 0.0684f, 0.6817f };
					*uParam3 = 277.317f;
					return 1;
					break;
			}
			break;
		case 60:
			if (func_79(iParam0, 59, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
				*uParam3 = (*uParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
				return 1;
			}
			break;
		case 61:
		case 62:
		case 63:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -2.235f, 1.725f, 4.5877f };
					*uParam3 = 172.714f;
					return 1;
					break;
			}
			break;
		case 65:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-158f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 66:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-164f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 73:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 7.394f, 5.368f, 1.451f };
					*uParam3 = 235.0656f;
					return 1;
					break;
			}
			break;
		case 74:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 1.0704f, -1.4624f, 0.999f };
					*uParam3 = 157.44f;
					return 1;
					break;
			}
			break;
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 14.8186f, 6.8253f, 0.5f };
					*uParam3 = 87.3368f;
					return 1;
					break;
			}
			break;
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 13.6486f, 6.2253f, 0.45f };
					*uParam3 = 262.32f;
					return 1;
					break;
			}
			break;
		case 77:
			if (func_79(iParam0, 47, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*uParam3 = (*uParam3 + 0f);
				return 1;
			}
			break;
		case 79:
		case 86:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 16.319f, -1.375f, 0.6817f };
					*uParam3 = 334.126f;
					return 1;
					break;
			}
			break;
		case 80:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { -0.39f, 3.27f, 0f };
					*uParam3 = 154.126f;
					return 1;
					break;
			}
			break;
		case 81:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.0213f, 6.9622f, 1.39f };
					*uParam3 = 142.889f;
					return 1;
					break;
			}
			break;
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.128f, 6.842f, 0.4524f };
					*uParam3 = 54f;
					return 1;
					break;
			}
			break;
		case 87:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9019f, -23.8349f, -2.1f };
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		case 88:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9937f, -24.9005f, -2.18f };
					*uParam3 = 314.2132f;
					return 1;
					break;
			}
			break;
		case 89:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 31.7401f, -1.0943f, 0.6822f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		case 90:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -27.1728f, -3.75f, -1.626f };
					*uParam3 = (147f + 90f);
					return 1;
					break;
			}
			break;
		case 91:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 14.7722f, -10.9336f, -0.537f };
					*uParam3 = 110.8505f;
					return 1;
					break;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -17.2536f, 2.451f, -0.6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		case 93:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 23.9716f, -20.3533f, -3.18f };
					*uParam3 = 324f;
					return 1;
					break;
			}
			break;
		case 94:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.1416f, -2.0799f, -0.0145f };
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		case 95:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.2746f, -4.1995f, -0.0144f };
					*uParam3 = 69f;
					return 1;
					break;
			}
			break;
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 2.983f, -4.094f, 0.4629f };
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		case 97:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 5.5235f, 2.9133f, 0.7288f };
					*uParam3 = 71f;
					return 1;
					break;
			}
			break;
		case 99:
			switch (iParam0)
			{
				case 6:
					*uParam2 = { Vector(30.7131f, -1454.6757f, -42.2059f) - Vector(30.116f, -1435.9974f, -14.3064f) };
					*uParam3 = (84.7009f - 188.5817f);
					return 1;
					break;
				case 7:
					*uParam2 = { Vector(30.6803f, -1455.8477f, -40.7478f) - Vector(30.116f, -1435.9974f, -14.3064f) };
					*uParam3 = (90.6417f - 188.5817f);
					return 1;
					break;
			}
			break;
		case 100:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 2.0126f, 0.3422f, -0.0086f };
					*uParam3 = 354f;
					return 1;
					break;
			}
			break;
		case 101:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.2931f, 1.4476f, 1.0127f };
					*uParam3 = 61.7525f;
					return 1;
					break;
			}
			break;
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 0.0158f, 1.4182f, 0.9913f };
					*uParam3 = 119.008f;
					return 1;
					break;
			}
			break;
		case 104:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -3.467f, 0.074f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		case 105:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.1014f, -5.4089f, -0.013f };
					*uParam3 = 123.753f;
					return 1;
					break;
			}
			break;
		case 106:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.802f, -6.3295f, -0.01f };
					*uParam3 = 42.757f;
					return 1;
					break;
			}
			break;
		case 107:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -2.156f, -4.9564f, 1.4886f };
					*uParam3 = 136.309f;
					return 1;
					break;
			}
			break;
		case 108:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 7.2656f, 3.022f, -0.9061f };
					*uParam3 = 92.8891f;
					return 1;
					break;
			}
			break;
		case 109:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 0.5066f, 1.6992f, 0.0168f };
					*uParam3 = 115.77f;
					return 1;
					break;
			}
			break;
		case 110:
		case 111:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -0.2121f, -6.2791f, -0.0089f };
					*uParam3 = 114.3391f;
					return 1;
					break;
			}
			break;
		case 116:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 8.2458f, -0.7136f, -0.2503f };
					*uParam3 = 252.2687f;
					return 1;
					break;
			}
			break;
		case 117:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 2.334f, 1.6889f, 0.586f };
					*uParam3 = 109f;
					return 1;
					break;
			}
			break;
		case 112:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -0.6331f, 1.2093f, -0.0086f };
					*uParam3 = 137.1861f;
					return 1;
					break;
			}
			break;
		case 113:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -3.887f, -0.166f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		case 114:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { 3.5179f, 9.1355f, -1f };
					*uParam3 = 141.79f;
					return 1;
					break;
			}
			break;
		case 115:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f) };
					*uParam3 = 121.6591f;
					return 1;
					break;
			}
			break;
		case 118:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.2823f, 2.2595f, -1.0742f };
					*uParam3 = (170.2796f - 180f);
					return 1;
					break;
			}
			break;
		case 119:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.077f, -5.1446f, 0.9904f };
					*uParam3 = 107.1399f;
					return 1;
					break;
			}
			break;
		case 120:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -12.903f, -6.623f, -0.0406f };
					*uParam3 = 63.48f;
					return 1;
					break;
			}
			break;
		case 121:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.5514f, 5.393f, -0.0998f };
					*uParam3 = 327.483f;
					return 1;
					break;
			}
			break;
		case 122:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 0.9794f, -0.3043f, 0f };
					*uParam3 = 179.7612f;
					return 1;
					break;
			}
			break;
		case 123:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 11.9759f, 1f, -1.0728f };
					*uParam3 = 238.9422f;
					return 1;
					break;
			}
			break;
		case 124:
			switch (iParam0)
			{
				case 11:
				case 8:
					*uParam2 = { -0.576f, 1.671f, 0.601f };
					*uParam3 = 296f;
					return 1;
					break;
			}
			break;
		case 125:
			switch (iParam0)
			{
				case 12:
					*uParam2 = { -0.6532f, 0.9556f, -0.0087f };
					*uParam3 = 121.0556f;
					return 1;
					break;
			}
			break;
		case 126:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -0.18f, -4.173f, 0.9981f };
					*uParam3 = 216.61f;
					return 1;
					break;
			}
			break;
		case 127:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.5937f, 0.3521f, 1f };
					*uParam3 = 119.4f;
					return 1;
					break;
			}
			break;
		case 128:
			switch (iParam0)
			{
				case 13:
					if (Global_113386.f_18533[2] == 299)
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (34.661f - 90.6729f);
						return 1;
					}
					else if (((Global_113386.f_18533[2] == 300 || Global_113386.f_18533[2] == 301) || Global_113386.f_18533[2] == 302) || Global_113386.f_18533[2] == 303)
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (32f - 90.6729f);
						return 1;
					}
					if (__LIB_0__.func_502())
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (34.661f - 90.6729f);
						return 1;
					}
					else
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (32f - 90.6729f);
						return 1;
					}
					break;
			}
			break;
		case 129:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector(10.6327f, -1519.561f, -1156.422f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
					*uParam3 = (102f - 90.6729f);
					return 1;
					break;
			}
			break;
		case 130:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -2.8352f, 0.0552f, 0f };
					*uParam3 = 334.44f;
					return 1;
					break;
			}
			break;
		case 131:
			switch (iParam0)
			{
				case 13:
					if (func_79(iParam0, 130, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
						*uParam3 = (*uParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
						return 1;
					}
					break;
			}
			break;
		case 132:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -7.213f, -1.4536f, 0.9981f };
					*uParam3 = 42.6f;
					return 1;
					break;
			}
			break;
		case 133:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector((9.6327f + 1f), -1518.7363f, -1148.4664f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
					*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					return 1;
					break;
			}
			break;
		case 134:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 5.24f, 6.217f, 0.998f };
					*uParam3 = 315.72f;
					return 1;
					break;
			}
			break;
		case 135:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.6447f, 0.7635f, 1.0507f };
					*uParam3 = 296.683f;
					return 1;
					break;
			}
			break;
		case 136:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 3.968f, -1.04f, 0f };
					*uParam3 = 214.92f;
					return 1;
					break;
				case 14:
					*uParam2 = { 4.617f, -1.1314f, 0f };
					*uParam3 = 39.4085f;
					return 1;
					break;
			}
			break;
		case 137:
		case 138:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		case 140:
		case 141:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		default:
			*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
			return 0;
			break;
	}
	*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
	*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	return 0;
}

int func_81(int iParam0, var uParam1, var uParam2)//Position - 0x75D3
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*uParam2 = 111f;
			return 1;
			break;
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*uParam2 = 194.1887f;
			return 1;
			break;
		case 9:
			return func_81(8, uParam1, uParam2);
			break;
		case 10:
			return func_81(8, uParam1, uParam2);
			break;
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*uParam2 = 201.6328f;
			return 1;
			break;
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*uParam2 = 350.0509f;
			return 1;
			break;
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*uParam2 = 0.7896f;
			return 1;
			break;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*uParam2 = 42f;
			return 1;
			break;
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*uParam2 = -129f;
			return 1;
			break;
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*uParam2 = 267.1409f;
			return 1;
			break;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*uParam2 = 340.0526f;
			return 1;
			break;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*uParam2 = 22.9566f;
			return 1;
			break;
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*uParam2 = 152.8118f;
			return 1;
			break;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*uParam2 = (250.4535f - 360f);
			return 1;
			break;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*uParam2 = 119.603f;
			return 1;
			break;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*uParam2 = 168f;
			return 1;
			break;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*uParam2 = 51.7279f;
			return 1;
			break;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*uParam2 = 151.2504f;
			return 1;
			break;
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*uParam2 = 156.8827f;
			return 1;
			break;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*uParam2 = 7.2736f;
			return 1;
			break;
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*uParam2 = 97.2736f;
			return 1;
			break;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*uParam2 = 4f;
			return 1;
			break;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*uParam2 = 162.693f;
			return 1;
			break;
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*uParam2 = 128.9946f;
			return 1;
			break;
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*uParam2 = 32.2721f;
			return 1;
			break;
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*uParam2 = 192.8091f;
			return 1;
			break;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return 1;
			break;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return 1;
			break;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*uParam2 = -3.7534f;
			return 1;
			break;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.3408f, 798.4536f) + Vector(1f, 0f, 0f) };
			*uParam2 = 90f;
			return 1;
			break;
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*uParam2 = 355.326f;
			return 1;
			break;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*uParam2 = 334.1068f;
			return 1;
			break;
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*uParam2 = 46.8853f;
			return 1;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*uParam2 = 165.9421f;
			return 1;
			break;
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*uParam2 = 221.228f;
			return 1;
			break;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*uParam2 = (42f + 180f);
			return 1;
			break;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*uParam2 = 98.9764f;
			return 1;
			break;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*uParam2 = 220.9554f;
			return 1;
			break;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*uParam2 = 83.9922f;
			return 1;
			break;
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*uParam2 = -64.1366f;
			return 1;
			break;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*uParam2 = 127.7547f;
			return 1;
			break;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*uParam2 = -63f;
			return 1;
			break;
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*uParam2 = 90.0339f;
			return 1;
			break;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*uParam2 = 84.6231f;
			return 1;
			break;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*uParam2 = 99.6049f;
			return 1;
			break;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*uParam2 = 120f;
			return 1;
			break;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*uParam2 = 211.8223f;
			return 1;
			break;
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*uParam2 = 136.0867f;
			return 1;
			break;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*uParam2 = 27.0648f;
			return 1;
			break;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*uParam2 = 27.0648f;
			return 1;
			break;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		default:
			break;
	}
	return 0;
}

void func_84()//Position - 0x8042
{
	func_201();
	func_85();
}

void func_85()//Position - 0x8052
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		switch (iVar1)
		{
			case 0:
				func_199();
				break;
			case 1:
				func_195();
				break;
			case 2:
				func_194();
				break;
			case 3:
				func_192();
				break;
			case 4:
				func_191();
				break;
			case 5:
				func_190();
				break;
			case 6:
				func_189();
				break;
			case 7:
				func_188();
				break;
			case 8:
				func_185();
				break;
			case 9:
				func_183();
				break;
			case 10:
				func_182();
				break;
			case 11:
				func_181();
				break;
			case 12:
				func_180();
				break;
			case 13:
				func_179();
				break;
			case 14:
				func_175();
				break;
			case 15:
				func_174();
				break;
			case 16:
				func_173();
				break;
			case 17:
				func_172();
				break;
			case 18:
				func_171();
				break;
			case 19:
				func_170();
				break;
			case 20:
				func_166();
				break;
			case 21:
				func_164();
				break;
			case 22:
				func_162();
				break;
			case 23:
				func_161();
				break;
			case 24:
				func_160();
				break;
			case 25:
				func_157();
				break;
			case 26:
				func_155();
				break;
			case 27:
				func_150();
				break;
			case 28:
				func_142();
				break;
			case 29:
				func_136();
				break;
			case 30:
				func_133();
				break;
			case 31:
				func_86();
				break;
			default:
				break;
		}
		SYSTEM::WAIT(0);
		iVar0++;
	}
}

void func_86()//Position - 0x8223
{
	int iVar0;
	iVar0 = 31;
	func_132(iVar0);
	func_131();
	func_130(-1, 0);
	func_129(0, 1, 0);
	func_129(1, 1, 0);
	func_129(2, 0, 0);
	func_128(161, 1);
	func_127(62, -2, 161, -1, -1);
	func_126(0);
	func_125(153, 0);
	func_124(joaat("TEXT_MARTIN_THREAT"));
	func_123(24, 4, -643694497, -1);
	func_123(24, 4, -278713375, -1);
	func_122(58, 1, 0);
	func_129(0, 0, 0);
	func_129(1, 0, 0);
	func_129(2, 1, 0);
	func_122(117, 1, 0);
	func_121(2, 1, 1);
	func_120(192);
	func_125(115, 0);
	func_119(3, 1, 1, 0);
	func_118(35, 1);
	func_119(4, 1, 1, 0);
	func_117(2, 1);
	func_118(6, 1);
	func_116(20, 1);
	func_116(26, 1);
	func_113(joaat("WEAPON_PUMPSHOTGUN"), 1);
	func_112(105, 0, 0);
	func_119(179, 1, 1, 0);
	func_119(174, 0, 1, 0);
	func_119(178, 0, 1, 0);
	func_119(175, 0, 1, 0);
	func_119(176, 0, 1, 0);
	func_119(177, 0, 1, 0);
	func_119(173, 1, 1, 0);
	func_118(36, 0);
	func_111(4, 99, 5, 2107010167, 37500, 10000, -1, 8, -1, 0);
	func_120(173);
	func_125(27, 0);
	func_109(31, 1);
	func_120(208);
	func_120(229);
	func_108(29, 1);
	func_107(23, 0, 0);
	func_120(167);
	func_106(4);
	func_105(1, -2, -1, -2);
	func_104(54, 0);
	func_120(223);
	func_128(162, 1);
	func_119(78, 1, 1, 0);
	func_127(63, -2, 162, -1, -1);
	func_125(87, 0);
	func_125(99, 0);
	func_103(4, 20, 1, joaat("TEXT_TREV_LOST_HANGER"), 20000, 10000, -1, 100, -1, 0, 0);
	func_111(7, 96, 6, 2021846885, 220000, 10000, -1, 0, -1, 0);
	func_125(161, 0);
	func_125(28, 0);
	func_120(224);
	func_102("AF_Intro_T_Sandy", 1424);
	func_113(joaat("WEAPON_SNIPERRIFLE"), 1);
	func_113(joaat("WEAPON_MOLOTOV"), 1);
	func_111(7, 97, 6, 1511064644, 120000, 10000, -1, 0, -1, 0);
	func_101(4, 0);
	func_109(25, 1);
	func_107(214, 0, 0);
	func_120(170);
	func_102("controller_Trafficking", 1424);
	func_104(55, 0);
	func_128(163, 1);
	func_127(64, -2, 163, -1, -1);
	func_100(131, 2, 0);
	func_122(81, 0, 0);
	func_119(38, 1, 1, 0);
	func_119(39, 1, 1, 0);
	func_119(40, 1, 1, 0);
	func_119(41, 1, 1, 0);
	func_119(42, 1, 1, 0);
	func_119(43, 1, 1, 0);
	func_119(44, 1, 1, 0);
	func_119(45, 1, 1, 0);
	func_119(46, 1, 1, 0);
	func_119(47, 1, 1, 0);
	func_119(37, 1, 1, 0);
	func_121(3, 1, 1);
	func_121(2, 1, 0);
	func_118(7, 1);
	func_118(6, 0);
	func_122(59, 1, 0);
	func_129(0, 1, 1);
	func_129(1, 1, 1);
	func_98("AM_H_SWTCH6" /* GXT: Michael, Franklin and Trevor are now all available to SWITCH between. */, 7500, 2, 7, 0, 0);
	func_122(58, 0, 0);
	func_109(54, 0);
	func_113(joaat("WEAPON_STICKYBOMB"), 1);
	func_96(2, 45, 12);
	func_111(7, 97, 6, 1217225025, 1100000, 10000, -1, 0, -1, 0);
	func_125(59, 0);
	func_125(60, 0);
	func_125(61, 0);
	func_95(-643694497);
	func_95(-278713375);
	func_123(20, 4, 1089542219, -1);
	func_103(4, 20, 1, 152157591, 220000, 20000, 11, 0, -1, 0, 0);
	func_103(4, 20, 5, joaat("TEXT_PILOTS_UNLOCK"), 70000, 10000, 38, 9, -1, 0, 0);
	func_120(175);
	func_119(192, 1, 1, 0);
	func_119(193, 1, 1, 0);
	func_119(191, 1, 1, 0);
	func_120(174);
	func_120(206);
	func_107(216, 0, 0);
	func_120(172);
	func_120(217);
	func_120(183);
	func_100(31, 0, 0);
	func_93(1, 12, 1, 15000, 5000, 1595158098, -1, -1, 75, -1, 64);
	func_93(2, 12, 1, 15000, 5000, -420969532, -1, -1, 75, -1, 64);
	func_125(29, 0);
	func_120(225);
	func_109(37, 1);
	func_120(211);
	func_116(42, 1);
	func_101(12, 0);
	func_104(56, 0);
	func_128(164, 1);
	func_119(135, 0, 1, 0);
	func_119(136, 0, 1, 0);
	func_119(137, 0, 1, 0);
	func_119(138, 0, 1, 0);
	func_119(141, 0, 1, 0);
	func_119(142, 0, 1, 0);
	func_119(144, 0, 1, 0);
	func_119(139, 0, 1, 0);
	func_119(140, 0, 1, 0);
	func_119(143, 0, 1, 0);
	func_119(147, 0, 1, 0);
	func_119(148, 0, 0, 0);
	func_127(65, -2, 164, -1, -1);
	func_119(147, 1, 1, 0);
	func_119(148, 1, 1, 0);
	func_119(145, 2, 1, 0);
	func_121(4, 1, 1);
	func_121(3, 0, 0);
	func_118(7, 0);
	func_118(8, 1);
	func_122(119, 1, 0);
	func_95(-805704433);
	func_123(19, 4, -835252192, -1);
	func_91(32, 2);
	func_119(65, 0, 1, 0);
	func_119(66, 0, 1, 0);
	func_119(78, 0, 1, 0);
	func_109(27, 1);
	func_120(207);
	func_106(15);
	func_88();
	func_87(iVar0);
}

void func_87(int iParam0)//Position - 0x87C4
{
	if (!iParam0 < 32)
	{
		return;
	}
	if (Global_78588.f_12526[iParam0 /*2*/] == -1)
	{
		return;
	}
	if (!Global_78588.f_12526[iParam0 /*2*/].f_1 == -1)
	{
		return;
	}
	if (Global_78588.f_12526[iParam0 /*2*/] == Global_78588.f_12591)
	{
		Global_78588.f_12526[iParam0 /*2*/] = -1;
		return;
	}
	Global_78588.f_12526[iParam0 /*2*/].f_1 = (Global_78588.f_12591 - 1);
	if (Global_113386.f_9085.f_2[iParam0 /*3*/].f_1 == -1)
	{
		Global_113386.f_9085.f_2[iParam0 /*3*/].f_1 = Global_78588.f_12526[iParam0 /*2*/];
	}
}

void func_88()//Position - 0x8867
{
	int iVar0;
	iVar0 = 12;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 1909997983;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = -1;
	func_89(iVar0);
}

void func_89(int iParam0)//Position - 0x88BB
{
	Global_78588.f_12591++;
	if (!iParam0 == 12)
	{
		Global_78588.f_12592[iParam0]++;
	}
}

void func_90(int iParam0)//Position - 0x88F4
{
	if (Global_78588.f_12591 >= 1900)
	{
		return;
	}
	switch (iParam0)
	{
		case 12:
		case 0:
			break;
		case 1:
			if (Global_78588.f_12592[iParam0] >= 870)
			{
				return;
			}
			break;
		case 2:
			if (Global_78588.f_12592[iParam0] >= 280)
			{
				return;
			}
			break;
		case 7:
			if (Global_78588.f_12592[iParam0] >= 169)
			{
				return;
			}
			break;
		case 8:
			if (Global_78588.f_12592[iParam0] >= 10)
			{
				return;
			}
			break;
		case 3:
			if (Global_78588.f_12592[iParam0] >= 1)
			{
				return;
			}
			break;
		case 4:
			if (Global_78588.f_12592[iParam0] >= 53)
			{
				return;
			}
			break;
		case 5:
			if (Global_78588.f_12592[iParam0] >= 1)
			{
				return;
			}
			break;
		case 6:
			if (Global_78588.f_12592[iParam0] >= 1)
			{
				return;
			}
			break;
		default:
			break;
	}
}

void func_91(int iParam0, int iParam1)//Position - 0x8A04
{
	int iVar0;
	iVar0 = 2;
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		return;
	}
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 749713072;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_92(Global_78588.f_12592[iVar0], iParam1, iParam0);
	func_89(iVar0);
}

void func_92(int iParam0, int iParam1, int iParam2)//Position - 0x8A90
{
	Global_78588.f_3590[iParam0 /*2*/] = iParam1;
	Global_78588.f_3590[iParam0 /*2*/].f_1 = iParam2;
}

void func_93(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x8AB4
{
	int iVar0;
	iVar0 = 7;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 1289835772;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_94(Global_78588.f_12592[iVar0], iParam5, iParam6, iParam0, iParam1, iParam2, iParam3, iParam4, iParam10, iParam7, iParam8, iParam9);
	func_89(iVar0);
}

void func_94(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x8B36
{
	Global_78588.f_4824[iParam0 /*11*/] = iParam1;
	Global_78588.f_4824[iParam0 /*11*/].f_1 = iParam2;
	Global_78588.f_4824[iParam0 /*11*/].f_2 = uParam3;
	Global_78588.f_4824[iParam0 /*11*/].f_3 = uParam4;
	Global_78588.f_4824[iParam0 /*11*/].f_4 = uParam5;
	Global_78588.f_4824[iParam0 /*11*/].f_5 = iParam6;
	Global_78588.f_4824[iParam0 /*11*/].f_6 = iParam7;
	Global_78588.f_4824[iParam0 /*11*/].f_7 = iParam8;
	Global_78588.f_4824[iParam0 /*11*/].f_8 = iParam9;
	Global_78588.f_4824[iParam0 /*11*/].f_9 = iParam10;
	Global_78588.f_4824[iParam0 /*11*/].f_10 = iParam11;
}

void func_95(int iParam0)//Position - 0x8BE1
{
	int iVar0;
	iVar0 = 0;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -885022960;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = iParam0;
	func_89(iVar0);
}

void func_96(int iParam0, int iParam1, int iParam2)//Position - 0x8C35
{
	int iVar0;
	if (iParam0 > 2)
	{
	}
	if (iParam1 <= 0)
	{
	}
	iVar0 = 1;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 1845155857;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_97(Global_78588.f_12592[iVar0], iParam0, iParam1, iParam2, 0);
	func_89(iVar0);
}

void func_97(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8CB4
{
	Global_78588.f_109[iParam0 /*4*/] = iParam1;
	Global_78588.f_109[iParam0 /*4*/].f_1 = iParam2;
	Global_78588.f_109[iParam0 /*4*/].f_2 = iParam3;
	Global_78588.f_109[iParam0 /*4*/].f_3 = iParam4;
}

void func_98(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x8CF2
{
	int iVar0;
	struct<8> Var1;
	int iVar2;
	iVar0 = 4;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -2146402779;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	StringCopy(&Var1, sParam0, 32);
	iVar2 = iParam2;
	iVar2 = (iVar2 + (iParam5 * 1000000));
	func_99(Global_78588.f_12592[iVar0], Var1, iVar2, iParam1, iParam3, iParam4);
	func_89(iVar0);
}

void func_99(int iParam0, char[32] cParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x8D81
{
	Global_78588.f_4160[iParam0 /*12*/] = { cParam1 };
	Global_78588.f_4160[iParam0 /*12*/].f_8 = iParam2;
	Global_78588.f_4160[iParam0 /*12*/].f_9 = iParam3;
	Global_78588.f_4160[iParam0 /*12*/].f_10 = iParam4;
	Global_78588.f_4160[iParam0 /*12*/].f_11 = iParam5;
}

void func_100(int iParam0, int iParam1, bool bParam2)//Position - 0x8DD8
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		return;
	}
	iVar1 = 0;
	if (bParam2)
	{
		iVar1 = 1;
	}
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 744218195;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_97(Global_78588.f_12592[iVar0], iParam1, iParam0, iVar1, 0);
	func_89(iVar0);
}

void func_101(int iParam0, int iParam1)//Position - 0x8E72
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	func_90(iVar0);
	iVar1 = iParam0;
	iVar1 = (iVar1 + (iParam1 * 1000000));
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -964850613;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = iVar1;
	func_89(iVar0);
}

void func_102(char* sParam0, int iParam1)//Position - 0x8ED6
{
	int iVar0;
	struct<8> Var1;
	iVar0 = 4;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 566451265;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	StringCopy(&Var1, sParam0, 32);
	func_99(Global_78588.f_12592[iVar0], Var1, iParam1, 0, 0, 0);
	func_89(iVar0);
}

void func_103(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x8F52
{
	int iVar0;
	iVar0 = 7;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 322211806;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_94(Global_78588.f_12592[iVar0], iParam3, iParam0, iParam1, iParam2, iParam4, iParam5, iParam9, iParam10, iParam6, iParam7, iParam8);
	func_89(iVar0);
}

void func_104(int iParam0, int iParam1)//Position - 0x8FD4
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	func_90(iVar0);
	iVar1 = iParam0;
	iVar1 = (iVar1 + (iParam1 * 1000000));
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -1982716178;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = iVar1;
	func_89(iVar0);
}

void func_105(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9038
{
	int iVar0;
	iVar0 = 1;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -1309218325;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_97(Global_78588.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_89(iVar0);
}

void func_106(int iParam0)//Position - 0x90AC
{
	int iVar0;
	iVar0 = 0;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 1677774865;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = iParam0;
	func_89(iVar0);
}

void func_107(int iParam0, int iParam1, int iParam2)//Position - 0x9100
{
	int iVar0;
	iVar0 = 0;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 485486536;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = iParam2;
	func_89(iVar0);
}

void func_108(int iParam0, bool bParam1)//Position - 0x9154
{
	int iVar0;
	int iVar1;
	iVar0 = 2;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -69665631;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	iVar1 = 0;
	if (bParam1)
	{
		iVar1 = 1;
	}
	func_92(Global_78588.f_12592[iVar0], iParam0, iVar1);
	func_89(iVar0);
}

void func_109(int iParam0, bool bParam1)//Position - 0x91CF
{
	int iVar0;
	iVar0 = 1;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 939785963;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_97(Global_78588.f_12592[iVar0], iParam0, __LIB_0__.func_138(bParam1, 1, 0), -1, -1);
	func_89(iVar0);
}

void func_111(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x925E
{
	int iVar0;
	iVar0 = 7;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -656046692;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_94(Global_78588.f_12592[iVar0], iParam3, iParam0, iParam1, iParam2, iParam4, iParam5, iParam9, 0, iParam6, iParam7, iParam8);
	func_89(iVar0);
}

void func_112(int iParam0, int iParam1, int iParam2)//Position - 0x92DF
{
	int iVar0;
	int iVar1;
	iVar0 = 2;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -436729813;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	iVar1 = 0;
	if (iParam1 == 0)
	{
		iVar1 = 1;
	}
	iVar1 = (iVar1 + (iParam2 * 1000000));
	func_92(Global_78588.f_12592[iVar0], iParam0, iVar1);
	func_89(iVar0);
}

void func_113(int iParam0, bool bParam1)//Position - 0x9367
{
	int iVar0;
	int iVar1;
	iVar0 = 2;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 2088328892;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	iVar1 = 0;
	if (bParam1)
	{
		iVar1 = 1;
	}
	func_92(Global_78588.f_12592[iVar0], __LIB_7__.func_250(iParam0), iVar1);
	func_89(iVar0);
}

void func_116(int iParam0, bool bParam1)//Position - 0x99D4
{
	int iVar0;
	int iVar1;
	iVar0 = 2;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -806419157;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	if (bParam1)
	{
		iVar1 = 1;
	}
	else
	{
		iVar1 = 0;
	}
	func_92(Global_78588.f_12592[iVar0], iParam0, iVar1);
	func_89(iVar0);
}

void func_117(int iParam0, bool bParam1)//Position - 0x9A52
{
	int iVar0;
	int iVar1;
	iVar0 = 2;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 424223666;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	if (!__LIB_0__.func_43(iParam0))
	{
	}
	iVar1 = 0;
	if (bParam1)
	{
		iVar1 = 1;
	}
	func_92(Global_78588.f_12592[iVar0], iParam0, iVar1);
	func_89(iVar0);
}

void func_118(int iParam0, bool bParam1)//Position - 0x9AD7
{
	int iVar0;
	int iVar1;
	iVar0 = 2;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -319289499;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	iVar1 = 0;
	if (bParam1)
	{
		iVar1 = 1;
	}
	func_92(Global_78588.f_12592[iVar0], iParam0, iVar1);
	func_89(iVar0);
}

void func_119(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x9B52
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -1110793538;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	iVar1 = 0;
	if (bParam2)
	{
		iVar1 = 1;
	}
	func_97(Global_78588.f_12592[iVar0], iParam0, iParam1, iVar1, iParam3);
	func_89(iVar0);
}

void func_120(int iParam0)//Position - 0x9BD1
{
	int iVar0;
	iVar0 = 12;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 485486536;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = -1;
	func_89(iVar0);
}

void func_121(int iParam0, bool bParam1, bool bParam2)//Position - 0x9C25
{
	int iVar0;
	int iVar1;
	iVar0 = 2;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -1334818538;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	if (bParam1)
	{
		MISC::SET_BIT(&iVar1, 0);
	}
	if (bParam2)
	{
		MISC::SET_BIT(&iVar1, 1);
	}
	func_92(Global_78588.f_12592[iVar0], iParam0, iVar1);
	func_89(iVar0);
}

void func_122(int iParam0, bool bParam1, int iParam2)//Position - 0x9CAD
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 1144707570;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	iVar1 = 0;
	if (bParam1)
	{
		iVar1 = 1;
	}
	func_97(Global_78588.f_12592[iVar0], iParam0, iVar1, iParam2, -1);
	func_89(iVar0);
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9D2B
{
	int iVar0;
	iVar0 = 1;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -1030591046;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_97(Global_78588.f_12592[iVar0], iParam2, iParam1, iParam0, iParam3);
	func_89(iVar0);
}

void func_124(int iParam0)//Position - 0x9D9F
{
	int iVar0;
	iVar0 = 0;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -885022960;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = iParam0;
	func_89(iVar0);
}

void func_125(int iParam0, int iParam1)//Position - 0x9DF3
{
	int iVar0;
	iVar0 = 2;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -115271859;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_92(Global_78588.f_12592[iVar0], iParam0, iParam1);
	func_89(iVar0);
}

void func_126(int iParam0)//Position - 0x9E63
{
	int iVar0;
	iVar0 = 0;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 918415331;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = iParam0;
	func_89(iVar0);
}

void func_127(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x9EB7
{
	int iVar0;
	if (iParam4 == -1)
	{
		iParam4 = iParam1;
	}
	iVar0 = 1;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -2093459088;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	Global_91229[iParam0 /*34*/].f_7 = Global_78588.f_12592[iVar0];
	func_97(Global_78588.f_12592[iVar0], iParam0, iParam1, iParam2, iParam4);
	func_89(iVar0);
}

void func_128(int iParam0, bool bParam1)//Position - 0x9F4A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < Global_78588.f_12591)
	{
		if (Global_78588.f_6825[iVar1 /*3*/] == 531432813)
		{
			iVar2 = Global_78588.f_6825[iVar1 /*3*/].f_2;
			iVar3 = Global_78588.f_109[iVar2 /*4*/];
			if (iVar3 == iParam0)
			{
				return;
			}
		}
		iVar1++;
	}
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 531432813;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	iVar4 = 0;
	if (bParam1)
	{
		iVar4 = 1;
	}
	func_97(Global_78588.f_12592[iVar0], iParam0, iVar4, -1, -1);
	func_89(iVar0);
}

void func_129(int iParam0, bool bParam1, int iParam2)//Position - 0xA017
{
	int iVar0;
	int iVar1;
	iVar0 = 2;
	iVar1 = 0;
	if (bParam1)
	{
		iVar1 = 1;
	}
	iVar1 = (iVar1 + (iParam2 * 1000000));
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -1597354430;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
	}
	func_92(Global_78588.f_12592[iVar0], iParam0, iVar1);
	func_89(iVar0);
}

void func_130(int iParam0, bool bParam1)//Position - 0xA0B7
{
	int iVar0;
	int iVar1;
	iVar0 = 2;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 2048332261;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	iVar1 = 0;
	if (bParam1)
	{
		iVar1 = 1;
	}
	func_92(Global_78588.f_12592[iVar0], iParam0, iVar1);
	func_89(iVar0);
}

void func_131()//Position - 0xA132
{
	int iVar0;
	iVar0 = 12;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -1750917831;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = -1;
	func_89(iVar0);
}

void func_132(int iParam0)//Position - 0xA186
{
	if (!iParam0 < 32)
	{
		return;
	}
	if (!Global_78588.f_12526[iParam0 /*2*/] == -1)
	{
		return;
	}
	Global_78588.f_12526[iParam0 /*2*/] = Global_78588.f_12591;
}

void func_133()//Position - 0xA1C0
{
	int iVar0;
	iVar0 = 30;
	func_132(iVar0);
	func_131();
	func_102("ambient_Solomon", 1424);
	func_128(158, 1);
	func_127(59, -2, 158, -1, -1);
	func_125(143, 0);
	func_113(joaat("WEAPON_REMOTESNIPER"), 1);
	func_100(26, 0, 1);
	func_135(55);
	func_106(24);
	func_101(46, 0);
	func_101(24, 0);
	func_104(51, 0);
	func_128(159, 1);
	func_127(60, -2, 159, -1, -1);
	func_122(66, 1, 0);
	func_104(52, 0);
	func_104(53, 0);
	func_105(18, -2, -1, -2);
	func_128(160, 1);
	func_127(61, -2, 160, -1, -1);
	func_122(57, 1, 0);
	func_134(0, 26, 0, 6000, 6000, joaat("CALL_SOLOMON3_DONE"), -1, 0, -1, 32);
	func_120(227);
	func_120(232);
	func_107(229, 0, 0);
	func_120(233);
	func_107(230, 0, 0);
	func_120(234);
	func_107(231, 0, 0);
	func_120(235);
	func_107(232, 0, 0);
	func_120(236);
	func_107(233, 0, 0);
	func_120(237);
	func_107(234, 0, 0);
	func_120(238);
	func_122(57, 0, 0);
	func_113(joaat("WEAPON_SMG"), 1);
	func_119(103, 1, 1, 0);
	func_119(102, 1, 1, 0);
	func_119(104, 1, 1, 0);
	func_119(111, 1, 1, 0);
	func_119(112, 1, 1, 0);
	func_101(49, 0);
	func_101(39, 0);
	func_95(-1949184344);
	func_123(29, 1, 2065444157, -1);
	func_123(29, 2, 624853379, -1);
	func_88();
	func_87(iVar0);
}

void func_134(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0xA374
{
	int iVar0;
	iVar0 = 7;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -1034402456;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_94(Global_78588.f_12592[iVar0], iParam5, iParam1, iParam0, iParam2, iParam3, iParam4, iParam9, 0, iParam6, iParam7, iParam8);
	if (BitTest(iParam9, 7))
	{
	}
	func_89(iVar0);
}

void func_135(int iParam0)//Position - 0xA3FC
{
	int iVar0;
	iVar0 = 0;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 952363713;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = iParam0;
	func_89(iVar0);
}

void func_136()//Position - 0xA450
{
	int iVar0;
	iVar0 = 29;
	func_132(iVar0);
	func_131();
	func_134(0, 36, 1, 30000, 30000, joaat("CALL_SHRINK1_UNLOCK"), -1, 0, -1, 32);
	func_141(0, 0);
	func_98("AM_H_SHRINK" /* GXT: Michael can now see Dr. Friedlander at ~BLIP_SHRINK~ */, 7500, 2, 1, 0, 0);
	func_128(149, 1);
	func_141(0, 1);
	func_127(54, -2, 149, -1, -1);
	func_104(45, 0);
	func_128(150, 1);
	func_141(1, 0);
	func_127(55, -2, 150, -1, -1);
	func_140(360000);
	func_104(46, 0);
	func_140(30000);
	func_120(151);
	func_141(2, 0);
	func_103(1, 36, 1, joaat("TEXT_SHRINK3_UNLOCK"), 10000, 10000, -1, 0, -1, 32, 0);
	func_128(152, 1);
	func_130(56, 0);
	func_141(2, 1);
	func_139(1, 36, -2, -1, -2, 0);
	func_138(56, -2, 152, -1);
	func_126(0);
	func_104(47, 0);
	func_120(153);
	func_141(3, 0);
	func_103(1, 36, 1, joaat("TEXT_SHRINK4_UNLOCK"), 10000, 10000, -1, 0, -1, 32, 0);
	func_128(154, 1);
	func_130(57, 0);
	func_141(3, 1);
	func_139(1, 36, -2, -1, -2, 1);
	func_138(57, -2, 154, -1);
	func_128(155, 1);
	func_126(1);
	func_104(48, 0);
	func_104(49, 0);
	func_104(50, 0);
	func_128(156, 1);
	func_141(4, 0);
	func_127(58, -2, 156, -1, -1);
	func_137(80, 157, -2, -1, 0);
	func_111(1, 36, 6, -1718545517, 300000, 10000, -1, 0, -1, 0);
	func_128(157, 1);
	func_88();
	func_87(iVar0);
}

void func_137(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xA608
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -1532130030;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	iVar1 = iParam0;
	iVar1 = (iVar1 + (iParam4 * 1000000));
	func_97(Global_78588.f_12592[iVar0], iVar1, iParam1, iParam2, iParam3);
	func_89(iVar0);
}

void func_138(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA68C
{
	int iVar0;
	if (iParam3 == -1)
	{
		iParam3 = iParam1;
	}
	iVar0 = 1;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -868169264;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	Global_91229[iParam0 /*34*/].f_7 = Global_78588.f_12592[iVar0];
	func_97(Global_78588.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_89(iVar0);
}

void func_139(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xA71F
{
	int iVar0;
	iVar0 = 7;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 1370985682;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_94(Global_78588.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, 0, 0, -1, 0, -1);
	func_89(iVar0);
}

void func_140(int iParam0)//Position - 0xA79C
{
	int iVar0;
	iVar0 = 0;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 427205337;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = iParam0;
	if (iParam0 < 0)
	{
		return;
	}
	func_89(iVar0);
}

void func_141(int iParam0, int iParam1)//Position - 0xA7F9
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	func_90(iVar0);
	iVar1 = iParam0;
	iVar1 = (iVar1 + (iParam1 * 1000000));
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 553813353;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = iVar1;
	func_89(iVar0);
}

void func_142()//Position - 0xA85D
{
	int iVar0;
	iVar0 = 28;
	func_132(iVar0);
	func_131();
	func_112(67, 0, 0);
	func_112(68, 0, 0);
	func_112(69, 0, 0);
	func_125(96, 0);
	func_102("heist_ctrl_rural", 2050);
	func_130(91, 0);
	func_122(37, 0, 0);
	func_122(38, 0, 0);
	func_122(39, 0, 0);
	func_128(67, 1);
	func_127(91, -2, 67, -1, -1);
	func_137(37, 66, -2, -2, 0);
	func_122(38, 1, 0);
	func_128(66, 0);
	func_149(9, 5);
	func_148(2, 0, 13, -2, -1, 1, 0);
	func_140(500);
	func_148(2, 1, 2, -2, -1, 1, 1);
	func_122(37, 0, 1);
	func_122(38, 0, 1);
	func_122(39, 1, 0);
	func_147(2, 1, 1, 0);
	func_140(501);
	func_146(2, 0, 1, 40);
	func_137(40, -1, -2, -2, 0);
	func_122(39, 0, 1);
	func_122(40, 0, 0);
	func_126(0);
	func_107(224, 0, 0);
	func_100(12, 2, 1);
	func_124(joaat("TEXT_EXILE2_UNLOCK"));
	func_93(4, 1, 0, 6000, 6000, joaat("CALL_EXILE_CALL1"), -1, -1, 0, -1, 104);
	func_101(7, 0);
	func_103(5, 12, 1, joaat("TEXT_RBH_PREP_UNLOCK"), 30000, 10000, -1, 0, -1, 1064, 0);
	func_140(3000);
	func_128(68, 1);
	func_127(92, -2, 68, -1, -1);
	func_118(42, 1);
	func_147(2, 3, 1, 0);
	func_119(168, 1, 1, 0);
	func_112(67, 1, 0);
	func_112(68, 1, 0);
	func_112(69, 1, 0);
	func_144(0, 12, 0, 6000, 6000, -2116452823, joaat("CALL_RURAL_HEIST_UNLOCK"), -1141220854, 19, -1, 89, 0);
	func_144(2, 12, 0, 6000, 6000, 1880611494, joaat("CALL_RURAL_HEIST_UNLOCK"), -1276059507, 19, -1, 89, 0);
	func_137(41, -2, -1, -2, 0);
	func_112(67, 0, 1);
	func_112(68, 0, 1);
	func_112(69, 0, 1);
	func_143(15, 69, -2, -2);
	func_104(44, 0);
	func_93(7, 12, 0, 6000, 6000, joaat("CALL_RURAL_HEIST_UNLOCK"), joaat("TEXT_RBH_UNLOCK"), 67, 0, -1, 168);
	func_128(69, 1);
	func_119(168, 1, 1, 1);
	func_127(93, -2, 69, -1, -1);
	func_101(8, 0);
	func_119(5, 1, 1, 0);
	func_118(42, 0);
	func_122(5, 1, 0);
	func_113(joaat("WEAPON_MG"), 1);
	func_113(joaat("WEAPON_MINIGUN"), 1);
	func_96(2, 39, 12);
	func_124(-1293573249);
	func_105(7, 70, -2, 70);
	func_93(1, 46, 6, 300000, 10000, joaat("CALL_HACKER_3"), -1, -1, 72, -1, 1);
	func_128(70, 1);
	func_140(10000);
	func_125(76, 0);
	func_88();
	func_87(iVar0);
}

void func_143(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xAB46
{
	int iVar0;
	if (iParam3 == -1)
	{
		iParam3 = iParam1;
	}
	iVar0 = 1;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -1785731347;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_97(Global_78588.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_89(iVar0);
}

void func_144(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0xABC4
{
	int iVar0;
	iVar0 = 8;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 246500489;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_145(Global_78588.f_12592[iVar0], iParam5, iParam6, iParam7, iParam1, iParam0, iParam2, iParam3, iParam4, iParam11, -1, -1, -1, iParam9, iParam10, iParam8);
	func_89(iVar0);
}

void func_145(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12, var uParam13, var uParam14, var uParam15)//Position - 0xAC4C
{
	Global_78588.f_6684[iParam0 /*14*/] = uParam1;
	Global_78588.f_6684[iParam0 /*14*/].f_1 = uParam2;
	Global_78588.f_6684[iParam0 /*14*/].f_2 = uParam3;
	Global_78588.f_6684[iParam0 /*14*/].f_3 = uParam4;
	Global_78588.f_6684[iParam0 /*14*/].f_4 = uParam5;
	Global_78588.f_6684[iParam0 /*14*/].f_5 = uParam6;
	Global_78588.f_6684[iParam0 /*14*/].f_6 = uParam7;
	Global_78588.f_6684[iParam0 /*14*/].f_7 = uParam8;
	Global_78588.f_6684[iParam0 /*14*/].f_8 = uParam9;
	Global_78588.f_6684[iParam0 /*14*/].f_9 = iParam10;
	Global_78588.f_6684[iParam0 /*14*/].f_10 = iParam11;
	Global_78588.f_6684[iParam0 /*14*/].f_11 = uParam13;
	Global_78588.f_6684[iParam0 /*14*/].f_12 = uParam14;
	Global_78588.f_6684[iParam0 /*14*/].f_13 = uParam15;
}

void func_146(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xAD24
{
	int iVar0;
	int iVar1;
	if (iParam0 < 0 || iParam0 >= 5)
	{
	}
	iVar0 = 1;
	iVar1 = 0;
	if (bParam1)
	{
		MISC::SET_BIT(&iVar1, 0);
	}
	if (bParam2)
	{
		MISC::SET_BIT(&iVar1, 2);
	}
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 828625388;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_97(Global_78588.f_12592[iVar0], iParam0, iParam3, iVar1, 0);
	func_89(iVar0);
}

void func_147(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xADC3
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 1822409727;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	iVar1 = 0;
	if (bParam2)
	{
		MISC::SET_BIT(&iVar1, 3);
	}
	func_97(Global_78588.f_12592[iVar0], iParam0, iParam1, iVar1, iParam3);
	func_89(iVar0);
}

void func_148(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xAE46
{
	int iVar0;
	int iVar1;
	if (iParam0 < 0 || iParam0 >= 5)
	{
	}
	if (iParam1 == 3 || iParam1 == 4)
	{
	}
	iVar0 = 7;
	iVar1 = 0;
	if (bParam5)
	{
		MISC::SET_BIT(&iVar1, 0);
	}
	if (bParam6)
	{
		MISC::SET_BIT(&iVar1, 1);
	}
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -635831521;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_94(Global_78588.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3, iParam4, iVar1, 0, 0, -1, 0, -1);
	func_89(iVar0);
}

void func_149(int iParam0, int iParam1)//Position - 0xAF00
{
	int iVar0;
	iVar0 = 1;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 1984622930;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_97(Global_78588.f_12592[iVar0], iParam0, iParam1, -1, -1);
	func_89(iVar0);
}

void func_150()//Position - 0xAF72
{
	int iVar0;
	iVar0 = 27;
	func_132(iVar0);
	func_131();
	func_122(115, 1, 0);
	func_122(117, 1, 0);
	func_119(14, 1, 1, 0);
	func_122(53, 1, 0);
	func_122(54, 1, 0);
	func_122(55, 1, 0);
	func_154(1);
	func_125(57, 0);
	func_121(7, 1, 0);
	func_121(8, 1, 0);
	func_121(9, 1, 0);
	func_102("flowStartAccept", 1424);
	func_128(148, 1);
	func_138(53, -2, 148, -1);
	func_102("flowIntroTitle", 1424);
	func_100(18, 1, 0);
	func_100(19, 1, 0);
	func_100(43, 1, 0);
	func_100(44, 1, 0);
	func_100(53, 1, 0);
	func_100(130, 1, 0);
	func_100(36, 0, 0);
	func_100(30, 0, 0);
	func_100(12, 0, 0);
	func_100(130, 0, 0);
	func_100(130, 2, 0);
	func_153(0, 1);
	func_153(2, 1);
	func_125(36, 0);
	func_125(38, 0);
	func_125(140, 0);
	func_125(40, 0);
	func_122(124, 1, 0);
	func_122(125, 1, 0);
	func_125(90, 0);
	func_125(91, 0);
	func_122(66, 1, 0);
	func_122(115, 0, 0);
	func_122(117, 0, 0);
	func_122(116, 1, 0);
	func_129(0, 0, 0);
	func_129(1, 1, 0);
	func_129(2, 0, 0);
	func_152(1);
	func_151(1);
	func_125(114, 0);
	func_137(60, -2, -1, -1, 0);
	func_106(1);
	func_88();
	func_87(iVar0);
}

void func_151(int iParam0)//Position - 0xB104
{
	int iVar0;
	if (!__LIB_0__.func_43(iParam0))
	{
	}
	iVar0 = 0;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -49496173;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = iParam0;
	func_89(iVar0);
}

void func_152(int iParam0)//Position - 0xB162
{
	int iVar0;
	iVar0 = 0;
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		return;
	}
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 213552929;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = iParam0;
	func_89(iVar0);
}

void func_153(int iParam0, int iParam1)//Position - 0xB1D2
{
	int iVar0;
	iVar0 = 2;
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		return;
	}
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 139009950;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_92(Global_78588.f_12592[iVar0], iParam0, iParam1);
	func_89(iVar0);
}

void func_154(bool bParam0)//Position - 0xB25E
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	func_90(iVar0);
	iVar1 = 0;
	if (bParam0)
	{
		iVar1 = 1;
	}
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -2093560018;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = iVar1;
	func_89(iVar0);
}

void func_155()//Position - 0xB2BD
{
	int iVar0;
	iVar0 = 26;
	func_132(iVar0);
	func_131();
	func_120(136);
	func_130(50, 0);
	func_156(1, 17, 6, 60000, 20000, 1635046052, 0, 1, -2, 138, -2, 68, 125, 2, 16400);
	func_128(137, 0);
	func_138(50, 139, 138, 139);
	func_128(138, 1);
	func_126(0);
	func_137(79, 139, -2, -1, 0);
	func_103(1, 17, 6, joaat("TEXT_ME_AMANDA_FAIL"), 720000, 20000, -1, 82, -1, 1024, 0);
	func_128(139, 1);
	func_126(1);
	func_104(42, 0);
	func_120(140);
	func_130(52, 0);
	func_156(1, 15, 6, 600000, 10000, 178720519, 4, 5, -2, 142, -2, 69, 127, 3, 16400);
	func_128(141, 0);
	func_138(52, 143, 142, 143);
	func_128(142, 1);
	func_126(2);
	func_123(15, 1, -1130010274, -1);
	func_103(1, 15, 6, joaat("TEXT_ME_TRACEY_FAIL"), 720000, 20000, -1, 84, -1, 1024, 0);
	func_128(143, 1);
	func_126(3);
	func_95(-2062910056);
	func_104(43, 0);
	func_128(144, 1);
	func_130(51, 0);
	func_156(1, 14, 6, 650000, 20000, -464957327, 2, 3, -2, 146, -2, 70, 126, 4, 16400);
	func_128(145, 0);
	func_138(51, 147, 146, 147);
	func_128(146, 1);
	func_126(4);
	func_103(1, 14, 6, joaat("TEXT_ME_JIMMY_FAIL"), 720000, 20000, -1, 83, -1, 1024, 0);
	func_128(147, 1);
	func_126(5);
	func_88();
	func_87(iVar0);
}

void func_156(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0xB473
{
	int iVar0;
	var uVar1;
	if (iParam10 == -1)
	{
		iParam10 = iParam8;
	}
	iVar0 = 8;
	uVar1 = iParam14;
	MISC::SET_BIT(&uVar1, 5);
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -546916353;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_145(Global_78588.f_12592[iVar0], iParam5, iParam6, iParam7, iParam0, iParam1, iParam2, iParam3, iParam4, uVar1, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
	func_89(iVar0);
}

void func_157()//Position - 0xB513
{
	int iVar0;
	iVar0 = 25;
	func_132(iVar0);
	func_131();
	func_104(37, 0);
	func_124(joaat("TEXT_CAR3_F_REM"));
	func_124(joaat("TEXT_CAR3_MT_REM"));
	func_128(132, 1);
	func_127(46, -2, 132, -1, -1);
	func_125(156, 0);
	func_129(0, 0, 0);
	func_122(129, 1, 0);
	func_159(0, 1, 1, 0);
	func_159(0, 2, 1, 0);
	func_158(1, 2, 1);
	func_100(35, 2, 1);
	func_96(2, 23, 12);
	func_119(124, 1, 1, 0);
	func_95(469005563);
	func_123(14, 4, -306898819, -1);
	func_123(20, 4, 675079903, -1);
	func_123(35, 4, 814649774, -1);
	func_93(4, 40, 6, 120000, 80000, joaat("CALL_PATRICIA_2"), -1, -1, 0, 21, 1);
	func_101(2, 0);
	func_104(40, 0);
	func_128(133, 1);
	func_127(47, -2, 133, -1, -1);
	func_129(0, 1, 0);
	func_159(0, 1, 0, 0);
	func_106(0);
	func_95(814649774);
	func_95(518202687);
	func_123(35, 4, 1562602199, -1);
	func_123(35, 4, 1113666899, -1);
	func_101(51, 0);
	func_104(41, 0);
	func_119(81, 1, 1, 0);
	func_119(82, 0, 1, 0);
	func_128(134, 1);
	func_127(48, -2, 134, -1, -1);
	func_119(81, 0, 1, 0);
	func_119(82, 1, 1, 0);
	func_158(1, 2, 0);
	func_95(joaat("CALL_PATRICIA_2"));
	func_134(0, 30, 1, 240000, 20000, joaat("CALL_MIKE_1"), -1, 0, -1, 1);
	func_95(-2082393141);
	func_95(-835252192);
	func_123(19, 4, -177054098, -1);
	func_101(32, 0);
	func_101(50, 0);
	func_104(38, 0);
	func_104(39, 0);
	func_93(1, 14, 0, 6000, 5000, -375893868, -1589024007, 13, 56, -1, 136);
	func_103(2, 14, 0, -658009473, 6000, 5000, 13, 56, -1, 1032, 0);
	func_137(50, -2, -1, -2, 0);
	func_128(135, 1);
	func_127(49, -2, 135, -1, -1);
	func_101(25, 0);
	func_101(43, 0);
	func_119(26, 0, 1, 0);
	func_119(34, 0, 1, 0);
	func_119(123, 1, 1, 0);
	func_96(0, 16, 12);
	func_96(1, 11, 12);
	func_95(1890717037);
	func_95(-177054098);
	func_124(joaat("TEXT_SOL2_END"));
	func_123(26, 1, 946886745, -1);
	func_123(14, 2, -1497396589, -1);
	func_123(29, 1, -1766792090, -1);
	func_111(4, 40, 6, -666761274, 80000, 30000, -1, 0, -1, 0);
	func_102("michael4LeadOut", 1424);
	func_93(1, 15, 6, 160000, 25000, joaat("CALL_MIKE_3"), -1, -1, 0, -1, 0);
	func_93(1, 17, 6, 60000, 20000, joaat("CALL_MIKE_4"), -1, 13, 0, -1, 0);
	func_88();
	func_87(iVar0);
}

void func_158(int iParam0, int iParam1, bool bParam2)//Position - 0xB826
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	if (((iParam1 != 0 && iParam1 != 1) && iParam1 != 2) && iParam1 != 19)
	{
		return;
	}
	iVar1 = 0;
	if (bParam2)
	{
		iVar1 = 1;
	}
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 1641341968;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_97(Global_78588.f_12592[iVar0], iParam1, iParam0, iVar1, 0);
	func_89(iVar0);
}

void func_159(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xB8CA
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	if (((iParam1 != 0 && iParam1 != 1) && iParam1 != 2) && iParam1 != 19)
	{
		return;
	}
	iVar1 = 0;
	if (bParam2)
	{
		iVar1 = 1;
	}
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 1389104680;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_97(Global_78588.f_12592[iVar0], iParam1, iParam0, iVar1, iParam3);
	func_89(iVar0);
}

void func_160()//Position - 0xB96F
{
	int iVar0;
	iVar0 = 24;
	func_132(iVar0);
	func_131();
	func_104(36, 0);
	func_137(51, -2, -1, -1, 0);
	func_103(4, 31, 1, 251204761, 1000, 1000, -1, 0, -1, 2048, 0);
	func_128(131, 1);
	func_127(45, -2, 131, -1, -1);
	func_119(130, 1, 1, 0);
	func_119(129, 1, 1, 0);
	func_119(131, 1, 1, 0);
	func_119(134, 1, 1, 0);
	func_119(132, 1, 1, 0);
	func_119(133, 1, 1, 0);
	func_122(59, 0, 0);
	func_129(0, 0, 0);
	func_129(2, 0, 0);
	func_121(0, 0, 0);
	func_121(3, 0, 0);
	func_121(4, 0, 0);
	func_121(1, 1, 1);
	func_121(2, 1, 1);
	func_118(0, 0);
	func_118(1, 1);
	func_118(7, 0);
	func_118(6, 1);
	func_118(8, 0);
	func_100(31, 0, 1);
	func_100(31, 2, 1);
	func_95(1089542219);
	func_124(152157591);
	func_123(29, 1, 1906711117, -1);
	func_123(26, 1, -1613846760, -1);
	func_123(19, 4, 556840426, -1);
	func_103(4, 24, 1, joaat("TEXT_EXILE_WADE_CHINESE"), 220000, 20000, 10, 0, -1, 0, 0);
	func_109(32, 1);
	func_101(3, 0);
	func_140(110000);
	func_106(7);
	func_88();
	func_87(iVar0);
}

void func_161()//Position - 0xBADB
{
	int iVar0;
	iVar0 = 23;
	func_132(iVar0);
	func_131();
	func_128(130, 1);
	func_127(44, -2, 130, -1, -1);
	func_100(12, 0, 0);
	func_96(1, 43, 12);
	func_96(1, 44, 12);
	func_96(1, 45, 12);
	func_96(1, 46, 12);
	func_125(124, 0);
	func_125(192, 0);
	func_98("AM_H_WARDROB" /* GXT: Michael can change clothes at the ~BLIP_CLOTHES_STORE~ in his bedroom. */, 7500, 2, 7, 0, 0);
	func_125(88, 0);
	func_111(7, 96, 6, 2021846885, 130000, 10000, -1, 0, -1, 0);
	func_125(160, 0);
	func_106(26);
	func_93(1, 46, 6, 500000, 30000, joaat("CALL_HACKER_2"), -1, -1, 72, -1, 0);
	func_134(0, 12, 0, 6000, 6000, joaat("CALL_JEWEL_SETUP_UNLOCK"), -1, 0, -1, 33);
	func_106(20);
	func_120(189);
	func_120(190);
	func_120(191);
	func_111(1, 12, 1, 338918687, 240000, 10000, -1, 0, -1, 0);
	func_88();
	func_87(iVar0);
}

void func_162()//Position - 0xBBE2
{
	int iVar0;
	iVar0 = 22;
	func_132(iVar0);
	func_131();
	func_137(42, -2, -1, -1, 0);
	func_104(35, 0);
	func_128(128, 1);
	func_137(81, -1, -2, -1, 0);
	func_128(129, 1);
	func_127(43, -2, 129, -1, -1);
	func_113(joaat("WEAPON_SAWNOFFSHOTGUN"), 1);
	func_113(joaat("WEAPON_PUMPSHOTGUN"), 1);
	func_100(37, 1, 1);
	func_123(37, 2, 522335044, -1);
	func_125(25, 0);
	func_120(221);
	func_163(0);
	func_101(29, 0);
	func_88();
	func_87(iVar0);
}

void func_163(bool bParam0)//Position - 0xBC7E
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	func_90(iVar0);
	iVar1 = 0;
	if (bParam0)
	{
		iVar1 = 1;
	}
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -26112892;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = iVar1;
	func_89(iVar0);
}

void func_164()//Position - 0xBCDD
{
	int iVar0;
	iVar0 = 21;
	func_132(iVar0);
	func_131();
	func_103(1, 12, 1, joaat("TEXT_JEWEL_P2A_UNLOCK"), 240000, 10000, -1, 118, -1, 1032, 0);
	func_137(15, -2, -1, -2, 0);
	func_140(3000);
	func_98("AM_H_PREP2A" /* GXT: Intercept the BZ gas at ~BLIP_HEIST_PREP~ */, 10000, 2, 1, 0, 0);
	func_98("AM_H_PREP2B" /* GXT: Some heist equipment can be seen regularly moving through the city. Intercepting this will start the setup mission. */, 10000, 2, 1, 0, 0);
	func_128(59, 1);
	func_127(88, -2, 59, -1, -1);
	func_165("AM_H_PREP2A" /* GXT: Intercept the BZ gas at ~BLIP_HEIST_PREP~ */, 0);
	func_165("AM_H_PREP2B" /* GXT: Some heist equipment can be seen regularly moving through the city. Intercepting this will start the setup mission. */, 0);
	func_147(0, 10, 1, 0);
	func_143(87, 60, -2, -1);
	func_134(0, 12, 0, 6000, 6000, joaat("CALL_JEWEL_PREP2A_DONE"), -1, 0, -1, 32);
	func_128(60, 1);
	func_101(34, 0);
	func_88();
	func_87(iVar0);
}

void func_165(char* sParam0, int iParam1)//Position - 0xBDAC
{
	int iVar0;
	struct<8> Var1;
	iVar0 = 4;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 2110689209;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	StringCopy(&Var1, sParam0, 32);
	func_99(Global_78588.f_12592[iVar0], Var1, iParam1, 0, 0, 0);
	func_89(iVar0);
}

void func_166()//Position - 0xBE28
{
	int iVar0;
	iVar0 = 20;
	func_132(iVar0);
	func_131();
	func_119(70, 1, 1, 0);
	func_119(71, 1, 1, 0);
	func_119(73, 1, 1, 0);
	func_119(72, 0, 1, 0);
	func_119(74, 0, 1, 0);
	func_112(62, 0, 0);
	func_112(63, 0, 0);
	func_102("heist_ctrl_jewel", 2050);
	func_123(14, 1, 279793409, -1);
	func_130(86, 0);
	func_122(16, 0, 0);
	func_122(17, 0, 0);
	func_128(52, 1);
	func_127(86, -2, 52, -1, -1);
	func_122(16, 1, 0);
	func_128(53, 0);
	func_148(0, 0, 13, -2, -1, 1, 0);
	func_140(500);
	func_128(54, 0);
	func_148(0, 2, 5, -2, -1, 1, 0);
	func_122(16, 0, 1);
	func_122(17, 1, 0);
	func_128(55, 0);
	func_148(0, 1, 6, -2, 54, 1, 1);
	func_140(501);
	func_146(0, 0, 1, 18);
	func_137(18, -1, -2, -2, 0);
	func_122(17, 0, 1);
	func_122(18, 0, 0);
	func_107(222, 0, 0);
	func_125(26, 0);
	func_126(0);
	func_134(0, 1, 0, 6000, 6000, joaat("CALL_JEWEL_POST_PLAN"), 23, 0, -1, 0);
	func_123(19, 2, -1621970384, -1);
	func_103(1, 12, 1, -1608680660, 80000, 30000, -1, 0, 8, 0, 0);
	func_120(222);
	func_140(20000);
	func_104(33, 0);
	func_124(-1608680660);
	func_169(7, 1, -2, 61);
	func_103(1, 12, 1, joaat("TEXT_JEWEL_P1A_UNLOCK"), 10000, 10000, -1, 0, -1, 1064, 0);
	func_119(182, 1, 1, 0);
	func_119(183, 1, 1, 0);
	func_119(184, 1, 1, 0);
	func_140(3000);
	func_98("AM_H_PREP1A" /* GXT: Steal a Bugstars van at ~BLIP_HEIST_PREP~ */, 10000, 2, 1, 0, 0);
	func_98("AM_H_PREP2" /* GXT: Gather equipment for a heist by completing setup missions. Once all equipment has been obtained the main heist will unlock. */, 10000, 2, 1, 0, 0);
	func_106(21);
	func_128(56, 1);
	func_127(87, -2, 56, -1, -1);
	func_165("AM_H_PREP1A" /* GXT: Steal a Bugstars van at ~BLIP_HEIST_PREP~ */, 0);
	func_165("AM_H_PREP2" /* GXT: Gather equipment for a heist by completing setup missions. Once all equipment has been obtained the main heist will unlock. */, 0);
	func_147(0, 9, 1, 0);
	func_119(182, 0, 1, 0);
	func_119(183, 0, 1, 0);
	func_119(184, 0, 1, 0);
	func_119(164, 1, 1, 0);
	func_103(2, 0, 1, joaat("TEXT_JEWEL_FRANK_PREP"), 15000, 5000, -1, 0, -1, 1088, 0);
	func_143(88, 58, -2, -1);
	func_105(12, -2, 57, -2);
	func_134(0, 12, 0, 6000, 6000, -1945164276, -1, 0, -1, 32);
	func_168(58, 0);
	func_128(57, 1);
	func_134(0, 12, 0, 6000, 6000, -1746082591, -1, 0, -1, 32);
	func_128(58, 1);
	func_125(117, 0);
	func_104(34, 0);
	func_168(65, 0);
	func_128(61, 1);
	func_167(21);
	func_103(1, 12, 1, joaat("TEXT_JEWEL_P1B_UNLOCK"), 10000, 10000, -1, 0, -1, 1064, 0);
	func_140(6000);
	func_98("AM_H_PREP1B" /* GXT: Intercept the LSPD tactical team at ~BLIP_HEIST_PREP~ */, 10000, 2, 1, 0, 1);
	func_98("AM_H_PREP2" /* GXT: Gather equipment for a heist by completing setup missions. Once all equipment has been obtained the main heist will unlock. */, 10000, 2, 1, 0, 1);
	func_103(2, 0, 1, joaat("TEXT_JEWEL_FRANK_PREP"), 15000, 5000, -1, 0, -1, 1088, 1);
	func_128(62, 1);
	func_127(89, -2, 62, -1, -1);
	func_165("AM_H_PREP1B" /* GXT: Intercept the LSPD tactical team at ~BLIP_HEIST_PREP~ */, 1);
	func_165("AM_H_PREP2" /* GXT: Gather equipment for a heist by completing setup missions. Once all equipment has been obtained the main heist will unlock. */, 1);
	func_147(0, 11, 1, 0);
	func_128(65, 0);
	func_138(90, -2, 65, -1);
	func_119(88, 2, 1, 0);
	func_119(89, 0, 1, 0);
	func_119(164, 0, 1, 0);
	func_119(70, 0, 1, 0);
	func_119(71, 0, 1, 0);
	func_119(73, 0, 1, 0);
	func_119(72, 0, 1, 1);
	func_119(74, 0, 1, 1);
	func_125(101, 0);
	func_122(4, 1, 0);
	func_122(72, 0, 0);
	func_124(joaat("TEXT_SRANGE_UNLOCK"));
	func_124(joaat("TEXT_JEWEL_FRANK_PREP"));
	func_95(1502097668);
	func_95(279793409);
	func_95(2111803439);
	func_95(-1690219790);
	func_95(1438498239);
	func_95(-1565848713);
	func_95(-1351801605);
	func_95(1311040108);
	func_135(54);
	func_100(12, 1, 1);
	func_103(2, 0, 0, joaat("TEXT_JEWEL_2_DONE"), 5000, 20000, -1, 0, -1, 40, 0);
	func_100(20, 2, 0);
	func_100(24, 2, 0);
	func_100(39, 2, 0);
	func_100(34, 2, 0);
	func_100(47, 2, 0);
	func_100(131, 2, 0);
	func_106(31);
	func_113(joaat("WEAPON_CARBINERIFLE"), 1);
	func_113(joaat("WEAPON_SMOKEGRENADE"), 1);
	func_111(7, 97, 6, 1818503402, 90000, 10000, -1, 0, -1, 0);
	func_88();
	func_87(iVar0);
}

void func_167(int iParam0)//Position - 0xC2F3
{
	int iVar0;
	iVar0 = 0;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 2058194871;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = iParam0;
	func_89(iVar0);
}

void func_168(int iParam0, int iParam1)//Position - 0xC347
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	func_90(iVar0);
	iVar1 = iParam0;
	iVar1 = (iVar1 + (iParam1 * 1000000));
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -1878191811;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = iVar1;
	func_89(iVar0);
}

void func_169(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC3AB
{
	int iVar0;
	iVar0 = 1;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 1174602905;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_97(Global_78588.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_89(iVar0);
}

void func_170()//Position - 0xC41F
{
	int iVar0;
	iVar0 = 19;
	func_132(iVar0);
	func_131();
	func_109(58, 1);
	func_120(219);
	func_107(212, 0, 0);
	func_120(220);
	func_120(184);
	func_137(74, -2, -1, -2, 0);
	func_122(57, 1, 0);
	func_101(9, 0);
	func_109(24, 1);
	func_120(205);
	func_120(180);
	func_109(46, 1);
	func_120(213);
	func_107(227, 0, 0);
	func_120(231);
	func_122(57, 0, 0);
	func_128(124, 1);
	func_127(40, -2, 124, -1, -1);
	func_119(154, 1, 1, 0);
	func_101(10, 0);
	func_101(35, 0);
	func_137(62, 125, -2, 125, 0);
	func_111(2, 19, 6, -132533604, 80000, 30000, -1, 0, -1, 0);
	func_103(2, 19, 1, joaat("TEXT_FRAN0_END"), 30000, 10000, -1, 41, -1, 0, 0);
	func_128(125, 1);
	func_93(2, 19, 1, 180000, 30000, 546458037, joaat("TEXT_CHOP_UNLOCK"), 9, 55, -1, 129);
	func_128(239, 1);
	func_104(29, 0);
	func_104(30, 0);
	func_128(126, 1);
	func_127(41, -2, 126, -1, -1);
	func_119(155, 1, 1, 0);
	func_103(4, 19, 1, joaat("TEXT_FRAN1_END"), 300000, 10000, -1, 66, 22, 262144, 0);
	func_125(121, 0);
	func_95(522335044);
	func_95(-1621970384);
	func_95(1031237239);
	func_123(37, 2, 2097475336, -1);
	func_123(19, 2, -755689100, -1);
	func_119(3, 0, 1, 0);
	func_118(35, 0);
	func_119(4, 0, 1, 0);
	func_111(1, 99, 1, 1440910066, 30000, 10000, -1, 11, -1, 0);
	func_111(2, 99, 1, 2063740346, 30000, 10000, -1, 11, -1, 0);
	func_111(4, 99, 1, 957098437, 30000, 10000, -1, 11, -1, 0);
	func_102("controller_Races", 128);
	func_120(179);
	func_101(16, 0);
	func_104(31, 0);
	func_104(32, 0);
	func_159(1, 19, 1, 0);
	func_95(-108894207);
	func_123(37, 2, -950205513, -1);
	func_128(127, 1);
	func_127(42, -2, 127, -1, -1);
	func_119(161, 1, 1, 0);
	func_159(1, 19, 0, 0);
	func_101(38, 0);
	func_95(-950205513);
	func_95(-755689100);
	func_95(joaat("CALL_PATRICIA_2"));
	func_123(19, 4, 616513703, -1);
	func_123(37, 2, -703684326, -1);
	func_123(19, 2, 1509435260, -1);
	func_93(4, 40, 6, 80000, 80000, joaat("CALL_PATRICIA_3"), -1, -1, 0, 21, 1);
	func_88();
	func_87(iVar0);
}

void func_171()//Position - 0xC6FA
{
	int iVar0;
	iVar0 = 18;
	func_132(iVar0);
	func_131();
	func_128(44, 1);
	func_127(82, -2, 44, -1, -1);
	func_125(106, 0);
	func_101(28, 0);
	func_88();
	func_87(iVar0);
}

void func_172()//Position - 0xC73C
{
	int iVar0;
	iVar0 = 17;
	func_132(iVar0);
	func_131();
	func_128(43, 1);
	func_127(81, -2, 43, -1, -1);
	func_125(106, 0);
	func_101(27, 0);
	func_88();
	func_87(iVar0);
}

void func_173()//Position - 0xC77E
{
	int iVar0;
	iVar0 = 16;
	func_132(iVar0);
	func_131();
	func_169(11, 8, 41, 45);
	func_128(41, 1);
	func_122(30, 0, 0);
	func_125(102, 0);
	func_137(30, -2, -1, -2, 0);
	func_140(3000);
	func_98("AM_H_GAUNT_R" /* GXT: Gauntlets are required before attempting the heist. Check your email for locations. */, 10000, 2, 7, 0, 0);
	func_106(17);
	func_106(18);
	func_128(42, 1);
	func_127(80, -2, 42, -1, -1);
	func_125(106, 0);
	func_101(26, 0);
	func_168(47, 0);
	func_128(45, 1);
	func_103(7, 12, 1, joaat("TEXT_FINH_PD_UNLOCK"), 240000, 10000, -1, 0, -1, 1064, 0);
	func_140(3001);
	func_128(46, 1);
	func_127(83, -2, 46, -1, -1);
	func_125(107, 0);
	func_101(26, 1);
	func_128(47, 1);
	func_88();
	func_87(iVar0);
}

void func_174()//Position - 0xC869
{
	int iVar0;
	iVar0 = 15;
	func_132(iVar0);
	func_131();
	func_104(24, 0);
	func_128(29, 1);
	func_127(76, -2, 29, -1, -1);
	func_119(172, 1, 1, 0);
	func_147(4, 1, 1, 0);
	func_103(2, 45, 1, joaat("TEXT_CAR3_F_REM"), 15000, 10000, -1, 155, -1, 0, 0);
	func_103(5, 45, 1, joaat("TEXT_CAR3_MT_REM"), 15000, 10000, -1, 155, -1, 0, 0);
	func_106(25);
	func_104(25, 0);
	func_125(98, 0);
	func_102("heist_ctrl_finale", 2050);
	func_95(675079903);
	func_130(77, 0);
	func_122(24, 0, 0);
	func_122(25, 0, 0);
	func_128(30, 1);
	func_127(77, -2, -2, -1, -1);
	func_122(24, 1, 0);
	func_128(31, 0);
	func_148(4, 0, 13, -2, -1, 1, 0);
	func_140(500);
	func_128(32, 0);
	func_148(4, 2, 2, -2, -1, 1, 0);
	func_122(25, 1, 0);
	func_122(24, 0, 1);
	func_128(33, 0);
	func_148(4, 1, 10, -2, 32, 1, 1);
	func_140(501);
	func_146(4, 0, 1, 26);
	func_137(26, -1, -2, -2, 0);
	func_122(25, 0, 1);
	func_122(26, 0, 0);
	func_107(226, 0, 0);
	func_126(0);
	func_95(1509435260);
	func_95(616513703);
	func_106(16);
	func_169(11, 8, 35, 38);
	func_128(35, 1);
	func_103(7, 12, 1, joaat("TEXT_FINH_PA_UNLOCK"), 30000, 10000, -1, 0, -1, 1064, 0);
	func_140(3000);
	func_128(36, 1);
	func_127(78, -2, 36, -1, -1);
	func_147(4, 5, 1, 0);
	func_125(104, 0);
	func_137(28, -2, -1, -2, 0);
	func_104(26, 0);
	func_104(27, 0);
	func_104(28, 0);
	func_107(221, 0, 0);
	func_147(4, 6, 1, 0);
	func_137(36, -2, -1, -2, 0);
	func_128(48, 1);
	func_127(84, -2, 48, -1, -1);
	func_113(joaat("WEAPON_APPISTOL"), 1);
	func_113(joaat("WEAPON_PUMPSHOTGUN"), 1);
	func_168(50, 0);
	func_128(38, 1);
	func_103(7, 12, 1, joaat("TEXT_FINH_PB_UNLOCK"), 30000, 10000, -1, 0, -1, 1064, 0);
	func_167(17);
	func_167(18);
	func_140(3001);
	func_103(7, 12, 1, -1216150262, 600000, 30000, -1, 0, 9, 0, 0);
	func_128(39, 1);
	func_102("finale_heist_prepEamb", 2050);
	func_127(79, -2, 39, -1, -1);
	func_147(4, 7, 1, 0);
	func_125(120, 0);
	func_125(105, 0);
	func_107(220, 0, 0);
	func_137(29, -2, -1, -2, 0);
	func_137(34, -2, -1, -2, 0);
	func_104(26, 1);
	func_137(36, -2, -1, -2, 1);
	func_128(49, 1);
	func_127(85, 50, 49, -1, -1);
	func_124(-1216150262);
	func_128(50, 1);
	func_122(3, 1, 0);
	func_95(joaat("CALL_MIKE_1"));
	func_95(2065444157);
	func_95(624853379);
	func_95(-1766792090);
	func_113(joaat("WEAPON_ADVANCEDRIFLE"), 1);
	func_111(7, 97, 6, -709067855, 100000, 10000, -1, 0, -1, 0);
	func_106(14);
	func_88();
	func_87(iVar0);
}

void func_175()//Position - 0xCBDF
{
	int iVar0;
	iVar0 = 14;
	func_132(iVar0);
	func_131();
	func_122(134, 0, 0);
	func_149(12, -1);
	func_128(114, 1);
	func_127(23, -2, 114, -1, -1);
	func_102("Finale_Choice", 1424);
	func_137(134, -2, -1, 115, 0);
	func_169(12, 0, 115, -2);
	func_169(12, 1, 116, 117);
	func_128(115, 1);
	func_122(134, 1, 0);
	func_127(24, -2, 115, -1, 116);
	func_122(136, 1, 0);
	func_159(0, 2, 1, 0);
	func_159(1, 2, 1, 0);
	func_159(19, 2, 1, 0);
	func_159(14, 2, 1, 0);
	func_129(2, 0, 0);
	func_159(0, 1, 1, 0);
	func_119(56, 1, 1, 0);
	func_119(57, 0, 1, 0);
	func_119(58, 0, 1, 0);
	func_119(59, 0, 1, 0);
	func_178(1, 70);
	func_168(119, 0);
	func_128(116, 1);
	func_122(134, 1, 1);
	func_127(25, -2, 116, -1, 117);
	func_122(135, 1, 0);
	func_177(26, 147);
	func_95(178720519);
	func_95(-464957327);
	func_159(1, 0, 1, 0);
	func_159(2, 0, 1, 0);
	func_159(14, 0, 1, 0);
	func_159(17, 0, 1, 0);
	func_129(0, 0, 0);
	func_119(11, 1, 1, 0);
	func_159(1, 2, 1, 1);
	func_159(19, 2, 1, 1);
	func_159(14, 1, 1, 0);
	func_159(14, 2, 1, 1);
	func_178(1, 71);
	func_168(119, 1);
	func_128(117, 1);
	func_130(26, 1);
	func_176(26);
	func_122(134, 1, 2);
	func_127(26, -2, 117, -1, -1);
	func_128(118, 1);
	func_138(27, -2, 117, -1);
	func_126(0);
	func_122(129, 0, 0);
	func_159(0, 2, 0, 0);
	func_178(0, 72);
	func_178(1, 73);
	func_95(1562602199);
	func_95(1113666899);
	func_128(119, 1);
	func_138(28, -2, -2, -1);
	func_137(135, 120, -2, 120, 0);
	func_137(136, 120, -2, 120, 0);
	func_111(7, 12, 0, 801347631, 3000, 3000, -1, 80, -1, 0);
	func_111(2, 19, 6, -2135625223, 120000, 60000, -1, 0, -1, 0);
	func_111(2, 0, 6, -1430864197, 200000, 60000, -1, 0, -1, 0);
	func_111(1, 30, 6, -789275824, 60000, 20000, -1, 0, -1, 0);
	func_111(1, 144, 6, 859937019, 400000, 60000, -1, 0, -1, 0);
	func_93(1, 30, 1, 700000, 180000, joaat("CALL_FIN_DAVE"), -1, -1, 0, -1, 64);
	func_123(19, 2, 82970585, -1);
	func_123(19, 4, 2064117051, -1);
	func_123(26, 1, 1229388294, -1);
	func_128(120, 1);
	func_102("Finale_Endgame", 2050);
	func_137(137, -2, -1, -1, 0);
	func_125(130, 0);
	func_95(-1130010274);
	func_95(946886745);
	func_95(-703684326);
	func_95(-1497396589);
	func_93(2, 43, 1, 3600000, 180000, joaat("CALL_FIN_TANISHA"), -1, -1, 0, -1, 0);
	func_120(218);
	func_137(135, -2, 121, 123, 0);
	func_95(-306898819);
	func_111(2, 17, 6, 632406285, 450000, 120000, -1, 0, -1, 0);
	func_111(2, 19, 6, -1523625340, 850000, 120000, -1, 0, -1, 0);
	func_111(2, 2, 6, -2076002026, 120000, 60000, -1, 0, -1, 0);
	func_103(6, 12, 1, joaat("TEXT_FINH_KILLM"), 3000, 1000, -1, 79, -1, 0, 0);
	func_134(1, 29, 1, 30000, 60000, joaat("CALL_FIN_DEVIN"), -1, 0, -1, 0);
	func_93(2, 14, 1, 250000, 180000, joaat("CALL_FIN_MDEAD1"), -1, -1, 129, -1, 0);
	func_125(190, 0);
	func_137(49, 122, -2, 122, 0);
	func_103(2, 12, 1, joaat("TEXT_ASS_FIN_A"), 200000, 1000, -1, 0, -1, 0, 0);
	func_168(122, 0);
	func_128(121, 1);
	func_137(136, -2, 123, -1, 0);
	func_111(2, 0, 6, -1897604564, 300000, 60000, -1, 0, -1, 0);
	func_111(2, 19, 6, 711875844, 800000, 60000, -1, 0, -1, 0);
	func_111(1, 20, 6, 430981897, 600000, 120000, -1, 0, -1, 0);
	func_103(3, 12, 1, joaat("TEXT_FINH_KILLT"), 3000, 1000, -1, 79, -1, 0, 0);
	func_93(1, 14, 1, 250000, 180000, joaat("CALL_FIN_TDEAD1"), -1, -1, 0, -1, 0);
	func_93(2, 14, 1, 480000, 180000, joaat("CALL_FIN_TDEAD2"), -1, -1, 0, -1, 0);
	func_93(2, 23, 1, 120000, 180000, joaat("CALL_FIN_STEVE"), -1, -1, 0, -1, 0);
	func_125(191, 0);
	func_137(49, 122, -2, 122, 1);
	func_103(2, 12, 1, joaat("TEXT_ASS_FIN_B"), 200000, 1000, -1, 0, -1, 0, 0);
	func_128(122, 1);
	func_93(2, 19, 1, 600000, 180000, joaat("CALL_FIN_LAMAR"), -1, -1, 0, -1, 0);
	func_128(123, 1);
	func_137(136, 255, -2, -2, 0);
	func_111(4, 30, 6, 183426861, 30000, 20000, -1, 0, -1, 0);
	func_103(4, 20, 6, 65881433, 60000, 10000, 10, 207, -1, 0, 0);
	func_109(35, 1);
	func_120(209);
	func_128(255, 1);
	func_88();
	func_87(iVar0);
}

void func_176(int iParam0)//Position - 0xD18A
{
	int iVar0;
	iVar0 = 0;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 1572323470;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = iParam0;
	func_89(iVar0);
}

void func_177(int iParam0, int iParam1)//Position - 0xD1DE
{
	int iVar0;
	iVar0 = 2;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -217347738;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_92(Global_78588.f_12592[iVar0], iParam0, iParam1);
	func_89(iVar0);
}

void func_178(int iParam0, int iParam1)//Position - 0xD24E
{
	int iVar0;
	iVar0 = 2;
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		return;
	}
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 215526917;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_92(Global_78588.f_12592[iVar0], iParam1, iParam0);
	func_89(iVar0);
}

void func_179()//Position - 0xD2DA
{
	int iVar0;
	iVar0 = 13;
	func_132(iVar0);
	func_131();
	func_128(109, 1);
	func_119(167, 0, 1, 0);
	func_127(37, -2, 109, -1, -1);
	func_108(28, 1);
	func_107(217, 0, 0);
	func_101(20, 0);
	func_88();
	func_87(iVar0);
}

void func_180()//Position - 0xD32D
{
	int iVar0;
	iVar0 = 12;
	func_132(iVar0);
	func_131();
	func_128(108, 1);
	func_125(33, 0);
	func_127(36, -2, 108, -1, -1);
	func_125(33, 1);
	func_119(167, 1, 1, 0);
	func_101(19, 0);
	func_88();
	func_87(iVar0);
}

void func_181()//Position - 0xD37F
{
	int iVar0;
	iVar0 = 11;
	func_132(iVar0);
	func_131();
	func_128(107, 1);
	func_127(35, -2, 107, -1, -1);
	func_101(18, 0);
	func_88();
	func_87(iVar0);
}

void func_182()//Position - 0xD3BA
{
	int iVar0;
	iVar0 = 10;
	func_132(iVar0);
	func_131();
	func_128(106, 1);
	func_127(34, -2, 106, -1, -1);
	func_118(41, 1);
	func_101(17, 0);
	func_88();
	func_87(iVar0);
}

void func_183()//Position - 0xD3FC
{
	int iVar0;
	iVar0 = 9;
	func_132(iVar0);
	func_131();
	func_128(100, 1);
	func_127(29, -2, 100, -1, -1);
	func_113(joaat("WEAPON_COMBATPISTOL"), 1);
	func_125(145, 0);
	func_111(1, 30, 6, -1069372983, 30000, 10000, -1, 0, -1, 0);
	func_111(4, 144, 6, 546388833, 120000, 10000, -1, 0, -1, 512);
	func_101(11, 0);
	func_128(101, 1);
	func_127(30, -2, 101, -1, -1);
	func_119(67, 2, 1, 0);
	func_103(2, 2, 1, joaat("TEXT_DOCKS_F_SHOOT"), 30000, 20000, -1, 0, 17, 0, 0);
	func_113(joaat("WEAPON_APPISTOL"), 1);
	func_113(joaat("WEAPON_HEAVYSNIPER"), 1);
	func_111(7, 97, 6, -929373866, 130000, 10000, -1, 0, -1, 0);
	func_100(23, 0, 1);
	func_100(1, 2, 1);
	func_100(2, 1, 1);
	func_158(0, 1, 1);
	func_158(1, 2, 1);
	func_158(2, 0, 1);
	func_101(30, 0);
	func_109(48, 0);
	func_120(214);
	func_109(51, 0);
	func_120(215);
	func_109(3, 1);
	func_120(197);
	func_109(4, 1);
	func_120(198);
	func_140(300000);
	func_184(15, 2, 1);
	func_128(102, 0);
	func_130(31, 0);
	func_122(44, 0, 0);
	func_93(1, 23, 1, 60000, 27500, -444489072, -1, 6, 48, -1, 85);
	func_93(4, 23, 1, 60000, 27500, 154402960, -1, 6, 48, -1, 85);
	func_137(44, -2, -1, -2, 0);
	func_128(103, 0);
	func_138(31, -2, 102, -1);
	func_126(0);
	func_119(142, 1, 1, 0);
	func_158(0, 1, 0);
	func_158(1, 2, 0);
	func_158(2, 0, 0);
	func_101(5, 0);
	func_104(21, 0);
	func_103(7, 23, 1, joaat("TEXT_FIB4I_UNLOCK"), 10000, 10000, -1, 0, -1, 40, 0);
	func_100(23, 1, 1);
	func_128(104, 1);
	func_127(32, -2, 104, -1, -1);
	func_100(30, 1, 1);
	func_100(30, 2, 1);
	func_113(joaat("WEAPON_RPG"), 1);
	func_93(4, 8, 0, 6000, 6000, joaat("CALL_FIB4I_DONE"), -1, -1, 0, -1, 96);
	func_98("AM_H_PREP5" /* GXT: Setup tasks are available at ~BLIP_HEIST_PREP~ ~n~A getaway vehicle is also required. */, 10000, 2, 7, 0, 0);
	func_106(10);
	func_102("FBI4_Prep3Amb", 2050);
	func_167(11);
	func_106(12);
	func_106(13);
	func_103(1, 1, 1, -655205392, 600000, 30000, -1, 154, 6, 0, 0);
	func_103(6, 0, 1, 1266526796, 600000, 30000, -1, 154, 6, 0, 0);
	func_128(105, 1);
	func_127(33, -2, 105, -1, -1);
	func_118(40, 1);
	func_104(17, 0);
	func_104(19, 0);
	func_104(20, 0);
	func_104(23, 0);
	func_104(14, 0);
	func_104(15, 0);
	func_104(16, 0);
	func_107(218, 0, 0);
	func_137(45, -2, -1, -2, 0);
	func_124(-655205392);
	func_124(1266526796);
	func_137(46, 111, -2, 111, 0);
	func_122(47, 0, 0);
	func_93(1, 23, 1, 20000, 10000, joaat("CALL_FIB4_M_UNLOCK"), joaat("TEXT_FIB4_M_UNLOCK"), 73, 49, 5, 136);
	func_93(2, 0, 1, 20000, 10000, joaat("CALL_FIB4_F_UNLOCK"), joaat("TEXT_FIB4_FT_UNLOCK"), 73, 49, 5, 136);
	func_93(4, 0, 1, 20000, 10000, joaat("CALL_FIB4_T_UNLOCK"), joaat("TEXT_FIB4_FT_UNLOCK"), 73, 49, 5, 136);
	func_137(47, 112, -1, 112, 0);
	func_128(111, 1);
	func_125(49, 0);
	func_128(112, 1);
	func_119(167, 0, 1, 0);
	func_118(41, 0);
	func_118(40, 0);
	func_127(38, -2, 112, -2, -1);
	func_134(0, 1, 0, 6000, 6000, joaat("CALL_CARS1_UNLOCK"), -1, 146, -1, 0);
	func_100(29, 0, 1);
	func_119(1, 1, 1, 0);
	func_119(137, 1, 1, 0);
	func_119(156, 0, 1, 0);
	func_119(157, 1, 1, 0);
	func_113(joaat("WEAPON_ASSAULTRIFLE"), 1);
	func_113(joaat("WEAPON_ASSAULTSHOTGUN"), 1);
	func_113(joaat("WEAPON_STICKYBOMB"), 1);
	func_113(joaat("WEAPON_COMBATMG"), 1);
	func_111(7, 97, 6, -1252410668, 120000, 10000, -1, 0, -1, 0);
	func_103(4, 47, 1, joaat("TEXT_CREW_CHEF_UNLOCK"), 120000, 10000, -1, 73, -1, 1024, 0);
	func_109(0, 1);
	func_120(195);
	func_106(3);
	func_106(30);
	func_104(22, 0);
	func_128(113, 1);
	func_178(1, 49);
	func_127(39, -2, 113, -1, -1);
	func_113(joaat("WEAPON_CARBINERIFLE"), 1);
	func_113(joaat("WEAPON_STUNGUN"), 1);
	func_96(2, 15, 12);
	func_119(158, 1, 1, 0);
	func_119(78, 0, 1, 0);
	func_119(171, 1, 1, 0);
	func_119(105, 1, 1, 0);
	func_119(106, 1, 1, 0);
	func_119(107, 1, 1, 0);
	func_119(108, 1, 1, 0);
	func_119(109, 1, 1, 0);
	func_119(110, 1, 1, 0);
	func_93(4, 40, 6, 480000, 60000, joaat("CALL_PATRICIA_1"), -1, -1, 147, -1, 0);
	func_101(56, 0);
	func_122(131, 1, 0);
	func_122(120, 0, 0);
	func_159(1, 0, 0, 0);
	func_159(1, 2, 0, 0);
	func_159(14, 1, 0, 0);
	func_159(19, 2, 0, 0);
	func_124(joaat("TEXT_EXILE_WADE_CHINESE"));
	func_124(joaat("TEXT_EXILE_HUNTER_PIE"));
	func_95(joaat("CALL_EXILE_AMANDA"));
	func_95(-1141042322);
	func_95(520422857);
	func_95(-1982920067);
	func_95(1319343143);
	func_95(-1118768768);
	func_95(-705125709);
	func_95(-782984853);
	func_95(-92968020);
	func_95(-406305198);
	func_95(-330856906);
	func_95(-690594988);
	func_95(-349863294);
	func_95(424926942);
	func_95(1410028576);
	func_95(1766909710);
	func_95(1906711117);
	func_95(1031237239);
	func_95(194808514);
	func_95(71040001);
	func_95(556840426);
	func_95(-1613846760);
	func_95(-1565848713);
	func_95(-1351801605);
	func_95(1311040108);
	func_123(26, 1, 518202687, -1);
	func_125(136, 0);
	func_121(1, 0, 0);
	func_121(0, 1, 1);
	func_118(0, 1);
	func_118(1, 0);
	func_119(134, 0, 1, 0);
	func_119(132, 0, 1, 0);
	func_119(133, 0, 1, 0);
	func_111(7, 97, 6, -1853951201, 110000, 10000, -1, 0, -1, 0);
	func_120(166);
	func_88();
	func_87(iVar0);
}

void func_184(int iParam0, int iParam1, bool bParam2)//Position - 0xDACE
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -1730578455;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	iVar1 = 0;
	if (bParam2)
	{
		iVar1 = 1;
	}
	func_97(Global_78588.f_12592[iVar0], iParam0, iParam1, iVar1, 0);
	func_89(iVar0);
}

void func_185()//Position - 0xDB4C
{
	int iVar0;
	iVar0 = 8;
	func_132(iVar0);
	func_131();
	func_128(91, 1);
	func_127(17, -2, 91, -1, -1);
	func_153(14, 1);
	func_100(1, 0, 1);
	func_100(0, 1, 1);
	func_100(14, 1, 1);
	func_125(62, 0);
	func_119(179, 1, 1, 0);
	func_119(174, 2, 1, 0);
	func_119(178, 2, 1, 0);
	func_119(175, 2, 1, 0);
	func_119(176, 2, 1, 0);
	func_119(177, 2, 1, 0);
	func_118(36, 0);
	func_103(2, 14, 0, joaat("TEXT_FAMILY1_END"), 6000, 10000, -1, 0, -1, 0, 0);
	func_123(14, 2, -1893250473, -1);
	func_117(0, 1);
	func_178(1, 9);
	func_106(22);
	func_125(124, 0);
	func_187(12, 1);
	func_125(122, 0);
	func_104(9, 0);
	func_128(94, 1);
	func_127(19, -2, 94, -1, -1);
	func_178(1, 10);
	func_119(2, 1, 1, 0);
	func_122(58, 1, 0);
	func_124(joaat("TEXT_TENNIS_UNLOCK"));
	func_103(1, 17, 1, -1845612607, 35000, 10000, -1, 22, -1, 262144, 0);
	func_106(29);
	func_106(23);
	func_122(57, 1, 0);
	func_122(127, 1, 0);
	func_100(12, 0, 1);
	func_103(1, 31, 1, joaat("TEXT_MARTIN_THREAT"), 300000, 10000, -1, 67, -1, 2048, 0);
	func_123(17, 1, 1290939985, -1);
	func_123(17, 1, -1690219790, -1);
	func_123(14, 1, -1878340166, -1);
	func_123(14, 2, -1160994395, -1);
	func_137(82, 93, -2, -2, 0);
	func_103(2, 0, 1, joaat("TEXT_SRANGE_UNLOCK"), 30000, 10000, -1, 35, -1, 1024, 0);
	func_128(93, 1);
	func_120(177);
	func_120(193);
	func_104(10, 0);
	func_105(8, -2, -1, -2);
	func_122(57, 0, 0);
	func_128(92, 1);
	func_127(18, -2, 92, -1, -1);
	func_119(14, 1, 1, 0);
	func_122(123, 1, 0);
	func_101(33, 0);
	func_95(1290939985);
	func_95(-1878340166);
	func_95(1502097668);
	func_123(31, 1, -1565848713, -1);
	func_123(31, 1, -1351801605, -1);
	func_123(31, 1, 1311040108, -1);
	func_123(17, 1, 2111803439, -1);
	func_123(15, 1, 684213521, -1);
	func_118(9, 1);
	func_118(10, 1);
	func_125(20, 0);
	func_120(185);
	func_104(12, 0);
	func_128(95, 1);
	func_127(20, -2, 95, -1, -1);
	func_100(14, 2, 0);
	func_153(14, 2);
	func_95(684213521);
	func_95(-1893250473);
	func_95(-1160994395);
	func_111(4, 14, 6, 1424059178, 120000, 30000, -1, 0, 23, 512);
	func_103(1, 31, 1, -1235391473, 180000, 10000, -1, 0, -1, 0, 0);
	func_111(4, 20, 6, -771149390, 500000, 60000, -1, 0, -1, 512);
	func_123(15, 1, 1388615949, -1);
	func_123(14, 1, 460547213, -1);
	func_123(14, 2, 963157723, -1);
	func_123(14, 4, -1196085634, -1);
	func_123(19, 2, 1031237239, 14);
	func_123(19, 2, 194808514, 13);
	func_123(19, 4, 71040001, 15);
	func_119(2, 2, 1, 0);
	func_119(135, 1, 1, 0);
	func_119(138, 1, 1, 0);
	func_119(144, 1, 1, 0);
	func_119(122, 1, 1, 0);
	func_100(0, 2, 1);
	func_100(2, 0, 1);
	func_153(0, 2);
	func_93(1, 15, 1, 500000, 60000, joaat("CALL_FAM4_DONE"), -1, -1, 0, -1, 69);
	func_119(116, 1, 1, 0);
	func_129(1, 1, 0);
	func_152(1);
	func_106(9);
	func_106(5);
	func_101(45, 0);
	func_106(2);
	func_109(44, 1);
	func_120(212);
	func_104(11, 0);
	func_128(96, 1);
	func_127(21, -2, 96, -1, -1);
	func_119(118, 1, 1, 0);
	func_119(117, 1, 1, 0);
	func_119(119, 1, 1, 0);
	func_119(125, 1, 1, 0);
	func_119(120, 1, 1, 0);
	func_122(128, 1, 0);
	func_159(17, 0, 1, 0);
	func_159(14, 0, 1, 0);
	func_125(81, 0);
	func_125(133, 0);
	func_95(joaat("CALL_FAM4_DONE"));
	func_95(1388615949);
	func_95(460547213);
	func_95(963157723);
	func_95(-1196085634);
	func_123(15, 1, -2062910056, -1);
	func_123(14, 2, 1730771548, -1);
	func_123(14, 4, 170512742, -1);
	func_103(1, 14, 1, joaat("TEXT_FAMILY5_END"), 30000, 10000, -1, 0, -1, 0, 0);
	func_93(1, 15, 1, 100000, 120000, joaat("CALL_FAM5_DONE"), -1, -1, 0, -1, 69);
	func_98("AM_H_YOGA" /* GXT: Yoga now available at ~BLIP_YOGA~ */, 10000, 2, 1, 0, 0);
	func_125(21, 0);
	func_120(186);
	func_101(23, 0);
	func_104(13, 0);
	func_128(97, 1);
	func_127(22, -2, 97, -1, -1);
	func_101(53, 0);
	func_125(134, 0);
	func_95(joaat("CALL_FAM5_DONE"));
	func_95(joaat("CALL_EXILE_AMANDA"));
	func_123(14, 1, 1890717037, -1);
	func_123(14, 2, -2082393141, -1);
	func_111(1, 17, 6, -1303362934, 80000, 30000, -1, 0, -1, 0);
	func_186(2);
	func_135(56);
	func_137(10, 99, -2, -1, 0);
	func_124(joaat("TEXT_AGENCY_2_UNLOCK"));
	func_103(1, 1, 0, joaat("TEXT_AGENCY_2_UNLOCK"), 6000, 2000, -1, 148, -1, 2048, 0);
	func_128(99, 1);
	func_143(57, 98, -2, -1);
	func_135(57);
	func_177(29, 155);
	func_128(98, 1);
	func_101(31, 0);
	func_101(42, 0);
	func_101(48, 0);
	func_159(17, 0, 0, 0);
	func_159(14, 0, 0, 0);
	func_119(116, 0, 1, 0);
	func_119(118, 0, 1, 0);
	func_119(117, 0, 1, 0);
	func_119(119, 0, 1, 0);
	func_119(125, 0, 1, 0);
	func_119(120, 0, 1, 0);
	func_109(22, 1);
	func_120(203);
	func_88();
	func_87(iVar0);
}

void func_186(int iParam0)//Position - 0xE1CA
{
	int iVar0;
	iVar0 = 0;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 1883604486;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = iParam0;
	func_89(iVar0);
}

void func_187(int iParam0, bool bParam1)//Position - 0xE21E
{
	int iVar0;
	int iVar1;
	iVar0 = 2;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 1542529269;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	iVar1 = 0;
	if (bParam1)
	{
		iVar1 = 1;
	}
	func_92(Global_78588.f_12592[iVar0], iParam0, iVar1);
	func_89(iVar0);
}

void func_188()//Position - 0xE299
{
	int iVar0;
	iVar0 = 7;
	func_132(iVar0);
	func_131();
	func_122(130, 1, 0);
	func_122(120, 1, 0);
	func_119(78, 0, 1, 0);
	func_102("exile_city_denial", 1424);
	func_95(1730771548);
	func_95(170512742);
	func_95(460547213);
	func_123(15, 1, -1982920067, -1);
	func_123(15, 1, 1319343143, -1);
	func_123(15, 1, -1118768768, -1);
	func_123(15, 1, -705125709, -1);
	func_123(15, 1, -782984853, -1);
	func_123(15, 1, -92968020, -1);
	func_123(15, 1, -406305198, -1);
	func_123(14, 1, -330856906, -1);
	func_123(14, 1, -690594988, -1);
	func_123(14, 1, -349863294, -1);
	func_123(14, 1, 424926942, -1);
	func_123(14, 2, 1410028576, -1);
	func_123(14, 4, 469005563, -1);
	func_123(24, 4, -1105442476, -1);
	func_125(135, 0);
	func_159(1, 0, 1, 0);
	func_159(1, 2, 1, 0);
	func_159(14, 1, 1, 0);
	func_159(19, 2, 1, 0);
	func_128(88, 1);
	func_127(14, -2, 88, -1, -1);
	func_129(0, 1, 0);
	func_129(2, 1, 0);
	func_152(0);
	func_152(2);
	func_119(78, 2, 1, 0);
	func_119(6, 1, 1, 0);
	func_113(joaat("GADGET_PARACHUTE"), 1);
	func_125(70, 0);
	func_125(123, 0);
	func_111(7, 97, 6, -1023257027, 125000, 10000, -1, 0, -1, 0);
	func_134(2, 20, 0, 6000, 6000, joaat("CALL_EXILE_1_END"), -1, 0, -1, 16488);
	func_101(47, 0);
	func_101(1, 0);
	func_106(28);
	func_120(210);
	func_93(2, 17, 6, 200000, 100000, joaat("CALL_EXILE_AMANDA"), -1, -1, 0, -1, 0);
	func_93(4, 31, 6, 240000, 60000, 520422857, -1, -1, 0, -1, 0);
	func_93(1, 31, 6, 480000, 60000, -1141042322, -1, -1, 0, -1, 0);
	func_103(4, 54, 6, joaat("TEXT_EXILE_HUNTER_PIE"), 60000, 60000, 10, 0, 20, 512, 0);
	func_103(1, 2, 6, -1293573249, 30000, 10000, -1, 0, -1, 0, 0);
	func_111(1, 15, 6, 2022687760, 30000, 10000, -1, 0, -1, 0);
	func_109(17, 1);
	func_120(201);
	func_107(213, 0, 0);
	func_104(7, 0);
	func_128(89, 1);
	func_127(15, -2, 89, -1, -1);
	func_95(joaat("CALL_EXILE_CALL1"));
	func_95(joaat("CALL_EXILE_CALL2"));
	func_95(-1105442476);
	func_124(joaat("TEXT_EXILE2_UNLOCK"));
	func_123(24, 4, -805704433, -1);
	func_109(23, 1);
	func_120(204);
	func_125(159, 0);
	func_113(joaat("WEAPON_HEAVYSNIPER"), 1);
	func_101(44, 0);
	func_104(8, 0);
	func_128(90, 1);
	func_127(16, -2, 90, -1, -1);
	func_119(65, 1, 1, 0);
	func_119(66, 1, 1, 0);
	func_119(0, 0, 1, 0);
	func_118(0, 1);
	func_103(1, 14, 1, 981904836, 30000, 10000, 12, 0, -1, 0, 0);
	func_93(4, 10, 0, 6000, 5000, joaat("CALL_EXILE_STEVE"), -1, -1, 0, -1, 106);
	func_101(22, 0);
	func_88();
	func_87(iVar0);
}

void func_189()//Position - 0xE607
{
	int iVar0;
	iVar0 = 6;
	func_132(iVar0);
	func_131();
	func_103(4, 24, 1, joaat("TEXT_DOCKS_P2B_UNLOCK"), 240000, 10000, -1, 0, -1, 1064, 0);
	func_140(3000);
	func_98("AM_H_PREP3B" /* GXT: Steal the Cargobob at ~BLIP_HEIST_PREP~ */, 7500, 2, 4, 0, 0);
	func_103(4, 24, 1, -549935988, 600000, 10000, -1, 0, -1, 0, 0);
	func_128(22, 1);
	func_127(73, -2, 22, -1, -1);
	func_124(-549935988);
	func_118(38, 1);
	func_147(1, 6, 1, 0);
	func_101(6, 0);
	func_88();
	func_87(iVar0);
}

void func_190()//Position - 0xE6A2
{
	int iVar0;
	iVar0 = 5;
	func_132(iVar0);
	func_131();
	func_102("heist_ctrl_docks", 2050);
	func_130(71, 0);
	func_122(20, 0, 0);
	func_122(21, 0, 0);
	func_128(15, 1);
	func_127(71, -2, 15, -1, -1);
	func_122(20, 1, 0);
	func_119(139, 1, 1, 0);
	func_119(140, 1, 1, 0);
	func_119(145, 1, 1, 0);
	func_119(146, 0, 1, 0);
	func_128(16, 0);
	func_148(1, 0, 13, -2, -1, 1, 0);
	func_140(500);
	func_148(1, 2, 2, -2, -1, 1, 1);
	func_122(20, 0, 1);
	func_122(21, 1, 0);
	func_140(501);
	func_146(1, 0, 1, 22);
	func_137(22, -1, -2, -2, 0);
	func_122(21, 0, 1);
	func_122(22, 0, 0);
	func_126(0);
	func_119(141, 1, 1, 0);
	func_119(139, 0, 1, 0);
	func_119(140, 0, 1, 0);
	func_119(143, 1, 1, 0);
	func_107(223, 0, 0);
	func_102("pickupVehicles", 128);
	func_143(30, 20, -2, 20);
	func_144(2, 0, 0, 6000, 6000, -1108940541, 1372476011, -1, 16, -1, 0, 32);
	func_168(19, 0);
	func_128(20, 0);
	func_144(2, 0, 0, 6000, 6000, joaat("CALL_DOCKS_POST_PLAN"), 1372476011, -1, 16, -1, 0, 32);
	func_128(19, 1);
	func_123(12, 4, 225734768, -1);
	func_169(8, 3, 17, 21);
	func_128(21, 1);
	func_98("AM_H_FLYM" /* GXT: To prepare for the heist, visit the Flight School as Michael. */, 10000, 2, 7, 0, 0);
	func_103(1, 2, 1, 1759805585, 40000, 10000, -1, 0, -1, 1024, 0);
	func_106(6);
	func_128(17, 1);
	func_103(4, 24, 1, joaat("TEXT_DOCKS_P1_UNLOCK"), 20000, 10000, -1, 0, -1, 1064, 0);
	func_140(3000);
	func_98("AM_H_PREP3A" /* GXT: Steal the submersible at ~BLIP_HEIST_PREP~ */, 7500, 2, 4, 0, 0);
	func_128(18, 1);
	func_127(72, -2, 18, -1, -1);
	func_125(119, 0);
	func_147(1, 5, 1, 0);
	func_147(1, 7, 1, 0);
	func_119(136, 1, 1, 0);
	func_169(8, 3, 23, -2);
	func_104(6, 0);
	func_128(23, 1);
	func_167(6);
	func_104(5, 0);
	func_101(21, 0);
	func_103(3, 2, 1, joaat("TEXT_DOCKS_2_MF_UNLOCK"), 40000, 10000, 24, 54, -1, 1032, 0);
	func_93(4, 24, 2, 60000, 10000, joaat("CALL_DOCKS_2_T_UNLOCK"), -1, 24, 54, -1, 72);
	func_137(23, -2, -1, -1, 0);
	func_128(25, 1);
	func_169(8, 3, 26, 27);
	func_128(26, 1);
	func_127(74, -2, 26, -1, -1);
	func_119(12, 1, 1, 0);
	func_119(13, 1, 1, 0);
	func_113(joaat("WEAPON_ASSAULTSHOTGUN"), 1);
	func_168(28, 0);
	func_128(27, 1);
	func_127(75, -2, 27, -1, -1);
	func_118(39, 1);
	func_128(28, 1);
	func_118(38, 0);
	func_119(2, 0, 1, 0);
	func_124(1759805585);
	func_95(225734768);
	func_122(1, 1, 0);
	func_101(15, 0);
	func_93(4, 39, 1, 60000, 60000, joaat("CALL_EXILE_CALL2"), -1, -1, 0, -1, 1);
	func_88();
	func_87(iVar0);
}

void func_191()//Position - 0xE9F8
{
	func_132(4);
	func_131();
	func_93(4, 20, 0, 6000, 30000, joaat("CALL_CHIN1_UNLOCK"), -1, -1, 0, -1, 105);
	func_123(20, 4, -1758542647, -1);
	func_101(54, 0);
	func_128(86, 1);
	func_112(67, 0, 0);
	func_112(68, 0, 0);
	func_112(69, 0, 0);
	func_127(12, -2, 86, -1, -1);
	func_113(joaat("WEAPON_GRENADELAUNCHER"), 1);
	func_100(21, 2, 1);
	func_109(52, 1);
	func_120(216);
	func_104(4, 0);
	func_128(87, 1);
	func_127(13, -2, 87, -1, -1);
	func_119(50, 1, 1, 0);
	func_119(51, 1, 1, 0);
	func_119(52, 1, 1, 0);
	func_119(53, 1, 1, 0);
	func_119(54, 2, 1, 0);
	func_119(55, 2, 1, 0);
	func_125(141, 0);
	func_113(joaat("WEAPON_SAWNOFFSHOTGUN"), 1);
	func_113(joaat("WEAPON_PETROLCAN"), 1);
	func_95(-1758542647);
	func_101(55, 0);
	func_125(5, 0);
	func_120(169);
	func_88();
	func_87(4);
}

void func_192()//Position - 0xEB11
{
	int iVar0;
	iVar0 = 3;
	func_132(iVar0);
	func_131();
	func_119(77, 1, 1, 0);
	func_112(79, 0, 0);
	func_112(80, 0, 0);
	func_193(0, 1, 10);
	func_193(1, 2, 10);
	func_193(2, 0, 10);
	func_128(82, 1);
	func_127(8, -2, 82, -2, -1);
	func_119(8, 1, 1, 0);
	func_119(9, 1, 1, 0);
	func_119(127, 1, 1, 0);
	func_119(128, 1, 1, 0);
	func_119(126, 1, 1, 0);
	func_113(joaat("WEAPON_NIGHTSTICK"), 1);
	func_111(7, 97, 6, -1548445814, 120000, 10000, -1, 0, -1, 0);
	func_111(7, 96, 6, 2021846885, 140000, 10000, -1, 0, -1, 0);
	func_125(162, 1);
	func_100(29, 1, 1);
	func_100(45, 1, 1);
	func_100(29, 2, 0);
	func_95(2097475336);
	func_124(joaat("TEXT_CAR1_UNLOCK"));
	func_123(37, 2, -108894207, -1);
	func_123(29, 2, -2139605007, -1);
	func_101(0, 0);
	func_128(83, 1);
	func_127(9, -2, 83, -1, -1);
	func_125(144, 0);
	func_119(10, 1, 1, 0);
	func_101(36, 0);
	func_104(3, 0);
	func_128(84, 1);
	func_127(10, -2, 84, -1, -1);
	func_119(7, 1, 1, 0);
	func_119(162, 1, 1, 0);
	func_101(37, 0);
	func_104(2, 0);
	func_125(46, 0);
	func_193(1, 19, 11);
	func_193(1, 2, 11);
	func_128(85, 1);
	func_127(11, -2, 85, -1, -1);
	func_119(8, 0, 1, 0);
	func_119(9, 0, 1, 0);
	func_119(10, 0, 1, 0);
	func_119(7, 0, 1, 0);
	func_134(1, 12, 0, 6000, 6000, -1134988206, -1, 0, -1, 40);
	func_125(47, 0);
	func_101(40, 0);
	func_119(77, 2, 1, 0);
	func_95(-2139605007);
	func_123(29, 2, -1949184344, -1);
	func_88();
	func_87(iVar0);
}

void func_193(int iParam0, int iParam1, int iParam2)//Position - 0xED25
{
	int iVar0;
	iVar0 = 1;
	if (((iParam1 != 0 && iParam1 != 1) && iParam1 != 2) && iParam1 != 19)
	{
		return;
	}
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -1575504933;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_97(Global_78588.f_12592[iVar0], iParam1, iParam0, iParam2, 0);
	func_89(iVar0);
}

void func_194()//Position - 0xEDBE
{
	int iVar0;
	iVar0 = 2;
	func_132(iVar0);
	func_131();
	func_120(165);
	func_103(2, 12, 1, 1635608802, 50000, 30000, 71, 52, -1, 1096, 0);
	func_137(48, -2, -1, -2, 0);
	func_128(77, 1);
	func_127(3, -2, 77, -1, -1);
	func_124(joaat("TEXT_FIB4_F_ASS1"));
	func_124(joaat("TEXT_FIB4_MT_ASS1"));
	func_124(1635608802);
	func_134(1, 12, 0, 6000, 6000, joaat("CALL_ASS1_DONE"), 2, 45, -1, 96);
	func_102("SH_Intro_F_Hills", 1424);
	func_128(240, 1);
	func_125(193, 0);
	func_111(2, 44, 6, -1821325152, 800000, 120000, -1, 0, -1, 0);
	func_101(14, 0);
	func_128(78, 1);
	func_127(4, -2, 78, -1, -1);
	func_125(194, 0);
	func_104(0, 0);
	func_128(79, 1);
	func_127(5, -2, 79, -1, -1);
	func_125(195, 0);
	func_128(80, 1);
	func_127(6, -2, 80, -1, -1);
	func_125(196, 0);
	func_104(1, 0);
	func_128(81, 1);
	func_127(7, -2, 81, -1, -1);
	func_125(197, 0);
	func_122(49, 1, 0);
	func_124(joaat("TEXT_ASS_FIN_A"));
	func_124(joaat("TEXT_ASS_FIN_B"));
	func_120(241);
	func_88();
	func_87(iVar0);
}

void func_195()//Position - 0xEF21
{
	int iVar0;
	iVar0 = 1;
	func_132(iVar0);
	func_131();
	func_198(0);
	func_128(71, 0);
	func_138(0, -2, 71, -1);
	func_121(5, 1, 1);
	func_121(7, 0, 0);
	func_121(8, 0, 0);
	func_121(9, 0, 0);
	func_197(1, 1, 31, 250);
	func_122(66, 0, 0);
	func_98("AM_H_REPEAT" /* GXT: Replay missions from the Game section of the Pause Menu while off mission. Replaying old missions will not affect story progress. */, 10000, 2, 7, 0, 0);
	func_100(131, 0, 0);
	func_100(131, 1, 0);
	func_123(19, 2, 1867406480, -1);
	func_125(58, 0);
	func_125(71, 0);
	func_118(2, 1);
	func_118(59, 1);
	func_117(1, 1);
	func_196(6, 0, 1);
	func_102("ambientBlimp", 1424);
	func_102("controller_taxi", 1424);
	func_120(194);
	func_125(17, 0);
	func_125(92, 0);
	func_125(93, 0);
	func_125(1, 0);
	func_125(94, 0);
	func_125(31, 0);
	func_125(32, 0);
	func_125(34, 0);
	func_125(15, 0);
	func_112(81, 0, 0);
	func_112(82, 0, 0);
	func_187(0, 1);
	func_125(152, 0);
	func_137(61, -2, 72, 72, 0);
	func_93(2, 18, 1, 4000, 15000, 742578279, -1, 74, 0, -1, 524392);
	func_168(73, 0);
	func_128(72, 1);
	func_93(2, 18, 1, 4000, 15000, joaat("CALL_ARM2_UNLOCK"), -1, 74, 0, -1, 524392);
	func_128(73, 1);
	func_120(182);
	func_120(230);
	func_120(188);
	func_120(187);
	func_120(181);
	func_120(228);
	func_98("AM_H_BLIP" /* GXT: Franklin has a contact at ~HUD_COLOUR_FRANKLIN~~BLIP_SIMEON_FAMILY~~s~ Go to the contact to get a mission from Simeon. */, 10000, 2, 7, 0, 0);
	func_128(74, 1);
	func_127(1, -2, 74, -1, -1);
	func_119(79, 1, 1, 0);
	func_163(1);
	func_154(0);
	func_113(joaat("WEAPON_PISTOL"), 1);
	func_113(joaat("WEAPON_MICROSMG"), 1);
	func_113(joaat("WEAPON_KNIFE"), 1);
	func_113(joaat("WEAPON_PUMPSHOTGUN"), 1);
	func_119(179, 1, 1, 0);
	func_102("letterScraps", 1424);
	func_120(199);
	func_137(62, 75, -2, -2, 0);
	func_103(2, 19, 1, joaat("TEXT_ARM2_END"), 35000, 10000, -1, 41, -1, 0, 0);
	func_128(75, 1);
	func_100(17, 0, 0);
	func_100(14, 0, 0);
	func_100(15, 0, 0);
	func_153(19, 1);
	func_153(14, 0);
	func_153(17, 0);
	func_106(19);
	func_128(76, 1);
	func_127(2, -2, 76, -1, -1);
	func_121(0, 1, 1);
	func_118(0, 1);
	func_197(1, 1, 96, 300);
	func_118(36, 1);
	func_119(179, 1, 1, 1);
	func_119(174, 1, 1, 0);
	func_119(178, 1, 1, 0);
	func_119(175, 1, 1, 0);
	func_119(176, 1, 1, 0);
	func_119(177, 1, 1, 0);
	func_98("AM_H_SWTCH0" /* GXT: SWITCH between Michael and Franklin now available. Hold ~INPUT_CHARACTER_WHEEL~ to view the SWITCH menu. */, 15000, 2, 7, 0, 0);
	func_102("SH_Intro_M_Home", 1424);
	func_93(2, 18, 1, 200000, 60000, joaat("CALL_ARM3_DONE"), 410510653, 72, 42, -1, 128);
	func_95(1867406480);
	func_123(30, 1, 1438498239, -1);
	func_103(1, 17, 1, joaat("TEXT_TENNIS_UNLOCK"), 35000, 10000, -1, 22, -1, 262144, 0);
	func_120(168);
	func_120(171);
	func_178(1, 8);
	func_122(72, 1, 0);
	func_106(8);
	func_129(0, 1, 0);
	func_152(0);
	func_122(115, 1, 0);
	func_109(2, 1);
	func_120(196);
	func_109(21, 1);
	func_120(202);
	func_120(226);
	func_109(9, 1);
	func_120(200);
	func_88();
	func_87(iVar0);
}

void func_196(int iParam0, int iParam1, bool bParam2)//Position - 0xF2DD
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -661286798;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	iVar1 = 0;
	if (bParam2)
	{
		iVar1 = 1;
	}
	func_97(Global_78588.f_12592[iVar0], iParam0, iParam1, iVar1, -1);
	func_89(iVar0);
}

void func_197(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xF35B
{
	int iVar0;
	if (iParam0 > 2)
	{
	}
	if (iParam3 <= 0)
	{
	}
	iVar0 = 1;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -1283556585;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	func_97(Global_78588.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_89(iVar0);
}

void func_198(int iParam0)//Position - 0xF3DB
{
	int iVar0;
	iVar0 = 0;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = -159886710;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = iParam0;
	func_89(iVar0);
}

void func_199()//Position - 0xF42F
{
	int iVar0;
	iVar0 = 0;
	func_132(iVar0);
	func_131();
	func_119(70, 1, 1, 0);
	func_119(71, 1, 1, 0);
	func_119(73, 1, 1, 0);
	func_119(72, 0, 1, 0);
	func_119(74, 0, 1, 0);
	func_103(1, 12, 1, joaat("TEXT_AGENCY_1_UNLOCK"), 25000, 10000, 22, 0, -1, 40, 0);
	func_102("heist_ctrl_agency", 2050);
	func_128(0, 1);
	func_127(66, -2, 0, -1, -1);
	func_193(0, 1, 67);
	func_147(3, 0, 1, 0);
	func_147(3, 1, 1, 0);
	func_101(13, 0);
	func_102("buildingSiteAmbience", 128);
	func_103(1, 1, 1, joaat("TEXT_AGENCY_2_UNLOCK"), 240000, 10000, -1, 148, -1, 1024, 0);
	func_137(10, -2, -1, -2, 0);
	func_122(11, 0, 0);
	func_122(70, 1, 0);
	func_125(97, 0);
	func_119(87, 1, 1, 0);
	func_128(2, 0);
	func_93(1, 1, 1, 300000, 60000, -1323332922, -1, -1, 86, -1, 72);
	func_130(67, 0);
	func_122(6, 0, 0);
	func_122(7, 0, 0);
	func_128(3, 0);
	func_200(67, -2, 2, -2);
	func_119(87, 0, 1, 0);
	func_165("AM_H_ARM2" /* GXT: Franklin is now tailing the architect. SWITCH to Franklin to see how he's doing. */, 0);
	func_124(joaat("TEXT_AGENCY_2_UNLOCK"));
	func_95(-1323332922);
	func_147(3, 2, 1, 0);
	func_122(70, 0, 0);
	func_122(6, 1, 0);
	func_119(166, 1, 1, 0);
	func_128(4, 0);
	func_148(3, 0, 13, -2, -1, 1, 0);
	func_140(500);
	func_128(5, 0);
	func_148(3, 2, 4, -2, -1, 1, 0);
	func_122(6, 0, 1);
	func_122(7, 1, 0);
	func_128(6, 0);
	func_148(3, 1, 5, -2, 5, 1, 1);
	func_140(501);
	func_146(3, 0, 1, 8);
	func_137(8, -1, -2, -2, 0);
	func_122(7, 0, 1);
	func_122(8, 0, 0);
	func_107(225, 0, 0);
	func_125(116, 0);
	func_101(52, 0);
	func_126(0);
	func_169(10, 6, -2, 9);
	func_102("agency_prep2Amb", 2050);
	func_103(3, 12, 1, joaat("TEXT_AGENCY_P_UNLOCK"), 10000, 10000, -1, 0, -1, 1064, 0);
	func_147(3, 6, 1, 0);
	func_140(3000);
	func_98("AM_H_PREP6" /* GXT: Find a way to get a fire truck. */, 10000, 2, 3, 0, 0);
	func_103(3, 12, 1, 639116137, 600000, 30000, -1, 0, 11, 0, 0);
	func_128(7, 1);
	func_127(68, -2, 7, -1, -1);
	func_119(169, 1, 0, 0);
	func_118(43, 1);
	func_112(62, 1, 0);
	func_112(63, 1, 0);
	func_147(3, 7, 1, 0);
	func_144(0, 12, 0, 6000, 6000, -651018670, -518176220, -1889998615, 10, -1, 53, 0);
	func_144(1, 12, 0, 6000, 6000, -236506853, 777679877, -1547927413, 10, -1, 53, 0);
	func_137(14, -2, -1, -1, 0);
	func_128(9, 1);
	func_169(10, 6, -2, 11);
	func_107(219, 0, 0);
	func_137(12, -2, -1, -2, 0);
	func_112(62, 1, 1);
	func_112(63, 1, 1);
	func_119(70, 1, 0, 1);
	func_119(71, 2, 0, 0);
	func_119(73, 1, 0, 1);
	func_119(72, 0, 0, 1);
	func_119(74, 0, 0, 1);
	func_112(62, 0, 0);
	func_112(63, 0, 0);
	func_128(10, 1);
	func_127(69, -2, 10, -1, -1);
	func_134(0, 30, 0, 6000, 6000, joaat("CALL_AGENCY_3A_DONE"), -1, 0, -1, 104);
	func_124(639116137);
	func_168(13, 0);
	func_128(11, 1);
	func_112(62, 1, 2);
	func_112(63, 1, 2);
	func_103(3, 12, 1, joaat("TEXT_AGENCY_3B_UNLOCK"), 30000, 60000, 21, 43, -1, 72, 0);
	func_137(9, -2, -1, -2, 0);
	func_147(3, 6, 1, 1);
	func_119(70, 1, 0, 2);
	func_119(71, 2, 0, 1);
	func_119(73, 1, 0, 2);
	func_119(72, 0, 0, 2);
	func_119(74, 0, 0, 2);
	func_112(62, 0, 1);
	func_112(63, 0, 1);
	func_128(12, 1);
	func_127(70, -2, 12, -1, -1);
	func_134(0, 30, 0, 6000, 6000, joaat("CALL_AGENCY_3B_DONE"), -1, 0, -1, 104);
	func_128(13, 1);
	func_125(77, 300000);
	func_112(62, 1, 3);
	func_112(63, 1, 3);
	func_119(166, 0, 1, 0);
	func_119(169, 0, 1, 0);
	func_119(165, 0, 1, 0);
	func_119(70, 0, 1, 0);
	func_119(71, 0, 1, 0);
	func_119(73, 0, 1, 0);
	func_119(72, 2, 1, 0);
	func_119(74, 1, 1, 0);
	func_101(41, 0);
	func_122(2, 1, 0);
	func_118(43, 0);
	func_119(28, 1, 1, 0);
	func_119(26, 0, 1, 0);
	func_119(36, 0, 1, 0);
	func_119(27, 0, 1, 0);
	func_119(34, 0, 1, 0);
	func_119(29, 0, 1, 0);
	func_119(30, 0, 1, 0);
	func_119(31, 0, 1, 0);
	func_105(7, 14, -2, 14);
	func_95(joaat("CALL_HACKER_3"));
	func_93(1, 46, 6, 300000, 120000, joaat("CALL_HACKER_4"), -1, -1, 72, -1, 1);
	func_128(14, 1);
	func_88();
	func_87(iVar0);
}

void func_200(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xF99C
{
	int iVar0;
	if (iParam3 == -1)
	{
		iParam3 = iParam1;
	}
	iVar0 = 1;
	func_90(iVar0);
	Global_78588.f_6825[Global_78588.f_12591 /*3*/] = 889972124;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_1 = iVar0;
	Global_78588.f_6825[Global_78588.f_12591 /*3*/].f_2 = Global_78588.f_12592[iVar0];
	Global_91229[iParam0 /*34*/].f_7 = Global_78588.f_12592[iVar0];
	func_97(Global_78588.f_12592[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_89(iVar0);
}

void func_201()//Position - 0xFA2F
{
	func_218();
	func_217();
	func_216();
	func_215();
	func_214();
	func_213();
	func_212();
	func_211();
	func_210();
	func_202();
}

void func_202()//Position - 0xFA5F
{
	func_209();
	func_208();
	__LIB_30__.func_279();
	__LIB_37__.func_341();
}

void func_208()//Position - 0xFD5B
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_78588.f_6684[iVar0 /*14*/] = 0;
		Global_78588.f_6684[iVar0 /*14*/].f_1 = 0;
		Global_78588.f_6684[iVar0 /*14*/].f_2 = 0;
		Global_78588.f_6684[iVar0 /*14*/].f_3 = 0;
		Global_78588.f_6684[iVar0 /*14*/].f_4 = 0;
		Global_78588.f_6684[iVar0 /*14*/].f_5 = 0;
		Global_78588.f_6684[iVar0 /*14*/].f_6 = 0;
		Global_78588.f_6684[iVar0 /*14*/].f_7 = 0;
		Global_78588.f_6684[iVar0 /*14*/].f_8 = 0;
		Global_78588.f_6684[iVar0 /*14*/].f_9 = -1;
		Global_78588.f_6684[iVar0 /*14*/].f_10 = -1;
		Global_78588.f_6684[iVar0 /*14*/].f_11 = -1;
		Global_78588.f_6684[iVar0 /*14*/].f_12 = 0;
		Global_78588.f_6684[iVar0 /*14*/].f_13 = -1;
		iVar0++;
	}
}

void func_209()//Position - 0xFE3B
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 169)
	{
		Global_78588.f_4824[iVar0 /*11*/] = 0;
		Global_78588.f_4824[iVar0 /*11*/].f_1 = 0;
		Global_78588.f_4824[iVar0 /*11*/].f_2 = 0;
		Global_78588.f_4824[iVar0 /*11*/].f_3 = 0;
		Global_78588.f_4824[iVar0 /*11*/].f_4 = 0;
		Global_78588.f_4824[iVar0 /*11*/].f_5 = 0;
		Global_78588.f_4824[iVar0 /*11*/].f_6 = 0;
		Global_78588.f_4824[iVar0 /*11*/].f_7 = 0;
		Global_78588.f_4824[iVar0 /*11*/].f_8 = -1;
		Global_78588.f_4824[iVar0 /*11*/].f_9 = 0;
		Global_78588.f_4824[iVar0 /*11*/].f_10 = -1;
		iVar0++;
	}
}

void func_210()//Position - 0xFEF1
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_78588.f_12526[iVar0 /*2*/] = -1;
		Global_78588.f_12526[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
}

void func_211()//Position - 0xFF29
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1900)
	{
		Global_78588.f_6825[iVar0 /*3*/] = -1;
		Global_78588.f_6825[iVar0 /*3*/].f_1 = 12;
		Global_78588.f_6825[iVar0 /*3*/].f_2 = -1;
		iVar0++;
	}
	Global_78588.f_12591 = 0;
}

void func_212()//Position - 0xFF79
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_78588.f_4797[iVar0 /*13*/] = 0;
		StringCopy(&(Global_78588.f_4797[iVar0 /*13*/].f_1), "", 32);
		Global_78588.f_4797[iVar0 /*13*/].f_9 = 0;
		Global_78588.f_4797[iVar0 /*13*/].f_10 = -1;
		Global_78588.f_4797[iVar0 /*13*/].f_11 = -1;
		Global_78588.f_4797[iVar0 /*13*/].f_12 = 0;
		iVar0++;
	}
}

void func_213()//Position - 0xFFED
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_78588.f_4811[iVar0 /*12*/] = -1;
		Global_78588.f_4811[iVar0 /*12*/].f_1 = -1;
		Global_78588.f_4811[iVar0 /*12*/].f_2 = -1;
		Global_78588.f_4811[iVar0 /*12*/].f_3 = -1;
		Global_78588.f_4811[iVar0 /*12*/].f_4 = -1;
		Global_78588.f_4811[iVar0 /*12*/].f_6 = -1;
		Global_78588.f_4811[iVar0 /*12*/].f_7 = -1;
		Global_78588.f_4811[iVar0 /*12*/].f_10 = 0;
		Global_78588.f_4811[iVar0 /*12*/].f_11 = 0;
		iVar0++;
	}
}

void func_214()//Position - 0x10087
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 53)
	{
		StringCopy(&(Global_78588.f_4160[iVar0 /*12*/]), "NOT_SETUP", 32);
		Global_78588.f_4160[iVar0 /*12*/].f_8 = 0;
		Global_78588.f_4160[iVar0 /*12*/].f_9 = 0;
		Global_78588.f_4160[iVar0 /*12*/].f_10 = 0;
		Global_78588.f_4160[iVar0 /*12*/].f_11 = 0;
		iVar0++;
	}
}

void func_215()//Position - 0x100EE
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		StringCopy(&(Global_78588.f_4151[iVar0 /*8*/]), "NOT_SETUP", 32);
		iVar0++;
	}
}

void func_216()//Position - 0x1011C
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 280)
	{
		Global_78588.f_3590[iVar0 /*2*/] = 0;
		Global_78588.f_3590[iVar0 /*2*/].f_1 = 1;
		iVar0++;
	}
}

void func_217()//Position - 0x10155
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 870)
	{
		Global_78588.f_109[iVar0 /*4*/] = 0;
		Global_78588.f_109[iVar0 /*4*/].f_1 = 1;
		Global_78588.f_109[iVar0 /*4*/].f_2 = 2;
		Global_78588.f_109[iVar0 /*4*/].f_3 = 3;
		iVar0++;
	}
}

void func_218()//Position - 0x101A6
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		Global_78588.f_12592[iVar0] = 0;
		iVar0++;
	}
}

void func_219()//Position - 0x101D0
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	int iVar4;
	int iVar5;
	int iVar6;
	if (Global_78320)
	{
		if ((__LIB_0__.func_176(53) && !BitTest(Global_113386.f_10016.f_25, 1)) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("flowintrotitle")) == 0)
		{
			MISC::SET_BIT(&(Global_113386.f_10016.f_25), 1);
		}
		bVar0 = false;
		if (!bVar0)
		{
			if (!BitTest(Global_113386.f_9085.f_2[27 /*3*/], 1) || !__LIB_0__.func_176(53))
			{
				MISC::SET_BIT(&(Global_113386.f_9085.f_2[27 /*3*/]), 1);
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(800);
					}
				}
				bVar0 = true;
			}
		}
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (!bVar0)
			{
				iVar2 = Global_113386.f_9085.f_2[iVar1 /*3*/].f_1;
				if (iVar2 != -1)
				{
					if (Global_78588.f_6825[iVar2 /*3*/] == -868169264)
					{
						if (!CAM::IS_SCREEN_FADED_OUT())
						{
							if (!CAM::IS_SCREEN_FADING_OUT())
							{
								CAM::DO_SCREEN_FADE_OUT(800);
							}
						}
						bVar0 = true;
					}
				}
			}
			iVar1++;
		}
	}
	else
	{
		__LIB_29__.func_887(1);
	}
	if (!Global_78320)
	{
		MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("SMOG", 25f);
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		MISC::UNLOAD_ALL_CLOUD_HATS();
	}
	if (!__LIB_12__.func_116())
	{
		iVar3[0] = joaat("extrasunny");
		iVar3[1] = joaat("clear");
		iVar3[2] = joaat("clouds");
		iVar3[3] = joaat("smog");
		iVar3[4] = joaat("OVERCAST");
		iVar3[5] = joaat("rain");
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		MISC::SET_CURR_WEATHER_STATE(iVar3[iVar4], iVar3[iVar5], 0f);
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailOut"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("DeathFailOut");
	}
	CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(0);
	MISC::SET_TIME_SCALE(1f);
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::GET_PROFILE_SETTING(903) == 0)
		{
			if (__LIB_0__.func_176(53))
			{
				STATS::SET_PROFILE_SETTING_PROLOGUE_COMPLETE();
			}
		}
		if (MISC::GET_PROFILE_SETTING(939) == 0)
		{
			if (__LIB_0__.func_176(40))
			{
				STATS::SET_PROFILE_SETTING_SP_CHOP_MISSION_COMPLETE();
			}
		}
	}
	MISC::ENABLE_STUNT_JUMP_SET(0);
	NETWORK::NETWORK_BLOCK_INVITES(false);
	__LIB_30__.func_279();
	__LIB_11__.func_683();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), __LIB_0__.func_368(67));
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), __LIB_0__.func_368(68));
	}
	iVar6 = __LIB_18__.func_173();
	if (__LIB_0__.func_43(iVar6))
	{
		if (__LIB_30__.func_691())
		{
			__LIB_32__.func_750(PLAYER::PLAYER_PED_ID(), 1, 0);
			__LIB_26__.func_579(PLAYER::PLAYER_PED_ID());
			__LIB_26__.func_512(PLAYER::PLAYER_PED_ID());
			func_220(PLAYER::PLAYER_PED_ID());
		}
	}
	Global_113377 = (MISC::GET_GAME_TIMER() - 90000);
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, true, 0f, 0f, 0f);
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1819.2744f, 2608.5369f, 44.6195f, true, 0f, 50f, 0f);
	Global_78588.f_7 = 1;
}

void func_220(int iParam0)//Position - 0x10484
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_18__.func_168(iParam0);
	if (__LIB_0__.func_43(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__.func_352(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_10__.func_1(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__.func_352(iParam0);
				}
			}
		}
		func_325(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__.func_365(49))
				{
					iVar1 = func_310(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_221(__LIB_6__.func_757(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__.func_365(44))
				{
					iVar1 = func_310(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_310(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_221(__LIB_6__.func_757(0), 3, 70, 1, 0, 0, 0);
					func_221(__LIB_6__.func_757(0), 3, 71, 1, 0, 0, 0);
					func_221(__LIB_6__.func_757(0), 3, 72, 1, 0, 0, 0);
					func_221(__LIB_6__.func_757(0), 3, 73, 1, 0, 0, 0);
					func_221(__LIB_6__.func_757(0), 3, 74, 1, 0, 0, 0);
					func_221(__LIB_6__.func_757(0), 3, 75, 1, 0, 0, 0);
					func_221(__LIB_6__.func_757(0), 4, 41, 1, 0, 0, 0);
					func_221(__LIB_6__.func_757(0), 4, 42, 1, 0, 0, 0);
					func_221(__LIB_6__.func_757(0), 4, 43, 1, 0, 0, 0);
					func_221(__LIB_6__.func_757(0), 4, 44, 1, 0, 0, 0);
					func_221(__LIB_6__.func_757(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_310(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_10__.func_1(iVar0);
				func_325(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_221(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x106E1
{
	__LIB_38__.func_82(iParam0, iParam1, iParam2, bParam3);
	func_295(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__.func_364(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_38__.func_81(iParam0, iParam1, iParam2, 0);
	}
}

int func_295(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x27846
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__.func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
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
					uVar3 = { __LIB_18__.func_180(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_295(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_38__.func_82(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__.func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_295(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_38__.func_82(iParam0, 14, uVar4[iVar2], 1);
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
			__LIB_0__.func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
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
								func_295(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_295(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_295(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_295(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_295(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_295(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_295(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_295(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_295(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_295(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_295(iParam0, 14, iVar5, 1, 0);
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
								func_295(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_295(iParam0, 14, 17, 1, 0);
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

int func_310(int iParam0, int iParam1, int iParam2)//Position - 0x2AE22
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_317(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_317(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return __LIB_6__.func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__.func_795(iParam0, iParam1);
		}
	}
	return -99;
}

int func_317(int iParam0, int iParam1, int iParam2)//Position - 0x2B280
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_18__.func_180(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_317(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_317(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_317(iParam0, 14, iVar4))
										{
											if (!__LIB_24__.func_955(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = __LIB_6__.func_795(iParam0, iVar2);
						Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_24__.func_955(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar8 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_317(iParam0, 14, uVar8[iVar7]))
			{
				return 0;
			}
			iVar7++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_4 || Global_78130[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_325(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x2C63D
{
	int iVar0;
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
	int iVar11;
	struct<5> Var12;
	if (!PED::IS_PED_INJURED(iParam0) || iParam5)
	{
		iVar0 = __LIB_18__.func_168(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
				{
					if (uParam1->f_39[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (__LIB_0__.func_43(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_519(iParam0, iVar1, &iVar2, 0))
			{
				func_505(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_503(iParam0, iVar1, &iVar2))
			{
				func_505(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_500(iParam0);
			__LIB_0__.func_427(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_0__.func_427(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__.func_350(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_18__.func_181(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_18__.func_186(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_328(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__.func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_328(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__.func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_328(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_18__.func_181(iVar9);
			}
			else
			{
				iVar9 = __LIB_18__.func_186(iVar9);
			}
			__LIB_0__.func_427(753, iVar9, Global_78127, 1, 0);
			__LIB_0__.func_427(2053, iVar9, Global_78127, 1, 0);
			__LIB_6__.func_796(161, 1, -1, 1);
		}
		if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
		{
			iVar10 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar11 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 1, PED::GET_PED_PROP_INDEX(iParam0, 1), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 1));
			if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0") || iVar10 == joaat("DLC_MP_ARENA_F_BERD_13_0"))
			{
				if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("ARENA_DRAW_0"), 1))
				{
					FILES::INIT_SHOP_PED_PROP(&Var12);
					if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0"))
					{
						FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_M_PEYES_0_0"), &Var12);
					}
					else
					{
						FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_F_PEYES_0_0"), &Var12);
					}
					PED::SET_PED_PROP_INDEX(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("ARENA_DRAW_0"), 1))
			{
				PED::CLEAR_PED_PROP(iParam0, 1);
			}
		}
	}
}

int func_328(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x2CB19
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	int iVar17;
	var uVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	float fVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	var uVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	var uVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1574990 != 4 && Global_1574990 != 5) && Global_1574990 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_78127;
	}
	Global_78128++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = -1;
	iVar11 = -1;
	if (iParam5 == 0)
	{
		Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
		if (!__LIB_0__.func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_78128 > 1)
		{
		}
		else
		{
			func_458(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar12 = Global_2883588;
		uVar13 = Global_2883589;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar14 = 15;
		if (iParam5 == 1)
		{
			uVar14 = { Global_78173 };
		}
		else
		{
			uVar14 = { __LIB_18__.func_180(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_78130[1 /*14*/].f_6, 1))
					{
						func_458(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iVar0, uVar14[iVar0], -1) };
					if (BitTest(Global_78130[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar15 = 9;
							if (iParam5 == 1)
							{
								uVar15 = { Global_78190 };
							}
							else
							{
								uVar15 = { __LIB_18__.func_247(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_458(iVar5, iVar0, uVar14[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_328(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_458(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iVar0, func_456(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__.func_180(iVar5, 0) };
					func_328(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__.func_468();
			if (iVar17 != -1)
			{
				__LIB_25__.func_43(iVar17, 0, iParam10);
			}
			func_450(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__.func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_458(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_40__.func_849(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_328(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_458(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_328(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			__LIB_40__.func_732(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_328(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_328(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar19 = __LIB_0__.func_33(iParam1);
		if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar19) != Global_78130[1 /*14*/].f_3 || PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar19) != Global_78130[1 /*14*/].f_4)
		{
			iVar20 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
			iVar21 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 7, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 7), PED::GET_PED_TEXTURE_VARIATION(iParam0, 7));
			if (((iParam1 == 11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_JBIB"), 0)) || (iParam1 == 8 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_SPECIAL"), 0))) || (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_LEGS"), 0)))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 7));
			}
			if ((iParam1 == 11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("REMOVE_WITH_JBIB"), 0)) || (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("REMOVE_WITH_LEGS"), 0)))
			{
				if (iVar5 == joaat("MP_M_Freemode_01"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 15, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
				else if (iVar5 == joaat("MP_F_Freemode_01"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 2, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar22 = -1;
				if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("CREW_COL"), 11))
				{
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 0);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 1);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 2);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 3);
				}
				iVar23 = __LIB_6__.func_795(iParam0, 11);
				iVar24 = __LIB_6__.func_795(iParam0, 8);
				iVar25 = __LIB_6__.func_795(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_6__.func_795(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_440(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar23, 3, 0);
					}
					switch (iVar26)
					{
						case joaat("DLC_MP_VAL_F_UPPR0_0"):
						case joaat("DLC_MP_VAL_F_UPPR0_1"):
						case joaat("DLC_MP_VAL_F_UPPR0_2"):
						case joaat("DLC_MP_VAL_F_UPPR0_3"):
						case joaat("DLC_MP_VAL_F_UPPR0_4"):
						case joaat("DLC_MP_VAL_F_UPPR0_5"):
							iVar27 = 11;
							iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
							if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("DRESS"), 0))
							{
								iVar27 = -99;
							}
							break;
					}
					if (iVar27 != -99)
					{
						iVar28 = 0;
						while (iVar28 < 18)
						{
							if (__LIB_0__.func_254(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_6__.func_795(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_6__.func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_328(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_6__.func_808(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_6__.func_808(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_37__.func_821(iParam0, iParam2);
							iVar31 = __LIB_6__.func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_328(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_328(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__.func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_6__.func_809(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_328(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__.func_821(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_6__.func_807(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__.func_252(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__.func_420(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__.func_420(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__.func_806(iVar5, __LIB_6__.func_795(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__.func_806(iVar5, __LIB_6__.func_795(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_328(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_328(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_328(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_31__.func_927(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_450(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_440(iVar5, func_456(iParam0, 8, -1), iParam2, func_456(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__.func_534(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__.func_534(2160, iParam10, 0);
				}
				PED::SET_PED_HAIR_TINT(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar42 = -99;
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar42 = __LIB_18__.func_181(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_18__.func_186(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_375(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__.func_795(iParam0, 11);
				iVar45 = __LIB_6__.func_795(iParam0, 4);
				iVar46 = func_440(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar44, 3, 0);
				}
				switch (iVar43)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar46 = 11;
						iVar47 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar47, joaat("DRESS"), 0))
						{
							iVar46 = -99;
						}
						break;
				}
				if (iVar46 != -99)
				{
					iVar48 = 0;
					while (iVar48 < 18)
					{
						if (__LIB_0__.func_254(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_450(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__.func_795(iParam0, 11);
			if (__LIB_6__.func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__.func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__.func_927(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_440(iVar5, iParam2, __LIB_6__.func_795(iParam0, 11), __LIB_6__.func_795(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_6__.func_795(iParam0, 7);
				if (!__LIB_24__.func_966(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_0__.func_534(2100, iParam10, 0);
				iVar53 = __LIB_0__.func_534(2101, iParam10, 0);
				iVar54 = __LIB_0__.func_534(2102, iParam10, 0);
				fVar55 = __LIB_0__.func_424(135, iParam10);
				if (iVar5 == joaat("MP_M_Freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
				}
				else if (iVar5 == joaat("MP_F_Freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
				}
				iVar56 = 0;
				while (iVar56 < 20)
				{
					PED::SET_PED_MICRO_MORPH(iParam0, iVar56, 0f);
					iVar56++;
				}
			}
			else
			{
				__LIB_31__.func_910(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_6__.func_795(iParam0, 11);
			iVar58 = __LIB_6__.func_795(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__.func_806(iVar5, iParam2, __LIB_6__.func_807(iVar5, iVar58, 0)))
					{
						func_328(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__.func_806(iVar5, iParam2, __LIB_6__.func_807(iVar5, iVar58, 0)))
					{
						func_328(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_440(iVar5, __LIB_6__.func_795(iParam0, 8), __LIB_6__.func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_440(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar57, 3, 0);
				}
				switch (iVar59)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar60 = 11;
						iVar61 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar61, joaat("DRESS"), 0))
						{
							iVar60 = -99;
						}
						break;
				}
				if (iVar60 != -99)
				{
					iVar62 = 0;
					while (iVar62 < 18)
					{
						if (__LIB_0__.func_254(iVar5, iVar60, iVar62) == iVar59)
						{
							iVar10 = iVar62;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar62++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_328(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2883588)
							{
								case joaat("DLC_MP_VAL_F_UPPR0_0"):
								case joaat("DLC_MP_VAL_F_UPPR0_1"):
								case joaat("DLC_MP_VAL_F_UPPR0_2"):
								case joaat("DLC_MP_VAL_F_UPPR0_3"):
								case joaat("DLC_MP_VAL_F_UPPR0_4"):
								case joaat("DLC_MP_VAL_F_UPPR0_5"):
									iVar10 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_440(iVar5, iVar3, __LIB_6__.func_795(iParam0, 11), __LIB_6__.func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_328(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__.func_223(iParam0))
				{
					iVar63 = __LIB_6__.func_803(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_352(iParam0, 9, iVar63))
						{
							func_328(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_328(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_328(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__.func_534(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_18__.func_183(iParam0, iVar64), __LIB_0__.func_217(iParam0, iVar64), __LIB_0__.func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_18__.func_183(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__.func_217(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__.func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_6__.func_782(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_328(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_456(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_456(iParam0, 11, -1);
				}
				if (__LIB_6__.func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__.func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__.func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_328(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__.func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__.func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_328(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar68 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 6);
				iVar69 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 6);
				iVar70 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 6, iVar68, iVar69);
				iVar71 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
				iVar72 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
				iVar73 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar71, iVar72);
				iVar74 = __LIB_6__.func_795(iParam0, 4);
				iVar75 = __LIB_6__.func_795(iParam0, 6);
				if (__LIB_0__.func_215(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__.func_798(iVar5, iVar74, iVar70))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_328(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_328(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__.func_797(iVar5, iVar75, iVar73))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_328(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_328(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__.func_215(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__.func_797(iVar5, iVar75, iVar73))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_328(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_328(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__.func_798(iVar5, iVar74, iVar70))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_328(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_328(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				__LIB_40__.func_732(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_328(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_328(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_329(iParam0, &uVar4))
		{
			func_328(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_328(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_328(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_328(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__.func_254(iVar5, func_456(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_6__.func_758(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_6__.func_758(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_328(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_329(int iParam0, var uParam1)//Position - 0x2E9C3
{
	int iVar0;
	int iVar1;
	*uParam1 = func_456(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_0__.func_534(754, Global_78127, 0) != -99 && __LIB_6__.func_781())
	{
		if (__LIB_0__.func_214() == 4)
		{
			return 1;
		}
		if (__LIB_0__.func_534(754, Global_78127, 0) == 0 && __LIB_0__.func_534(755, Global_78127, 0) == 0)
		{
			if (__LIB_0__.func_421(161, Global_78127))
			{
				if (__LIB_0__.func_534(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_0__.func_534(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_0__.func_534(754, Global_78127, 0);
		iVar1 = __LIB_0__.func_534(755, Global_78127, 0);
		if (!func_352(iParam0, iVar1, iVar0))
		{
			if (__LIB_0__.func_421(161, Global_78127))
			{
				*uParam1 = __LIB_0__.func_534(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_0__.func_534(753, Global_78127, 0);
			}
			__LIB_0__.func_427(754, -99, Global_78127, 1, 0);
			__LIB_0__.func_427(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_352(int iParam0, int iParam1, int iParam2)//Position - 0x32CEF
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	struct<5> Var17;
	var uVar18;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_18__.func_180(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				case 1:
					iVar4 = 4;
					break;
				case 2:
					iVar4 = 6;
					break;
				case 3:
					iVar4 = 7;
					break;
				case 4:
					iVar4 = 8;
					break;
				case 5:
					iVar4 = 11;
					break;
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_352(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_18__.func_247(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_352(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_544(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_352(iParam0, 14, iVar6))
										{
											if (!__LIB_24__.func_955(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
											{
												Global_2883588 = uVar2;
												Global_2883589 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = __LIB_6__.func_795(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_35__.func_544(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_24__.func_955(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
						{
							Global_2883588 = uVar2;
							Global_2883589 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != joaat("0")) && uVar8.f_16)
		{
			if (__LIB_0__.func_534(1759, Global_78127, 0) != uVar8[10])
			{
				Global_2883588 = uVar2;
				Global_2883589 = uVar3;
				return 0;
			}
		}
		Global_2883588 = uVar2;
		Global_2883589 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_352(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_4 || Global_78130[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_78130[1 /*14*/].f_12 == 0 && BitTest(Global_78130[1 /*14*/].f_6, 6)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HELMET"), 1)) && FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588) > 0)
		{
			iVar16 = FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588);
			iVar12 = 0;
			while (iVar12 < iVar16)
			{
				FILES::GET_VARIANT_PROP(Global_2883588, iVar12, &iVar13, &uVar14, &uVar15);
				if (iVar13 != 0 && iVar13 != joaat("0"))
				{
					FILES::INIT_SHOP_PED_PROP(&Var17);
					FILES::GET_SHOP_PED_PROP(iVar13, &Var17);
					if (Var17.f_3 == PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) && Var17.f_4 == PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78129++;
			if (Global_78129 == 1)
			{
				if (__LIB_6__.func_802(iVar0, 11, __LIB_6__.func_795(iParam0, 11), -1))
				{
					if (__LIB_6__.func_800(iVar0, 4, iParam2, &uVar18))
					{
						return func_352(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__.func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_352(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_375(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x39A07
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_31__.func_926(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__.func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_25__.func_43(iVar1, 1, iParam2);
	}
	func_376(iParam0, bParam3, 0, -1);
}

void func_376(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x39A54
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<8> Var9;
	int iVar10;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_78127;
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar2 = __LIB_0__.func_250(iParam0);
		bVar3 = func_420(iParam0, 0);
		bVar4 = __LIB_31__.func_887(iParam0);
		bVar5 = func_411(iParam0, iParam3);
		if (bParam1)
		{
			bVar4 = true;
		}
		if (bParam2)
		{
			bVar4 = false;
		}
		iVar6 = 0;
		while (iVar6 < 127)
		{
			if (__LIB_18__.func_432(iVar6, iVar0))
			{
				if (__LIB_6__.func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__.func_69(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__.func_432(123, iVar0))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar8 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar2);
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar2, iVar7, &Var9))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var9.f_0))
				{
					iVar10 = (129 + iVar7);
					if (__LIB_18__.func_432(iVar10, iVar0))
					{
						if (__LIB_25__.func_69(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__.func_925(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__.func_235(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_411(int iParam0, int iParam1)//Position - 0x48C23
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar2 = __LIB_0__.func_534(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_456(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (iVar2)
						{
							case joaat("MP_Elite_M_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_M"):
							case joaat("MP_Heist4_Tee_039_M"):
							case joaat("MP_Heist4_Tee_041_M"):
							case joaat("MP_Heist4_Tee_043_M"):
							case joaat("MP_Heist4_Tee_049_M"):
							case joaat("MP_Heist4_Tee_051_M"):
							case joaat("MP_Heist4_Tee_055_M"):
							case joaat("MP_Heist4_Tee_057_M"):
							case joaat("MP_Heist4_Tee_059_M"):
							case joaat("MP_Heist4_Tee_061_M"):
							case joaat("MP_Heist4_Tee_063_M"):
							case joaat("MP_Heist4_Tee_065_M"):
							case joaat("MP_Tuner_Tee_000_M"):
							case joaat("MP_Tuner_Tee_002_M"):
							case joaat("MP_Tuner_Tee_003_M"):
							case joaat("MP_Tuner_Tee_005_M"):
							case joaat("MP_Tuner_Tee_006_M"):
							case joaat("MP_Tuner_Tee_008_M"):
							case joaat("MP_Tuner_Tee_010_M"):
								return 1;
								break;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			iVar2 = __LIB_0__.func_534(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 == 3)
			{
				if (iVar1 == 14)
				{
					return 1;
				}
			}
			else if (iVar0 > 15)
			{
				iVar5 = func_456(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (iVar2)
						{
							case joaat("MP_Elite_F_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_F"):
							case joaat("MP_Heist4_Tee_039_F"):
							case joaat("MP_Heist4_Tee_041_F"):
							case joaat("MP_Heist4_Tee_043_F"):
							case joaat("MP_Heist4_Tee_049_F"):
							case joaat("MP_Heist4_Tee_051_F"):
							case joaat("MP_Heist4_Tee_055_F"):
							case joaat("MP_Heist4_Tee_057_F"):
							case joaat("MP_Heist4_Tee_059_F"):
							case joaat("MP_Heist4_Tee_061_F"):
							case joaat("MP_Heist4_Tee_063_F"):
							case joaat("MP_Heist4_Tee_065_F"):
							case joaat("MP_Tuner_Tee_000_F"):
							case joaat("MP_Tuner_Tee_002_F"):
							case joaat("MP_Tuner_Tee_003_F"):
							case joaat("MP_Tuner_Tee_005_F"):
							case joaat("MP_Tuner_Tee_006_F"):
							case joaat("MP_Tuner_Tee_008_F"):
							case joaat("MP_Tuner_Tee_010_F"):
								return 1;
								break;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
	}
	return 0;
}

int func_420(int iParam0, bool bParam1)//Position - 0x49081
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
							return 1;
							break;
						case 1:
						case 7:
						case 12:
							iVar2 = __LIB_18__.func_431(joaat("MP_M_Freemode_01"), 11, func_456(iParam0, 11, -1), 0);
							if (((iVar1 == 1 && iVar2 == 88) || (iVar1 == 7 && iVar2 == 89)) || (iVar1 == 12 && iVar2 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				case 5:
					if (!bParam1)
					{
						if (__LIB_18__.func_432(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(72, -1))
						{
						}
						else if (__LIB_18__.func_185(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_456(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
							if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_12"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar5 = func_456(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
							if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("COMBAT_TOP"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar7 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_456(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar7 == 88) || (iVar1 == 4 && iVar7 == 89)) || (iVar1 == 9 && iVar7 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				case 3:
					switch (iVar1)
					{
						case 14:
							return 1;
							break;
					}
					break;
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_456(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
							if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HEIST_DRAW_13"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar10 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_456(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar10 == 88) || (iVar1 == 4 && iVar10 == 89)) || (iVar1 == 9 && iVar10 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar11 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_456(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar11 == 88) || (iVar1 == 4 && iVar11 == 89)) || (iVar1 == 9 && iVar11 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar12 = func_456(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
							if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("COMBAT_TOP"), 0))
							{
								return 1;
							}
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_440(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x51F3D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	iVar0 = -99;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			if (iParam2 >= 237)
			{
				iVar2 = __LIB_0__.func_420(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__.func_252(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__.func_420(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__.func_252(iVar4);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				iVar0 = 14;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_PYJAMAS"), 0))
			{
				iVar0 = 6;
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
			{
				iVar0 = 1;
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_2"), 0))
			{
				iVar0 = 4;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
			{
				if (iParam1 == 240)
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_440(iParam0, -99, __LIB_6__.func_807(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 0;
					}
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 12;
			}
			else if (((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_15"), 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_24"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 4;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_7"), 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar3 == 12)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 11;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_9"), 0))
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_JACKET"), 0))
			{
				iVar0 = 12;
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_6"), 0))
			{
				iVar0 = 2;
			}
			else if (((iParam2 >= 0 && iParam2 <= 31) || iVar1 == 0) || iVar1 == 1)
			{
				iVar0 = 0;
			}
			else if ((((((((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 96 && iParam2 <= 107)) || (iParam2 >= 108 && iParam2 <= 123)) || (iParam2 >= 156 && iParam2 <= 171)) || iVar1 == 3) || iVar1 == 4) || iVar1 == 6) || iVar1 == 7) || iVar1 == 10)
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240 || iVar3 == 15)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 160 && iParam1 <= 175) || iVar3 == 10)
				{
					iVar0 = 4;
				}
				else if ((iParam1 >= 176 && iParam1 <= 191) || iVar3 == 11)
				{
					iVar0 = 12;
				}
				else if ((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 224 && iParam1 <= 239)) || iVar3 == 1) || iVar3 == 14)
				{
					iVar0 = 1;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 32 && iParam1 <= 47) || iVar3 == 2)
				{
					iVar0 = 4;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SHIRT_BRACES"), 0))
				{
					if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("CLOSED_COLLAR"), 0))
					{
						iVar0 = 4;
					}
					else
					{
						iVar0 = 1;
					}
				}
				else if ((iParam1 >= 144 && iParam1 <= 159) || iVar3 == 9)
				{
					iVar0 = 1;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0))
				{
					iVar0 = 4;
				}
				else if (iParam1 >= 241)
				{
					if (iVar4 != -1)
					{
						iVar5 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar4);
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar6, &iVar7, &iVar8, &iVar9);
							if (iVar9 == 3)
							{
								if (iVar7 != 0 && iVar7 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam0, iVar7, 3, 3);
								}
								else
								{
									iVar0 = iVar8;
								}
								iVar6 = iVar5 + 1;
							}
							iVar6++;
						}
					}
				}
			}
			else if ((iParam2 >= 172 && iParam2 <= 187) || iVar1 == 11)
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SWEAT_VEST"), 0))
				{
					iVar0 = 6;
				}
				else if ((((iParam1 >= 48 && iParam1 <= 63) || (iParam1 >= 112 && iParam1 <= 127)) || iVar3 == 3) || iVar3 == 7)
				{
					iVar0 = 11;
				}
				else if ((iParam1 >= 96 && iParam1 <= 111) || iVar3 == 6)
				{
					iVar0 = 11;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LONG_SLEEVE"), 0))
				{
					iVar0 = 12;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			else if ((iParam2 >= 140 && iParam2 <= 155) || iVar1 == 9)
			{
				iVar0 = 0;
			}
			else if (iParam2 == 236)
			{
				if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			break;
		case joaat("MP_F_Freemode_01"):
			if (iParam2 >= 256)
			{
				iVar2 = __LIB_0__.func_420(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__.func_252(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__.func_420(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__.func_252(iVar4);
				switch (iVar4)
				{
					case joaat("DLC_MP_BEACH_F_ACCS2_0"):
					case joaat("DLC_MP_BEACH_F_ACCS2_1"):
					case joaat("DLC_MP_BEACH_F_ACCS2_2"):
					case joaat("DLC_MP_BEACH_F_ACCS2_3"):
					case joaat("DLC_MP_BEACH_F_ACCS2_4"):
					case joaat("DLC_MP_BEACH_F_ACCS2_5"):
					case joaat("DLC_MP_BEACH_F_ACCS2_6"):
					case joaat("DLC_MP_BEACH_F_ACCS2_7"):
					case joaat("DLC_MP_BEACH_F_ACCS2_8"):
					case joaat("DLC_MP_BEACH_F_ACCS2_9"):
					case joaat("DLC_MP_BEACH_F_ACCS2_10"):
					case joaat("DLC_MP_BEACH_F_ACCS2_11"):
						iVar3 = 15;
						break;
					case joaat("DLC_MP_VAL_F_ACCS2_0"):
					case joaat("DLC_MP_VAL_F_ACCS2_1"):
					case joaat("DLC_MP_VAL_F_ACCS2_2"):
					case joaat("DLC_MP_VAL_F_ACCS2_3"):
					case joaat("DLC_MP_VAL_F_ACCS2_4"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_0"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_1"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_2"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_3"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_4"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_5"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_6"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_7"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_8"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_9"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_10"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_11"):
						iVar3 = 13;
						break;
					}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				iVar0 = 0;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
			{
				if ((((((((((((((((((((((((((((iParam1 >= 34 && iParam1 <= 49) || (iParam1 >= 50 && iParam1 <= 65)) || (iParam1 >= 71 && iParam1 <= 86)) || (iParam1 >= 87 && iParam1 <= 102)) || (iParam1 >= 103 && iParam1 <= 118)) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 4) || iVar3 == 5) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 15) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_0")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_1")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_2")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_3")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_4")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_5")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_6")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0))
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_440(iParam0, -99, __LIB_6__.func_807(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 14;
					}
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("OPEN_SHORT"), 0))
			{
				if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_5"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0)))
				{
					iVar0 = 9;
				}
				else
				{
					iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_6__.func_808(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LONG_SLEEVE"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_0"), 0))
			{
				iVar0 = 7;
			}
			else if ((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_2"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0)))
			{
				iVar0 = 3;
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW_DRAW_1"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = 15;
				}
			}
			else if ((((((((((((((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_0"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_6"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_7"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_8"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0)))
			{
				if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 96 && iParam2 <= 111)) || (iParam2 >= 128 && iParam2 <= 143)) || iVar1 == 1) || iVar1 == 6) || iVar1 == 8)
				{
					iVar0 = 1;
				}
				else if (((((((((((((((((((((((((((iParam2 >= 112 && iParam2 <= 127) || (iParam2 >= 160 && iParam2 <= 175)) || iVar1 == 7) || iVar1 == 10) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TAILS_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_33"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0))
				{
					iVar0 = 3;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_7"), 0))
				{
					iVar0 = 9;
				}
			}
			else if ((((((((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_0"), 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_33"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0)))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0))
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else if ((iParam2 >= 16 && iParam2 <= 31) || iVar1 == 1)
			{
				if ((((iParam1 >= 50 && iParam1 <= 65) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 5) || iVar3 == 15)
				{
					iVar0 = 5;
				}
				else if (iParam1 >= 136)
				{
					if (iVar4 != -1)
					{
						iVar10 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar4);
						iVar11 = 0;
						while (iVar11 < iVar10)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar11, &iVar12, &iVar13, &iVar14);
							if (iVar14 == 3)
							{
								if (iVar12 != 0 && iVar12 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam0, iVar12, 3, 4);
								}
								else
								{
									iVar0 = iVar13;
								}
								iVar11 = iVar10 + 1;
							}
							iVar11++;
						}
					}
				}
			}
			else if (((iParam2 >= 112 && iParam2 <= 127) || iVar1 == 7) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 6;
				}
			}
			break;
	}
	return iVar0;
}

void func_450(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5670E
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_500(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_6__.func_808(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_6__.func_795(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_6__.func_795(iParam0, 11);
				if (!__LIB_6__.func_808(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_31__.func_926(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__.func_42(iVar0, iParam2, 13) && !__LIB_25__.func_42(iVar0, iParam2, 14)) && !__LIB_25__.func_42(iVar0, iParam2, 15)) && !__LIB_25__.func_42(iVar0, iParam2, 16)) && !__LIB_25__.func_42(iVar0, iParam2, 71)) && !__LIB_25__.func_42(iVar0, iParam2, 72))
				{
					__LIB_31__.func_926(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_18__.func_431(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__.func_467(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_25__.func_43(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_456(int iParam0, int iParam1, int iParam2)//Position - 0x569BD
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_352(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_352(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return __LIB_6__.func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__.func_795(iParam0, iParam1);
		}
	}
	return -99;
}

void func_458(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x56AF6
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_78127 != __LIB_0__.func_5() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_35__.func_544(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
			}
			if (bParam3)
			{
				iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Global_2883588);
				iVar5 = 0;
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (iVar5 < Global_4538446)
					{
						Global_4538446[iVar5] = -1;
						Global_4538457[iVar5] = -1;
					}
					FILES::GET_VARIANT_COMPONENT(Global_2883588, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar4 != 10 && iVar4 != 9)
					{
						if (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("STOCKINGS"), 0))
						{
						}
						else if (iVar2 != 0 && iVar2 != joaat("0"))
						{
							__LIB_7__.func_238(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_458(iParam0, __LIB_0__.func_33(iVar4), uVar3, 0);
						}
					}
					iVar1++;
				}
				Global_4538445++;
				if (Global_4538445 < 2)
				{
					iVar1 = 0;
					while (iVar1 < iVar5)
					{
						if (iVar1 < Global_4538446)
						{
							if (Global_4538446[iVar1] != -1)
							{
								if (iParam0 == joaat("MP_M_Freemode_01"))
								{
									func_458(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_458(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 4), 1);
								}
							}
						}
						iVar1++;
					}
				}
				Global_4538445 = (Global_4538445 - 1);
			}
			return;
		}
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && !BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (__LIB_0__.func_36(iParam1, Global_78130[1 /*14*/].f_2, &iVar6))
			{
				iVar7 = __LIB_0__.func_534(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__.func_427(iVar6, iVar7, Global_78127, 1, 0);
			}
			if (bParam3 == 1)
			{
				if (iParam0 == joaat("MP_M_Freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar8 = (75 + Global_78130[2 /*14*/].f_4);
							func_458(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_458(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_458(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_458(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_458(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_458(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_458(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_458(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_458(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_458(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_458(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_458(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_458(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
									break;
								}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == joaat("MP_F_Freemode_01"))
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_458(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__.func_544(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__.func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_458(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_458(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__.func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_458(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_500(int iParam0)//Position - 0x6F7F2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__.func_160() && __LIB_0__.func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_456(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_11"), 0))
					{
						return 1;
					}
					else if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_19"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_23"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_27"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_1"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						return 1;
					}
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__.func_160() && __LIB_0__.func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_456(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
					{
						return 1;
					}
					else if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_22"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_23"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_26"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_28"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_6"), 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_503(int iParam0, int iParam1, int iParam2)//Position - 0x6FB64
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_317(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_505(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x6FC2B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	struct<14> Var14;
	var uVar15;
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_78128++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam5 == 0)
	{
		Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__.func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_20__.func_322(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_6__.func_795(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_6__.func_795(iParam0, 9);
			if (iVar10 == joaat("Player_Zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("Player_One"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("Player_Two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = __LIB_6__.func_788(iParam0, 1);
			if (!__LIB_6__.func_780(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_6__.func_788(iParam0, 0);
			if (!__LIB_6__.func_779(iVar10, 14, iVar8, -1) && !__LIB_6__.func_827(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_6__.func_788(iParam0, 2);
			}
		}
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_78173 };
		}
		else
		{
			uVar11 = { __LIB_18__.func_180(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, uVar11[iVar0], -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar12 = 9;
						if (iParam5 == 1)
						{
							uVar12 = { Global_78190 };
						}
						else
						{
							uVar12 = { __LIB_18__.func_247(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_20__.func_322(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_40__.func_943(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_505(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("Player_One") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							__LIB_0__.func_211(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_20__.func_322(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_40__.func_943(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_505(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, func_310(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_519(iParam0, iVar10, &iVar4, 1))
							{
								func_505(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_505(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_35__.func_896(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_505(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_505(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_505(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_505(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_505(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_18__.func_247(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_20__.func_322(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_943(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_505(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_20__.func_322(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__.func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_505(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__.func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_505(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_39__.func_857(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_519(iParam0, iVar10, &iVar4, 0))
		{
			func_505(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_503(iParam0, iVar10, &iVar4))
		{
			func_505(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_519(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x721E9
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_317(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

