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
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	float fLocal_57 = 0f;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	char* sLocal_65 = NULL;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int* iLocal_71 = NULL;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	float fLocal_74 = 0f;
	struct<3> Local_75 = { 0, 0, 0 } ;
	struct<3> Local_76 = { 0, 0, 0 } ;
	float fLocal_77 = 0f;
	int iLocal_78 = 0;
	float fLocal_79 = 0f;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	struct<2> Local_85 = { 0, 5 } ;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 5;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
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
	Local_45 = { 500f, 500f, 500f };
	iLocal_60 = -1;
	iLocal_61 = 2050;
	iLocal_62 = -1;
	iLocal_63 = -1;
	sLocal_65 = "CC_SUBSTR" /* GXT: ~INPUT_CONTEXT~ */;
	fLocal_66 = 125f;
	iLocal_67 = 1;
	iLocal_69 = 263;
	fLocal_77 = 4f;
	fLocal_79 = 0f;
	Local_56 = { ScriptParam_85.f_1[0 /*3*/] };
	Local_56 = { Local_56 };
	iLocal_54 = iLocal_54;
	Local_52 = { Local_52 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_115(1);
	}
	iLocal_53 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_59 = 0;
	__LIB_7__.func_204(&Global_112037, 0);
	func_112();
	if (__LIB_0__.func_517(uLocal_58, 1))
	{
		iLocal_64 = 10;
	}
	else
	{
		iLocal_64 = 9;
	}
	while (!Global_38391)
	{
		SYSTEM::WAIT(0);
	}
	if (!__LIB_0__.func_517(uLocal_58, 8))
	{
		if (!__LIB_6__.func_763(iLocal_64))
		{
			if (__LIB_0__.func_573(0, iLocal_63))
			{
				func_115(0);
			}
			else
			{
				func_115(1);
			}
		}
	}
	if (iLocal_63 != -1)
	{
		if (!__LIB_0__.func_573(0, iLocal_63))
		{
			func_115(1);
		}
	}
	if (__LIB_0__.func_517(uLocal_58, 8388608))
	{
		func_115(1);
	}
	if (__LIB_0__.func_517(uLocal_58, 524288) && (__LIB_0__.func_569() && !__LIB_0__.func_568()))
	{
		func_115(1);
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !__LIB_0__.func_517(uLocal_58, 4194304))
	{
		if (iLocal_69 != 263)
		{
			__LIB_10__.func_604(iLocal_69, 1, 0);
			iLocal_69 = 263;
		}
		__LIB_29__.func_788(10);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		if (__LIB_29__.func_815() && !Global_112433)
		{
			__LIB_29__.func_785(1);
		}
		else if (Global_112433)
		{
		}
	}
	while (true)
	{
		if ((!__LIB_0__.func_109() && !__LIB_0__.func_109()) && !__LIB_0__.func_114())
		{
			func_115(1);
		}
		iLocal_53 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (__LIB_0__.func_517(uLocal_58, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
			{
				func_115(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53) && !ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
		{
			Local_55 = { ENTITY::GET_ENTITY_COORDS(iLocal_53, true) };
			fLocal_57 = SYSTEM::VDIST2(Local_55, ScriptParam_85.f_1[0 /*3*/]);
			fLocal_57 = fLocal_57;
			Local_75 = { Local_55 };
			Local_76 = { ScriptParam_85.f_1[0 /*3*/] };
			Local_75.f_2 = 0f;
			Local_76.f_2 = 0f;
			fLocal_74 = SYSTEM::VDIST2(Local_75, Local_76);
			switch (iLocal_59)
			{
				case 0:
					if (__LIB_6__.func_763(iLocal_64) || (__LIB_0__.func_517(uLocal_58, 16) && !__LIB_0__.func_517(uLocal_58, 524288)))
					{
						STREAMING::REQUEST_MODEL(iLocal_78);
						iLocal_62 = -1;
						__LIB_0__.func_371();
						__LIB_29__.func_788(1);
					}
					else
					{
						if (fLocal_74 > (fLocal_66 * fLocal_66))
						{
							if (iLocal_69 != 263)
							{
								__LIB_10__.func_604(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
							__LIB_29__.func_788(10);
						}
						if ((Local_55.f_2 - ScriptParam_85.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				case 1:
					if (__LIB_0__.func_109() && STREAMING::HAS_MODEL_LOADED(iLocal_78))
					{
						iLocal_67 = iLocal_67;
						__LIB_29__.func_788(3);
					}
					else
					{
						__LIB_0__.func_371();
					}
					break;
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_115(1);
						return;
					}
					if (!__LIB_6__.func_763(iLocal_64))
					{
						if (!__LIB_0__.func_517(uLocal_58, 8))
						{
							bVar1 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_100441.f_3), &Local_52))
							{
								Local_52 = { Local_51 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_115(0);
								break;
							}
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_54) && (((fLocal_57 > (10f * 10f) && !CAM::IS_SPHERE_VISIBLE(ScriptParam_85.f_1[0 /*3*/], 5f)) || fLocal_57 > (80f * 80f)) || (!ENTITY::DOES_ENTITY_EXIST(iLocal_54) && CAM::IS_SCREEN_FADED_OUT())))
					{
						MISC::CLEAR_AREA_OF_VEHICLES(ScriptParam_85.f_1[0 /*3*/], 8f, false, false, false, false, false, false, 0);
						iLocal_54 = VEHICLE::CREATE_VEHICLE(iLocal_78, ScriptParam_85.f_1[0 /*3*/], fLocal_79, true, true, false);
						__LIB_29__.func_807();
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_54, true);
						bVar2 = false;
						if (__LIB_9__.func_603() && !bVar2)
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_54, 2);
							__LIB_6__.func_896(&uLocal_58, 32);
						}
					}
					else if (__LIB_0__.func_517(uLocal_58, 32))
					{
						if (!__LIB_9__.func_603())
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, false))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_54, 1);
							}
							__LIB_7__.func_204(&uLocal_58, 32);
						}
					}
					if (!__LIB_0__.func_517(uLocal_58, 4))
					{
						__LIB_0__.func_371();
						__LIB_0__.func_712(&uLocal_58, 4);
					}
					if (fLocal_74 > (fLocal_66 * fLocal_66) && !Global_100475)
					{
						if (iLocal_69 != 263)
						{
							if (__LIB_0__.func_39(6) && !__LIB_10__.func_861(iLocal_69))
							{
							}
							else
							{
								__LIB_10__.func_604(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
						}
						__LIB_29__.func_788(10);
					}
					else
					{
						Local_52 = { Local_51 };
						bVar3 = !__LIB_0__.func_517(uLocal_58, 64);
						__LIB_7__.func_204(&uLocal_58, 128);
						if (!func_88(3) && !Global_100475)
						{
							if (__LIB_0__.func_517(uLocal_58, 2097152))
							{
								if ((!__LIB_0__.func_517(uLocal_58, 1) || !ENTITY::DOES_ENTITY_EXIST(__LIB_11__.func_91())) && !Global_100475)
								{
									__LIB_29__.func_788(10);
									break;
								}
							}
						}
						if (__LIB_0__.func_517(uLocal_58, 524288) && (__LIB_0__.func_569() && !__LIB_0__.func_568()))
						{
							func_115(1);
						}
						if (__LIB_29__.func_787())
						{
							func_115(1);
						}
						if ((!__LIB_32__.func_573(6) || Global_112433) || __LIB_29__.func_786())
						{
							bVar3 = false;
						}
						if (__LIB_0__.func_517(uLocal_58, 1))
						{
							if (!__LIB_0__.func_109())
							{
								__LIB_6__.func_896(&uLocal_58, 128);
								bVar3 = false;
							}
						}
						if (__LIB_0__.func_104(1))
						{
							bVar3 = false;
						}
						if (Global_78319)
						{
							bVar3 = false;
						}
						if (__LIB_0__.func_200())
						{
							bVar3 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar3 = false;
						}
						if (__LIB_0__.func_190() || __LIB_0__.func_191(8, -1))
						{
							bVar3 = false;
						}
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
						{
							bVar3 = false;
						}
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							bVar3 = false;
						}
						if (__LIB_0__.func_77(0) || __LIB_0__.func_661())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_54, Local_56, fLocal_77, fLocal_77, fLocal_77, false, true, 0))
								{
									__LIB_29__.func_788(7);
								}
							}
							if (ENTITY::IS_ENTITY_DEAD(iLocal_54, false))
							{
								__LIB_6__.func_896(&uLocal_58, 128);
								bVar3 = false;
							}
							else if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								__LIB_6__.func_896(&uLocal_58, 128);
								bVar3 = false;
							}
							else
							{
								iVar4 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
								if (bVar3)
								{
									if (iLocal_54 == iVar4)
									{
										if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_53, ScriptParam_85.f_1[0 /*3*/], 4f, 4f, 2f, false, true, 0))
										{
											__LIB_6__.func_896(&uLocal_58, 128);
											bVar3 = false;
										}
									}
									else
									{
										__LIB_6__.func_896(&uLocal_58, 128);
										bVar3 = false;
									}
								}
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/);
								if (__LIB_29__.func_814(iLocal_54))
								{
									if (iLocal_60 == -1)
									{
										__LIB_7__.func_316(&iLocal_60, 4, sLocal_65, 0, 0, 0, 0);
										__LIB_6__.func_896(&uLocal_58, 2048);
									}
									else if (!__LIB_0__.func_517(uLocal_58, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										__LIB_7__.func_249(&iLocal_60);
										__LIB_7__.func_204(&uLocal_58, 2048);
									}
									if (__LIB_2__.func_187(iLocal_60, 1))
									{
										sLocal_65 = sLocal_65;
										__LIB_7__.func_249(&iLocal_60);
										__LIB_7__.func_204(&uLocal_58, 2048);
										SCRIPT::REQUEST_SCRIPT(&Local_52);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
										__LIB_29__.func_788(5);
									}
								}
								else
								{
									sLocal_65 = sLocal_65;
									__LIB_7__.func_249(&iLocal_60);
									__LIB_7__.func_204(&uLocal_58, 2048);
									SCRIPT::REQUEST_SCRIPT(&Local_52);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
									__LIB_29__.func_788(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_60 != -1)
							{
								__LIB_7__.func_249(&iLocal_60);
								__LIB_7__.func_204(&uLocal_58, 2048);
								HUD::CLEAR_HELP(false);
							}
						}
					}
					func_57();
					break;
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/);
					if (SCRIPT::HAS_SCRIPT_LOADED(&Local_52))
					{
						if (iLocal_60 != -1)
						{
							__LIB_7__.func_249(&iLocal_60);
						}
						iVar5 = 2;
						bVar0 = false;
						if (__LIB_0__.func_517(uLocal_58, 1))
						{
							if (__LIB_0__.func_39(6) || __LIB_0__.func_39(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = __LIB_26__.func_296(&iLocal_62, 6, iLocal_64, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, false))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_54);
							}
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							}
							__LIB_0__.func_566();
							if (Global_44238)
							{
								__LIB_32__.func_82(PLAYER::PLAYER_PED_ID());
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 56);
							iLocal_50 = func_27();
							__LIB_6__.func_896(&uLocal_58, 2);
							__LIB_29__.func_788(6);
							__LIB_26__.func_973(&iLocal_71);
							if (iLocal_63 != -1)
							{
								__LIB_29__.func_780(iLocal_63);
								__LIB_6__.func_862(__LIB_29__.func_782(iLocal_63), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							__LIB_0__.func_371();
						}
						else if (iVar5 == 0)
						{
							__LIB_29__.func_788(10);
						}
					}
					else
					{
						__LIB_0__.func_371();
					}
					break;
				case 6:
					if (!__LIB_0__.func_517(uLocal_58, 256))
					{
						if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_IN())
						{
							PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/);
						}
						else if (CAM::IS_SCREEN_FADED_OUT())
						{
							__LIB_6__.func_896(&uLocal_58, 256);
						}
					}
					if (__LIB_0__.func_517(Global_112037, 262144))
					{
						__LIB_7__.func_204(&Global_112037, 262144);
						__LIB_0__.func_109();
					}
					if (__LIB_0__.func_517(uLocal_58, 2097152))
					{
						if (!func_88(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
						{
							__LIB_29__.func_788(10);
						}
					}
					if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((__LIB_31__.func_353(&iLocal_71) * 1000f)), iLocal_63, false);
						__LIB_0__.func_735(&iLocal_71);
						__LIB_7__.func_204(&uLocal_58, 256);
						__LIB_11__.func_683();
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, false))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_54);
								iLocal_54 = 0;
							}
						}
						if (bVar0)
						{
							__LIB_7__.func_204(&uLocal_58, 2);
						}
						else if (__LIB_0__.func_517(uLocal_58, 2))
						{
							if (__LIB_0__.func_517(Global_112037, 0))
							{
								__LIB_10__.func_865(&iLocal_62);
								iLocal_62 = -1;
								__LIB_7__.func_204(&uLocal_58, 2);
							}
							else
							{
								__LIB_10__.func_865(&iLocal_62);
								iLocal_62 = -1;
								__LIB_7__.func_204(&uLocal_58, 2);
							}
						}
						__LIB_29__.func_788(0);
						if (iLocal_63 != -1)
						{
							if (__LIB_0__.func_517(Global_112037, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(__LIB_29__.func_782(iLocal_63), 0, Global_100478, 0);
								__LIB_0__.func_47(__LIB_29__.func_782(iLocal_63), 0, Global_100478, 1, 0);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(__LIB_29__.func_782(iLocal_63), 0, Global_100478, 0);
								__LIB_0__.func_47(__LIB_29__.func_782(iLocal_63), 0, Global_100478, 0, 0);
							}
						}
						func_4();
						__LIB_7__.func_204(&Global_112037, 0);
						if (__LIB_0__.func_517(uLocal_58, 16777216))
						{
							func_115(1);
						}
						if (iLocal_63 != -1)
						{
							if (Global_113386.f_9085)
							{
								if (!__LIB_0__.func_573(0, iLocal_63))
								{
									func_115(1);
								}
							}
						}
					}
					__LIB_0__.func_371();
					break;
				case 8:
					__LIB_29__.func_788(0);
					break;
				case 10:
					func_115(1);
					break;
				case 9:
					if (fLocal_74 > (fLocal_66 * fLocal_66))
					{
						if (iLocal_69 != 263)
						{
							__LIB_10__.func_604(iLocal_69, 1, 0);
							iLocal_69 = 263;
						}
						__LIB_29__.func_788(10);
					}
					break;
				case 7:
					__LIB_0__.func_371();
					if (iLocal_69 != 263)
					{
						__LIB_10__.func_604(iLocal_69, 0, 0);
					}
					if (iLocal_60 != -1)
					{
						__LIB_7__.func_249(&iLocal_60);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_65))
					{
						if (__LIB_0__.func_1(sLocal_65))
						{
							HUD::CLEAR_HELP(true);
						}
					}
					__LIB_29__.func_788(4);
					break;
				case 4:
					if ((iLocal_68 % 150) == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_70 == 2)
							{
								if (iLocal_70 == 2)
								{
									if (__LIB_6__.func_763(iLocal_64) && __LIB_0__.func_573(0, iLocal_63))
									{
										func_112();
										if (iLocal_69 != 263)
										{
											__LIB_10__.func_604(iLocal_69, 1, 0);
										}
										__LIB_29__.func_788(0);
									}
								}
							}
							else if (iLocal_70 == 0)
							{
								if (fLocal_74 > (fLocal_66 * fLocal_66))
								{
									if (iLocal_69 != 263)
									{
										__LIB_10__.func_604(iLocal_69, 1, 0);
										iLocal_69 = 263;
									}
									__LIB_29__.func_788(10);
								}
							}
							else if (iLocal_70 == 1)
							{
								if (fLocal_74 > ((80f + 5f) * (80f + 5f)))
								{
									func_112();
									if (iLocal_69 != 263)
									{
										__LIB_10__.func_604(iLocal_69, 1, 0);
									}
									__LIB_29__.func_788(0);
								}
							}
						}
						else
						{
							__LIB_10__.func_604(iLocal_69, 1, 0);
						}
					}
					else
					{
						iLocal_68++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_4()//Position - 0xC24
{
	int iVar0;
	int iVar1;
	iVar0 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1697.1832f, 3279.2263f, 41.7283f, 1.5897f, 0f, 146.8519f, 50f, true, 2);
	iVar1 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1697.7545f, 3280.4233f, 41.7708f, -9.1434f, 0f, 168.0244f, 50f, false, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iVar1, iVar0, 3650, 1, 1);
	CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_54 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_54, 1);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_54, true);
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
	}
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_54, true, true);
	__LIB_34__.func_848(&iLocal_80);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_80);
	}
	while (CAM::IS_CAM_INTERPOLATING(iVar0) || CAM::IS_CAM_INTERPOLATING(iVar1))
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		SYSTEM::WAIT(0);
	}
	CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
	if (CAM::DOES_CAM_EXIST(iVar0))
	{
		CAM::DESTROY_CAM(iVar0, false);
	}
	if (CAM::DOES_CAM_EXIST(iVar1))
	{
		CAM::DESTROY_CAM(iVar1, false);
	}
}

