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
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	int iLocal_50 = 0;
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
	int iLocal_65 = 0;
	struct<487> Local_66 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1500, 45, 1103626240, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	bool bLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	char* sLocal_90 = NULL;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	struct<33> Local_96 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_97 = 1;
	int iLocal_98[3] = { 0, 0, 0 };
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int* iLocal_112 = NULL;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	int* iLocal_115 = NULL;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 5;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 5;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
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
	Local_49 = { 500f, 500f, 500f };
	iLocal_107 = 3;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(98))
	{
		func_320();
	}
	if (__LIB_6__.func_854(0))
	{
		bLocal_86 = true;
		iLocal_83 = PLAYER::GET_MAX_WANTED_LEVEL();
	}
	if (Global_3)
	{
		HUD::CLEAR_HELP(true);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_0__.func_39(14))
	{
		HUD::CLEAR_HELP(true);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	__LIB_30__.func_908(&Local_96, 3);
	func_306(&uScriptParam_120);
	Var0 = { 24.088f, -1345.6227f, 29.5082f };
	Var1 = { 24.94562f, -1344.9545f, 29.49f };
	Var2 = { Var0 - Var1 };
	Var2 = { Var1 - Var0 };
	fVar4 = 147.297f;
	Var3 = { -1228.4434f, -905.3416f, 13.523f };
	Var2 = { Var3 - Vector(12.31f, -907.82336f, -1222.3306f) };
	Var2 = { __LIB_0__.func_298(Var2, fVar4) };
	if ((((__LIB_0__.func_569() && !__LIB_0__.func_568()) || Global_113330) || Global_31962) || Global_113375 != -1)
	{
		if (__LIB_0__.func_569() && !__LIB_0__.func_568())
		{
		}
		else if (Global_113330)
		{
		}
		else if (Global_31962)
		{
		}
		else if (Global_113375 != -1)
		{
		}
		if (!func_302())
		{
			__LIB_7__.func_204(&(Local_66.f_470), 64);
			func_298(1);
		}
		else
		{
			func_298(0);
		}
		func_320();
	}
	else if (Global_113386.f_20035[iLocal_80] > 0)
	{
		if (func_297())
		{
			func_295(iLocal_80, Local_66.f_486.f_9.f_2, &Var5, &Var6);
			MISC::CLEAR_AREA_OF_PEDS(Local_66.f_181, 15f, 0);
			iLocal_79 = PED::ADD_SCENARIO_BLOCKING_AREA(Var5, Var6, false, true, true, true);
			if (!func_302())
			{
				func_298(1);
			}
			else
			{
				func_298(0);
				__LIB_6__.func_896(&(Local_66.f_470), 512);
			}
			iLocal_65 = 2;
		}
		else
		{
			func_298(0);
		}
		if (!func_292())
		{
			iLocal_62 = 10;
			iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (iVar7 == 0)
			{
				Local_66.f_2.f_12 = 1;
			}
			else
			{
				Local_66.f_2.f_12 = 0;
			}
		}
	}
	else
	{
		func_298(0);
	}
	while (true)
	{
		__LIB_37__.func_551(&Local_96);
		if (func_284())
		{
			func_320();
		}
		if (!bLocal_86)
		{
			if (__LIB_6__.func_854(0))
			{
				func_283();
				bLocal_86 = true;
			}
		}
		switch (iLocal_65)
		{
			case 0:
				func_254();
				break;
			case 1:
				func_6();
				break;
			case 2:
				if (func_302())
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!__LIB_2__.func_161("SHOP_CLOSED" /* GXT: ~a~ is closed. Please come back later. */, func_5(iLocal_80)) && !__LIB_0__.func_665(PLAYER::PLAYER_ID()))
						{
							HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(false);
							__LIB_9__.func_565("SHOP_CLOSED" /* GXT: ~a~ is closed. Please come back later. */, func_5(iLocal_80));
						}
					}
				}
				else
				{
					if (__LIB_2__.func_161("SHOP_CLOSED" /* GXT: ~a~ is closed. Please come back later. */, func_5(iLocal_80)))
					{
						HUD::CLEAR_HELP(true);
					}
					if (__LIB_0__.func_517(Local_66.f_470, 512))
					{
						func_298(1);
						__LIB_7__.func_204(&(Local_66.f_470), 512);
					}
				}
				break;
			case 3:
				break;
		}
		SYSTEM::WAIT(0);
	}
}

char* func_5(int iParam0)//Position - 0x41C
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "SHR_GAS" /* GXT: LTD Gasoline */;
		case 5:
			return "SHR_LIQ1" /* GXT: Scoops Liquor Barn */;
		case 6:
		case 7:
		case 8:
		case 9:
			return "SHR_LIQ2" /* GXT: Rob's Liquor */;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "SHR_CONV" /* GXT: 24-7 */;
		case -2:
			return "SHR_ACE" /* GXT: Ace Liquor */;
		default:
	}
	return "";
}

void func_6()//Position - 0x4C4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	func_251();
	func_248();
	func_243();
	func_237();
	func_219();
	func_197();
	func_191();
	func_67();
	func_66();
	func_65();
	func_55();
	func_54();
	func_51();
	if (!__LIB_0__.func_381())
	{
		func_37();
		func_27();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_66.f_0, &iVar0, true);
	}
	else
	{
		return;
	}
	bLocal_88 = false;
	if (!PED::IS_PED_INJURED(Local_66.f_2) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true))
		{
			if ((iVar1 != joaat("WEAPON_UNARMED") && iVar1 != joaat("OBJECT")) && iVar1 != joaat("WEAPON_FLARE"))
			{
				if ((((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), Local_66.f_2, 45f)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_66.f_2, 5f, 5f, 2f, false, true, 0)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_66.f_2)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_66.f_2))
				{
					if (!__LIB_2__.func_174() && !CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
					{
						bLocal_88 = true;
					}
				}
			}
		}
	}
	if (bLocal_88)
	{
		if (!iLocal_89 && __LIB_0__.func_517(Local_66.f_470, 4))
		{
			iVar2 = __LIB_1__.func_562(PLAYER::PLAYER_PED_ID());
			iVar3 = WEAPON::GET_WEAPONTYPE_GROUP(iVar2);
			if (iVar3 == joaat("GROUP_PISTOL"))
			{
				sLocal_90 = "hold_up_head_additive_pistol";
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_90, 8f, -8f, -1, 305, 0f, false, false, false);
			}
			else if ((((iVar3 == joaat("GROUP_MG") || iVar3 == joaat("GROUP_RIFLE")) || iVar3 == joaat("GROUP_SHOTGUN")) || iVar3 == joaat("GROUP_SNIPER")) || iVar3 == joaat("GROUP_SMG"))
			{
				sLocal_90 = "hold_up_head_additive_rifle";
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_90, 8f, -8f, -1, 305, 0f, false, false, false);
			}
			else
			{
				sLocal_90 = "";
			}
			iLocal_89 = 1;
		}
	}
	else if (iLocal_89)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_90))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_90, 3))
			{
				TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_90, -8f);
			}
		}
		iLocal_89 = 0;
	}
	switch (iLocal_62)
	{
		case 0:
			if (func_302())
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					iLocal_62 = 12;
				}
				else
				{
					iLocal_50 = 2;
					iLocal_57 = 1;
					if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_66.f_0, false))
						{
							if ((__LIB_1__.func_562(Local_66.f_0) == joaat("WEAPON_UNARMED") || __LIB_1__.func_562(Local_66.f_0) == joaat("OBJECT")) || __LIB_1__.func_562(Local_66.f_0) == joaat("WEAPON_BRIEFCASE"))
							{
								iLocal_60 = 1;
								iLocal_62 = 1;
							}
							else if (!__LIB_0__.func_517(Local_66.f_470, 1))
							{
								if (iVar0 == joaat("WEAPON_BAT"))
								{
									iLocal_60 = 2;
									iLocal_62 = 5;
								}
								else if ((iVar0 == joaat("WEAPON_CROWBAR") || iVar0 == joaat("WEAPON_HAMMER")) || iVar0 == joaat("WEAPON_BOTTLE"))
								{
									iLocal_60 = 3;
									iLocal_62 = 5;
								}
								else if (iVar0 == joaat("WEAPON_STICKYBOMB"))
								{
									iLocal_60 = 4;
									iLocal_62 = 5;
								}
								else
								{
									iLocal_62 = 2;
								}
								__LIB_6__.func_896(&(Local_66.f_470), 1);
							}
						}
						else
						{
							iLocal_62 = 3;
						}
					}
				}
			}
			else if (func_24())
			{
				iLocal_50 = 2;
				iLocal_62 = 3;
			}
			else if (!func_302() && __LIB_20__.func_180(Local_66.f_0, Local_66.f_2, &(Local_66.f_451), 1))
			{
				iLocal_62 = 12;
			}
			break;
		case 1:
			if (!__LIB_0__.func_517(Local_66.f_470, 2))
			{
				iLocal_51 = 1;
				iLocal_56 = 1;
				__LIB_6__.func_896(&(Local_66.f_470), 2);
			}
			iLocal_62 = 5;
			break;
		case 2:
			iLocal_51 = 5;
			iLocal_56 = 3;
			iLocal_62 = 5;
			break;
		case 3:
			iLocal_51 = 6;
			iLocal_56 = 4;
			iLocal_62 = 5;
			break;
		case 5:
			if (!func_302() && !__LIB_0__.func_517(Local_66.f_470, 1))
			{
				iLocal_62 = 0;
			}
			break;
		case 6:
			if (iLocal_51 >= 13)
			{
				if (Local_66.f_2.f_12)
				{
					if (!__LIB_0__.func_75())
					{
						iLocal_62 = 7;
					}
				}
				else
				{
					iLocal_62 = 8;
				}
				iLocal_52 = 1;
			}
			break;
		case 7:
			if (__LIB_0__.func_517(Local_66.f_470, 256))
			{
				func_19();
				MISC::CLEAR_BIT(&Global_96292, 3);
				iLocal_62 = 13;
			}
			break;
		case 8:
			if (__LIB_0__.func_517(Local_66.f_470, 16))
			{
				if (func_17())
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
					{
						if (!PED::IS_PED_RAGDOLL(Local_66.f_2))
						{
							if (func_302())
							{
								if (Local_66.f_486 >= 0)
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
									{
										TASK::TASK_PLAY_ANIM(Local_66.f_2, Local_66.f_486.f_1, "handsup_base", 4f, -8f, -1, 1, 0f, false, false, false);
										iLocal_58 = 10;
									}
								}
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(Local_66.f_2, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
								iLocal_58 = 10;
							}
						}
					}
					MISC::CLEAR_BIT(&Global_96292, 3);
					iLocal_62 = 13;
				}
			}
			break;
		case 9:
			func_16(2, 0);
			iLocal_59 = 7;
			if (iLocal_63 == 1)
			{
				iLocal_62 = 8;
			}
			else
			{
				iLocal_62 = 13;
			}
			break;
		case 10:
			if (func_302())
			{
				iLocal_62 = 11;
			}
			break;
		case 11:
			if (!__LIB_0__.func_736(&(Local_66.f_477)))
			{
				if (!Local_66.f_2.f_12)
				{
					iLocal_51 = 28;
				}
				else
				{
					iLocal_51 = 29;
				}
				__LIB_18__.func_276(&(Local_66.f_477));
			}
			else if (__LIB_7__.func_78(&(Local_66.f_477)) > 5f)
			{
				func_16(1, 0);
				iLocal_62 = 13;
			}
			else if (__LIB_7__.func_78(&(Local_66.f_477)) > 1.5f)
			{
				if (!__LIB_0__.func_75())
				{
					if (iLocal_58 != 12)
					{
						iLocal_58 = 12;
						if (!Local_66.f_2.f_12)
						{
							func_8();
						}
						else
						{
							func_19();
						}
					}
				}
			}
			break;
		case 12:
			if (!__LIB_0__.func_736(&(Local_66.f_477)))
			{
				func_7();
				iLocal_51 = 30;
				iLocal_58 = 12;
				__LIB_18__.func_276(&(Local_66.f_477));
			}
			else if (__LIB_7__.func_78(&(Local_66.f_477)) > 3f)
			{
				iLocal_62 = 13;
			}
			break;
		case 13:
			break;
	}
}

void func_7()//Position - 0xA9F
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_66.f_2.f_6, 2f, -1, 0.25f, 0, Local_66.f_2.f_9);
	TASK::TASK_COWER(0, -1);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_66.f_2, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	__LIB_6__.func_896(&(Local_66.f_470), 128);
}

void func_8()//Position - 0xAFE
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_78);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_78);
		TASK::TASK_COWER(0, 5000);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_78);
		TASK::TASK_PERFORM_SEQUENCE(Local_66.f_2, iLocal_78);
	}
}

void func_16(int iParam0, bool bParam1)//Position - 0xC4C
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < iParam0 && (!bLocal_86 || (bLocal_86 && iParam0 < iLocal_83)))
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX(), iParam0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), false);
		Local_66.f_158 = 1;
		if (bParam1)
		{
			PLAYER::SET_MAX_WANTED_LEVEL(iParam0);
		}
		else
		{
			PLAYER::SET_MAX_WANTED_LEVEL(5);
		}
	}
	else if (bLocal_86 && iParam0 > iLocal_83)
	{
	}
}

int func_17()//Position - 0xCBF
{
	func_18();
	switch (iLocal_54)
	{
		case 0:
			Local_66.f_486 = PED::CREATE_SYNCHRONIZED_SCENE(Local_66.f_486.f_6, Local_66.f_486.f_9, 2);
			if (!PED::IS_PED_DEAD_OR_DYING(Local_66.f_2, true))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_28, false))
				{
					if (Local_66.f_486 >= 0)
					{
						ENTITY::SET_ENTITY_COLLISION(Local_66.f_28, true, false);
						ENTITY::SET_ENTITY_DYNAMIC(Local_66.f_28, true);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_66.f_2, Local_66.f_486, Local_66.f_486.f_1, Local_66.f_486.f_3, 8f, -1.5f, 25, 0, 1000f, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_66.f_28, Local_66.f_486, Local_66.f_486.f_4, Local_66.f_486.f_1, 1000f, 8f, 137, 1000f);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_66.f_96.f_1, Local_66.f_486, Local_66.f_486.f_5, Local_66.f_486.f_1, 1000f, 8f, 137, 1000f);
					}
					else
					{
						return 1;
					}
					iLocal_55 = 1;
					iLocal_58 = 5;
					iLocal_54 = 2;
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		case 1:
			if (Local_66.f_486 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) > 0.478f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_28, false))
						{
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_66.f_28, Local_66.f_486, Local_66.f_486.f_4, Local_66.f_486.f_1, 1000f, 8f, 137, 1000f);
							Local_66.f_28.f_7 = { Local_66.f_28.f_7, Local_66.f_28.f_7.f_1, (Local_66.f_28.f_7.f_2 + 0.2f) };
						}
						iLocal_54 = 2;
					}
				}
			}
			break;
		case 2:
			if (Local_66.f_486 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) > 0.447f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_28, false))
						{
							if (!ENTITY::IS_ENTITY_VISIBLE(Local_66.f_28))
							{
								ENTITY::SET_ENTITY_VISIBLE(Local_66.f_28, true, false);
							}
						}
					}
					if (Local_66.f_467)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_RATE(Local_66.f_486) != 1.45f)
						{
							PED::SET_SYNCHRONIZED_SCENE_RATE(Local_66.f_486, 1.45f);
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) > 0.894f)
					{
						iLocal_54 = 3;
					}
				}
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_28, false))
			{
				if (Local_66.f_486 >= 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
					{
						if (iLocal_53 >= 4)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.871f)
							{
								iLocal_55 = 4;
							}
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_66.f_28, -16f, true);
							PHYSICS::ACTIVATE_PHYSICS(Local_66.f_28);
						}
					}
				}
			}
			iLocal_54 = 3;
			break;
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_18()//Position - 0xF64
{
	if (Local_66.f_486 >= 0)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) >= 0f)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.117f)
				{
					iLocal_53 = 1;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.154f)
				{
					iLocal_53 = 2;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.477f)
				{
					iLocal_53 = 3;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.487f)
				{
					iLocal_53 = 4;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.809f)
				{
					iLocal_53 = 5;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.871f)
				{
					iLocal_53 = 6;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.894f)
				{
					iLocal_53 = 7;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) < 0.999f)
				{
					iLocal_53 = 8;
				}
				else if (iLocal_53 == 9)
				{
				}
			}
			else
			{
				iLocal_53 = 0;
			}
		}
		else if (iLocal_53 == 0)
		{
		}
	}
	else
	{
		iLocal_53 = 0;
	}
}

void func_19()//Position - 0x106C
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Local_66.f_2, joaat("WEAPON_PUMPSHOTGUN"), 12, false, true);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_66.f_2, joaat("WEAPON_PUMPSHOTGUN"), false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_66.f_2, joaat("HATES_PLAYER"));
		TASK::OPEN_SEQUENCE_TASK(&(Local_66.f_2.f_22));
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_66.f_0, 2000, false);
		TASK::TASK_SHOOT_AT_ENTITY(0, Local_66.f_0, 4000, joaat("FIRING_PATTERN_FULL_AUTO"));
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 25f, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_66.f_2.f_22);
		TASK::TASK_PERFORM_SEQUENCE(Local_66.f_2, Local_66.f_2.f_22);
	}
}

int func_24()//Position - 0x13BB
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_66.f_0, false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_66.f_0, false);
			bVar0 = true;
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_66.f_186, Local_66.f_189, Local_66.f_192, false, true, 0))
			{
				return 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_66.f_200, Local_66.f_203, Local_66.f_206, false, true, 0))
			{
				return 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_66.f_207, Local_66.f_210, Local_66.f_213, false, true, 0))
			{
				return 1;
			}
			else if (Local_66.f_199 != -1f)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_66.f_193, Local_66.f_196, Local_66.f_199, false, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_27()//Position - 0x14D4
{
	switch (iLocal_50)
	{
		case 0:
			break;
		case 2:
			if (!__LIB_0__.func_381())
			{
				if (func_302())
				{
					if (!__LIB_0__.func_517(Global_113386.f_20035.f_20, 1))
					{
						switch (__LIB_11__.func_512("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */))
						{
							case 2:
								__LIB_18__.func_203("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */, 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							case 1:
								__LIB_6__.func_896(&(Global_113386.f_20035.f_20), 1);
								iLocal_50 = 1;
								break;
						}
						if (iLocal_63 > 0)
						{
							if (__LIB_9__.func_610("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */))
							{
								__LIB_19__.func_856("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */, 1);
								iLocal_50 = 4;
							}
						}
						if ((MISC::GET_GAME_TIMER() % 1000) < 50)
						{
						}
					}
					else
					{
						iLocal_50 = 1;
					}
				}
				else if (__LIB_9__.func_610("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */))
				{
					__LIB_19__.func_856("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */, 1);
				}
			}
			break;
		case 1:
			if (!__LIB_0__.func_381())
			{
				if (func_302())
				{
					if (!__LIB_0__.func_517(Global_113386.f_20035.f_20, 2))
					{
						switch (__LIB_11__.func_512("SHR_SNK_TUT" /* GXT: Buy snacks by walking up to the counter. */))
						{
							case 2:
								__LIB_18__.func_203("SHR_SNK_TUT" /* GXT: Buy snacks by walking up to the counter. */, 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							case 1:
								__LIB_6__.func_896(&(Global_113386.f_20035.f_20), 2);
								iLocal_50 = 4;
								break;
						}
					}
					else
					{
						iLocal_50 = 4;
					}
				}
				else if (__LIB_9__.func_610("SHR_SNK_TUT" /* GXT: Buy snacks by walking up to the counter. */))
				{
					__LIB_19__.func_856("SHR_SNK_TUT" /* GXT: Buy snacks by walking up to the counter. */, 1);
				}
			}
			break;
		case 3:
			if (__LIB_0__.func_1("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */) || __LIB_0__.func_1("SHR_SNK_TUT" /* GXT: Buy snacks by walking up to the counter. */))
			{
				HUD::CLEAR_HELP(true);
			}
			if (__LIB_9__.func_610("SHR_SNK_TUT" /* GXT: Buy snacks by walking up to the counter. */) && !__LIB_0__.func_517(Global_113386.f_20035.f_20, 2))
			{
				__LIB_19__.func_856("SHR_SNK_TUT" /* GXT: Buy snacks by walking up to the counter. */, 1);
			}
			if (__LIB_9__.func_610("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */) && !__LIB_0__.func_517(Global_113386.f_20035.f_20, 1))
			{
				__LIB_19__.func_856("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */, 1);
			}
			iLocal_50 = 4;
			break;
		case 4:
			if ((!func_302() && __LIB_9__.func_610("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */)) && !__LIB_0__.func_517(Global_113386.f_20035.f_20, 1))
			{
				__LIB_19__.func_856("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */, 1);
				iLocal_50 = 2;
			}
			if ((!func_302() && __LIB_9__.func_610("SHR_SNK_TUT" /* GXT: Buy snacks by walking up to the counter. */)) && !__LIB_0__.func_517(Global_113386.f_20035.f_20, 2))
			{
				__LIB_19__.func_856("SHR_SNK_TUT" /* GXT: Buy snacks by walking up to the counter. */, 1);
				iLocal_50 = 2;
			}
			break;
	}
}

void func_37()//Position - 0x1CD8
{
	if (func_302())
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
		{
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
	{
	}
	switch (iLocal_51)
	{
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				__LIB_6__.func_834(Local_66.f_2, "SHOP_GREET", 3);
			}
			iLocal_51 = 14;
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				__LIB_6__.func_834(Local_66.f_2, __LIB_1__.func_6(bLocal_94, "SHOP_THREATENED", __LIB_1__.func_6(__LIB_0__.func_502(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				__LIB_6__.func_834(Local_66.f_2, __LIB_1__.func_6(bLocal_94, "SHOP_THREATENED", __LIB_1__.func_6(__LIB_0__.func_502(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				__LIB_6__.func_834(Local_66.f_2, __LIB_1__.func_6(bLocal_94, "SHOP_THREATENED", __LIB_1__.func_6(__LIB_0__.func_502(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				__LIB_6__.func_834(Local_66.f_2, __LIB_1__.func_6(bLocal_94, "SHOP_THREATENED", __LIB_1__.func_6(__LIB_0__.func_502(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				__LIB_6__.func_834(Local_66.f_2, __LIB_1__.func_6(bLocal_94, "SHOP_THREATENED", __LIB_1__.func_6(__LIB_0__.func_502(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		case 15:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				__LIB_6__.func_834(Local_66.f_2, "SHOP_STUBBORN", 3);
			}
			iLocal_51 = 14;
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				__LIB_6__.func_834(Local_66.f_2, "SHOP_NO_ENTRY" /* GXT: Friendly */, 3);
			}
			iLocal_51 = 14;
			break;
		case 8:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				__LIB_6__.func_834(Local_66.f_2, "SHOP_NO_ENTRY" /* GXT: Friendly */, 3);
			}
			iLocal_51 = 14;
			break;
		case 36:
			if (!__LIB_0__.func_75())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
				{
					__LIB_6__.func_834(Local_66.f_2, "SHOP_THREATENED", 3);
				}
				iLocal_51 = 37;
			}
			break;
		case 9:
			if (!__LIB_0__.func_75())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
				{
					__LIB_6__.func_834(Local_66.f_2, "BUMP", 3);
				}
				iLocal_51 = 37;
			}
			break;
		case 10:
			if (!__LIB_0__.func_75())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
				{
					__LIB_6__.func_834(Local_66.f_2, "GENERIC_FRIGHTENED_HIGH", 3);
				}
				iLocal_51 = 37;
			}
			break;
		case 11:
			if (!__LIB_0__.func_75())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
				{
					__LIB_6__.func_834(Local_66.f_2, "SHOP_BRAVE", 3);
				}
				iLocal_51 = 37;
			}
			break;
		case 14:
			if (func_45() || func_44())
			{
				if (func_45())
				{
					if (!iLocal_91)
					{
						iLocal_51 = 7;
						iLocal_91 = 1;
					}
				}
				else if (func_44())
				{
					if (!iLocal_92)
					{
						iLocal_51 = 8;
						iLocal_92 = 1;
					}
				}
				if (!__LIB_0__.func_736(&(Local_66.f_483)))
				{
					__LIB_18__.func_276(&(Local_66.f_483));
				}
				else if (__LIB_1__.func_637(&(Local_66.f_483)))
				{
					__LIB_11__.func_933(&(Local_66.f_483));
				}
				else if (__LIB_7__.func_78(&(Local_66.f_483)) > 10f)
				{
					if (!__LIB_0__.func_517(Local_66.f_470, 32))
					{
						if (!PED::IS_PED_INJURED(Local_66.f_2) && __LIB_0__.func_517(Local_66.f_470, 4))
						{
							TASK::TASK_PLAY_ANIM(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0f, false, false, false);
						}
						iLocal_51 = 36;
						func_16(1, 0);
						__LIB_6__.func_896(&(Local_66.f_470), 32);
					}
				}
			}
			else if (__LIB_0__.func_736(&(Local_66.f_483)) && !__LIB_1__.func_637(&(Local_66.f_483)))
			{
				__LIB_10__.func_565(&(Local_66.f_483));
			}
			break;
		case 12:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					__LIB_6__.func_834(PLAYER::PLAYER_PED_ID(), "SHOP_HOLDUP", 8);
				}
				__LIB_6__.func_892(&(Local_66.f_471));
				if (Local_66.f_2.f_11)
				{
					iLocal_51 = 37;
				}
				else
				{
					iLocal_51 = 13;
				}
			}
			else
			{
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
			}
			break;
		case 13:
			if (func_41(&(Local_66.f_471)) > 3f)
			{
				if (Local_66.f_2.f_12)
				{
					iLocal_51 = 22;
				}
				else if (Local_66.f_458)
				{
					iLocal_51 = 17;
				}
				else if (Local_66.f_459)
				{
					iLocal_51 = 18;
				}
				else if (Local_66.f_460)
				{
					iLocal_51 = 19;
				}
				else if (Local_66.f_461)
				{
					iLocal_51 = 20;
				}
				else if (Local_66.f_462)
				{
					iLocal_51 = 21;
				}
				else
				{
					iLocal_51 = 16;
				}
				__LIB_0__.func_735(&(Local_66.f_471));
			}
			break;
		case 16:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				__LIB_6__.func_834(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		case 17:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				__LIB_6__.func_834(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		case 18:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				__LIB_6__.func_834(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		case 19:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				__LIB_6__.func_834(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		case 20:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				__LIB_6__.func_834(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		case 21:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				__LIB_6__.func_834(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		case 22:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
				{
					__LIB_6__.func_834(Local_66.f_2, "SHOP_BRAVE", 8);
				}
				__LIB_6__.func_896(&(Local_66.f_470), 256);
				iLocal_51 = 37;
			}
			break;
		case 23:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				if (Local_66.f_28.f_14)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
					{
						__LIB_6__.func_834(Local_66.f_2, "SHOP_GAVE_YOU_EVERYTHING", 3);
					}
				}
				iLocal_51 = 37;
			}
			else
			{
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
			}
			break;
		case 24:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_66.f_46.f_4[0], false))
			{
				VEHICLE::SET_VEHICLE_SIREN(Local_66.f_46.f_4[0], false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_46[0], false))
			{
				__LIB_6__.func_834(Local_66.f_46[0], "SURROUNDED", 15);
			}
			iLocal_51 = 25;
			break;
		case 25:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_6__.func_834(PLAYER::PLAYER_PED_ID(), "SPOT_POLICE", 3);
			}
			iLocal_51 = 37;
			break;
		case 26:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				__LIB_6__.func_834(Local_66.f_2, "SHOP_POUR_CAN", 3);
			}
			iLocal_51 = 37;
			break;
		case 27:
			if (!__LIB_0__.func_75())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
				{
					__LIB_6__.func_834(Local_66.f_2, "SCREAM_PANIC", 3);
				}
				iLocal_51 = 37;
			}
			else
			{
				__LIB_6__.func_771();
			}
			break;
		case 28:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				__LIB_6__.func_834(Local_66.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_51 = 37;
			break;
		case 29:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				__LIB_6__.func_834(Local_66.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_51 = 37;
			break;
		case 30:
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				__LIB_6__.func_834(Local_66.f_2, "SHOP_NO_COPS", 3);
			}
			iLocal_51 = 37;
			break;
		case 31:
			if (!__LIB_0__.func_75())
			{
				iLocal_51 = 37;
			}
			break;
		case 33:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_66.f_2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					__LIB_6__.func_834(PLAYER::PLAYER_PED_ID(), "SHOP_HURRY", 11);
				}
				__LIB_6__.func_892(&(Local_66.f_471));
				iLocal_51 = 32;
			}
			break;
		case 32:
			if (func_41(&(Local_66.f_471)) > 1f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
				{
					__LIB_6__.func_834(Local_66.f_2, "SHOP_HURRYING", 3);
				}
				iLocal_51 = 37;
			}
			break;
		case 34:
			if (!__LIB_0__.func_75())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
				{
					__LIB_6__.func_834(Local_66.f_2, "SHOP_SELL", 3);
				}
				iLocal_51 = 37;
			}
			break;
		case 35:
			if (!__LIB_0__.func_75())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
				{
					__LIB_6__.func_834(Local_66.f_2, "SHOP_STEAL", 3);
				}
				iLocal_51 = 37;
			}
			break;
	}
}

float func_41(var uParam0)//Position - 0x255E
{
	if (__LIB_0__.func_736(uParam0))
	{
		if (__LIB_1__.func_637(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (__LIB_0__.func_484(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

int func_44()//Position - 0x2609
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_0, Local_66.f_200, Local_66.f_203, Local_66.f_206, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_45()//Position - 0x263D
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_0, Local_66.f_214, Local_66.f_217, Local_66.f_220, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_51()//Position - 0x28BD
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (func_302() && iLocal_64 != 3)
	{
		iVar2 = 0;
		while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
		{
			iVar0 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar2);
			switch (iVar0)
			{
				case 142:
					SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
					if (func_53(iVar1))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar1))
						{
							if (iVar1 != __LIB_0__.func_346(Local_66.f_2) && iVar1 != __LIB_0__.func_346(PLAYER::PLAYER_PED_ID()))
							{
								__LIB_6__.func_896(&(Local_66.f_470), 8);
							}
						}
						if (!ENTITY::IS_ENTITY_A_PED(iVar1) && !ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							__LIB_6__.func_896(&(Local_66.f_470), 8);
						}
					}
					break;
				case 141:
					SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
					if (func_53(iVar1))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar1))
						{
							if (iVar1 != __LIB_0__.func_346(Local_66.f_2) && iVar1 != __LIB_0__.func_346(PLAYER::PLAYER_PED_ID()))
							{
								__LIB_6__.func_896(&(Local_66.f_470), 8);
							}
						}
						if (!ENTITY::IS_ENTITY_A_PED(iVar1) && !ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							__LIB_6__.func_896(&(Local_66.f_470), 8);
						}
					}
					break;
			}
			iVar2++;
		}
	}
}

int func_53(int iParam0)//Position - 0x29E5
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == Local_66.f_185)
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_66.f_186, Local_66.f_189, Local_66.f_192, false, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_66.f_200, Local_66.f_203, Local_66.f_206, false, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_66.f_207, Local_66.f_210, Local_66.f_213, false, true, 0))
		{
			return 1;
		}
		else if (Local_66.f_199 != -1f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_66.f_193, Local_66.f_196, Local_66.f_199, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_54()//Position - 0x2AA2
{
	int iVar0;
	var uVar1[10];
	int iVar2;
	int iVar3;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_302())
		{
			if (!BitTest(Local_66.f_162.f_18, 0))
			{
				iVar2 = 0;
				iVar3 = 0;
				iVar2 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1, -1);
				iVar0 = 0;
				while (iVar0 < Local_66.f_162)
				{
					Local_66.f_162[iVar0] = 0;
					iVar0++;
				}
				iVar0 = 0;
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					if (iVar0 < Local_66.f_162)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(uVar1[iVar3]) && !PED::IS_PED_INJURED(uVar1[iVar3])) && !PED::IS_PED_IN_ANY_VEHICLE(uVar1[iVar3], false))
						{
							if (PED::IS_PED_GROUP_MEMBER(uVar1[iVar3], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
							{
								Local_66.f_162[iVar0] = uVar1[iVar3];
								Local_66.f_162.f_5[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], true) };
								iVar0++;
							}
						}
					}
					iVar3++;
				}
				MISC::SET_BIT(&(Local_66.f_162.f_18), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_66.f_162)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_66.f_162[iVar0]) && !PED::IS_PED_INJURED(Local_66.f_162[iVar0])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_66.f_162[iVar0], false))
				{
					if (BitTest(Local_66.f_162.f_18, 1))
					{
						if ((MISC::GET_GAME_TIMER() % 1500) < 50)
						{
						}
						ENTITY::SET_ENTITY_VISIBLE(Local_66.f_162[iVar0], false, false);
						ENTITY::SET_ENTITY_COLLISION(Local_66.f_162[iVar0], false, false);
						ENTITY::FREEZE_ENTITY_POSITION(Local_66.f_162[iVar0], true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_66.f_162[iVar0], Local_66.f_162.f_5[iVar0 /*3*/], true, true, true);
					}
					else if (!ENTITY::IS_ENTITY_VISIBLE(Local_66.f_162[iVar0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_66.f_162[iVar0], true, false);
						ENTITY::SET_ENTITY_COLLISION(Local_66.f_162[iVar0], true, false);
						ENTITY::FREEZE_ENTITY_POSITION(Local_66.f_162[iVar0], false);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_66.f_162[iVar0], Local_66.f_162.f_5[iVar0 /*3*/], true, true, true);
					}
				}
				iVar0++;
			}
		}
		else
		{
			if (BitTest(Local_66.f_162.f_18, 0))
			{
				MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_66.f_162)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_66.f_162[iVar0]) && !PED::IS_PED_INJURED(Local_66.f_162[iVar0])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_66.f_162[iVar0], false))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(Local_66.f_162[iVar0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_66.f_162[iVar0], true, false);
						ENTITY::SET_ENTITY_COLLISION(Local_66.f_162[iVar0], true, false);
						ENTITY::FREEZE_ENTITY_POSITION(Local_66.f_162[iVar0], false);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_66.f_162[iVar0], Local_66.f_162.f_5[iVar0 /*3*/], true, true, true);
					}
				}
				iVar0++;
			}
		}
	}
}

void func_55()//Position - 0x2D4A
{
	switch (iLocal_99)
	{
		case 0:
			if (func_302())
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
				STREAMING::REQUEST_ANIM_DICT("oddjobs@shop_robbery@rob_till");
				STREAMING::REQUEST_ANIM_DICT("misscommon@response");
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_5__.func_739(iLocal_80), false);
				STREAMING::REQUEST_MODEL(joaat("prop_choc_ego"));
				STREAMING::REQUEST_MODEL(joaat("prop_choc_meto"));
				STREAMING::REQUEST_MODEL(joaat("prop_choc_pq"));
				if (!bLocal_86)
				{
					STREAMING::REQUEST_MODEL(Local_66.f_46.f_26);
					STREAMING::REQUEST_MODEL(Local_66.f_46.f_27);
				}
				iLocal_99 = 1;
			}
			break;
		case 1:
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\MARKET_CASH_REGISTER", false, -1))
			{
				return;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@shop_robbery@rob_till"))
			{
				return;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
			{
				return;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_choc_ego")))
			{
				return;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_choc_meto")))
			{
				return;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_choc_pq")))
			{
				return;
			}
			if (!bLocal_86)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_66.f_46.f_26))
				{
					return;
				}
				if (!STREAMING::HAS_MODEL_LOADED(Local_66.f_46.f_27))
				{
					return;
				}
			}
			if (!__LIB_7__.func_161("SNK_MNU", iLocal_80, 0))
			{
				return;
			}
			if (!__LIB_0__.func_517(Local_66.f_470, 4))
			{
				if (!__LIB_0__.func_517(Local_66.f_470, 1024))
				{
					iLocal_98[0] = OBJECT::CREATE_OBJECT(func_61(0), func_60(0), true, true, false);
					iLocal_98[1] = OBJECT::CREATE_OBJECT(func_61(1), func_60(1), true, true, false);
					iLocal_98[2] = OBJECT::CREATE_OBJECT(func_61(2), func_60(2), true, true, false);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_98[0], false, false);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_98[1], false, false);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_98[2], false, false);
					__LIB_6__.func_896(&(Local_66.f_470), 1024);
				}
				__LIB_6__.func_896(&(Local_66.f_470), 4);
				iLocal_99 = 2;
			}
			break;
		case 2:
			if (!func_302())
			{
				func_56();
				__LIB_7__.func_204(&(Local_66.f_470), 4);
				iLocal_99 = 0;
			}
			break;
		case 3:
			if (__LIB_0__.func_517(Local_66.f_470, 4))
			{
				func_56();
				__LIB_7__.func_204(&(Local_66.f_470), 4);
			}
			break;
	}
}

void func_56()//Position - 0x2F54
{
	STREAMING::REMOVE_ANIM_DICT("oddjobs@shop_robbery@rob_till");
	STREAMING::REMOVE_ANIM_DICT("misscommon@response");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\MARKET_CASH_REGISTER");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(__LIB_5__.func_739(iLocal_80));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_choc_ego"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_choc_meto"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_choc_pq"));
	__LIB_7__.func_49(1, iLocal_80);
	if (!bLocal_86)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_66.f_46.f_26);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_66.f_46.f_27);
	}
}

Vector3 func_60(int iParam0)//Position - 0x3144
{
	switch (iParam0)
	{
		case 0:
			return Local_66.f_486.f_6 - Vector(1f, 0f, 0.1f);
		case 1:
			return Local_66.f_486.f_6 - Vector(1f, 0f, 0f);
		case 2:
			return Local_66.f_486.f_6 - Vector(1f, 0f, -0.1f);
		default:
	}
	return Local_66.f_486.f_6 - Vector(1f, 0f, -0.1f);
}

int func_61(int iParam0)//Position - 0x31AE
{
	switch (iParam0)
	{
		case 0:
			return joaat("prop_choc_pq");
		case 1:
			return joaat("prop_choc_ego");
		case 2:
			return joaat("prop_choc_meto");
		default:
	}
	return joaat("prop_choc_pq");
}

void func_65()//Position - 0x3430
{
	switch (iLocal_100)
	{
		case 0:
			if (func_302())
			{
				STREAMING::REQUEST_ANIM_DICT(Local_66.f_486.f_1);
				iLocal_100 = 1;
			}
			break;
		case 1:
			if (!STREAMING::HAS_ANIM_DICT_LOADED(Local_66.f_486.f_1))
			{
				return;
			}
			if (!__LIB_0__.func_517(Local_66.f_470, 16))
			{
				__LIB_6__.func_896(&(Local_66.f_470), 16);
				iLocal_100 = 2;
			}
			break;
		case 2:
			if (!func_302() && iLocal_63 != 1)
			{
				STREAMING::REMOVE_ANIM_DICT(Local_66.f_486.f_1);
				__LIB_7__.func_204(&(Local_66.f_470), 16);
				iLocal_100 = 0;
			}
			break;
		case 3:
			if (__LIB_0__.func_517(Local_66.f_470, 16))
			{
				STREAMING::REMOVE_ANIM_DICT(Local_66.f_486.f_1);
				__LIB_7__.func_204(&(Local_66.f_470), 16);
			}
			break;
	}
}

void func_66()//Position - 0x34F9
{
	switch (iLocal_119)
	{
		case 0:
			if (Local_66.f_158)
			{
				iLocal_119 = 1;
			}
			break;
		case 1:
			if (func_302())
			{
				if (__LIB_0__.func_736(&(Local_66.f_158.f_1)))
				{
					__LIB_0__.func_735(&(Local_66.f_158.f_1));
				}
				if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
				}
			}
			else
			{
				__LIB_6__.func_892(&(Local_66.f_158.f_1));
				iLocal_119 = 2;
			}
			break;
		case 2:
			if (func_302())
			{
				iLocal_119 = 1;
			}
			break;
		case 3:
			break;
	}
}