int func_27()//Position - 0x120D
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__.func_1(sLocal_65))
	{
		HUD::CLEAR_HELP(true);
	}
	if (STREAMING::IS_IPL_ACTIVE("airfield"))
	{
		STREAMING::REMOVE_IPL("airfield");
	}
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (((((ENTITY::DOES_ENTITY_EXIST(iVar0) && iVar0 != iLocal_54) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("stunt")) && VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1, false)) && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("cargobob"))
	{
		iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(1694.7365f, 3276.4832f, 41.2979f, 5f, joaat("stunt"), 16384);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, false);
		}
		__LIB_40__.func_820(1689.662f, 3274.546f, 40.009182f, 1696.669f, 3271.2651f, 42.80674f, 7.25f, 1673.4283f, 3267.02f, 40.0898f, 108.5236f, 1, 1, 1, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
		}
		if (func_28(&iLocal_80))
		{
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
	}
	iVar2 = SYSTEM::START_NEW_SCRIPT(&Local_51, iLocal_61);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_51);
	return iVar2;
}

int func_28(int iParam0)//Position - 0x135C
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!__LIB_2__.func_49(iVar0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), Local_45, false, true, 0))
			{
				VEHICLE::SET_LAST_DRIVEN_VEHICLE(iVar0);
				ENTITY::SET_ENTITY_COLLISION(iVar0, false, false);
				ENTITY::SET_ENTITY_VISIBLE(iVar0, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
				*iParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

void func_57()//Position - 0x23E1
{
	if (((!ENTITY::DOES_ENTITY_EXIST(iLocal_54) || ENTITY::IS_ENTITY_DEAD(iLocal_54, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_54, true)) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_54, false))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_54, 2);
		}
		__LIB_29__.func_785(0);
		if (__LIB_0__.func_1(sLocal_65))
		{
			HUD::CLEAR_HELP(true);
		}
		return;
	}
	if (fLocal_57 < (fLocal_77 * fLocal_77))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_54, 1);
		__LIB_0__.func_187(sLocal_65);
		__LIB_8__.func_611(0);
	}
	else if (__LIB_0__.func_1(sLocal_65))
	{
		HUD::CLEAR_HELP(true);
	}
}