void func_67()//Position - 0x3593
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	char* sVar5;
	var uVar6;
	func_190();
	if (((((iLocal_58 == 1 || iLocal_58 == 2) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0) && !PED::IS_PED_INJURED(Local_66.f_0)) && !__LIB_5__.func_722(-1082130432)) && !PED::IS_PED_INJURED(Local_66.f_2))
	{
		iVar1 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
		iVar2 = ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
		if (((iLocal_64 != 2 && iLocal_64 != 3) && iLocal_64 != 4) && func_302())
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
		iVar4 = 0;
		switch (iLocal_64)
		{
			case 0:
				if (__LIB_0__.func_517(Local_66.f_470, 4) && __LIB_1__.func_562(Local_66.f_0) == joaat("WEAPON_UNARMED"))
				{
					if (__LIB_5__.func_744(iLocal_80, &(Local_66.f_486.f_6), Local_66.f_486.f_9.f_2, &(Local_66.f_102.f_26[0 /*3*/]), &(Local_66.f_102.f_26[1 /*3*/]), &(Local_66.f_102.f_33), &(Local_66.f_102.f_36)))
					{
						Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Local_66.f_102.f_33, true) < 5f)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_66.f_102.f_26[0 /*3*/], Local_66.f_102.f_26[1 /*3*/], Local_66.f_102.f_36, false, true, 0))
							{
								if (PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_66.f_102.f_33, 135f))
								{
									if ((MISC::GET_GAME_TIMER() % 1000) < 50)
									{
									}
									if (((!__LIB_0__.func_1("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */) && !__LIB_0__.func_1("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */)) && !__LIB_0__.func_381()) && __LIB_5__.func_741())
									{
										__LIB_0__.func_187("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */);
									}
									Local_66.f_469 = -1;
									__LIB_7__.func_508(&(Local_66.f_469), 4, "SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */, 0, 0, 0, 0);
									MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 1);
									MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 0);
									iLocal_64 = 1;
								}
							}
						}
					}
				}
				break;
			case 1:
				if (!PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_66.f_102.f_33, 135f) || !__LIB_1__.func_562(Local_66.f_0) == joaat("WEAPON_UNARMED"))
				{
					if (__LIB_0__.func_1("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */))
					{
						HUD::CLEAR_HELP(true);
					}
					Local_66.f_102.f_22 = -1;
					__LIB_6__.func_404(&(Local_66.f_469));
					iLocal_64 = 0;
				}
				else if (((!__LIB_0__.func_1("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */) && !__LIB_0__.func_1("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */)) && __LIB_5__.func_741()) && !__LIB_2__.func_278(Local_66.f_469, 0))
				{
					__LIB_0__.func_187("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */);
				}
				if ((!TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
				{
					if (__LIB_2__.func_187(Local_66.f_469, 1))
					{
						if (__LIB_0__.func_1("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */))
						{
							HUD::CLEAR_HELP(true);
						}
						MISC::SET_BIT(&(Local_66.f_162.f_18), 1);
						__LIB_6__.func_892(&(Local_66.f_102.f_53));
						__LIB_6__.func_404(&(Local_66.f_469));
						__LIB_9__.func_485(23, 1);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_66.f_2))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_66.f_2, 0);
						}
						iLocal_64 = 2;
					}
				}
				break;
			case 2:
				if (!CAM::DOES_CAM_EXIST(iLocal_118))
				{
					iLocal_118 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 50f, false, 2);
				}
				func_179(iLocal_80, Local_66.f_486.f_6, Local_66.f_486.f_9.f_2, &(Local_66.f_102), &(Local_66.f_102.f_3), &uVar6);
				CAM::SET_CAM_COORD(iLocal_118, Local_66.f_102);
				CAM::SET_CAM_ROT(iLocal_118, Local_66.f_102.f_3, 2);
				CAM::SET_CAM_FOV(iLocal_118, 35f);
				CAM::SHAKE_CAM(iLocal_118, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(iLocal_118, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					__LIB_6__.func_896(&(Local_66.f_470), 2048);
				}
				Local_66.f_102.f_46 = __LIB_5__.func_739(iLocal_80);
				Local_66.f_102.f_23 = 0;
				Local_66.f_102.f_24 = 3;
				__LIB_1__.func_193(0, 0);
				__LIB_1__.func_318(1, 1, 0, 0, 0);
				__LIB_1__.func_317(1, 2, 1, 1, 1);
				__LIB_1__.func_319(func_5(iLocal_80));
				__LIB_7__.func_286(1, Local_66.f_102.f_46, Local_66.f_102.f_46);
				__LIB_2__.func_185();
				__LIB_18__.func_477(0, "SNK_ITEM1", 0, 1, 0, 0, 0);
				__LIB_18__.func_477(0, "ITEM_COST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
				__LIB_26__.func_57(func_167(0), 0);
				__LIB_18__.func_477(1, "SNK_ITEM2", 0, 1, 0, 0, 0);
				__LIB_18__.func_477(1, "ITEM_COST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
				__LIB_26__.func_57(func_167(1), 0);
				__LIB_18__.func_477(2, "SNK_ITEM3", 0, 1, 0, 0, 0);
				__LIB_18__.func_477(2, "ITEM_COST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
				__LIB_26__.func_57(func_167(2), 0);
				__LIB_4__.func_192(0);
				__LIB_2__.func_183(Local_66.f_102.f_23, 1, 1);
				__LIB_1__.func_342("SNK_ITEM1_D", 0, 0);
				__LIB_1__.func_345(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
				__LIB_1__.func_345(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
				__LIB_1__.func_345(203, "SNK_LIFT", -1, 0);
				iLocal_64 = 3;
				break;
			case 3:
				iVar4 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
					{
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/, true);
						__LIB_7__.func_287(0, 0, 0, 1);
						__LIB_2__.func_158(0, -1, 1);
						if (__LIB_2__.func_157())
						{
							if (Global_4539961 != Local_66.f_102.f_23)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								Local_66.f_102.f_23 = Global_4539961;
								__LIB_2__.func_183(Local_66.f_102.f_23, 1, 1);
								Local_66.f_102.f_37 = 0;
								Local_66.f_102.f_41 = 0;
								Local_66.f_102.f_42 = 0;
								sVar5 = func_154(Local_66.f_102.f_23);
								if (HUD::DOES_TEXT_LABEL_EXIST(sVar5))
								{
									__LIB_1__.func_342(sVar5, 0, 0);
								}
							}
							else
							{
								iVar4 = 1;
							}
						}
					}
				}
				__LIB_25__.func_745(1, iLocal_80, 1, 0, 1, -1082130432, 0, 0, -1);
				func_110();
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar4 == 1)
				{
					Local_66.f_102.f_37 = 1;
					Local_66.f_102.f_41 = 0;
					Local_66.f_102.f_42 = 0;
					if (Local_66.f_102.f_40 && Local_66.f_102.f_43)
					{
						Local_66.f_102.f_44 = 1;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", true);
						iLocal_108 = 1;
						iLocal_111 = Local_66.f_102.f_23;
						iLocal_64 = 4;
					}
					else
					{
						Local_66.f_102.f_44 = 0;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", true);
					}
				}
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/))
				{
					iLocal_64 = 6;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_LIQUOR_STORE_SOUNDSET", true);
					func_109();
				}
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/))
				{
					iLocal_64 = 7;
					Local_66.f_102.f_45 = MISC::GET_GAME_TIMER();
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", true);
					func_109();
				}
				break;
			case 4:
				__LIB_25__.func_745(1, iLocal_80, 1, 0, 1, -1082130432, 0, 0, -1);
				switch (Local_66.f_102.f_23)
				{
					case 0:
						iVar0 = func_167(Local_66.f_102.f_23);
						if (iVar1 + 10 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 10, 0);
						}
						break;
					case 1:
						iVar0 = func_167(Local_66.f_102.f_23);
						if (iVar1 + 20 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 20, 0);
						}
						break;
					case 2:
						iVar0 = func_167(Local_66.f_102.f_23);
						if (iVar1 + 15 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 15, 0);
						}
						break;
				}
				__LIB_40__.func_982(__LIB_18__.func_173(), 98, iVar0);
				if (!Local_66.f_102.f_39)
				{
					iLocal_51 = 34;
					Local_66.f_102.f_39 = 1;
				}
				__LIB_6__.func_892(&(Local_66.f_102.f_53));
				iLocal_64 = 3;
				break;
			case 5:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!bLocal_86)
					{
					}
					iLocal_64 = 6;
				}
				break;
			case 6:
				switch (Local_66.f_102.f_23)
				{
					case 0:
						if (iVar1 + 10 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 10, 0);
						}
						break;
					case 1:
						if (iVar1 + 20 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 20, 0);
						}
						break;
					case 2:
						if (iVar1 + 15 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 15, 0);
						}
						break;
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
				__LIB_9__.func_485(23, 0);
				iLocal_51 = 35;
				if (!PED::IS_PED_INJURED(Local_66.f_2) && __LIB_0__.func_517(Local_66.f_470, 4))
				{
					TASK::TASK_PLAY_ANIM(Local_66.f_2, "misscommon@response", "give_me_a_break", 8f, -8f, -1, 0, 0f, false, false, false);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
				{
					func_16(1, 0);
				}
				iLocal_64 = 8;
				break;
			case 7:
				if ((MISC::GET_GAME_TIMER() - Local_66.f_102.f_45) > 1000)
				{
					iLocal_64 = 0;
				}
				else
				{
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 193 /*INPUT_FRONTEND_RLEFT*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/);
				}
				break;
			case 8:
				break;
		}
	}
	else
	{
		if (iLocal_64 != 8 && __LIB_0__.func_517(Local_66.f_470, 4))
		{
			if ((iLocal_64 == 3 || iLocal_64 == 2) || iLocal_64 == 4)
			{
				func_109();
			}
			iLocal_64 = 8;
		}
		if (__LIB_0__.func_1("SHR_SNACKS" /* GXT: Press ~INPUT_CONTEXT~ to buy a snack.~n~Hold ~INPUT_CONTEXT~ to steal a snack. */))
		{
			HUD::CLEAR_HELP(true);
			__LIB_6__.func_404(&(Local_66.f_469));
		}
		if (__LIB_0__.func_1("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */))
		{
			HUD::CLEAR_HELP(true);
			__LIB_6__.func_404(&(Local_66.f_469));
		}
		if (BitTest(Local_66.f_162.f_18, 1) && iLocal_101 < 2)
		{
			MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 1);
		}
		if (__LIB_0__.func_517(Local_66.f_470, 4))
		{
			func_68();
		}
	}
}

void func_68()//Position - 0x3F2B
{
	if (__LIB_0__.func_517(Local_66.f_470, 2048))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			__LIB_7__.func_204(&(Local_66.f_470), 2048);
		}
	}
	Local_66.f_102.f_37 = 0;
	MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 1);
	if (CAM::DOES_CAM_EXIST(iLocal_118))
	{
		CAM::DESTROY_CAM(iLocal_118, false);
	}
}

void func_109()//Position - 0x548B
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	__LIB_7__.func_204(&(Local_66.f_470), 2048);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	__LIB_9__.func_485(23, 0);
	Local_66.f_102.f_37 = 0;
	MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 1);
	if (CAM::DOES_CAM_EXIST(iLocal_118))
	{
		CAM::DESTROY_CAM(iLocal_118, false);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
}

void func_110()//Position - 0x5503
{
	char* sVar0;
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 193 /*INPUT_FRONTEND_RLEFT*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/);
	if (func_113())
	{
		Local_66.f_102.f_37 = 0;
		__LIB_0__.func_735(&(Local_66.f_102.f_53));
		Local_66.f_102.f_23 = (Local_66.f_102.f_23 - 1);
		if (Local_66.f_102.f_23 < 0)
		{
			Local_66.f_102.f_23 = (Local_66.f_102.f_24 - 1);
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		__LIB_2__.func_183(Local_66.f_102.f_23, 1, 1);
		sVar0 = func_154(Local_66.f_102.f_23);
		Local_66.f_102.f_41 = 0;
		Local_66.f_102.f_42 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			__LIB_1__.func_342(sVar0, 0, 0);
		}
	}
	if (func_112())
	{
		Local_66.f_102.f_37 = 0;
		__LIB_0__.func_735(&(Local_66.f_102.f_53));
		Local_66.f_102.f_23++;
		if (Local_66.f_102.f_23 > (Local_66.f_102.f_24 - 1))
		{
			Local_66.f_102.f_23 = 0;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		__LIB_2__.func_183(Local_66.f_102.f_23, 1, 1);
		sVar0 = func_154(Local_66.f_102.f_23);
		Local_66.f_102.f_41 = 0;
		Local_66.f_102.f_42 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			__LIB_1__.func_342(sVar0, 0, 0);
		}
	}
	if (!Local_66.f_102.f_41)
	{
		Local_66.f_102.f_40 = __LIB_9__.func_231(__LIB_18__.func_168(PLAYER::PLAYER_PED_ID())) >= func_167(Local_66.f_102.f_23);
		Local_66.f_102.f_41 = 1;
	}
	if (!Local_66.f_102.f_42)
	{
		Local_66.f_102.f_43 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
		Local_66.f_102.f_42 = 1;
	}
	if (Local_66.f_102.f_37)
	{
		if (func_41(&(Local_66.f_102.f_53)) < 3f)
		{
			if (Local_66.f_102.f_44)
			{
				__LIB_1__.func_342("SNK_BOUGHT", 0, 0);
			}
			else if (!Local_66.f_102.f_40)
			{
				__LIB_1__.func_342("SNK_AFFORD", 0, 0);
			}
			else if (!Local_66.f_102.f_43)
			{
				__LIB_1__.func_342("SNK_NEEDED", 0, 0);
			}
		}
		else
		{
			Local_66.f_102.f_37 = 0;
			Local_66.f_102.f_44 = 0;
			__LIB_0__.func_735(&(Local_66.f_102.f_53));
			sVar0 = func_154(Local_66.f_102.f_23);
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				__LIB_1__.func_342(sVar0, 0, 0);
			}
		}
	}
}

int func_112()//Position - 0x577A
{
	float fVar0;
	fVar0 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
	if ((fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/))
	{
		if (!__LIB_0__.func_736(&iLocal_115))
		{
			__LIB_18__.func_276(&iLocal_115);
			return 1;
		}
		else if (__LIB_7__.func_78(&iLocal_115) > 0.25f)
		{
			__LIB_6__.func_892(&iLocal_115);
			return 1;
		}
	}
	else if (__LIB_0__.func_736(&iLocal_115))
	{
		__LIB_0__.func_735(&iLocal_115);
	}
	return 0;
}

int func_113()//Position - 0x57F9
{
	float fVar0;
	fVar0 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
	if ((fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))
	{
		if (!__LIB_0__.func_736(&iLocal_112))
		{
			__LIB_18__.func_276(&iLocal_112);
			return 1;
		}
		else if (__LIB_7__.func_78(&iLocal_112) > 0.25f)
		{
			__LIB_6__.func_892(&iLocal_112);
			return 1;
		}
	}
	else if (__LIB_0__.func_736(&iLocal_112))
	{
		__LIB_0__.func_735(&iLocal_112);
	}
	return 0;
}

char* func_154(int iParam0)//Position - 0x9F0E
{
	switch (iParam0)
	{
		case 0:
			return "SNK_ITEM1_D";
		case 1:
			return "SNK_ITEM2_D";
		case 2:
			return "SNK_ITEM3_D";
		default:
	}
	return "";
}

int func_167(int iParam0)//Position - 0xAC7A
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		default:
	}
	return 0;
}

int func_179(int iParam0, struct<3> Param1, float fParam2, var uParam3, var uParam4, var uParam5)//Position - 0xB5E0
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param1, fParam2, 2.40015f, -7.75244f, 1.0825f) };
			*uParam4 = -4.2069f;
			uParam4->f_1 = -0.027f;
			uParam4->f_2 = (fParam2 + 22.8175f);
			*uParam5 = 32.8283f;
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param1, fParam2, 3.80296f, -5.391f, 1.213f) };
			*uParam4 = -9.3866f;
			uParam4->f_1 = -0.0011f;
			uParam4->f_2 = (fParam2 + 46.9866f);
			*uParam5 = 35f;
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param1, fParam2, 2.97963f, -3.39452f, 0.934498f) };
			*uParam4 = -8.483f;
			uParam4->f_1 = 0.0149f;
			uParam4->f_2 = (fParam2 + 53.5519f);
			*uParam5 = 35f;
			break;
		case -2:
			*uParam3 = { 1390.6526f, 3598.9656f, 35.6115f };
			*uParam4 = { -3.6091f, 0.022f, -8.6461f };
			*uParam5 = 35f;
			break;
	}
	return 1;
}

void func_190()//Position - 0xBD1F
{
	if (iLocal_108)
	{
		if (iLocal_107 == 3)
		{
			iLocal_107 = 0;
		}
		iLocal_108 = 0;
	}
	switch (iLocal_107)
	{
		case 0:
			ENTITY::SET_ENTITY_VISIBLE(iLocal_98[iLocal_111], true, false);
			iLocal_109 = PED::CREATE_SYNCHRONIZED_SCENE(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_66.f_486.f_6, Local_66.f_486.f_9.f_2, -0.07f, 0.06f, -0.02f), Local_66.f_486.f_9, 2);
			if (!PED::IS_PED_INJURED(Local_66.f_2))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(Local_66.f_2, iLocal_109, "mp_am_hold_up", "purchase_chocbar_shopkeeper", 1.5f, -1.5f, 0, 0, 1000f, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_98[iLocal_111], iLocal_109, "purchase_chocbar", "mp_am_hold_up", 1000f, 8f, 1, 1000f);
				iLocal_107 = 1;
			}
			break;
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_109))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_109) == 1f)
				{
					if (!PED::IS_PED_INJURED(Local_66.f_2))
					{
						TASK::CLEAR_PED_TASKS(Local_66.f_2);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[iLocal_111]))
					{
						ENTITY::SET_ENTITY_DYNAMIC(iLocal_98[iLocal_111], true);
					}
					iLocal_110 = MISC::GET_GAME_TIMER();
					iLocal_107 = 2;
				}
			}
			else
			{
				iLocal_110 = MISC::GET_GAME_TIMER();
				iLocal_107 = 2;
			}
			break;
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_110) > 1000)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_98[iLocal_111]))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_98[iLocal_111], false, false);
					ENTITY::SET_ENTITY_COORDS(iLocal_98[iLocal_111], func_60(iLocal_111), true, false, false, true);
					ENTITY::SET_ENTITY_DYNAMIC(iLocal_98[iLocal_111], false);
				}
				iLocal_107 = 3;
			}
			break;
		case 3:
			break;
	}
}

void func_191()//Position - 0xBEBC
{
	if (iLocal_52 != 6)
	{
		switch (iLocal_52)
		{
			case 1:
				if (func_196())
				{
					iLocal_52 = 2;
				}
				else
				{
					iLocal_52 = 6;
				}
				break;
			case 2:
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_86, false))
				{
					func_195();
					__LIB_18__.func_276(&(Local_66.f_86.f_7));
					iLocal_52 = 3;
				}
				break;
			case 3:
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_86, false))
				{
					if ((__LIB_35__.func_235(&(Local_66.f_86.f_7), 5f) || func_192(Local_66.f_2, &(Local_66.f_451))) || PED::IS_PED_RAGDOLL(Local_66.f_86))
					{
						iLocal_52 = 4;
					}
				}
				break;
			case 4:
				if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_86, false))
				{
					iLocal_51 = 31;
					TASK::TASK_SMART_FLEE_PED(Local_66.f_86, Local_66.f_0, 500f, -1, false, false);
					iLocal_52 = 5;
				}
				__LIB_0__.func_735(&(Local_66.f_86.f_7));
				break;
			}
	}
}

int func_192(int iParam0, var uParam1)//Position - 0xBF92
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (__LIB_10__.func_589(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_195()//Position - 0xC052
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_86, false))
	{
		TASK::OPEN_SEQUENCE_TASK(&(Local_66.f_86.f_6));
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_66.f_0, 0);
		TASK::TASK_LOOK_AT_ENTITY(0, Local_66.f_0, 2500, 0, 2);
		TASK::TASK_HANDS_UP(0, 2500, 0, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_66.f_86.f_6);
		TASK::TASK_PERFORM_SEQUENCE(Local_66.f_86, Local_66.f_86.f_6);
	}
}

int func_196()//Position - 0xC0A8
{
	PED::GET_CLOSEST_PED(Local_66.f_86.f_2, Local_66.f_86.f_5, true, false, &(Local_66.f_86), false, true, -1);
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_86, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(Local_66.f_86) == Local_66.f_86.f_1)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_66.f_86, true, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_86, true);
			return 1;
		}
	}
	return 0;
}

void func_197()//Position - 0xC108
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	if (iLocal_101 > 1 && iLocal_101 < 5)
	{
		if (__LIB_0__.func_404())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
			iLocal_101 = 6;
		}
	}
	switch (iLocal_101)
	{
		case 0:
			if ((((ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false) || !func_217()) || __LIB_0__.func_517(Local_66.f_470, 128)) && iLocal_55 < 3) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_66.f_2.f_1, 1.5f) == 0)
			{
				if ((func_45() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !__LIB_17__.func_836(0))
				{
					__LIB_0__.func_151("SHR_ROBTILL" /* GXT: Press ~INPUT_CONTEXT~ to take money. */, -1);
					Local_66.f_469 = -1;
					__LIB_7__.func_508(&(Local_66.f_469), 4, "SHR_ROBTILL" /* GXT: Press ~INPUT_CONTEXT~ to take money. */, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 1);
					MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 0);
					iLocal_101 = 1;
				}
			}
			else if (!PED::IS_PED_INJURED(Local_66.f_2))
			{
			}
			else if (iLocal_55 == 7)
			{
			}
			else if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_66.f_2.f_1, 1.5f) > 0)
			{
			}
			break;
		case 1:
			if (func_45())
			{
				if (__LIB_2__.func_187(Local_66.f_469, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						{
							iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar3, Local_66.f_214, Local_66.f_217, Local_66.f_220, false, true, 0))
							{
								ENTITY::SET_ENTITY_COORDS(iVar3, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_66.f_486.f_6, Local_66.f_486.f_9.f_2, -0.7961f, -1.562f, -0.4215f), false, false, false, true);
							}
						}
					}
					MISC::SET_BIT(&(Local_66.f_162.f_18), 1);
					if (__LIB_0__.func_1("SHR_ROBTILL" /* GXT: Press ~INPUT_CONTEXT~ to take money. */))
					{
						HUD::CLEAR_HELP(true);
					}
					__LIB_6__.func_404(&(Local_66.f_469));
					bVar2 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_105, true);
					if (bVar2)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
					FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);
					CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(false);
					__LIB_6__.func_849(0);
					__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
					HUD::DISPLAY_RADAR(false);
					__LIB_9__.func_485(23, 1);
					MISC::CLEAR_AREA_OF_PROJECTILES(Local_66.f_2.f_1, 3f, 0);
					iLocal_101 = 2;
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
					if (Local_66.f_469 <= 0)
					{
						Local_66.f_469 = -1;
						__LIB_7__.func_508(&(Local_66.f_469), 4, "SHR_ROBTILL" /* GXT: Press ~INPUT_CONTEXT~ to take money. */, 0, 0, 0, 0);
					}
				}
			}
			else
			{
				if (__LIB_0__.func_1("SHR_ROBTILL" /* GXT: Press ~INPUT_CONTEXT~ to take money. */))
				{
					HUD::CLEAR_HELP(true);
				}
				__LIB_6__.func_404(&(Local_66.f_469));
				iLocal_101 = 0;
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_66.f_2, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(Local_66.f_2, true);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_66.f_2.f_1, Local_66.f_2.f_4, -0.75f, 0f, -1f), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_66.f_2.f_4);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_78);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_78);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 1, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -1.5f, -1, 0, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_78);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_78);
				if (!CAM::DOES_CAM_EXIST(iLocal_102))
				{
					iLocal_102 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 50f, false, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_102, PLAYER::PLAYER_PED_ID(), -0.1878f, 3.0635f, 0.68f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_102, PLAYER::PLAYER_PED_ID(), -0.0129f, 0.0927f, 0.3008f, true);
				CAM::SET_CAM_FOV(iLocal_102, 35f);
				CAM::SHAKE_CAM(iLocal_102, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(iLocal_102, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			iLocal_101 = 3;
			break;
		case 3:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_103))
				{
					iLocal_103 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 50f, false, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_103, PLAYER::PLAYER_PED_ID(), -1.0346f, 2.9183f, 0.68f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_103, PLAYER::PLAYER_PED_ID(), -0.0574f, 0.1074f, 0.3008f, true);
				CAM::SET_CAM_FOV(iLocal_103, 35f);
				CAM::SHAKE_CAM(iLocal_103, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_103, iLocal_102, 8000, 1, 1);
			}
			iLocal_106 = MISC::GET_GAME_TIMER();
			iLocal_101 = 4;
			break;
		case 4:
			if (((MISC::GET_GAME_TIMER() - iLocal_106) > 4800 || (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_66.f_2.f_1, 3f) > 0)
			{
				iLocal_101 = 5;
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_106) > 4500)
			{
				if (__LIB_4__.func_739())
				{
					if (!iLocal_95)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_95 = 1;
					}
				}
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop", 3))
			{
				fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop");
				if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
				{
					if (!iLocal_104)
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(10, 51);
						__LIB_40__.func_942(__LIB_18__.func_173(), 1, iVar1, 0, 0);
						iLocal_81 = (iLocal_81 + iVar1);
						Local_66.f_28.f_6 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
						iLocal_104 = 1;
					}
				}
				else if (iLocal_104)
				{
					iLocal_104 = 0;
				}
			}
			break;
		case 5:
			if (ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_66.f_2, true, false);
				ENTITY::FREEZE_ENTITY_POSITION(Local_66.f_2, false);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			if (CAM::DOES_CAM_EXIST(iLocal_102))
			{
				CAM::DESTROY_CAM(iLocal_102, false);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_103))
			{
				CAM::DESTROY_CAM(iLocal_103, false);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				Var4 = { ENTITY::GET_ENTITY_COORDS(iVar3, true) };
			}
			if (iLocal_105 != joaat("WEAPON_UNARMED") && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_105, true);
			}
			if (BitTest(Local_66.f_162.f_18, 1))
			{
				MISC::CLEAR_BIT(&(Local_66.f_162.f_18), 1);
			}
			__LIB_32__.func_557(1, 1, 1);
			func_16(1, 0);
			iLocal_60 = 12;
			func_203();
			__LIB_24__.func_943(297, 0, 0);
			Local_66.f_468 = 1;
			iLocal_101 = 7;
			break;
		case 6:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::SET_CAM_ACTIVE(iLocal_103, false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				}
				if (iLocal_81 < 15)
				{
					iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(25, 65);
					__LIB_40__.func_942(__LIB_18__.func_173(), 1, iVar1, 0, 0);
					iLocal_81 = (iLocal_81 + iVar1);
				}
				CAM::DO_SCREEN_FADE_IN(500);
				iLocal_101 = 5;
			}
			break;
	}
}

void func_203()//Position - 0xCE51
{
	if (!iLocal_87)
	{
		Global_113386.f_20035[iLocal_80]++;
		Global_113386.f_20035.f_62[iLocal_80] = Local_66.f_1;
		if (__LIB_18__.func_173() == 0)
		{
			__LIB_35__.func_267(5);
		}
		iLocal_87 = 1;
	}
}

int func_217()//Position - 0xD363
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_66.f_2) == Local_66.f_185)
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_2, Local_66.f_186, Local_66.f_189, Local_66.f_192, false, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_2, Local_66.f_200, Local_66.f_203, Local_66.f_206, false, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_2, Local_66.f_207, Local_66.f_210, Local_66.f_213, false, true, 0))
		{
			return 1;
		}
		else if (Local_66.f_199 != -1f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_2, Local_66.f_193, Local_66.f_196, Local_66.f_199, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_219()//Position - 0xD45B
{
	int iVar0;
	func_236();
	func_233();
	if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_66.f_0, &iVar0, true);
		if ((iLocal_58 == 1 && iLocal_99 == 2) && ((PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()) || func_232()) || func_231()))
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			func_16(1, 0);
			iLocal_58 = 9;
		}
	}
	else
	{
		return;
	}
	func_228();
	if (!bLocal_86)
	{
		func_227();
	}
	switch (iLocal_58)
	{
		case 1:
			if (func_302())
			{
				if ((__LIB_20__.func_180(Local_66.f_0, Local_66.f_2, &(Local_66.f_451), 1) || (func_192(Local_66.f_2, &(Local_66.f_451)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))) && iVar0 != joaat("WEAPON_UNARMED"))
				{
					func_226();
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
					iLocal_51 = 12;
					iLocal_50 = 3;
					iLocal_58 = 5;
					MISC::SET_BIT(&Global_96292, 3);
					func_225();
				}
				if (__LIB_0__.func_517(Local_66.f_470, 8))
				{
					if (!__LIB_0__.func_517(Local_66.f_470, 32))
					{
						if (!PED::IS_PED_INJURED(Local_66.f_2) && __LIB_0__.func_517(Local_66.f_470, 4))
						{
							TASK::TASK_PLAY_ANIM(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0f, false, false, false);
						}
						iLocal_51 = 36;
						func_16(1, 0);
						func_224();
						__LIB_6__.func_896(&(Local_66.f_470), 32);
					}
				}
			}
			break;
		case 2:
			if (func_302())
			{
				if (func_192(Local_66.f_2, &(Local_66.f_451)) && iVar0 != joaat("WEAPON_UNARMED"))
				{
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
					Local_66.f_2.f_11 = 1;
					func_203();
					iLocal_51 = 12;
					iLocal_50 = 3;
					iLocal_60 = 11;
					iLocal_58 = 3;
					MISC::SET_BIT(&Global_96292, 3);
					func_225();
				}
				else if (__LIB_20__.func_180(Local_66.f_0, Local_66.f_2, &(Local_66.f_451), 1))
				{
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
					func_224();
					func_226();
					iLocal_51 = 12;
					iLocal_58 = 5;
					func_225();
				}
				else if (__LIB_0__.func_517(Local_66.f_470, 8))
				{
					if (!__LIB_0__.func_517(Local_66.f_470, 32))
					{
						if (!PED::IS_PED_INJURED(Local_66.f_2) && __LIB_0__.func_517(Local_66.f_470, 4))
						{
							TASK::TASK_PLAY_ANIM(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0f, false, false, false);
						}
						iLocal_51 = 36;
						func_16(1, 0);
						func_224();
						__LIB_6__.func_896(&(Local_66.f_470), 32);
					}
				}
			}
			break;
		case 3:
			if (iLocal_51 >= 13)
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_66.f_2))
				{
					iLocal_51 = 15;
					iLocal_56 = 5;
					iLocal_60 = 12;
					iLocal_58 = 4;
				}
			}
			break;
		case 4:
			if (__LIB_20__.func_180(Local_66.f_0, Local_66.f_2, &(Local_66.f_451), 1) && func_302())
			{
				func_226();
				if (Local_66.f_2.f_12)
				{
					iLocal_51 = 22;
				}
				else
				{
					iLocal_51 = 16;
				}
				iLocal_58 = 5;
			}
			break;
		case 5:
			if (Local_66.f_486 >= 0)
			{
				if (__LIB_20__.func_180(Local_66.f_0, Local_66.f_2, &(Local_66.f_451), 1) && func_302())
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486) && !Local_66.f_467)
					{
						iLocal_51 = 33;
						Local_66.f_467 = 1;
					}
				}
			}
			if (iLocal_53 >= 1 && iLocal_53 < 7)
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::GET_PLAYER_INDEX());
				if (__LIB_37__.func_579(Local_66.f_2, 0, 1, 0, 1, 1) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
				{
					iLocal_58 = 6;
				}
			}
			break;
		case 6:
			if (iLocal_54 != 3 && iLocal_54 != 4)
			{
				iLocal_54 = 4;
			}
			MISC::CLEAR_BIT(&Global_96292, 3);
			if (!PED::IS_PED_RAGDOLL(Local_66.f_2))
			{
				func_7();
				iLocal_58 = 0;
			}
			break;
		case 7:
			if (!PED::IS_PED_RAGDOLL(Local_66.f_2))
			{
				func_221();
				iLocal_51 = 36;
				func_16(1, 0);
				__LIB_6__.func_896(&(Local_66.f_470), 32);
				iLocal_56 = 7;
				iLocal_58 = 8;
			}
			break;
		case 8:
			if (((__LIB_20__.func_180(Local_66.f_0, Local_66.f_2, &(Local_66.f_451), 1) || func_192(Local_66.f_2, &(Local_66.f_451))) && func_302()) && iVar0 != joaat("WEAPON_UNARMED"))
			{
				if (!Local_66.f_2.f_12)
				{
					iLocal_51 = 10;
					iLocal_58 = 9;
				}
				else
				{
					func_19();
					iLocal_51 = 11;
					iLocal_58 = 0;
				}
				Local_66.f_2.f_13 = 0;
			}
			break;
		case 9:
			func_7();
			iLocal_58 = 12;
			break;
		case 10:
			if ((((__LIB_20__.func_180(Local_66.f_0, Local_66.f_2, &(Local_66.f_451), 1) || func_192(Local_66.f_2, &(Local_66.f_451))) && func_302()) && iVar0 != joaat("WEAPON_UNARMED")) && !__LIB_0__.func_736(&(Local_66.f_480)))
			{
				__LIB_18__.func_276(&(Local_66.f_480));
				if (PED::IS_PED_RAGDOLL(Local_66.f_2))
				{
					func_7();
				}
				iLocal_51 = 23;
			}
			else if (func_41(&(Local_66.f_480)) > 10f)
			{
				if (!PED::IS_PED_INJURED(Local_66.f_2))
				{
					TASK::TASK_SMART_FLEE_PED(Local_66.f_2, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
				}
				iLocal_58 = 12;
			}
			break;
		case 11:
			func_220();
			iLocal_58 = 12;
			break;
	}
}

void func_220()//Position - 0xD96D
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_2, false);
	}
}

void func_221()//Position - 0xD98B
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
	{
		TASK::TASK_LOOK_AT_ENTITY(Local_66.f_2, Local_66.f_0, -1, 0, 2);
	}
}

void func_224()//Position - 0xDBCA
{
	var uVar0[2];
	int iVar1;
	int iVar2;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && func_302())
	{
		iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if ((((uVar0[iVar2] != PLAYER::PLAYER_PED_ID() && uVar0[iVar2] != Local_66.f_2) && !PED::IS_PED_INJURED(uVar0[iVar2])) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0[iVar2])) && !PED::IS_PED_IN_COMBAT(uVar0[iVar2], 0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0[iVar2], true, true);
				TASK::TASK_SMART_FLEE_PED(uVar0[iVar2], PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
			}
			iVar2++;
		}
	}
}

void func_225()//Position - 0xDC81
{
	var uVar0[2];
	int iVar1;
	int iVar2;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && func_302())
	{
		iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if ((uVar0[iVar2] != PLAYER::PLAYER_PED_ID() && uVar0[iVar2] != Local_66.f_2) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0[iVar2]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0[iVar2], true, true);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_78);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_78);
				TASK::TASK_COWER(0, 5000);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_78);
				TASK::TASK_PERFORM_SEQUENCE(uVar0[iVar2], iLocal_78);
			}
			iVar2++;
		}
	}
}

void func_226()//Position - 0xDD3C
{
	if (__LIB_1__.func_562(Local_66.f_0) == joaat("WEAPON_RPG"))
	{
		Local_66.f_458 = 1;
	}
	else if (__LIB_1__.func_562(Local_66.f_0) == joaat("WEAPON_KNIFE"))
	{
		Local_66.f_459 = 1;
	}
	else if (((__LIB_1__.func_562(Local_66.f_0) == joaat("WEAPON_HAMMER") || __LIB_1__.func_562(Local_66.f_0) == joaat("WEAPON_CROWBAR")) || __LIB_1__.func_562(Local_66.f_0) == joaat("WEAPON_BAT")) || __LIB_1__.func_562(Local_66.f_0) == joaat("WEAPON_BOTTLE"))
	{
		Local_66.f_460 = 1;
	}
	else if ((__LIB_1__.func_562(Local_66.f_0) == joaat("WEAPON_GRENADE") || __LIB_1__.func_562(Local_66.f_0) == joaat("WEAPON_SMOKEGRENADE")) || __LIB_1__.func_562(Local_66.f_0) == joaat("WEAPON_MOLOTOV"))
	{
		Local_66.f_461 = 1;
	}
	else if (__LIB_1__.func_562(Local_66.f_0) == joaat("WEAPON_STICKYBOMB"))
	{
		Local_66.f_462 = 1;
	}
	iLocal_60 = 12;
	func_203();
	iLocal_59 = 2;
	iLocal_63 = 1;
	iLocal_62 = 6;
	Local_66.f_2.f_13 = 0;
}

void func_227()//Position - 0xDE28
{
	if (iLocal_53 == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
		{
			switch (iLocal_56)
			{
				case 1:
					iLocal_56 = 0;
					break;
				case 2:
					TASK::TASK_PLAY_ANIM(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_17, 8f, -2f, -1, 0, 0f, false, false, false);
					iLocal_56 = 0;
					break;
				case 3:
					TASK::TASK_PLAY_ANIM(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_18, 8f, -4f, -1, 0, 0f, false, false, false);
					iLocal_56 = 0;
					break;
				case 4:
					TASK::TASK_PLAY_ANIM(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_19, 8f, -2f, -1, 0, 0f, false, false, false);
					iLocal_56 = 0;
					break;
				case 5:
					TASK::TASK_PLAY_ANIM(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_20, 8f, -2f, -1, 0, 0f, false, false, false);
					iLocal_56 = 0;
					break;
				case 6:
					iLocal_56 = 0;
					break;
				case 7:
					TASK::TASK_PLAY_ANIM(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_21, 8f, -2f, -1, 0, 0f, false, false, false);
					iLocal_56 = 0;
					break;
				}
			}
	}
}

void func_228()//Position - 0xDF52
{
	switch (iLocal_57)
	{
		case 1:
			func_221();
			iLocal_57 = 2;
			break;
		case 2:
			if (iLocal_53 == 2)
			{
				func_230();
				Local_66.f_2.f_13 = 0;
				iLocal_57 = 3;
			}
			if ((func_45() || func_44()) && !Local_66.f_2.f_13)
			{
				Local_66.f_2.f_13 = 1;
			}
			if (!Local_66.f_2.f_14)
			{
				if (!PED::IS_PED_INJURED(Local_66.f_2) && PED::IS_PED_FLEEING(Local_66.f_2))
				{
					Local_66.f_2.f_14 = 1;
				}
			}
			if ((Local_66.f_2.f_13 && !PED::IS_PED_INJURED(Local_66.f_2)) && !iLocal_58 == 12)
			{
				func_229();
			}
			break;
		case 3:
			if (iLocal_53 >= 7)
			{
				func_221();
				iLocal_57 = 4;
			}
			break;
	}
}

void func_229()//Position - 0xE018
{
	if ((MISC::GET_GAME_TIMER() - Local_66.f_2.f_10) > 5000)
	{
		TASK::CLEAR_SEQUENCE_TASK(&(Local_66.f_2.f_24));
		TASK::OPEN_SEQUENCE_TASK(&(Local_66.f_2.f_24));
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_66.f_0, 0);
		TASK::TASK_LOOK_AT_ENTITY(0, Local_66.f_0, -1, 0, 2);
		TASK::CLOSE_SEQUENCE_TASK(Local_66.f_2.f_24);
		TASK::TASK_PERFORM_SEQUENCE(Local_66.f_2, Local_66.f_2.f_24);
		Local_66.f_2.f_10 = MISC::GET_GAME_TIMER();
	}
}

void func_230()//Position - 0xE079
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
	{
		TASK::TASK_CLEAR_LOOK_AT(Local_66.f_2);
	}
}

int func_231()//Position - 0xE096
{
	if (MISC::IS_BULLET_IN_ANGLED_AREA(Local_66.f_186, Local_66.f_189, Local_66.f_192, true))
	{
		return 1;
	}
	return 0;
}

int func_232()//Position - 0xE0BB
{
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_66.f_186, Local_66.f_189, Local_66.f_192))
	{
		return 1;
	}
	return 0;
}

void func_233()//Position - 0xE0E0
{
	if (!Local_66.f_465)
	{
		if (func_234())
		{
			if (!__LIB_0__.func_736(&(Local_66.f_474)))
			{
				__LIB_18__.func_276(&(Local_66.f_474));
			}
			else if (__LIB_35__.func_235(&(Local_66.f_474), 1f))
			{
				Local_66.f_465 = 1;
				iLocal_51 = 26;
				if (!PED::IS_PED_INJURED(Local_66.f_2))
				{
					TASK::TASK_SMART_FLEE_PED(Local_66.f_2, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
					func_16(1, 0);
				}
			}
		}
		else if (__LIB_0__.func_736(&(Local_66.f_474)))
		{
			__LIB_0__.func_735(&(Local_66.f_474));
		}
	}
}

int func_234()//Position - 0xE166
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
	{
		if (func_235())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Local_66.f_0, &iVar0, true);
			if (iVar0 == joaat("WEAPON_PETROLCAN"))
			{
				if (PED::IS_PED_SHOOTING(Local_66.f_0))
				{
					if (PED::IS_PED_FACING_PED(Local_66.f_2, Local_66.f_0, 180f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_235()//Position - 0xE1B4
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_0, Local_66.f_186, Local_66.f_189, Local_66.f_192, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_236()//Position - 0xE1E8
{
	if (iLocal_58 != 12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
		{
			if (PED::IS_PED_FLEEING(Local_66.f_2))
			{
				TASK::TASK_SMART_FLEE_PED(Local_66.f_2, Local_66.f_0, 100f, -1, false, false);
				iLocal_58 = 12;
				iLocal_57 = 4;
				iLocal_56 = 8;
				iLocal_60 = 15;
				if (iLocal_63 == 1)
				{
					iLocal_63 = 2;
				}
				else
				{
					iLocal_63 = 3;
				}
				iLocal_62 = 13;
				iLocal_51 = 27;
				if (!Local_66.f_2.f_14)
				{
					Local_66.f_2.f_14 = 1;
				}
			}
		}
	}
}

void func_237()//Position - 0xE258
{
	switch (iLocal_55)
	{
		case 1:
			if (Local_66.f_486 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) > 0.876f)
					{
						iLocal_55 = 2;
					}
				}
			}
			break;
		case 2:
			if (Local_66.f_486 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_66.f_486))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) > 0.894f || (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_66.f_486) > 0.871f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_66.f_28, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 1f))
					{
						iLocal_55 = 3;
					}
				}
			}
			break;
		case 3:
			func_16(1, 0);
			func_238(0);
			OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(Local_66.f_28, false, false);
			iLocal_55 = 5;
			break;
		case 4:
			func_16(1, 0);
			func_238(1);
			ENTITY::SET_ENTITY_VISIBLE(Local_66.f_28, false, false);
			iLocal_55 = 5;
			break;
		case 5:
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_66.f_28, PLAYER::PLAYER_PED_ID()))
			{
				__LIB_40__.func_942(__LIB_18__.func_173(), 1, iLocal_81, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(Local_66.f_28, false, false);
				if (HUD::DOES_BLIP_EXIST(Local_66.f_28.f_2))
				{
					HUD::REMOVE_BLIP(&(Local_66.f_28.f_2));
				}
				if (iLocal_60 != 12)
				{
					iLocal_60 = 12;
				}
				__LIB_24__.func_943(297, 0, 0);
				Local_66.f_468 = 1;
				Local_66.f_28.f_6 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
				__LIB_6__.func_892(&(Local_66.f_28.f_15));
				iLocal_55 = 6;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_28, false) && ENTITY::IS_ENTITY_VISIBLE(Local_66.f_28))
			{
			}
			break;
		case 6:
			if (__LIB_7__.func_78(&(Local_66.f_28.f_15)) > 2.5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_28) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_66.f_28, PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
					OBJECT::DELETE_OBJECT(&(Local_66.f_28));
				}
				iLocal_55 = 7;
			}
			break;
	}
}

void func_238(bool bParam0)//Position - 0xE431
{
	Local_66.f_28.f_3 = 0;
	MISC::SET_BIT(&(Local_66.f_28.f_3), 3);
	MISC::SET_BIT(&(Local_66.f_28.f_3), 4);
	if (!bParam0)
	{
		iLocal_81 = MISC::GET_RANDOM_INT_IN_RANGE(Local_66.f_28.f_4, Local_66.f_28.f_5);
		if (!HUD::DOES_BLIP_EXIST(Local_66.f_28.f_2))
		{
			Local_66.f_28.f_2 = __LIB_6__.func_840(Local_66.f_28);
			HUD::SET_BLIP_COLOUR(Local_66.f_28.f_2, 2);
		}
		OBJECT::SET_PICKUP_OBJECT_GLOW_OFFSET(Local_66.f_28, -0.2f, true);
	}
	else
	{
		iLocal_81 = MISC::GET_RANDOM_INT_IN_RANGE(50, Local_66.f_28.f_4);
		Local_66.f_28.f_1 = OBJECT::CREATE_PICKUP(joaat("PICKUP_MONEY_VARIABLE"), ENTITY::GET_ENTITY_COORDS(Local_66.f_28, true), Local_66.f_28.f_3, iLocal_81, true, 0);
		if (!HUD::DOES_BLIP_EXIST(Local_66.f_28.f_2))
		{
			Local_66.f_28.f_2 = __LIB_11__.func_324(Local_66.f_28.f_1);
		}
	}
	Local_66.f_28.f_14 = 1;
}