int func_88(int iParam0)//Position - 0x3278
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		case 1:
			if (__LIB_0__.func_39(6) || __LIB_0__.func_39(7))
			{
				return 1;
			}
			else
			{
				return func_88(3);
			}
			break;
		case 2:
			return 1;
			break;
		case 3:
			if (__LIB_6__.func_763(5))
			{
				if (__LIB_32__.func_573(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_112()//Position - 0x37E8
{
	StringCopy(&Local_51, "stunt_plane_races", 64);
	iLocal_78 = joaat("stunt");
	fLocal_79 = 154.8464f;
	fLocal_66 = 209f;
	iLocal_69 = 95;
	MISC::CLEAR_AREA_OF_VEHICLES(Local_76, 10f, false, false, false, false, false, false, 0);
	iLocal_63 = 10;
	sLocal_65 = "PLAY_STUNT" /* GXT: Approach the plane and press ~INPUT_ENTER~ to begin stunt plane time trials. */;
	fLocal_77 = 6f;
	iLocal_61 = 51000;
}

void func_115(bool bParam0)//Position - 0x385D
{
	if (bParam0)
	{
		if (iLocal_69 != 263)
		{
			__LIB_10__.func_604(iLocal_69, 0, 0);
		}
	}
	__LIB_7__.func_249(&iLocal_60);
	if (__LIB_0__.func_517(uLocal_58, 2))
	{
		func_4();
		__LIB_7__.func_204(&uLocal_58, 2);
		__LIB_10__.func_865(&iLocal_62);
	}
	iLocal_62 = -1;
	func_116();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_116()//Position - 0x38A6
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_54, true, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_54);
			VEHICLE::DELETE_VEHICLE(&iLocal_54);
		}
	}
	__LIB_7__.func_204(&uLocal_58, 4);
	__LIB_0__.func_371();
	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_50, 3);
	}
	if (!MISC::IS_STRING_NULL(&Local_52))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_52) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_52);
		}
	}
}