void func_243()//Position - 0xE601
{
	int iVar0;
	int iVar1;
	if (Local_66.f_464)
	{
		switch (iLocal_59)
		{
			case 2:
				if (__LIB_0__.func_517(Local_66.f_470, 4))
				{
					func_247();
					Local_66.f_46.f_39 = MISC::GET_GAME_TIMER();
					iLocal_59 = 3;
				}
				break;
			case 3:
				if (MISC::GET_GAME_TIMER() - Local_66.f_46.f_39) > MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_66.f_46.f_4[0], false))
					{
						VEHICLE::SET_VEHICLE_SIREN(Local_66.f_46.f_4[0], true);
					}
					iLocal_59 = 4;
				}
				break;
			case 4:
				if (func_246() && func_245())
				{
					iLocal_59 = 5;
				}
				break;
			case 5:
				iLocal_51 = 24;
				func_16(1, 0);
				iLocal_59 = 6;
				break;
			case 6:
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if ((((PED::IS_PED_INJURED(Local_66.f_46[iVar0]) || (!ENTITY::IS_ENTITY_DEAD(Local_66.f_46[iVar0], false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_66.f_46[iVar0], 0, 2))) || PED::IS_PED_INJURED(Local_66.f_2)) || (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_66.f_2, 0, 2))) || __LIB_20__.func_180(Local_66.f_0, Local_66.f_2, &(Local_66.f_451), 1))
					{
						func_16(2, 0);
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!PED::IS_PED_INJURED(Local_66.f_46[iVar1]))
							{
								TASK::TASK_COMBAT_PED(Local_66.f_46[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_46[iVar1], false);
							}
							iVar1++;
						}
						iLocal_59 = 0;
					}
					iVar0++;
				}
				break;
			case 7:
				func_244();
				iLocal_59 = 0;
				break;
			}
	}
}

void func_244()//Position - 0xE7A3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_46[iVar0], false))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_46[iVar0], false);
		}
		iVar0++;
	}
}

int func_245()//Position - 0xE7DB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_46[iVar0], false))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_66.f_46[iVar0], false))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_246()//Position - 0xE81C
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_46[iVar0], false))
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(Local_66.f_46[iVar0]))
				{
					return 1;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_46.f_4[iVar0], false))
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(Local_66.f_46.f_4[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_247()//Position - 0xE890
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_66.f_46[iVar0] = PED::CREATE_PED(6, Local_66.f_46.f_26, Local_66.f_46.f_8[iVar0 /*3*/], Local_66.f_46.f_18[iVar0], true, true);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_66.f_46[iVar0], true, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_46[iVar0], true);
		Local_66.f_46.f_4[iVar0] = VEHICLE::CREATE_VEHICLE(Local_66.f_46.f_27, Local_66.f_46.f_8[iVar0 /*3*/], Local_66.f_46.f_18[iVar0], true, true, false);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_66.f_46.f_4[iVar0], true, false);
		if (!(ENTITY::IS_ENTITY_DEAD(Local_66.f_46[iVar0], false) && ENTITY::IS_ENTITY_DEAD(Local_66.f_46.f_4[iVar0], false)))
		{
			PED::SET_PED_INTO_VEHICLE(Local_66.f_46[iVar0], Local_66.f_46.f_4[iVar0], -1);
			WEAPON::GIVE_WEAPON_TO_PED(Local_66.f_46[iVar0], joaat("WEAPON_PISTOL"), 99, false, true);
		}
		TASK::OPEN_SEQUENCE_TASK(&(Local_66.f_46.f_35[iVar0]));
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_66.f_46.f_4[iVar0], Local_66.f_46.f_22, (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(Local_66.f_46.f_4[iVar0]) - 8f), 1, Local_66.f_46.f_27, 786981, Local_66.f_46.f_25, -1f);
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_66.f_0, -1, false);
		TASK::CLOSE_SEQUENCE_TASK(Local_66.f_46.f_35[iVar0]);
		TASK::TASK_PERFORM_SEQUENCE(Local_66.f_46[iVar0], Local_66.f_46.f_35[iVar0]);
		iVar0++;
	}
}

void func_248()//Position - 0xE9FD
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_66.f_0, &iVar0, true);
	}
	else
	{
		return;
	}
	iVar1 = 0;
	switch (iLocal_60)
	{
		case 1:
			iLocal_60 = 6;
			break;
		case 2:
			iLocal_51 = 2;
			iLocal_60 = 5;
			break;
		case 3:
			iLocal_51 = 3;
			iLocal_60 = 5;
			break;
		case 4:
			iLocal_51 = 4;
			iLocal_60 = 5;
			break;
		case 5:
			if (((((__LIB_1__.func_562(Local_66.f_0) != joaat("WEAPON_UNARMED") && iVar0 != joaat("WEAPON_BAT")) && iVar0 != joaat("WEAPON_HAMMER")) && iVar0 != joaat("WEAPON_CROWBAR")) && iVar0 != joaat("WEAPON_BOTTLE")) && func_302())
			{
				iLocal_60 = 7;
			}
			break;
		case 6:
			if (__LIB_1__.func_562(Local_66.f_0) != joaat("WEAPON_UNARMED") && func_302())
			{
				if (iVar0 == joaat("WEAPON_BAT"))
				{
					iLocal_60 = 8;
				}
				else if ((iVar0 == joaat("WEAPON_CROWBAR") || iVar0 == joaat("WEAPON_HAMMER")) || iVar0 == joaat("WEAPON_BOTTLE"))
				{
					iLocal_60 = 9;
				}
				else if (iVar0 == joaat("WEAPON_STICKYBOMB"))
				{
					iLocal_60 = 10;
				}
				else if ((iVar0 != joaat("WEAPON_PETROLCAN") && iVar0 != joaat("OBJECT")) && iVar0 != joaat("WEAPON_BRIEFCASE"))
				{
					iLocal_60 = 7;
				}
			}
			break;
		case 7:
			iLocal_51 = 5;
			iLocal_56 = 3;
			iLocal_60 = 15;
			break;
		case 8:
			iLocal_51 = 2;
			iLocal_56 = 2;
			iLocal_60 = 5;
			break;
		case 9:
			iLocal_51 = 3;
			iLocal_56 = 2;
			iLocal_60 = 5;
			break;
		case 10:
			iLocal_51 = 4;
			iLocal_56 = 2;
			iLocal_60 = 5;
			break;
		case 11:
			if (__LIB_20__.func_180(Local_66.f_0, Local_66.f_2, &(Local_66.f_451), 1))
			{
				func_226();
				iLocal_58 = 5;
			}
			break;
		case 12:
			if (!func_302())
			{
				if (!Local_66.f_464)
				{
					iLocal_62 = 9;
					iLocal_60 = 15;
				}
				else
				{
					iLocal_60 = 13;
				}
			}
			break;
		case 13:
			if (ENTITY::GET_ENTITY_SPEED(Local_66.f_0) < 0.1f && !func_250())
			{
				func_249();
				iLocal_60 = 14;
			}
			else if (func_250() && !func_302())
			{
				iLocal_60 = 14;
			}
			break;
		case 14:
			if (func_250() && !func_302())
			{
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!PED::IS_PED_INJURED(Local_66.f_46[iVar1]))
					{
						TASK::TASK_COMBAT_PED(Local_66.f_46[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_46[iVar1], false);
					}
					iVar1++;
				}
				iLocal_62 = 9;
				iLocal_60 = 15;
			}
			break;
	}
}

void func_249()//Position - 0xEC8D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_46[iVar0], false))
		{
			if (!TASK::IS_PED_RUNNING_ARREST_TASK(Local_66.f_46[iVar0]))
			{
				TASK::CLEAR_PED_TASKS(Local_66.f_46[iVar0]);
				TASK::TASK_ARREST_PED(Local_66.f_46[iVar0], Local_66.f_0);
			}
		}
		iVar0++;
	}
}

int func_250()//Position - 0xECE2
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_0, Local_66.f_46.f_28, Local_66.f_46.f_31, Local_66.f_46.f_34, false, true, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_251()//Position - 0xED1C
{
	switch (iLocal_63)
	{
		case 0:
			if (!iLocal_93)
			{
				if (func_252())
				{
					iLocal_51 = 9;
					iLocal_58 = 7;
					iLocal_50 = 3;
					iLocal_62 = 13;
					iLocal_63 = 3;
					iLocal_93 = 1;
				}
			}
			break;
		case 1:
			break;
	}
}

int func_252()//Position - 0xED60
{
	int iVar0;
	struct<3> Var1;
	if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_66.f_0, &iVar0, true);
	}
	else
	{
		return 0;
	}
	if (!__LIB_0__.func_517(Local_66.f_470, 128))
	{
		if ((PED::IS_PED_RAGDOLL(Local_66.f_2) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_66.f_2, Local_66.f_0, true) && iVar0 == joaat("WEAPON_UNARMED"))) || __LIB_0__.func_529(Local_66.f_2, Local_66.f_2.f_1, 1) > 1.15f)
		{
			if (PED::IS_PED_RAGDOLL(Local_66.f_2))
			{
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_66.f_2, Local_66.f_0, true) && iVar0 == joaat("WEAPON_UNARMED"))
			{
			}
			if (__LIB_0__.func_529(Local_66.f_2, Local_66.f_2.f_1, 1) > 1.15f)
			{
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_66.f_2, Local_66.f_2.f_1, 0.35f, 0.35f, 1f, false, true, 0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(Local_66.f_2, true) };
				Var1 = { Local_66.f_2.f_1 };
			}
			return 1;
		}
	}
	return 0;
}

void func_254()//Position - 0xEE91
{
	switch (iLocal_61)
	{
		case 0:
			if (func_282())
			{
				iLocal_61 = 1;
			}
			break;
		case 1:
			func_275();
			iLocal_61 = 2;
			break;
		case 2:
			func_271();
			iLocal_61 = 3;
			break;
		case 3:
			if (func_266())
			{
				iLocal_61 = 4;
			}
			break;
		case 4:
			func_255();
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			iLocal_65 = 1;
			break;
	}
}

void func_255()//Position - 0xEEFE
{
	func_259();
	func_258();
	func_257();
	if (INTERIOR::IS_VALID_INTERIOR(Local_66.f_185))
	{
		INTERIOR::RETAIN_ENTITY_IN_INTERIOR(Local_66.f_2, Local_66.f_185);
		INTERIOR::RETAIN_ENTITY_IN_INTERIOR(Local_66.f_28, Local_66.f_185);
		if (!bLocal_86)
		{
			INTERIOR::RETAIN_ENTITY_IN_INTERIOR(Local_66.f_96.f_1, Local_66.f_185);
		}
	}
	func_256();
}

void func_256()//Position - 0xEF51
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
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
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
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar8 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar10 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar13 = MISC::GET_RANDOM_INT_IN_RANGE(1, 9);
	iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar15 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar16 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar17 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar18 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar19 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar20 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar21 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar22 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar23 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar25 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar26 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar27 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar28 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar29 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	if (__LIB_18__.func_173() == 0)
	{
		switch (iVar12)
		{
			case 1:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_1";
				break;
			case 2:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_2";
				break;
			case 3:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_3";
				break;
			case 4:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_4";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_66.f_221.f_220 = "OJSR_COPS_1";
				break;
			case 2:
				Local_66.f_221.f_220 = "OJSR_COPS_2";
				break;
			case 3:
				Local_66.f_221.f_220 = "OJSR_COPS_3";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_1";
				break;
			case 2:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_2";
				break;
		}
	}
	else if (__LIB_18__.func_173() == 1)
	{
		switch (iVar12)
		{
			case 1:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_5";
				break;
			case 2:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_6";
				break;
			case 3:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_7";
				break;
			case 4:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_8";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_66.f_221.f_220 = "OJSR_COPS_5";
				break;
			case 2:
				Local_66.f_221.f_220 = "OJSR_COPS_6";
				break;
			case 3:
				Local_66.f_221.f_220 = "OJSR_COPS_7";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_3";
				break;
			case 2:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_4";
				break;
		}
	}
	else if (__LIB_18__.func_173() == 2)
	{
		switch (iVar12)
		{
			case 1:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_9";
				break;
			case 2:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_10";
				break;
			case 3:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_11";
				break;
			case 4:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_12";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_66.f_221.f_220 = "OJSR_COPS_9";
				break;
			case 2:
				Local_66.f_221.f_220 = "OJSR_COPS_10";
				break;
			case 3:
				Local_66.f_221.f_220 = "OJSR_COPS_11";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_5";
				break;
			case 2:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_6";
				break;
			}
	}
	switch (iVar0)
	{
		case 1:
			Local_66.f_221.f_198 = "OJSR_GREET_1";
			break;
		case 2:
			Local_66.f_221.f_198 = "OJSR_GREET_2";
			break;
		case 3:
			Local_66.f_221.f_198 = "OJSR_GREET_3";
			break;
		case 4:
			Local_66.f_221.f_198 = "OJSR_GREET_4";
			break;
		case 5:
			Local_66.f_221.f_198 = "OJSR_GREET_5";
			break;
		case 6:
			Local_66.f_221.f_198 = "OJSR_GREET_6";
			break;
		case 7:
			Local_66.f_221.f_198 = "OJSR_GREET_7";
			break;
		case 8:
			Local_66.f_221.f_198 = "OJSR_GREET_8";
			break;
		case 9:
			Local_66.f_221.f_198 = "OJSR_GREET_9";
			break;
		case 10:
			Local_66.f_221.f_198 = "OJSR_GREET_10";
			break;
	}
	switch (iVar1)
	{
		case 1:
			Local_66.f_221.f_199 = "OJSR_BATEQ_1";
			break;
		case 2:
			Local_66.f_221.f_199 = "OJSR_BATEQ_2";
			break;
		case 3:
			Local_66.f_221.f_199 = "OJSR_BATEQ_3";
			break;
		case 4:
			Local_66.f_221.f_199 = "OJSR_BATEQ_4";
			break;
	}
	switch (iVar2)
	{
		case 1:
			Local_66.f_221.f_200 = "OJSR_TOOLEQ_1";
			break;
		case 2:
			Local_66.f_221.f_200 = "OJSR_TOOLEQ_2";
			break;
		case 3:
			Local_66.f_221.f_200 = "OJSR_TOOLEQ_3";
			break;
		case 4:
			Local_66.f_221.f_200 = "OJSR_TOOLEQ_4";
			break;
	}
	switch (iVar3)
	{
		case 1:
			Local_66.f_221.f_201 = "OJSR_STICKEQ_1";
			break;
		case 2:
			Local_66.f_221.f_201 = "OJSR_STICKEQ_2";
			break;
	}
	switch (iVar4)
	{
		case 1:
			Local_66.f_221.f_202 = "OJSR_WORRY_1";
			break;
		case 2:
			Local_66.f_221.f_202 = "OJSR_WORRY_2";
			break;
		case 3:
			Local_66.f_221.f_202 = "OJSR_WORRY_3";
			break;
		case 4:
			Local_66.f_221.f_202 = "OJSR_WORRY_4";
			break;
		case 5:
			Local_66.f_221.f_202 = "OJSR_WORRY_5";
			break;
	}
	switch (iVar5)
	{
		case 1:
			Local_66.f_221.f_203 = "OJSR_SHOCK_1";
			break;
		case 2:
			Local_66.f_221.f_203 = "OJSR_SHOCK_2";
			break;
		case 3:
			Local_66.f_221.f_203 = "OJSR_SHOCK_3";
			break;
	}
	switch (iVar6)
	{
		case 1:
			Local_66.f_221.f_204 = "OJSR_STUBBRN_1";
			break;
		case 2:
			Local_66.f_221.f_204 = "OJSR_STUBBRN_2";
			break;
		case 3:
			Local_66.f_221.f_204 = "OJSR_STUBBRN_3";
			break;
		case 4:
			Local_66.f_221.f_204 = "OJSR_STUBBRN_4";
			break;
	}
	switch (iVar7)
	{
		case 1:
			Local_66.f_221.f_205 = "OJSR_COUNTER_1";
			break;
		case 2:
			Local_66.f_221.f_205 = "OJSR_COUNTER_2";
			break;
		case 3:
			Local_66.f_221.f_205 = "OJSR_COUNTER_3";
			break;
	}
	switch (iVar8)
	{
		case 1:
			Local_66.f_221.f_206 = "OJSR_BACKRM_1";
			break;
		case 2:
			Local_66.f_221.f_206 = "OJSR_BACKRM_2";
			break;
		case 3:
			Local_66.f_221.f_206 = "OJSR_BACKRM_3";
			break;
	}
	switch (iVar9)
	{
		case 1:
			Local_66.f_221.f_207 = "OJSR_BUMP_1";
			break;
		case 2:
			Local_66.f_221.f_207 = "OJSR_BUMP_2";
			break;
		case 3:
			Local_66.f_221.f_207 = "OJSR_BUMP_3";
			break;
		case 4:
			Local_66.f_221.f_207 = "OJSR_BUMP_4";
			break;
	}
	switch (iVar10)
	{
		case 1:
			Local_66.f_221.f_208 = "OJSR_BPAIM_1";
			break;
		case 2:
			Local_66.f_221.f_208 = "OJSR_BPAIM_2";
			break;
		case 3:
			Local_66.f_221.f_208 = "OJSR_BPAIM_3";
			break;
		case 4:
			Local_66.f_221.f_208 = "OJSR_BPAIM_4";
			break;
	}
	switch (iVar11)
	{
		case 1:
			Local_66.f_221.f_209 = "OJSR_BPAIMAG_1";
			break;
		case 2:
			Local_66.f_221.f_209 = "OJSR_BPAIMAG_2";
			break;
		case 3:
			Local_66.f_221.f_209 = "OJSR_BPAIMAG_3";
			break;
		case 4:
			Local_66.f_221.f_209 = "OJSR_BPAIMAG_4";
			break;
	}
	switch (iVar13)
	{
		case 1:
			Local_66.f_221.f_211 = "OJSR_SCARED_1";
			break;
		case 2:
			Local_66.f_221.f_211 = "OJSR_SCARED_2";
			break;
		case 3:
			Local_66.f_221.f_211 = "OJSR_SCARED_3";
			break;
		case 4:
			Local_66.f_221.f_211 = "OJSR_SCARED_4";
			break;
		case 5:
			Local_66.f_221.f_211 = "OJSR_SCARED_5";
			break;
		case 6:
			Local_66.f_221.f_211 = "OJSR_SCARED_6";
			break;
		case 7:
			Local_66.f_221.f_211 = "OJSR_SCARED_7";
			break;
		case 8:
			Local_66.f_221.f_211 = "OJSR_SCARED_8";
			break;
	}
	switch (iVar14)
	{
		case 1:
			Local_66.f_221.f_213 = "OJSR_SCARED_9";
			break;
		case 2:
			Local_66.f_221.f_213 = "OJSR_SCARED_10";
			break;
	}
	switch (iVar15)
	{
		case 1:
			Local_66.f_221.f_216 = "OJSR_GRANAIM_1";
			break;
		case 2:
			Local_66.f_221.f_216 = "OJSR_GRANAIM_2";
			break;
		case 3:
			Local_66.f_221.f_216 = "OJSR_GRANAIM_3";
			break;
		case 4:
			Local_66.f_221.f_216 = "OJSR_GRANAIM_4";
			break;
	}
	switch (iVar16)
	{
		case 1:
			Local_66.f_221.f_217 = "OJSR_STICAIM_1";
			break;
		case 2:
			Local_66.f_221.f_217 = "OJSR_STICAIM_2";
			break;
	}
	switch (iVar17)
	{
		case 1:
			Local_66.f_221.f_212 = "OJSR_BRAVE_1";
			break;
		case 2:
			Local_66.f_221.f_212 = "OJSR_BRAVE_2";
			break;
		case 3:
			Local_66.f_221.f_212 = "OJSR_BRAVE_3";
			break;
		case 4:
			Local_66.f_221.f_212 = "OJSR_BRAVE_4";
			break;
		case 5:
			Local_66.f_221.f_212 = "OJSR_BRAVE_5";
			break;
	}
	switch (iVar18)
	{
		case 1:
			Local_66.f_221.f_218 = "OJSR_MOREAIM_1";
			break;
		case 2:
			Local_66.f_221.f_218 = "OJSR_MOREAIM_2";
			break;
		case 3:
			Local_66.f_221.f_218 = "OJSR_MOREAIM_3";
			break;
		case 4:
			Local_66.f_221.f_218 = "OJSR_MOREAIM_4";
			break;
	}
	switch (iVar19)
	{
		case 1:
			Local_66.f_221.f_219 = "OJSR_SURNDER_1";
			break;
		case 2:
			Local_66.f_221.f_219 = "OJSR_SURNDER_2";
			break;
		case 3:
			Local_66.f_221.f_219 = "OJSR_SURNDER_3";
			break;
	}
	switch (iVar21)
	{
		case 1:
			Local_66.f_221.f_221 = "OJSR_POURCAN_1";
			break;
		case 2:
			Local_66.f_221.f_221 = "OJSR_POURCAN_2";
			break;
		case 3:
			Local_66.f_221.f_221 = "OJSR_POURCAN_3";
			break;
	}
	switch (iVar22)
	{
		case 1:
			Local_66.f_221.f_222 = "OJSR_FLEE_1";
			break;
		case 2:
			Local_66.f_221.f_222 = "OJSR_FLEE_2";
			break;
		case 3:
			Local_66.f_221.f_222 = "OJSR_FLEE_3";
			break;
		case 4:
			Local_66.f_221.f_222 = "OJSR_FLEE_4";
			break;
		case 5:
			Local_66.f_221.f_222 = "OJSR_FLEE_5";
			break;
	}
	switch (iVar23)
	{
		case 1:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_1";
			break;
		case 2:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_2";
			break;
		case 3:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_3";
			break;
		case 4:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_4";
			break;
		case 5:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_5";
			break;
	}
	switch (iVar24)
	{
		case 1:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_1";
			break;
		case 2:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_2";
			break;
		case 3:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_3";
			break;
		case 4:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_4";
			break;
		case 5:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_5";
			break;
	}
	switch (iVar25)
	{
		case 1:
			Local_66.f_221.f_225 = "OJSR_CSTMER_1";
			break;
		case 2:
			Local_66.f_221.f_225 = "OJSR_CSTMER_2";
			break;
		case 3:
			Local_66.f_221.f_225 = "OJSR_CSTMER_3";
			break;
		case 4:
			Local_66.f_221.f_225 = "OJSR_CSTMER_4";
			break;
		case 5:
			Local_66.f_221.f_225 = "OJSR_CSTMER_5";
			break;
	}
	switch (iVar26)
	{
		case 1:
			Local_66.f_221.f_226 = "OJSR_MOSC_1";
			break;
		case 2:
			Local_66.f_221.f_226 = "OJSR_MOSC_2";
			break;
		case 3:
			Local_66.f_221.f_226 = "OJSR_MOSC_3";
			break;
	}
	switch (iVar28)
	{
		case 1:
			Local_66.f_221.f_228 = "OJSR_BUY_1";
			break;
		case 2:
			Local_66.f_221.f_228 = "OJSR_BUY_2";
			break;
		case 3:
			Local_66.f_221.f_228 = "OJSR_BUY_3";
			break;
	}
	switch (iVar29)
	{
		case 1:
			Local_66.f_221.f_229 = "OJSR_STEAL_1";
			break;
		case 2:
			Local_66.f_221.f_229 = "OJSR_STEAL_2";
			break;
		case 3:
			Local_66.f_221.f_229 = "OJSR_STEAL_3";
			break;
	}
	Local_66.f_221.f_166 = "OJSRAUD";
	Local_66.f_221.f_167 = "OJSR_GREET";
	Local_66.f_221.f_168 = "OJSR_BATEQ";
	Local_66.f_221.f_169 = "OJSR_TOOLEQ";
	Local_66.f_221.f_170 = "OJSR_STICKEQ";
	Local_66.f_221.f_171 = "OJSR_WORRY";
	Local_66.f_221.f_172 = "OJSR_SHOCK";
	Local_66.f_221.f_173 = "OJSR_STUBBRN";
	Local_66.f_221.f_174 = "OJSR_COUNTER";
	Local_66.f_221.f_175 = "OJSR_BACKRM";
	Local_66.f_221.f_176 = "OJSR_BUMP";
	Local_66.f_221.f_177 = "OJSR_BPAIM";
	Local_66.f_221.f_178 = "OJSR_BPAIMAG";
	Local_66.f_221.f_179 = "OJSR_HOLDUP";
	Local_66.f_221.f_180 = "OJSR_SCARED";
	Local_66.f_221.f_181 = "OJSR_KNIFAIM";
	Local_66.f_221.f_182 = "OJSR_TOOLAIM";
	Local_66.f_221.f_183 = "OJSR_GRANAIM";
	Local_66.f_221.f_184 = "OJSR_STICAIM";
	Local_66.f_221.f_185 = "OJSR_BRAVE";
	Local_66.f_221.f_186 = "OJSR_MOREAIM";
	Local_66.f_221.f_187 = "OJSR_SURNDER";
	Local_66.f_221.f_188 = "OJSR_COPS";
	Local_66.f_221.f_189 = "OJSR_POURCAN";
	Local_66.f_221.f_190 = "OJSR_FLEE";
	Local_66.f_221.f_191 = "OJSR_RECSCAR";
	Local_66.f_221.f_192 = "OJSR_RECAGGR";
	Local_66.f_221.f_193 = "OJSR_CSTMER";
	Local_66.f_221.f_194 = "OJSR_MOSC";
	Local_66.f_221.f_195 = "OJSR_PLRHUR";
	Local_66.f_221.f_196 = "OJSR_BUY";
	Local_66.f_221.f_197 = "OJSR_STEAL";
	iLocal_91 = 0;
	iLocal_92 = 0;
	iLocal_93 = 0;
}

void func_257()//Position - 0xFCDC
{
	ENTITY::CREATE_MODEL_HIDE(Local_66.f_486.f_6, 0.5f, joaat("prop_till_01"), true);
	ENTITY::CREATE_MODEL_HIDE(Local_66.f_486.f_6, 0.5f, joaat("prop_till_02"), true);
	ENTITY::CREATE_MODEL_HIDE(Local_66.f_486.f_6, 0.5f, joaat("prop_till_03"), true);
	Local_66.f_96.f_1 = OBJECT::CREATE_OBJECT(Local_66.f_96, Local_66.f_486.f_6, true, true, false);
	ENTITY::SET_ENTITY_HEADING(Local_66.f_96.f_1, Local_66.f_96.f_5);
	ENTITY::FREEZE_ENTITY_POSITION(Local_66.f_96.f_1, true);
}

void func_258()//Position - 0xFD61
{
	Local_66.f_28 = OBJECT::CREATE_PORTABLE_PICKUP(joaat("PICKUP_PORTABLE_CRATE_UNFIXED"), Local_66.f_28.f_7, false, Local_66.f_28.f_13);
	ENTITY::SET_ENTITY_ROTATION(Local_66.f_28, Local_66.f_28.f_10, 2, true);
	ENTITY::SET_ENTITY_VISIBLE(Local_66.f_28, false, false);
	OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(Local_66.f_28, true, false);
	Local_66.f_28.f_14 = 0;
}

void func_259()//Position - 0xFDB2
{
	int iVar0;
	int iVar1;
	Local_66.f_2 = PED::CREATE_PED(4, Local_66.f_2.f_5, Local_66.f_2.f_1, Local_66.f_2.f_4, true, true);
	func_265(iLocal_80, &iVar1, &iVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_66.f_2, 0, iVar1, iVar0, 0);
	func_264(&iVar1, &iVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_66.f_2, 2, iVar1, iVar0, 0);
	func_263(&iVar1, &iVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_66.f_2, 3, iVar1, iVar0, 0);
	func_262(&iVar1, &iVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_66.f_2, 4, iVar1, iVar0, 0);
	func_261(&iVar1, &iVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_66.f_2, 8, iVar1, iVar0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_2, true);
	if (Local_66.f_2.f_12)
	{
		func_260();
	}
}

void func_260()//Position - 0xFE61
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
	{
	}
}

void func_261(int iParam0, int iParam1)//Position - 0xFE76
{
	*iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	if (*iParam0 == 0)
	{
		*iParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	}
	else
	{
		*iParam1 = 0;
	}
}

void func_262(int iParam0, int iParam1)//Position - 0xFE9E
{
	*iParam0 = 0;
	*iParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
}

void func_263(int iParam0, int iParam1)//Position - 0xFEB3
{
	*iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	*iParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
}

void func_264(int iParam0, int iParam1)//Position - 0xFECD
{
	*iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (*iParam0 > 0)
	{
		*iParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	}
	else
	{
		*iParam1 = 0;
	}
}

void func_265(int iParam0, var uParam1, var uParam2)//Position - 0xFEF5
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam1 = 0;
			*uParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam1 = 2;
			*uParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			break;
	}
}

int func_266()//Position - 0xFFA1
{
	if (!__LIB_39__.func_557(&Local_96))
	{
		return 0;
	}
	if (!bLocal_86)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED(Local_66.f_2.f_15))
		{
			return 0;
		}
	}
	if (!INTERIOR::IS_INTERIOR_READY(Local_66.f_185))
	{
		return 0;
	}
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(false);
	return 1;
}

void func_271()//Position - 0x1016D
{
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	if (!bLocal_86)
	{
		STREAMING::REQUEST_ANIM_DICT(Local_66.f_2.f_15);
		Local_96.f_32 = MISC::GET_FRAME_COUNT();
	}
	__LIB_37__.func_550(&Local_96, Local_66.f_2.f_5);
	__LIB_37__.func_550(&Local_96, Local_66.f_28.f_13);
	__LIB_37__.func_550(&Local_96, Local_66.f_96);
	Local_66.f_466 = 1;
}

void func_275()//Position - 0x1032A
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	func_280(iLocal_80, &(Local_66.f_46.f_8), &(Local_66.f_46.f_18), &(Local_66.f_46.f_22), &(Local_66.f_46.f_25), &(Local_66.f_46.f_26), &(Local_66.f_46.f_27), &(Local_66.f_46.f_28), &(Local_66.f_46.f_31), &(Local_66.f_46.f_34));
	func_278(iLocal_80);
	Var0 = { -3244.5735f, 1000.6578f, 12.83f };
	fVar3 = 175.074f;
	Var1 = { -3242.0078f, 1001.20233f, 11.830711f };
	Var2 = { Var1 - Var0 };
	Var2 = { __LIB_0__.func_298(Var2, fVar3) };
	Var1 = { -3245.0884f, 1001.4681f, 13.650711f };
	Var2 = { Var1 - Var0 };
	Var2 = { __LIB_0__.func_298(Var2, fVar3) };
	Var1 = { -3243.37f, 1000.37f, 12.83f };
	Var2 = { Var1 - Var0 };
	Var2 = { __LIB_0__.func_298(Var2, fVar3) };
	Local_66.f_469 = -1;
	Local_66.f_102.f_22 = -1;
	Local_66.f_96 = joaat("p_till_01_s");
	Local_66.f_96.f_2 = { Local_66.f_486.f_6 };
	Local_66.f_96.f_5 = (Local_66.f_486.f_9.f_2 + 180f);
	Local_66.f_451.f_3 = 0;
	Local_66.f_458 = 0;
	Local_66.f_459 = 0;
	Local_66.f_460 = 0;
	Local_66.f_461 = 0;
	Local_66.f_462 = 0;
	Local_66.f_465 = 0;
	func_277(iLocal_80, &(Local_66.f_2.f_6), &(Local_66.f_2.f_9));
	func_276();
}

void func_276()//Position - 0x10499
{
	Local_66.f_86.f_1 = joaat("A_M_Y_SouCent_04");
	Local_66.f_86.f_2 = { -1224.15f, -907.2f, 12.33f };
	Local_66.f_86.f_5 = 2f;
}

void func_277(int iParam0, var uParam1, var uParam2)//Position - 0x104CA
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -709.7998f, -907.1352f, 18.2156f };
			*uParam2 = 291.6504f;
			break;
		case 1:
			*uParam1 = { -41.8128f, -1749.685f, 28.421f };
			*uParam2 = 214.6526f;
			break;
		case 2:
			*uParam1 = { 1159.6815f, -314.254f, 68.2051f };
			*uParam2 = 232.6337f;
			break;
		case 3:
			*uParam1 = { 1707.3031f, 4918.31f, 41.0636f };
			*uParam2 = 24.9178f;
			break;
		case 4:
			*uParam1 = { -1828.9071f, 799.6096f, 137.1776f };
			*uParam2 = 247.1234f;
			break;
		case 5:
			*uParam1 = { 1168.9711f, 2719.118f, 36.0632f };
			*uParam2 = 136.5945f;
			break;
		case 6:
			*uParam1 = { -2962.983f, 391.9788f, 14.0433f };
			*uParam2 = 176.1174f;
			break;
		case 7:
			*uParam1 = { -1218.2826f, -915.7103f, 10.3264f };
			*uParam2 = 43.8031f;
			break;
		case 8:
			*uParam1 = { 1130.1548f, -979.2816f, 45.4158f };
			*uParam2 = 269.2587f;
			break;
		case 9:
			*uParam1 = { -1479.1631f, -375.0302f, 38.1633f };
			*uParam2 = 36.5415f;
			break;
		case 10:
			*uParam1 = { -3249.1143f, 1006.5576f, 11.8307f };
			*uParam2 = 191.594f;
			break;
		case 11:
			*uParam1 = { -3047.5117f, 588.9807f, 6.9089f };
			*uParam2 = 178.8753f;
			break;
		case 12:
			*uParam1 = { 543.0796f, 2663.9673f, 41.1565f };
			*uParam2 = 228.4295f;
			break;
		case 13:
			*uParam1 = { 2549.85f, 387.1622f, 107.623f };
			*uParam2 = 197.2994f;
			break;
		case 14:
			*uParam1 = { 2671.3508f, 3283.136f, 54.2411f };
			*uParam2 = 296.5427f;
			break;
		case 15:
			*uParam1 = { 1733.967f, 6421.495f, 34.0372f };
			*uParam2 = 130.9518f;
			break;
		case 16:
			*uParam1 = { 1958.9199f, 3746.2673f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
		case 17:
			*uParam1 = { 30.5721f, -1339.7816f, 28.4939f };
			*uParam2 = 110.7699f;
			break;
		case 18:
			*uParam1 = { 376.2976f, 331.8158f, 102.5664f };
			*uParam2 = 52.0064f;
			break;
		case -2:
			*uParam1 = { 1958.9199f, 3746.2673f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
	}
}

void func_278(int iParam0)//Position - 0x107A9
{
	struct<3> Var0;
	Var0 = { func_279(Local_66.f_186, Local_66.f_189) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Local_66.f_185 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, "v_gasstation");
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			Local_66.f_185 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, "v_gen_liquor");
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			Local_66.f_185 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, "v_shop_247");
			break;
	}
}

Vector3 func_279(struct<3> Param0, struct<3> Param1)//Position - 0x10877
{
	struct<3> Var0;
	Var0.f_0 = ((Param0.f_0 + Param1.f_0) / 2f);
	Var0.f_1 = ((Param0.f_1 + Param1.f_1) / 2f);
	Var0.f_2 = ((Param0.f_2 + Param1.f_2) / 2f);
	return Var0;
}

void func_280(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)//Position - 0x108AA
{
	if (!__LIB_10__.func_830(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			*(uParam1[0 /*3*/]) = { -677.0792f, -952.9478f, 20.4712f };
			(*uParam2)[0] = 90.5427f;
			*(uParam1[1 /*3*/]) = { -668.8872f, -961.7076f, 20.6313f };
			(*uParam2)[1] = 90.5427f;
			*(uParam1[2 /*3*/]) = { -749.7003f, -901.2264f, 19.6691f };
			(*uParam2)[2] = 170.7498f;
			*uParam3 = { -715.81f, -930.27f, 18.04f };
			*uParam4 = 8.81f;
			*uParam7 = { -714.079f, -918.088f, 18.196f };
			*uParam8 = { -709.079f, -918.166f, 22.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
		case 1:
			*(uParam1[0 /*3*/]) = { -133.86f, -1764.29f, 29.39f };
			(*uParam2)[0] = 297.87f;
			*(uParam1[1 /*3*/]) = { -63.16f, -1793.14f, 27.23f };
			(*uParam2)[1] = 50.66f;
			*(uParam1[2 /*3*/]) = { -56.5f, -1810.22f, 26.6f };
			(*uParam2)[2] = 50.67f;
			*uParam3 = { -68.92f, -1764.16f, 28.23f };
			*uParam4 = 9f;
			*uParam7 = { -55.922f, -1756.021f, 28.196f };
			*uParam8 = { -52.122f, -1759.271f, 32.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
		case 2:
			*(uParam1[0 /*3*/]) = { 1103.004f, -378.3616f, 66.6258f };
			(*uParam2)[0] = 310.6741f;
			*(uParam1[1 /*3*/]) = { 1186.7031f, -289.3757f, 68.5913f };
			(*uParam2)[1] = 214.1061f;
			*(uParam1[2 /*3*/]) = { 1251.6385f, -371.6591f, 68.7078f };
			(*uParam2)[2] = 164.5987f;
			*uParam3 = { 1161.84f, -339.25f, 67.29f };
			*uParam4 = 9.17f;
			*uParam7 = { 1157.417f, -328.616f, 68.048f };
			*uParam8 = { 1162.351f, -327.81f, 72.048f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
		case 3:
			*(uParam1[0 /*3*/]) = { 1667.82f, 4916.04f, 41.71f };
			(*uParam2)[0] = 346.32f;
			*(uParam1[1 /*3*/]) = { 1710.43f, 4963.03f, 43.92f };
			(*uParam2)[1] = 112.11f;
			*(uParam1[2 /*3*/]) = { 1727.59f, 4986.13f, 46.4f };
			(*uParam2)[2] = 132.27f;
			*uParam3 = { 1692.99f, 4939.56f, 41.16f };
			*uParam4 = 10f;
			*uParam7 = { 1699.338f, 4932.104f, 41.083f };
			*uParam8 = { 1696.313f, 4928.124f, 45.083f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
		case 4:
			*(uParam1[0 /*3*/]) = { -1862.4363f, 732.8416f, 130.8709f };
			(*uParam2)[0] = 301.6958f;
			*(uParam1[1 /*3*/]) = { -1870.9546f, 722.3616f, 129.6428f };
			(*uParam2)[1] = 300.6013f;
			*(uParam1[2 /*3*/]) = { -1711.1029f, 873.6471f, 145.9411f };
			(*uParam2)[2] = 146.5694f;
			*uParam3 = { -1814.22f, 782.55f, 136.57f };
			*uParam4 = 7.24f;
			*uParam7 = { -1823.281f, 785.687f, 137.027f };
			*uParam8 = { -1819.465f, 788.918f, 141.027f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("sheriff");
			break;
		case 5:
			*(uParam1[0 /*3*/]) = { 1127.43f, 2680.61f, 38.02f };
			(*uParam2)[0] = 268.18f;
			*(uParam1[1 /*3*/]) = { 1205.02f, 2687.1f, 37.34f };
			(*uParam2)[1] = 91.37f;
			*(uParam1[2 /*3*/]) = { 1218.17f, 2677.4f, 37.27f };
			(*uParam2)[2] = 88.15f;
			*uParam3 = { 1164.39f, 2683.2f, 37.06f };
			*uParam4 = 8.49f;
			*uParam7 = { 1164.771f, 2702.528f, 38.162f };
			*uParam8 = { 1167.771f, 2702.548f, 41.162f };
			*uParam9 = 3f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("sheriff");
			break;
		case 6:
			*(uParam1[0 /*3*/]) = { -3021.4045f, 236.3884f, 15.6982f };
			(*uParam2)[0] = 354.8025f;
			*(uParam1[1 /*3*/]) = { -3021.883f, 207.4436f, 15.7511f };
			(*uParam2)[1] = 2.3146f;
			*(uParam1[2 /*3*/]) = { -3015.0122f, 640.891f, 21.0514f };
			(*uParam2)[2] = 193.5162f;
			*uParam3 = { -2990.03f, 391.19f, 13.83f };
			*uParam4 = 9.41f;
			*uParam7 = { -2974.55f, 393.338f, 14.037f };
			*uParam8 = { -2975.084f, 388.366f, 18.037f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
		case 7:
			*(uParam1[0 /*3*/]) = { -1270.8063f, -944.262f, 10.8025f };
			(*uParam2)[0] = 17.2662f;
			*(uParam1[1 /*3*/]) = { -1327.7673f, -855.9691f, 16.4331f };
			(*uParam2)[1] = 216.1689f;
			*(uParam1[2 /*3*/]) = { -1155.7985f, -862.4445f, 13.4857f };
			(*uParam2)[2] = 36.347f;
			*uParam3 = { -1233.36f, -891.39f, 11.35f };
			*uParam4 = 5.7f;
			*uParam7 = { -1225.2f, -899.881f, 11.275f };
			*uParam8 = { -1229.293f, -902.753f, 15.275f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
		case 8:
			*(uParam1[0 /*3*/]) = { 1132.0165f, -956.2646f, 47.2548f };
			(*uParam2)[0] = 278.2335f;
			*(uParam1[1 /*3*/]) = { 1121.2181f, -959.5676f, 46.788f };
			(*uParam2)[1] = 289.4738f;
			*(uParam1[2 /*3*/]) = { 1236.9592f, -1153.5865f, 37.1736f };
			(*uParam2)[2] = 27.5191f;
			*uParam3 = { 1154.17f, -979.23f, 45.36f };
			*uParam4 = 6.02f;
			*uParam7 = { 1142.794f, -983.315f, 45.205f };
			*uParam8 = { 1142.519f, -978.322f, 49.205f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
		case 9:
			*(uParam1[0 /*3*/]) = { -1525.77f, -389.17f, 41.39f };
			(*uParam2)[0] = 229.73f;
			*(uParam1[1 /*3*/]) = { -1537.28f, -378.84f, 43.02f };
			(*uParam2)[1] = 226.22f;
			*(uParam1[2 /*3*/]) = { -1475.06f, -418.35f, 35.71f };
			(*uParam2)[2] = 45.71f;
			*uParam3 = { -1502.71f, -400.39f, 38.41f };
			*uParam4 = 7.86f;
			*uParam7 = { -1493.544f, -382.617f, 38.994f };
			*uParam8 = { -1489.947f, -386.09f, 42.994f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
		case 10:
			*(uParam1[0 /*3*/]) = { -3218.9985f, 1105.4094f, 9.9489f };
			(*uParam2)[0] = 175.7402f;
			*(uParam1[1 /*3*/]) = { -3210.8462f, 1114.8745f, 9.8453f };
			(*uParam2)[1] = 152.4543f;
			*(uParam1[2 /*3*/]) = { -3201.5183f, 920.3387f, 13.8887f };
			(*uParam2)[2] = 54.6774f;
			*uParam3 = { -3230.27f, 1003.54f, 11.31f };
			*uParam4 = 5.42f;
			*uParam7 = { -3238.442f, 1001.727f, 11.161f };
			*uParam8 = { -3238.268f, 1006.724f, 15.161f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
		case 11:
			*(uParam1[0 /*3*/]) = { -3061.218f, 658.6545f, 9.6541f };
			(*uParam2)[0] = 216.9221f;
			*(uParam1[1 /*3*/]) = { -3017.391f, 509.7967f, 6.7435f };
			(*uParam2)[1] = 348.3592f;
			*(uParam1[2 /*3*/]) = { -3029.2324f, 521.1291f, 6.975f };
			(*uParam2)[2] = 337.5117f;
			*uParam3 = { -3027.51f, 594.25f, 6.87f };
			*uParam4 = 5.89f;
			*uParam7 = { -3036.615f, 587.625f, 6.818f };
			*uParam8 = { -3038.087f, 592.404f, 10.818f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("sheriff");
			break;
		case 12:
			*(uParam1[0 /*3*/]) = { 523.8614f, 2658.0571f, 42.068f };
			(*uParam2)[0] = 2.8999f;
			*(uParam1[1 /*3*/]) = { 471.6328f, 2657.8347f, 42.9164f };
			(*uParam2)[1] = 329.1264f;
			*(uParam1[2 /*3*/]) = { 656.9346f, 2731.9272f, 41.5306f };
			(*uParam2)[2] = 183.28f;
			*uParam3 = { 545.05f, 2684.96f, 41.3f };
			*uParam4 = 6.77f;
			*uParam7 = { 546.505f, 2674.393f, 41.152f };
			*uParam8 = { 541.547f, 2673.75f, 45.152f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("sheriff");
			break;
		case 13:
			*(uParam1[0 /*3*/]) = { 2593.8406f, 273.2788f, 104.926f };
			(*uParam2)[0] = 345.1121f;
			*(uParam1[1 /*3*/]) = { 2595.69f, 262.9971f, 104.2577f };
			(*uParam2)[1] = 350.3949f;
			*(uParam1[2 /*3*/]) = { 2591.545f, 256.5517f, 103.7544f };
			(*uParam2)[2] = 343.9362f;
			*uParam3 = { 2575.75f, 385.11f, 107.46f };
			*uParam4 = 11.61f;
			*uParam7 = { 2560.435f, 382.891f, 107.626f };
			*uParam8 = { 2560.67f, 387.886f, 111.626f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("sheriff");
			break;
		case 14:
			*(uParam1[0 /*3*/]) = { 2672.64f, 3259.44f, 54.87f };
			(*uParam2)[0] = 324.3f;
			*(uParam1[1 /*3*/]) = { 2703.37f, 3294.47f, 55.31f };
			(*uParam2)[1] = 152.87f;
			*(uParam1[2 /*3*/]) = { 2699.45f, 3299.76f, 55.35f };
			(*uParam2)[2] = 152.55f;
			*uParam3 = { 2691.41f, 3275.22f, 54.24f };
			*uParam4 = 7.56f;
			*uParam7 = { 2681.77f, 3279.805f, 54.245f };
			*uParam8 = { 2684.297f, 3284.12f, 58.245f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("sheriff");
			break;
		case 15:
			*(uParam1[0 /*3*/]) = { 1740.0348f, 6378.2017f, 35.0341f };
			(*uParam2)[0] = 81.6255f;
			*(uParam1[1 /*3*/]) = { 1755.7858f, 6375.0464f, 36.2501f };
			(*uParam2)[1] = 76.057f;
			*(uParam1[2 /*3*/]) = { 1752.8389f, 6367.3438f, 36.135f };
			(*uParam2)[2] = 75.9713f;
			*uParam3 = { 1725.56f, 6400.85f, 33.42f };
			*uParam4 = 7.09f;
			*uParam7 = { 1728.266f, 6411.254f, 34.006f };
			*uParam8 = { 1732.739f, 6409.022f, 38.006f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("sheriff");
			break;
		case 16:
			*(uParam1[0 /*3*/]) = { 1942.1416f, 3738.897f, 31.9693f };
			(*uParam2)[0] = 210.3384f;
			*(uParam1[1 /*3*/]) = { 2024.8911f, 3780.5884f, 31.9156f };
			(*uParam2)[1] = 210.1552f;
			*(uParam1[2 /*3*/]) = { 1879.6309f, 3673.2915f, 33.1966f };
			(*uParam2)[2] = 302.2257f;
			*uParam3 = { 1968.55f, 3731.03f, 31.36f };
			*uParam4 = 6.12f;
			*uParam7 = { 1963.491f, 3738.337f, 31.324f };
			*uParam8 = { 1967.792f, 3740.886f, 35.324f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
		case 17:
			*(uParam1[0 /*3*/]) = { 73.57f, -1359.63f, 28.96f };
			(*uParam2)[0] = 93.85f;
			*(uParam1[1 /*3*/]) = { 77.26f, -1364.69f, 28.97f };
			(*uParam2)[1] = 88.25f;
			*(uParam1[2 /*3*/]) = { -17.95f, -1366.03f, 28.97f };
			(*uParam2)[2] = 267.29f;
			*uParam3 = { 30.98f, -1362.09f, 28.33f };
			*uParam4 = 6f;
			*uParam7 = { 27.296f, -1350.255f, 28.332325f };
			*uParam8 = { 30.795f, -1350.308f, 30.820192f };
			*uParam9 = 3f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
		case 18:
			*(uParam1[0 /*3*/]) = { 424.9115f, 314.1133f, 102.622f };
			(*uParam2)[0] = 155.4277f;
			*(uParam1[1 /*3*/]) = { 439.6049f, 292.7892f, 102.5935f };
			(*uParam2)[1] = 74.6758f;
			*(uParam1[2 /*3*/]) = { 275.961f, 331.2577f, 105.1467f };
			(*uParam2)[2] = 250.7508f;
			*uParam3 = { 372.79f, 313f, 102.47f };
			*uParam4 = 3.94f;
			*uParam7 = { 373.907f, 322.739f, 102.439f };
			*uParam8 = { 378.778f, 321.61f, 106.439f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("S_M_Y_Cop_01");
			*uParam6 = joaat("police");
			break;
	}
}

int func_282()//Position - 0x11741
{
	struct<3> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_66.f_0, true) };
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_66.f_181, true) < 50f)
		{
			return 1;
		}
	}
	return 0;
}

void func_283()//Position - 0x1177C
{
	if (Local_66.f_46.f_26 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_66.f_46.f_26);
	}
	if (Local_66.f_46.f_27 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_66.f_46.f_27);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_66.f_2.f_15))
	{
		STREAMING::REMOVE_ANIM_DICT(Local_66.f_2.f_15);
	}
}

int func_284()//Position - 0x117C4
{
	if (Global_113386.f_9085)
	{
		if (!__LIB_0__.func_368(56))
		{
			return 1;
		}
	}
	if (func_287())
	{
		return 1;
	}
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		return 1;
	}
	if (__LIB_0__.func_569() && !__LIB_0__.func_568())
	{
		return 1;
	}
	if (__LIB_11__.func_914() && __LIB_30__.func_874())
	{
		return 1;
	}
	if (Global_31962)
	{
		HUD::CLEAR_HELP(true);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	return 0;
}

int func_287()//Position - 0x11857
{
	struct<3> Var0;
	float fVar1;
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_66.f_0, true) };
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_66.f_181, true);
		if (fVar1 > Local_66.f_184)
		{
			return 1;
		}
	}
	return 0;
}

int func_292()//Position - 0x11A25
{
	int iVar0;
	if (Local_66.f_1 != Global_113386.f_20035.f_62[iLocal_80])
	{
		return 1;
	}
	iVar0 = (CLOCK::GET_CLOCK_DAY_OF_MONTH() - Global_113386.f_20035.f_42[iLocal_80]);
	iLocal_85 = 2;
	if (iVar0 < 0)
	{
		iVar0 = CLOCK::GET_CLOCK_DAY_OF_MONTH() + 31;
		iVar0 = (iVar0 - Global_113386.f_20035.f_42[iLocal_80]);
	}
	if (iVar0 < iLocal_85)
	{
		return 0;
	}
	return 1;
}

int func_295(int iParam0, float fParam1, var uParam2, var uParam3)//Position - 0x11AB1
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(__LIB_20__.func_506(iParam0), fParam1, 5.95155f, -8.251f, -0.2377f) };
			*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(__LIB_20__.func_506(iParam0), fParam1, -12.7268f, 7.21174f, 2.93854f) };
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(__LIB_20__.func_506(iParam0), fParam1, -6.52428f, -8.8002f, -0.657398f) };
			*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(__LIB_20__.func_506(iParam0), fParam1, 3.54253f, 16.8382f, 3.20474f) };
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(__LIB_20__.func_506(iParam0), fParam1, -4.55363f, -7.52366f, -0.75f) };
			*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(__LIB_20__.func_506(iParam0), fParam1, 11.8868f, 7.00122f, 3.9688f) };
			break;
	}
	return 1;
}

int func_297()//Position - 0x11DE0
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = (CLOCK::GET_CLOCK_HOURS() - Global_113386.f_20035.f_21[iLocal_80]);
	iVar1 = (CLOCK::GET_CLOCK_DAY_OF_MONTH() - Global_113386.f_20035.f_42[iLocal_80]);
	iLocal_84 = 2;
	if (iVar0 < 0)
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS() + 24;
		iVar0 = (iVar0 - Global_113386.f_20035.f_21[iLocal_80]);
		iVar2 = 1;
	}
	if ((iVar0 < iLocal_84 && iVar1 == 0) || (iVar0 < iLocal_84 && iVar2))
	{
		return 1;
	}
	return 0;
}

void func_298(bool bParam0)//Position - 0x11E67
{
	int iVar0;
	var uVar1[2];
	var uVar2[2];
	struct<3> Var3[2];
	func_299(iLocal_80, &uVar1, &uVar2, &Var3);
	if (!__LIB_0__.func_517(Local_66.f_470, 64))
	{
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uVar1[iVar0]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(uVar1[0], uVar2[0], Var3[0 /*3*/], false, false, false);
			if (uVar1[1] != -1)
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(uVar1[1], uVar2[1], Var3[1 /*3*/], false, false, false);
			}
		}
		__LIB_6__.func_896(&(Local_66.f_470), 64);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uVar1[iVar0]))
		{
			if (bParam0)
			{
				if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(uVar1[iVar0]) != 1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uVar1[iVar0], 1, false, false);
				}
			}
			else if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(uVar1[iVar0]) != 0)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uVar1[iVar0], 0, false, false);
			}
		}
		iVar0++;
	}
}

void func_299(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x11F52
{
	switch (iParam0)
	{
		case 0:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_2A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -713.07f, -916.54f, 19.37f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_2B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -710.47f, -916.54f, 19.37f };
			break;
		case 1:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_3A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -53.96f, -1755.72f, 29.57f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_3B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -51.97f, -1757.39f, 29.57f };
			break;
		case 2:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_4A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1158.36f, -326.82f, 69.36f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_4B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1160.93f, -326.36f, 69.36f };
			break;
		case 3:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_1A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1699.66f, 4930.28f, 42.21f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_1B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1698.17f, 4928.15f, 42.21f };
			break;
		case 4:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_5A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -1823.28f, 787.37f, 138.36f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_5B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -1821.37f, 789.13f, 138.31f };
			break;
		case 5:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_1A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { 1167.13f, 2703.75f, 38.3f };
			(*uParam1)[1] = -1;
			break;
		case 6:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_2A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -2973.53f, 390.14f, 15.19f };
			(*uParam1)[1] = -1;
			break;
		case 7:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_3A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -1226.89f, -903.12f, 12.47f };
			(*uParam1)[1] = -1;
			break;
		case 8:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_4A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { 1141.04f, -980.32f, 46.56f };
			(*uParam1)[1] = -1;
			break;
		case 9:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_5A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -1490.41f, -383.85f, 40.31f };
			(*uParam1)[1] = -1;
			break;
		case 10:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_3A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3240.13f, 1003.16f, 12.98f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_3B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3239.9f, 1005.75f, 12.98f };
			break;
		case 11:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_2A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3038.22f, 588.29f, 8.06f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_2B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3039.01f, 590.76f, 8.06f };
			break;
		case 12:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_4A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 545.5f, 2672.75f, 42.31f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_4B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 542.93f, 2672.41f, 42.31f };
			break;
		case 13:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_5A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2559.2f, 384.09f, 108.77f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_5B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2559.3f, 386.69f, 108.77f };
			break;
		case 14:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_6A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2681.29f, 3281.43f, 55.39f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_6B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2682.56f, 3283.7f, 55.39f };
			break;
		case 15:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_7A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1730.03f, 6412.07f, 35.19f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_7B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1732.36f, 6410.92f, 35.19f };
			break;
		case 16:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_8A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1963.92f, 3740.08f, 32.49f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_8B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1966.17f, 3741.38f, 32.49f };
			break;
		case 17:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_9A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 27.82f, -1349.17f, 29.65f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_9B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 30.42f, -1349.17f, 29.65f };
			break;
		case 18:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_10A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 375.35f, 323.8f, 103.72f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_10B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 377.88f, 323.17f, 103.72f };
			break;
	}
}

int func_302()//Position - 0x1261C
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_0, false))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_0, Local_66.f_186, Local_66.f_189, Local_66.f_192, false, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_0, Local_66.f_200, Local_66.f_203, Local_66.f_206, false, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_0, Local_66.f_207, Local_66.f_210, Local_66.f_213, false, true, 0))
		{
			return 1;
		}
		else if (Local_66.f_199 != -1f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_66.f_0, Local_66.f_193, Local_66.f_196, Local_66.f_199, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_306(var uParam0)//Position - 0x12746
{
	iLocal_65 = 0;
	iLocal_63 = 0;
	iLocal_61 = 0;
	iLocal_62 = 0;
	iLocal_60 = 0;
	iLocal_59 = 1;
	iLocal_55 = 0;
	iLocal_58 = 1;
	iLocal_57 = 0;
	iLocal_54 = 0;
	iLocal_53 = 0;
	iLocal_51 = 0;
	iLocal_50 = 0;
	Local_66.f_0 = PLAYER::PLAYER_PED_ID();
	func_314(&(uParam0->f_1[0 /*3*/]), &(Local_66.f_181), &iLocal_80);
	if ((((((((iLocal_80 == 10 || iLocal_80 == 11) || iLocal_80 == 12) || iLocal_80 == 13) || iLocal_80 == 14) || iLocal_80 == 15) || iLocal_80 == 16) || iLocal_80 == 17) || iLocal_80 == 18)
	{
		bLocal_94 = true;
	}
	Local_66.f_184 = 150f;
	Local_66.f_2.f_15 = "random@shop_robbery_reactions@";
	Local_66.f_2.f_16 = "absolutely";
	Local_66.f_2.f_17 = "is_this_it";
	Local_66.f_2.f_18 = "shock";
	Local_66.f_2.f_19 = "anger_a";
	Local_66.f_2.f_20 = "screw_you";
	Local_66.f_2.f_21 = "but_why";
	Local_66.f_486.f_1 = "mp_am_hold_up";
	Local_66.f_486.f_2 = "guard_handsup_loop";
	Local_66.f_486.f_3 = "holdup_victim_20s";
	Local_66.f_486.f_4 = "holdup_victim_20s_bag";
	Local_66.f_486.f_5 = "holdup_victim_20s_till";
	iLocal_82 = func_313();
	if (!bLocal_86)
	{
		func_309();
	}
	iLocal_87 = 0;
	if (iLocal_80 != 7)
	{
		iLocal_52 = 6;
	}
	else
	{
		iLocal_52 = 0;
	}
	if (__LIB_18__.func_173() == 0)
	{
		Local_66.f_1 = 0;
	}
	else if (__LIB_18__.func_173() == 1)
	{
		Local_66.f_1 = 1;
	}
	else if (__LIB_18__.func_173() == 2)
	{
		Local_66.f_1 = 2;
	}
	func_308(iLocal_80, &(Local_66.f_186), &(Local_66.f_189), &(Local_66.f_192), &(Local_66.f_193), &(Local_66.f_196), &(Local_66.f_199), &(Local_66.f_200), &(Local_66.f_203), &(Local_66.f_206), &(Local_66.f_207), &(Local_66.f_210), &(Local_66.f_213), &(Local_66.f_214), &(Local_66.f_217), &(Local_66.f_220), &(Local_66.f_102.f_6), &(Local_66.f_102.f_9));
	func_307(iLocal_80, &(Local_66.f_486.f_6), &(Local_66.f_486.f_9), &(Local_66.f_2.f_1), &(Local_66.f_2.f_4), &(Local_66.f_2.f_5), &(Local_66.f_28.f_7), &(Local_66.f_28.f_10), &(Local_66.f_28.f_13), &(Local_66.f_28.f_4), &(Local_66.f_28.f_5), &(Local_66.f_102.f_21));
}

void func_307(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)//Position - 0x12975
{
	switch (iParam0)
	{
		case 0:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -706.6382f, -913.68866f, 19.21f };
			*uParam2 = { 0f, 0f, -89.999f };
			break;
		case 1:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -47.19871f, -1757.67f, 29.42f };
			*uParam2 = { 0f, 0f, -130f };
			break;
		case 2:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1164.21f, -322.89f, 69.2f };
			*uParam2 = { 0f, 0f, -80f };
			break;
		case 3:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1698.3065f, 4923.3706f, 42.06f };
			*uParam2 = { 0f, 0f, 145f };
			break;
		case 4:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1820.4653f, 793.8166f, 138.09f };
			*uParam2 = { 0f, 0f, -47.53f };
			break;
		case 5:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1165.9581f, 2710.201f, 38.14286f };
			*uParam2 = { 0f, 0f, -1.15f };
			break;
		case 6:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -2967.0269f, 390.9038f, 15.02f };
			*uParam2 = { 0f, 0f, -94.76f };
			break;
		case 7:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1222.3306f, -907.82336f, 12.31f };
			*uParam2 = { 0f, 0f, -147.297f };
			break;
		case 8:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1134.8114f, -982.36145f, 46.4f };
			*uParam2 = { 0f, 0f, 96.68562f };
			break;
		case 9:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1486.6729f, -378.4638f, 40.15f };
			*uParam2 = { 0f, 0f, -46.229f };
			break;
		case 10:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3244.5735f, 1000.6578f, 12.83f };
			*uParam2 = { 0f, 0f, 175.074f };
			break;
		case 11:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3041.3567f, 584.26654f, 7.9f };
			*uParam2 = { 0f, 0f, -162.241f };
			break;
		case 12:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 548.9015f, 2668.9414f, 42.15f };
			*uParam2 = { 0f, 0f, -82.5f };
			break;
		case 13:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2554.875f, 381.38574f, 108.62f };
			*uParam2 = { 0f, 0f, 177.716f };
			break;
		case 14:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2676.2124f, 3280.9695f, 55.24f };
			*uParam2 = { 0f, 0f, 150.87f };
			break;
		case 15:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1729.3295f, 6417.123f, 35.03f };
			*uParam2 = { 0f, 0f, 63.641f };
			break;
		case 16:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1959.323f, 3742.2896f, 32.34f };
			*uParam2 = { 0f, 0f, 120f };
			break;
		case 17:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 24.94562f, -1344.9545f, 29.49f };
			*uParam2 = { 0f, 0f, 90f };
			break;
		case 18:
			*uParam5 = joaat("MP_M_ShopKeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 373.5954f, 328.5892f, 103.56f };
			*uParam2 = { 0f, 0f, 75.885f };
			break;
	}
	*uParam9 = 220;
	*uParam10 = 787;
	*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, uParam2->f_2, -0.668213f, 0.85762f, 0.0181999f) };
	*uParam4 = (180f + uParam2->f_2);
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.088f), -0.428174f) };
			*uParam11 = 3;
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.033f), -0.398174f) };
			*uParam11 = 2;
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.077f), -0.378174f) };
			*uParam11 = 3;
			break;
	}
	*uParam7 = { 5f, 0f, uParam2->f_2 };
}

Vector3 func_308(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)//Position - 0x12ED7
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -711.81f, -916.36f, 18.22f };
			*uParam2 = { -711.74f, -908.75f, 21.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -705.76f, -908.76f, 18.22f };
			*uParam5 = { -705.8f, -903.16f, 21.24f };
			*uParam6 = 2.32f;
			*uParam7 = { -709.02f, -907.72f, 18.22f };
			*uParam8 = { -708.96f, -903.15f, 21.25f };
			*uParam9 = 3.66f;
			*uParam10 = { -707.05f, -907.18f, 18.23f };
			*uParam11 = { -707.04f, -905.9f, 20.51f };
			*uParam12 = 0.75f;
			*uParam13 = { -704.528f, -913.948f, 18f };
			*uParam14 = { -706.528f, -913.948f, 22.221f };
			*uParam15 = 4f;
			*uParam16 = { -711.2905f, -913.79193f, 19.115599f };
			*uParam17 = 1.05f;
			break;
		case 1:
			*uParam1 = { -52.86f, -1756.43f, 28.42f };
			*uParam2 = { -47.94f, -1750.6f, 31.93f };
			*uParam3 = 13.92f;
			*uParam4 = { -43.36f, -1754.47f, 28.44f };
			*uParam5 = { -39.78f, -1750.15f, 31.46f };
			*uParam6 = 2.32f;
			*uParam7 = { -45.14f, -1751.51f, 28.43f };
			*uParam8 = { -42.23f, -1748.08f, 31.48f };
			*uParam9 = 3.66f;
			*uParam10 = { -43.3f, -1752.4f, 28.48f };
			*uParam11 = { -42.5f, -1751.44f, 30.71f };
			*uParam12 = 0.75f;
			*uParam13 = { -45.231945f, -1756.996f, 28.421005f };
			*uParam14 = { -47.68424f, -1759.9425f, 31.921005f };
			*uParam15 = 1.8f;
			*uParam16 = { -50.83334f, -1754.8269f, 29.321005f };
			*uParam17 = 1.05f;
			break;
		case 2:
			*uParam1 = { 1159.64f, -326.47f, 68.21f };
			*uParam2 = { 1158.33f, -318.91f, 71.71f };
			*uParam3 = 13.92f;
			*uParam4 = { 1164.22f, -317.89f, 68.21f };
			*uParam5 = { 1163.26f, -312.51f, 71.2f };
			*uParam6 = 2.32f;
			*uParam7 = { 1160.91f, -317.34f, 68.21f };
			*uParam8 = { 1160.11f, -313.19f, 71.13f };
			*uParam9 = 3.66f;
			*uParam10 = { 1162.68f, -316.51f, 68.23f };
			*uParam11 = { 1162.46f, -315.28f, 70.49f };
			*uParam12 = 0.75f;
			*uParam13 = { 1164.222f, -323.349f, 68.21f };
			*uParam14 = { 1166.191f, -323.001f, 72.21f };
			*uParam15 = 4f;
			*uParam16 = { 1159.639f, -323.76865f, 69.1051f };
			*uParam17 = 1.05f;
			break;
		case 3:
			*uParam1 = { 1699.09f, 4929.01f, 41.06f };
			*uParam2 = { 1705.3f, 4924.67f, 44.58f };
			*uParam3 = 13.92f;
			*uParam4 = { 1701.85f, 4919.78f, 41.06f };
			*uParam5 = { 1706.43f, 4916.54f, 44.1f };
			*uParam6 = 2.32f;
			*uParam7 = { 1704.57f, 4921.8f, 41.06f };
			*uParam8 = { 1708.29f, 4919.18f, 44.1f };
			*uParam9 = 3.66f;
			*uParam10 = { 1703.9f, 4919.88f, 41.09f };
			*uParam11 = { 1704.92f, 4919.15f, 43.36f };
			*uParam12 = 0.75f;
			*uParam13 = { 1698.032f, 4923.538f, 41.069f };
			*uParam14 = { 1696.99f, 4921.831f, 45.069f };
			*uParam15 = 4f;
			*uParam16 = { 1700.8557f, 4927.15f, 41.963657f };
			*uParam17 = 1.05f;
			break;
		case 4:
			*uParam1 = { -1822.46f, 788.35f, 137.19f };
			*uParam2 = { -1827.54f, 794.02f, 140.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -1823.17f, 798.02f, 137.1f };
			*uParam5 = { -1826.81f, 802.05f, 140.12f };
			*uParam6 = 2.32f;
			*uParam7 = { -1826.25f, 796.63f, 137.16f };
			*uParam8 = { -1829.17f, 799.88f, 140.16f };
			*uParam9 = 3.66f;
			*uParam10 = { -1825.16f, 798.33f, 137.13f };
			*uParam11 = { -1826f, 799.31f, 139.43f };
			*uParam12 = 0.75f;
			*uParam13 = { -1820.332f, 793.679f, 137.084f };
			*uParam14 = { -1818.891f, 795.067f, 141.084f };
			*uParam15 = 4f;
			*uParam16 = { -1823.8411f, 790.7311f, 138.08641f };
			*uParam17 = 1.05f;
			break;
		case 5:
			*uParam1 = { 1170.182f, 2708.049f, 37.6f };
			*uParam2 = { 1162.385f, 2708.255f, 40.6f };
			*uParam3 = 8.8f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1170.399f, 2716.422f, 37f };
			*uParam8 = { 1162.601f, 2716.628f, 41.19f };
			*uParam9 = 9f;
			*uParam10 = { 1170.7f, 2712.368f, 37.7f };
			*uParam11 = { 1168.3f, 2712.431f, 40.73f };
			*uParam12 = 1.5f;
			*uParam13 = { 1165.149f, 2712.433f, 37.138f };
			*uParam14 = { 1165.132f, 2710.033f, 41.138f };
			*uParam15 = 5f;
			*uParam16 = { 1165.9458f, 2709.1365f, 37.96316f };
			*uParam17 = 1f;
			break;
		case 6:
			*uParam1 = { -2973.31f, 390.75f, 14.04f };
			*uParam2 = { -2964.67f, 390.23f, 17.65f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -2956.98f, 389.73f, 13.21f };
			*uParam8 = { -2964.11f, 390.19f, 17.65f };
			*uParam9 = 7.5f;
			*uParam10 = { -2964.86f, 388.43f, 14.05f };
			*uParam11 = { -2964.98f, 386.49f, 17.63f };
			*uParam12 = 1.72f;
			*uParam13 = { -2964.645f, 391.391f, 14.048f };
			*uParam14 = { -2966.636f, 391.577f, 18.048f };
			*uParam15 = 4.5f;
			*uParam16 = { -2967.9062f, 391.04236f, 14.943308f };
			*uParam17 = 1f;
			break;
		case 7:
			*uParam1 = { -1226.29f, -902.84f, 11.33f };
			*uParam2 = { -1221.4f, -910.16f, 14.93f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1217.01f, -916.41f, 10.47f };
			*uParam8 = { -1221.13f, -910.58f, 14.89f };
			*uParam9 = 7.5f;
			*uParam10 = { -1222.99f, -911.03f, 11.33f };
			*uParam11 = { -1224.59f, -912.13f, 14.93f };
			*uParam12 = 1.72f;
			*uParam13 = { -1220.512f, -909.343f, 11.331f };
			*uParam14 = { -1221.766f, -907.785f, 15.331f };
			*uParam15 = 4.5f;
			*uParam16 = { -1222.6865f, -907.0001f, 12.226351f };
			*uParam17 = 1.15f;
			break;
		case 8:
			*uParam1 = { 1141f, -980.98f, 45.42f };
			*uParam2 = { 1132.3f, -982.16f, 48.99f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1124.73f, -983.22f, 44.57f };
			*uParam8 = { 1131.81f, -982.24f, 48.99f };
			*uParam9 = 7.5f;
			*uParam10 = { 1132.21f, -980.35f, 45.42f };
			*uParam11 = { 1131.91f, -978.44f, 49.02f };
			*uParam12 = 1.72f;
			*uParam13 = { 1132.764f, -983.742f, 45.42f };
			*uParam14 = { 1134.692f, -983.21f, 49.42f };
			*uParam15 = 4.5f;
			*uParam16 = { 1135.6508f, -982.4113f, 46.315826f };
			*uParam17 = 1.05f;
			break;
		case 9:
			*uParam1 = { -1490.78f, -383.33f, 39.16f };
			*uParam2 = { -1484.56f, -377.1f, 42.74f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1479.17f, -371.69f, 38.33f };
			*uParam8 = { -1484.2f, -376.75f, 42.73f };
			*uParam9 = 7.5f;
			*uParam10 = { -1483.39f, -378.48f, 39.17f };
			*uParam11 = { -1482.01f, -379.86f, 42.77f };
			*uParam12 = 1.72f;
			*uParam13 = { -1485.5f, -376.545f, 39.167f };
			*uParam14 = { -1486.889f, -377.985f, 43.167f };
			*uParam15 = 4.5f;
			*uParam16 = { -1487.3063f, -378.92197f, 39.813408f };
			*uParam17 = 1.05f;
			break;
		case 10:
			*uParam1 = { -3240.12f, 1004.46f, 11.84f };
			*uParam2 = { -3247.19f, 1005.06f, 15.36f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3249.75f, 999.74f, 11.83f };
			*uParam8 = { -3249.05f, 1007.41f, 15.2f };
			*uParam9 = 3.66f;
			*uParam10 = { -3247.71f, 1000.33f, 11.83f };
			*uParam11 = { -3247.59f, 1001.62f, 14.13f };
			*uParam12 = 0.75f;
			*uParam13 = { -3242.573f, 999.168f, 11.835f };
			*uParam14 = { -3242.482f, 1000.365f, 15.835f };
			*uParam15 = 4.2f;
			*uParam16 = { -3241.8716f, 1006.5397f, 12.730711f };
			*uParam17 = 1f;
			break;
		case 11:
			*uParam1 = { -3038.7f, 589.51f, 6.92f };
			*uParam2 = { -3045.47f, 587.31f, 10.45f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3045.77f, 581.47f, 6.91f };
			*uParam8 = { -3048.23f, 589.1f, 10.43f };
			*uParam9 = 3.66f;
			*uParam10 = { -3044.12f, 582.75f, 6.9f };
			*uParam11 = { -3044.51f, 583.99f, 9.21f };
			*uParam12 = 0.75f;
			*uParam13 = { -3039.04f, 583.639f, 6.914f };
			*uParam14 = { -3039.453f, 584.766f, 10.914f };
			*uParam15 = 4.2f;
			*uParam16 = { -3041.1804f, 590.7718f, 7.808933f };
			*uParam17 = 1f;
			break;
		case 12:
			*uParam1 = { 544.21f, 2672.5f, 41.16f };
			*uParam2 = { 545.16f, 2665.44f, 44.68f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 550.96f, 2664.13f, 41.16f };
			*uParam8 = { 542.86f, 2663.05f, 44.69f };
			*uParam9 = 3.66f;
			*uParam10 = { 549.89f, 2665.96f, 41.17f };
			*uParam11 = { 548.61f, 2665.78f, 43.46f };
			*uParam12 = 0.75f;
			*uParam13 = { 549.913f, 2671.202f, 41.161f };
			*uParam14 = { 548.726f, 2671.024f, 45.161f };
			*uParam15 = 4.2f;
			*uParam16 = { 542.5831f, 2670.376f, 42.056515f };
			*uParam17 = 1f;
			break;
		case 13:
			*uParam1 = { 2559.12f, 385.39f, 107.62f };
			*uParam2 = { 2552.06f, 385.68f, 111.17f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam10 = { 2551.76f, 380.95f, 107.65f };
			*uParam11 = { 2551.82f, 382.21f, 109.92f };
			*uParam12 = 0.75f;
			*uParam13 = { 2556.854f, 379.973f, 107.627f };
			*uParam14 = { 2556.845f, 381.173f, 111.627f };
			*uParam15 = 4.2f;
			*uParam16 = { 2557.248f, 387.31772f, 108.52299f };
			*uParam17 = 1f;
			break;
		case 14:
			*uParam1 = { 2681.84f, 3282.62f, 54.24f };
			*uParam2 = { 2675.63f, 3286.07f, 57.79f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 2671.06f, 3282.22f, 54.48f };
			*uParam8 = { 2675.1f, 3289.37f, 57.77f };
			*uParam9 = 3.66f;
			*uParam10 = { 2673.23f, 3281.96f, 54.25f };
			*uParam11 = { 2673.85f, 3283.09f, 56.53f };
			*uParam12 = 0.75f;
			*uParam13 = { 2677.411f, 3278.796f, 54.246f };
			*uParam14 = { 2677.978f, 3279.854f, 58.246f };
			*uParam15 = 4.2f;
			*uParam16 = { 2680.9639f, 3285.2715f, 55.14115f };
			*uParam17 = 1f;
			break;
		case 15:
			*uParam1 = { 1731.25f, 6411.58f, 34.04f };
			*uParam2 = { 1734.35f, 6417.97f, 37.58f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1730.29f, 6422.24f, 34.23f };
			*uParam8 = { 1737.68f, 6418.66f, 37.59f };
			*uParam9 = 3.66f;
			*uParam10 = { 1730.17f, 6420.17f, 34.04f };
			*uParam11 = { 1731.33f, 6419.58f, 36.34f };
			*uParam12 = 0.75f;
			*uParam13 = { 1727.219f, 6415.816f, 34.042f };
			*uParam14 = { 1728.296f, 6415.289f, 38.042f };
			*uParam15 = 4.2f;
			*uParam16 = { 1733.8646f, 6412.5664f, 34.937244f };
			*uParam17 = 1f;
			break;
		case 16:
			*uParam1 = { 1964.96f, 3740.86f, 31.38f };
			*uParam2 = { 1961.43f, 3746.95f, 34.89f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1955.68f, 3746.02f, 31.4f };
			*uParam8 = { 1962.38f, 3749.91f, 34.72f };
			*uParam9 = 3.66f;
			*uParam10 = { 1957.3f, 3744.68f, 31.35f };
			*uParam11 = { 1958.38f, 3745.33f, 33.63f };
			*uParam12 = 0.75f;
			*uParam13 = { 1959.255f, 3739.774f, 31.349f };
			*uParam14 = { 1960.274f, 3740.408f, 35.349f };
			*uParam15 = 4.2f;
			*uParam16 = { 1965.6343f, 3743.5498f, 32.243763f };
			*uParam17 = 1f;
			break;
		case 17:
			*uParam1 = { 34.84f, -1345.6f, 27f };
			*uParam2 = { 23.34f, -1345.56f, 32f };
			*uParam3 = 7.2f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 27.44f, -1341.815f, 27.01f };
			*uParam8 = { 27.46f, -1337.815f, 32.01f };
			*uParam9 = 9f;
			*uParam10 = { 24.05f, -1341.89f, 27f };
			*uParam11 = { 26.05f, -1341.87f, 32f };
			*uParam12 = 1f;
			*uParam13 = { 23.566f, -1346.956f, 27f };
			*uParam14 = { 25.065f, -1346.901f, 32f };
			*uParam15 = 4f;
			*uParam16 = { 30.973484f, -1347.1146f, 29.393927f };
			*uParam17 = 1f;
			break;
		case 18:
			*uParam1 = { 376.65f, 323.6f, 102.57f };
			*uParam2 = { 378.35f, 330.47f, 106.12f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 373.45f, 333.81f, 102.58f };
			*uParam8 = { 381.42f, 331.81f, 106.11f };
			*uParam9 = 3.66f;
			*uParam10 = { 373.79f, 331.72f, 102.58f };
			*uParam11 = { 375.03f, 331.41f, 104.86f };
			*uParam12 = 0.75f;
			*uParam13 = { 371.789f, 326.823f, 102.571f };
			*uParam14 = { 372.957f, 326.548f, 106.571f };
			*uParam15 = 4.2f;
			*uParam16 = { 378.9936f, 325.0343f, 103.46642f };
			*uParam17 = 1f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_309()//Position - 0x140AA
{
	func_312();
	func_311();
	func_310();
}

void func_310()//Position - 0x140BE
{
	int iVar0;
	if (iLocal_82 >= 9)
	{
		if (Global_113386.f_20035.f_41 > 3)
		{
			if (iLocal_82 == 9)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			}
			if (iVar0 < 1)
			{
				Local_66.f_464 = 1;
				Global_113386.f_20035.f_41 = 0;
			}
			else
			{
				Local_66.f_464 = 0;
				Global_113386.f_20035.f_41++;
			}
		}
		else
		{
			Global_113386.f_20035.f_41++;
		}
	}
	else
	{
		Global_113386.f_20035.f_41++;
	}
}

void func_311()//Position - 0x14152
{
	int iVar0;
	if (iLocal_82 >= 3)
	{
		if (iLocal_82 == 3)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		}
		if (iVar0 < 1)
		{
			Local_66.f_2.f_12 = 1;
		}
		else
		{
			Local_66.f_2.f_12 = 0;
		}
	}
}

void func_312()//Position - 0x14191
{
	int iVar0;
	if (iLocal_82 >= 6)
	{
		if (iLocal_82 == 6)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		}
		if (iVar0 < 1)
		{
			iLocal_58 = 2;
		}
		else
		{
			iLocal_58 = 1;
		}
	}
}

int func_313()//Position - 0x141C7
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = (iVar0 + Global_113386.f_20035[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_314(var uParam0, var uParam1, int iParam2)//Position - 0x141F7
{
	float fVar0;
	int iVar1;
	float fVar2;
	*iParam2 = 0;
	fVar0 = SYSTEM::VDIST2(__LIB_20__.func_506(0), *uParam0);
	fVar2 = 0f;
	iVar1 = 1;
	while (iVar1 <= (19 - 1))
	{
		fVar2 = SYSTEM::VDIST2(*uParam0, __LIB_20__.func_506(iVar1));
		if (fVar2 < fVar0)
		{
			*iParam2 = iVar1;
			fVar0 = fVar2;
		}
		iVar1++;
	}
	*uParam1 = { __LIB_20__.func_506(*iParam2) };
}

void func_320()//Position - 0x1448F
{
	if (((iLocal_63 == 1 || iLocal_63 == 2) || iLocal_101 == 7) || (ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false) && iLocal_65 == 1))
	{
		if (iLocal_63 == 1)
		{
		}
		if (iLocal_63 == 2)
		{
		}
		if (iLocal_101 == 7)
		{
		}
		if (ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false) && iLocal_65 == 1)
		{
		}
		Global_113386.f_20035.f_21[iLocal_80] = CLOCK::GET_CLOCK_HOURS();
		Global_113386.f_20035.f_42[iLocal_80] = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	}
	if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && __LIB_6__.func_781()) && Local_66.f_468)
	{
		func_327(&iLocal_80, &iLocal_87, &iLocal_81);
	}
	func_326();
	iLocal_87 = 0;
	iLocal_91 = 0;
	iLocal_92 = 0;
	iLocal_93 = 0;
	if (!bLocal_86)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_79, false);
	__LIB_19__.func_856("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */, 1);
	__LIB_19__.func_856("SHR_SNK_TUT" /* GXT: Buy snacks by walking up to the counter. */, 1);
	if ((__LIB_0__.func_1("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */) || __LIB_0__.func_1("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */)) || __LIB_0__.func_1("SHR_SNK_TUT" /* GXT: Buy snacks by walking up to the counter. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__.func_517(Local_66.f_470, 1024))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_98[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_98[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_98[2]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_98[0]));
			OBJECT::DELETE_OBJECT(&(iLocal_98[1]));
			OBJECT::DELETE_OBJECT(&(iLocal_98[2]));
		}
	}
	if (iLocal_100 == 2)
	{
		STREAMING::REMOVE_ANIM_DICT(Local_66.f_486.f_1);
	}
	__LIB_39__.func_579(&Local_96, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_326()//Position - 0x1477E
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_2, false))
	{
		TASK::CLEAR_PED_TASKS(Local_66.f_2);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_2))
	{
		func_220();
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_66.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_86))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_66.f_86));
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_66.f_28, false))
	{
		if (iLocal_53 >= 4)
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_66.f_28, -8f, true);
			ENTITY::APPLY_FORCE_TO_ENTITY(Local_66.f_28, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, true, true, false, false, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_28))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_66.f_28));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_66.f_96.f_1))
	{
		OBJECT::DELETE_OBJECT(&(Local_66.f_96.f_1));
		ENTITY::REMOVE_MODEL_HIDE(Local_66.f_486.f_6, 0.5f, joaat("prop_till_01"), false);
		ENTITY::REMOVE_MODEL_HIDE(Local_66.f_486.f_6, 0.5f, joaat("prop_till_02"), false);
		ENTITY::REMOVE_MODEL_HIDE(Local_66.f_486.f_6, 0.5f, joaat("prop_till_03"), false);
	}
	if (OBJECT::DOES_PICKUP_EXIST(Local_66.f_28.f_1))
	{
		OBJECT::REMOVE_PICKUP(Local_66.f_28.f_1);
	}
	if (__LIB_0__.func_736(&(Local_66.f_477)))
	{
		__LIB_0__.func_735(&(Local_66.f_477));
	}
	if (Local_66.f_466)
	{
		if (!bLocal_86)
		{
			STREAMING::REMOVE_ANIM_DICT(Local_66.f_2.f_15);
		}
		Local_66.f_466 = 0;
	}
}

void func_327(int iParam0, var uParam1, var uParam2)//Position - 0x148BD
{
	int iVar0;
	struct<6> Var1[3];
	struct<8> Var2[2];
	iVar0 = __LIB_0__.func_138(*uParam1, 1, 0);
	StringCopy(&(Var2[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var2[1 /*8*/]), "Location", 32);
	StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	MemCopy(&(Var1[1 /*6*/]), {func_329(iParam0)}, 6);
	if (__LIB_1__.func_29(276, &Var1, &Var2, 2, -1, 0, 0))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, *uParam2, SYSTEM::TO_FLOAT(*uParam2));
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(114, iVar0, SYSTEM::TO_FLOAT(iVar0));
	}
}

struct<8> func_329(var uParam0)//Position - 0x14A6E
{
	struct<8> Var0;
	switch (*uParam0)
	{
		case -2:
		case -1:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			StringCopy(&Var0, "SHR_GAS" /* GXT: LTD Gasoline */, 32);
			break;
		case 5:
			StringCopy(&Var0, "SHR_LIQ1" /* GXT: Scoops Liquor Barn */, 32);
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			StringCopy(&Var0, "SHR_LIQ2" /* GXT: Rob's Liquor */, 32);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			StringCopy(&Var0, "SHR_CONV" /* GXT: 24-7 */, 32);
			break;
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

